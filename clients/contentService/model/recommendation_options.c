#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "recommendation_options.h"



recommendation_options_t *recommendation_options_create(
    double view_weight,
    double add_to_cart_weight,
    double removed_from_cart_weight,
    double added_to_wishlist_weight,
    double already_purchased_weight,
    double removed_to_wishlist_weight,
    double added_to_compare_table_weight,
    double removed_to_compare_table_weight,
    int enable_cross_selling,
    int enable_bundled_products,
    int enable_recently_viewed_products
    ) {
    recommendation_options_t *recommendation_options_local_var = malloc(sizeof(recommendation_options_t));
    if (!recommendation_options_local_var) {
        return NULL;
    }
    recommendation_options_local_var->view_weight = view_weight;
    recommendation_options_local_var->add_to_cart_weight = add_to_cart_weight;
    recommendation_options_local_var->removed_from_cart_weight = removed_from_cart_weight;
    recommendation_options_local_var->added_to_wishlist_weight = added_to_wishlist_weight;
    recommendation_options_local_var->already_purchased_weight = already_purchased_weight;
    recommendation_options_local_var->removed_to_wishlist_weight = removed_to_wishlist_weight;
    recommendation_options_local_var->added_to_compare_table_weight = added_to_compare_table_weight;
    recommendation_options_local_var->removed_to_compare_table_weight = removed_to_compare_table_weight;
    recommendation_options_local_var->enable_cross_selling = enable_cross_selling;
    recommendation_options_local_var->enable_bundled_products = enable_bundled_products;
    recommendation_options_local_var->enable_recently_viewed_products = enable_recently_viewed_products;

    return recommendation_options_local_var;
}


void recommendation_options_free(recommendation_options_t *recommendation_options) {
    if(NULL == recommendation_options){
        return ;
    }
    listEntry_t *listEntry;
    free(recommendation_options);
}

