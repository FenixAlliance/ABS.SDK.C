#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inventory_options.h"


char* inventory_options_stock_display_format_ToString(contentservice_inventory_options_STOCKDISPLAYFORMAT_e stock_display_format) {
    char* stock_display_formatArray[] =  { "NULL", "AlwaysDisplayRemainingQuantity", "OnlyDisplayRemainingQuantityWhenStockIsLow", "NeverDisplayRemainingQuantity" };
    return stock_display_formatArray[stock_display_format];
}

contentservice_inventory_options_STOCKDISPLAYFORMAT_e inventory_options_stock_display_format_FromString(char* stock_display_format){
    int stringToReturn = 0;
    char *stock_display_formatArray[] =  { "NULL", "AlwaysDisplayRemainingQuantity", "OnlyDisplayRemainingQuantityWhenStockIsLow", "NeverDisplayRemainingQuantity" };
    size_t sizeofArray = sizeof(stock_display_formatArray) / sizeof(stock_display_formatArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(stock_display_format, stock_display_formatArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

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
    ) {
    inventory_options_t *inventory_options_local_var = malloc(sizeof(inventory_options_t));
    if (!inventory_options_local_var) {
        return NULL;
    }
    inventory_options_local_var->enable_stock_management = enable_stock_management;
    inventory_options_local_var->hide_out_of_stock_products = hide_out_of_stock_products;
    inventory_options_local_var->enable_low_stock_notifications = enable_low_stock_notifications;
    inventory_options_local_var->enable_out_of_stock_notifications = enable_out_of_stock_notifications;
    inventory_options_local_var->stock_notification_recipients = stock_notification_recipients;
    inventory_options_local_var->hold_stock = hold_stock;
    inventory_options_local_var->low_stock_threshold = low_stock_threshold;
    inventory_options_local_var->out_of_stock_threshold = out_of_stock_threshold;
    inventory_options_local_var->stock_display_format = stock_display_format;

    return inventory_options_local_var;
}


void inventory_options_free(inventory_options_t *inventory_options) {
    if(NULL == inventory_options){
        return ;
    }
    listEntry_t *listEntry;
    if (inventory_options->stock_notification_recipients) {
        free(inventory_options->stock_notification_recipients);
        inventory_options->stock_notification_recipients = NULL;
    }
    free(inventory_options);
}

cJSON *inventory_options_convertToJSON(inventory_options_t *inventory_options) {
    cJSON *item = cJSON_CreateObject();

    // inventory_options->enable_stock_management
    if(inventory_options->enable_stock_management) {
    if(cJSON_AddBoolToObject(item, "enableStockManagement", inventory_options->enable_stock_management) == NULL) {
    goto fail; //Bool
    }
    }


    // inventory_options->hide_out_of_stock_products
    if(inventory_options->hide_out_of_stock_products) {
    if(cJSON_AddBoolToObject(item, "hideOutOfStockProducts", inventory_options->hide_out_of_stock_products) == NULL) {
    goto fail; //Bool
    }
    }


    // inventory_options->enable_low_stock_notifications
    if(inventory_options->enable_low_stock_notifications) {
    if(cJSON_AddBoolToObject(item, "enableLowStockNotifications", inventory_options->enable_low_stock_notifications) == NULL) {
    goto fail; //Bool
    }
    }


    // inventory_options->enable_out_of_stock_notifications
    if(inventory_options->enable_out_of_stock_notifications) {
    if(cJSON_AddBoolToObject(item, "enableOutOfStockNotifications", inventory_options->enable_out_of_stock_notifications) == NULL) {
    goto fail; //Bool
    }
    }


    // inventory_options->stock_notification_recipients
    if(inventory_options->stock_notification_recipients) {
    if(cJSON_AddStringToObject(item, "stockNotificationRecipients", inventory_options->stock_notification_recipients) == NULL) {
    goto fail; //String
    }
    }


    // inventory_options->hold_stock
    if(inventory_options->hold_stock) {
    if(cJSON_AddNumberToObject(item, "holdStock", inventory_options->hold_stock) == NULL) {
    goto fail; //Numeric
    }
    }


    // inventory_options->low_stock_threshold
    if(inventory_options->low_stock_threshold) {
    if(cJSON_AddNumberToObject(item, "lowStockThreshold", inventory_options->low_stock_threshold) == NULL) {
    goto fail; //Numeric
    }
    }


    // inventory_options->out_of_stock_threshold
    if(inventory_options->out_of_stock_threshold) {
    if(cJSON_AddNumberToObject(item, "outOfStockThreshold", inventory_options->out_of_stock_threshold) == NULL) {
    goto fail; //Numeric
    }
    }


    // inventory_options->stock_display_format
    if(inventory_options->stock_display_format != contentservice_inventory_options_STOCKDISPLAYFORMAT_NULL) {
    if(cJSON_AddStringToObject(item, "stockDisplayFormat", stock_display_formatinventory_options_ToString(inventory_options->stock_display_format)) == NULL)
    {
    goto fail; //Enum
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

inventory_options_t *inventory_options_parseFromJSON(cJSON *inventory_optionsJSON){

    inventory_options_t *inventory_options_local_var = NULL;

    // inventory_options->enable_stock_management
    cJSON *enable_stock_management = cJSON_GetObjectItemCaseSensitive(inventory_optionsJSON, "enableStockManagement");
    if (enable_stock_management) { 
    if(!cJSON_IsBool(enable_stock_management))
    {
    goto end; //Bool
    }
    }

    // inventory_options->hide_out_of_stock_products
    cJSON *hide_out_of_stock_products = cJSON_GetObjectItemCaseSensitive(inventory_optionsJSON, "hideOutOfStockProducts");
    if (hide_out_of_stock_products) { 
    if(!cJSON_IsBool(hide_out_of_stock_products))
    {
    goto end; //Bool
    }
    }

    // inventory_options->enable_low_stock_notifications
    cJSON *enable_low_stock_notifications = cJSON_GetObjectItemCaseSensitive(inventory_optionsJSON, "enableLowStockNotifications");
    if (enable_low_stock_notifications) { 
    if(!cJSON_IsBool(enable_low_stock_notifications))
    {
    goto end; //Bool
    }
    }

    // inventory_options->enable_out_of_stock_notifications
    cJSON *enable_out_of_stock_notifications = cJSON_GetObjectItemCaseSensitive(inventory_optionsJSON, "enableOutOfStockNotifications");
    if (enable_out_of_stock_notifications) { 
    if(!cJSON_IsBool(enable_out_of_stock_notifications))
    {
    goto end; //Bool
    }
    }

    // inventory_options->stock_notification_recipients
    cJSON *stock_notification_recipients = cJSON_GetObjectItemCaseSensitive(inventory_optionsJSON, "stockNotificationRecipients");
    if (stock_notification_recipients) { 
    if(!cJSON_IsString(stock_notification_recipients) && !cJSON_IsNull(stock_notification_recipients))
    {
    goto end; //String
    }
    }

    // inventory_options->hold_stock
    cJSON *hold_stock = cJSON_GetObjectItemCaseSensitive(inventory_optionsJSON, "holdStock");
    if (hold_stock) { 
    if(!cJSON_IsNumber(hold_stock))
    {
    goto end; //Numeric
    }
    }

    // inventory_options->low_stock_threshold
    cJSON *low_stock_threshold = cJSON_GetObjectItemCaseSensitive(inventory_optionsJSON, "lowStockThreshold");
    if (low_stock_threshold) { 
    if(!cJSON_IsNumber(low_stock_threshold))
    {
    goto end; //Numeric
    }
    }

    // inventory_options->out_of_stock_threshold
    cJSON *out_of_stock_threshold = cJSON_GetObjectItemCaseSensitive(inventory_optionsJSON, "outOfStockThreshold");
    if (out_of_stock_threshold) { 
    if(!cJSON_IsNumber(out_of_stock_threshold))
    {
    goto end; //Numeric
    }
    }

    // inventory_options->stock_display_format
    cJSON *stock_display_format = cJSON_GetObjectItemCaseSensitive(inventory_optionsJSON, "stockDisplayFormat");
    contentservice_inventory_options_STOCKDISPLAYFORMAT_e stock_display_formatVariable;
    if (stock_display_format) { 
    if(!cJSON_IsString(stock_display_format))
    {
    goto end; //Enum
    }
    stock_display_formatVariable = inventory_options_stock_display_format_FromString(stock_display_format->valuestring);
    }


    inventory_options_local_var = inventory_options_create (
        enable_stock_management ? enable_stock_management->valueint : 0,
        hide_out_of_stock_products ? hide_out_of_stock_products->valueint : 0,
        enable_low_stock_notifications ? enable_low_stock_notifications->valueint : 0,
        enable_out_of_stock_notifications ? enable_out_of_stock_notifications->valueint : 0,
        stock_notification_recipients && !cJSON_IsNull(stock_notification_recipients) ? strdup(stock_notification_recipients->valuestring) : NULL,
        hold_stock ? hold_stock->valuedouble : 0,
        low_stock_threshold ? low_stock_threshold->valuedouble : 0,
        out_of_stock_threshold ? out_of_stock_threshold->valuedouble : 0,
        stock_display_format ? stock_display_formatVariable : contentservice_inventory_options_STOCKDISPLAYFORMAT_NULL
        );

    return inventory_options_local_var;
end:
    return NULL;

}
