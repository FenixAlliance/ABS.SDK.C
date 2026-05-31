#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "i_edm_type.h"


char* i_edm_type_type_kind_ToString(contentservice_i_edm_type_TYPEKIND_e type_kind) {
    char* type_kindArray[] =  { "NULL", "None", "Primitive", "Entity", "Complex", "Collection", "EntityReference", "Enum", "TypeDefinition", "Untyped", "Path" };
    return type_kindArray[type_kind];
}

contentservice_i_edm_type_TYPEKIND_e i_edm_type_type_kind_FromString(char* type_kind){
    int stringToReturn = 0;
    char *type_kindArray[] =  { "NULL", "None", "Primitive", "Entity", "Complex", "Collection", "EntityReference", "Enum", "TypeDefinition", "Untyped", "Path" };
    size_t sizeofArray = sizeof(type_kindArray) / sizeof(type_kindArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(type_kind, type_kindArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

i_edm_type_t *i_edm_type_create(
    contentservice_i_edm_type_TYPEKIND_e type_kind
    ) {
    i_edm_type_t *i_edm_type_local_var = malloc(sizeof(i_edm_type_t));
    if (!i_edm_type_local_var) {
        return NULL;
    }
    i_edm_type_local_var->type_kind = type_kind;

    return i_edm_type_local_var;
}


void i_edm_type_free(i_edm_type_t *i_edm_type) {
    if(NULL == i_edm_type){
        return ;
    }
    listEntry_t *listEntry;
    free(i_edm_type);
}

cJSON *i_edm_type_convertToJSON(i_edm_type_t *i_edm_type) {
    cJSON *item = cJSON_CreateObject();

    // i_edm_type->type_kind
    if(i_edm_type->type_kind != contentservice_i_edm_type_TYPEKIND_NULL) {
    if(cJSON_AddStringToObject(item, "typeKind", type_kindi_edm_type_ToString(i_edm_type->type_kind)) == NULL)
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

i_edm_type_t *i_edm_type_parseFromJSON(cJSON *i_edm_typeJSON){

    i_edm_type_t *i_edm_type_local_var = NULL;

    // i_edm_type->type_kind
    cJSON *type_kind = cJSON_GetObjectItemCaseSensitive(i_edm_typeJSON, "typeKind");
    contentservice_i_edm_type_TYPEKIND_e type_kindVariable;
    if (type_kind) { 
    if(!cJSON_IsString(type_kind))
    {
    goto end; //Enum
    }
    type_kindVariable = i_edm_type_type_kind_FromString(type_kind->valuestring);
    }


    i_edm_type_local_var = i_edm_type_create (
        type_kind ? type_kindVariable : contentservice_i_edm_type_TYPEKIND_NULL
        );

    return i_edm_type_local_var;
end:
    return NULL;

}
