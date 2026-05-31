#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "expense_type_create_dto.h"



expense_type_create_dto_t *expense_type_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    int enabled
    ) {
    expense_type_create_dto_t *expense_type_create_dto_local_var = malloc(sizeof(expense_type_create_dto_t));
    if (!expense_type_create_dto_local_var) {
        return NULL;
    }
    expense_type_create_dto_local_var->id = id;
    expense_type_create_dto_local_var->timestamp = timestamp;
    expense_type_create_dto_local_var->name = name;
    expense_type_create_dto_local_var->enabled = enabled;

    return expense_type_create_dto_local_var;
}


void expense_type_create_dto_free(expense_type_create_dto_t *expense_type_create_dto) {
    if(NULL == expense_type_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (expense_type_create_dto->id) {
        free(expense_type_create_dto->id);
        expense_type_create_dto->id = NULL;
    }
    if (expense_type_create_dto->timestamp) {
        free(expense_type_create_dto->timestamp);
        expense_type_create_dto->timestamp = NULL;
    }
    if (expense_type_create_dto->name) {
        free(expense_type_create_dto->name);
        expense_type_create_dto->name = NULL;
    }
    free(expense_type_create_dto);
}

cJSON *expense_type_create_dto_convertToJSON(expense_type_create_dto_t *expense_type_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // expense_type_create_dto->id
    if(expense_type_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", expense_type_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // expense_type_create_dto->timestamp
    if(expense_type_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", expense_type_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // expense_type_create_dto->name
    if(expense_type_create_dto->name) {
    if(cJSON_AddStringToObject(item, "name", expense_type_create_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // expense_type_create_dto->enabled
    if(expense_type_create_dto->enabled) {
    if(cJSON_AddBoolToObject(item, "enabled", expense_type_create_dto->enabled) == NULL) {
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

expense_type_create_dto_t *expense_type_create_dto_parseFromJSON(cJSON *expense_type_create_dtoJSON){

    expense_type_create_dto_t *expense_type_create_dto_local_var = NULL;

    // expense_type_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(expense_type_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // expense_type_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(expense_type_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // expense_type_create_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(expense_type_create_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // expense_type_create_dto->enabled
    cJSON *enabled = cJSON_GetObjectItemCaseSensitive(expense_type_create_dtoJSON, "enabled");
    if (enabled) { 
    if(!cJSON_IsBool(enabled))
    {
    goto end; //Bool
    }
    }


    expense_type_create_dto_local_var = expense_type_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        enabled ? enabled->valueint : 0
        );

    return expense_type_create_dto_local_var;
end:
    return NULL;

}
