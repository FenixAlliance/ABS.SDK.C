#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "appraisal_workflow_update_dto.h"



appraisal_workflow_update_dto_t *appraisal_workflow_update_dto_create(
    char *name,
    char *description
    ) {
    appraisal_workflow_update_dto_t *appraisal_workflow_update_dto_local_var = malloc(sizeof(appraisal_workflow_update_dto_t));
    if (!appraisal_workflow_update_dto_local_var) {
        return NULL;
    }
    appraisal_workflow_update_dto_local_var->name = name;
    appraisal_workflow_update_dto_local_var->description = description;

    return appraisal_workflow_update_dto_local_var;
}


void appraisal_workflow_update_dto_free(appraisal_workflow_update_dto_t *appraisal_workflow_update_dto) {
    if(NULL == appraisal_workflow_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (appraisal_workflow_update_dto->name) {
        free(appraisal_workflow_update_dto->name);
        appraisal_workflow_update_dto->name = NULL;
    }
    if (appraisal_workflow_update_dto->description) {
        free(appraisal_workflow_update_dto->description);
        appraisal_workflow_update_dto->description = NULL;
    }
    free(appraisal_workflow_update_dto);
}

cJSON *appraisal_workflow_update_dto_convertToJSON(appraisal_workflow_update_dto_t *appraisal_workflow_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // appraisal_workflow_update_dto->name
    if(appraisal_workflow_update_dto->name) {
    if(cJSON_AddStringToObject(item, "name", appraisal_workflow_update_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // appraisal_workflow_update_dto->description
    if(appraisal_workflow_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", appraisal_workflow_update_dto->description) == NULL) {
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

appraisal_workflow_update_dto_t *appraisal_workflow_update_dto_parseFromJSON(cJSON *appraisal_workflow_update_dtoJSON){

    appraisal_workflow_update_dto_t *appraisal_workflow_update_dto_local_var = NULL;

    // appraisal_workflow_update_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(appraisal_workflow_update_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // appraisal_workflow_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(appraisal_workflow_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }


    appraisal_workflow_update_dto_local_var = appraisal_workflow_update_dto_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL
        );

    return appraisal_workflow_update_dto_local_var;
end:
    return NULL;

}
