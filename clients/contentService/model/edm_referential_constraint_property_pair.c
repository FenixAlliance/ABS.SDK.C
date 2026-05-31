#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "edm_referential_constraint_property_pair.h"



edm_referential_constraint_property_pair_t *edm_referential_constraint_property_pair_create(
    i_edm_structural_property_t *dependent_property,
    i_edm_structural_property_t *principal_property
    ) {
    edm_referential_constraint_property_pair_t *edm_referential_constraint_property_pair_local_var = malloc(sizeof(edm_referential_constraint_property_pair_t));
    if (!edm_referential_constraint_property_pair_local_var) {
        return NULL;
    }
    edm_referential_constraint_property_pair_local_var->dependent_property = dependent_property;
    edm_referential_constraint_property_pair_local_var->principal_property = principal_property;

    return edm_referential_constraint_property_pair_local_var;
}


void edm_referential_constraint_property_pair_free(edm_referential_constraint_property_pair_t *edm_referential_constraint_property_pair) {
    if(NULL == edm_referential_constraint_property_pair){
        return ;
    }
    listEntry_t *listEntry;
    if (edm_referential_constraint_property_pair->dependent_property) {
        i_edm_structural_property_free(edm_referential_constraint_property_pair->dependent_property);
        edm_referential_constraint_property_pair->dependent_property = NULL;
    }
    if (edm_referential_constraint_property_pair->principal_property) {
        i_edm_structural_property_free(edm_referential_constraint_property_pair->principal_property);
        edm_referential_constraint_property_pair->principal_property = NULL;
    }
    free(edm_referential_constraint_property_pair);
}

cJSON *edm_referential_constraint_property_pair_convertToJSON(edm_referential_constraint_property_pair_t *edm_referential_constraint_property_pair) {
    cJSON *item = cJSON_CreateObject();

    // edm_referential_constraint_property_pair->dependent_property
    if(edm_referential_constraint_property_pair->dependent_property) {
    cJSON *dependent_property_local_JSON = i_edm_structural_property_convertToJSON(edm_referential_constraint_property_pair->dependent_property);
    if(dependent_property_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "dependentProperty", dependent_property_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // edm_referential_constraint_property_pair->principal_property
    if(edm_referential_constraint_property_pair->principal_property) {
    cJSON *principal_property_local_JSON = i_edm_structural_property_convertToJSON(edm_referential_constraint_property_pair->principal_property);
    if(principal_property_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "principalProperty", principal_property_local_JSON);
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

edm_referential_constraint_property_pair_t *edm_referential_constraint_property_pair_parseFromJSON(cJSON *edm_referential_constraint_property_pairJSON){

    edm_referential_constraint_property_pair_t *edm_referential_constraint_property_pair_local_var = NULL;

    // define the local variable for edm_referential_constraint_property_pair->dependent_property
    i_edm_structural_property_t *dependent_property_local_nonprim = NULL;

    // define the local variable for edm_referential_constraint_property_pair->principal_property
    i_edm_structural_property_t *principal_property_local_nonprim = NULL;

    // edm_referential_constraint_property_pair->dependent_property
    cJSON *dependent_property = cJSON_GetObjectItemCaseSensitive(edm_referential_constraint_property_pairJSON, "dependentProperty");
    if (dependent_property) { 
    dependent_property_local_nonprim = i_edm_structural_property_parseFromJSON(dependent_property); //nonprimitive
    }

    // edm_referential_constraint_property_pair->principal_property
    cJSON *principal_property = cJSON_GetObjectItemCaseSensitive(edm_referential_constraint_property_pairJSON, "principalProperty");
    if (principal_property) { 
    principal_property_local_nonprim = i_edm_structural_property_parseFromJSON(principal_property); //nonprimitive
    }


    edm_referential_constraint_property_pair_local_var = edm_referential_constraint_property_pair_create (
        dependent_property ? dependent_property_local_nonprim : NULL,
        principal_property ? principal_property_local_nonprim : NULL
        );

    return edm_referential_constraint_property_pair_local_var;
end:
    if (dependent_property_local_nonprim) {
        i_edm_structural_property_free(dependent_property_local_nonprim);
        dependent_property_local_nonprim = NULL;
    }
    if (principal_property_local_nonprim) {
        i_edm_structural_property_free(principal_property_local_nonprim);
        principal_property_local_nonprim = NULL;
    }
    return NULL;

}
