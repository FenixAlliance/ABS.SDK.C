#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "employer_profile_dto.h"



employer_profile_dto_t *employer_profile_dto_create(
    char *id,
    char *timestamp
    ) {
    employer_profile_dto_t *employer_profile_dto_local_var = malloc(sizeof(employer_profile_dto_t));
    if (!employer_profile_dto_local_var) {
        return NULL;
    }
    employer_profile_dto_local_var->id = id;
    employer_profile_dto_local_var->timestamp = timestamp;

    return employer_profile_dto_local_var;
}


void employer_profile_dto_free(employer_profile_dto_t *employer_profile_dto) {
    if(NULL == employer_profile_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (employer_profile_dto->id) {
        free(employer_profile_dto->id);
        employer_profile_dto->id = NULL;
    }
    if (employer_profile_dto->timestamp) {
        free(employer_profile_dto->timestamp);
        employer_profile_dto->timestamp = NULL;
    }
    free(employer_profile_dto);
}

cJSON *employer_profile_dto_convertToJSON(employer_profile_dto_t *employer_profile_dto) {
    cJSON *item = cJSON_CreateObject();

    // employer_profile_dto->id
    if(employer_profile_dto->id) {
    if(cJSON_AddStringToObject(item, "id", employer_profile_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // employer_profile_dto->timestamp
    if(employer_profile_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", employer_profile_dto->timestamp) == NULL) {
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

employer_profile_dto_t *employer_profile_dto_parseFromJSON(cJSON *employer_profile_dtoJSON){

    employer_profile_dto_t *employer_profile_dto_local_var = NULL;

    // employer_profile_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(employer_profile_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // employer_profile_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(employer_profile_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }


    employer_profile_dto_local_var = employer_profile_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL
        );

    return employer_profile_dto_local_var;
end:
    return NULL;

}
