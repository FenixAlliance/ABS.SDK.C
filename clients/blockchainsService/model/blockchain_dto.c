#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "blockchain_dto.h"



blockchain_dto_t *blockchain_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *logo_url,
    char *description,
    int difficulty,
    char *tenant_id,
    char *enrollment_id
    ) {
    blockchain_dto_t *blockchain_dto_local_var = malloc(sizeof(blockchain_dto_t));
    if (!blockchain_dto_local_var) {
        return NULL;
    }
    blockchain_dto_local_var->id = id;
    blockchain_dto_local_var->timestamp = timestamp;
    blockchain_dto_local_var->name = name;
    blockchain_dto_local_var->logo_url = logo_url;
    blockchain_dto_local_var->description = description;
    blockchain_dto_local_var->difficulty = difficulty;
    blockchain_dto_local_var->tenant_id = tenant_id;
    blockchain_dto_local_var->enrollment_id = enrollment_id;

    return blockchain_dto_local_var;
}


void blockchain_dto_free(blockchain_dto_t *blockchain_dto) {
    if(NULL == blockchain_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (blockchain_dto->id) {
        free(blockchain_dto->id);
        blockchain_dto->id = NULL;
    }
    if (blockchain_dto->timestamp) {
        free(blockchain_dto->timestamp);
        blockchain_dto->timestamp = NULL;
    }
    if (blockchain_dto->name) {
        free(blockchain_dto->name);
        blockchain_dto->name = NULL;
    }
    if (blockchain_dto->logo_url) {
        free(blockchain_dto->logo_url);
        blockchain_dto->logo_url = NULL;
    }
    if (blockchain_dto->description) {
        free(blockchain_dto->description);
        blockchain_dto->description = NULL;
    }
    if (blockchain_dto->tenant_id) {
        free(blockchain_dto->tenant_id);
        blockchain_dto->tenant_id = NULL;
    }
    if (blockchain_dto->enrollment_id) {
        free(blockchain_dto->enrollment_id);
        blockchain_dto->enrollment_id = NULL;
    }
    free(blockchain_dto);
}

cJSON *blockchain_dto_convertToJSON(blockchain_dto_t *blockchain_dto) {
    cJSON *item = cJSON_CreateObject();

    // blockchain_dto->id
    if(blockchain_dto->id) {
    if(cJSON_AddStringToObject(item, "id", blockchain_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // blockchain_dto->timestamp
    if(blockchain_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", blockchain_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // blockchain_dto->name
    if(blockchain_dto->name) {
    if(cJSON_AddStringToObject(item, "name", blockchain_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // blockchain_dto->logo_url
    if(blockchain_dto->logo_url) {
    if(cJSON_AddStringToObject(item, "logoUrl", blockchain_dto->logo_url) == NULL) {
    goto fail; //String
    }
    }


    // blockchain_dto->description
    if(blockchain_dto->description) {
    if(cJSON_AddStringToObject(item, "description", blockchain_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // blockchain_dto->difficulty
    if(blockchain_dto->difficulty) {
    if(cJSON_AddNumberToObject(item, "difficulty", blockchain_dto->difficulty) == NULL) {
    goto fail; //Numeric
    }
    }


    // blockchain_dto->tenant_id
    if(blockchain_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", blockchain_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // blockchain_dto->enrollment_id
    if(blockchain_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", blockchain_dto->enrollment_id) == NULL) {
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

blockchain_dto_t *blockchain_dto_parseFromJSON(cJSON *blockchain_dtoJSON){

    blockchain_dto_t *blockchain_dto_local_var = NULL;

    // blockchain_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(blockchain_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // blockchain_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(blockchain_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // blockchain_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(blockchain_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // blockchain_dto->logo_url
    cJSON *logo_url = cJSON_GetObjectItemCaseSensitive(blockchain_dtoJSON, "logoUrl");
    if (logo_url) { 
    if(!cJSON_IsString(logo_url) && !cJSON_IsNull(logo_url))
    {
    goto end; //String
    }
    }

    // blockchain_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(blockchain_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // blockchain_dto->difficulty
    cJSON *difficulty = cJSON_GetObjectItemCaseSensitive(blockchain_dtoJSON, "difficulty");
    if (difficulty) { 
    if(!cJSON_IsNumber(difficulty))
    {
    goto end; //Numeric
    }
    }

    // blockchain_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(blockchain_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // blockchain_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(blockchain_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }


    blockchain_dto_local_var = blockchain_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        logo_url && !cJSON_IsNull(logo_url) ? strdup(logo_url->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        difficulty ? difficulty->valuedouble : 0,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL
        );

    return blockchain_dto_local_var;
end:
    return NULL;

}
