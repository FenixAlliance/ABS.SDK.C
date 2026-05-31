#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "point_of_sale_create_dto.h"



point_of_sale_create_dto_t *point_of_sale_create_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *code,
    char *description,
    char *price_list_id,
    char *location_id
    ) {
    point_of_sale_create_dto_t *point_of_sale_create_dto_local_var = malloc(sizeof(point_of_sale_create_dto_t));
    if (!point_of_sale_create_dto_local_var) {
        return NULL;
    }
    point_of_sale_create_dto_local_var->id = id;
    point_of_sale_create_dto_local_var->timestamp = timestamp;
    point_of_sale_create_dto_local_var->title = title;
    point_of_sale_create_dto_local_var->code = code;
    point_of_sale_create_dto_local_var->description = description;
    point_of_sale_create_dto_local_var->price_list_id = price_list_id;
    point_of_sale_create_dto_local_var->location_id = location_id;

    return point_of_sale_create_dto_local_var;
}


void point_of_sale_create_dto_free(point_of_sale_create_dto_t *point_of_sale_create_dto) {
    if(NULL == point_of_sale_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (point_of_sale_create_dto->id) {
        free(point_of_sale_create_dto->id);
        point_of_sale_create_dto->id = NULL;
    }
    if (point_of_sale_create_dto->timestamp) {
        free(point_of_sale_create_dto->timestamp);
        point_of_sale_create_dto->timestamp = NULL;
    }
    if (point_of_sale_create_dto->title) {
        free(point_of_sale_create_dto->title);
        point_of_sale_create_dto->title = NULL;
    }
    if (point_of_sale_create_dto->code) {
        free(point_of_sale_create_dto->code);
        point_of_sale_create_dto->code = NULL;
    }
    if (point_of_sale_create_dto->description) {
        free(point_of_sale_create_dto->description);
        point_of_sale_create_dto->description = NULL;
    }
    if (point_of_sale_create_dto->price_list_id) {
        free(point_of_sale_create_dto->price_list_id);
        point_of_sale_create_dto->price_list_id = NULL;
    }
    if (point_of_sale_create_dto->location_id) {
        free(point_of_sale_create_dto->location_id);
        point_of_sale_create_dto->location_id = NULL;
    }
    free(point_of_sale_create_dto);
}

cJSON *point_of_sale_create_dto_convertToJSON(point_of_sale_create_dto_t *point_of_sale_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // point_of_sale_create_dto->id
    if(point_of_sale_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", point_of_sale_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // point_of_sale_create_dto->timestamp
    if(point_of_sale_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", point_of_sale_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // point_of_sale_create_dto->title
    if (!point_of_sale_create_dto->title) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "title", point_of_sale_create_dto->title) == NULL) {
    goto fail; //String
    }


    // point_of_sale_create_dto->code
    if(point_of_sale_create_dto->code) {
    if(cJSON_AddStringToObject(item, "code", point_of_sale_create_dto->code) == NULL) {
    goto fail; //String
    }
    }


    // point_of_sale_create_dto->description
    if(point_of_sale_create_dto->description) {
    if(cJSON_AddStringToObject(item, "description", point_of_sale_create_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // point_of_sale_create_dto->price_list_id
    if(point_of_sale_create_dto->price_list_id) {
    if(cJSON_AddStringToObject(item, "priceListId", point_of_sale_create_dto->price_list_id) == NULL) {
    goto fail; //String
    }
    }


    // point_of_sale_create_dto->location_id
    if(point_of_sale_create_dto->location_id) {
    if(cJSON_AddStringToObject(item, "locationId", point_of_sale_create_dto->location_id) == NULL) {
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

point_of_sale_create_dto_t *point_of_sale_create_dto_parseFromJSON(cJSON *point_of_sale_create_dtoJSON){

    point_of_sale_create_dto_t *point_of_sale_create_dto_local_var = NULL;

    // point_of_sale_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(point_of_sale_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // point_of_sale_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(point_of_sale_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // point_of_sale_create_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(point_of_sale_create_dtoJSON, "title");
    if (!title) {
        goto end;
    }

    
    if(!cJSON_IsString(title))
    {
    goto end; //String
    }

    // point_of_sale_create_dto->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(point_of_sale_create_dtoJSON, "code");
    if (code) { 
    if(!cJSON_IsString(code) && !cJSON_IsNull(code))
    {
    goto end; //String
    }
    }

    // point_of_sale_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(point_of_sale_create_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // point_of_sale_create_dto->price_list_id
    cJSON *price_list_id = cJSON_GetObjectItemCaseSensitive(point_of_sale_create_dtoJSON, "priceListId");
    if (price_list_id) { 
    if(!cJSON_IsString(price_list_id) && !cJSON_IsNull(price_list_id))
    {
    goto end; //String
    }
    }

    // point_of_sale_create_dto->location_id
    cJSON *location_id = cJSON_GetObjectItemCaseSensitive(point_of_sale_create_dtoJSON, "locationId");
    if (location_id) { 
    if(!cJSON_IsString(location_id) && !cJSON_IsNull(location_id))
    {
    goto end; //String
    }
    }


    point_of_sale_create_dto_local_var = point_of_sale_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(title->valuestring),
        code && !cJSON_IsNull(code) ? strdup(code->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        price_list_id && !cJSON_IsNull(price_list_id) ? strdup(price_list_id->valuestring) : NULL,
        location_id && !cJSON_IsNull(location_id) ? strdup(location_id->valuestring) : NULL
        );

    return point_of_sale_create_dto_local_var;
end:
    return NULL;

}
