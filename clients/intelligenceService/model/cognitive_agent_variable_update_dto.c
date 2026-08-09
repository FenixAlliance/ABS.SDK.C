#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cognitive_agent_variable_update_dto.h"



cognitive_agent_variable_update_dto_t *cognitive_agent_variable_update_dto_create(
    char *value
    ) {
    cognitive_agent_variable_update_dto_t *cognitive_agent_variable_update_dto_local_var = malloc(sizeof(cognitive_agent_variable_update_dto_t));
    if (!cognitive_agent_variable_update_dto_local_var) {
        return NULL;
    }
    cognitive_agent_variable_update_dto_local_var->value = value;

    return cognitive_agent_variable_update_dto_local_var;
}


void cognitive_agent_variable_update_dto_free(cognitive_agent_variable_update_dto_t *cognitive_agent_variable_update_dto) {
    if(NULL == cognitive_agent_variable_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (cognitive_agent_variable_update_dto->value) {
        free(cognitive_agent_variable_update_dto->value);
        cognitive_agent_variable_update_dto->value = NULL;
    }
    free(cognitive_agent_variable_update_dto);
}

cJSON *cognitive_agent_variable_update_dto_convertToJSON(cognitive_agent_variable_update_dto_t *cognitive_agent_variable_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // cognitive_agent_variable_update_dto->value
    if(cognitive_agent_variable_update_dto->value) {
    if(cJSON_AddStringToObject(item, "value", cognitive_agent_variable_update_dto->value) == NULL) {
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

cognitive_agent_variable_update_dto_t *cognitive_agent_variable_update_dto_parseFromJSON(cJSON *cognitive_agent_variable_update_dtoJSON){

    cognitive_agent_variable_update_dto_t *cognitive_agent_variable_update_dto_local_var = NULL;

    // cognitive_agent_variable_update_dto->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(cognitive_agent_variable_update_dtoJSON, "value");
    if (value) { 
    if(!cJSON_IsString(value) && !cJSON_IsNull(value))
    {
    goto end; //String
    }
    }


    cognitive_agent_variable_update_dto_local_var = cognitive_agent_variable_update_dto_create (
        value && !cJSON_IsNull(value) ? strdup(value->valuestring) : NULL
        );

    return cognitive_agent_variable_update_dto_local_var;
end:
    return NULL;

}
