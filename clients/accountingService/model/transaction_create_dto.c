#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "transaction_create_dto.h"



transaction_create_dto_t *transaction_create_dto_create(
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
    char *currency_id
    ) {
    transaction_create_dto_t *transaction_create_dto_local_var = malloc(sizeof(transaction_create_dto_t));
    if (!transaction_create_dto_local_var) {
        return NULL;
    }
    transaction_create_dto_local_var->id = id;
    transaction_create_dto_local_var->timestamp = timestamp;
    transaction_create_dto_local_var->description = description;
    transaction_create_dto_local_var->price = price;
    transaction_create_dto_local_var->quantity = quantity;
    transaction_create_dto_local_var->external_description = external_description;
    transaction_create_dto_local_var->basis_quantity = basis_quantity;
    transaction_create_dto_local_var->basis_amount = basis_amount;
    transaction_create_dto_local_var->percent = percent;
    transaction_create_dto_local_var->unit_group_id = unit_group_id;
    transaction_create_dto_local_var->unit_id = unit_id;
    transaction_create_dto_local_var->transaction_category_id = transaction_category_id;
    transaction_create_dto_local_var->currency_id = currency_id;

    return transaction_create_dto_local_var;
}


void transaction_create_dto_free(transaction_create_dto_t *transaction_create_dto) {
    if(NULL == transaction_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (transaction_create_dto->id) {
        free(transaction_create_dto->id);
        transaction_create_dto->id = NULL;
    }
    if (transaction_create_dto->timestamp) {
        free(transaction_create_dto->timestamp);
        transaction_create_dto->timestamp = NULL;
    }
    if (transaction_create_dto->description) {
        free(transaction_create_dto->description);
        transaction_create_dto->description = NULL;
    }
    if (transaction_create_dto->external_description) {
        free(transaction_create_dto->external_description);
        transaction_create_dto->external_description = NULL;
    }
    if (transaction_create_dto->unit_group_id) {
        free(transaction_create_dto->unit_group_id);
        transaction_create_dto->unit_group_id = NULL;
    }
    if (transaction_create_dto->unit_id) {
        free(transaction_create_dto->unit_id);
        transaction_create_dto->unit_id = NULL;
    }
    if (transaction_create_dto->transaction_category_id) {
        free(transaction_create_dto->transaction_category_id);
        transaction_create_dto->transaction_category_id = NULL;
    }
    if (transaction_create_dto->currency_id) {
        free(transaction_create_dto->currency_id);
        transaction_create_dto->currency_id = NULL;
    }
    free(transaction_create_dto);
}

cJSON *transaction_create_dto_convertToJSON(transaction_create_dto_t *transaction_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // transaction_create_dto->id
    if(transaction_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", transaction_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // transaction_create_dto->timestamp
    if(transaction_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", transaction_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // transaction_create_dto->description
    if(transaction_create_dto->description) {
    if(cJSON_AddStringToObject(item, "description", transaction_create_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // transaction_create_dto->price
    if(transaction_create_dto->price) {
    if(cJSON_AddNumberToObject(item, "price", transaction_create_dto->price) == NULL) {
    goto fail; //Numeric
    }
    }


    // transaction_create_dto->quantity
    if(transaction_create_dto->quantity) {
    if(cJSON_AddNumberToObject(item, "quantity", transaction_create_dto->quantity) == NULL) {
    goto fail; //Numeric
    }
    }


    // transaction_create_dto->external_description
    if(transaction_create_dto->external_description) {
    if(cJSON_AddStringToObject(item, "externalDescription", transaction_create_dto->external_description) == NULL) {
    goto fail; //String
    }
    }


    // transaction_create_dto->basis_quantity
    if(transaction_create_dto->basis_quantity) {
    if(cJSON_AddNumberToObject(item, "basisQuantity", transaction_create_dto->basis_quantity) == NULL) {
    goto fail; //Numeric
    }
    }


    // transaction_create_dto->basis_amount
    if(transaction_create_dto->basis_amount) {
    if(cJSON_AddNumberToObject(item, "basisAmount", transaction_create_dto->basis_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // transaction_create_dto->percent
    if(transaction_create_dto->percent) {
    if(cJSON_AddNumberToObject(item, "percent", transaction_create_dto->percent) == NULL) {
    goto fail; //Numeric
    }
    }


    // transaction_create_dto->unit_group_id
    if(transaction_create_dto->unit_group_id) {
    if(cJSON_AddStringToObject(item, "unitGroupId", transaction_create_dto->unit_group_id) == NULL) {
    goto fail; //String
    }
    }


    // transaction_create_dto->unit_id
    if(transaction_create_dto->unit_id) {
    if(cJSON_AddStringToObject(item, "unitId", transaction_create_dto->unit_id) == NULL) {
    goto fail; //String
    }
    }


    // transaction_create_dto->transaction_category_id
    if(transaction_create_dto->transaction_category_id) {
    if(cJSON_AddStringToObject(item, "transactionCategoryId", transaction_create_dto->transaction_category_id) == NULL) {
    goto fail; //String
    }
    }


    // transaction_create_dto->currency_id
    if(transaction_create_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", transaction_create_dto->currency_id) == NULL) {
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

transaction_create_dto_t *transaction_create_dto_parseFromJSON(cJSON *transaction_create_dtoJSON){

    transaction_create_dto_t *transaction_create_dto_local_var = NULL;

    // transaction_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(transaction_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // transaction_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(transaction_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // transaction_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(transaction_create_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // transaction_create_dto->price
    cJSON *price = cJSON_GetObjectItemCaseSensitive(transaction_create_dtoJSON, "price");
    if (price) { 
    if(!cJSON_IsNumber(price))
    {
    goto end; //Numeric
    }
    }

    // transaction_create_dto->quantity
    cJSON *quantity = cJSON_GetObjectItemCaseSensitive(transaction_create_dtoJSON, "quantity");
    if (quantity) { 
    if(!cJSON_IsNumber(quantity))
    {
    goto end; //Numeric
    }
    }

    // transaction_create_dto->external_description
    cJSON *external_description = cJSON_GetObjectItemCaseSensitive(transaction_create_dtoJSON, "externalDescription");
    if (external_description) { 
    if(!cJSON_IsString(external_description) && !cJSON_IsNull(external_description))
    {
    goto end; //String
    }
    }

    // transaction_create_dto->basis_quantity
    cJSON *basis_quantity = cJSON_GetObjectItemCaseSensitive(transaction_create_dtoJSON, "basisQuantity");
    if (basis_quantity) { 
    if(!cJSON_IsNumber(basis_quantity))
    {
    goto end; //Numeric
    }
    }

    // transaction_create_dto->basis_amount
    cJSON *basis_amount = cJSON_GetObjectItemCaseSensitive(transaction_create_dtoJSON, "basisAmount");
    if (basis_amount) { 
    if(!cJSON_IsNumber(basis_amount))
    {
    goto end; //Numeric
    }
    }

    // transaction_create_dto->percent
    cJSON *percent = cJSON_GetObjectItemCaseSensitive(transaction_create_dtoJSON, "percent");
    if (percent) { 
    if(!cJSON_IsNumber(percent))
    {
    goto end; //Numeric
    }
    }

    // transaction_create_dto->unit_group_id
    cJSON *unit_group_id = cJSON_GetObjectItemCaseSensitive(transaction_create_dtoJSON, "unitGroupId");
    if (unit_group_id) { 
    if(!cJSON_IsString(unit_group_id) && !cJSON_IsNull(unit_group_id))
    {
    goto end; //String
    }
    }

    // transaction_create_dto->unit_id
    cJSON *unit_id = cJSON_GetObjectItemCaseSensitive(transaction_create_dtoJSON, "unitId");
    if (unit_id) { 
    if(!cJSON_IsString(unit_id) && !cJSON_IsNull(unit_id))
    {
    goto end; //String
    }
    }

    // transaction_create_dto->transaction_category_id
    cJSON *transaction_category_id = cJSON_GetObjectItemCaseSensitive(transaction_create_dtoJSON, "transactionCategoryId");
    if (transaction_category_id) { 
    if(!cJSON_IsString(transaction_category_id) && !cJSON_IsNull(transaction_category_id))
    {
    goto end; //String
    }
    }

    // transaction_create_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(transaction_create_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }


    transaction_create_dto_local_var = transaction_create_dto_create (
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
        currency_id && !cJSON_IsNull(currency_id) ? strdup(currency_id->valuestring) : NULL
        );

    return transaction_create_dto_local_var;
end:
    return NULL;

}