cJSON *recommendation_options_convertToJSON(recommendation_options_t *recommendation_options) {
    cJSON *item = cJSON_CreateObject();

    // recommendation_options->view_weight
    if(recommendation_options->view_weight) {
    if(cJSON_AddNumberToObject(item, "viewWeight", recommendation_options->view_weight) == NULL) {
    goto fail; //Numeric
    }
    }


    // recommendation_options->add_to_cart_weight
    if(recommendation_options->add_to_cart_weight) {
    if(cJSON_AddNumberToObject(item, "addToCartWeight", recommendation_options->add_to_cart_weight) == NULL) {
    goto fail; //Numeric
    }
    }


    // recommendation_options->removed_from_cart_weight
    if(recommendation_options->removed_from_cart_weight) {
    if(cJSON_AddNumberToObject(item, "removedFromCartWeight", recommendation_options->removed_from_cart_weight) == NULL) {
    goto fail; //Numeric
    }
    }


    // recommendation_options->added_to_wishlist_weight
    if(recommendation_options->added_to_wishlist_weight) {
    if(cJSON_AddNumberToObject(item, "addedToWishlistWeight", recommendation_options->added_to_wishlist_weight) == NULL) {
    goto fail; //Numeric
    }
    }


    // recommendation_options->already_purchased_weight
    if(recommendation_options->already_purchased_weight) {
    if(cJSON_AddNumberToObject(item, "alreadyPurchasedWeight", recommendation_options->already_purchased_weight) == NULL) {
    goto fail; //Numeric
    }
    }


    // recommendation_options->removed_to_wishlist_weight
    if(recommendation_options->removed_to_wishlist_weight) {
    if(cJSON_AddNumberToObject(item, "removedToWishlistWeight", recommendation_options->removed_to_wishlist_weight) == NULL) {
    goto fail; //Numeric
    }
    }


    // recommendation_options->added_to_compare_table_weight
    if(recommendation_options->added_to_compare_table_weight) {
    if(cJSON_AddNumberToObject(item, "addedToCompareTableWeight", recommendation_options->added_to_compare_table_weight) == NULL) {
    goto fail; //Numeric
    }
    }


    // recommendation_options->removed_to_compare_table_weight
    if(recommendation_options->removed_to_compare_table_weight) {
    if(cJSON_AddNumberToObject(item, "removedToCompareTableWeight", recommendation_options->removed_to_compare_table_weight) == NULL) {
    goto fail; //Numeric
    }
    }


    // recommendation_options->enable_cross_selling
    if(recommendation_options->enable_cross_selling) {
    if(cJSON_AddBoolToObject(item, "enableCrossSelling", recommendation_options->enable_cross_selling) == NULL) {
    goto fail; //Bool
    }
    }


    // recommendation_options->enable_bundled_products
    if(recommendation_options->enable_bundled_products) {
    if(cJSON_AddBoolToObject(item, "enableBundledProducts", recommendation_options->enable_bundled_products) == NULL) {
    goto fail; //Bool
    }
    }


    // recommendation_options->enable_recently_viewed_products
    if(recommendation_options->enable_recently_viewed_products) {
    if(cJSON_AddBoolToObject(item, "enableRecentlyViewedProducts", recommendation_options->enable_recently_viewed_products) == NULL) {
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

recommendation_options_t *recommendation_options_parseFromJSON(cJSON *recommendation_optionsJSON){

    recommendation_options_t *recommendation_options_local_var = NULL;

    // recommendation_options->view_weight
    cJSON *view_weight = cJSON_GetObjectItemCaseSensitive(recommendation_optionsJSON, "viewWeight");
    if (view_weight) { 
    if(!cJSON_IsNumber(view_weight))
    {
    goto end; //Numeric
    }
    }

    // recommendation_options->add_to_cart_weight
    cJSON *add_to_cart_weight = cJSON_GetObjectItemCaseSensitive(recommendation_optionsJSON, "addToCartWeight");
    if (add_to_cart_weight) { 
    if(!cJSON_IsNumber(add_to_cart_weight))
    {
    goto end; //Numeric
    }
    }

    // recommendation_options->removed_from_cart_weight
    cJSON *removed_from_cart_weight = cJSON_GetObjectItemCaseSensitive(recommendation_optionsJSON, "removedFromCartWeight");
    if (removed_from_cart_weight) { 
    if(!cJSON_IsNumber(removed_from_cart_weight))
    {
    goto end; //Numeric
    }
    }

    // recommendation_options->added_to_wishlist_weight
    cJSON *added_to_wishlist_weight = cJSON_GetObjectItemCaseSensitive(recommendation_optionsJSON, "addedToWishlistWeight");
    if (added_to_wishlist_weight) { 
    if(!cJSON_IsNumber(added_to_wishlist_weight))
    {
    goto end; //Numeric
    }
    }

    // recommendation_options->already_purchased_weight
    cJSON *already_purchased_weight = cJSON_GetObjectItemCaseSensitive(recommendation_optionsJSON, "alreadyPurchasedWeight");
    if (already_purchased_weight) { 
    if(!cJSON_IsNumber(already_purchased_weight))
    {
    goto end; //Numeric
    }
    }

    // recommendation_options->removed_to_wishlist_weight
    cJSON *removed_to_wishlist_weight = cJSON_GetObjectItemCaseSensitive(recommendation_optionsJSON, "removedToWishlistWeight");
    if (removed_to_wishlist_weight) { 
    if(!cJSON_IsNumber(removed_to_wishlist_weight))
    {
    goto end; //Numeric
    }
    }

    // recommendation_options->added_to_compare_table_weight
    cJSON *added_to_compare_table_weight = cJSON_GetObjectItemCaseSensitive(recommendation_optionsJSON, "addedToCompareTableWeight");
    if (added_to_compare_table_weight) { 
    if(!cJSON_IsNumber(added_to_compare_table_weight))
    {
    goto end; //Numeric
    }
    }

    // recommendation_options->removed_to_compare_table_weight
    cJSON *removed_to_compare_table_weight = cJSON_GetObjectItemCaseSensitive(recommendation_optionsJSON, "removedToCompareTableWeight");
    if (removed_to_compare_table_weight) { 
    if(!cJSON_IsNumber(removed_to_compare_table_weight))
    {
    goto end; //Numeric
    }
    }

    // recommendation_options->enable_cross_selling
    cJSON *enable_cross_selling = cJSON_GetObjectItemCaseSensitive(recommendation_optionsJSON, "enableCrossSelling");
    if (enable_cross_selling) { 
    if(!cJSON_IsBool(enable_cross_selling))
    {
    goto end; //Bool
    }
    }

    // recommendation_options->enable_bundled_products
    cJSON *enable_bundled_products = cJSON_GetObjectItemCaseSensitive(recommendation_optionsJSON, "enableBundledProducts");
    if (enable_bundled_products) { 
    if(!cJSON_IsBool(enable_bundled_products))
    {
    goto end; //Bool
    }
    }

    // recommendation_options->enable_recently_viewed_products
    cJSON *enable_recently_viewed_products = cJSON_GetObjectItemCaseSensitive(recommendation_optionsJSON, "enableRecentlyViewedProducts");
    if (enable_recently_viewed_products) { 
    if(!cJSON_IsBool(enable_recently_viewed_products))
    {
    goto end; //Bool
    }
    }


    recommendation_options_local_var = recommendation_options_create (
        view_weight ? view_weight->valuedouble : 0,
        add_to_cart_weight ? add_to_cart_weight->valuedouble : 0,
        removed_from_cart_weight ? removed_from_cart_weight->valuedouble : 0,
        added_to_wishlist_weight ? added_to_wishlist_weight->valuedouble : 0,
        already_purchased_weight ? already_purchased_weight->valuedouble : 0,
        removed_to_wishlist_weight ? removed_to_wishlist_weight->valuedouble : 0,
        added_to_compare_table_weight ? added_to_compare_table_weight->valuedouble : 0,
        removed_to_compare_table_weight ? removed_to_compare_table_weight->valuedouble : 0,
        enable_cross_selling ? enable_cross_selling->valueint : 0,
        enable_bundled_products ? enable_bundled_products->valueint : 0,
        enable_recently_viewed_products ? enable_recently_viewed_products->valueint : 0
        );

    return recommendation_options_local_var;
end:
    return NULL;

}
