#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "account.h"



account_t *account_create(
    char *name,
    char *code,
    list_t *childs,
    char *type
    ) {
    account_t *account_local_var = malloc(sizeof(account_t));
    if (!account_local_var) {
        return NULL;
    }
    account_local_var->name = name;
    account_local_var->code = code;
    account_local_var->childs = childs;
    account_local_var->type = type;

    return account_local_var;
}


void account_free(account_t *account) {
    if(NULL == account){
        return ;
    }
    listEntry_t *listEntry;
    if (account->name) {
        free(account->name);
        account->name = NULL;
    }
    if (account->code) {
        free(account->code);
        account->code = NULL;
    }
    if (account->childs) {
        list_ForEach(listEntry, account->childs) {
            account_free(listEntry->data);
        }
        list_freeList(account->childs);
        account->childs = NULL;
    }
    if (account->type) {
        free(account->type);
        account->type = NULL;
    }
    free(account);
}

cJSON *account_convertToJSON(account_t *account) {
    cJSON *item = cJSON_CreateObject();

    // account->name
    if(account->name) {
    if(cJSON_AddStringToObject(item, "name", account->name) == NULL) {
    goto fail; //String
    }
    }


    // account->code
    if(account->code) {
    if(cJSON_AddStringToObject(item, "code", account->code) == NULL) {
    goto fail; //String
    }
    }


    // account->childs
    if(account->childs) {
    cJSON *childs = cJSON_AddArrayToObject(item, "childs");
    if(childs == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *childsListEntry;
    if (account->childs) {
    list_ForEach(childsListEntry, account->childs) {
    cJSON *itemLocal = account_convertToJSON(childsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(childs, itemLocal);
    }
    }
    }


    // account->type
    if(account->type) {
    if(cJSON_AddStringToObject(item, "type", account->type) == NULL) {
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

account_t *account_parseFromJSON(cJSON *accountJSON){

    account_t *account_local_var = NULL;

    // define the local list for account->childs
    list_t *childsList = NULL;

    // account->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(accountJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // account->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(accountJSON, "code");
    if (code) { 
    if(!cJSON_IsString(code) && !cJSON_IsNull(code))
    {
    goto end; //String
    }
    }

    // account->childs
    cJSON *childs = cJSON_GetObjectItemCaseSensitive(accountJSON, "childs");
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

    // account->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(accountJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }


    account_local_var = account_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        code && !cJSON_IsNull(code) ? strdup(code->valuestring) : NULL,
        childs ? childsList : NULL,
        type && !cJSON_IsNull(type) ? strdup(type->valuestring) : NULL
        );

    return account_local_var;
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
