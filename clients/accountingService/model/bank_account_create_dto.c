#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "bank_account_create_dto.h"


char* bank_account_create_dto_account_category_ToString(accountingservice_bank_account_create_dto_ACCOUNTCATEGORY_e account_category) {
    char* account_categoryArray[] =  { "NULL", "Assets", "Equity", "Revenue", "Expense", "Liabilities" };
    return account_categoryArray[account_category];
}

accountingservice_bank_account_create_dto_ACCOUNTCATEGORY_e bank_account_create_dto_account_category_FromString(char* account_category){
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

bank_account_create_dto_t *bank_account_create_dto_create(
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
    accountingservice_bank_account_create_dto_ACCOUNTCATEGORY_e account_category,
    char *iban,
    char *swift,
    char *branch_code,
    char *bank_account_number,
    char *qualified_name,
    char *bank_id,
    char *bank_profile_id
    ) {
    bank_account_create_dto_t *bank_account_create_dto_local_var = malloc(sizeof(bank_account_create_dto_t));
    if (!bank_account_create_dto_local_var) {
        return NULL;
    }
    bank_account_create_dto_local_var->id = id;
    bank_account_create_dto_local_var->timestamp = timestamp;
    bank_account_create_dto_local_var->group = group;
    bank_account_create_dto_local_var->frozen = frozen;
    bank_account_create_dto_local_var->name = name;
    bank_account_create_dto_local_var->code = code;
    bank_account_create_dto_local_var->path = path;
    bank_account_create_dto_local_var->prefix = prefix;
    bank_account_create_dto_local_var->tenant_id = tenant_id;
    bank_account_create_dto_local_var->currency_id = currency_id;
    bank_account_create_dto_local_var->enrollment_id = enrollment_id;
    bank_account_create_dto_local_var->account_type_id = account_type_id;
    bank_account_create_dto_local_var->parent_account_id = parent_account_id;
    bank_account_create_dto_local_var->account_category = account_category;
    bank_account_create_dto_local_var->iban = iban;
    bank_account_create_dto_local_var->swift = swift;
    bank_account_create_dto_local_var->branch_code = branch_code;
    bank_account_create_dto_local_var->bank_account_number = bank_account_number;
    bank_account_create_dto_local_var->qualified_name = qualified_name;
    bank_account_create_dto_local_var->bank_id = bank_id;
    bank_account_create_dto_local_var->bank_profile_id = bank_profile_id;

    return bank_account_create_dto_local_var;
}


void bank_account_create_dto_free(bank_account_create_dto_t *bank_account_create_dto) {
    if(NULL == bank_account_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (bank_account_create_dto->id) {
        free(bank_account_create_dto->id);
        bank_account_create_dto->id = NULL;
    }
    if (bank_account_create_dto->timestamp) {
        free(bank_account_create_dto->timestamp);
        bank_account_create_dto->timestamp = NULL;
    }
    if (bank_account_create_dto->name) {
        free(bank_account_create_dto->name);
        bank_account_create_dto->name = NULL;
    }
    if (bank_account_create_dto->code) {
        free(bank_account_create_dto->code);
        bank_account_create_dto->code = NULL;
    }
    if (bank_account_create_dto->path) {
        free(bank_account_create_dto->path);
        bank_account_create_dto->path = NULL;
    }
    if (bank_account_create_dto->prefix) {
        free(bank_account_create_dto->prefix);
        bank_account_create_dto->prefix = NULL;
    }
    if (bank_account_create_dto->tenant_id) {
        free(bank_account_create_dto->tenant_id);
        bank_account_create_dto->tenant_id = NULL;
    }
    if (bank_account_create_dto->currency_id) {
        free(bank_account_create_dto->currency_id);
        bank_account_create_dto->currency_id = NULL;
    }
    if (bank_account_create_dto->enrollment_id) {
        free(bank_account_create_dto->enrollment_id);
        bank_account_create_dto->enrollment_id = NULL;
    }
    if (bank_account_create_dto->account_type_id) {
        free(bank_account_create_dto->account_type_id);
        bank_account_create_dto->account_type_id = NULL;
    }
    if (bank_account_create_dto->parent_account_id) {
        free(bank_account_create_dto->parent_account_id);
        bank_account_create_dto->parent_account_id = NULL;
    }
    if (bank_account_create_dto->iban) {
        free(bank_account_create_dto->iban);
        bank_account_create_dto->iban = NULL;
    }
    if (bank_account_create_dto->swift) {
        free(bank_account_create_dto->swift);
        bank_account_create_dto->swift = NULL;
    }
    if (bank_account_create_dto->branch_code) {
        free(bank_account_create_dto->branch_code);
        bank_account_create_dto->branch_code = NULL;
    }
    if (bank_account_create_dto->bank_account_number) {
        free(bank_account_create_dto->bank_account_number);
        bank_account_create_dto->bank_account_number = NULL;
    }
    if (bank_account_create_dto->qualified_name) {
        free(bank_account_create_dto->qualified_name);
        bank_account_create_dto->qualified_name = NULL;
    }
    if (bank_account_create_dto->bank_id) {
        free(bank_account_create_dto->bank_id);
        bank_account_create_dto->bank_id = NULL;
    }
    if (bank_account_create_dto->bank_profile_id) {
        free(bank_account_create_dto->bank_profile_id);
        bank_account_create_dto->bank_profile_id = NULL;
    }
    free(bank_account_create_dto);
}

cJSON *bank_account_create_dto_convertToJSON(bank_account_create_dto_t *bank_account_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // bank_account_create_dto->id
    if(bank_account_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", bank_account_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // bank_account_create_dto->timestamp
    if(bank_account_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", bank_account_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // bank_account_create_dto->group
    if(bank_account_create_dto->group) {
    if(cJSON_AddBoolToObject(item, "group", bank_account_create_dto->group) == NULL) {
    goto fail; //Bool
    }
    }


    // bank_account_create_dto->frozen
    if(bank_account_create_dto->frozen) {
    if(cJSON_AddBoolToObject(item, "frozen", bank_account_create_dto->frozen) == NULL) {
    goto fail; //Bool
    }
    }


    // bank_account_create_dto->name
    if (!bank_account_create_dto->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", bank_account_create_dto->name) == NULL) {
    goto fail; //String
    }


    // bank_account_create_dto->code
    if(bank_account_create_dto->code) {
    if(cJSON_AddStringToObject(item, "code", bank_account_create_dto->code) == NULL) {
    goto fail; //String
    }
    }


    // bank_account_create_dto->path
    if(bank_account_create_dto->path) {
    if(cJSON_AddStringToObject(item, "path", bank_account_create_dto->path) == NULL) {
    goto fail; //String
    }
    }


    // bank_account_create_dto->prefix
    if(bank_account_create_dto->prefix) {
    if(cJSON_AddStringToObject(item, "prefix", bank_account_create_dto->prefix) == NULL) {
    goto fail; //String
    }
    }


    // bank_account_create_dto->tenant_id
    if(bank_account_create_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", bank_account_create_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // bank_account_create_dto->currency_id
    if (!bank_account_create_dto->currency_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "currencyId", bank_account_create_dto->currency_id) == NULL) {
    goto fail; //String
    }


    // bank_account_create_dto->enrollment_id
    if(bank_account_create_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", bank_account_create_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // bank_account_create_dto->account_type_id
    if(bank_account_create_dto->account_type_id) {
    if(cJSON_AddStringToObject(item, "accountTypeId", bank_account_create_dto->account_type_id) == NULL) {
    goto fail; //String
    }
    }


    // bank_account_create_dto->parent_account_id
    if(bank_account_create_dto->parent_account_id) {
    if(cJSON_AddStringToObject(item, "parentAccountId", bank_account_create_dto->parent_account_id) == NULL) {
    goto fail; //String
    }
    }


    // bank_account_create_dto->account_category
    if (accountingservice_bank_account_create_dto_ACCOUNTCATEGORY_NULL == bank_account_create_dto->account_category) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "accountCategory", account_categorybank_account_create_dto_ToString(bank_account_create_dto->account_category)) == NULL)
    {
    goto fail; //Enum
    }


    // bank_account_create_dto->iban
    if(bank_account_create_dto->iban) {
    if(cJSON_AddStringToObject(item, "iban", bank_account_create_dto->iban) == NULL) {
    goto fail; //String
    }
    }


    // bank_account_create_dto->swift
    if(bank_account_create_dto->swift) {
    if(cJSON_AddStringToObject(item, "swift", bank_account_create_dto->swift) == NULL) {
    goto fail; //String
    }
    }


    // bank_account_create_dto->branch_code
    if(bank_account_create_dto->branch_code) {
    if(cJSON_AddStringToObject(item, "branchCode", bank_account_create_dto->branch_code) == NULL) {
    goto fail; //String
    }
    }


    // bank_account_create_dto->bank_account_number
    if(bank_account_create_dto->bank_account_number) {
    if(cJSON_AddStringToObject(item, "bankAccountNumber", bank_account_create_dto->bank_account_number) == NULL) {
    goto fail; //String
    }
    }


    // bank_account_create_dto->qualified_name
    if(bank_account_create_dto->qualified_name) {
    if(cJSON_AddStringToObject(item, "qualifiedName", bank_account_create_dto->qualified_name) == NULL) {
    goto fail; //String
    }
    }


    // bank_account_create_dto->bank_id
    if(bank_account_create_dto->bank_id) {
    if(cJSON_AddStringToObject(item, "bankId", bank_account_create_dto->bank_id) == NULL) {
    goto fail; //String
    }
    }


    // bank_account_create_dto->bank_profile_id
    if(bank_account_create_dto->bank_profile_id) {
    if(cJSON_AddStringToObject(item, "bankProfileId", bank_account_create_dto->bank_profile_id) == NULL) {
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

bank_account_create_dto_t *bank_account_create_dto_parseFromJSON(cJSON *bank_account_create_dtoJSON){

    bank_account_create_dto_t *bank_account_create_dto_local_var = NULL;

    // bank_account_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(bank_account_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // bank_account_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(bank_account_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // bank_account_create_dto->group
    cJSON *group = cJSON_GetObjectItemCaseSensitive(bank_account_create_dtoJSON, "group");
    if (group) { 
    if(!cJSON_IsBool(group))
    {
    goto end; //Bool
    }
    }

    // bank_account_create_dto->frozen
    cJSON *frozen = cJSON_GetObjectItemCaseSensitive(bank_account_create_dtoJSON, "frozen");
    if (frozen) { 
    if(!cJSON_IsBool(frozen))
    {
    goto end; //Bool
    }
    }

    // bank_account_create_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(bank_account_create_dtoJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // bank_account_create_dto->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(bank_account_create_dtoJSON, "code");
    if (code) { 
    if(!cJSON_IsString(code) && !cJSON_IsNull(code))
    {
    goto end; //String
    }
    }

    // bank_account_create_dto->path
    cJSON *path = cJSON_GetObjectItemCaseSensitive(bank_account_create_dtoJSON, "path");
    if (path) { 
    if(!cJSON_IsString(path) && !cJSON_IsNull(path))
    {
    goto end; //String
    }
    }

    // bank_account_create_dto->prefix
    cJSON *prefix = cJSON_GetObjectItemCaseSensitive(bank_account_create_dtoJSON, "prefix");
    if (prefix) { 
    if(!cJSON_IsString(prefix) && !cJSON_IsNull(prefix))
    {
    goto end; //String
    }
    }

    // bank_account_create_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(bank_account_create_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // bank_account_create_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(bank_account_create_dtoJSON, "currencyId");
    if (!currency_id) {
        goto end;
    }

    
    if(!cJSON_IsString(currency_id))
    {
    goto end; //String
    }

    // bank_account_create_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(bank_account_create_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // bank_account_create_dto->account_type_id
    cJSON *account_type_id = cJSON_GetObjectItemCaseSensitive(bank_account_create_dtoJSON, "accountTypeId");
    if (account_type_id) { 
    if(!cJSON_IsString(account_type_id) && !cJSON_IsNull(account_type_id))
    {
    goto end; //String
    }
    }

    // bank_account_create_dto->parent_account_id
    cJSON *parent_account_id = cJSON_GetObjectItemCaseSensitive(bank_account_create_dtoJSON, "parentAccountId");
    if (parent_account_id) { 
    if(!cJSON_IsString(parent_account_id) && !cJSON_IsNull(parent_account_id))
    {
    goto end; //String
    }
    }

    // bank_account_create_dto->account_category
    cJSON *account_category = cJSON_GetObjectItemCaseSensitive(bank_account_create_dtoJSON, "accountCategory");
    if (!account_category) {
        goto end;
    }

    accountingservice_bank_account_create_dto_ACCOUNTCATEGORY_e account_categoryVariable;
    
    if(!cJSON_IsString(account_category))
    {
    goto end; //Enum
    }
    account_categoryVariable = bank_account_create_dto_account_category_FromString(account_category->valuestring);

    // bank_account_create_dto->iban
    cJSON *iban = cJSON_GetObjectItemCaseSensitive(bank_account_create_dtoJSON, "iban");
    if (iban) { 
    if(!cJSON_IsString(iban) && !cJSON_IsNull(iban))
    {
    goto end; //String
    }
    }

    // bank_account_create_dto->swift
    cJSON *swift = cJSON_GetObjectItemCaseSensitive(bank_account_create_dtoJSON, "swift");
    if (swift) { 
    if(!cJSON_IsString(swift) && !cJSON_IsNull(swift))
    {
    goto end; //String
    }
    }

    // bank_account_create_dto->branch_code
    cJSON *branch_code = cJSON_GetObjectItemCaseSensitive(bank_account_create_dtoJSON, "branchCode");
    if (branch_code) { 
    if(!cJSON_IsString(branch_code) && !cJSON_IsNull(branch_code))
    {
    goto end; //String
    }
    }

    // bank_account_create_dto->bank_account_number
    cJSON *bank_account_number = cJSON_GetObjectItemCaseSensitive(bank_account_create_dtoJSON, "bankAccountNumber");
    if (bank_account_number) { 
    if(!cJSON_IsString(bank_account_number) && !cJSON_IsNull(bank_account_number))
    {
    goto end; //String
    }
    }

    // bank_account_create_dto->qualified_name
    cJSON *qualified_name = cJSON_GetObjectItemCaseSensitive(bank_account_create_dtoJSON, "qualifiedName");
    if (qualified_name) { 
    if(!cJSON_IsString(qualified_name) && !cJSON_IsNull(qualified_name))
    {
    goto end; //String
    }
    }

    // bank_account_create_dto->bank_id
    cJSON *bank_id = cJSON_GetObjectItemCaseSensitive(bank_account_create_dtoJSON, "bankId");
    if (bank_id) { 
    if(!cJSON_IsString(bank_id) && !cJSON_IsNull(bank_id))
    {
    goto end; //String
    }
    }

    // bank_account_create_dto->bank_profile_id
    cJSON *bank_profile_id = cJSON_GetObjectItemCaseSensitive(bank_account_create_dtoJSON, "bankProfileId");
    if (bank_profile_id) { 
    if(!cJSON_IsString(bank_profile_id) && !cJSON_IsNull(bank_profile_id))
    {
    goto end; //String
    }
    }


    bank_account_create_dto_local_var = bank_account_create_dto_create (
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
        account_categoryVariable,
        iban && !cJSON_IsNull(iban) ? strdup(iban->valuestring) : NULL,
        swift && !cJSON_IsNull(swift) ? strdup(swift->valuestring) : NULL,
        branch_code && !cJSON_IsNull(branch_code) ? strdup(branch_code->valuestring) : NULL,
        bank_account_number && !cJSON_IsNull(bank_account_number) ? strdup(bank_account_number->valuestring) : NULL,
        qualified_name && !cJSON_IsNull(qualified_name) ? strdup(qualified_name->valuestring) : NULL,
        bank_id && !cJSON_IsNull(bank_id) ? strdup(bank_id->valuestring) : NULL,
        bank_profile_id && !cJSON_IsNull(bank_profile_id) ? strdup(bank_profile_id->valuestring) : NULL
        );

    return bank_account_create_dto_local_var;
end:
    return NULL;

}
