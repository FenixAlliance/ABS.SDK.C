#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "course_unit_component_dto.h"



course_unit_component_dto_t *course_unit_component_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    char *content,
    int order,
    char *course_id,
    char *course_unit_id,
    char *tenant_id
    ) {
    course_unit_component_dto_t *course_unit_component_dto_local_var = malloc(sizeof(course_unit_component_dto_t));
    if (!course_unit_component_dto_local_var) {
        return NULL;
    }
    course_unit_component_dto_local_var->id = id;
    course_unit_component_dto_local_var->timestamp = timestamp;
    course_unit_component_dto_local_var->title = title;
    course_unit_component_dto_local_var->description = description;
    course_unit_component_dto_local_var->content = content;
    course_unit_component_dto_local_var->order = order;
    course_unit_component_dto_local_var->course_id = course_id;
    course_unit_component_dto_local_var->course_unit_id = course_unit_id;
    course_unit_component_dto_local_var->tenant_id = tenant_id;

    return course_unit_component_dto_local_var;
}


void course_unit_component_dto_free(course_unit_component_dto_t *course_unit_component_dto) {
    if(NULL == course_unit_component_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (course_unit_component_dto->id) {
        free(course_unit_component_dto->id);
        course_unit_component_dto->id = NULL;
    }
    if (course_unit_component_dto->timestamp) {
        free(course_unit_component_dto->timestamp);
        course_unit_component_dto->timestamp = NULL;
    }
    if (course_unit_component_dto->title) {
        free(course_unit_component_dto->title);
        course_unit_component_dto->title = NULL;
    }
    if (course_unit_component_dto->description) {
        free(course_unit_component_dto->description);
        course_unit_component_dto->description = NULL;
    }
    if (course_unit_component_dto->content) {
        free(course_unit_component_dto->content);
        course_unit_component_dto->content = NULL;
    }
    if (course_unit_component_dto->course_id) {
        free(course_unit_component_dto->course_id);
        course_unit_component_dto->course_id = NULL;
    }
    if (course_unit_component_dto->course_unit_id) {
        free(course_unit_component_dto->course_unit_id);
        course_unit_component_dto->course_unit_id = NULL;
    }
    if (course_unit_component_dto->tenant_id) {
        free(course_unit_component_dto->tenant_id);
        course_unit_component_dto->tenant_id = NULL;
    }
    free(course_unit_component_dto);
}

cJSON *course_unit_component_dto_convertToJSON(course_unit_component_dto_t *course_unit_component_dto) {
    cJSON *item = cJSON_CreateObject();

    // course_unit_component_dto->id
    if(course_unit_component_dto->id) {
    if(cJSON_AddStringToObject(item, "id", course_unit_component_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // course_unit_component_dto->timestamp
    if(course_unit_component_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", course_unit_component_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // course_unit_component_dto->title
    if(course_unit_component_dto->title) {
    if(cJSON_AddStringToObject(item, "title", course_unit_component_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // course_unit_component_dto->description
    if(course_unit_component_dto->description) {
    if(cJSON_AddStringToObject(item, "description", course_unit_component_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // course_unit_component_dto->content
    if(course_unit_component_dto->content) {
    if(cJSON_AddStringToObject(item, "content", course_unit_component_dto->content) == NULL) {
    goto fail; //String
    }
    }


    // course_unit_component_dto->order
    if(course_unit_component_dto->order) {
    if(cJSON_AddNumberToObject(item, "order", course_unit_component_dto->order) == NULL) {
    goto fail; //Numeric
    }
    }


    // course_unit_component_dto->course_id
    if(course_unit_component_dto->course_id) {
    if(cJSON_AddStringToObject(item, "courseID", course_unit_component_dto->course_id) == NULL) {
    goto fail; //String
    }
    }


    // course_unit_component_dto->course_unit_id
    if(course_unit_component_dto->course_unit_id) {
    if(cJSON_AddStringToObject(item, "courseUnitID", course_unit_component_dto->course_unit_id) == NULL) {
    goto fail; //String
    }
    }


    // course_unit_component_dto->tenant_id
    if(course_unit_component_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", course_unit_component_dto->tenant_id) == NULL) {
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

course_unit_component_dto_t *course_unit_component_dto_parseFromJSON(cJSON *course_unit_component_dtoJSON){

    course_unit_component_dto_t *course_unit_component_dto_local_var = NULL;

    // course_unit_component_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(course_unit_component_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // course_unit_component_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(course_unit_component_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // course_unit_component_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(course_unit_component_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // course_unit_component_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(course_unit_component_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // course_unit_component_dto->content
    cJSON *content = cJSON_GetObjectItemCaseSensitive(course_unit_component_dtoJSON, "content");
    if (content) { 
    if(!cJSON_IsString(content) && !cJSON_IsNull(content))
    {
    goto end; //String
    }
    }

    // course_unit_component_dto->order
    cJSON *order = cJSON_GetObjectItemCaseSensitive(course_unit_component_dtoJSON, "order");
    if (order) { 
    if(!cJSON_IsNumber(order))
    {
    goto end; //Numeric
    }
    }

    // course_unit_component_dto->course_id
    cJSON *course_id = cJSON_GetObjectItemCaseSensitive(course_unit_component_dtoJSON, "courseID");
    if (course_id) { 
    if(!cJSON_IsString(course_id) && !cJSON_IsNull(course_id))
    {
    goto end; //String
    }
    }

    // course_unit_component_dto->course_unit_id
    cJSON *course_unit_id = cJSON_GetObjectItemCaseSensitive(course_unit_component_dtoJSON, "courseUnitID");
    if (course_unit_id) { 
    if(!cJSON_IsString(course_unit_id) && !cJSON_IsNull(course_unit_id))
    {
    goto end; //String
    }
    }

    // course_unit_component_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(course_unit_component_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }


    course_unit_component_dto_local_var = course_unit_component_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        content && !cJSON_IsNull(content) ? strdup(content->valuestring) : NULL,
        order ? order->valuedouble : 0,
        course_id && !cJSON_IsNull(course_id) ? strdup(course_id->valuestring) : NULL,
        course_unit_id && !cJSON_IsNull(course_unit_id) ? strdup(course_unit_id->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL
        );

    return course_unit_component_dto_local_var;
end:
    return NULL;

}
