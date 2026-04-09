#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "invoice_line_update_dto.h"



invoice_line_update_dto_t *invoice_line_update_dto_create(
    double price,
    char *unit_id,
    double percent,
    char *unit_group_id,
    char *currency_id,
    char *discount_list_id,
    char *rounding_policy_id,
    int quantity,
    char *item_id,
    char *item_price_id,
    char *invoice_line_id,
    double tax_amount_in_usd,
    double tax_base_amount_in_usd
    ) {
    invoice_line_update_dto_t *invoice_line_update_dto_local_var = malloc(sizeof(invoice_line_update_dto_t));
    if (!invoice_line_update_dto_local_var) {
        return NULL;
    }
    invoice_line_update_dto_local_var->price = price;
    invoice_line_update_dto_local_var->unit_id = unit_id;
    invoice_line_update_dto_local_var->percent = percent;
    invoice_line_update_dto_local_var->unit_group_id = unit_group_id;
    invoice_line_update_dto_local_var->currency_id = currency_id;
    invoice_line_update_dto_local_var->discount_list_id = discount_list_id;
    invoice_line_update_dto_local_var->rounding_policy_id = rounding_policy_id;
    invoice_line_update_dto_local_var->quantity = quantity;
    invoice_line_update_dto_local_var->item_id = item_id;
    invoice_line_update_dto_local_var->item_price_id = item_price_id;
    invoice_line_update_dto_local_var->invoice_line_id = invoice_line_id;
    invoice_line_update_dto_local_var->tax_amount_in_usd = tax_amount_in_usd;
    invoice_line_update_dto_local_var->tax_base_amount_in_usd = tax_base_amount_in_usd;

    return invoice_line_update_dto_local_var;
}


