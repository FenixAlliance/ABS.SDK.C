#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "i_edm_type_reference.h"



i_edm_type_reference_t *i_edm_type_reference_create(
    int is_nullable,
    i_edm_type_t *definition
    ) {
    i_edm_type_reference_t *i_edm_type_reference_local_var = malloc(sizeof(i_edm_type_reference_t));
    if (!i_edm_type_reference_local_var) {
        return NULL;
    }
    i_edm_type_reference_local_var->is_nullable = is_nullable;
    i_edm_type_reference_local_var->definition = definition;

    return i_edm_type_reference_local_var;
}


void i_edm_type_reference_free(i_edm_type_reference_t *i_edm_type_reference) {
    if(NULL == i_edm_type_reference){
        return ;
    }
    listEntry_t *listEntry;
    if (i_edm_type_reference->definition) {
        i_edm_type_free(i_edm_type_reference->definition);
        i_edm_type_reference->definition = NULL;
    }
    free(i_edm_type_reference);
}

cJSON *i_edm_type_reference_convertToJSON(i_edm_type_reference_t *i_edm_type_reference) {
    cJSON *item = cJSON_CreateObject();

    // i_edm_type_reference->is_nullable
    if(i_edm_type_reference->is_nullable) {
    if(cJSON_AddBoolToObject(item, "isNullable", i_edm_type_reference->is_nullable) == NULL) {
    goto fail; //Bool
    }
    }


    // i_edm_type_reference->definition
    if(i_edm_type_reference->definition) {
    cJSON *definition_local_JSON = i_edm_type_convertToJSON(i_edm_type_reference->definition);
    if(definition_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "definition", definition_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

i_edm_type_reference_t *i_edm_type_reference_parseFromJSON(cJSON *i_edm_type_referenceJSON){

    i_edm_type_reference_t *i_edm_type_reference_local_var = NULL;

    // define the local variable for i_edm_type_reference->definition
    i_edm_type_t *definition_local_nonprim = NULL;

    // i_edm_type_reference->is_nullable
    cJSON *is_nullable = cJSON_GetObjectItemCaseSensitive(i_edm_type_referenceJSON, "isNullable");
    if (is_nullable) { 
    if(!cJSON_IsBool(is_nullable))
    {
    goto end; //Bool
    }
    }

    // i_edm_type_reference->definition
    cJSON *definition = cJSON_GetObjectItemCaseSensitive(i_edm_type_referenceJSON, "definition");
    if (definition) { 
    definition_local_nonprim = i_edm_type_parseFromJSON(definition); //nonprimitive
    }


    i_edm_type_reference_local_var = i_edm_type_reference_create (
        is_nullable ? is_nullable->valueint : 0,
        definition ? definition_local_nonprim : NULL
        );

    return i_edm_type_reference_local_var;
end:
    if (definition_local_nonprim) {
        i_edm_type_free(definition_local_nonprim);
        definition_local_nonprim = NULL;
    }
    return NULL;

}
