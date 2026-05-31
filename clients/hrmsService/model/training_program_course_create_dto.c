#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "training_program_course_create_dto.h"



training_program_course_create_dto_t *training_program_course_create_dto_create(
    char *id,
    char *timestamp,
    char *training_program_id,
    char *course_id
    ) {
    training_program_course_create_dto_t *training_program_course_create_dto_local_var = malloc(sizeof(training_program_course_create_dto_t));
    if (!training_program_course_create_dto_local_var) {
        return NULL;
    }
    training_program_course_create_dto_local_var->id = id;
    training_program_course_create_dto_local_var->timestamp = timestamp;
    training_program_course_create_dto_local_var->training_program_id = training_program_id;
    training_program_course_create_dto_local_var->course_id = course_id;

    return training_program_course_create_dto_local_var;
}


void training_program_course_create_dto_free(training_program_course_create_dto_t *training_program_course_create_dto) {
    if(NULL == training_program_course_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (training_program_course_create_dto->id) {
        free(training_program_course_create_dto->id);
        training_program_course_create_dto->id = NULL;
    }
    if (training_program_course_create_dto->timestamp) {
        free(training_program_course_create_dto->timestamp);
        training_program_course_create_dto->timestamp = NULL;
    }
    if (training_program_course_create_dto->training_program_id) {
        free(training_program_course_create_dto->training_program_id);
        training_program_course_create_dto->training_program_id = NULL;
    }
    if (training_program_course_create_dto->course_id) {
        free(training_program_course_create_dto->course_id);
        training_program_course_create_dto->course_id = NULL;
    }
    free(training_program_course_create_dto);
}

cJSON *training_program_course_create_dto_convertToJSON(training_program_course_create_dto_t *training_program_course_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // training_program_course_create_dto->id
    if(training_program_course_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", training_program_course_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // training_program_course_create_dto->timestamp
    if(training_program_course_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", training_program_course_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // training_program_course_create_dto->training_program_id
    if (!training_program_course_create_dto->training_program_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "trainingProgramId", training_program_course_create_dto->training_program_id) == NULL) {
    goto fail; //String
    }


    // training_program_course_create_dto->course_id
    if (!training_program_course_create_dto->course_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "courseId", training_program_course_create_dto->course_id) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

training_program_course_create_dto_t *training_program_course_create_dto_parseFromJSON(cJSON *training_program_course_create_dtoJSON){

    training_program_course_create_dto_t *training_program_course_create_dto_local_var = NULL;

    // training_program_course_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(training_program_course_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // training_program_course_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(training_program_course_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // training_program_course_create_dto->training_program_id
    cJSON *training_program_id = cJSON_GetObjectItemCaseSensitive(training_program_course_create_dtoJSON, "trainingProgramId");
    if (!training_program_id) {
        goto end;
    }

    
    if(!cJSON_IsString(training_program_id))
    {
    goto end; //String
    }

    // training_program_course_create_dto->course_id
    cJSON *course_id = cJSON_GetObjectItemCaseSensitive(training_program_course_create_dtoJSON, "courseId");
    if (!course_id) {
        goto end;
    }

    
    if(!cJSON_IsString(course_id))
    {
    goto end; //String
    }


    training_program_course_create_dto_local_var = training_program_course_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(training_program_id->valuestring),
        strdup(course_id->valuestring)
        );

    return training_program_course_create_dto_local_var;
end:
    return NULL;

}
