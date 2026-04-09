#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "notification_dto.h"



notification_dto_t *notification_dto_create(
    char *id,
    char *timestamp,
    int read,
    char *icon,
    char *message,
    char *redirect_url,
    char *social_profile_id,
    char *read_timestamp,
    char *issued_timestamp
    ) {
    notification_dto_t *notification_dto_local_var = malloc(sizeof(notification_dto_t));
    if (!notification_dto_local_var) {
        return NULL;
    }
    notification_dto_local_var->id = id;
    notification_dto_local_var->timestamp = timestamp;
    notification_dto_local_var->read = read;
    notification_dto_local_var->icon = icon;
    notification_dto_local_var->message = message;
    notification_dto_local_var->redirect_url = redirect_url;
    notification_dto_local_var->social_profile_id = social_profile_id;
    notification_dto_local_var->read_timestamp = read_timestamp;
    notification_dto_local_var->issued_timestamp = issued_timestamp;

    return notification_dto_local_var;
}


void notification_dto_free(notification_dto_t *notification_dto) {
    if(NULL == notification_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (notification_dto->id) {
        free(notification_dto->id);
        notification_dto->id = NULL;
    }
    if (notification_dto->timestamp) {
        free(notification_dto->timestamp);
        notification_dto->timestamp = NULL;
    }
    if (notification_dto->icon) {
        free(notification_dto->icon);
        notification_dto->icon = NULL;
    }
    if (notification_dto->message) {
        free(notification_dto->message);
        notification_dto->message = NULL;
    }
    if (notification_dto->redirect_url) {
        free(notification_dto->redirect_url);
        notification_dto->redirect_url = NULL;
    }
    if (notification_dto->social_profile_id) {
        free(notification_dto->social_profile_id);
        notification_dto->social_profile_id = NULL;
    }
    if (notification_dto->read_timestamp) {
        free(notification_dto->read_timestamp);
        notification_dto->read_timestamp = NULL;
    }
    if (notification_dto->issued_timestamp) {
        free(notification_dto->issued_timestamp);
        notification_dto->issued_timestamp = NULL;
    }
    free(notification_dto);
}

cJSON *notification_dto_convertToJSON(notification_dto_t *notification_dto) {
    cJSON *item = cJSON_CreateObject();

    // notification_dto->id
    if(notification_dto->id) {
    if(cJSON_AddStringToObject(item, "id", notification_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // notification_dto->timestamp
    if(notification_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", notification_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // notification_dto->read
    if(notification_dto->read) {
    if(cJSON_AddBoolToObject(item, "read", notification_dto->read) == NULL) {
    goto fail; //Bool
    }
    }


    // notification_dto->icon
    if(notification_dto->icon) {
    if(cJSON_AddStringToObject(item, "icon", notification_dto->icon) == NULL) {
    goto fail; //String
    }
    }


    // notification_dto->message
    if(notification_dto->message) {
    if(cJSON_AddStringToObject(item, "message", notification_dto->message) == NULL) {
    goto fail; //String
    }
    }


    // notification_dto->redirect_url
    if(notification_dto->redirect_url) {
    if(cJSON_AddStringToObject(item, "redirectUrl", notification_dto->redirect_url) == NULL) {
    goto fail; //String
    }
    }


    // notification_dto->social_profile_id
    if(notification_dto->social_profile_id) {
    if(cJSON_AddStringToObject(item, "socialProfileID", notification_dto->social_profile_id) == NULL) {
    goto fail; //String
    }
    }


    // notification_dto->read_timestamp
    if(notification_dto->read_timestamp) {
    if(cJSON_AddStringToObject(item, "readTimestamp", notification_dto->read_timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // notification_dto->issued_timestamp
    if(notification_dto->issued_timestamp) {
    if(cJSON_AddStringToObject(item, "issuedTimestamp", notification_dto->issued_timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

notification_dto_t *notification_dto_parseFromJSON(cJSON *notification_dtoJSON){

    notification_dto_t *notification_dto_local_var = NULL;

    // notification_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(notification_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // notification_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(notification_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // notification_dto->read
    cJSON *read = cJSON_GetObjectItemCaseSensitive(notification_dtoJSON, "read");
    if (read) { 
    if(!cJSON_IsBool(read))
    {
    goto end; //Bool
    }
    }

    // notification_dto->icon
    cJSON *icon = cJSON_GetObjectItemCaseSensitive(notification_dtoJSON, "icon");
    if (icon) { 
    if(!cJSON_IsString(icon) && !cJSON_IsNull(icon))
    {
    goto end; //String
    }
    }

    // notification_dto->message
    cJSON *message = cJSON_GetObjectItemCaseSensitive(notification_dtoJSON, "message");
    if (message) { 
    if(!cJSON_IsString(message) && !cJSON_IsNull(message))
    {
    goto end; //String
    }
    }

    // notification_dto->redirect_url
    cJSON *redirect_url = cJSON_GetObjectItemCaseSensitive(notification_dtoJSON, "redirectUrl");
    if (redirect_url) { 
    if(!cJSON_IsString(redirect_url) && !cJSON_IsNull(redirect_url))
    {
    goto end; //String
    }
    }

    // notification_dto->social_profile_id
    cJSON *social_profile_id = cJSON_GetObjectItemCaseSensitive(notification_dtoJSON, "socialProfileID");
    if (social_profile_id) { 
    if(!cJSON_IsString(social_profile_id) && !cJSON_IsNull(social_profile_id))
    {
    goto end; //String
    }
    }

    // notification_dto->read_timestamp
    cJSON *read_timestamp = cJSON_GetObjectItemCaseSensitive(notification_dtoJSON, "readTimestamp");
    if (read_timestamp) { 
    if(!cJSON_IsString(read_timestamp) && !cJSON_IsNull(read_timestamp))
    {
    goto end; //DateTime
    }
    }

    // notification_dto->issued_timestamp
    cJSON *issued_timestamp = cJSON_GetObjectItemCaseSensitive(notification_dtoJSON, "issuedTimestamp");
    if (issued_timestamp) { 
    if(!cJSON_IsString(issued_timestamp) && !cJSON_IsNull(issued_timestamp))
    {
    goto end; //DateTime
    }
    }


    notification_dto_local_var = notification_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        read ? read->valueint : 0,
        icon && !cJSON_IsNull(icon) ? strdup(icon->valuestring) : NULL,
        message && !cJSON_IsNull(message) ? strdup(message->valuestring) : NULL,
        redirect_url && !cJSON_IsNull(redirect_url) ? strdup(redirect_url->valuestring) : NULL,
        social_profile_id && !cJSON_IsNull(social_profile_id) ? strdup(social_profile_id->valuestring) : NULL,
        read_timestamp && !cJSON_IsNull(read_timestamp) ? strdup(read_timestamp->valuestring) : NULL,
        issued_timestamp && !cJSON_IsNull(issued_timestamp) ? strdup(issued_timestamp->valuestring) : NULL
        );

    return notification_dto_local_var;
end:
    return NULL;

}
