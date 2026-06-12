#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "bulk_product.h"



bulk_product_t *bulk_product_create(
    char *id,
    char *sku,
    char *title,
    char *type,
    char *image,
    char *brand,
    char *currency,
    char *supplier,
    char *tax_policies,
    char *supplier_code,
    char *google_category,
    char *shipping_country,
    double regular_price,
    double discount_percentage,
    double discount_amount,
    double current_stock,
    int taxable,
    int in_stock,
    int on_discount,
    int by_request,
    int is_fixed_discount,
    int manage_inventory,
    int is_deadline_discount,
    char *deadline_discount_from_date,
    char *deadline_discount_due_date
    ) {
    bulk_product_t *bulk_product_local_var = malloc(sizeof(bulk_product_t));
    if (!bulk_product_local_var) {
        return NULL;
    }
    bulk_product_local_var->id = id;
    bulk_product_local_var->sku = sku;
    bulk_product_local_var->title = title;
    bulk_product_local_var->type = type;
    bulk_product_local_var->image = image;
    bulk_product_local_var->brand = brand;
    bulk_product_local_var->currency = currency;
    bulk_product_local_var->supplier = supplier;
    bulk_product_local_var->tax_policies = tax_policies;
    bulk_product_local_var->supplier_code = supplier_code;
    bulk_product_local_var->google_category = google_category;
    bulk_product_local_var->shipping_country = shipping_country;
    bulk_product_local_var->regular_price = regular_price;
    bulk_product_local_var->discount_percentage = discount_percentage;
    bulk_product_local_var->discount_amount = discount_amount;
    bulk_product_local_var->current_stock = current_stock;
    bulk_product_local_var->taxable = taxable;
    bulk_product_local_var->in_stock = in_stock;
    bulk_product_local_var->on_discount = on_discount;
    bulk_product_local_var->by_request = by_request;
    bulk_product_local_var->is_fixed_discount = is_fixed_discount;
    bulk_product_local_var->manage_inventory = manage_inventory;
    bulk_product_local_var->is_deadline_discount = is_deadline_discount;
    bulk_product_local_var->deadline_discount_from_date = deadline_discount_from_date;
    bulk_product_local_var->deadline_discount_due_date = deadline_discount_due_date;

    return bulk_product_local_var;
}


void bulk_product_free(bulk_product_t *bulk_product) {
    if(NULL == bulk_product){
        return ;
    }
    listEntry_t *listEntry;
    if (bulk_product->id) {
        free(bulk_product->id);
        bulk_product->id = NULL;
    }
    if (bulk_product->sku) {
        free(bulk_product->sku);
        bulk_product->sku = NULL;
    }
    if (bulk_product->title) {
        free(bulk_product->title);
        bulk_product->title = NULL;
    }
    if (bulk_product->type) {
        free(bulk_product->type);
        bulk_product->type = NULL;
    }
    if (bulk_product->image) {
        free(bulk_product->image);
        bulk_product->image = NULL;
    }
    if (bulk_product->brand) {
        free(bulk_product->brand);
        bulk_product->brand = NULL;
    }
    if (bulk_product->currency) {
        free(bulk_product->currency);
        bulk_product->currency = NULL;
    }
    if (bulk_product->supplier) {
        free(bulk_product->supplier);
        bulk_product->supplier = NULL;
    }
    if (bulk_product->tax_policies) {
        free(bulk_product->tax_policies);
        bulk_product->tax_policies = NULL;
    }
    if (bulk_product->supplier_code) {
        free(bulk_product->supplier_code);
        bulk_product->supplier_code = NULL;
    }
    if (bulk_product->google_category) {
        free(bulk_product->google_category);
        bulk_product->google_category = NULL;
    }
    if (bulk_product->shipping_country) {
        free(bulk_product->shipping_country);
        bulk_product->shipping_country = NULL;
    }
    if (bulk_product->deadline_discount_from_date) {
        free(bulk_product->deadline_discount_from_date);
        bulk_product->deadline_discount_from_date = NULL;
    }
    if (bulk_product->deadline_discount_due_date) {
        free(bulk_product->deadline_discount_due_date);
        bulk_product->deadline_discount_due_date = NULL;
    }
    free(bulk_product);
}

