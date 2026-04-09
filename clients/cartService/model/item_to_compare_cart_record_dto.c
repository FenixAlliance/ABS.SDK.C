#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "item_to_compare_cart_record_dto.h"



item_to_compare_cart_record_dto_t *item_to_compare_cart_record_dto_create(
    char *id,
    char *timestamp,
    char *cart_id,
    char *item_id,
    char *item_title,
    char *item_short_description,
    char *item_primary_image_url,
    char *brand_id,
    char *brand_name,
    char *category_name,
    char *category_id,
    char *google_category_id,
    char *google_category_name,
    double total_taxes_in_usd,
    double total_price_in_usd,
    char *shipping_country_id,
    char *tenant_id
    ) {
    item_to_compare_cart_record_dto_t *item_to_compare_cart_record_dto_local_var = malloc(sizeof(item_to_compare_cart_record_dto_t));
    if (!item_to_compare_cart_record_dto_local_var) {
        return NULL;
    }
    item_to_compare_cart_record_dto_local_var->id = id;
    item_to_compare_cart_record_dto_local_var->timestamp = timestamp;
    item_to_compare_cart_record_dto_local_var->cart_id = cart_id;
    item_to_compare_cart_record_dto_local_var->item_id = item_id;
    item_to_compare_cart_record_dto_local_var->item_title = item_title;
    item_to_compare_cart_record_dto_local_var->item_short_description = item_short_description;
    item_to_compare_cart_record_dto_local_var->item_primary_image_url = item_primary_image_url;
    item_to_compare_cart_record_dto_local_var->brand_id = brand_id;
    item_to_compare_cart_record_dto_local_var->brand_name = brand_name;
    item_to_compare_cart_record_dto_local_var->category_name = category_name;
    item_to_compare_cart_record_dto_local_var->category_id = category_id;
    item_to_compare_cart_record_dto_local_var->google_category_id = google_category_id;
    item_to_compare_cart_record_dto_local_var->google_category_name = google_category_name;
    item_to_compare_cart_record_dto_local_var->total_taxes_in_usd = total_taxes_in_usd;
    item_to_compare_cart_record_dto_local_var->total_price_in_usd = total_price_in_usd;
    item_to_compare_cart_record_dto_local_var->shipping_country_id = shipping_country_id;
    item_to_compare_cart_record_dto_local_var->tenant_id = tenant_id;

    return item_to_compare_cart_record_dto_local_var;
}


