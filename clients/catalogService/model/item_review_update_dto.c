#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "item_review_update_dto.h"



item_review_update_dto_t *item_review_update_dto_create(
    double review_score,
    char *review_message
    ) {
    item_review_update_dto_t *item_review_update_dto_local_var = malloc(sizeof(item_review_update_dto_t));
    if (!item_review_update_dto_local_var) {
        return NULL;
    }
    item_review_update_dto_local_var->review_score = review_score;
    item_review_update_dto_local_var->review_message = review_message;

    return item_review_update_dto_local_var;
}


void item_review_update_dto_free(item_review_update_dto_t *item_review_update_dto) {
    if(NULL == item_review_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (item_review_update_dto->review_message) {
        free(item_review_update_dto->review_message);
        item_review_update_dto->review_message = NULL;
    }
    free(item_review_update_dto);
}

cJSON *item_review_update_dto_convertToJSON(item_review_update_dto_t *item_review_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // item_review_update_dto->review_score
    if(item_review_update_dto->review_score) {
    if(cJSON_AddNumberToObject(item, "reviewScore", item_review_update_dto->review_score) == NULL) {
    goto fail; //Numeric
    }
    }


    // item_review_update_dto->review_message
    if(item_review_update_dto->review_message) {
    if(cJSON_AddStringToObject(item, "reviewMessage", item_review_update_dto->review_message) == NULL) {
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

item_review_update_dto_t *item_review_update_dto_parseFromJSON(cJSON *item_review_update_dtoJSON){

    item_review_update_dto_t *item_review_update_dto_local_var = NULL;

    // item_review_update_dto->review_score
    cJSON *review_score = cJSON_GetObjectItemCaseSensitive(item_review_update_dtoJSON, "reviewScore");
    if (review_score) { 
    if(!cJSON_IsNumber(review_score))
    {
    goto end; //Numeric
    }
    }

    // item_review_update_dto->review_message
    cJSON *review_message = cJSON_GetObjectItemCaseSensitive(item_review_update_dtoJSON, "reviewMessage");
    if (review_message) { 
    if(!cJSON_IsString(review_message) && !cJSON_IsNull(review_message))
    {
    goto end; //String
    }
    }


    item_review_update_dto_local_var = item_review_update_dto_create (
        review_score ? review_score->valuedouble : 0,
        review_message && !cJSON_IsNull(review_message) ? strdup(review_message->valuestring) : NULL
        );

    return item_review_update_dto_local_var;
end:
    return NULL;

}
