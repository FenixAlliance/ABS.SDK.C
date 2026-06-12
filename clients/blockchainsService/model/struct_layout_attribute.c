#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "struct_layout_attribute.h"


char* struct_layout_attribute_value_ToString(blockchainsservice_struct_layout_attribute_VALUE_e value) {
    char* valueArray[] =  { "NULL", "Sequential", "Explicit", "Auto" };
    return valueArray[value];
}

blockchainsservice_struct_layout_attribute_VALUE_e struct_layout_attribute_value_FromString(char* value){
    int stringToReturn = 0;
    char *valueArray[] =  { "NULL", "Sequential", "Explicit", "Auto" };
    size_t sizeofArray = sizeof(valueArray) / sizeof(valueArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(value, valueArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

struct_layout_attribute_t *struct_layout_attribute_create(
    any_type_t *type_id,
    blockchainsservice_struct_layout_attribute_VALUE_e value
    ) {
    struct_layout_attribute_t *struct_layout_attribute_local_var = malloc(sizeof(struct_layout_attribute_t));
    if (!struct_layout_attribute_local_var) {
        return NULL;
    }
    struct_layout_attribute_local_var->type_id = type_id;
    struct_layout_attribute_local_var->value = value;

    return struct_layout_attribute_local_var;
}


void struct_layout_attribute_free(struct_layout_attribute_t *struct_layout_attribute) {
    if(NULL == struct_layout_attribute){
        return ;
    }
    listEntry_t *listEntry;
    if (struct_layout_attribute->type_id) {
        _free(struct_layout_attribute->type_id);
        struct_layout_attribute->type_id = NULL;
    }
    free(struct_layout_attribute);
}

cJSON *struct_layout_attribute_convertToJSON(struct_layout_attribute_t *struct_layout_attribute) {
    cJSON *item = cJSON_CreateObject();

    // struct_layout_attribute->type_id
    if(struct_layout_attribute->type_id) {
    cJSON *type_id_local_JSON = _convertToJSON(struct_layout_attribute->type_id);
    if(type_id_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "typeId", type_id_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // struct_layout_attribute->value
    if(struct_layout_attribute->value != blockchainsservice_struct_layout_attribute_VALUE_NULL) {
    if(cJSON_AddStringToObject(item, "value", valuestruct_layout_attribute_ToString(struct_layout_attribute->value)) == NULL)
    {
    goto fail; //Enum
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

struct_layout_attribute_t *struct_layout_attribute_parseFromJSON(cJSON *struct_layout_attributeJSON){

    struct_layout_attribute_t *struct_layout_attribute_local_var = NULL;

    // define the local variable for struct_layout_attribute->type_id
    _t *type_id_local_nonprim = NULL;

    // struct_layout_attribute->type_id
    cJSON *type_id = cJSON_GetObjectItemCaseSensitive(struct_layout_attributeJSON, "typeId");
    if (type_id) { 
    type_id_local_nonprim = _parseFromJSON(type_id); //custom
    }

    // struct_layout_attribute->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(struct_layout_attributeJSON, "value");
    blockchainsservice_struct_layout_attribute_VALUE_e valueVariable;
    if (value) { 
    if(!cJSON_IsString(value))
    {
    goto end; //Enum
    }
    valueVariable = struct_layout_attribute_value_FromString(value->valuestring);
    }


    struct_layout_attribute_local_var = struct_layout_attribute_create (
        type_id ? type_id_local_nonprim : NULL,
        value ? valueVariable : blockchainsservice_struct_layout_attribute_VALUE_NULL
        );

    return struct_layout_attribute_local_var;
end:
    if (type_id_local_nonprim) {
        _free(type_id_local_nonprim);
        type_id_local_nonprim = NULL;
    }
    return NULL;

}
