#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "training_program_update_dto.h"



training_program_update_dto_t *training_program_update_dto_create(
    char *title,
    char *description
    ) {
    training_program_update_dto_t *training_program_update_dto_local_var = malloc(sizeof(training_program_update_dto_t));
    if (!training_program_update_dto_local_var) {
        return NULL;
    }
    training_program_update_dto_local_var->title = title;
    training_program_update_dto_local_var->description = description;

    return training_program_update_dto_local_var;
}


void training_program_update_dto_free(training_program_update_dto_t *training_program_update_dto) {
    if(NULL == training_program_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (training_program_update_dto->title) {
        free(training_program_update_dto->title);
        training_program_update_dto->title = NULL;
    }
    if (training_program_update_dto->description) {
        free(training_program_update_dto->description);
        training_program_update_dto->description = NULL;
    }
    free(training_program_update_dto);
}

cJSON *training_program_update_dto_convertToJSON(training_program_update_dto_t *training_program_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // training_program_update_dto->title
    if(training_program_update_dto->title) {
    if(cJSON_AddStringToObject(item, "title", training_program_update_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // training_program_update_dto->description
    if(training_program_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", training_program_update_dto->description) == NULL) {
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

training_program_update_dto_t *training_program_update_dto_parseFromJSON(cJSON *training_program_update_dtoJSON){

    training_program_update_dto_t *training_program_update_dto_local_var = NULL;

    // training_program_update_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(training_program_update_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // training_program_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(training_program_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }


    training_program_update_dto_local_var = training_program_update_dto_create (
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL
        );

    return training_program_update_dto_local_var;
end:
    return NULL;

}
