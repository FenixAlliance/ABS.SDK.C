#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "batch_stock_item_update_request.h"



batch_stock_item_update_request_t *batch_stock_item_update_request_create(
    list_t *item_ids,
    int published,
    int taxable,
    list_t *add_tax_policy_ids,
    list_t *remove_tax_policy_ids
    ) {
    batch_stock_item_update_request_t *batch_stock_item_update_request_local_var = malloc(sizeof(batch_stock_item_update_request_t));
    if (!batch_stock_item_update_request_local_var) {
        return NULL;
    }
    batch_stock_item_update_request_local_var->item_ids = item_ids;
    batch_stock_item_update_request_local_var->published = published;
    batch_stock_item_update_request_local_var->taxable = taxable;
    batch_stock_item_update_request_local_var->add_tax_policy_ids = add_tax_policy_ids;
    batch_stock_item_update_request_local_var->remove_tax_policy_ids = remove_tax_policy_ids;

    return batch_stock_item_update_request_local_var;
}


void batch_stock_item_update_request_free(batch_stock_item_update_request_t *batch_stock_item_update_request) {
    if(NULL == batch_stock_item_update_request){
        return ;
    }
    listEntry_t *listEntry;
    if (batch_stock_item_update_request->item_ids) {
        list_ForEach(listEntry, batch_stock_item_update_request->item_ids) {
            free(listEntry->data);
        }
        list_freeList(batch_stock_item_update_request->item_ids);
        batch_stock_item_update_request->item_ids = NULL;
    }
    if (batch_stock_item_update_request->add_tax_policy_ids) {
        list_ForEach(listEntry, batch_stock_item_update_request->add_tax_policy_ids) {
            free(listEntry->data);
        }
        list_freeList(batch_stock_item_update_request->add_tax_policy_ids);
        batch_stock_item_update_request->add_tax_policy_ids = NULL;
    }
    if (batch_stock_item_update_request->remove_tax_policy_ids) {
        list_ForEach(listEntry, batch_stock_item_update_request->remove_tax_policy_ids) {
            free(listEntry->data);
        }
        list_freeList(batch_stock_item_update_request->remove_tax_policy_ids);
        batch_stock_item_update_request->remove_tax_policy_ids = NULL;
    }
    free(batch_stock_item_update_request);
}

