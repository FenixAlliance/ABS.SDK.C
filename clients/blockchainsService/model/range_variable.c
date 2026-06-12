#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "range_variable.h"



range_variable_t *range_variable_create(
    char *name,
    i_edm_type_reference_t *type_reference,
    int kind
    ) {
    range_variable_t *range_variable_local_var = malloc(sizeof(range_variable_t));
    if (!range_variable_local_var) {
        return NULL;
    }
    range_variable_local_var->name = name;
    range_variable_local_var->type_reference = type_reference;
    range_variable_local_var->kind = kind;

    return range_variable_local_var;
}


void range_variable_free(range_variable_t *range_variable) {
    if(NULL == range_variable){
        return ;
    }
    listEntry_t *listEntry;
    if (range_variable->name) {
        free(range_variable->name);
        range_variable->name = NULL;
    }
    if (range_variable->type_reference) {
        i_edm_type_reference_free(range_variable->type_reference);
        range_variable->type_reference = NULL;
    }
    free(range_variable);
}

cJSON *range_variable_convertToJSON(range_variable_t *range_variable) {
    cJSON *item = cJSON_CreateObject();

    // range_variable->name
    if(range_variable->name) {
    if(cJSON_AddStringToObject(item, "name", range_variable->name) == NULL) {
    goto fail; //String
    }
    }


    // range_variable->type_reference
    if(range_variable->type_reference) {
    cJSON *type_reference_local_JSON = i_edm_type_reference_convertToJSON(range_variable->type_reference);
    if(type_reference_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "typeReference", type_reference_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // range_variable->kind
    if(range_variable->kind) {
    if(cJSON_AddNumberToObject(item, "kind", range_variable->kind) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

range_variable_t *range_variable_parseFromJSON(cJSON *range_variableJSON){

    range_variable_t *range_variable_local_var = NULL;

    // define the local variable for range_variable->type_reference
    i_edm_type_reference_t *type_reference_local_nonprim = NULL;

    // range_variable->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(range_variableJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // range_variable->type_reference
    cJSON *type_reference = cJSON_GetObjectItemCaseSensitive(range_variableJSON, "typeReference");
    if (type_reference) { 
    type_reference_local_nonprim = i_edm_type_reference_parseFromJSON(type_reference); //nonprimitive
    }

    // range_variable->kind
    cJSON *kind = cJSON_GetObjectItemCaseSensitive(range_variableJSON, "kind");
    if (kind) { 
    if(!cJSON_IsNumber(kind))
    {
    goto end; //Numeric
    }
    }


    range_variable_local_var = range_variable_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        type_reference ? type_reference_local_nonprim : NULL,
        kind ? kind->valuedouble : 0
        );

    return range_variable_local_var;
end:
    if (type_reference_local_nonprim) {
        i_edm_type_reference_free(type_reference_local_nonprim);
        type_reference_local_nonprim = NULL;
    }
    return NULL;

}
