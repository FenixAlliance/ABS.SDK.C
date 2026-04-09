/*
 * inventory_options.h
 *
 * 
 */

#ifndef _inventory_options_H_
#define _inventory_options_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inventory_options_t inventory_options_t;


// Enum STOCKDISPLAYFORMAT for inventory_options

typedef enum  { contentservice_inventory_options_STOCKDISPLAYFORMAT_NULL = 0, contentservice_inventory_options_STOCKDISPLAYFORMAT_AlwaysDisplayRemainingQuantity, contentservice_inventory_options_STOCKDISPLAYFORMAT_OnlyDisplayRemainingQuantityWhenStockIsLow, contentservice_inventory_options_STOCKDISPLAYFORMAT_NeverDisplayRemainingQuantity } contentservice_inventory_options_STOCKDISPLAYFORMAT_e;

char* inventory_options_stock_display_format_ToString(contentservice_inventory_options_STOCKDISPLAYFORMAT_e stock_display_format);

contentservice_inventory_options_STOCKDISPLAYFORMAT_e inventory_options_stock_display_format_FromString(char* stock_display_format);



typedef struct inventory_options_t {
    int enable_stock_management; //boolean
    int hide_out_of_stock_products; //boolean
    int enable_low_stock_notifications; //boolean
    int enable_out_of_stock_notifications; //boolean
    char *stock_notification_recipients; // string
    int hold_stock; //numeric
    int low_stock_threshold; //numeric
    int out_of_stock_threshold; //numeric
    contentservice_inventory_options_STOCKDISPLAYFORMAT_e stock_display_format; //enum

} inventory_options_t;

inventory_options_t *inventory_options_create(
    int enable_stock_management,
    int hide_out_of_stock_products,
    int enable_low_stock_notifications,
    int enable_out_of_stock_notifications,
    char *stock_notification_recipients,
    int hold_stock,
    int low_stock_threshold,
    int out_of_stock_threshold,
    contentservice_inventory_options_STOCKDISPLAYFORMAT_e stock_display_format
);

void inventory_options_free(inventory_options_t *inventory_options);

inventory_options_t *inventory_options_parseFromJSON(cJSON *inventory_optionsJSON);

cJSON *inventory_options_convertToJSON(inventory_options_t *inventory_options);

#endif /* _inventory_options_H_ */

