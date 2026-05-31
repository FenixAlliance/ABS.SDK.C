#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "training_program_create_dto.h"



training_program_create_dto_t *training_program_create_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description
    ) {
    training_program_create_dto_t *training_program_create_dto_local_var = malloc(sizeof(training_program_create_dto_t));
    if (!training_program_create_dto_local_var) {
        return NULL;
    }
    training_program_create_dto_local_var->id = id;
    training_program_create_dto_local_var->timestamp = timestamp;
    training_program_create_dto_local_var->title = title;
    training_program_create_dto_local_var->description = description;

    return training_program_create_dto_local_var;
}


void training_program_create_dto_free(training_program_create_dto_t *training_program_create_dto) {
    if(NULL == training_program_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (training_program_create_dto->id) {
        free(training_program_create_dto->id);
        training_program_create_dto->id = NULL;
    }
    if (training_program_create_dto->timestamp) {
        free(training_program_create_dto->timestamp);
        training_program_create_dto->timestamp = NULL;
    }
    if (training_program_create_dto->title) {
        free(training_program_create_dto->title);
        training_program_create_dto->title = NULL;
    }
    if (training_program_create_dto->description) {
        free(training_program_create_dto->description);
        training_program_create_dto->description = NULL;
    }
    free(training_program_create_dto);
}

cJSON *training_program_create_dto_convertToJSON(training_program_create_dto_t *training_program_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // training_program_create_dto->id
    if(training_program_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", training_program_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // training_program_create_dto->timestamp
    if(training_program_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", training_program_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // training_program_create_dto->title
    if (!training_program_create_dto->title) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "title", training_program_create_dto->title) == NULL) {
    goto fail; //String
    }


    // training_program_create_dto->description
    if(training_program_create_dto->description) {
    if(cJSON_AddStringToObject(item, "description", training_program_create_dto->description) == NULL) {
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

training_program_create_dto_t *training_program_create_dto_parseFromJSON(cJSON *training_program_create_dtoJSON){

    training_program_create_dto_t *training_program_create_dto_local_var = NULL;

    // training_program_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(training_program_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // training_program_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(training_program_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // training_program_create_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(training_program_create_dtoJSON, "title");
    if (!title) {
        goto end;
    }

    
    if(!cJSON_IsString(title))
    {
    goto end; //String
    }

    // training_program_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(training_program_create_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }


    training_program_create_dto_local_var = training_program_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(title->valuestring),
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL
        );

    return training_program_create_dto_local_var;
end:
    return NULL;

}
