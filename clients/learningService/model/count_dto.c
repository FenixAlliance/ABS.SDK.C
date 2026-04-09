#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "count_dto.h"



count_dto_t *count_dto_create(
    char *id,
    char *timestamp,
    int count
    ) {
    count_dto_t *count_dto_local_var = malloc(sizeof(count_dto_t));
    if (!count_dto_local_var) {
        return NULL;
    }
    count_dto_local_var->id = id;
    count_dto_local_var->timestamp = timestamp;
    count_dto_local_var->count = count;

    return count_dto_local_var;
}


void count_dto_free(count_dto_t *count_dto) {
    if(NULL == count_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (count_dto->id) {
        free(count_dto->id);
        count_dto->id = NULL;
    }
    if (count_dto->timestamp) {
        free(count_dto->timestamp);
        count_dto->timestamp = NULL;
    }
    free(count_dto);
}

cJSON *count_dto_convertToJSON(count_dto_t *count_dto) {
    cJSON *item = cJSON_CreateObject();

    // count_dto->id
    if(count_dto->id) {
    if(cJSON_AddStringToObject(item, "id", count_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // count_dto->timestamp
    if(count_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", count_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // count_dto->count
    if(count_dto->count) {
    if(cJSON_AddNumberToObject(item, "count", count_dto->count) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

count_dto_t *count_dto_parseFromJSON(cJSON *count_dtoJSON){

    count_dto_t *count_dto_local_var = NULL;

    // count_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(count_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // count_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(count_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // count_dto->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(count_dtoJSON, "count");
    if (count) { 
    if(!cJSON_IsNumber(count))
    {
    goto end; //Numeric
    }
    }


    count_dto_local_var = count_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        count ? count->valuedouble : 0
        );

    return count_dto_local_var;
end:
    return NULL;

}
