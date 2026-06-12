#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "i_edm_term.h"


char* i_edm_term_schema_element_kind_ToString(blockchainsservice_i_edm_term_SCHEMAELEMENTKIND_e schema_element_kind) {
    char* schema_element_kindArray[] =  { "NULL", "None", "TypeDefinition", "Term", "Action", "EntityContainer", "Function" };
    return schema_element_kindArray[schema_element_kind];
}

blockchainsservice_i_edm_term_SCHEMAELEMENTKIND_e i_edm_term_schema_element_kind_FromString(char* schema_element_kind){
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

i_edm_term_t *i_edm_term_create(
    char *name,
    blockchainsservice_i_edm_term_SCHEMAELEMENTKIND_e schema_element_kind,
    char *_namespace,
    i_edm_type_reference_t *type,
    char *applies_to,
    char *default_value
    ) {
    i_edm_term_t *i_edm_term_local_var = malloc(sizeof(i_edm_term_t));
    if (!i_edm_term_local_var) {
        return NULL;
    }
    i_edm_term_local_var->name = name;
    i_edm_term_local_var->schema_element_kind = schema_element_kind;
    i_edm_term_local_var->_namespace = _namespace;
    i_edm_term_local_var->type = type;
    i_edm_term_local_var->applies_to = applies_to;
    i_edm_term_local_var->default_value = default_value;

    return i_edm_term_local_var;
}


void i_edm_term_free(i_edm_term_t *i_edm_term) {
    if(NULL == i_edm_term){
        return ;
    }
    listEntry_t *listEntry;
    if (i_edm_term->name) {
        free(i_edm_term->name);
        i_edm_term->name = NULL;
    }
    if (i_edm_term->_namespace) {
        free(i_edm_term->_namespace);
        i_edm_term->_namespace = NULL;
    }
    if (i_edm_term->type) {
        i_edm_type_reference_free(i_edm_term->type);
        i_edm_term->type = NULL;
    }
    if (i_edm_term->applies_to) {
        free(i_edm_term->applies_to);
        i_edm_term->applies_to = NULL;
    }
    if (i_edm_term->default_value) {
        free(i_edm_term->default_value);
        i_edm_term->default_value = NULL;
    }
    free(i_edm_term);
}

cJSON *i_edm_term_convertToJSON(i_edm_term_t *i_edm_term) {
    cJSON *item = cJSON_CreateObject();

    // i_edm_term->name
    if(i_edm_term->name) {
    if(cJSON_AddStringToObject(item, "name", i_edm_term->name) == NULL) {
    goto fail; //String
    }
    }


    // i_edm_term->schema_element_kind
    if(i_edm_term->schema_element_kind != blockchainsservice_i_edm_term_SCHEMAELEMENTKIND_NULL) {
    if(cJSON_AddStringToObject(item, "schemaElementKind", schema_element_kindi_edm_term_ToString(i_edm_term->schema_element_kind)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // i_edm_term->_namespace
    if(i_edm_term->_namespace) {
    if(cJSON_AddStringToObject(item, "namespace", i_edm_term->_namespace) == NULL) {
    goto fail; //String
    }
    }


    // i_edm_term->type
    if(i_edm_term->type) {
    cJSON *type_local_JSON = i_edm_type_reference_convertToJSON(i_edm_term->type);
    if(type_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "type", type_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // i_edm_term->applies_to
    if(i_edm_term->applies_to) {
    if(cJSON_AddStringToObject(item, "appliesTo", i_edm_term->applies_to) == NULL) {
    goto fail; //String
    }
    }


    // i_edm_term->default_value
    if(i_edm_term->default_value) {
    if(cJSON_AddStringToObject(item, "defaultValue", i_edm_term->default_value) == NULL) {
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

i_edm_term_t *i_edm_term_parseFromJSON(cJSON *i_edm_termJSON){

    i_edm_term_t *i_edm_term_local_var = NULL;

    // define the local variable for i_edm_term->type
    i_edm_type_reference_t *type_local_nonprim = NULL;

    // i_edm_term->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(i_edm_termJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // i_edm_term->schema_element_kind
    cJSON *schema_element_kind = cJSON_GetObjectItemCaseSensitive(i_edm_termJSON, "schemaElementKind");
    blockchainsservice_i_edm_term_SCHEMAELEMENTKIND_e schema_element_kindVariable;
    if (schema_element_kind) { 
    if(!cJSON_IsString(schema_element_kind))
    {
    goto end; //Enum
    }
    schema_element_kindVariable = i_edm_term_schema_element_kind_FromString(schema_element_kind->valuestring);
    }

    // i_edm_term->_namespace
    cJSON *_namespace = cJSON_GetObjectItemCaseSensitive(i_edm_termJSON, "namespace");
    if (_namespace) { 
    if(!cJSON_IsString(_namespace) && !cJSON_IsNull(_namespace))
    {
    goto end; //String
    }
    }

    // i_edm_term->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(i_edm_termJSON, "type");
    if (type) { 
    type_local_nonprim = i_edm_type_reference_parseFromJSON(type); //nonprimitive
    }

    // i_edm_term->applies_to
    cJSON *applies_to = cJSON_GetObjectItemCaseSensitive(i_edm_termJSON, "appliesTo");
    if (applies_to) { 
    if(!cJSON_IsString(applies_to) && !cJSON_IsNull(applies_to))
    {
    goto end; //String
    }
    }

    // i_edm_term->default_value
    cJSON *default_value = cJSON_GetObjectItemCaseSensitive(i_edm_termJSON, "defaultValue");
    if (default_value) { 
    if(!cJSON_IsString(default_value) && !cJSON_IsNull(default_value))
    {
    goto end; //String
    }
    }


    i_edm_term_local_var = i_edm_term_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        schema_element_kind ? schema_element_kindVariable : blockchainsservice_i_edm_term_SCHEMAELEMENTKIND_NULL,
        _namespace && !cJSON_IsNull(_namespace) ? strdup(_namespace->valuestring) : NULL,
        type ? type_local_nonprim : NULL,
        applies_to && !cJSON_IsNull(applies_to) ? strdup(applies_to->valuestring) : NULL,
        default_value && !cJSON_IsNull(default_value) ? strdup(default_value->valuestring) : NULL
        );

    return i_edm_term_local_var;
end:
    if (type_local_nonprim) {
        i_edm_type_reference_free(type_local_nonprim);
        type_local_nonprim = NULL;
    }
    return NULL;

}
