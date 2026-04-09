#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "transaction_dto.h"



transaction_dto_t *transaction_dto_create(
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
    char *enrollment_id
    ) {
    transaction_dto_t *transaction_dto_local_var = malloc(sizeof(transaction_dto_t));
    if (!transaction_dto_local_var) {
        return NULL;
    }
    transaction_dto_local_var->id = id;
    transaction_dto_local_var->timestamp = timestamp;
    transaction_dto_local_var->description = description;
    transaction_dto_local_var->price = price;
    transaction_dto_local_var->quantity = quantity;
    transaction_dto_local_var->external_description = external_description;
    transaction_dto_local_var->basis_quantity = basis_quantity;
    transaction_dto_local_var->basis_amount = basis_amount;
    transaction_dto_local_var->percent = percent;
    transaction_dto_local_var->unit_group_id = unit_group_id;
    transaction_dto_local_var->unit_id = unit_id;
    transaction_dto_local_var->transaction_category_id = transaction_category_id;
    transaction_dto_local_var->currency_id = currency_id;
    transaction_dto_local_var->tenant_id = tenant_id;
    transaction_dto_local_var->enrollment_id = enrollment_id;

    return transaction_dto_local_var;
}


void transaction_dto_free(transaction_dto_t *transaction_dto) {
    if(NULL == transaction_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (transaction_dto->id) {
        free(transaction_dto->id);
        transaction_dto->id = NULL;
    }
    if (transaction_dto->timestamp) {
        free(transaction_dto->timestamp);
        transaction_dto->timestamp = NULL;
    }
    if (transaction_dto->description) {
        free(transaction_dto->description);
        transaction_dto->description = NULL;
    }
    if (transaction_dto->external_description) {
        free(transaction_dto->external_description);
        transaction_dto->external_description = NULL;
    }
    if (transaction_dto->unit_group_id) {
        free(transaction_dto->unit_group_id);
        transaction_dto->unit_group_id = NULL;
    }
    if (transaction_dto->unit_id) {
        free(transaction_dto->unit_id);
        transaction_dto->unit_id = NULL;
    }
    if (transaction_dto->transaction_category_id) {
        free(transaction_dto->transaction_category_id);
        transaction_dto->transaction_category_id = NULL;
    }
    if (transaction_dto->currency_id) {
        free(transaction_dto->currency_id);
        transaction_dto->currency_id = NULL;
    }
    if (transaction_dto->tenant_id) {
        free(transaction_dto->tenant_id);
        transaction_dto->tenant_id = NULL;
    }
    if (transaction_dto->enrollment_id) {
        free(transaction_dto->enrollment_id);
        transaction_dto->enrollment_id = NULL;
    }
    free(transaction_dto);
}

cJSON *transaction_dto_convertToJSON(transaction_dto_t *transaction_dto) {
    cJSON *item = cJSON_CreateObject();

    // transaction_dto->id
    if(transaction_dto->id) {
    if(cJSON_AddStringToObject(item, "id", transaction_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // transaction_dto->timestamp
    if(transaction_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", transaction_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // transaction_dto->description
    if(transaction_dto->description) {
    if(cJSON_AddStringToObject(item, "description", transaction_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // transaction_dto->price
    if(transaction_dto->price) {
    if(cJSON_AddNumberToObject(item, "price", transaction_dto->price) == NULL) {
    goto fail; //Numeric
    }
    }


    // transaction_dto->quantity
    if(transaction_dto->quantity) {
    if(cJSON_AddNumberToObject(item, "quantity", transaction_dto->quantity) == NULL) {
    goto fail; //Numeric
    }
    }


    // transaction_dto->external_description
    if(transaction_dto->external_description) {
    if(cJSON_AddStringToObject(item, "externalDescription", transaction_dto->external_description) == NULL) {
    goto fail; //String
    }
    }


    // transaction_dto->basis_quantity
    if(transaction_dto->basis_quantity) {
    if(cJSON_AddNumberToObject(item, "basisQuantity", transaction_dto->basis_quantity) == NULL) {
    goto fail; //Numeric
    }
    }


    // transaction_dto->basis_amount
    if(transaction_dto->basis_amount) {
    if(cJSON_AddNumberToObject(item, "basisAmount", transaction_dto->basis_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // transaction_dto->percent
    if(transaction_dto->percent) {
    if(cJSON_AddNumberToObject(item, "percent", transaction_dto->percent) == NULL) {
    goto fail; //Numeric
    }
    }


    // transaction_dto->unit_group_id
    if(transaction_dto->unit_group_id) {
    if(cJSON_AddStringToObject(item, "unitGroupId", transaction_dto->unit_group_id) == NULL) {
    goto fail; //String
    }
    }


    // transaction_dto->unit_id
    if(transaction_dto->unit_id) {
    if(cJSON_AddStringToObject(item, "unitId", transaction_dto->unit_id) == NULL) {
    goto fail; //String
    }
    }


    // transaction_dto->transaction_category_id
    if(transaction_dto->transaction_category_id) {
    if(cJSON_AddStringToObject(item, "transactionCategoryId", transaction_dto->transaction_category_id) == NULL) {
    goto fail; //String
    }
    }


    // transaction_dto->currency_id
    if(transaction_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", transaction_dto->currency_id) == NULL) {
    goto fail; //String
    }
    }


    // transaction_dto->tenant_id
    if(transaction_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", transaction_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // transaction_dto->enrollment_id
    if(transaction_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", transaction_dto->enrollment_id) == NULL) {
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

transaction_dto_t *transaction_dto_parseFromJSON(cJSON *transaction_dtoJSON){

    transaction_dto_t *transaction_dto_local_var = NULL;

    // transaction_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(transaction_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // transaction_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(transaction_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // transaction_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(transaction_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // transaction_dto->price
    cJSON *price = cJSON_GetObjectItemCaseSensitive(transaction_dtoJSON, "price");
    if (price) { 
    if(!cJSON_IsNumber(price))
    {
    goto end; //Numeric
    }
    }

    // transaction_dto->quantity
    cJSON *quantity = cJSON_GetObjectItemCaseSensitive(transaction_dtoJSON, "quantity");
    if (quantity) { 
    if(!cJSON_IsNumber(quantity))
    {
    goto end; //Numeric
    }
    }

    // transaction_dto->external_description
    cJSON *external_description = cJSON_GetObjectItemCaseSensitive(transaction_dtoJSON, "externalDescription");
    if (external_description) { 
    if(!cJSON_IsString(external_description) && !cJSON_IsNull(external_description))
    {
    goto end; //String
    }
    }

    // transaction_dto->basis_quantity
    cJSON *basis_quantity = cJSON_GetObjectItemCaseSensitive(transaction_dtoJSON, "basisQuantity");
    if (basis_quantity) { 
    if(!cJSON_IsNumber(basis_quantity))
    {
    goto end; //Numeric
    }
    }

    // transaction_dto->basis_amount
    cJSON *basis_amount = cJSON_GetObjectItemCaseSensitive(transaction_dtoJSON, "basisAmount");
    if (basis_amount) { 
    if(!cJSON_IsNumber(basis_amount))
    {
    goto end; //Numeric
    }
    }

    // transaction_dto->percent
    cJSON *percent = cJSON_GetObjectItemCaseSensitive(transaction_dtoJSON, "percent");
    if (percent) { 
    if(!cJSON_IsNumber(percent))
    {
    goto end; //Numeric
    }
    }

    // transaction_dto->unit_group_id
    cJSON *unit_group_id = cJSON_GetObjectItemCaseSensitive(transaction_dtoJSON, "unitGroupId");
    if (unit_group_id) { 
    if(!cJSON_IsString(unit_group_id) && !cJSON_IsNull(unit_group_id))
    {
    goto end; //String
    }
    }

    // transaction_dto->unit_id
    cJSON *unit_id = cJSON_GetObjectItemCaseSensitive(transaction_dtoJSON, "unitId");
    if (unit_id) { 
    if(!cJSON_IsString(unit_id) && !cJSON_IsNull(unit_id))
    {
    goto end; //String
    }
    }

    // transaction_dto->transaction_category_id
    cJSON *transaction_category_id = cJSON_GetObjectItemCaseSensitive(transaction_dtoJSON, "transactionCategoryId");
    if (transaction_category_id) { 
    if(!cJSON_IsString(transaction_category_id) && !cJSON_IsNull(transaction_category_id))
    {
    goto end; //String
    }
    }

    // transaction_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(transaction_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }

    // transaction_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(transaction_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // transaction_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(transaction_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }


    transaction_dto_local_var = transaction_dto_create (
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
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL
        );

    return transaction_dto_local_var;
end:
    return NULL;

}
