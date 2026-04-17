#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "transaction_category_update_dto.h"



transaction_category_update_dto_t *transaction_category_update_dto_create(
    char *name,
    char *description
    ) {
    transaction_category_update_dto_t *transaction_category_update_dto_local_var = malloc(sizeof(transaction_category_update_dto_t));
    if (!transaction_category_update_dto_local_var) {
        return NULL;
    }
    transaction_category_update_dto_local_var->name = name;
    transaction_category_update_dto_local_var->description = description;

    return transaction_category_update_dto_local_var;
}


void transaction_category_update_dto_free(transaction_category_update_dto_t *transaction_category_update_dto) {
    if(NULL == transaction_category_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (transaction_category_update_dto->name) {
        free(transaction_category_update_dto->name);
        transaction_category_update_dto->name = NULL;
    }
    if (transaction_category_update_dto->description) {
        free(transaction_category_update_dto->description);
        transaction_category_update_dto->description = NULL;
    }
    free(transaction_category_update_dto);
}

cJSON *transaction_category_update_dto_convertToJSON(transaction_category_update_dto_t *transaction_category_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // transaction_category_update_dto->name
    if(transaction_category_update_dto->name) {
    if(cJSON_AddStringToObject(item, "name", transaction_category_update_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // transaction_category_update_dto->description
    if(transaction_category_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", transaction_category_update_dto->description) == NULL) {
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

transaction_category_update_dto_t *transaction_category_update_dto_parseFromJSON(cJSON *transaction_category_update_dtoJSON){

    transaction_category_update_dto_t *transaction_category_update_dto_local_var = NULL;

    // transaction_category_update_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(transaction_category_update_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // transaction_category_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(transaction_category_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }


    transaction_category_update_dto_local_var = transaction_category_update_dto_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL
        );

    return transaction_category_update_dto_local_var;
end:
    return NULL;

}
