#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "delivery_note_dto.h"



delivery_note_dto_t *delivery_note_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description
    ) {
    delivery_note_dto_t *delivery_note_dto_local_var = malloc(sizeof(delivery_note_dto_t));
    if (!delivery_note_dto_local_var) {
        return NULL;
    }
    delivery_note_dto_local_var->id = id;
    delivery_note_dto_local_var->timestamp = timestamp;
    delivery_note_dto_local_var->title = title;
    delivery_note_dto_local_var->description = description;

    return delivery_note_dto_local_var;
}


void delivery_note_dto_free(delivery_note_dto_t *delivery_note_dto) {
    if(NULL == delivery_note_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (delivery_note_dto->id) {
        free(delivery_note_dto->id);
        delivery_note_dto->id = NULL;
    }
    if (delivery_note_dto->timestamp) {
        free(delivery_note_dto->timestamp);
        delivery_note_dto->timestamp = NULL;
    }
    if (delivery_note_dto->title) {
        free(delivery_note_dto->title);
        delivery_note_dto->title = NULL;
    }
    if (delivery_note_dto->description) {
        free(delivery_note_dto->description);
        delivery_note_dto->description = NULL;
    }
    free(delivery_note_dto);
}

cJSON *delivery_note_dto_convertToJSON(delivery_note_dto_t *delivery_note_dto) {
    cJSON *item = cJSON_CreateObject();

    // delivery_note_dto->id
    if(delivery_note_dto->id) {
    if(cJSON_AddStringToObject(item, "id", delivery_note_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // delivery_note_dto->timestamp
    if(delivery_note_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", delivery_note_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // delivery_note_dto->title
    if(delivery_note_dto->title) {
    if(cJSON_AddStringToObject(item, "title", delivery_note_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // delivery_note_dto->description
    if(delivery_note_dto->description) {
    if(cJSON_AddStringToObject(item, "description", delivery_note_dto->description) == NULL) {
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

delivery_note_dto_t *delivery_note_dto_parseFromJSON(cJSON *delivery_note_dtoJSON){

    delivery_note_dto_t *delivery_note_dto_local_var = NULL;

    // delivery_note_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(delivery_note_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // delivery_note_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(delivery_note_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // delivery_note_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(delivery_note_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // delivery_note_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(delivery_note_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }


    delivery_note_dto_local_var = delivery_note_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL
        );

    return delivery_note_dto_local_var;
end:
    return NULL;

}
