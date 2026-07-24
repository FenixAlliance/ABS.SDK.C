#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "project_dto.h"



project_dto_t *project_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    char *individual_id,
    char *organization_id,
    char *tenant_id,
    char *enrollment_id,
    char *project_start_date,
    char *project_end_date
    ) {
    project_dto_t *project_dto_local_var = malloc(sizeof(project_dto_t));
    if (!project_dto_local_var) {
        return NULL;
    }
    project_dto_local_var->id = id;
    project_dto_local_var->timestamp = timestamp;
    project_dto_local_var->title = title;
    project_dto_local_var->description = description;
    project_dto_local_var->individual_id = individual_id;
    project_dto_local_var->organization_id = organization_id;
    project_dto_local_var->tenant_id = tenant_id;
    project_dto_local_var->enrollment_id = enrollment_id;
    project_dto_local_var->project_start_date = project_start_date;
    project_dto_local_var->project_end_date = project_end_date;

    return project_dto_local_var;
}


void project_dto_free(project_dto_t *project_dto) {
    if(NULL == project_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (project_dto->id) {
        free(project_dto->id);
        project_dto->id = NULL;
    }
    if (project_dto->timestamp) {
        free(project_dto->timestamp);
        project_dto->timestamp = NULL;
    }
    if (project_dto->title) {
        free(project_dto->title);
        project_dto->title = NULL;
    }
    if (project_dto->description) {
        free(project_dto->description);
        project_dto->description = NULL;
    }
    if (project_dto->individual_id) {
        free(project_dto->individual_id);
        project_dto->individual_id = NULL;
    }
    if (project_dto->organization_id) {
        free(project_dto->organization_id);
        project_dto->organization_id = NULL;
    }
    if (project_dto->tenant_id) {
        free(project_dto->tenant_id);
        project_dto->tenant_id = NULL;
    }
    if (project_dto->enrollment_id) {
        free(project_dto->enrollment_id);
        project_dto->enrollment_id = NULL;
    }
    if (project_dto->project_start_date) {
        free(project_dto->project_start_date);
        project_dto->project_start_date = NULL;
    }
    if (project_dto->project_end_date) {
        free(project_dto->project_end_date);
        project_dto->project_end_date = NULL;
    }
    free(project_dto);
}

cJSON *project_dto_convertToJSON(project_dto_t *project_dto) {
    cJSON *item = cJSON_CreateObject();

    // project_dto->id
    if(project_dto->id) {
    if(cJSON_AddStringToObject(item, "id", project_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // project_dto->timestamp
    if(project_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", project_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // project_dto->title
    if(project_dto->title) {
    if(cJSON_AddStringToObject(item, "title", project_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // project_dto->description
    if(project_dto->description) {
    if(cJSON_AddStringToObject(item, "description", project_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // project_dto->individual_id
    if(project_dto->individual_id) {
    if(cJSON_AddStringToObject(item, "individualId", project_dto->individual_id) == NULL) {
    goto fail; //String
    }
    }


    // project_dto->organization_id
    if(project_dto->organization_id) {
    if(cJSON_AddStringToObject(item, "organizationId", project_dto->organization_id) == NULL) {
    goto fail; //String
    }
    }


    // project_dto->tenant_id
    if(project_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", project_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // project_dto->enrollment_id
    if(project_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", project_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // project_dto->project_start_date
    if(project_dto->project_start_date) {
    if(cJSON_AddStringToObject(item, "projectStartDate", project_dto->project_start_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // project_dto->project_end_date
    if(project_dto->project_end_date) {
    if(cJSON_AddStringToObject(item, "projectEndDate", project_dto->project_end_date) == NULL) {
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

project_dto_t *project_dto_parseFromJSON(cJSON *project_dtoJSON){

    project_dto_t *project_dto_local_var = NULL;

    // project_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(project_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // project_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(project_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // project_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(project_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // project_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(project_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // project_dto->individual_id
    cJSON *individual_id = cJSON_GetObjectItemCaseSensitive(project_dtoJSON, "individualId");
    if (individual_id) { 
    if(!cJSON_IsString(individual_id) && !cJSON_IsNull(individual_id))
    {
    goto end; //String
    }
    }

    // project_dto->organization_id
    cJSON *organization_id = cJSON_GetObjectItemCaseSensitive(project_dtoJSON, "organizationId");
    if (organization_id) { 
    if(!cJSON_IsString(organization_id) && !cJSON_IsNull(organization_id))
    {
    goto end; //String
    }
    }

    // project_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(project_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // project_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(project_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // project_dto->project_start_date
    cJSON *project_start_date = cJSON_GetObjectItemCaseSensitive(project_dtoJSON, "projectStartDate");
    if (project_start_date) { 
    if(!cJSON_IsString(project_start_date) && !cJSON_IsNull(project_start_date))
    {
    goto end; //DateTime
    }
    }

    // project_dto->project_end_date
    cJSON *project_end_date = cJSON_GetObjectItemCaseSensitive(project_dtoJSON, "projectEndDate");
    if (project_end_date) { 
    if(!cJSON_IsString(project_end_date) && !cJSON_IsNull(project_end_date))
    {
    goto end; //DateTime
    }
    }


    project_dto_local_var = project_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        individual_id && !cJSON_IsNull(individual_id) ? strdup(individual_id->valuestring) : NULL,
        organization_id && !cJSON_IsNull(organization_id) ? strdup(organization_id->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        project_start_date && !cJSON_IsNull(project_start_date) ? strdup(project_start_date->valuestring) : NULL,
        project_end_date && !cJSON_IsNull(project_end_date) ? strdup(project_end_date->valuestring) : NULL
        );

    return project_dto_local_var;
end:
    return NULL;

}
