#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "i_edm_referential_constraint.h"



i_edm_referential_constraint_t *i_edm_referential_constraint_create(
    list_t *property_pairs
    ) {
    i_edm_referential_constraint_t *i_edm_referential_constraint_local_var = malloc(sizeof(i_edm_referential_constraint_t));
    if (!i_edm_referential_constraint_local_var) {
        return NULL;
    }
    i_edm_referential_constraint_local_var->property_pairs = property_pairs;

    return i_edm_referential_constraint_local_var;
}


void i_edm_referential_constraint_free(i_edm_referential_constraint_t *i_edm_referential_constraint) {
    if(NULL == i_edm_referential_constraint){
        return ;
    }
    listEntry_t *listEntry;
    if (i_edm_referential_constraint->property_pairs) {
        list_ForEach(listEntry, i_edm_referential_constraint->property_pairs) {
            edm_referential_constraint_property_pair_free(listEntry->data);
        }
        list_freeList(i_edm_referential_constraint->property_pairs);
        i_edm_referential_constraint->property_pairs = NULL;
    }
    free(i_edm_referential_constraint);
}

cJSON *i_edm_referential_constraint_convertToJSON(i_edm_referential_constraint_t *i_edm_referential_constraint) {
    cJSON *item = cJSON_CreateObject();

    // i_edm_referential_constraint->property_pairs
    if(i_edm_referential_constraint->property_pairs) {
    cJSON *property_pairs = cJSON_AddArrayToObject(item, "propertyPairs");
    if(property_pairs == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *property_pairsListEntry;
    if (i_edm_referential_constraint->property_pairs) {
    list_ForEach(property_pairsListEntry, i_edm_referential_constraint->property_pairs) {
    cJSON *itemLocal = edm_referential_constraint_property_pair_convertToJSON(property_pairsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(property_pairs, itemLocal);
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

i_edm_referential_constraint_t *i_edm_referential_constraint_parseFromJSON(cJSON *i_edm_referential_constraintJSON){

    i_edm_referential_constraint_t *i_edm_referential_constraint_local_var = NULL;

    // define the local list for i_edm_referential_constraint->property_pairs
    list_t *property_pairsList = NULL;

    // i_edm_referential_constraint->property_pairs
    cJSON *property_pairs = cJSON_GetObjectItemCaseSensitive(i_edm_referential_constraintJSON, "propertyPairs");
    if (property_pairs) { 
    cJSON *property_pairs_local_nonprimitive = NULL;
    if(!cJSON_IsArray(property_pairs)){
        goto end; //nonprimitive container
    }

    property_pairsList = list_createList();

    cJSON_ArrayForEach(property_pairs_local_nonprimitive,property_pairs )
    {
        if(!cJSON_IsObject(property_pairs_local_nonprimitive)){
            goto end;
        }
        edm_referential_constraint_property_pair_t *property_pairsItem = edm_referential_constraint_property_pair_parseFromJSON(property_pairs_local_nonprimitive);

        list_addElement(property_pairsList, property_pairsItem);
    }
    }


    i_edm_referential_constraint_local_var = i_edm_referential_constraint_create (
        property_pairs ? property_pairsList : NULL
        );

    return i_edm_referential_constraint_local_var;
end:
    if (property_pairsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, property_pairsList) {
            edm_referential_constraint_property_pair_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(property_pairsList);
        property_pairsList = NULL;
    }
    return NULL;

}
