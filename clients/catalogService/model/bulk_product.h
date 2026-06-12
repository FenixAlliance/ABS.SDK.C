/*
 * bulk_product.h
 *
 * 
 */

#ifndef _bulk_product_H_
#define _bulk_product_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct bulk_product_t bulk_product_t;




typedef struct bulk_product_t {
    char *id; // string
    char *sku; // string
    char *title; // string
    char *type; // string
    char *image; // string
    char *brand; // string
    char *currency; // string
    char *supplier; // string
    char *tax_policies; // string
    char *supplier_code; // string
    char *google_category; // string
    char *shipping_country; // string
    double regular_price; //numeric
    double discount_percentage; //numeric
    double discount_amount; //numeric
    double current_stock; //numeric
    int taxable; //boolean
    int in_stock; //boolean
    int on_discount; //boolean
    int by_request; //boolean
    int is_fixed_discount; //boolean
    int manage_inventory; //boolean
    int is_deadline_discount; //boolean
    char *deadline_discount_from_date; //date time
    char *deadline_discount_due_date; //date time

} bulk_product_t;

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
);

void bulk_product_free(bulk_product_t *bulk_product);

bulk_product_t *bulk_product_parseFromJSON(cJSON *bulk_productJSON);

cJSON *bulk_product_convertToJSON(bulk_product_t *bulk_product);

#endif /* _bulk_product_H_ */