void item_to_compare_cart_record_dto_free(item_to_compare_cart_record_dto_t *item_to_compare_cart_record_dto) {
    if(NULL == item_to_compare_cart_record_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (item_to_compare_cart_record_dto->id) {
        free(item_to_compare_cart_record_dto->id);
        item_to_compare_cart_record_dto->id = NULL;
    }
    if (item_to_compare_cart_record_dto->timestamp) {
        free(item_to_compare_cart_record_dto->timestamp);
        item_to_compare_cart_record_dto->timestamp = NULL;
    }
    if (item_to_compare_cart_record_dto->cart_id) {
        free(item_to_compare_cart_record_dto->cart_id);
        item_to_compare_cart_record_dto->cart_id = NULL;
    }
    if (item_to_compare_cart_record_dto->item_id) {
        free(item_to_compare_cart_record_dto->item_id);
        item_to_compare_cart_record_dto->item_id = NULL;
    }
    if (item_to_compare_cart_record_dto->item_title) {
        free(item_to_compare_cart_record_dto->item_title);
        item_to_compare_cart_record_dto->item_title = NULL;
    }
    if (item_to_compare_cart_record_dto->item_short_description) {
        free(item_to_compare_cart_record_dto->item_short_description);
        item_to_compare_cart_record_dto->item_short_description = NULL;
    }
    if (item_to_compare_cart_record_dto->item_primary_image_url) {
        free(item_to_compare_cart_record_dto->item_primary_image_url);
        item_to_compare_cart_record_dto->item_primary_image_url = NULL;
    }
    if (item_to_compare_cart_record_dto->brand_id) {
        free(item_to_compare_cart_record_dto->brand_id);
        item_to_compare_cart_record_dto->brand_id = NULL;
    }
    if (item_to_compare_cart_record_dto->brand_name) {
        free(item_to_compare_cart_record_dto->brand_name);
        item_to_compare_cart_record_dto->brand_name = NULL;
    }
    if (item_to_compare_cart_record_dto->category_name) {
        free(item_to_compare_cart_record_dto->category_name);
        item_to_compare_cart_record_dto->category_name = NULL;
    }
    if (item_to_compare_cart_record_dto->category_id) {
        free(item_to_compare_cart_record_dto->category_id);
        item_to_compare_cart_record_dto->category_id = NULL;
    }
    if (item_to_compare_cart_record_dto->google_category_id) {
        free(item_to_compare_cart_record_dto->google_category_id);
        item_to_compare_cart_record_dto->google_category_id = NULL;
    }
    if (item_to_compare_cart_record_dto->google_category_name) {
        free(item_to_compare_cart_record_dto->google_category_name);
        item_to_compare_cart_record_dto->google_category_name = NULL;
    }
    if (item_to_compare_cart_record_dto->shipping_country_id) {
        free(item_to_compare_cart_record_dto->shipping_country_id);
        item_to_compare_cart_record_dto->shipping_country_id = NULL;
    }
    if (item_to_compare_cart_record_dto->tenant_id) {
        free(item_to_compare_cart_record_dto->tenant_id);
        item_to_compare_cart_record_dto->tenant_id = NULL;
    }
    free(item_to_compare_cart_record_dto);
}

cJSON *item_to_compare_cart_record_dto_convertToJSON(item_to_compare_cart_record_dto_t *item_to_compare_cart_record_dto) {
    cJSON *item = cJSON_CreateObject();

    // item_to_compare_cart_record_dto->id
    if(item_to_compare_cart_record_dto->id) {
    if(cJSON_AddStringToObject(item, "id", item_to_compare_cart_record_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // item_to_compare_cart_record_dto->timestamp
    if(item_to_compare_cart_record_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", item_to_compare_cart_record_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // item_to_compare_cart_record_dto->cart_id
    if(item_to_compare_cart_record_dto->cart_id) {
    if(cJSON_AddStringToObject(item, "cartId", item_to_compare_cart_record_dto->cart_id) == NULL) {
    goto fail; //String
    }
    }


    // item_to_compare_cart_record_dto->item_id
    if(item_to_compare_cart_record_dto->item_id) {
    if(cJSON_AddStringToObject(item, "itemId", item_to_compare_cart_record_dto->item_id) == NULL) {
    goto fail; //String
    }
    }


    // item_to_compare_cart_record_dto->item_title
    if(item_to_compare_cart_record_dto->item_title) {
    if(cJSON_AddStringToObject(item, "itemTitle", item_to_compare_cart_record_dto->item_title) == NULL) {
    goto fail; //String
    }
    }


    // item_to_compare_cart_record_dto->item_short_description
    if(item_to_compare_cart_record_dto->item_short_description) {
    if(cJSON_AddStringToObject(item, "itemShortDescription", item_to_compare_cart_record_dto->item_short_description) == NULL) {
    goto fail; //String
    }
    }


    // item_to_compare_cart_record_dto->item_primary_image_url
    if(item_to_compare_cart_record_dto->item_primary_image_url) {
    if(cJSON_AddStringToObject(item, "itemPrimaryImageUrl", item_to_compare_cart_record_dto->item_primary_image_url) == NULL) {
    goto fail; //String
    }
    }


    // item_to_compare_cart_record_dto->brand_id
    if(item_to_compare_cart_record_dto->brand_id) {
    if(cJSON_AddStringToObject(item, "brandId", item_to_compare_cart_record_dto->brand_id) == NULL) {
    goto fail; //String
    }
    }


    // item_to_compare_cart_record_dto->brand_name
    if(item_to_compare_cart_record_dto->brand_name) {
    if(cJSON_AddStringToObject(item, "brandName", item_to_compare_cart_record_dto->brand_name) == NULL) {
    goto fail; //String
    }
    }


    // item_to_compare_cart_record_dto->category_name
    if(item_to_compare_cart_record_dto->category_name) {
    if(cJSON_AddStringToObject(item, "categoryName", item_to_compare_cart_record_dto->category_name) == NULL) {
    goto fail; //String
    }
    }


    // item_to_compare_cart_record_dto->category_id
    if(item_to_compare_cart_record_dto->category_id) {
    if(cJSON_AddStringToObject(item, "categoryId", item_to_compare_cart_record_dto->category_id) == NULL) {
    goto fail; //String
    }
    }


    // item_to_compare_cart_record_dto->google_category_id
    if(item_to_compare_cart_record_dto->google_category_id) {
    if(cJSON_AddStringToObject(item, "googleCategoryId", item_to_compare_cart_record_dto->google_category_id) == NULL) {
    goto fail; //String
    }
    }


    // item_to_compare_cart_record_dto->google_category_name
    if(item_to_compare_cart_record_dto->google_category_name) {
    if(cJSON_AddStringToObject(item, "googleCategoryName", item_to_compare_cart_record_dto->google_category_name) == NULL) {
    goto fail; //String
    }
    }


    // item_to_compare_cart_record_dto->total_taxes_in_usd
    if(item_to_compare_cart_record_dto->total_taxes_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalTaxesInUsd", item_to_compare_cart_record_dto->total_taxes_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // item_to_compare_cart_record_dto->total_price_in_usd
    if(item_to_compare_cart_record_dto->total_price_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalPriceInUsd", item_to_compare_cart_record_dto->total_price_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // item_to_compare_cart_record_dto->shipping_country_id
    if(item_to_compare_cart_record_dto->shipping_country_id) {
    if(cJSON_AddStringToObject(item, "shippingCountryId", item_to_compare_cart_record_dto->shipping_country_id) == NULL) {
    goto fail; //String
    }
    }


    // item_to_compare_cart_record_dto->tenant_id
    if(item_to_compare_cart_record_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", item_to_compare_cart_record_dto->tenant_id) == NULL) {
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

item_to_compare_cart_record_dto_t *item_to_compare_cart_record_dto_parseFromJSON(cJSON *item_to_compare_cart_record_dtoJSON){

    item_to_compare_cart_record_dto_t *item_to_compare_cart_record_dto_local_var = NULL;

    // item_to_compare_cart_record_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(item_to_compare_cart_record_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // item_to_compare_cart_record_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(item_to_compare_cart_record_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // item_to_compare_cart_record_dto->cart_id
    cJSON *cart_id = cJSON_GetObjectItemCaseSensitive(item_to_compare_cart_record_dtoJSON, "cartId");
    if (cart_id) { 
    if(!cJSON_IsString(cart_id) && !cJSON_IsNull(cart_id))
    {
    goto end; //String
    }
    }

    // item_to_compare_cart_record_dto->item_id
    cJSON *item_id = cJSON_GetObjectItemCaseSensitive(item_to_compare_cart_record_dtoJSON, "itemId");
    if (item_id) { 
    if(!cJSON_IsString(item_id) && !cJSON_IsNull(item_id))
    {
    goto end; //String
    }
    }

    // item_to_compare_cart_record_dto->item_title
    cJSON *item_title = cJSON_GetObjectItemCaseSensitive(item_to_compare_cart_record_dtoJSON, "itemTitle");
    if (item_title) { 
    if(!cJSON_IsString(item_title) && !cJSON_IsNull(item_title))
    {
    goto end; //String
    }
    }

    // item_to_compare_cart_record_dto->item_short_description
    cJSON *item_short_description = cJSON_GetObjectItemCaseSensitive(item_to_compare_cart_record_dtoJSON, "itemShortDescription");
    if (item_short_description) { 
    if(!cJSON_IsString(item_short_description) && !cJSON_IsNull(item_short_description))
    {
    goto end; //String
    }
    }

    // item_to_compare_cart_record_dto->item_primary_image_url
    cJSON *item_primary_image_url = cJSON_GetObjectItemCaseSensitive(item_to_compare_cart_record_dtoJSON, "itemPrimaryImageUrl");
    if (item_primary_image_url) { 
    if(!cJSON_IsString(item_primary_image_url) && !cJSON_IsNull(item_primary_image_url))
    {
    goto end; //String
    }
    }

    // item_to_compare_cart_record_dto->brand_id
    cJSON *brand_id = cJSON_GetObjectItemCaseSensitive(item_to_compare_cart_record_dtoJSON, "brandId");
    if (brand_id) { 
    if(!cJSON_IsString(brand_id) && !cJSON_IsNull(brand_id))
    {
    goto end; //String
    }
    }

    // item_to_compare_cart_record_dto->brand_name
    cJSON *brand_name = cJSON_GetObjectItemCaseSensitive(item_to_compare_cart_record_dtoJSON, "brandName");
    if (brand_name) { 
    if(!cJSON_IsString(brand_name) && !cJSON_IsNull(brand_name))
    {
    goto end; //String
    }
    }

    // item_to_compare_cart_record_dto->category_name
    cJSON *category_name = cJSON_GetObjectItemCaseSensitive(item_to_compare_cart_record_dtoJSON, "categoryName");
    if (category_name) { 
    if(!cJSON_IsString(category_name) && !cJSON_IsNull(category_name))
    {
    goto end; //String
    }
    }

    // item_to_compare_cart_record_dto->category_id
    cJSON *category_id = cJSON_GetObjectItemCaseSensitive(item_to_compare_cart_record_dtoJSON, "categoryId");
    if (category_id) { 
    if(!cJSON_IsString(category_id) && !cJSON_IsNull(category_id))
    {
    goto end; //String
    }
    }

    // item_to_compare_cart_record_dto->google_category_id
    cJSON *google_category_id = cJSON_GetObjectItemCaseSensitive(item_to_compare_cart_record_dtoJSON, "googleCategoryId");
    if (google_category_id) { 
    if(!cJSON_IsString(google_category_id) && !cJSON_IsNull(google_category_id))
    {
    goto end; //String
    }
    }

    // item_to_compare_cart_record_dto->google_category_name
    cJSON *google_category_name = cJSON_GetObjectItemCaseSensitive(item_to_compare_cart_record_dtoJSON, "googleCategoryName");
    if (google_category_name) { 
    if(!cJSON_IsString(google_category_name) && !cJSON_IsNull(google_category_name))
    {
    goto end; //String
    }
    }

    // item_to_compare_cart_record_dto->total_taxes_in_usd
    cJSON *total_taxes_in_usd = cJSON_GetObjectItemCaseSensitive(item_to_compare_cart_record_dtoJSON, "totalTaxesInUsd");
    if (total_taxes_in_usd) { 
    if(!cJSON_IsNumber(total_taxes_in_usd))
    {
    goto end; //Numeric
    }
    }

    // item_to_compare_cart_record_dto->total_price_in_usd
    cJSON *total_price_in_usd = cJSON_GetObjectItemCaseSensitive(item_to_compare_cart_record_dtoJSON, "totalPriceInUsd");
    if (total_price_in_usd) { 
    if(!cJSON_IsNumber(total_price_in_usd))
    {
    goto end; //Numeric
    }
    }

    // item_to_compare_cart_record_dto->shipping_country_id
    cJSON *shipping_country_id = cJSON_GetObjectItemCaseSensitive(item_to_compare_cart_record_dtoJSON, "shippingCountryId");
    if (shipping_country_id) { 
    if(!cJSON_IsString(shipping_country_id) && !cJSON_IsNull(shipping_country_id))
    {
    goto end; //String
    }
    }

    // item_to_compare_cart_record_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(item_to_compare_cart_record_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }


    item_to_compare_cart_record_dto_local_var = item_to_compare_cart_record_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        cart_id && !cJSON_IsNull(cart_id) ? strdup(cart_id->valuestring) : NULL,
        item_id && !cJSON_IsNull(item_id) ? strdup(item_id->valuestring) : NULL,
        item_title && !cJSON_IsNull(item_title) ? strdup(item_title->valuestring) : NULL,
        item_short_description && !cJSON_IsNull(item_short_description) ? strdup(item_short_description->valuestring) : NULL,
        item_primary_image_url && !cJSON_IsNull(item_primary_image_url) ? strdup(item_primary_image_url->valuestring) : NULL,
        brand_id && !cJSON_IsNull(brand_id) ? strdup(brand_id->valuestring) : NULL,
        brand_name && !cJSON_IsNull(brand_name) ? strdup(brand_name->valuestring) : NULL,
        category_name && !cJSON_IsNull(category_name) ? strdup(category_name->valuestring) : NULL,
        category_id && !cJSON_IsNull(category_id) ? strdup(category_id->valuestring) : NULL,
        google_category_id && !cJSON_IsNull(google_category_id) ? strdup(google_category_id->valuestring) : NULL,
        google_category_name && !cJSON_IsNull(google_category_name) ? strdup(google_category_name->valuestring) : NULL,
        total_taxes_in_usd ? total_taxes_in_usd->valuedouble : 0,
        total_price_in_usd ? total_price_in_usd->valuedouble : 0,
        shipping_country_id && !cJSON_IsNull(shipping_country_id) ? strdup(shipping_country_id->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL
        );

    return item_to_compare_cart_record_dto_local_var;
end:
    return NULL;

}
