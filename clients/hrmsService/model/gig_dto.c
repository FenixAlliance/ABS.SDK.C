#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "gig_dto.h"



gig_dto_t *gig_dto_create(
    char *id,
    char *timestamp
    ) {
    gig_dto_t *gig_dto_local_var = malloc(sizeof(gig_dto_t));
    if (!gig_dto_local_var) {
        return NULL;
    }
    gig_dto_local_var->id = id;
    gig_dto_local_var->timestamp = timestamp;

    return gig_dto_local_var;
}


void gig_dto_free(gig_dto_t *gig_dto) {
    if(NULL == gig_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (gig_dto->id) {
        free(gig_dto->id);
        gig_dto->id = NULL;
    }
    if (gig_dto->timestamp) {
        free(gig_dto->timestamp);
        gig_dto->timestamp = NULL;
    }
    free(gig_dto);
}

cJSON *gig_dto_convertToJSON(gig_dto_t *gig_dto) {
    cJSON *item = cJSON_CreateObject();

    // gig_dto->id
    if(gig_dto->id) {
    if(cJSON_AddStringToObject(item, "id", gig_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // gig_dto->timestamp
    if(gig_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", gig_dto->timestamp) == NULL) {
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

gig_dto_t *gig_dto_parseFromJSON(cJSON *gig_dtoJSON){

    gig_dto_t *gig_dto_local_var = NULL;

    // gig_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(gig_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // gig_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(gig_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }


    gig_dto_local_var = gig_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL
        );

    return gig_dto_local_var;
end:
    return NULL;

}
