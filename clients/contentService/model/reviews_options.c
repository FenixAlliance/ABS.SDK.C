#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "reviews_options.h"



reviews_options_t *reviews_options_create(
    int enable_reviews,
    int enable_star_ratings,
    int force_star_ratings,
    int display_verified_owner_badge,
    int force_verified_owner_verification
    ) {
    reviews_options_t *reviews_options_local_var = malloc(sizeof(reviews_options_t));
    if (!reviews_options_local_var) {
        return NULL;
    }
    reviews_options_local_var->enable_reviews = enable_reviews;
    reviews_options_local_var->enable_star_ratings = enable_star_ratings;
    reviews_options_local_var->force_star_ratings = force_star_ratings;
    reviews_options_local_var->display_verified_owner_badge = display_verified_owner_badge;
    reviews_options_local_var->force_verified_owner_verification = force_verified_owner_verification;

    return reviews_options_local_var;
}


void reviews_options_free(reviews_options_t *reviews_options) {
    if(NULL == reviews_options){
        return ;
    }
    listEntry_t *listEntry;
    free(reviews_options);
}

cJSON *reviews_options_convertToJSON(reviews_options_t *reviews_options) {
    cJSON *item = cJSON_CreateObject();

    // reviews_options->enable_reviews
    if(reviews_options->enable_reviews) {
    if(cJSON_AddBoolToObject(item, "enableReviews", reviews_options->enable_reviews) == NULL) {
    goto fail; //Bool
    }
    }


    // reviews_options->enable_star_ratings
    if(reviews_options->enable_star_ratings) {
    if(cJSON_AddBoolToObject(item, "enableStarRatings", reviews_options->enable_star_ratings) == NULL) {
    goto fail; //Bool
    }
    }


    // reviews_options->force_star_ratings
    if(reviews_options->force_star_ratings) {
    if(cJSON_AddBoolToObject(item, "forceStarRatings", reviews_options->force_star_ratings) == NULL) {
    goto fail; //Bool
    }
    }


    // reviews_options->display_verified_owner_badge
    if(reviews_options->display_verified_owner_badge) {
    if(cJSON_AddBoolToObject(item, "displayVerifiedOwnerBadge", reviews_options->display_verified_owner_badge) == NULL) {
    goto fail; //Bool
    }
    }


    // reviews_options->force_verified_owner_verification
    if(reviews_options->force_verified_owner_verification) {
    if(cJSON_AddBoolToObject(item, "forceVerifiedOwnerVerification", reviews_options->force_verified_owner_verification) == NULL) {
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

reviews_options_t *reviews_options_parseFromJSON(cJSON *reviews_optionsJSON){

    reviews_options_t *reviews_options_local_var = NULL;

    // reviews_options->enable_reviews
    cJSON *enable_reviews = cJSON_GetObjectItemCaseSensitive(reviews_optionsJSON, "enableReviews");
    if (enable_reviews) { 
    if(!cJSON_IsBool(enable_reviews))
    {
    goto end; //Bool
    }
    }

    // reviews_options->enable_star_ratings
    cJSON *enable_star_ratings = cJSON_GetObjectItemCaseSensitive(reviews_optionsJSON, "enableStarRatings");
    if (enable_star_ratings) { 
    if(!cJSON_IsBool(enable_star_ratings))
    {
    goto end; //Bool
    }
    }

    // reviews_options->force_star_ratings
    cJSON *force_star_ratings = cJSON_GetObjectItemCaseSensitive(reviews_optionsJSON, "forceStarRatings");
    if (force_star_ratings) { 
    if(!cJSON_IsBool(force_star_ratings))
    {
    goto end; //Bool
    }
    }

    // reviews_options->display_verified_owner_badge
    cJSON *display_verified_owner_badge = cJSON_GetObjectItemCaseSensitive(reviews_optionsJSON, "displayVerifiedOwnerBadge");
    if (display_verified_owner_badge) { 
    if(!cJSON_IsBool(display_verified_owner_badge))
    {
    goto end; //Bool
    }
    }

    // reviews_options->force_verified_owner_verification
    cJSON *force_verified_owner_verification = cJSON_GetObjectItemCaseSensitive(reviews_optionsJSON, "forceVerifiedOwnerVerification");
    if (force_verified_owner_verification) { 
    if(!cJSON_IsBool(force_verified_owner_verification))
    {
    goto end; //Bool
    }
    }


    reviews_options_local_var = reviews_options_create (
        enable_reviews ? enable_reviews->valueint : 0,
        enable_star_ratings ? enable_star_ratings->valueint : 0,
        force_star_ratings ? force_star_ratings->valueint : 0,
        display_verified_owner_badge ? display_verified_owner_badge->valueint : 0,
        force_verified_owner_verification ? force_verified_owner_verification->valueint : 0
        );

    return reviews_options_local_var;
end:
    return NULL;

}
