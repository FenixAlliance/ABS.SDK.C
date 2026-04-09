#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "follow_record_dto.h"



follow_record_dto_t *follow_record_dto_create(
    char *id,
    char *type,
    char *follower_id,
    char *followed_id,
    int alerts
    ) {
    follow_record_dto_t *follow_record_dto_local_var = malloc(sizeof(follow_record_dto_t));
    if (!follow_record_dto_local_var) {
        return NULL;
    }
    follow_record_dto_local_var->id = id;
    follow_record_dto_local_var->type = type;
    follow_record_dto_local_var->follower_id = follower_id;
    follow_record_dto_local_var->followed_id = followed_id;
    follow_record_dto_local_var->alerts = alerts;

    return follow_record_dto_local_var;
}


void follow_record_dto_free(follow_record_dto_t *follow_record_dto) {
    if(NULL == follow_record_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (follow_record_dto->id) {
        free(follow_record_dto->id);
        follow_record_dto->id = NULL;
    }
    if (follow_record_dto->type) {
        free(follow_record_dto->type);
        follow_record_dto->type = NULL;
    }
    if (follow_record_dto->follower_id) {
        free(follow_record_dto->follower_id);
        follow_record_dto->follower_id = NULL;
    }
    if (follow_record_dto->followed_id) {
        free(follow_record_dto->followed_id);
        follow_record_dto->followed_id = NULL;
    }
    free(follow_record_dto);
}

cJSON *follow_record_dto_convertToJSON(follow_record_dto_t *follow_record_dto) {
    cJSON *item = cJSON_CreateObject();

    // follow_record_dto->id
    if(follow_record_dto->id) {
    if(cJSON_AddStringToObject(item, "id", follow_record_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // follow_record_dto->type
    if(follow_record_dto->type) {
    if(cJSON_AddStringToObject(item, "type", follow_record_dto->type) == NULL) {
    goto fail; //String
    }
    }


    // follow_record_dto->follower_id
    if(follow_record_dto->follower_id) {
    if(cJSON_AddStringToObject(item, "followerId", follow_record_dto->follower_id) == NULL) {
    goto fail; //String
    }
    }


    // follow_record_dto->followed_id
    if(follow_record_dto->followed_id) {
    if(cJSON_AddStringToObject(item, "followedId", follow_record_dto->followed_id) == NULL) {
    goto fail; //String
    }
    }


    // follow_record_dto->alerts
    if(follow_record_dto->alerts) {
    if(cJSON_AddBoolToObject(item, "alerts", follow_record_dto->alerts) == NULL) {
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

follow_record_dto_t *follow_record_dto_parseFromJSON(cJSON *follow_record_dtoJSON){

    follow_record_dto_t *follow_record_dto_local_var = NULL;

    // follow_record_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(follow_record_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // follow_record_dto->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(follow_record_dtoJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // follow_record_dto->follower_id
    cJSON *follower_id = cJSON_GetObjectItemCaseSensitive(follow_record_dtoJSON, "followerId");
    if (follower_id) { 
    if(!cJSON_IsString(follower_id) && !cJSON_IsNull(follower_id))
    {
    goto end; //String
    }
    }

    // follow_record_dto->followed_id
    cJSON *followed_id = cJSON_GetObjectItemCaseSensitive(follow_record_dtoJSON, "followedId");
    if (followed_id) { 
    if(!cJSON_IsString(followed_id) && !cJSON_IsNull(followed_id))
    {
    goto end; //String
    }
    }

    // follow_record_dto->alerts
    cJSON *alerts = cJSON_GetObjectItemCaseSensitive(follow_record_dtoJSON, "alerts");
    if (alerts) { 
    if(!cJSON_IsBool(alerts))
    {
    goto end; //Bool
    }
    }


    follow_record_dto_local_var = follow_record_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        type && !cJSON_IsNull(type) ? strdup(type->valuestring) : NULL,
        follower_id && !cJSON_IsNull(follower_id) ? strdup(follower_id->valuestring) : NULL,
        followed_id && !cJSON_IsNull(followed_id) ? strdup(followed_id->valuestring) : NULL,
        alerts ? alerts->valueint : 0
        );

    return follow_record_dto_local_var;
end:
    return NULL;

}
