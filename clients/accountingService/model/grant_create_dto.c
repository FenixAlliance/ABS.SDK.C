#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "grant_create_dto.h"



grant_create_dto_t *grant_create_dto_create(
    char *id,
    char *timestamp
    ) {
    grant_create_dto_t *grant_create_dto_local_var = malloc(sizeof(grant_create_dto_t));
    if (!grant_create_dto_local_var) {
        return NULL;
    }
    grant_create_dto_local_var->id = id;
    grant_create_dto_local_var->timestamp = timestamp;

    return grant_create_dto_local_var;
}


void grant_create_dto_free(grant_create_dto_t *grant_create_dto) {
    if(NULL == grant_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (grant_create_dto->id) {
        free(grant_create_dto->id);
        grant_create_dto->id = NULL;
    }
    if (grant_create_dto->timestamp) {
        free(grant_create_dto->timestamp);
        grant_create_dto->timestamp = NULL;
    }
    free(grant_create_dto);
}

cJSON *grant_create_dto_convertToJSON(grant_create_dto_t *grant_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // grant_create_dto->id
    if(grant_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", grant_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // grant_create_dto->timestamp
    if(grant_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", grant_create_dto->timestamp) == NULL) {
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

grant_create_dto_t *grant_create_dto_parseFromJSON(cJSON *grant_create_dtoJSON){

    grant_create_dto_t *grant_create_dto_local_var = NULL;

    // grant_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(grant_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // grant_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(grant_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }


    grant_create_dto_local_var = grant_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL
        );

    return grant_create_dto_local_var;
end:
    return NULL;

}
