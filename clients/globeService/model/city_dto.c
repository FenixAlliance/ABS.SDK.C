#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "city_dto.h"



city_dto_t *city_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *image_url,
    char *state_id,
    char *country_id,
    char *latitude,
    char *longitude
    ) {
    city_dto_t *city_dto_local_var = malloc(sizeof(city_dto_t));
    if (!city_dto_local_var) {
        return NULL;
    }
    city_dto_local_var->id = id;
    city_dto_local_var->timestamp = timestamp;
    city_dto_local_var->name = name;
    city_dto_local_var->image_url = image_url;
    city_dto_local_var->state_id = state_id;
    city_dto_local_var->country_id = country_id;
    city_dto_local_var->latitude = latitude;
    city_dto_local_var->longitude = longitude;

    return city_dto_local_var;
}


void city_dto_free(city_dto_t *city_dto) {
    if(NULL == city_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (city_dto->id) {
        free(city_dto->id);
        city_dto->id = NULL;
    }
    if (city_dto->timestamp) {
        free(city_dto->timestamp);
        city_dto->timestamp = NULL;
    }
    if (city_dto->name) {
        free(city_dto->name);
        city_dto->name = NULL;
    }
    if (city_dto->image_url) {
        free(city_dto->image_url);
        city_dto->image_url = NULL;
    }
    if (city_dto->state_id) {
        free(city_dto->state_id);
        city_dto->state_id = NULL;
    }
    if (city_dto->country_id) {
        free(city_dto->country_id);
        city_dto->country_id = NULL;
    }
    if (city_dto->latitude) {
        free(city_dto->latitude);
        city_dto->latitude = NULL;
    }
    if (city_dto->longitude) {
        free(city_dto->longitude);
        city_dto->longitude = NULL;
    }
    free(city_dto);
}

cJSON *city_dto_convertToJSON(city_dto_t *city_dto) {
    cJSON *item = cJSON_CreateObject();

    // city_dto->id
    if(city_dto->id) {
    if(cJSON_AddStringToObject(item, "id", city_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // city_dto->timestamp
    if(city_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", city_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // city_dto->name
    if(city_dto->name) {
    if(cJSON_AddStringToObject(item, "name", city_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // city_dto->image_url
    if(city_dto->image_url) {
    if(cJSON_AddStringToObject(item, "imageUrl", city_dto->image_url) == NULL) {
    goto fail; //String
    }
    }


    // city_dto->state_id
    if(city_dto->state_id) {
    if(cJSON_AddStringToObject(item, "stateId", city_dto->state_id) == NULL) {
    goto fail; //String
    }
    }


    // city_dto->country_id
    if(city_dto->country_id) {
    if(cJSON_AddStringToObject(item, "countryId", city_dto->country_id) == NULL) {
    goto fail; //String
    }
    }


    // city_dto->latitude
    if(city_dto->latitude) {
    if(cJSON_AddStringToObject(item, "latitude", city_dto->latitude) == NULL) {
    goto fail; //String
    }
    }


    // city_dto->longitude
    if(city_dto->longitude) {
    if(cJSON_AddStringToObject(item, "longitude", city_dto->longitude) == NULL) {
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

city_dto_t *city_dto_parseFromJSON(cJSON *city_dtoJSON){

    city_dto_t *city_dto_local_var = NULL;

    // city_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(city_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // city_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(city_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // city_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(city_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // city_dto->image_url
    cJSON *image_url = cJSON_GetObjectItemCaseSensitive(city_dtoJSON, "imageUrl");
    if (image_url) { 
    if(!cJSON_IsString(image_url) && !cJSON_IsNull(image_url))
    {
    goto end; //String
    }
    }

    // city_dto->state_id
    cJSON *state_id = cJSON_GetObjectItemCaseSensitive(city_dtoJSON, "stateId");
    if (state_id) { 
    if(!cJSON_IsString(state_id) && !cJSON_IsNull(state_id))
    {
    goto end; //String
    }
    }

    // city_dto->country_id
    cJSON *country_id = cJSON_GetObjectItemCaseSensitive(city_dtoJSON, "countryId");
    if (country_id) { 
    if(!cJSON_IsString(country_id) && !cJSON_IsNull(country_id))
    {
    goto end; //String
    }
    }

    // city_dto->latitude
    cJSON *latitude = cJSON_GetObjectItemCaseSensitive(city_dtoJSON, "latitude");
    if (latitude) { 
    if(!cJSON_IsString(latitude) && !cJSON_IsNull(latitude))
    {
    goto end; //String
    }
    }

    // city_dto->longitude
    cJSON *longitude = cJSON_GetObjectItemCaseSensitive(city_dtoJSON, "longitude");
    if (longitude) { 
    if(!cJSON_IsString(longitude) && !cJSON_IsNull(longitude))
    {
    goto end; //String
    }
    }


    city_dto_local_var = city_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        image_url && !cJSON_IsNull(image_url) ? strdup(image_url->valuestring) : NULL,
        state_id && !cJSON_IsNull(state_id) ? strdup(state_id->valuestring) : NULL,
        country_id && !cJSON_IsNull(country_id) ? strdup(country_id->valuestring) : NULL,
        latitude && !cJSON_IsNull(latitude) ? strdup(latitude->valuestring) : NULL,
        longitude && !cJSON_IsNull(longitude) ? strdup(longitude->valuestring) : NULL
        );

    return city_dto_local_var;
end:
    return NULL;

}