void invoice_line_update_dto_free(invoice_line_update_dto_t *invoice_line_update_dto) {
    if(NULL == invoice_line_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (invoice_line_update_dto->unit_id) {
        free(invoice_line_update_dto->unit_id);
        invoice_line_update_dto->unit_id = NULL;
    }
    if (invoice_line_update_dto->unit_group_id) {
        free(invoice_line_update_dto->unit_group_id);
        invoice_line_update_dto->unit_group_id = NULL;
    }
    if (invoice_line_update_dto->currency_id) {
        free(invoice_line_update_dto->currency_id);
        invoice_line_update_dto->currency_id = NULL;
    }
    if (invoice_line_update_dto->discount_list_id) {
        free(invoice_line_update_dto->discount_list_id);
        invoice_line_update_dto->discount_list_id = NULL;
    }
    if (invoice_line_update_dto->rounding_policy_id) {
        free(invoice_line_update_dto->rounding_policy_id);
        invoice_line_update_dto->rounding_policy_id = NULL;
    }
    if (invoice_line_update_dto->item_id) {
        free(invoice_line_update_dto->item_id);
        invoice_line_update_dto->item_id = NULL;
    }
    if (invoice_line_update_dto->item_price_id) {
        free(invoice_line_update_dto->item_price_id);
        invoice_line_update_dto->item_price_id = NULL;
    }
    if (invoice_line_update_dto->invoice_line_id) {
        free(invoice_line_update_dto->invoice_line_id);
        invoice_line_update_dto->invoice_line_id = NULL;
    }
    free(invoice_line_update_dto);
}

cJSON *invoice_line_update_dto_convertToJSON(invoice_line_update_dto_t *invoice_line_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // invoice_line_update_dto->price
    if(invoice_line_update_dto->price) {
    if(cJSON_AddNumberToObject(item, "price", invoice_line_update_dto->price) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_line_update_dto->unit_id
    if(invoice_line_update_dto->unit_id) {
    if(cJSON_AddStringToObject(item, "unitId", invoice_line_update_dto->unit_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_update_dto->percent
    if(invoice_line_update_dto->percent) {
    if(cJSON_AddNumberToObject(item, "percent", invoice_line_update_dto->percent) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_line_update_dto->unit_group_id
    if(invoice_line_update_dto->unit_group_id) {
    if(cJSON_AddStringToObject(item, "unitGroupId", invoice_line_update_dto->unit_group_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_update_dto->currency_id
    if(invoice_line_update_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", invoice_line_update_dto->currency_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_update_dto->discount_list_id
    if(invoice_line_update_dto->discount_list_id) {
    if(cJSON_AddStringToObject(item, "discountListId", invoice_line_update_dto->discount_list_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_update_dto->rounding_policy_id
    if(invoice_line_update_dto->rounding_policy_id) {
    if(cJSON_AddStringToObject(item, "roundingPolicyId", invoice_line_update_dto->rounding_policy_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_update_dto->quantity
    if(invoice_line_update_dto->quantity) {
    if(cJSON_AddNumberToObject(item, "quantity", invoice_line_update_dto->quantity) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_line_update_dto->item_id
    if(invoice_line_update_dto->item_id) {
    if(cJSON_AddStringToObject(item, "itemId", invoice_line_update_dto->item_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_update_dto->item_price_id
    if(invoice_line_update_dto->item_price_id) {
    if(cJSON_AddStringToObject(item, "itemPriceId", invoice_line_update_dto->item_price_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_update_dto->invoice_line_id
    if(invoice_line_update_dto->invoice_line_id) {
    if(cJSON_AddStringToObject(item, "invoiceLineId", invoice_line_update_dto->invoice_line_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_update_dto->tax_amount_in_usd
    if(invoice_line_update_dto->tax_amount_in_usd) {
    if(cJSON_AddNumberToObject(item, "taxAmountInUsd", invoice_line_update_dto->tax_amount_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_line_update_dto->tax_base_amount_in_usd
    if(invoice_line_update_dto->tax_base_amount_in_usd) {
    if(cJSON_AddNumberToObject(item, "taxBaseAmountInUsd", invoice_line_update_dto->tax_base_amount_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

invoice_line_update_dto_t *invoice_line_update_dto_parseFromJSON(cJSON *invoice_line_update_dtoJSON){

    invoice_line_update_dto_t *invoice_line_update_dto_local_var = NULL;

    // invoice_line_update_dto->price
    cJSON *price = cJSON_GetObjectItemCaseSensitive(invoice_line_update_dtoJSON, "price");
    if (price) { 
    if(!cJSON_IsNumber(price))
    {
    goto end; //Numeric
    }
    }

    // invoice_line_update_dto->unit_id
    cJSON *unit_id = cJSON_GetObjectItemCaseSensitive(invoice_line_update_dtoJSON, "unitId");
    if (unit_id) { 
    if(!cJSON_IsString(unit_id) && !cJSON_IsNull(unit_id))
    {
    goto end; //String
    }
    }

    // invoice_line_update_dto->percent
    cJSON *percent = cJSON_GetObjectItemCaseSensitive(invoice_line_update_dtoJSON, "percent");
    if (percent) { 
    if(!cJSON_IsNumber(percent))
    {
    goto end; //Numeric
    }
    }

    // invoice_line_update_dto->unit_group_id
    cJSON *unit_group_id = cJSON_GetObjectItemCaseSensitive(invoice_line_update_dtoJSON, "unitGroupId");
    if (unit_group_id) { 
    if(!cJSON_IsString(unit_group_id) && !cJSON_IsNull(unit_group_id))
    {
    goto end; //String
    }
    }

    // invoice_line_update_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(invoice_line_update_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }

    // invoice_line_update_dto->discount_list_id
    cJSON *discount_list_id = cJSON_GetObjectItemCaseSensitive(invoice_line_update_dtoJSON, "discountListId");
    if (discount_list_id) { 
    if(!cJSON_IsString(discount_list_id) && !cJSON_IsNull(discount_list_id))
    {
    goto end; //String
    }
    }

    // invoice_line_update_dto->rounding_policy_id
    cJSON *rounding_policy_id = cJSON_GetObjectItemCaseSensitive(invoice_line_update_dtoJSON, "roundingPolicyId");
    if (rounding_policy_id) { 
    if(!cJSON_IsString(rounding_policy_id) && !cJSON_IsNull(rounding_policy_id))
    {
    goto end; //String
    }
    }

    // invoice_line_update_dto->quantity
    cJSON *quantity = cJSON_GetObjectItemCaseSensitive(invoice_line_update_dtoJSON, "quantity");
    if (quantity) { 
    if(!cJSON_IsNumber(quantity))
    {
    goto end; //Numeric
    }
    }

    // invoice_line_update_dto->item_id
    cJSON *item_id = cJSON_GetObjectItemCaseSensitive(invoice_line_update_dtoJSON, "itemId");
    if (item_id) { 
    if(!cJSON_IsString(item_id) && !cJSON_IsNull(item_id))
    {
    goto end; //String
    }
    }

    // invoice_line_update_dto->item_price_id
    cJSON *item_price_id = cJSON_GetObjectItemCaseSensitive(invoice_line_update_dtoJSON, "itemPriceId");
    if (item_price_id) { 
    if(!cJSON_IsString(item_price_id) && !cJSON_IsNull(item_price_id))
    {
    goto end; //String
    }
    }

    // invoice_line_update_dto->invoice_line_id
    cJSON *invoice_line_id = cJSON_GetObjectItemCaseSensitive(invoice_line_update_dtoJSON, "invoiceLineId");
    if (invoice_line_id) { 
    if(!cJSON_IsString(invoice_line_id) && !cJSON_IsNull(invoice_line_id))
    {
    goto end; //String
    }
    }

    // invoice_line_update_dto->tax_amount_in_usd
    cJSON *tax_amount_in_usd = cJSON_GetObjectItemCaseSensitive(invoice_line_update_dtoJSON, "taxAmountInUsd");
    if (tax_amount_in_usd) { 
    if(!cJSON_IsNumber(tax_amount_in_usd))
    {
    goto end; //Numeric
    }
    }

    // invoice_line_update_dto->tax_base_amount_in_usd
    cJSON *tax_base_amount_in_usd = cJSON_GetObjectItemCaseSensitive(invoice_line_update_dtoJSON, "taxBaseAmountInUsd");
    if (tax_base_amount_in_usd) { 
    if(!cJSON_IsNumber(tax_base_amount_in_usd))
    {
    goto end; //Numeric
    }
    }


    invoice_line_update_dto_local_var = invoice_line_update_dto_create (
        price ? price->valuedouble : 0,
        unit_id && !cJSON_IsNull(unit_id) ? strdup(unit_id->valuestring) : NULL,
        percent ? percent->valuedouble : 0,
        unit_group_id && !cJSON_IsNull(unit_group_id) ? strdup(unit_group_id->valuestring) : NULL,
        currency_id && !cJSON_IsNull(currency_id) ? strdup(currency_id->valuestring) : NULL,
        discount_list_id && !cJSON_IsNull(discount_list_id) ? strdup(discount_list_id->valuestring) : NULL,
        rounding_policy_id && !cJSON_IsNull(rounding_policy_id) ? strdup(rounding_policy_id->valuestring) : NULL,
        quantity ? quantity->valuedouble : 0,
        item_id && !cJSON_IsNull(item_id) ? strdup(item_id->valuestring) : NULL,
        item_price_id && !cJSON_IsNull(item_price_id) ? strdup(item_price_id->valuestring) : NULL,
        invoice_line_id && !cJSON_IsNull(invoice_line_id) ? strdup(invoice_line_id->valuestring) : NULL,
        tax_amount_in_usd ? tax_amount_in_usd->valuedouble : 0,
        tax_base_amount_in_usd ? tax_base_amount_in_usd->valuedouble : 0
        );

    return invoice_line_update_dto_local_var;
end:
    return NULL;

}
