#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "chart_of_accounts.h"



chart_of_accounts_t *chart_of_accounts_create(
    char *name,
    int verified,
    char *file_url,
    list_t *childs
    ) {
    chart_of_accounts_t *chart_of_accounts_local_var = malloc(sizeof(chart_of_accounts_t));
    if (!chart_of_accounts_local_var) {
        return NULL;
    }
    chart_of_accounts_local_var->name = name;
    chart_of_accounts_local_var->verified = verified;
    chart_of_accounts_local_var->file_url = file_url;
    chart_of_accounts_local_var->childs = childs;

    return chart_of_accounts_local_var;
}


void chart_of_accounts_free(chart_of_accounts_t *chart_of_accounts) {
    if(NULL == chart_of_accounts){
        return ;
    }
    listEntry_t *listEntry;
    if (chart_of_accounts->name) {
        free(chart_of_accounts->name);
        chart_of_accounts->name = NULL;
    }
    if (chart_of_accounts->file_url) {
        free(chart_of_accounts->file_url);
        chart_of_accounts->file_url = NULL;
    }
    if (chart_of_accounts->childs) {
        list_ForEach(listEntry, chart_of_accounts->childs) {
            account_free(listEntry->data);
        }
        list_freeList(chart_of_accounts->childs);
        chart_of_accounts->childs = NULL;
    }
    free(chart_of_accounts);
}

cJSON *chart_of_accounts_convertToJSON(chart_of_accounts_t *chart_of_accounts) {
    cJSON *item = cJSON_CreateObject();

    // chart_of_accounts->name
    if(chart_of_accounts->name) {
    if(cJSON_AddStringToObject(item, "name", chart_of_accounts->name) == NULL) {
    goto fail; //String
    }
    }


    // chart_of_accounts->verified
    if(chart_of_accounts->verified) {
    if(cJSON_AddBoolToObject(item, "verified", chart_of_accounts->verified) == NULL) {
    goto fail; //Bool
    }
    }


    // chart_of_accounts->file_url
    if(chart_of_accounts->file_url) {
    if(cJSON_AddStringToObject(item, "fileUrl", chart_of_accounts->file_url) == NULL) {
    goto fail; //String
    }
    }


    // chart_of_accounts->childs
    if(chart_of_accounts->childs) {
    cJSON *childs = cJSON_AddArrayToObject(item, "childs");
    if(childs == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *childsListEntry;
    if (chart_of_accounts->childs) {
    list_ForEach(childsListEntry, chart_of_accounts->childs) {
    cJSON *itemLocal = account_convertToJSON(childsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(childs, itemLocal);
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

chart_of_accounts_t *chart_of_accounts_parseFromJSON(cJSON *chart_of_accountsJSON){

    chart_of_accounts_t *chart_of_accounts_local_var = NULL;

    // define the local list for chart_of_accounts->childs
    list_t *childsList = NULL;

    // chart_of_accounts->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(chart_of_accountsJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // chart_of_accounts->verified
    cJSON *verified = cJSON_GetObjectItemCaseSensitive(chart_of_accountsJSON, "verified");
    if (verified) { 
    if(!cJSON_IsBool(verified))
    {
    goto end; //Bool
    }
    }

    // chart_of_accounts->file_url
    cJSON *file_url = cJSON_GetObjectItemCaseSensitive(chart_of_accountsJSON, "fileUrl");
    if (file_url) { 
    if(!cJSON_IsString(file_url) && !cJSON_IsNull(file_url))
    {
    goto end; //String
    }
    }

    // chart_of_accounts->childs
    cJSON *childs = cJSON_GetObjectItemCaseSensitive(chart_of_accountsJSON, "childs");
    if (childs) { 
    cJSON *childs_local_nonprimitive = NULL;
    if(!cJSON_IsArray(childs)){
        goto end; //nonprimitive container
    }

    childsList = list_createList();

    cJSON_ArrayForEach(childs_local_nonprimitive,childs )
    {
        if(!cJSON_IsObject(childs_local_nonprimitive)){
            goto end;
        }
        account_t *childsItem = account_parseFromJSON(childs_local_nonprimitive);

        list_addElement(childsList, childsItem);
    }
    }


    chart_of_accounts_local_var = chart_of_accounts_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        verified ? verified->valueint : 0,
        file_url && !cJSON_IsNull(file_url) ? strdup(file_url->valuestring) : NULL,
        childs ? childsList : NULL
        );

    return chart_of_accounts_local_var;
end:
    if (childsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, childsList) {
            account_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(childsList);
        childsList = NULL;
    }
    return NULL;

}
