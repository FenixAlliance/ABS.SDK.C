#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "i_edm_schema_element.h"


char* i_edm_schema_element_schema_element_kind_ToString(contentservice_i_edm_schema_element_SCHEMAELEMENTKIND_e schema_element_kind) {
    char* schema_element_kindArray[] =  { "NULL", "None", "TypeDefinition", "Term", "Action", "EntityContainer", "Function" };
    return schema_element_kindArray[schema_element_kind];
}

contentservice_i_edm_schema_element_SCHEMAELEMENTKIND_e i_edm_schema_element_schema_element_kind_FromString(char* schema_element_kind){
    int stringToReturn = 0;
    char *schema_element_kindArray[] =  { "NULL", "None", "TypeDefinition", "Term", "Action", "EntityContainer", "Function" };
    size_t sizeofArray = sizeof(schema_element_kindArray) / sizeof(schema_element_kindArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(schema_element_kind, schema_element_kindArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

i_edm_schema_element_t *i_edm_schema_element_create(
    char *name,
    contentservice_i_edm_schema_element_SCHEMAELEMENTKIND_e schema_element_kind,
    char *_namespace
    ) {
    i_edm_schema_element_t *i_edm_schema_element_local_var = malloc(sizeof(i_edm_schema_element_t));
    if (!i_edm_schema_element_local_var) {
        return NULL;
    }
    i_edm_schema_element_local_var->name = name;
    i_edm_schema_element_local_var->schema_element_kind = schema_element_kind;
    i_edm_schema_element_local_var->_namespace = _namespace;

    return i_edm_schema_element_local_var;
}


void i_edm_schema_element_free(i_edm_schema_element_t *i_edm_schema_element) {
    if(NULL == i_edm_schema_element){
        return ;
    }
    listEntry_t *listEntry;
    if (i_edm_schema_element->name) {
        free(i_edm_schema_element->name);
        i_edm_schema_element->name = NULL;
    }
    if (i_edm_schema_element->_namespace) {
        free(i_edm_schema_element->_namespace);
        i_edm_schema_element->_namespace = NULL;
    }
    free(i_edm_schema_element);
}

cJSON *i_edm_schema_element_convertToJSON(i_edm_schema_element_t *i_edm_schema_element) {
    cJSON *item = cJSON_CreateObject();

    // i_edm_schema_element->name
    if(i_edm_schema_element->name) {
    if(cJSON_AddStringToObject(item, "name", i_edm_schema_element->name) == NULL) {
    goto fail; //String
    }
    }


    // i_edm_schema_element->schema_element_kind
    if(i_edm_schema_element->schema_element_kind != contentservice_i_edm_schema_element_SCHEMAELEMENTKIND_NULL) {
    if(cJSON_AddStringToObject(item, "schemaElementKind", schema_element_kindi_edm_schema_element_ToString(i_edm_schema_element->schema_element_kind)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // i_edm_schema_element->_namespace
    if(i_edm_schema_element->_namespace) {
    if(cJSON_AddStringToObject(item, "namespace", i_edm_schema_element->_namespace) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

i_edm_schema_element_t *i_edm_schema_element_parseFromJSON(cJSON *i_edm_schema_elementJSON){

    i_edm_schema_element_t *i_edm_schema_element_local_var = NULL;

    // i_edm_schema_element->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(i_edm_schema_elementJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // i_edm_schema_element->schema_element_kind
    cJSON *schema_element_kind = cJSON_GetObjectItemCaseSensitive(i_edm_schema_elementJSON, "schemaElementKind");
    contentservice_i_edm_schema_element_SCHEMAELEMENTKIND_e schema_element_kindVariable;
    if (schema_element_kind) { 
    if(!cJSON_IsString(schema_element_kind))
    {
    goto end; //Enum
    }
    schema_element_kindVariable = i_edm_schema_element_schema_element_kind_FromString(schema_element_kind->valuestring);
    }

    // i_edm_schema_element->_namespace
    cJSON *_namespace = cJSON_GetObjectItemCaseSensitive(i_edm_schema_elementJSON, "namespace");
    if (_namespace) { 
    if(!cJSON_IsString(_namespace) && !cJSON_IsNull(_namespace))
    {
    goto end; //String
    }
    }


    i_edm_schema_element_local_var = i_edm_schema_element_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        schema_element_kind ? schema_element_kindVariable : contentservice_i_edm_schema_element_SCHEMAELEMENTKIND_NULL,
        _namespace && !cJSON_IsNull(_namespace) ? strdup(_namespace->valuestring) : NULL
        );

    return i_edm_schema_element_local_var;
end:
    return NULL;

}
