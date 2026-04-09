#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "account_create_dto.h"


char* account_create_dto_account_category_ToString(accountingservice_account_create_dto_ACCOUNTCATEGORY_e account_category) {
    char* account_categoryArray[] =  { "NULL", "Assets", "Equity", "Revenue", "Expense", "Liabilities" };
    return account_categoryArray[account_category];
}

accountingservice_account_create_dto_ACCOUNTCATEGORY_e account_create_dto_account_category_FromString(char* account_category){
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

account_create_dto_t *account_create_dto_create(
    char *id,
    char *timestamp,
    int group,
    int frozen,
    char *name,
    char *code,
    char *path,
    char *prefix,
    char *tenant_id,
    char *currency_id,
    char *enrollment_id,
    char *account_type_id,
    char *parent_account_id,
    accountingservice_account_create_dto_ACCOUNTCATEGORY_e account_category
    ) {
    account_create_dto_t *account_create_dto_local_var = malloc(sizeof(account_create_dto_t));
    if (!account_create_dto_local_var) {
        return NULL;
    }
    account_create_dto_local_var->id = id;
    account_create_dto_local_var->timestamp = timestamp;
    account_create_dto_local_var->group = group;
    account_create_dto_local_var->frozen = frozen;
    account_create_dto_local_var->name = name;
    account_create_dto_local_var->code = code;
    account_create_dto_local_var->path = path;
    account_create_dto_local_var->prefix = prefix;
    account_create_dto_local_var->tenant_id = tenant_id;
    account_create_dto_local_var->currency_id = currency_id;
    account_create_dto_local_var->enrollment_id = enrollment_id;
    account_create_dto_local_var->account_type_id = account_type_id;
    account_create_dto_local_var->parent_account_id = parent_account_id;
    account_create_dto_local_var->account_category = account_category;

    return account_create_dto_local_var;
}


void account_create_dto_free(account_create_dto_t *account_create_dto) {
    if(NULL == account_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (account_create_dto->id) {
        free(account_create_dto->id);
        account_create_dto->id = NULL;
    }
    if (account_create_dto->timestamp) {
        free(account_create_dto->timestamp);
        account_create_dto->timestamp = NULL;
    }
    if (account_create_dto->name) {
        free(account_create_dto->name);
        account_create_dto->name = NULL;
    }
    if (account_create_dto->code) {
        free(account_create_dto->code);
        account_create_dto->code = NULL;
    }
    if (account_create_dto->path) {
        free(account_create_dto->path);
        account_create_dto->path = NULL;
    }
    if (account_create_dto->prefix) {
        free(account_create_dto->prefix);
        account_create_dto->prefix = NULL;
    }
    if (account_create_dto->tenant_id) {
        free(account_create_dto->tenant_id);
        account_create_dto->tenant_id = NULL;
    }
    if (account_create_dto->currency_id) {
        free(account_create_dto->currency_id);
        account_create_dto->currency_id = NULL;
    }
    if (account_create_dto->enrollment_id) {
        free(account_create_dto->enrollment_id);
        account_create_dto->enrollment_id = NULL;
    }
    if (account_create_dto->account_type_id) {
        free(account_create_dto->account_type_id);
        account_create_dto->account_type_id = NULL;
    }
    if (account_create_dto->parent_account_id) {
        free(account_create_dto->parent_account_id);
        account_create_dto->parent_account_id = NULL;
    }
    free(account_create_dto);
}

cJSON *account_create_dto_convertToJSON(account_create_dto_t *account_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // account_create_dto->id
    if(account_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", account_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // account_create_dto->timestamp
    if(account_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", account_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // account_create_dto->group
    if(account_create_dto->group) {
    if(cJSON_AddBoolToObject(item, "group", account_create_dto->group) == NULL) {
    goto fail; //Bool
    }
    }


    // account_create_dto->frozen
    if(account_create_dto->frozen) {
    if(cJSON_AddBoolToObject(item, "frozen", account_create_dto->frozen) == NULL) {
    goto fail; //Bool
    }
    }


    // account_create_dto->name
    if (!account_create_dto->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", account_create_dto->name) == NULL) {
    goto fail; //String
    }


    // account_create_dto->code
    if(account_create_dto->code) {
    if(cJSON_AddStringToObject(item, "code", account_create_dto->code) == NULL) {
    goto fail; //String
    }
    }


    // account_create_dto->path
    if(account_create_dto->path) {
    if(cJSON_AddStringToObject(item, "path", account_create_dto->path) == NULL) {
    goto fail; //String
    }
    }


    // account_create_dto->prefix
    if(account_create_dto->prefix) {
    if(cJSON_AddStringToObject(item, "prefix", account_create_dto->prefix) == NULL) {
    goto fail; //String
    }
    }


    // account_create_dto->tenant_id
    if(account_create_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", account_create_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // account_create_dto->currency_id
    if (!account_create_dto->currency_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "currencyId", account_create_dto->currency_id) == NULL) {
    goto fail; //String
    }


    // account_create_dto->enrollment_id
    if(account_create_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", account_create_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // account_create_dto->account_type_id
    if(account_create_dto->account_type_id) {
    if(cJSON_AddStringToObject(item, "accountTypeId", account_create_dto->account_type_id) == NULL) {
    goto fail; //String
    }
    }


    // account_create_dto->parent_account_id
    if(account_create_dto->parent_account_id) {
    if(cJSON_AddStringToObject(item, "parentAccountId", account_create_dto->parent_account_id) == NULL) {
    goto fail; //String
    }
    }


    // account_create_dto->account_category
    if (accountingservice_account_create_dto_ACCOUNTCATEGORY_NULL == account_create_dto->account_category) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "accountCategory", account_categoryaccount_create_dto_ToString(account_create_dto->account_category)) == NULL)
    {
    goto fail; //Enum
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

account_create_dto_t *account_create_dto_parseFromJSON(cJSON *account_create_dtoJSON){

    account_create_dto_t *account_create_dto_local_var = NULL;

    // account_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(account_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // account_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(account_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // account_create_dto->group
    cJSON *group = cJSON_GetObjectItemCaseSensitive(account_create_dtoJSON, "group");
    if (group) { 
    if(!cJSON_IsBool(group))
    {
    goto end; //Bool
    }
    }

    // account_create_dto->frozen
    cJSON *frozen = cJSON_GetObjectItemCaseSensitive(account_create_dtoJSON, "frozen");
    if (frozen) { 
    if(!cJSON_IsBool(frozen))
    {
    goto end; //Bool
    }
    }

    // account_create_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(account_create_dtoJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // account_create_dto->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(account_create_dtoJSON, "code");
    if (code) { 
    if(!cJSON_IsString(code) && !cJSON_IsNull(code))
    {
    goto end; //String
    }
    }

    // account_create_dto->path
    cJSON *path = cJSON_GetObjectItemCaseSensitive(account_create_dtoJSON, "path");
    if (path) { 
    if(!cJSON_IsString(path) && !cJSON_IsNull(path))
    {
    goto end; //String
    }
    }

    // account_create_dto->prefix
    cJSON *prefix = cJSON_GetObjectItemCaseSensitive(account_create_dtoJSON, "prefix");
    if (prefix) { 
    if(!cJSON_IsString(prefix) && !cJSON_IsNull(prefix))
    {
    goto end; //String
    }
    }

    // account_create_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(account_create_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // account_create_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(account_create_dtoJSON, "currencyId");
    if (!currency_id) {
        goto end;
    }

    
    if(!cJSON_IsString(currency_id))
    {
    goto end; //String
    }

    // account_create_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(account_create_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // account_create_dto->account_type_id
    cJSON *account_type_id = cJSON_GetObjectItemCaseSensitive(account_create_dtoJSON, "accountTypeId");
    if (account_type_id) { 
    if(!cJSON_IsString(account_type_id) && !cJSON_IsNull(account_type_id))
    {
    goto end; //String
    }
    }

    // account_create_dto->parent_account_id
    cJSON *parent_account_id = cJSON_GetObjectItemCaseSensitive(account_create_dtoJSON, "parentAccountId");
    if (parent_account_id) { 
    if(!cJSON_IsString(parent_account_id) && !cJSON_IsNull(parent_account_id))
    {
    goto end; //String
    }
    }

    // account_create_dto->account_category
    cJSON *account_category = cJSON_GetObjectItemCaseSensitive(account_create_dtoJSON, "accountCategory");
    if (!account_category) {
        goto end;
    }

    accountingservice_account_create_dto_ACCOUNTCATEGORY_e account_categoryVariable;
    
    if(!cJSON_IsString(account_category))
    {
    goto end; //Enum
    }
    account_categoryVariable = account_create_dto_account_category_FromString(account_category->valuestring);


    account_create_dto_local_var = account_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        group ? group->valueint : 0,
        frozen ? frozen->valueint : 0,
        strdup(name->valuestring),
        code && !cJSON_IsNull(code) ? strdup(code->valuestring) : NULL,
        path && !cJSON_IsNull(path) ? strdup(path->valuestring) : NULL,
        prefix && !cJSON_IsNull(prefix) ? strdup(prefix->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        strdup(currency_id->valuestring),
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        account_type_id && !cJSON_IsNull(account_type_id) ? strdup(account_type_id->valuestring) : NULL,
        parent_account_id && !cJSON_IsNull(parent_account_id) ? strdup(parent_account_id->valuestring) : NULL,
        account_categoryVariable
        );

    return account_create_dto_local_var;
end:
    return NULL;

}
