#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "apply_clause.h"



apply_clause_t *apply_clause_create(
    list_t *transformations
    ) {
    apply_clause_t *apply_clause_local_var = malloc(sizeof(apply_clause_t));
    if (!apply_clause_local_var) {
        return NULL;
    }
    apply_clause_local_var->transformations = transformations;

    return apply_clause_local_var;
}


void apply_clause_free(apply_clause_t *apply_clause) {
    if(NULL == apply_clause){
        return ;
    }
    listEntry_t *listEntry;
    if (apply_clause->transformations) {
        list_ForEach(listEntry, apply_clause->transformations) {
            transformation_node_free(listEntry->data);
        }
        list_freeList(apply_clause->transformations);
        apply_clause->transformations = NULL;
    }
    free(apply_clause);
}

cJSON *apply_clause_convertToJSON(apply_clause_t *apply_clause) {
    cJSON *item = cJSON_CreateObject();

    // apply_clause->transformations
    if(apply_clause->transformations) {
    cJSON *transformations = cJSON_AddArrayToObject(item, "transformations");
    if(transformations == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *transformationsListEntry;
    if (apply_clause->transformations) {
    list_ForEach(transformationsListEntry, apply_clause->transformations) {
    cJSON *itemLocal = transformation_node_convertToJSON(transformationsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(transformations, itemLocal);
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

apply_clause_t *apply_clause_parseFromJSON(cJSON *apply_clauseJSON){

    apply_clause_t *apply_clause_local_var = NULL;

    // define the local list for apply_clause->transformations
    list_t *transformationsList = NULL;

    // apply_clause->transformations
    cJSON *transformations = cJSON_GetObjectItemCaseSensitive(apply_clauseJSON, "transformations");
    if (transformations) { 
    cJSON *transformations_local_nonprimitive = NULL;
    if(!cJSON_IsArray(transformations)){
        goto end; //nonprimitive container
    }

    transformationsList = list_createList();

    cJSON_ArrayForEach(transformations_local_nonprimitive,transformations )
    {
        if(!cJSON_IsObject(transformations_local_nonprimitive)){
            goto end;
        }
        transformation_node_t *transformationsItem = transformation_node_parseFromJSON(transformations_local_nonprimitive);

        list_addElement(transformationsList, transformationsItem);
    }
    }


    apply_clause_local_var = apply_clause_create (
        transformations ? transformationsList : NULL
        );

    return apply_clause_local_var;
end:
    if (transformationsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, transformationsList) {
            transformation_node_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(transformationsList);
        transformationsList = NULL;
    }
    return NULL;

}
