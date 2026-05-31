#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "appraisal_workflow_create_dto.h"



appraisal_workflow_create_dto_t *appraisal_workflow_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description
    ) {
    appraisal_workflow_create_dto_t *appraisal_workflow_create_dto_local_var = malloc(sizeof(appraisal_workflow_create_dto_t));
    if (!appraisal_workflow_create_dto_local_var) {
        return NULL;
    }
    appraisal_workflow_create_dto_local_var->id = id;
    appraisal_workflow_create_dto_local_var->timestamp = timestamp;
    appraisal_workflow_create_dto_local_var->name = name;
    appraisal_workflow_create_dto_local_var->description = description;

    return appraisal_workflow_create_dto_local_var;
}


void appraisal_workflow_create_dto_free(appraisal_workflow_create_dto_t *appraisal_workflow_create_dto) {
    if(NULL == appraisal_workflow_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (appraisal_workflow_create_dto->id) {
        free(appraisal_workflow_create_dto->id);
        appraisal_workflow_create_dto->id = NULL;
    }
    if (appraisal_workflow_create_dto->timestamp) {
        free(appraisal_workflow_create_dto->timestamp);
        appraisal_workflow_create_dto->timestamp = NULL;
    }
    if (appraisal_workflow_create_dto->name) {
        free(appraisal_workflow_create_dto->name);
        appraisal_workflow_create_dto->name = NULL;
    }
    if (appraisal_workflow_create_dto->description) {
        free(appraisal_workflow_create_dto->description);
        appraisal_workflow_create_dto->description = NULL;
    }
    free(appraisal_workflow_create_dto);
}

cJSON *appraisal_workflow_create_dto_convertToJSON(appraisal_workflow_create_dto_t *appraisal_workflow_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // appraisal_workflow_create_dto->id
    if(appraisal_workflow_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", appraisal_workflow_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // appraisal_workflow_create_dto->timestamp
    if(appraisal_workflow_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", appraisal_workflow_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // appraisal_workflow_create_dto->name
    if (!appraisal_workflow_create_dto->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", appraisal_workflow_create_dto->name) == NULL) {
    goto fail; //String
    }


    // appraisal_workflow_create_dto->description
    if(appraisal_workflow_create_dto->description) {
    if(cJSON_AddStringToObject(item, "description", appraisal_workflow_create_dto->description) == NULL) {
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

appraisal_workflow_create_dto_t *appraisal_workflow_create_dto_parseFromJSON(cJSON *appraisal_workflow_create_dtoJSON){

    appraisal_workflow_create_dto_t *appraisal_workflow_create_dto_local_var = NULL;

    // appraisal_workflow_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(appraisal_workflow_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // appraisal_workflow_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(appraisal_workflow_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // appraisal_workflow_create_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(appraisal_workflow_create_dtoJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // appraisal_workflow_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(appraisal_workflow_create_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }


    appraisal_workflow_create_dto_local_var = appraisal_workflow_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(name->valuestring),
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL
        );

    return appraisal_workflow_create_dto_local_var;
end:
    return NULL;

}
