#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "account_dto.h"


char* account_dto_account_category_ToString(accountingservice_account_dto_ACCOUNTCATEGORY_e account_category) {
    char* account_categoryArray[] =  { "NULL", "Assets", "Equity", "Revenue", "Expense", "Liabilities" };
    return account_categoryArray[account_category];
}

accountingservice_account_dto_ACCOUNTCATEGORY_e account_dto_account_category_FromString(char* account_category){
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

account_dto_t *account_dto_create(
    char *id,
    char *timestamp,
    int group,
    int frozen,
    char *name,
    char *code,
    char *path,
    char *title,
    char *prefix,
    double balance,
    char *currency_id,
    char *account_type,
    char *qualified_name,
    char *account_type_id,
    double debits_balance,
    double credits_balance,
    char *parent_account_id,
    char *tenant_id,
    char *enrollment_id,
    int children_accounts_count,
    accountingservice_account_dto_ACCOUNTCATEGORY_e account_category,
    money_t *balance_amount,
    money_t *credits_balance_amount,
    money_t *debits_balance_amount
    ) {
    account_dto_t *account_dto_local_var = malloc(sizeof(account_dto_t));
    if (!account_dto_local_var) {
        return NULL;
    }
    account_dto_local_var->id = id;
    account_dto_local_var->timestamp = timestamp;
    account_dto_local_var->group = group;
    account_dto_local_var->frozen = frozen;
    account_dto_local_var->name = name;
    account_dto_local_var->code = code;
    account_dto_local_var->path = path;
    account_dto_local_var->title = title;
    account_dto_local_var->prefix = prefix;
    account_dto_local_var->balance = balance;
    account_dto_local_var->currency_id = currency_id;
    account_dto_local_var->account_type = account_type;
    account_dto_local_var->qualified_name = qualified_name;
    account_dto_local_var->account_type_id = account_type_id;
    account_dto_local_var->debits_balance = debits_balance;
    account_dto_local_var->credits_balance = credits_balance;
    account_dto_local_var->parent_account_id = parent_account_id;
    account_dto_local_var->tenant_id = tenant_id;
    account_dto_local_var->enrollment_id = enrollment_id;
    account_dto_local_var->children_accounts_count = children_accounts_count;
    account_dto_local_var->account_category = account_category;
    account_dto_local_var->balance_amount = balance_amount;
    account_dto_local_var->credits_balance_amount = credits_balance_amount;
    account_dto_local_var->debits_balance_amount = debits_balance_amount;

    return account_dto_local_var;
}


void account_dto_free(account_dto_t *account_dto) {
    if(NULL == account_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (account_dto->id) {
        free(account_dto->id);
        account_dto->id = NULL;
    }
    if (account_dto->timestamp) {
        free(account_dto->timestamp);
        account_dto->timestamp = NULL;
    }
    if (account_dto->name) {
        free(account_dto->name);
        account_dto->name = NULL;
    }
    if (account_dto->code) {
        free(account_dto->code);
        account_dto->code = NULL;
    }
    if (account_dto->path) {
        free(account_dto->path);
        account_dto->path = NULL;
    }
    if (account_dto->title) {
        free(account_dto->title);
        account_dto->title = NULL;
    }
    if (account_dto->prefix) {
        free(account_dto->prefix);
        account_dto->prefix = NULL;
    }
    if (account_dto->currency_id) {
        free(account_dto->currency_id);
        account_dto->currency_id = NULL;
    }
    if (account_dto->account_type) {
        free(account_dto->account_type);
        account_dto->account_type = NULL;
    }
    if (account_dto->qualified_name) {
        free(account_dto->qualified_name);
        account_dto->qualified_name = NULL;
    }
    if (account_dto->account_type_id) {
        free(account_dto->account_type_id);
        account_dto->account_type_id = NULL;
    }
    if (account_dto->parent_account_id) {
        free(account_dto->parent_account_id);
        account_dto->parent_account_id = NULL;
    }
    if (account_dto->tenant_id) {
        free(account_dto->tenant_id);
        account_dto->tenant_id = NULL;
    }
    if (account_dto->enrollment_id) {
        free(account_dto->enrollment_id);
        account_dto->enrollment_id = NULL;
    }
    if (account_dto->balance_amount) {
        money_free(account_dto->balance_amount);
        account_dto->balance_amount = NULL;
    }
    if (account_dto->credits_balance_amount) {
        money_free(account_dto->credits_balance_amount);
        account_dto->credits_balance_amount = NULL;
    }
    if (account_dto->debits_balance_amount) {
        money_free(account_dto->debits_balance_amount);
        account_dto->debits_balance_amount = NULL;
    }
    free(account_dto);
}

cJSON *account_dto_convertToJSON(account_dto_t *account_dto) {
    cJSON *item = cJSON_CreateObject();

    // account_dto->id
    if(account_dto->id) {
    if(cJSON_AddStringToObject(item, "id", account_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // account_dto->timestamp
    if(account_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", account_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // account_dto->group
    if(account_dto->group) {
    if(cJSON_AddBoolToObject(item, "group", account_dto->group) == NULL) {
    goto fail; //Bool
    }
    }


    // account_dto->frozen
    if(account_dto->frozen) {
    if(cJSON_AddBoolToObject(item, "frozen", account_dto->frozen) == NULL) {
    goto fail; //Bool
    }
    }


    // account_dto->name
    if(account_dto->name) {
    if(cJSON_AddStringToObject(item, "name", account_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // account_dto->code
    if(account_dto->code) {
    if(cJSON_AddStringToObject(item, "code", account_dto->code) == NULL) {
    goto fail; //String
    }
    }


    // account_dto->path
    if(account_dto->path) {
    if(cJSON_AddStringToObject(item, "path", account_dto->path) == NULL) {
    goto fail; //String
    }
    }


    // account_dto->title
    if(account_dto->title) {
    if(cJSON_AddStringToObject(item, "title", account_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // account_dto->prefix
    if(account_dto->prefix) {
    if(cJSON_AddStringToObject(item, "prefix", account_dto->prefix) == NULL) {
    goto fail; //String
    }
    }


    // account_dto->balance
    if(account_dto->balance) {
    if(cJSON_AddNumberToObject(item, "balance", account_dto->balance) == NULL) {
    goto fail; //Numeric
    }
    }


    // account_dto->currency_id
    if(account_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", account_dto->currency_id) == NULL) {
    goto fail; //String
    }
    }


    // account_dto->account_type
    if(account_dto->account_type) {
    if(cJSON_AddStringToObject(item, "accountType", account_dto->account_type) == NULL) {
    goto fail; //String
    }
    }


    // account_dto->qualified_name
    if(account_dto->qualified_name) {
    if(cJSON_AddStringToObject(item, "qualifiedName", account_dto->qualified_name) == NULL) {
    goto fail; //String
    }
    }


    // account_dto->account_type_id
    if(account_dto->account_type_id) {
    if(cJSON_AddStringToObject(item, "accountTypeId", account_dto->account_type_id) == NULL) {
    goto fail; //String
    }
    }


    // account_dto->debits_balance
    if(account_dto->debits_balance) {
    if(cJSON_AddNumberToObject(item, "debitsBalance", account_dto->debits_balance) == NULL) {
    goto fail; //Numeric
    }
    }


    // account_dto->credits_balance
    if(account_dto->credits_balance) {
    if(cJSON_AddNumberToObject(item, "creditsBalance", account_dto->credits_balance) == NULL) {
    goto fail; //Numeric
    }
    }


    // account_dto->parent_account_id
    if(account_dto->parent_account_id) {
    if(cJSON_AddStringToObject(item, "parentAccountId", account_dto->parent_account_id) == NULL) {
    goto fail; //String
    }
    }


    // account_dto->tenant_id
    if(account_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", account_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // account_dto->enrollment_id
    if(account_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", account_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // account_dto->children_accounts_count
    if(account_dto->children_accounts_count) {
    if(cJSON_AddNumberToObject(item, "childrenAccountsCount", account_dto->children_accounts_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // account_dto->account_category
    if(account_dto->account_category != accountingservice_account_dto_ACCOUNTCATEGORY_NULL) {
    if(cJSON_AddStringToObject(item, "accountCategory", account_categoryaccount_dto_ToString(account_dto->account_category)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // account_dto->balance_amount
    if(account_dto->balance_amount) {
    cJSON *balance_amount_local_JSON = money_convertToJSON(account_dto->balance_amount);
    if(balance_amount_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "balanceAmount", balance_amount_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // account_dto->credits_balance_amount
    if(account_dto->credits_balance_amount) {
    cJSON *credits_balance_amount_local_JSON = money_convertToJSON(account_dto->credits_balance_amount);
    if(credits_balance_amount_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "creditsBalanceAmount", credits_balance_amount_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // account_dto->debits_balance_amount
    if(account_dto->debits_balance_amount) {
    cJSON *debits_balance_amount_local_JSON = money_convertToJSON(account_dto->debits_balance_amount);
    if(debits_balance_amount_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "debitsBalanceAmount", debits_balance_amount_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

account_dto_t *account_dto_parseFromJSON(cJSON *account_dtoJSON){

    account_dto_t *account_dto_local_var = NULL;

    // define the local variable for account_dto->balance_amount
    money_t *balance_amount_local_nonprim = NULL;

    // define the local variable for account_dto->credits_balance_amount
    money_t *credits_balance_amount_local_nonprim = NULL;

    // define the local variable for account_dto->debits_balance_amount
    money_t *debits_balance_amount_local_nonprim = NULL;

    // account_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(account_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // account_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(account_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // account_dto->group
    cJSON *group = cJSON_GetObjectItemCaseSensitive(account_dtoJSON, "group");
    if (group) { 
    if(!cJSON_IsBool(group))
    {
    goto end; //Bool
    }
    }

    // account_dto->frozen
    cJSON *frozen = cJSON_GetObjectItemCaseSensitive(account_dtoJSON, "frozen");
    if (frozen) { 
    if(!cJSON_IsBool(frozen))
    {
    goto end; //Bool
    }
    }

    // account_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(account_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // account_dto->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(account_dtoJSON, "code");
    if (code) { 
    if(!cJSON_IsString(code) && !cJSON_IsNull(code))
    {
    goto end; //String
    }
    }

    // account_dto->path
    cJSON *path = cJSON_GetObjectItemCaseSensitive(account_dtoJSON, "path");
    if (path) { 
    if(!cJSON_IsString(path) && !cJSON_IsNull(path))
    {
    goto end; //String
    }
    }

    // account_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(account_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // account_dto->prefix
    cJSON *prefix = cJSON_GetObjectItemCaseSensitive(account_dtoJSON, "prefix");
    if (prefix) { 
    if(!cJSON_IsString(prefix) && !cJSON_IsNull(prefix))
    {
    goto end; //String
    }
    }

    // account_dto->balance
    cJSON *balance = cJSON_GetObjectItemCaseSensitive(account_dtoJSON, "balance");
    if (balance) { 
    if(!cJSON_IsNumber(balance))
    {
    goto end; //Numeric
    }
    }

    // account_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(account_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }

    // account_dto->account_type
    cJSON *account_type = cJSON_GetObjectItemCaseSensitive(account_dtoJSON, "accountType");
    if (account_type) { 
    if(!cJSON_IsString(account_type) && !cJSON_IsNull(account_type))
    {
    goto end; //String
    }
    }

    // account_dto->qualified_name
    cJSON *qualified_name = cJSON_GetObjectItemCaseSensitive(account_dtoJSON, "qualifiedName");
    if (qualified_name) { 
    if(!cJSON_IsString(qualified_name) && !cJSON_IsNull(qualified_name))
    {
    goto end; //String
    }
    }

    // account_dto->account_type_id
    cJSON *account_type_id = cJSON_GetObjectItemCaseSensitive(account_dtoJSON, "accountTypeId");
    if (account_type_id) { 
    if(!cJSON_IsString(account_type_id) && !cJSON_IsNull(account_type_id))
    {
    goto end; //String
    }
    }

    // account_dto->debits_balance
    cJSON *debits_balance = cJSON_GetObjectItemCaseSensitive(account_dtoJSON, "debitsBalance");
    if (debits_balance) { 
    if(!cJSON_IsNumber(debits_balance))
    {
    goto end; //Numeric
    }
    }

    // account_dto->credits_balance
    cJSON *credits_balance = cJSON_GetObjectItemCaseSensitive(account_dtoJSON, "creditsBalance");
    if (credits_balance) { 
    if(!cJSON_IsNumber(credits_balance))
    {
    goto end; //Numeric
    }
    }

    // account_dto->parent_account_id
    cJSON *parent_account_id = cJSON_GetObjectItemCaseSensitive(account_dtoJSON, "parentAccountId");
    if (parent_account_id) { 
    if(!cJSON_IsString(parent_account_id) && !cJSON_IsNull(parent_account_id))
    {
    goto end; //String
    }
    }

    // account_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(account_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // account_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(account_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // account_dto->children_accounts_count
    cJSON *children_accounts_count = cJSON_GetObjectItemCaseSensitive(account_dtoJSON, "childrenAccountsCount");
    if (children_accounts_count) { 
    if(!cJSON_IsNumber(children_accounts_count))
    {
    goto end; //Numeric
    }
    }

    // account_dto->account_category
    cJSON *account_category = cJSON_GetObjectItemCaseSensitive(account_dtoJSON, "accountCategory");
    accountingservice_account_dto_ACCOUNTCATEGORY_e account_categoryVariable;
    if (account_category) { 
    if(!cJSON_IsString(account_category))
    {
    goto end; //Enum
    }
    account_categoryVariable = account_dto_account_category_FromString(account_category->valuestring);
    }

    // account_dto->balance_amount
    cJSON *balance_amount = cJSON_GetObjectItemCaseSensitive(account_dtoJSON, "balanceAmount");
    if (balance_amount) { 
    balance_amount_local_nonprim = money_parseFromJSON(balance_amount); //nonprimitive
    }

    // account_dto->credits_balance_amount
    cJSON *credits_balance_amount = cJSON_GetObjectItemCaseSensitive(account_dtoJSON, "creditsBalanceAmount");
    if (credits_balance_amount) { 
    credits_balance_amount_local_nonprim = money_parseFromJSON(credits_balance_amount); //nonprimitive
    }

    // account_dto->debits_balance_amount
    cJSON *debits_balance_amount = cJSON_GetObjectItemCaseSensitive(account_dtoJSON, "debitsBalanceAmount");
    if (debits_balance_amount) { 
    debits_balance_amount_local_nonprim = money_parseFromJSON(debits_balance_amount); //nonprimitive
    }


    account_dto_local_var = account_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        group ? group->valueint : 0,
        frozen ? frozen->valueint : 0,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        code && !cJSON_IsNull(code) ? strdup(code->valuestring) : NULL,
        path && !cJSON_IsNull(path) ? strdup(path->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        prefix && !cJSON_IsNull(prefix) ? strdup(prefix->valuestring) : NULL,
        balance ? balance->valuedouble : 0,
        currency_id && !cJSON_IsNull(currency_id) ? strdup(currency_id->valuestring) : NULL,
        account_type && !cJSON_IsNull(account_type) ? strdup(account_type->valuestring) : NULL,
        qualified_name && !cJSON_IsNull(qualified_name) ? strdup(qualified_name->valuestring) : NULL,
        account_type_id && !cJSON_IsNull(account_type_id) ? strdup(account_type_id->valuestring) : NULL,
        debits_balance ? debits_balance->valuedouble : 0,
        credits_balance ? credits_balance->valuedouble : 0,
        parent_account_id && !cJSON_IsNull(parent_account_id) ? strdup(parent_account_id->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        children_accounts_count ? children_accounts_count->valuedouble : 0,
        account_category ? account_categoryVariable : accountingservice_account_dto_ACCOUNTCATEGORY_NULL,
        balance_amount ? balance_amount_local_nonprim : NULL,
        credits_balance_amount ? credits_balance_amount_local_nonprim : NULL,
        debits_balance_amount ? debits_balance_amount_local_nonprim : NULL
        );

    return account_dto_local_var;
end:
    if (balance_amount_local_nonprim) {
        money_free(balance_amount_local_nonprim);
        balance_amount_local_nonprim = NULL;
    }
    if (credits_balance_amount_local_nonprim) {
        money_free(credits_balance_amount_local_nonprim);
        credits_balance_amount_local_nonprim = NULL;
    }
    if (debits_balance_amount_local_nonprim) {
        money_free(debits_balance_amount_local_nonprim);
        debits_balance_amount_local_nonprim = NULL;
    }
    return NULL;

}
