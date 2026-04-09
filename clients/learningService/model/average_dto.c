#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "average_dto.h"



average_dto_t *average_dto_create(
    char *id,
    char *timestamp,
    double average
    ) {
    average_dto_t *average_dto_local_var = malloc(sizeof(average_dto_t));
    if (!average_dto_local_var) {
        return NULL;
    }
    average_dto_local_var->id = id;
    average_dto_local_var->timestamp = timestamp;
    average_dto_local_var->average = average;

    return average_dto_local_var;
}


void average_dto_free(average_dto_t *average_dto) {
    if(NULL == average_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (average_dto->id) {
        free(average_dto->id);
        average_dto->id = NULL;
    }
    if (average_dto->timestamp) {
        free(average_dto->timestamp);
        average_dto->timestamp = NULL;
    }
    free(average_dto);
}

cJSON *average_dto_convertToJSON(average_dto_t *average_dto) {
    cJSON *item = cJSON_CreateObject();

    // average_dto->id
    if(average_dto->id) {
    if(cJSON_AddStringToObject(item, "id", average_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // average_dto->timestamp
    if(average_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", average_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // average_dto->average
    if(average_dto->average) {
    if(cJSON_AddNumberToObject(item, "average", average_dto->average) == NULL) {
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

average_dto_t *average_dto_parseFromJSON(cJSON *average_dtoJSON){

    average_dto_t *average_dto_local_var = NULL;

    // average_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(average_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // average_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(average_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // average_dto->average
    cJSON *average = cJSON_GetObjectItemCaseSensitive(average_dtoJSON, "average");
    if (average) { 
    if(!cJSON_IsNumber(average))
    {
    goto end; //Numeric
    }
    }


    average_dto_local_var = average_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        average ? average->valuedouble : 0
        );

    return average_dto_local_var;
end:
    return NULL;

}