cJSON *bulk_product_convertToJSON(bulk_product_t *bulk_product) {
    cJSON *item = cJSON_CreateObject();

    // bulk_product->id
    if(bulk_product->id) {
    if(cJSON_AddStringToObject(item, "id", bulk_product->id) == NULL) {
    goto fail; //String
    }
    }


    // bulk_product->sku
    if(bulk_product->sku) {
    if(cJSON_AddStringToObject(item, "sku", bulk_product->sku) == NULL) {
    goto fail; //String
    }
    }


    // bulk_product->title
    if(bulk_product->title) {
    if(cJSON_AddStringToObject(item, "title", bulk_product->title) == NULL) {
    goto fail; //String
    }
    }


    // bulk_product->type
    if(bulk_product->type) {
    if(cJSON_AddStringToObject(item, "type", bulk_product->type) == NULL) {
    goto fail; //String
    }
    }


    // bulk_product->image
    if(bulk_product->image) {
    if(cJSON_AddStringToObject(item, "image", bulk_product->image) == NULL) {
    goto fail; //String
    }
    }


    // bulk_product->brand
    if(bulk_product->brand) {
    if(cJSON_AddStringToObject(item, "brand", bulk_product->brand) == NULL) {
    goto fail; //String
    }
    }


    // bulk_product->currency
    if(bulk_product->currency) {
    if(cJSON_AddStringToObject(item, "currency", bulk_product->currency) == NULL) {
    goto fail; //String
    }
    }


    // bulk_product->supplier
    if(bulk_product->supplier) {
    if(cJSON_AddStringToObject(item, "supplier", bulk_product->supplier) == NULL) {
    goto fail; //String
    }
    }


    // bulk_product->tax_policies
    if(bulk_product->tax_policies) {
    if(cJSON_AddStringToObject(item, "taxPolicies", bulk_product->tax_policies) == NULL) {
    goto fail; //String
    }
    }


    // bulk_product->supplier_code
    if(bulk_product->supplier_code) {
    if(cJSON_AddStringToObject(item, "supplierCode", bulk_product->supplier_code) == NULL) {
    goto fail; //String
    }
    }


    // bulk_product->google_category
    if(bulk_product->google_category) {
    if(cJSON_AddStringToObject(item, "googleCategory", bulk_product->google_category) == NULL) {
    goto fail; //String
    }
    }


    // bulk_product->shipping_country
    if(bulk_product->shipping_country) {
    if(cJSON_AddStringToObject(item, "shippingCountry", bulk_product->shipping_country) == NULL) {
    goto fail; //String
    }
    }


    // bulk_product->regular_price
    if(bulk_product->regular_price) {
    if(cJSON_AddNumberToObject(item, "regularPrice", bulk_product->regular_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // bulk_product->discount_percentage
    if(bulk_product->discount_percentage) {
    if(cJSON_AddNumberToObject(item, "discountPercentage", bulk_product->discount_percentage) == NULL) {
    goto fail; //Numeric
    }
    }


    // bulk_product->discount_amount
    if(bulk_product->discount_amount) {
    if(cJSON_AddNumberToObject(item, "discountAmount", bulk_product->discount_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // bulk_product->current_stock
    if(bulk_product->current_stock) {
    if(cJSON_AddNumberToObject(item, "currentStock", bulk_product->current_stock) == NULL) {
    goto fail; //Numeric
    }
    }


    // bulk_product->taxable
    if(bulk_product->taxable) {
    if(cJSON_AddBoolToObject(item, "taxable", bulk_product->taxable) == NULL) {
    goto fail; //Bool
    }
    }


    // bulk_product->in_stock
    if(bulk_product->in_stock) {
    if(cJSON_AddBoolToObject(item, "inStock", bulk_product->in_stock) == NULL) {
    goto fail; //Bool
    }
    }


    // bulk_product->on_discount
    if(bulk_product->on_discount) {
    if(cJSON_AddBoolToObject(item, "onDiscount", bulk_product->on_discount) == NULL) {
    goto fail; //Bool
    }
    }


    // bulk_product->by_request
    if(bulk_product->by_request) {
    if(cJSON_AddBoolToObject(item, "byRequest", bulk_product->by_request) == NULL) {
    goto fail; //Bool
    }
    }


    // bulk_product->is_fixed_discount
    if(bulk_product->is_fixed_discount) {
    if(cJSON_AddBoolToObject(item, "isFixedDiscount", bulk_product->is_fixed_discount) == NULL) {
    goto fail; //Bool
    }
    }


    // bulk_product->manage_inventory
    if(bulk_product->manage_inventory) {
    if(cJSON_AddBoolToObject(item, "manageInventory", bulk_product->manage_inventory) == NULL) {
    goto fail; //Bool
    }
    }


    // bulk_product->is_deadline_discount
    if(bulk_product->is_deadline_discount) {
    if(cJSON_AddBoolToObject(item, "isDeadlineDiscount", bulk_product->is_deadline_discount) == NULL) {
    goto fail; //Bool
    }
    }


    // bulk_product->deadline_discount_from_date
    if(bulk_product->deadline_discount_from_date) {
    if(cJSON_AddStringToObject(item, "deadlineDiscountFromDate", bulk_product->deadline_discount_from_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // bulk_product->deadline_discount_due_date
    if(bulk_product->deadline_discount_due_date) {
    if(cJSON_AddStringToObject(item, "deadlineDiscountDueDate", bulk_product->deadline_discount_due_date) == NULL) {
    goto fail; //Date-Time
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

bulk_product_t *bulk_product_parseFromJSON(cJSON *bulk_productJSON){

    bulk_product_t *bulk_product_local_var = NULL;

    // bulk_product->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(bulk_productJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // bulk_product->sku
    cJSON *sku = cJSON_GetObjectItemCaseSensitive(bulk_productJSON, "sku");
    if (sku) { 
    if(!cJSON_IsString(sku) && !cJSON_IsNull(sku))
    {
    goto end; //String
    }
    }

    // bulk_product->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(bulk_productJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // bulk_product->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(bulk_productJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // bulk_product->image
    cJSON *image = cJSON_GetObjectItemCaseSensitive(bulk_productJSON, "image");
    if (image) { 
    if(!cJSON_IsString(image) && !cJSON_IsNull(image))
    {
    goto end; //String
    }
    }

    // bulk_product->brand
    cJSON *brand = cJSON_GetObjectItemCaseSensitive(bulk_productJSON, "brand");
    if (brand) { 
    if(!cJSON_IsString(brand) && !cJSON_IsNull(brand))
    {
    goto end; //String
    }
    }

    // bulk_product->currency
    cJSON *currency = cJSON_GetObjectItemCaseSensitive(bulk_productJSON, "currency");
    if (currency) { 
    if(!cJSON_IsString(currency) && !cJSON_IsNull(currency))
    {
    goto end; //String
    }
    }

    // bulk_product->supplier
    cJSON *supplier = cJSON_GetObjectItemCaseSensitive(bulk_productJSON, "supplier");
    if (supplier) { 
    if(!cJSON_IsString(supplier) && !cJSON_IsNull(supplier))
    {
    goto end; //String
    }
    }

    // bulk_product->tax_policies
    cJSON *tax_policies = cJSON_GetObjectItemCaseSensitive(bulk_productJSON, "taxPolicies");
    if (tax_policies) { 
    if(!cJSON_IsString(tax_policies) && !cJSON_IsNull(tax_policies))
    {
    goto end; //String
    }
    }

    // bulk_product->supplier_code
    cJSON *supplier_code = cJSON_GetObjectItemCaseSensitive(bulk_productJSON, "supplierCode");
    if (supplier_code) { 
    if(!cJSON_IsString(supplier_code) && !cJSON_IsNull(supplier_code))
    {
    goto end; //String
    }
    }

    // bulk_product->google_category
    cJSON *google_category = cJSON_GetObjectItemCaseSensitive(bulk_productJSON, "googleCategory");
    if (google_category) { 
    if(!cJSON_IsString(google_category) && !cJSON_IsNull(google_category))
    {
    goto end; //String
    }
    }

    // bulk_product->shipping_country
    cJSON *shipping_country = cJSON_GetObjectItemCaseSensitive(bulk_productJSON, "shippingCountry");
    if (shipping_country) { 
    if(!cJSON_IsString(shipping_country) && !cJSON_IsNull(shipping_country))
    {
    goto end; //String
    }
    }

    // bulk_product->regular_price
    cJSON *regular_price = cJSON_GetObjectItemCaseSensitive(bulk_productJSON, "regularPrice");
    if (regular_price) { 
    if(!cJSON_IsNumber(regular_price))
    {
    goto end; //Numeric
    }
    }

    // bulk_product->discount_percentage
    cJSON *discount_percentage = cJSON_GetObjectItemCaseSensitive(bulk_productJSON, "discountPercentage");
    if (discount_percentage) { 
    if(!cJSON_IsNumber(discount_percentage))
    {
    goto end; //Numeric
    }
    }

    // bulk_product->discount_amount
    cJSON *discount_amount = cJSON_GetObjectItemCaseSensitive(bulk_productJSON, "discountAmount");
    if (discount_amount) { 
    if(!cJSON_IsNumber(discount_amount))
    {
    goto end; //Numeric
    }
    }

    // bulk_product->current_stock
    cJSON *current_stock = cJSON_GetObjectItemCaseSensitive(bulk_productJSON, "currentStock");
    if (current_stock) { 
    if(!cJSON_IsNumber(current_stock))
    {
    goto end; //Numeric
    }
    }

    // bulk_product->taxable
    cJSON *taxable = cJSON_GetObjectItemCaseSensitive(bulk_productJSON, "taxable");
    if (taxable) { 
    if(!cJSON_IsBool(taxable))
    {
    goto end; //Bool
    }
    }

    // bulk_product->in_stock
    cJSON *in_stock = cJSON_GetObjectItemCaseSensitive(bulk_productJSON, "inStock");
    if (in_stock) { 
    if(!cJSON_IsBool(in_stock))
    {
    goto end; //Bool
    }
    }

    // bulk_product->on_discount
    cJSON *on_discount = cJSON_GetObjectItemCaseSensitive(bulk_productJSON, "onDiscount");
    if (on_discount) { 
    if(!cJSON_IsBool(on_discount))
    {
    goto end; //Bool
    }
    }

    // bulk_product->by_request
    cJSON *by_request = cJSON_GetObjectItemCaseSensitive(bulk_productJSON, "byRequest");
    if (by_request) { 
    if(!cJSON_IsBool(by_request))
    {
    goto end; //Bool
    }
    }

    // bulk_product->is_fixed_discount
    cJSON *is_fixed_discount = cJSON_GetObjectItemCaseSensitive(bulk_productJSON, "isFixedDiscount");
    if (is_fixed_discount) { 
    if(!cJSON_IsBool(is_fixed_discount))
    {
    goto end; //Bool
    }
    }

    // bulk_product->manage_inventory
    cJSON *manage_inventory = cJSON_GetObjectItemCaseSensitive(bulk_productJSON, "manageInventory");
    if (manage_inventory) { 
    if(!cJSON_IsBool(manage_inventory))
    {
    goto end; //Bool
    }
    }

    // bulk_product->is_deadline_discount
    cJSON *is_deadline_discount = cJSON_GetObjectItemCaseSensitive(bulk_productJSON, "isDeadlineDiscount");
    if (is_deadline_discount) { 
    if(!cJSON_IsBool(is_deadline_discount))
    {
    goto end; //Bool
    }
    }

    // bulk_product->deadline_discount_from_date
    cJSON *deadline_discount_from_date = cJSON_GetObjectItemCaseSensitive(bulk_productJSON, "deadlineDiscountFromDate");
    if (deadline_discount_from_date) { 
    if(!cJSON_IsString(deadline_discount_from_date) && !cJSON_IsNull(deadline_discount_from_date))
    {
    goto end; //DateTime
    }
    }

    // bulk_product->deadline_discount_due_date
    cJSON *deadline_discount_due_date = cJSON_GetObjectItemCaseSensitive(bulk_productJSON, "deadlineDiscountDueDate");
    if (deadline_discount_due_date) { 
    if(!cJSON_IsString(deadline_discount_due_date) && !cJSON_IsNull(deadline_discount_due_date))
    {
    goto end; //DateTime
    }
    }


    bulk_product_local_var = bulk_product_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        sku && !cJSON_IsNull(sku) ? strdup(sku->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        type && !cJSON_IsNull(type) ? strdup(type->valuestring) : NULL,
        image && !cJSON_IsNull(image) ? strdup(image->valuestring) : NULL,
        brand && !cJSON_IsNull(brand) ? strdup(brand->valuestring) : NULL,
        currency && !cJSON_IsNull(currency) ? strdup(currency->valuestring) : NULL,
        supplier && !cJSON_IsNull(supplier) ? strdup(supplier->valuestring) : NULL,
        tax_policies && !cJSON_IsNull(tax_policies) ? strdup(tax_policies->valuestring) : NULL,
        supplier_code && !cJSON_IsNull(supplier_code) ? strdup(supplier_code->valuestring) : NULL,
        google_category && !cJSON_IsNull(google_category) ? strdup(google_category->valuestring) : NULL,
        shipping_country && !cJSON_IsNull(shipping_country) ? strdup(shipping_country->valuestring) : NULL,
        regular_price ? regular_price->valuedouble : 0,
        discount_percentage ? discount_percentage->valuedouble : 0,
        discount_amount ? discount_amount->valuedouble : 0,
        current_stock ? current_stock->valuedouble : 0,
        taxable ? taxable->valueint : 0,
        in_stock ? in_stock->valueint : 0,
        on_discount ? on_discount->valueint : 0,
        by_request ? by_request->valueint : 0,
        is_fixed_discount ? is_fixed_discount->valueint : 0,
        manage_inventory ? manage_inventory->valueint : 0,
        is_deadline_discount ? is_deadline_discount->valueint : 0,
        deadline_discount_from_date && !cJSON_IsNull(deadline_discount_from_date) ? strdup(deadline_discount_from_date->valuestring) : NULL,
        deadline_discount_due_date && !cJSON_IsNull(deadline_discount_due_date) ? strdup(deadline_discount_due_date->valuestring) : NULL
        );

    return bulk_product_local_var;
end:
    return NULL;

}
