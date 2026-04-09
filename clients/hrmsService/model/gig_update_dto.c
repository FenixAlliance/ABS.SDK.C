#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "gig_update_dto.h"



gig_update_dto_t *gig_update_dto_create(
    char *title,
    char *description,
    double price,
    char *currency,
    char *location,
    char *start_date,
    char *end_date,
    char *category,
    char *tags
    ) {
    gig_update_dto_t *gig_update_dto_local_var = malloc(sizeof(gig_update_dto_t));
    if (!gig_update_dto_local_var) {
        return NULL;
    }
    gig_update_dto_local_var->title = title;
    gig_update_dto_local_var->description = description;
    gig_update_dto_local_var->price = price;
    gig_update_dto_local_var->currency = currency;
    gig_update_dto_local_var->location = location;
    gig_update_dto_local_var->start_date = start_date;
    gig_update_dto_local_var->end_date = end_date;
    gig_update_dto_local_var->category = category;
    gig_update_dto_local_var->tags = tags;

    return gig_update_dto_local_var;
}


void gig_update_dto_free(gig_update_dto_t *gig_update_dto) {
    if(NULL == gig_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (gig_update_dto->title) {
        free(gig_update_dto->title);
        gig_update_dto->title = NULL;
    }
    if (gig_update_dto->description) {
        free(gig_update_dto->description);
        gig_update_dto->description = NULL;
    }
    if (gig_update_dto->currency) {
        free(gig_update_dto->currency);
        gig_update_dto->currency = NULL;
    }
    if (gig_update_dto->location) {
        free(gig_update_dto->location);
        gig_update_dto->location = NULL;
    }
    if (gig_update_dto->start_date) {
        free(gig_update_dto->start_date);
        gig_update_dto->start_date = NULL;
    }
    if (gig_update_dto->end_date) {
        free(gig_update_dto->end_date);
        gig_update_dto->end_date = NULL;
    }
    if (gig_update_dto->category) {
        free(gig_update_dto->category);
        gig_update_dto->category = NULL;
    }
    if (gig_update_dto->tags) {
        free(gig_update_dto->tags);
        gig_update_dto->tags = NULL;
    }
    free(gig_update_dto);
}

cJSON *gig_update_dto_convertToJSON(gig_update_dto_t *gig_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // gig_update_dto->title
    if(gig_update_dto->title) {
    if(cJSON_AddStringToObject(item, "title", gig_update_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // gig_update_dto->description
    if(gig_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", gig_update_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // gig_update_dto->price
    if(gig_update_dto->price) {
    if(cJSON_AddNumberToObject(item, "price", gig_update_dto->price) == NULL) {
    goto fail; //Numeric
    }
    }


    // gig_update_dto->currency
    if(gig_update_dto->currency) {
    if(cJSON_AddStringToObject(item, "currency", gig_update_dto->currency) == NULL) {
    goto fail; //String
    }
    }


    // gig_update_dto->location
    if(gig_update_dto->location) {
    if(cJSON_AddStringToObject(item, "location", gig_update_dto->location) == NULL) {
    goto fail; //String
    }
    }


    // gig_update_dto->start_date
    if(gig_update_dto->start_date) {
    if(cJSON_AddStringToObject(item, "startDate", gig_update_dto->start_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // gig_update_dto->end_date
    if(gig_update_dto->end_date) {
    if(cJSON_AddStringToObject(item, "endDate", gig_update_dto->end_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // gig_update_dto->category
    if(gig_update_dto->category) {
    if(cJSON_AddStringToObject(item, "category", gig_update_dto->category) == NULL) {
    goto fail; //String
    }
    }


    // gig_update_dto->tags
    if(gig_update_dto->tags) {
    if(cJSON_AddStringToObject(item, "tags", gig_update_dto->tags) == NULL) {
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

gig_update_dto_t *gig_update_dto_parseFromJSON(cJSON *gig_update_dtoJSON){

    gig_update_dto_t *gig_update_dto_local_var = NULL;

    // gig_update_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(gig_update_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // gig_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(gig_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // gig_update_dto->price
    cJSON *price = cJSON_GetObjectItemCaseSensitive(gig_update_dtoJSON, "price");
    if (price) { 
    if(!cJSON_IsNumber(price))
    {
    goto end; //Numeric
    }
    }

    // gig_update_dto->currency
    cJSON *currency = cJSON_GetObjectItemCaseSensitive(gig_update_dtoJSON, "currency");
    if (currency) { 
    if(!cJSON_IsString(currency) && !cJSON_IsNull(currency))
    {
    goto end; //String
    }
    }

    // gig_update_dto->location
    cJSON *location = cJSON_GetObjectItemCaseSensitive(gig_update_dtoJSON, "location");
    if (location) { 
    if(!cJSON_IsString(location) && !cJSON_IsNull(location))
    {
    goto end; //String
    }
    }

    // gig_update_dto->start_date
    cJSON *start_date = cJSON_GetObjectItemCaseSensitive(gig_update_dtoJSON, "startDate");
    if (start_date) { 
    if(!cJSON_IsString(start_date) && !cJSON_IsNull(start_date))
    {
    goto end; //DateTime
    }
    }

    // gig_update_dto->end_date
    cJSON *end_date = cJSON_GetObjectItemCaseSensitive(gig_update_dtoJSON, "endDate");
    if (end_date) { 
    if(!cJSON_IsString(end_date) && !cJSON_IsNull(end_date))
    {
    goto end; //DateTime
    }
    }

    // gig_update_dto->category
    cJSON *category = cJSON_GetObjectItemCaseSensitive(gig_update_dtoJSON, "category");
    if (category) { 
    if(!cJSON_IsString(category) && !cJSON_IsNull(category))
    {
    goto end; //String
    }
    }

    // gig_update_dto->tags
    cJSON *tags = cJSON_GetObjectItemCaseSensitive(gig_update_dtoJSON, "tags");
    if (tags) { 
    if(!cJSON_IsString(tags) && !cJSON_IsNull(tags))
    {
    goto end; //String
    }
    }


    gig_update_dto_local_var = gig_update_dto_create (
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        price ? price->valuedouble : 0,
        currency && !cJSON_IsNull(currency) ? strdup(currency->valuestring) : NULL,
        location && !cJSON_IsNull(location) ? strdup(location->valuestring) : NULL,
        start_date && !cJSON_IsNull(start_date) ? strdup(start_date->valuestring) : NULL,
        end_date && !cJSON_IsNull(end_date) ? strdup(end_date->valuestring) : NULL,
        category && !cJSON_IsNull(category) ? strdup(category->valuestring) : NULL,
        tags && !cJSON_IsNull(tags) ? strdup(tags->valuestring) : NULL
        );

    return gig_update_dto_local_var;
end:
    return NULL;

}
