#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "training_program_dto.h"



training_program_dto_t *training_program_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    char *tenant_id
    ) {
    training_program_dto_t *training_program_dto_local_var = malloc(sizeof(training_program_dto_t));
    if (!training_program_dto_local_var) {
        return NULL;
    }
    training_program_dto_local_var->id = id;
    training_program_dto_local_var->timestamp = timestamp;
    training_program_dto_local_var->title = title;
    training_program_dto_local_var->description = description;
    training_program_dto_local_var->tenant_id = tenant_id;

    return training_program_dto_local_var;
}


void training_program_dto_free(training_program_dto_t *training_program_dto) {
    if(NULL == training_program_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (training_program_dto->id) {
        free(training_program_dto->id);
        training_program_dto->id = NULL;
    }
    if (training_program_dto->timestamp) {
        free(training_program_dto->timestamp);
        training_program_dto->timestamp = NULL;
    }
    if (training_program_dto->title) {
        free(training_program_dto->title);
        training_program_dto->title = NULL;
    }
    if (training_program_dto->description) {
        free(training_program_dto->description);
        training_program_dto->description = NULL;
    }
    if (training_program_dto->tenant_id) {
        free(training_program_dto->tenant_id);
        training_program_dto->tenant_id = NULL;
    }
    free(training_program_dto);
}

cJSON *training_program_dto_convertToJSON(training_program_dto_t *training_program_dto) {
    cJSON *item = cJSON_CreateObject();

    // training_program_dto->id
    if(training_program_dto->id) {
    if(cJSON_AddStringToObject(item, "id", training_program_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // training_program_dto->timestamp
    if(training_program_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", training_program_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // training_program_dto->title
    if(training_program_dto->title) {
    if(cJSON_AddStringToObject(item, "title", training_program_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // training_program_dto->description
    if(training_program_dto->description) {
    if(cJSON_AddStringToObject(item, "description", training_program_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // training_program_dto->tenant_id
    if(training_program_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", training_program_dto->tenant_id) == NULL) {
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

training_program_dto_t *training_program_dto_parseFromJSON(cJSON *training_program_dtoJSON){

    training_program_dto_t *training_program_dto_local_var = NULL;

    // training_program_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(training_program_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // training_program_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(training_program_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // training_program_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(training_program_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // training_program_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(training_program_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // training_program_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(training_program_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }


    training_program_dto_local_var = training_program_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL
        );

    return training_program_dto_local_var;
end:
    return NULL;

}