cJSON *batch_stock_item_update_request_convertToJSON(batch_stock_item_update_request_t *batch_stock_item_update_request) {
    cJSON *item = cJSON_CreateObject();

    // batch_stock_item_update_request->item_ids
    if(batch_stock_item_update_request->item_ids) {
    cJSON *item_ids = cJSON_AddArrayToObject(item, "itemIds");
    if(item_ids == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *item_idsListEntry;
    list_ForEach(item_idsListEntry, batch_stock_item_update_request->item_ids) {
    if(cJSON_AddStringToObject(item_ids, "", (char*)item_idsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // batch_stock_item_update_request->published
    if(batch_stock_item_update_request->published) {
    if(cJSON_AddBoolToObject(item, "published", batch_stock_item_update_request->published) == NULL) {
    goto fail; //Bool
    }
    }


    // batch_stock_item_update_request->taxable
    if(batch_stock_item_update_request->taxable) {
    if(cJSON_AddBoolToObject(item, "taxable", batch_stock_item_update_request->taxable) == NULL) {
    goto fail; //Bool
    }
    }


    // batch_stock_item_update_request->add_tax_policy_ids
    if(batch_stock_item_update_request->add_tax_policy_ids) {
    cJSON *add_tax_policy_ids = cJSON_AddArrayToObject(item, "addTaxPolicyIds");
    if(add_tax_policy_ids == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *add_tax_policy_idsListEntry;
    list_ForEach(add_tax_policy_idsListEntry, batch_stock_item_update_request->add_tax_policy_ids) {
    if(cJSON_AddStringToObject(add_tax_policy_ids, "", (char*)add_tax_policy_idsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // batch_stock_item_update_request->remove_tax_policy_ids
    if(batch_stock_item_update_request->remove_tax_policy_ids) {
    cJSON *remove_tax_policy_ids = cJSON_AddArrayToObject(item, "removeTaxPolicyIds");
    if(remove_tax_policy_ids == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *remove_tax_policy_idsListEntry;
    list_ForEach(remove_tax_policy_idsListEntry, batch_stock_item_update_request->remove_tax_policy_ids) {
    if(cJSON_AddStringToObject(remove_tax_policy_ids, "", (char*)remove_tax_policy_idsListEntry->data) == NULL)
    {
        goto fail;
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

batch_stock_item_update_request_t *batch_stock_item_update_request_parseFromJSON(cJSON *batch_stock_item_update_requestJSON){

    batch_stock_item_update_request_t *batch_stock_item_update_request_local_var = NULL;

    // define the local list for batch_stock_item_update_request->item_ids
    list_t *item_idsList = NULL;

    // define the local list for batch_stock_item_update_request->add_tax_policy_ids
    list_t *add_tax_policy_idsList = NULL;

    // define the local list for batch_stock_item_update_request->remove_tax_policy_ids
    list_t *remove_tax_policy_idsList = NULL;

    // batch_stock_item_update_request->item_ids
    cJSON *item_ids = cJSON_GetObjectItemCaseSensitive(batch_stock_item_update_requestJSON, "itemIds");
    if (item_ids) { 
    cJSON *item_ids_local = NULL;
    if(!cJSON_IsArray(item_ids)) {
        goto end;//primitive container
    }
    item_idsList = list_createList();

    cJSON_ArrayForEach(item_ids_local, item_ids)
    {
        if(!cJSON_IsString(item_ids_local))
        {
            goto end;
        }
        list_addElement(item_idsList , strdup(item_ids_local->valuestring));
    }
    }

    // batch_stock_item_update_request->published
    cJSON *published = cJSON_GetObjectItemCaseSensitive(batch_stock_item_update_requestJSON, "published");
    if (published) { 
    if(!cJSON_IsBool(published))
    {
    goto end; //Bool
    }
    }

    // batch_stock_item_update_request->taxable
    cJSON *taxable = cJSON_GetObjectItemCaseSensitive(batch_stock_item_update_requestJSON, "taxable");
    if (taxable) { 
    if(!cJSON_IsBool(taxable))
    {
    goto end; //Bool
    }
    }

    // batch_stock_item_update_request->add_tax_policy_ids
    cJSON *add_tax_policy_ids = cJSON_GetObjectItemCaseSensitive(batch_stock_item_update_requestJSON, "addTaxPolicyIds");
    if (add_tax_policy_ids) { 
    cJSON *add_tax_policy_ids_local = NULL;
    if(!cJSON_IsArray(add_tax_policy_ids)) {
        goto end;//primitive container
    }
    add_tax_policy_idsList = list_createList();

    cJSON_ArrayForEach(add_tax_policy_ids_local, add_tax_policy_ids)
    {
        if(!cJSON_IsString(add_tax_policy_ids_local))
        {
            goto end;
        }
        list_addElement(add_tax_policy_idsList , strdup(add_tax_policy_ids_local->valuestring));
    }
    }

    // batch_stock_item_update_request->remove_tax_policy_ids
    cJSON *remove_tax_policy_ids = cJSON_GetObjectItemCaseSensitive(batch_stock_item_update_requestJSON, "removeTaxPolicyIds");
    if (remove_tax_policy_ids) { 
    cJSON *remove_tax_policy_ids_local = NULL;
    if(!cJSON_IsArray(remove_tax_policy_ids)) {
        goto end;//primitive container
    }
    remove_tax_policy_idsList = list_createList();

    cJSON_ArrayForEach(remove_tax_policy_ids_local, remove_tax_policy_ids)
    {
        if(!cJSON_IsString(remove_tax_policy_ids_local))
        {
            goto end;
        }
        list_addElement(remove_tax_policy_idsList , strdup(remove_tax_policy_ids_local->valuestring));
    }
    }


    batch_stock_item_update_request_local_var = batch_stock_item_update_request_create (
        item_ids ? item_idsList : NULL,
        published ? published->valueint : 0,
        taxable ? taxable->valueint : 0,
        add_tax_policy_ids ? add_tax_policy_idsList : NULL,
        remove_tax_policy_ids ? remove_tax_policy_idsList : NULL
        );

    return batch_stock_item_update_request_local_var;
end:
    if (item_idsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, item_idsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(item_idsList);
        item_idsList = NULL;
    }
    if (add_tax_policy_idsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, add_tax_policy_idsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(add_tax_policy_idsList);
        add_tax_policy_idsList = NULL;
    }
    if (remove_tax_policy_idsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, remove_tax_policy_idsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(remove_tax_policy_idsList);
        remove_tax_policy_idsList = NULL;
    }
    return NULL;

}
