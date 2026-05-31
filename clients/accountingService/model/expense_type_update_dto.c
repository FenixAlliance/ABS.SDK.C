#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "expense_type_update_dto.h"



expense_type_update_dto_t *expense_type_update_dto_create(
    char *name,
    int enabled
    ) {
    expense_type_update_dto_t *expense_type_update_dto_local_var = malloc(sizeof(expense_type_update_dto_t));
    if (!expense_type_update_dto_local_var) {
        return NULL;
    }
    expense_type_update_dto_local_var->name = name;
    expense_type_update_dto_local_var->enabled = enabled;

    return expense_type_update_dto_local_var;
}


void expense_type_update_dto_free(expense_type_update_dto_t *expense_type_update_dto) {
    if(NULL == expense_type_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (expense_type_update_dto->name) {
        free(expense_type_update_dto->name);
        expense_type_update_dto->name = NULL;
    }
    free(expense_type_update_dto);
}

cJSON *expense_type_update_dto_convertToJSON(expense_type_update_dto_t *expense_type_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // expense_type_update_dto->name
    if(expense_type_update_dto->name) {
    if(cJSON_AddStringToObject(item, "name", expense_type_update_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // expense_type_update_dto->enabled
    if(expense_type_update_dto->enabled) {
    if(cJSON_AddBoolToObject(item, "enabled", expense_type_update_dto->enabled) == NULL) {
    goto fail; //Bool
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

expense_type_update_dto_t *expense_type_update_dto_parseFromJSON(cJSON *expense_type_update_dtoJSON){

    expense_type_update_dto_t *expense_type_update_dto_local_var = NULL;

    // expense_type_update_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(expense_type_update_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // expense_type_update_dto->enabled
    cJSON *enabled = cJSON_GetObjectItemCaseSensitive(expense_type_update_dtoJSON, "enabled");
    if (enabled) { 
    if(!cJSON_IsBool(enabled))
    {
    goto end; //Bool
    }
    }


    expense_type_update_dto_local_var = expense_type_update_dto_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        enabled ? enabled->valueint : 0
        );

    return expense_type_update_dto_local_var;
end:
    return NULL;

}
