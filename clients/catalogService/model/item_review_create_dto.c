#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "item_review_create_dto.h"



item_review_create_dto_t *item_review_create_dto_create(
    char *id,
    char *timestamp,
    char *item_id,
    double review_score,
    char *review_message,
    char *social_profile_id
    ) {
    item_review_create_dto_t *item_review_create_dto_local_var = malloc(sizeof(item_review_create_dto_t));
    if (!item_review_create_dto_local_var) {
        return NULL;
    }
    item_review_create_dto_local_var->id = id;
    item_review_create_dto_local_var->timestamp = timestamp;
    item_review_create_dto_local_var->item_id = item_id;
    item_review_create_dto_local_var->review_score = review_score;
    item_review_create_dto_local_var->review_message = review_message;
    item_review_create_dto_local_var->social_profile_id = social_profile_id;

    return item_review_create_dto_local_var;
}


void item_review_create_dto_free(item_review_create_dto_t *item_review_create_dto) {
    if(NULL == item_review_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (item_review_create_dto->id) {
        free(item_review_create_dto->id);
        item_review_create_dto->id = NULL;
    }
    if (item_review_create_dto->timestamp) {
        free(item_review_create_dto->timestamp);
        item_review_create_dto->timestamp = NULL;
    }
    if (item_review_create_dto->item_id) {
        free(item_review_create_dto->item_id);
        item_review_create_dto->item_id = NULL;
    }
    if (item_review_create_dto->review_message) {
        free(item_review_create_dto->review_message);
        item_review_create_dto->review_message = NULL;
    }
    if (item_review_create_dto->social_profile_id) {
        free(item_review_create_dto->social_profile_id);
        item_review_create_dto->social_profile_id = NULL;
    }
    free(item_review_create_dto);
}

cJSON *item_review_create_dto_convertToJSON(item_review_create_dto_t *item_review_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // item_review_create_dto->id
    if(item_review_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", item_review_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // item_review_create_dto->timestamp
    if(item_review_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", item_review_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // item_review_create_dto->item_id
    if(item_review_create_dto->item_id) {
    if(cJSON_AddStringToObject(item, "itemID", item_review_create_dto->item_id) == NULL) {
    goto fail; //String
    }
    }


    // item_review_create_dto->review_score
    if(item_review_create_dto->review_score) {
    if(cJSON_AddNumberToObject(item, "reviewScore", item_review_create_dto->review_score) == NULL) {
    goto fail; //Numeric
    }
    }


    // item_review_create_dto->review_message
    if(item_review_create_dto->review_message) {
    if(cJSON_AddStringToObject(item, "reviewMessage", item_review_create_dto->review_message) == NULL) {
    goto fail; //String
    }
    }


    // item_review_create_dto->social_profile_id
    if(item_review_create_dto->social_profile_id) {
    if(cJSON_AddStringToObject(item, "socialProfileID", item_review_create_dto->social_profile_id) == NULL) {
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

item_review_create_dto_t *item_review_create_dto_parseFromJSON(cJSON *item_review_create_dtoJSON){

    item_review_create_dto_t *item_review_create_dto_local_var = NULL;

    // item_review_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(item_review_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // item_review_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(item_review_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // item_review_create_dto->item_id
    cJSON *item_id = cJSON_GetObjectItemCaseSensitive(item_review_create_dtoJSON, "itemID");
    if (item_id) { 
    if(!cJSON_IsString(item_id) && !cJSON_IsNull(item_id))
    {
    goto end; //String
    }
    }

    // item_review_create_dto->review_score
    cJSON *review_score = cJSON_GetObjectItemCaseSensitive(item_review_create_dtoJSON, "reviewScore");
    if (review_score) { 
    if(!cJSON_IsNumber(review_score))
    {
    goto end; //Numeric
    }
    }

    // item_review_create_dto->review_message
    cJSON *review_message = cJSON_GetObjectItemCaseSensitive(item_review_create_dtoJSON, "reviewMessage");
    if (review_message) { 
    if(!cJSON_IsString(review_message) && !cJSON_IsNull(review_message))
    {
    goto end; //String
    }
    }

    // item_review_create_dto->social_profile_id
    cJSON *social_profile_id = cJSON_GetObjectItemCaseSensitive(item_review_create_dtoJSON, "socialProfileID");
    if (social_profile_id) { 
    if(!cJSON_IsString(social_profile_id) && !cJSON_IsNull(social_profile_id))
    {
    goto end; //String
    }
    }


    item_review_create_dto_local_var = item_review_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        item_id && !cJSON_IsNull(item_id) ? strdup(item_id->valuestring) : NULL,
        review_score ? review_score->valuedouble : 0,
        review_message && !cJSON_IsNull(review_message) ? strdup(review_message->valuestring) : NULL,
        social_profile_id && !cJSON_IsNull(social_profile_id) ? strdup(social_profile_id->valuestring) : NULL
        );

    return item_review_create_dto_local_var;
end:
    return NULL;

}
