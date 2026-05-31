#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "training_program_course_dto.h"



training_program_course_dto_t *training_program_course_dto_create(
    char *id,
    char *timestamp,
    char *tenant_id,
    char *enrollment_id,
    char *training_program_id,
    char *course_id
    ) {
    training_program_course_dto_t *training_program_course_dto_local_var = malloc(sizeof(training_program_course_dto_t));
    if (!training_program_course_dto_local_var) {
        return NULL;
    }
    training_program_course_dto_local_var->id = id;
    training_program_course_dto_local_var->timestamp = timestamp;
    training_program_course_dto_local_var->tenant_id = tenant_id;
    training_program_course_dto_local_var->enrollment_id = enrollment_id;
    training_program_course_dto_local_var->training_program_id = training_program_id;
    training_program_course_dto_local_var->course_id = course_id;

    return training_program_course_dto_local_var;
}


void training_program_course_dto_free(training_program_course_dto_t *training_program_course_dto) {
    if(NULL == training_program_course_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (training_program_course_dto->id) {
        free(training_program_course_dto->id);
        training_program_course_dto->id = NULL;
    }
    if (training_program_course_dto->timestamp) {
        free(training_program_course_dto->timestamp);
        training_program_course_dto->timestamp = NULL;
    }
    if (training_program_course_dto->tenant_id) {
        free(training_program_course_dto->tenant_id);
        training_program_course_dto->tenant_id = NULL;
    }
    if (training_program_course_dto->enrollment_id) {
        free(training_program_course_dto->enrollment_id);
        training_program_course_dto->enrollment_id = NULL;
    }
    if (training_program_course_dto->training_program_id) {
        free(training_program_course_dto->training_program_id);
        training_program_course_dto->training_program_id = NULL;
    }
    if (training_program_course_dto->course_id) {
        free(training_program_course_dto->course_id);
        training_program_course_dto->course_id = NULL;
    }
    free(training_program_course_dto);
}

cJSON *training_program_course_dto_convertToJSON(training_program_course_dto_t *training_program_course_dto) {
    cJSON *item = cJSON_CreateObject();

    // training_program_course_dto->id
    if(training_program_course_dto->id) {
    if(cJSON_AddStringToObject(item, "id", training_program_course_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // training_program_course_dto->timestamp
    if(training_program_course_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", training_program_course_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // training_program_course_dto->tenant_id
    if(training_program_course_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", training_program_course_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // training_program_course_dto->enrollment_id
    if(training_program_course_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", training_program_course_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // training_program_course_dto->training_program_id
    if(training_program_course_dto->training_program_id) {
    if(cJSON_AddStringToObject(item, "trainingProgramId", training_program_course_dto->training_program_id) == NULL) {
    goto fail; //String
    }
    }


    // training_program_course_dto->course_id
    if(training_program_course_dto->course_id) {
    if(cJSON_AddStringToObject(item, "courseId", training_program_course_dto->course_id) == NULL) {
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

training_program_course_dto_t *training_program_course_dto_parseFromJSON(cJSON *training_program_course_dtoJSON){

    training_program_course_dto_t *training_program_course_dto_local_var = NULL;

    // training_program_course_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(training_program_course_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // training_program_course_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(training_program_course_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // training_program_course_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(training_program_course_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // training_program_course_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(training_program_course_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // training_program_course_dto->training_program_id
    cJSON *training_program_id = cJSON_GetObjectItemCaseSensitive(training_program_course_dtoJSON, "trainingProgramId");
    if (training_program_id) { 
    if(!cJSON_IsString(training_program_id) && !cJSON_IsNull(training_program_id))
    {
    goto end; //String
    }
    }

    // training_program_course_dto->course_id
    cJSON *course_id = cJSON_GetObjectItemCaseSensitive(training_program_course_dtoJSON, "courseId");
    if (course_id) { 
    if(!cJSON_IsString(course_id) && !cJSON_IsNull(course_id))
    {
    goto end; //String
    }
    }


    training_program_course_dto_local_var = training_program_course_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        training_program_id && !cJSON_IsNull(training_program_id) ? strdup(training_program_id->valuestring) : NULL,
        course_id && !cJSON_IsNull(course_id) ? strdup(course_id->valuestring) : NULL
        );

    return training_program_course_dto_local_var;
end:
    return NULL;

}
