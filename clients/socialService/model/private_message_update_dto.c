#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "private_message_update_dto.h"



private_message_update_dto_t *private_message_update_dto_create(
    char *title,
    char *message
    ) {
    private_message_update_dto_t *private_message_update_dto_local_var = malloc(sizeof(private_message_update_dto_t));
    if (!private_message_update_dto_local_var) {
        return NULL;
    }
    private_message_update_dto_local_var->title = title;
    private_message_update_dto_local_var->message = message;

    return private_message_update_dto_local_var;
}


void private_message_update_dto_free(private_message_update_dto_t *private_message_update_dto) {
    if(NULL == private_message_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (private_message_update_dto->title) {
        free(private_message_update_dto->title);
        private_message_update_dto->title = NULL;
    }
    if (private_message_update_dto->message) {
        free(private_message_update_dto->message);
        private_message_update_dto->message = NULL;
    }
    free(private_message_update_dto);
}

cJSON *private_message_update_dto_convertToJSON(private_message_update_dto_t *private_message_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // private_message_update_dto->title
    if(private_message_update_dto->title) {
    if(cJSON_AddStringToObject(item, "title", private_message_update_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // private_message_update_dto->message
    if(private_message_update_dto->message) {
    if(cJSON_AddStringToObject(item, "message", private_message_update_dto->message) == NULL) {
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

private_message_update_dto_t *private_message_update_dto_parseFromJSON(cJSON *private_message_update_dtoJSON){

    private_message_update_dto_t *private_message_update_dto_local_var = NULL;

    // private_message_update_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(private_message_update_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // private_message_update_dto->message
    cJSON *message = cJSON_GetObjectItemCaseSensitive(private_message_update_dtoJSON, "message");
    if (message) { 
    if(!cJSON_IsString(message) && !cJSON_IsNull(message))
    {
    goto end; //String
    }
    }


    private_message_update_dto_local_var = private_message_update_dto_create (
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        message && !cJSON_IsNull(message) ? strdup(message->valuestring) : NULL
        );

    return private_message_update_dto_local_var;
end:
    return NULL;

}
