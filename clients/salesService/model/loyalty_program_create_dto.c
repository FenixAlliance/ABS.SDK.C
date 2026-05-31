#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "loyalty_program_create_dto.h"



loyalty_program_create_dto_t *loyalty_program_create_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    char *price_list_id
    ) {
    loyalty_program_create_dto_t *loyalty_program_create_dto_local_var = malloc(sizeof(loyalty_program_create_dto_t));
    if (!loyalty_program_create_dto_local_var) {
        return NULL;
    }
    loyalty_program_create_dto_local_var->id = id;
    loyalty_program_create_dto_local_var->timestamp = timestamp;
    loyalty_program_create_dto_local_var->title = title;
    loyalty_program_create_dto_local_var->description = description;
    loyalty_program_create_dto_local_var->price_list_id = price_list_id;

    return loyalty_program_create_dto_local_var;
}


void loyalty_program_create_dto_free(loyalty_program_create_dto_t *loyalty_program_create_dto) {
    if(NULL == loyalty_program_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (loyalty_program_create_dto->id) {
        free(loyalty_program_create_dto->id);
        loyalty_program_create_dto->id = NULL;
    }
    if (loyalty_program_create_dto->timestamp) {
        free(loyalty_program_create_dto->timestamp);
        loyalty_program_create_dto->timestamp = NULL;
    }
    if (loyalty_program_create_dto->title) {
        free(loyalty_program_create_dto->title);
        loyalty_program_create_dto->title = NULL;
    }
    if (loyalty_program_create_dto->description) {
        free(loyalty_program_create_dto->description);
        loyalty_program_create_dto->description = NULL;
    }
    if (loyalty_program_create_dto->price_list_id) {
        free(loyalty_program_create_dto->price_list_id);
        loyalty_program_create_dto->price_list_id = NULL;
    }
    free(loyalty_program_create_dto);
}

cJSON *loyalty_program_create_dto_convertToJSON(loyalty_program_create_dto_t *loyalty_program_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // loyalty_program_create_dto->id
    if(loyalty_program_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", loyalty_program_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // loyalty_program_create_dto->timestamp
    if(loyalty_program_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", loyalty_program_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // loyalty_program_create_dto->title
    if (!loyalty_program_create_dto->title) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "title", loyalty_program_create_dto->title) == NULL) {
    goto fail; //String
    }


    // loyalty_program_create_dto->description
    if(loyalty_program_create_dto->description) {
    if(cJSON_AddStringToObject(item, "description", loyalty_program_create_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // loyalty_program_create_dto->price_list_id
    if(loyalty_program_create_dto->price_list_id) {
    if(cJSON_AddStringToObject(item, "priceListId", loyalty_program_create_dto->price_list_id) == NULL) {
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

loyalty_program_create_dto_t *loyalty_program_create_dto_parseFromJSON(cJSON *loyalty_program_create_dtoJSON){

    loyalty_program_create_dto_t *loyalty_program_create_dto_local_var = NULL;

    // loyalty_program_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(loyalty_program_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // loyalty_program_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(loyalty_program_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // loyalty_program_create_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(loyalty_program_create_dtoJSON, "title");
    if (!title) {
        goto end;
    }

    
    if(!cJSON_IsString(title))
    {
    goto end; //String
    }

    // loyalty_program_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(loyalty_program_create_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // loyalty_program_create_dto->price_list_id
    cJSON *price_list_id = cJSON_GetObjectItemCaseSensitive(loyalty_program_create_dtoJSON, "priceListId");
    if (price_list_id) { 
    if(!cJSON_IsString(price_list_id) && !cJSON_IsNull(price_list_id))
    {
    goto end; //String
    }
    }


    loyalty_program_create_dto_local_var = loyalty_program_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(title->valuestring),
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        price_list_id && !cJSON_IsNull(price_list_id) ? strdup(price_list_id->valuestring) : NULL
        );

    return loyalty_program_create_dto_local_var;
end:
    return NULL;

}
