#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "blockchain_create_dto.h"



blockchain_create_dto_t *blockchain_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *logo_url,
    char *description,
    int difficulty
    ) {
    blockchain_create_dto_t *blockchain_create_dto_local_var = malloc(sizeof(blockchain_create_dto_t));
    if (!blockchain_create_dto_local_var) {
        return NULL;
    }
    blockchain_create_dto_local_var->id = id;
    blockchain_create_dto_local_var->timestamp = timestamp;
    blockchain_create_dto_local_var->name = name;
    blockchain_create_dto_local_var->logo_url = logo_url;
    blockchain_create_dto_local_var->description = description;
    blockchain_create_dto_local_var->difficulty = difficulty;

    return blockchain_create_dto_local_var;
}


void blockchain_create_dto_free(blockchain_create_dto_t *blockchain_create_dto) {
    if(NULL == blockchain_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (blockchain_create_dto->id) {
        free(blockchain_create_dto->id);
        blockchain_create_dto->id = NULL;
    }
    if (blockchain_create_dto->timestamp) {
        free(blockchain_create_dto->timestamp);
        blockchain_create_dto->timestamp = NULL;
    }
    if (blockchain_create_dto->name) {
        free(blockchain_create_dto->name);
        blockchain_create_dto->name = NULL;
    }
    if (blockchain_create_dto->logo_url) {
        free(blockchain_create_dto->logo_url);
        blockchain_create_dto->logo_url = NULL;
    }
    if (blockchain_create_dto->description) {
        free(blockchain_create_dto->description);
        blockchain_create_dto->description = NULL;
    }
    free(blockchain_create_dto);
}

cJSON *blockchain_create_dto_convertToJSON(blockchain_create_dto_t *blockchain_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // blockchain_create_dto->id
    if(blockchain_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", blockchain_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // blockchain_create_dto->timestamp
    if(blockchain_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", blockchain_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // blockchain_create_dto->name
    if (!blockchain_create_dto->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", blockchain_create_dto->name) == NULL) {
    goto fail; //String
    }


    // blockchain_create_dto->logo_url
    if(blockchain_create_dto->logo_url) {
    if(cJSON_AddStringToObject(item, "logoUrl", blockchain_create_dto->logo_url) == NULL) {
    goto fail; //String
    }
    }


    // blockchain_create_dto->description
    if(blockchain_create_dto->description) {
    if(cJSON_AddStringToObject(item, "description", blockchain_create_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // blockchain_create_dto->difficulty
    if(blockchain_create_dto->difficulty) {
    if(cJSON_AddNumberToObject(item, "difficulty", blockchain_create_dto->difficulty) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

blockchain_create_dto_t *blockchain_create_dto_parseFromJSON(cJSON *blockchain_create_dtoJSON){

    blockchain_create_dto_t *blockchain_create_dto_local_var = NULL;

    // blockchain_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(blockchain_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // blockchain_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(blockchain_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // blockchain_create_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(blockchain_create_dtoJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // blockchain_create_dto->logo_url
    cJSON *logo_url = cJSON_GetObjectItemCaseSensitive(blockchain_create_dtoJSON, "logoUrl");
    if (logo_url) { 
    if(!cJSON_IsString(logo_url) && !cJSON_IsNull(logo_url))
    {
    goto end; //String
    }
    }

    // blockchain_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(blockchain_create_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // blockchain_create_dto->difficulty
    cJSON *difficulty = cJSON_GetObjectItemCaseSensitive(blockchain_create_dtoJSON, "difficulty");
    if (difficulty) { 
    if(!cJSON_IsNumber(difficulty))
    {
    goto end; //Numeric
    }
    }


    blockchain_create_dto_local_var = blockchain_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(name->valuestring),
        logo_url && !cJSON_IsNull(logo_url) ? strdup(logo_url->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        difficulty ? difficulty->valuedouble : 0
        );

    return blockchain_create_dto_local_var;
end:
    return NULL;

}
