#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "trust_signing_provider_descriptor_dto.h"



trust_signing_provider_descriptor_dto_t *trust_signing_provider_descriptor_dto_create(
    char *name,
    char *display_name,
    char *mode,
    int can_record_outcome,
    char *description
    ) {
    trust_signing_provider_descriptor_dto_t *trust_signing_provider_descriptor_dto_local_var = malloc(sizeof(trust_signing_provider_descriptor_dto_t));
    if (!trust_signing_provider_descriptor_dto_local_var) {
        return NULL;
    }
    trust_signing_provider_descriptor_dto_local_var->name = name;
    trust_signing_provider_descriptor_dto_local_var->display_name = display_name;
    trust_signing_provider_descriptor_dto_local_var->mode = mode;
    trust_signing_provider_descriptor_dto_local_var->can_record_outcome = can_record_outcome;
    trust_signing_provider_descriptor_dto_local_var->description = description;

    return trust_signing_provider_descriptor_dto_local_var;
}


void trust_signing_provider_descriptor_dto_free(trust_signing_provider_descriptor_dto_t *trust_signing_provider_descriptor_dto) {
    if(NULL == trust_signing_provider_descriptor_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (trust_signing_provider_descriptor_dto->name) {
        free(trust_signing_provider_descriptor_dto->name);
        trust_signing_provider_descriptor_dto->name = NULL;
    }
    if (trust_signing_provider_descriptor_dto->display_name) {
        free(trust_signing_provider_descriptor_dto->display_name);
        trust_signing_provider_descriptor_dto->display_name = NULL;
    }
    if (trust_signing_provider_descriptor_dto->mode) {
        free(trust_signing_provider_descriptor_dto->mode);
        trust_signing_provider_descriptor_dto->mode = NULL;
    }
    if (trust_signing_provider_descriptor_dto->description) {
        free(trust_signing_provider_descriptor_dto->description);
        trust_signing_provider_descriptor_dto->description = NULL;
    }
    free(trust_signing_provider_descriptor_dto);
}

cJSON *trust_signing_provider_descriptor_dto_convertToJSON(trust_signing_provider_descriptor_dto_t *trust_signing_provider_descriptor_dto) {
    cJSON *item = cJSON_CreateObject();

    // trust_signing_provider_descriptor_dto->name
    if(trust_signing_provider_descriptor_dto->name) {
    if(cJSON_AddStringToObject(item, "name", trust_signing_provider_descriptor_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // trust_signing_provider_descriptor_dto->display_name
    if(trust_signing_provider_descriptor_dto->display_name) {
    if(cJSON_AddStringToObject(item, "displayName", trust_signing_provider_descriptor_dto->display_name) == NULL) {
    goto fail; //String
    }
    }


    // trust_signing_provider_descriptor_dto->mode
    if(trust_signing_provider_descriptor_dto->mode) {
    if(cJSON_AddStringToObject(item, "mode", trust_signing_provider_descriptor_dto->mode) == NULL) {
    goto fail; //String
    }
    }


    // trust_signing_provider_descriptor_dto->can_record_outcome
    if(trust_signing_provider_descriptor_dto->can_record_outcome) {
    if(cJSON_AddBoolToObject(item, "canRecordOutcome", trust_signing_provider_descriptor_dto->can_record_outcome) == NULL) {
    goto fail; //Bool
    }
    }


    // trust_signing_provider_descriptor_dto->description
    if(trust_signing_provider_descriptor_dto->description) {
    if(cJSON_AddStringToObject(item, "description", trust_signing_provider_descriptor_dto->description) == NULL) {
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

trust_signing_provider_descriptor_dto_t *trust_signing_provider_descriptor_dto_parseFromJSON(cJSON *trust_signing_provider_descriptor_dtoJSON){

    trust_signing_provider_descriptor_dto_t *trust_signing_provider_descriptor_dto_local_var = NULL;

    // trust_signing_provider_descriptor_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(trust_signing_provider_descriptor_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // trust_signing_provider_descriptor_dto->display_name
    cJSON *display_name = cJSON_GetObjectItemCaseSensitive(trust_signing_provider_descriptor_dtoJSON, "displayName");
    if (display_name) { 
    if(!cJSON_IsString(display_name) && !cJSON_IsNull(display_name))
    {
    goto end; //String
    }
    }

    // trust_signing_provider_descriptor_dto->mode
    cJSON *mode = cJSON_GetObjectItemCaseSensitive(trust_signing_provider_descriptor_dtoJSON, "mode");
    if (mode) { 
    if(!cJSON_IsString(mode) && !cJSON_IsNull(mode))
    {
    goto end; //String
    }
    }

    // trust_signing_provider_descriptor_dto->can_record_outcome
    cJSON *can_record_outcome = cJSON_GetObjectItemCaseSensitive(trust_signing_provider_descriptor_dtoJSON, "canRecordOutcome");
    if (can_record_outcome) { 
    if(!cJSON_IsBool(can_record_outcome))
    {
    goto end; //Bool
    }
    }

    // trust_signing_provider_descriptor_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(trust_signing_provider_descriptor_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }


    trust_signing_provider_descriptor_dto_local_var = trust_signing_provider_descriptor_dto_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        display_name && !cJSON_IsNull(display_name) ? strdup(display_name->valuestring) : NULL,
        mode && !cJSON_IsNull(mode) ? strdup(mode->valuestring) : NULL,
        can_record_outcome ? can_record_outcome->valueint : 0,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL
        );

    return trust_signing_provider_descriptor_dto_local_var;
end:
    return NULL;

}
