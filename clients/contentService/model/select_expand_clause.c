#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "select_expand_clause.h"



select_expand_clause_t *select_expand_clause_create(
    list_t *selected_items,
    int all_selected
    ) {
    select_expand_clause_t *select_expand_clause_local_var = malloc(sizeof(select_expand_clause_t));
    if (!select_expand_clause_local_var) {
        return NULL;
    }
    select_expand_clause_local_var->selected_items = selected_items;
    select_expand_clause_local_var->all_selected = all_selected;

    return select_expand_clause_local_var;
}


void select_expand_clause_free(select_expand_clause_t *select_expand_clause) {
    if(NULL == select_expand_clause){
        return ;
    }
    listEntry_t *listEntry;
    if (select_expand_clause->selected_items) {
        list_ForEach(listEntry, select_expand_clause->selected_items) {
            object_free(listEntry->data);
        }
        list_freeList(select_expand_clause->selected_items);
        select_expand_clause->selected_items = NULL;
    }
    free(select_expand_clause);
}

cJSON *select_expand_clause_convertToJSON(select_expand_clause_t *select_expand_clause) {
    cJSON *item = cJSON_CreateObject();

    // select_expand_clause->selected_items
    if(select_expand_clause->selected_items) {
    cJSON *selected_items = cJSON_AddArrayToObject(item, "selectedItems");
    if(selected_items == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *selected_itemsListEntry;
    if (select_expand_clause->selected_items) {
    list_ForEach(selected_itemsListEntry, select_expand_clause->selected_items) {
    cJSON *itemLocal = object_convertToJSON(selected_itemsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(selected_items, itemLocal);
    }
    }
    }


    // select_expand_clause->all_selected
    if(select_expand_clause->all_selected) {
    if(cJSON_AddBoolToObject(item, "allSelected", select_expand_clause->all_selected) == NULL) {
    goto fail; //Bool
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

select_expand_clause_t *select_expand_clause_parseFromJSON(cJSON *select_expand_clauseJSON){

    select_expand_clause_t *select_expand_clause_local_var = NULL;

    // define the local list for select_expand_clause->selected_items
    list_t *selected_itemsList = NULL;

    // select_expand_clause->selected_items
    cJSON *selected_items = cJSON_GetObjectItemCaseSensitive(select_expand_clauseJSON, "selectedItems");
    if (selected_items) { 
    cJSON *selected_items_local_nonprimitive = NULL;
    if(!cJSON_IsArray(selected_items)){
        goto end; //nonprimitive container
    }

    selected_itemsList = list_createList();

    cJSON_ArrayForEach(selected_items_local_nonprimitive,selected_items )
    {
        if(!cJSON_IsObject(selected_items_local_nonprimitive)){
            goto end;
        }
        object_t *selected_itemsItem = object_parseFromJSON(selected_items_local_nonprimitive);

        list_addElement(selected_itemsList, selected_itemsItem);
    }
    }

    // select_expand_clause->all_selected
    cJSON *all_selected = cJSON_GetObjectItemCaseSensitive(select_expand_clauseJSON, "allSelected");
    if (all_selected) { 
    if(!cJSON_IsBool(all_selected))
    {
    goto end; //Bool
    }
    }


    select_expand_clause_local_var = select_expand_clause_create (
        selected_items ? selected_itemsList : NULL,
        all_selected ? all_selected->valueint : 0
        );

    return select_expand_clause_local_var;
end:
    if (selected_itemsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, selected_itemsList) {
            object_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(selected_itemsList);
        selected_itemsList = NULL;
    }
    return NULL;

}
