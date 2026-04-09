#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cart_dto.h"



cart_dto_t *cart_dto_create(
    char *id,
    char *ip,
    char *type,
    double total,
    double taxes,
    double freight,
    double sub_total,
    char *currency_id,
    char *country_id,
    int item_cart_records_count,
    int item_to_compare_records_count
    ) {
    cart_dto_t *cart_dto_local_var = malloc(sizeof(cart_dto_t));
    if (!cart_dto_local_var) {
        return NULL;
    }
    cart_dto_local_var->id = id;
    cart_dto_local_var->ip = ip;
    cart_dto_local_var->type = type;
    cart_dto_local_var->total = total;
    cart_dto_local_var->taxes = taxes;
    cart_dto_local_var->freight = freight;
    cart_dto_local_var->sub_total = sub_total;
    cart_dto_local_var->currency_id = currency_id;
    cart_dto_local_var->country_id = country_id;
    cart_dto_local_var->item_cart_records_count = item_cart_records_count;
    cart_dto_local_var->item_to_compare_records_count = item_to_compare_records_count;

    return cart_dto_local_var;
}


void cart_dto_free(cart_dto_t *cart_dto) {
    if(NULL == cart_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (cart_dto->id) {
        free(cart_dto->id);
        cart_dto->id = NULL;
    }
    if (cart_dto->ip) {
        free(cart_dto->ip);
        cart_dto->ip = NULL;
    }
    if (cart_dto->type) {
        free(cart_dto->type);
        cart_dto->type = NULL;
    }
    if (cart_dto->currency_id) {
        free(cart_dto->currency_id);
        cart_dto->currency_id = NULL;
    }
    if (cart_dto->country_id) {
        free(cart_dto->country_id);
        cart_dto->country_id = NULL;
    }
    free(cart_dto);
}

cJSON *cart_dto_convertToJSON(cart_dto_t *cart_dto) {
    cJSON *item = cJSON_CreateObject();

    // cart_dto->id
    if(cart_dto->id) {
    if(cJSON_AddStringToObject(item, "id", cart_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // cart_dto->ip
    if(cart_dto->ip) {
    if(cJSON_AddStringToObject(item, "ip", cart_dto->ip) == NULL) {
    goto fail; //String
    }
    }


    // cart_dto->type
    if(cart_dto->type) {
    if(cJSON_AddStringToObject(item, "type", cart_dto->type) == NULL) {
    goto fail; //String
    }
    }


    // cart_dto->total
    if(cart_dto->total) {
    if(cJSON_AddNumberToObject(item, "total", cart_dto->total) == NULL) {
    goto fail; //Numeric
    }
    }


    // cart_dto->taxes
    if(cart_dto->taxes) {
    if(cJSON_AddNumberToObject(item, "taxes", cart_dto->taxes) == NULL) {
    goto fail; //Numeric
    }
    }


    // cart_dto->freight
    if(cart_dto->freight) {
    if(cJSON_AddNumberToObject(item, "freight", cart_dto->freight) == NULL) {
    goto fail; //Numeric
    }
    }


    // cart_dto->sub_total
    if(cart_dto->sub_total) {
    if(cJSON_AddNumberToObject(item, "subTotal", cart_dto->sub_total) == NULL) {
    goto fail; //Numeric
    }
    }


    // cart_dto->currency_id
    if(cart_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", cart_dto->currency_id) == NULL) {
    goto fail; //String
    }
    }


    // cart_dto->country_id
    if(cart_dto->country_id) {
    if(cJSON_AddStringToObject(item, "countryId", cart_dto->country_id) == NULL) {
    goto fail; //String
    }
    }


    // cart_dto->item_cart_records_count
    if(cart_dto->item_cart_records_count) {
    if(cJSON_AddNumberToObject(item, "itemCartRecordsCount", cart_dto->item_cart_records_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // cart_dto->item_to_compare_records_count
    if(cart_dto->item_to_compare_records_count) {
    if(cJSON_AddNumberToObject(item, "itemToCompareRecordsCount", cart_dto->item_to_compare_records_count) == NULL) {
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

cart_dto_t *cart_dto_parseFromJSON(cJSON *cart_dtoJSON){

    cart_dto_t *cart_dto_local_var = NULL;

    // cart_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(cart_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // cart_dto->ip
    cJSON *ip = cJSON_GetObjectItemCaseSensitive(cart_dtoJSON, "ip");
    if (ip) { 
    if(!cJSON_IsString(ip) && !cJSON_IsNull(ip))
    {
    goto end; //String
    }
    }

    // cart_dto->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(cart_dtoJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // cart_dto->total
    cJSON *total = cJSON_GetObjectItemCaseSensitive(cart_dtoJSON, "total");
    if (total) { 
    if(!cJSON_IsNumber(total))
    {
    goto end; //Numeric
    }
    }

    // cart_dto->taxes
    cJSON *taxes = cJSON_GetObjectItemCaseSensitive(cart_dtoJSON, "taxes");
    if (taxes) { 
    if(!cJSON_IsNumber(taxes))
    {
    goto end; //Numeric
    }
    }

    // cart_dto->freight
    cJSON *freight = cJSON_GetObjectItemCaseSensitive(cart_dtoJSON, "freight");
    if (freight) { 
    if(!cJSON_IsNumber(freight))
    {
    goto end; //Numeric
    }
    }

    // cart_dto->sub_total
    cJSON *sub_total = cJSON_GetObjectItemCaseSensitive(cart_dtoJSON, "subTotal");
    if (sub_total) { 
    if(!cJSON_IsNumber(sub_total))
    {
    goto end; //Numeric
    }
    }

    // cart_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(cart_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }

    // cart_dto->country_id
    cJSON *country_id = cJSON_GetObjectItemCaseSensitive(cart_dtoJSON, "countryId");
    if (country_id) { 
    if(!cJSON_IsString(country_id) && !cJSON_IsNull(country_id))
    {
    goto end; //String
    }
    }

    // cart_dto->item_cart_records_count
    cJSON *item_cart_records_count = cJSON_GetObjectItemCaseSensitive(cart_dtoJSON, "itemCartRecordsCount");
    if (item_cart_records_count) { 
    if(!cJSON_IsNumber(item_cart_records_count))
    {
    goto end; //Numeric
    }
    }

    // cart_dto->item_to_compare_records_count
    cJSON *item_to_compare_records_count = cJSON_GetObjectItemCaseSensitive(cart_dtoJSON, "itemToCompareRecordsCount");
    if (item_to_compare_records_count) { 
    if(!cJSON_IsNumber(item_to_compare_records_count))
    {
    goto end; //Numeric
    }
    }


    cart_dto_local_var = cart_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        ip && !cJSON_IsNull(ip) ? strdup(ip->valuestring) : NULL,
        type && !cJSON_IsNull(type) ? strdup(type->valuestring) : NULL,
        total ? total->valuedouble : 0,
        taxes ? taxes->valuedouble : 0,
        freight ? freight->valuedouble : 0,
        sub_total ? sub_total->valuedouble : 0,
        currency_id && !cJSON_IsNull(currency_id) ? strdup(currency_id->valuestring) : NULL,
        country_id && !cJSON_IsNull(country_id) ? strdup(country_id->valuestring) : NULL,
        item_cart_records_count ? item_cart_records_count->valuedouble : 0,
        item_to_compare_records_count ? item_to_compare_records_count->valuedouble : 0
        );

    return cart_dto_local_var;
end:
    return NULL;

}
