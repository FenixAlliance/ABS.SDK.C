#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cart_options.h"



cart_options_t *cart_options_create(
    int enable_guest_cart,
    char *product_placeholder_image,
    int redirect_to_cart_page_after_adding_products
    ) {
    cart_options_t *cart_options_local_var = malloc(sizeof(cart_options_t));
    if (!cart_options_local_var) {
        return NULL;
    }
    cart_options_local_var->enable_guest_cart = enable_guest_cart;
    cart_options_local_var->product_placeholder_image = product_placeholder_image;
    cart_options_local_var->redirect_to_cart_page_after_adding_products = redirect_to_cart_page_after_adding_products;

    return cart_options_local_var;
}


void cart_options_free(cart_options_t *cart_options) {
    if(NULL == cart_options){
        return ;
    }
    listEntry_t *listEntry;
    if (cart_options->product_placeholder_image) {
        free(cart_options->product_placeholder_image);
        cart_options->product_placeholder_image = NULL;
    }
    free(cart_options);
}

cJSON *cart_options_convertToJSON(cart_options_t *cart_options) {
    cJSON *item = cJSON_CreateObject();

    // cart_options->enable_guest_cart
    if(cart_options->enable_guest_cart) {
    if(cJSON_AddBoolToObject(item, "enableGuestCart", cart_options->enable_guest_cart) == NULL) {
    goto fail; //Bool
    }
    }


    // cart_options->product_placeholder_image
    if(cart_options->product_placeholder_image) {
    if(cJSON_AddStringToObject(item, "productPlaceholderImage", cart_options->product_placeholder_image) == NULL) {
    goto fail; //String
    }
    }


    // cart_options->redirect_to_cart_page_after_adding_products
    if(cart_options->redirect_to_cart_page_after_adding_products) {
    if(cJSON_AddBoolToObject(item, "redirectToCartPageAfterAddingProducts", cart_options->redirect_to_cart_page_after_adding_products) == NULL) {
    goto fail; //Bool
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

cart_options_t *cart_options_parseFromJSON(cJSON *cart_optionsJSON){

    cart_options_t *cart_options_local_var = NULL;

    // cart_options->enable_guest_cart
    cJSON *enable_guest_cart = cJSON_GetObjectItemCaseSensitive(cart_optionsJSON, "enableGuestCart");
    if (enable_guest_cart) { 
    if(!cJSON_IsBool(enable_guest_cart))
    {
    goto end; //Bool
    }
    }

    // cart_options->product_placeholder_image
    cJSON *product_placeholder_image = cJSON_GetObjectItemCaseSensitive(cart_optionsJSON, "productPlaceholderImage");
    if (product_placeholder_image) { 
    if(!cJSON_IsString(product_placeholder_image) && !cJSON_IsNull(product_placeholder_image))
    {
    goto end; //String
    }
    }

    // cart_options->redirect_to_cart_page_after_adding_products
    cJSON *redirect_to_cart_page_after_adding_products = cJSON_GetObjectItemCaseSensitive(cart_optionsJSON, "redirectToCartPageAfterAddingProducts");
    if (redirect_to_cart_page_after_adding_products) { 
    if(!cJSON_IsBool(redirect_to_cart_page_after_adding_products))
    {
    goto end; //Bool
    }
    }


    cart_options_local_var = cart_options_create (
        enable_guest_cart ? enable_guest_cart->valueint : 0,
        product_placeholder_image && !cJSON_IsNull(product_placeholder_image) ? strdup(product_placeholder_image->valuestring) : NULL,
        redirect_to_cart_page_after_adding_products ? redirect_to_cart_page_after_adding_products->valueint : 0
        );

    return cart_options_local_var;
end:
    return NULL;

}
