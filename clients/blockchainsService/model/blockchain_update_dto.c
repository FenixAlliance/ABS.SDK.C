#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "blockchain_update_dto.h"



blockchain_update_dto_t *blockchain_update_dto_create(
    char *name,
    char *logo_url,
    char *description,
    int difficulty
    ) {
    blockchain_update_dto_t *blockchain_update_dto_local_var = malloc(sizeof(blockchain_update_dto_t));
    if (!blockchain_update_dto_local_var) {
        return NULL;
    }
    blockchain_update_dto_local_var->name = name;
    blockchain_update_dto_local_var->logo_url = logo_url;
    blockchain_update_dto_local_var->description = description;
    blockchain_update_dto_local_var->difficulty = difficulty;

    return blockchain_update_dto_local_var;
}


void blockchain_update_dto_free(blockchain_update_dto_t *blockchain_update_dto) {
    if(NULL == blockchain_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (blockchain_update_dto->name) {
        free(blockchain_update_dto->name);
        blockchain_update_dto->name = NULL;
    }
    if (blockchain_update_dto->logo_url) {
        free(blockchain_update_dto->logo_url);
        blockchain_update_dto->logo_url = NULL;
    }
    if (blockchain_update_dto->description) {
        free(blockchain_update_dto->description);
        blockchain_update_dto->description = NULL;
    }
    free(blockchain_update_dto);
}

cJSON *blockchain_update_dto_convertToJSON(blockchain_update_dto_t *blockchain_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // blockchain_update_dto->name
    if(blockchain_update_dto->name) {
    if(cJSON_AddStringToObject(item, "name", blockchain_update_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // blockchain_update_dto->logo_url
    if(blockchain_update_dto->logo_url) {
    if(cJSON_AddStringToObject(item, "logoUrl", blockchain_update_dto->logo_url) == NULL) {
    goto fail; //String
    }
    }


    // blockchain_update_dto->description
    if(blockchain_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", blockchain_update_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // blockchain_update_dto->difficulty
    if(blockchain_update_dto->difficulty) {
    if(cJSON_AddNumberToObject(item, "difficulty", blockchain_update_dto->difficulty) == NULL) {
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

blockchain_update_dto_t *blockchain_update_dto_parseFromJSON(cJSON *blockchain_update_dtoJSON){

    blockchain_update_dto_t *blockchain_update_dto_local_var = NULL;

    // blockchain_update_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(blockchain_update_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // blockchain_update_dto->logo_url
    cJSON *logo_url = cJSON_GetObjectItemCaseSensitive(blockchain_update_dtoJSON, "logoUrl");
    if (logo_url) { 
    if(!cJSON_IsString(logo_url) && !cJSON_IsNull(logo_url))
    {
    goto end; //String
    }
    }

    // blockchain_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(blockchain_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // blockchain_update_dto->difficulty
    cJSON *difficulty = cJSON_GetObjectItemCaseSensitive(blockchain_update_dtoJSON, "difficulty");
    if (difficulty) { 
    if(!cJSON_IsNumber(difficulty))
    {
    goto end; //Numeric
    }
    }


    blockchain_update_dto_local_var = blockchain_update_dto_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        logo_url && !cJSON_IsNull(logo_url) ? strdup(logo_url->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        difficulty ? difficulty->valuedouble : 0
        );

    return blockchain_update_dto_local_var;
end:
    return NULL;

}
