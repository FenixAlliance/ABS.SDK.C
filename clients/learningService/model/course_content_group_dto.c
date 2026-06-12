#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "course_content_group_dto.h"



course_content_group_dto_t *course_content_group_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *course_id,
    char *tenant_id,
    char *enrollment_id
    ) {
    course_content_group_dto_t *course_content_group_dto_local_var = malloc(sizeof(course_content_group_dto_t));
    if (!course_content_group_dto_local_var) {
        return NULL;
    }
    course_content_group_dto_local_var->id = id;
    course_content_group_dto_local_var->timestamp = timestamp;
    course_content_group_dto_local_var->name = name;
    course_content_group_dto_local_var->course_id = course_id;
    course_content_group_dto_local_var->tenant_id = tenant_id;
    course_content_group_dto_local_var->enrollment_id = enrollment_id;

    return course_content_group_dto_local_var;
}


void course_content_group_dto_free(course_content_group_dto_t *course_content_group_dto) {
    if(NULL == course_content_group_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (course_content_group_dto->id) {
        free(course_content_group_dto->id);
        course_content_group_dto->id = NULL;
    }
    if (course_content_group_dto->timestamp) {
        free(course_content_group_dto->timestamp);
        course_content_group_dto->timestamp = NULL;
    }
    if (course_content_group_dto->name) {
        free(course_content_group_dto->name);
        course_content_group_dto->name = NULL;
    }
    if (course_content_group_dto->course_id) {
        free(course_content_group_dto->course_id);
        course_content_group_dto->course_id = NULL;
    }
    if (course_content_group_dto->tenant_id) {
        free(course_content_group_dto->tenant_id);
        course_content_group_dto->tenant_id = NULL;
    }
    if (course_content_group_dto->enrollment_id) {
        free(course_content_group_dto->enrollment_id);
        course_content_group_dto->enrollment_id = NULL;
    }
    free(course_content_group_dto);
}

cJSON *course_content_group_dto_convertToJSON(course_content_group_dto_t *course_content_group_dto) {
    cJSON *item = cJSON_CreateObject();

    // course_content_group_dto->id
    if(course_content_group_dto->id) {
    if(cJSON_AddStringToObject(item, "id", course_content_group_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // course_content_group_dto->timestamp
    if(course_content_group_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", course_content_group_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // course_content_group_dto->name
    if(course_content_group_dto->name) {
    if(cJSON_AddStringToObject(item, "name", course_content_group_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // course_content_group_dto->course_id
    if(course_content_group_dto->course_id) {
    if(cJSON_AddStringToObject(item, "courseId", course_content_group_dto->course_id) == NULL) {
    goto fail; //String
    }
    }


    // course_content_group_dto->tenant_id
    if(course_content_group_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", course_content_group_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // course_content_group_dto->enrollment_id
    if(course_content_group_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", course_content_group_dto->enrollment_id) == NULL) {
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

course_content_group_dto_t *course_content_group_dto_parseFromJSON(cJSON *course_content_group_dtoJSON){

    course_content_group_dto_t *course_content_group_dto_local_var = NULL;

    // course_content_group_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(course_content_group_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // course_content_group_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(course_content_group_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // course_content_group_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(course_content_group_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // course_content_group_dto->course_id
    cJSON *course_id = cJSON_GetObjectItemCaseSensitive(course_content_group_dtoJSON, "courseId");
    if (course_id) { 
    if(!cJSON_IsString(course_id) && !cJSON_IsNull(course_id))
    {
    goto end; //String
    }
    }

    // course_content_group_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(course_content_group_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // course_content_group_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(course_content_group_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }


    course_content_group_dto_local_var = course_content_group_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        course_id && !cJSON_IsNull(course_id) ? strdup(course_id->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL
        );

    return course_content_group_dto_local_var;
end:
    return NULL;

}
