#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "bank_transaction_dto.h"



bank_transaction_dto_t *bank_transaction_dto_create(
    char *id,
    char *timestamp,
    char *description,
    double price,
    double quantity,
    char *external_description,
    double basis_quantity,
    double basis_amount,
    double percent,
    char *unit_group_id,
    char *unit_id,
    char *transaction_category_id,
    char *currency_id,
    char *tenant_id,
    char *enrollment_id,
    char *bank_profile_id,
    char *bank_account_id
    ) {
    bank_transaction_dto_t *bank_transaction_dto_local_var = malloc(sizeof(bank_transaction_dto_t));
    if (!bank_transaction_dto_local_var) {
        return NULL;
    }
    bank_transaction_dto_local_var->id = id;
    bank_transaction_dto_local_var->timestamp = timestamp;
    bank_transaction_dto_local_var->description = description;
    bank_transaction_dto_local_var->price = price;
    bank_transaction_dto_local_var->quantity = quantity;
    bank_transaction_dto_local_var->external_description = external_description;
    bank_transaction_dto_local_var->basis_quantity = basis_quantity;
    bank_transaction_dto_local_var->basis_amount = basis_amount;
    bank_transaction_dto_local_var->percent = percent;
    bank_transaction_dto_local_var->unit_group_id = unit_group_id;
    bank_transaction_dto_local_var->unit_id = unit_id;
    bank_transaction_dto_local_var->transaction_category_id = transaction_category_id;
    bank_transaction_dto_local_var->currency_id = currency_id;
    bank_transaction_dto_local_var->tenant_id = tenant_id;
    bank_transaction_dto_local_var->enrollment_id = enrollment_id;
    bank_transaction_dto_local_var->bank_profile_id = bank_profile_id;
    bank_transaction_dto_local_var->bank_account_id = bank_account_id;

    return bank_transaction_dto_local_var;
}


