#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "blockchain_block_update_dto.h"



blockchain_block_update_dto_t *blockchain_block_update_dto_create(
    char *data,
    long nonce
    ) {
    blockchain_block_update_dto_t *blockchain_block_update_dto_local_var = malloc(sizeof(blockchain_block_update_dto_t));
    if (!blockchain_block_update_dto_local_var) {
        return NULL;
    }
    blockchain_block_update_dto_local_var->data = data;
    blockchain_block_update_dto_local_var->nonce = nonce;

    return blockchain_block_update_dto_local_var;
}


void blockchain_block_update_dto_free(blockchain_block_update_dto_t *blockchain_block_update_dto) {
    if(NULL == blockchain_block_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (blockchain_block_update_dto->data) {
        free(blockchain_block_update_dto->data);
        blockchain_block_update_dto->data = NULL;
    }
    free(blockchain_block_update_dto);
}

cJSON *blockchain_block_update_dto_convertToJSON(blockchain_block_update_dto_t *blockchain_block_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // blockchain_block_update_dto->data
    if(blockchain_block_update_dto->data) {
    if(cJSON_AddStringToObject(item, "data", blockchain_block_update_dto->data) == NULL) {
    goto fail; //String
    }
    }


    // blockchain_block_update_dto->nonce
    if(blockchain_block_update_dto->nonce) {
    if(cJSON_AddNumberToObject(item, "nonce", blockchain_block_update_dto->nonce) == NULL) {
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

blockchain_block_update_dto_t *blockchain_block_update_dto_parseFromJSON(cJSON *blockchain_block_update_dtoJSON){

    blockchain_block_update_dto_t *blockchain_block_update_dto_local_var = NULL;

    // blockchain_block_update_dto->data
    cJSON *data = cJSON_GetObjectItemCaseSensitive(blockchain_block_update_dtoJSON, "data");
    if (data) { 
    if(!cJSON_IsString(data) && !cJSON_IsNull(data))
    {
    goto end; //String
    }
    }

    // blockchain_block_update_dto->nonce
    cJSON *nonce = cJSON_GetObjectItemCaseSensitive(blockchain_block_update_dtoJSON, "nonce");
    if (nonce) { 
    if(!cJSON_IsNumber(nonce))
    {
    goto end; //Numeric
    }
    }


    blockchain_block_update_dto_local_var = blockchain_block_update_dto_create (
        data && !cJSON_IsNull(data) ? strdup(data->valuestring) : NULL,
        nonce ? nonce->valuedouble : 0
        );

    return blockchain_block_update_dto_local_var;
end:
    return NULL;

}
