#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "training_program_course_update_dto.h"



training_program_course_update_dto_t *training_program_course_update_dto_create(
    char *training_program_id,
    char *course_id
    ) {
    training_program_course_update_dto_t *training_program_course_update_dto_local_var = malloc(sizeof(training_program_course_update_dto_t));
    if (!training_program_course_update_dto_local_var) {
        return NULL;
    }
    training_program_course_update_dto_local_var->training_program_id = training_program_id;
    training_program_course_update_dto_local_var->course_id = course_id;

    return training_program_course_update_dto_local_var;
}


void training_program_course_update_dto_free(training_program_course_update_dto_t *training_program_course_update_dto) {
    if(NULL == training_program_course_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (training_program_course_update_dto->training_program_id) {
        free(training_program_course_update_dto->training_program_id);
        training_program_course_update_dto->training_program_id = NULL;
    }
    if (training_program_course_update_dto->course_id) {
        free(training_program_course_update_dto->course_id);
        training_program_course_update_dto->course_id = NULL;
    }
    free(training_program_course_update_dto);
}

cJSON *training_program_course_update_dto_convertToJSON(training_program_course_update_dto_t *training_program_course_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // training_program_course_update_dto->training_program_id
    if(training_program_course_update_dto->training_program_id) {
    if(cJSON_AddStringToObject(item, "trainingProgramId", training_program_course_update_dto->training_program_id) == NULL) {
    goto fail; //String
    }
    }


    // training_program_course_update_dto->course_id
    if(training_program_course_update_dto->course_id) {
    if(cJSON_AddStringToObject(item, "courseId", training_program_course_update_dto->course_id) == NULL) {
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

training_program_course_update_dto_t *training_program_course_update_dto_parseFromJSON(cJSON *training_program_course_update_dtoJSON){

    training_program_course_update_dto_t *training_program_course_update_dto_local_var = NULL;

    // training_program_course_update_dto->training_program_id
    cJSON *training_program_id = cJSON_GetObjectItemCaseSensitive(training_program_course_update_dtoJSON, "trainingProgramId");
    if (training_program_id) { 
    if(!cJSON_IsString(training_program_id) && !cJSON_IsNull(training_program_id))
    {
    goto end; //String
    }
    }

    // training_program_course_update_dto->course_id
    cJSON *course_id = cJSON_GetObjectItemCaseSensitive(training_program_course_update_dtoJSON, "courseId");
    if (course_id) { 
    if(!cJSON_IsString(course_id) && !cJSON_IsNull(course_id))
    {
    goto end; //String
    }
    }


    training_program_course_update_dto_local_var = training_program_course_update_dto_create (
        training_program_id && !cJSON_IsNull(training_program_id) ? strdup(training_program_id->valuestring) : NULL,
        course_id && !cJSON_IsNull(course_id) ? strdup(course_id->valuestring) : NULL
        );

    return training_program_course_update_dto_local_var;
end:
    return NULL;

}
