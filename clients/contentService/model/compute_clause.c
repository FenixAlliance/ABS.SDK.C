#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "compute_clause.h"



compute_clause_t *compute_clause_create(
    list_t *computed_items
    ) {
    compute_clause_t *compute_clause_local_var = malloc(sizeof(compute_clause_t));
    if (!compute_clause_local_var) {
        return NULL;
    }
    compute_clause_local_var->computed_items = computed_items;

    return compute_clause_local_var;
}


void compute_clause_free(compute_clause_t *compute_clause) {
    if(NULL == compute_clause){
        return ;
    }
    listEntry_t *listEntry;
    if (compute_clause->computed_items) {
        list_ForEach(listEntry, compute_clause->computed_items) {
            compute_expression_free(listEntry->data);
        }
        list_freeList(compute_clause->computed_items);
        compute_clause->computed_items = NULL;
    }
    free(compute_clause);
}

cJSON *compute_clause_convertToJSON(compute_clause_t *compute_clause) {
    cJSON *item = cJSON_CreateObject();

    // compute_clause->computed_items
    if(compute_clause->computed_items) {
    cJSON *computed_items = cJSON_AddArrayToObject(item, "computedItems");
    if(computed_items == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *computed_itemsListEntry;
    if (compute_clause->computed_items) {
    list_ForEach(computed_itemsListEntry, compute_clause->computed_items) {
    cJSON *itemLocal = compute_expression_convertToJSON(computed_itemsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(computed_items, itemLocal);
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

compute_clause_t *compute_clause_parseFromJSON(cJSON *compute_clauseJSON){

    compute_clause_t *compute_clause_local_var = NULL;

    // define the local list for compute_clause->computed_items
    list_t *computed_itemsList = NULL;

    // compute_clause->computed_items
    cJSON *computed_items = cJSON_GetObjectItemCaseSensitive(compute_clauseJSON, "computedItems");
    if (computed_items) { 
    cJSON *computed_items_local_nonprimitive = NULL;
    if(!cJSON_IsArray(computed_items)){
        goto end; //nonprimitive container
    }

    computed_itemsList = list_createList();

    cJSON_ArrayForEach(computed_items_local_nonprimitive,computed_items )
    {
        if(!cJSON_IsObject(computed_items_local_nonprimitive)){
            goto end;
        }
        compute_expression_t *computed_itemsItem = compute_expression_parseFromJSON(computed_items_local_nonprimitive);

        list_addElement(computed_itemsList, computed_itemsItem);
    }
    }


    compute_clause_local_var = compute_clause_create (
        computed_items ? computed_itemsList : NULL
        );

    return compute_clause_local_var;
end:
    if (computed_itemsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, computed_itemsList) {
            compute_expression_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(computed_itemsList);
        computed_itemsList = NULL;
    }
    return NULL;

}
