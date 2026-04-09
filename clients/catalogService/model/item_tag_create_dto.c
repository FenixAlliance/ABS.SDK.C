#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "item_tag_create_dto.h"



item_tag_create_dto_t *item_tag_create_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    char *business_id
    ) {
    item_tag_create_dto_t *item_tag_create_dto_local_var = malloc(sizeof(item_tag_create_dto_t));
    if (!item_tag_create_dto_local_var) {
        return NULL;
    }
    item_tag_create_dto_local_var->id = id;
    item_tag_create_dto_local_var->timestamp = timestamp;
    item_tag_create_dto_local_var->title = title;
    item_tag_create_dto_local_var->description = description;
    item_tag_create_dto_local_var->business_id = business_id;

    return item_tag_create_dto_local_var;
}


void item_tag_create_dto_free(item_tag_create_dto_t *item_tag_create_dto) {
    if(NULL == item_tag_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (item_tag_create_dto->id) {
        free(item_tag_create_dto->id);
        item_tag_create_dto->id = NULL;
    }
    if (item_tag_create_dto->timestamp) {
        free(item_tag_create_dto->timestamp);
        item_tag_create_dto->timestamp = NULL;
    }
    if (item_tag_create_dto->title) {
        free(item_tag_create_dto->title);
        item_tag_create_dto->title = NULL;
    }
    if (item_tag_create_dto->description) {
        free(item_tag_create_dto->description);
        item_tag_create_dto->description = NULL;
    }
    if (item_tag_create_dto->business_id) {
        free(item_tag_create_dto->business_id);
        item_tag_create_dto->business_id = NULL;
    }
    free(item_tag_create_dto);
}

cJSON *item_tag_create_dto_convertToJSON(item_tag_create_dto_t *item_tag_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // item_tag_create_dto->id
    if(item_tag_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", item_tag_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // item_tag_create_dto->timestamp
    if(item_tag_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", item_tag_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // item_tag_create_dto->title
    if (!item_tag_create_dto->title) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "title", item_tag_create_dto->title) == NULL) {
    goto fail; //String
    }


    // item_tag_create_dto->description
    if(item_tag_create_dto->description) {
    if(cJSON_AddStringToObject(item, "description", item_tag_create_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // item_tag_create_dto->business_id
    if (!item_tag_create_dto->business_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "businessID", item_tag_create_dto->business_id) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

item_tag_create_dto_t *item_tag_create_dto_parseFromJSON(cJSON *item_tag_create_dtoJSON){

    item_tag_create_dto_t *item_tag_create_dto_local_var = NULL;

    // item_tag_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(item_tag_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // item_tag_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(item_tag_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // item_tag_create_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(item_tag_create_dtoJSON, "title");
    if (!title) {
        goto end;
    }

    
    if(!cJSON_IsString(title))
    {
    goto end; //String
    }

    // item_tag_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(item_tag_create_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // item_tag_create_dto->business_id
    cJSON *business_id = cJSON_GetObjectItemCaseSensitive(item_tag_create_dtoJSON, "businessID");
    if (!business_id) {
        goto end;
    }

    
    if(!cJSON_IsString(business_id))
    {
    goto end; //String
    }


    item_tag_create_dto_local_var = item_tag_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(title->valuestring),
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        strdup(business_id->valuestring)
        );

    return item_tag_create_dto_local_var;
end:
    return NULL;

}