void bank_transaction_dto_free(bank_transaction_dto_t *bank_transaction_dto) {
    if(NULL == bank_transaction_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (bank_transaction_dto->id) {
        free(bank_transaction_dto->id);
        bank_transaction_dto->id = NULL;
    }
    if (bank_transaction_dto->timestamp) {
        free(bank_transaction_dto->timestamp);
        bank_transaction_dto->timestamp = NULL;
    }
    if (bank_transaction_dto->description) {
        free(bank_transaction_dto->description);
        bank_transaction_dto->description = NULL;
    }
    if (bank_transaction_dto->external_description) {
        free(bank_transaction_dto->external_description);
        bank_transaction_dto->external_description = NULL;
    }
    if (bank_transaction_dto->unit_group_id) {
        free(bank_transaction_dto->unit_group_id);
        bank_transaction_dto->unit_group_id = NULL;
    }
    if (bank_transaction_dto->unit_id) {
        free(bank_transaction_dto->unit_id);
        bank_transaction_dto->unit_id = NULL;
    }
    if (bank_transaction_dto->transaction_category_id) {
        free(bank_transaction_dto->transaction_category_id);
        bank_transaction_dto->transaction_category_id = NULL;
    }
    if (bank_transaction_dto->currency_id) {
        free(bank_transaction_dto->currency_id);
        bank_transaction_dto->currency_id = NULL;
    }
    if (bank_transaction_dto->tenant_id) {
        free(bank_transaction_dto->tenant_id);
        bank_transaction_dto->tenant_id = NULL;
    }
    if (bank_transaction_dto->enrollment_id) {
        free(bank_transaction_dto->enrollment_id);
        bank_transaction_dto->enrollment_id = NULL;
    }
    if (bank_transaction_dto->bank_profile_id) {
        free(bank_transaction_dto->bank_profile_id);
        bank_transaction_dto->bank_profile_id = NULL;
    }
    if (bank_transaction_dto->bank_account_id) {
        free(bank_transaction_dto->bank_account_id);
        bank_transaction_dto->bank_account_id = NULL;
    }
    free(bank_transaction_dto);
}

cJSON *bank_transaction_dto_convertToJSON(bank_transaction_dto_t *bank_transaction_dto) {
    cJSON *item = cJSON_CreateObject();

    // bank_transaction_dto->id
    if(bank_transaction_dto->id) {
    if(cJSON_AddStringToObject(item, "id", bank_transaction_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // bank_transaction_dto->timestamp
    if(bank_transaction_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", bank_transaction_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // bank_transaction_dto->description
    if(bank_transaction_dto->description) {
    if(cJSON_AddStringToObject(item, "description", bank_transaction_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // bank_transaction_dto->price
    if(bank_transaction_dto->price) {
    if(cJSON_AddNumberToObject(item, "price", bank_transaction_dto->price) == NULL) {
    goto fail; //Numeric
    }
    }


    // bank_transaction_dto->quantity
    if(bank_transaction_dto->quantity) {
    if(cJSON_AddNumberToObject(item, "quantity", bank_transaction_dto->quantity) == NULL) {
    goto fail; //Numeric
    }
    }


    // bank_transaction_dto->external_description
    if(bank_transaction_dto->external_description) {
    if(cJSON_AddStringToObject(item, "externalDescription", bank_transaction_dto->external_description) == NULL) {
    goto fail; //String
    }
    }


    // bank_transaction_dto->basis_quantity
    if(bank_transaction_dto->basis_quantity) {
    if(cJSON_AddNumberToObject(item, "basisQuantity", bank_transaction_dto->basis_quantity) == NULL) {
    goto fail; //Numeric
    }
    }


    // bank_transaction_dto->basis_amount
    if(bank_transaction_dto->basis_amount) {
    if(cJSON_AddNumberToObject(item, "basisAmount", bank_transaction_dto->basis_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // bank_transaction_dto->percent
    if(bank_transaction_dto->percent) {
    if(cJSON_AddNumberToObject(item, "percent", bank_transaction_dto->percent) == NULL) {
    goto fail; //Numeric
    }
    }


    // bank_transaction_dto->unit_group_id
    if(bank_transaction_dto->unit_group_id) {
    if(cJSON_AddStringToObject(item, "unitGroupId", bank_transaction_dto->unit_group_id) == NULL) {
    goto fail; //String
    }
    }


    // bank_transaction_dto->unit_id
    if(bank_transaction_dto->unit_id) {
    if(cJSON_AddStringToObject(item, "unitId", bank_transaction_dto->unit_id) == NULL) {
    goto fail; //String
    }
    }


    // bank_transaction_dto->transaction_category_id
    if(bank_transaction_dto->transaction_category_id) {
    if(cJSON_AddStringToObject(item, "transactionCategoryId", bank_transaction_dto->transaction_category_id) == NULL) {
    goto fail; //String
    }
    }


    // bank_transaction_dto->currency_id
    if(bank_transaction_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", bank_transaction_dto->currency_id) == NULL) {
    goto fail; //String
    }
    }


    // bank_transaction_dto->tenant_id
    if(bank_transaction_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", bank_transaction_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // bank_transaction_dto->enrollment_id
    if(bank_transaction_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", bank_transaction_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // bank_transaction_dto->bank_profile_id
    if(bank_transaction_dto->bank_profile_id) {
    if(cJSON_AddStringToObject(item, "bankProfileId", bank_transaction_dto->bank_profile_id) == NULL) {
    goto fail; //String
    }
    }


    // bank_transaction_dto->bank_account_id
    if(bank_transaction_dto->bank_account_id) {
    if(cJSON_AddStringToObject(item, "bankAccountId", bank_transaction_dto->bank_account_id) == NULL) {
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

bank_transaction_dto_t *bank_transaction_dto_parseFromJSON(cJSON *bank_transaction_dtoJSON){

    bank_transaction_dto_t *bank_transaction_dto_local_var = NULL;

    // bank_transaction_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(bank_transaction_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // bank_transaction_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(bank_transaction_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // bank_transaction_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(bank_transaction_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // bank_transaction_dto->price
    cJSON *price = cJSON_GetObjectItemCaseSensitive(bank_transaction_dtoJSON, "price");
    if (price) { 
    if(!cJSON_IsNumber(price))
    {
    goto end; //Numeric
    }
    }

    // bank_transaction_dto->quantity
    cJSON *quantity = cJSON_GetObjectItemCaseSensitive(bank_transaction_dtoJSON, "quantity");
    if (quantity) { 
    if(!cJSON_IsNumber(quantity))
    {
    goto end; //Numeric
    }
    }

    // bank_transaction_dto->external_description
    cJSON *external_description = cJSON_GetObjectItemCaseSensitive(bank_transaction_dtoJSON, "externalDescription");
    if (external_description) { 
    if(!cJSON_IsString(external_description) && !cJSON_IsNull(external_description))
    {
    goto end; //String
    }
    }

    // bank_transaction_dto->basis_quantity
    cJSON *basis_quantity = cJSON_GetObjectItemCaseSensitive(bank_transaction_dtoJSON, "basisQuantity");
    if (basis_quantity) { 
    if(!cJSON_IsNumber(basis_quantity))
    {
    goto end; //Numeric
    }
    }

    // bank_transaction_dto->basis_amount
    cJSON *basis_amount = cJSON_GetObjectItemCaseSensitive(bank_transaction_dtoJSON, "basisAmount");
    if (basis_amount) { 
    if(!cJSON_IsNumber(basis_amount))
    {
    goto end; //Numeric
    }
    }

    // bank_transaction_dto->percent
    cJSON *percent = cJSON_GetObjectItemCaseSensitive(bank_transaction_dtoJSON, "percent");
    if (percent) { 
    if(!cJSON_IsNumber(percent))
    {
    goto end; //Numeric
    }
    }

    // bank_transaction_dto->unit_group_id
    cJSON *unit_group_id = cJSON_GetObjectItemCaseSensitive(bank_transaction_dtoJSON, "unitGroupId");
    if (unit_group_id) { 
    if(!cJSON_IsString(unit_group_id) && !cJSON_IsNull(unit_group_id))
    {
    goto end; //String
    }
    }

    // bank_transaction_dto->unit_id
    cJSON *unit_id = cJSON_GetObjectItemCaseSensitive(bank_transaction_dtoJSON, "unitId");
    if (unit_id) { 
    if(!cJSON_IsString(unit_id) && !cJSON_IsNull(unit_id))
    {
    goto end; //String
    }
    }

    // bank_transaction_dto->transaction_category_id
    cJSON *transaction_category_id = cJSON_GetObjectItemCaseSensitive(bank_transaction_dtoJSON, "transactionCategoryId");
    if (transaction_category_id) { 
    if(!cJSON_IsString(transaction_category_id) && !cJSON_IsNull(transaction_category_id))
    {
    goto end; //String
    }
    }

    // bank_transaction_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(bank_transaction_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }

    // bank_transaction_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(bank_transaction_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // bank_transaction_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(bank_transaction_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // bank_transaction_dto->bank_profile_id
    cJSON *bank_profile_id = cJSON_GetObjectItemCaseSensitive(bank_transaction_dtoJSON, "bankProfileId");
    if (bank_profile_id) { 
    if(!cJSON_IsString(bank_profile_id) && !cJSON_IsNull(bank_profile_id))
    {
    goto end; //String
    }
    }

    // bank_transaction_dto->bank_account_id
    cJSON *bank_account_id = cJSON_GetObjectItemCaseSensitive(bank_transaction_dtoJSON, "bankAccountId");
    if (bank_account_id) { 
    if(!cJSON_IsString(bank_account_id) && !cJSON_IsNull(bank_account_id))
    {
    goto end; //String
    }
    }


    bank_transaction_dto_local_var = bank_transaction_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        price ? price->valuedouble : 0,
        quantity ? quantity->valuedouble : 0,
        external_description && !cJSON_IsNull(external_description) ? strdup(external_description->valuestring) : NULL,
        basis_quantity ? basis_quantity->valuedouble : 0,
        basis_amount ? basis_amount->valuedouble : 0,
        percent ? percent->valuedouble : 0,
        unit_group_id && !cJSON_IsNull(unit_group_id) ? strdup(unit_group_id->valuestring) : NULL,
        unit_id && !cJSON_IsNull(unit_id) ? strdup(unit_id->valuestring) : NULL,
        transaction_category_id && !cJSON_IsNull(transaction_category_id) ? strdup(transaction_category_id->valuestring) : NULL,
        currency_id && !cJSON_IsNull(currency_id) ? strdup(currency_id->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        bank_profile_id && !cJSON_IsNull(bank_profile_id) ? strdup(bank_profile_id->valuestring) : NULL,
        bank_account_id && !cJSON_IsNull(bank_account_id) ? strdup(bank_account_id->valuestring) : NULL
        );

    return bank_transaction_dto_local_var;
end:
    return NULL;

}
