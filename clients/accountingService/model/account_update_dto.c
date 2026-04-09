#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "account_update_dto.h"


char* account_update_dto_account_category_ToString(accountingservice_account_update_dto_ACCOUNTCATEGORY_e account_category) {
    char* account_categoryArray[] =  { "NULL", "Assets", "Equity", "Revenue", "Expense", "Liabilities" };
    return account_categoryArray[account_category];
}

accountingservice_account_update_dto_ACCOUNTCATEGORY_e account_update_dto_account_category_FromString(char* account_category){
    int stringToReturn = 0;
    char *account_categoryArray[] =  { "NULL", "Assets", "Equity", "Revenue", "Expense", "Liabilities" };
    size_t sizeofArray = sizeof(account_categoryArray) / sizeof(account_categoryArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(account_category, account_categoryArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

account_update_dto_t *account_update_dto_create(
    int group,
    int frozen,
    char *name,
    char *code,
    char *path,
    char *prefix,
    char *currency_id,
    char *account_type_id,
    char *parent_account_id,
    accountingservice_account_update_dto_ACCOUNTCATEGORY_e account_category
    ) {
    account_update_dto_t *account_update_dto_local_var = malloc(sizeof(account_update_dto_t));
    if (!account_update_dto_local_var) {
        return NULL;
    }
    account_update_dto_local_var->group = group;
    account_update_dto_local_var->frozen = frozen;
    account_update_dto_local_var->name = name;
    account_update_dto_local_var->code = code;
    account_update_dto_local_var->path = path;
    account_update_dto_local_var->prefix = prefix;
    account_update_dto_local_var->currency_id = currency_id;
    account_update_dto_local_var->account_type_id = account_type_id;
    account_update_dto_local_var->parent_account_id = parent_account_id;
    account_update_dto_local_var->account_category = account_category;

    return account_update_dto_local_var;
}


void account_update_dto_free(account_update_dto_t *account_update_dto) {
    if(NULL == account_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (account_update_dto->name) {
        free(account_update_dto->name);
        account_update_dto->name = NULL;
    }
    if (account_update_dto->code) {
        free(account_update_dto->code);
        account_update_dto->code = NULL;
    }
    if (account_update_dto->path) {
        free(account_update_dto->path);
        account_update_dto->path = NULL;
    }
    if (account_update_dto->prefix) {
        free(account_update_dto->prefix);
        account_update_dto->prefix = NULL;
    }
    if (account_update_dto->currency_id) {
        free(account_update_dto->currency_id);
        account_update_dto->currency_id = NULL;
    }
    if (account_update_dto->account_type_id) {
        free(account_update_dto->account_type_id);
        account_update_dto->account_type_id = NULL;
    }
    if (account_update_dto->parent_account_id) {
        free(account_update_dto->parent_account_id);
        account_update_dto->parent_account_id = NULL;
    }
    free(account_update_dto);
}

cJSON *account_update_dto_convertToJSON(account_update_dto_t *account_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // account_update_dto->group
    if(account_update_dto->group) {
    if(cJSON_AddBoolToObject(item, "group", account_update_dto->group) == NULL) {
    goto fail; //Bool
    }
    }


    // account_update_dto->frozen
    if(account_update_dto->frozen) {
    if(cJSON_AddBoolToObject(item, "frozen", account_update_dto->frozen) == NULL) {
    goto fail; //Bool
    }
    }


    // account_update_dto->name
    if (!account_update_dto->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", account_update_dto->name) == NULL) {
    goto fail; //String
    }


    // account_update_dto->code
    if(account_update_dto->code) {
    if(cJSON_AddStringToObject(item, "code", account_update_dto->code) == NULL) {
    goto fail; //String
    }
    }


    // account_update_dto->path
    if(account_update_dto->path) {
    if(cJSON_AddStringToObject(item, "path", account_update_dto->path) == NULL) {
    goto fail; //String
    }
    }


    // account_update_dto->prefix
    if(account_update_dto->prefix) {
    if(cJSON_AddStringToObject(item, "prefix", account_update_dto->prefix) == NULL) {
    goto fail; //String
    }
    }


    // account_update_dto->currency_id
    if (!account_update_dto->currency_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "currencyId", account_update_dto->currency_id) == NULL) {
    goto fail; //String
    }


    // account_update_dto->account_type_id
    if(account_update_dto->account_type_id) {
    if(cJSON_AddStringToObject(item, "accountTypeId", account_update_dto->account_type_id) == NULL) {
    goto fail; //String
    }
    }


    // account_update_dto->parent_account_id
    if(account_update_dto->parent_account_id) {
    if(cJSON_AddStringToObject(item, "parentAccountId", account_update_dto->parent_account_id) == NULL) {
    goto fail; //String
    }
    }


    // account_update_dto->account_category
    if(account_update_dto->account_category != accountingservice_account_update_dto_ACCOUNTCATEGORY_NULL) {
    if(cJSON_AddStringToObject(item, "accountCategory", account_categoryaccount_update_dto_ToString(account_update_dto->account_category)) == NULL)
    {
    goto fail; //Enum
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

account_update_dto_t *account_update_dto_parseFromJSON(cJSON *account_update_dtoJSON){

    account_update_dto_t *account_update_dto_local_var = NULL;

    // account_update_dto->group
    cJSON *group = cJSON_GetObjectItemCaseSensitive(account_update_dtoJSON, "group");
    if (group) { 
    if(!cJSON_IsBool(group))
    {
    goto end; //Bool
    }
    }

    // account_update_dto->frozen
    cJSON *frozen = cJSON_GetObjectItemCaseSensitive(account_update_dtoJSON, "frozen");
    if (frozen) { 
    if(!cJSON_IsBool(frozen))
    {
    goto end; //Bool
    }
    }

    // account_update_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(account_update_dtoJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // account_update_dto->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(account_update_dtoJSON, "code");
    if (code) { 
    if(!cJSON_IsString(code) && !cJSON_IsNull(code))
    {
    goto end; //String
    }
    }

    // account_update_dto->path
    cJSON *path = cJSON_GetObjectItemCaseSensitive(account_update_dtoJSON, "path");
    if (path) { 
    if(!cJSON_IsString(path) && !cJSON_IsNull(path))
    {
    goto end; //String
    }
    }

    // account_update_dto->prefix
    cJSON *prefix = cJSON_GetObjectItemCaseSensitive(account_update_dtoJSON, "prefix");
    if (prefix) { 
    if(!cJSON_IsString(prefix) && !cJSON_IsNull(prefix))
    {
    goto end; //String
    }
    }

    // account_update_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(account_update_dtoJSON, "currencyId");
    if (!currency_id) {
        goto end;
    }

    
    if(!cJSON_IsString(currency_id))
    {
    goto end; //String
    }

    // account_update_dto->account_type_id
    cJSON *account_type_id = cJSON_GetObjectItemCaseSensitive(account_update_dtoJSON, "accountTypeId");
    if (account_type_id) { 
    if(!cJSON_IsString(account_type_id) && !cJSON_IsNull(account_type_id))
    {
    goto end; //String
    }
    }

    // account_update_dto->parent_account_id
    cJSON *parent_account_id = cJSON_GetObjectItemCaseSensitive(account_update_dtoJSON, "parentAccountId");
    if (parent_account_id) { 
    if(!cJSON_IsString(parent_account_id) && !cJSON_IsNull(parent_account_id))
    {
    goto end; //String
    }
    }

    // account_update_dto->account_category
    cJSON *account_category = cJSON_GetObjectItemCaseSensitive(account_update_dtoJSON, "accountCategory");
    accountingservice_account_update_dto_ACCOUNTCATEGORY_e account_categoryVariable;
    if (account_category) { 
    if(!cJSON_IsString(account_category))
    {
    goto end; //Enum
    }
    account_categoryVariable = account_update_dto_account_category_FromString(account_category->valuestring);
    }


    account_update_dto_local_var = account_update_dto_create (
        group ? group->valueint : 0,
        frozen ? frozen->valueint : 0,
        strdup(name->valuestring),
        code && !cJSON_IsNull(code) ? strdup(code->valuestring) : NULL,
        path && !cJSON_IsNull(path) ? strdup(path->valuestring) : NULL,
        prefix && !cJSON_IsNull(prefix) ? strdup(prefix->valuestring) : NULL,
        strdup(currency_id->valuestring),
        account_type_id && !cJSON_IsNull(account_type_id) ? strdup(account_type_id->valuestring) : NULL,
        parent_account_id && !cJSON_IsNull(parent_account_id) ? strdup(parent_account_id->valuestring) : NULL,
        account_category ? account_categoryVariable : accountingservice_account_update_dto_ACCOUNTCATEGORY_NULL
        );

    return account_update_dto_local_var;
end:
    return NULL;

}
