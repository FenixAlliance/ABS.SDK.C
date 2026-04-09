#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "item_question_create_dto.h"



item_question_create_dto_t *item_question_create_dto_create(
    char *id,
    char *timestamp,
    char *title,
    int needs_revision,
    char *question,
    char *social_profile_id,
    char *business_id,
    char *item_id
    ) {
    item_question_create_dto_t *item_question_create_dto_local_var = malloc(sizeof(item_question_create_dto_t));
    if (!item_question_create_dto_local_var) {
        return NULL;
    }
    item_question_create_dto_local_var->id = id;
    item_question_create_dto_local_var->timestamp = timestamp;
    item_question_create_dto_local_var->title = title;
    item_question_create_dto_local_var->needs_revision = needs_revision;
    item_question_create_dto_local_var->question = question;
    item_question_create_dto_local_var->social_profile_id = social_profile_id;
    item_question_create_dto_local_var->business_id = business_id;
    item_question_create_dto_local_var->item_id = item_id;

    return item_question_create_dto_local_var;
}


void item_question_create_dto_free(item_question_create_dto_t *item_question_create_dto) {
    if(NULL == item_question_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (item_question_create_dto->id) {
        free(item_question_create_dto->id);
        item_question_create_dto->id = NULL;
    }
    if (item_question_create_dto->timestamp) {
        free(item_question_create_dto->timestamp);
        item_question_create_dto->timestamp = NULL;
    }
    if (item_question_create_dto->title) {
        free(item_question_create_dto->title);
        item_question_create_dto->title = NULL;
    }
    if (item_question_create_dto->question) {
        free(item_question_create_dto->question);
        item_question_create_dto->question = NULL;
    }
    if (item_question_create_dto->social_profile_id) {
        free(item_question_create_dto->social_profile_id);
        item_question_create_dto->social_profile_id = NULL;
    }
    if (item_question_create_dto->business_id) {
        free(item_question_create_dto->business_id);
        item_question_create_dto->business_id = NULL;
    }
    if (item_question_create_dto->item_id) {
        free(item_question_create_dto->item_id);
        item_question_create_dto->item_id = NULL;
    }
    free(item_question_create_dto);
}

cJSON *item_question_create_dto_convertToJSON(item_question_create_dto_t *item_question_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // item_question_create_dto->id
    if(item_question_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", item_question_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // item_question_create_dto->timestamp
    if(item_question_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", item_question_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // item_question_create_dto->title
    if (!item_question_create_dto->title) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "title", item_question_create_dto->title) == NULL) {
    goto fail; //String
    }


    // item_question_create_dto->needs_revision
    if (!item_question_create_dto->needs_revision) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "needsRevision", item_question_create_dto->needs_revision) == NULL) {
    goto fail; //Bool
    }


    // item_question_create_dto->question
    if (!item_question_create_dto->question) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "question", item_question_create_dto->question) == NULL) {
    goto fail; //String
    }


    // item_question_create_dto->social_profile_id
    if(item_question_create_dto->social_profile_id) {
    if(cJSON_AddStringToObject(item, "socialProfileID", item_question_create_dto->social_profile_id) == NULL) {
    goto fail; //String
    }
    }


    // item_question_create_dto->business_id
    if (!item_question_create_dto->business_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "businessID", item_question_create_dto->business_id) == NULL) {
    goto fail; //String
    }


    // item_question_create_dto->item_id
    if (!item_question_create_dto->item_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "itemID", item_question_create_dto->item_id) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

item_question_create_dto_t *item_question_create_dto_parseFromJSON(cJSON *item_question_create_dtoJSON){

    item_question_create_dto_t *item_question_create_dto_local_var = NULL;

    // item_question_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(item_question_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // item_question_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(item_question_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // item_question_create_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(item_question_create_dtoJSON, "title");
    if (!title) {
        goto end;
    }

    
    if(!cJSON_IsString(title))
    {
    goto end; //String
    }

    // item_question_create_dto->needs_revision
    cJSON *needs_revision = cJSON_GetObjectItemCaseSensitive(item_question_create_dtoJSON, "needsRevision");
    if (!needs_revision) {
        goto end;
    }

    
    if(!cJSON_IsBool(needs_revision))
    {
    goto end; //Bool
    }

    // item_question_create_dto->question
    cJSON *question = cJSON_GetObjectItemCaseSensitive(item_question_create_dtoJSON, "question");
    if (!question) {
        goto end;
    }

    
    if(!cJSON_IsString(question))
    {
    goto end; //String
    }

    // item_question_create_dto->social_profile_id
    cJSON *social_profile_id = cJSON_GetObjectItemCaseSensitive(item_question_create_dtoJSON, "socialProfileID");
    if (social_profile_id) { 
    if(!cJSON_IsString(social_profile_id) && !cJSON_IsNull(social_profile_id))
    {
    goto end; //String
    }
    }

    // item_question_create_dto->business_id
    cJSON *business_id = cJSON_GetObjectItemCaseSensitive(item_question_create_dtoJSON, "businessID");
    if (!business_id) {
        goto end;
    }

    
    if(!cJSON_IsString(business_id))
    {
    goto end; //String
    }

    // item_question_create_dto->item_id
    cJSON *item_id = cJSON_GetObjectItemCaseSensitive(item_question_create_dtoJSON, "itemID");
    if (!item_id) {
        goto end;
    }

    
    if(!cJSON_IsString(item_id))
    {
    goto end; //String
    }


    item_question_create_dto_local_var = item_question_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(title->valuestring),
        needs_revision->valueint,
        strdup(question->valuestring),
        social_profile_id && !cJSON_IsNull(social_profile_id) ? strdup(social_profile_id->valuestring) : NULL,
        strdup(business_id->valuestring),
        strdup(item_id->valuestring)
        );

    return item_question_create_dto_local_var;
end:
    return NULL;

}
