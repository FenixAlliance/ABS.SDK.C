#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ip_lookup_dto.h"



ip_lookup_dto_t *ip_lookup_dto_create(
    char *id,
    char *timestamp,
    char *ip,
    char *ua,
    char *city
    ) {
    ip_lookup_dto_t *ip_lookup_dto_local_var = malloc(sizeof(ip_lookup_dto_t));
    if (!ip_lookup_dto_local_var) {
        return NULL;
    }
    ip_lookup_dto_local_var->id = id;
    ip_lookup_dto_local_var->timestamp = timestamp;
    ip_lookup_dto_local_var->ip = ip;
    ip_lookup_dto_local_var->ua = ua;
    ip_lookup_dto_local_var->city = city;

    return ip_lookup_dto_local_var;
}


void ip_lookup_dto_free(ip_lookup_dto_t *ip_lookup_dto) {
    if(NULL == ip_lookup_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (ip_lookup_dto->id) {
        free(ip_lookup_dto->id);
        ip_lookup_dto->id = NULL;
    }
    if (ip_lookup_dto->timestamp) {
        free(ip_lookup_dto->timestamp);
        ip_lookup_dto->timestamp = NULL;
    }
    if (ip_lookup_dto->ip) {
        free(ip_lookup_dto->ip);
        ip_lookup_dto->ip = NULL;
    }
    if (ip_lookup_dto->ua) {
        free(ip_lookup_dto->ua);
        ip_lookup_dto->ua = NULL;
    }
    if (ip_lookup_dto->city) {
        free(ip_lookup_dto->city);
        ip_lookup_dto->city = NULL;
    }
    free(ip_lookup_dto);
}

cJSON *ip_lookup_dto_convertToJSON(ip_lookup_dto_t *ip_lookup_dto) {
    cJSON *item = cJSON_CreateObject();

    // ip_lookup_dto->id
    if(ip_lookup_dto->id) {
    if(cJSON_AddStringToObject(item, "id", ip_lookup_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // ip_lookup_dto->timestamp
    if(ip_lookup_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", ip_lookup_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // ip_lookup_dto->ip
    if(ip_lookup_dto->ip) {
    if(cJSON_AddStringToObject(item, "ip", ip_lookup_dto->ip) == NULL) {
    goto fail; //String
    }
    }


    // ip_lookup_dto->ua
    if(ip_lookup_dto->ua) {
    if(cJSON_AddStringToObject(item, "ua", ip_lookup_dto->ua) == NULL) {
    goto fail; //String
    }
    }


    // ip_lookup_dto->city
    if(ip_lookup_dto->city) {
    if(cJSON_AddStringToObject(item, "city", ip_lookup_dto->city) == NULL) {
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

ip_lookup_dto_t *ip_lookup_dto_parseFromJSON(cJSON *ip_lookup_dtoJSON){

    ip_lookup_dto_t *ip_lookup_dto_local_var = NULL;

    // ip_lookup_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(ip_lookup_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // ip_lookup_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(ip_lookup_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // ip_lookup_dto->ip
    cJSON *ip = cJSON_GetObjectItemCaseSensitive(ip_lookup_dtoJSON, "ip");
    if (ip) { 
    if(!cJSON_IsString(ip) && !cJSON_IsNull(ip))
    {
    goto end; //String
    }
    }

    // ip_lookup_dto->ua
    cJSON *ua = cJSON_GetObjectItemCaseSensitive(ip_lookup_dtoJSON, "ua");
    if (ua) { 
    if(!cJSON_IsString(ua) && !cJSON_IsNull(ua))
    {
    goto end; //String
    }
    }

    // ip_lookup_dto->city
    cJSON *city = cJSON_GetObjectItemCaseSensitive(ip_lookup_dtoJSON, "city");
    if (city) { 
    if(!cJSON_IsString(city) && !cJSON_IsNull(city))
    {
    goto end; //String
    }
    }


    ip_lookup_dto_local_var = ip_lookup_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        ip && !cJSON_IsNull(ip) ? strdup(ip->valuestring) : NULL,
        ua && !cJSON_IsNull(ua) ? strdup(ua->valuestring) : NULL,
        city && !cJSON_IsNull(city) ? strdup(city->valuestring) : NULL
        );

    return ip_lookup_dto_local_var;
end:
    return NULL;

}
