#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "financial_book_update_dto.h"



financial_book_update_dto_t *financial_book_update_dto_create(
    char *name,
    char *description,
    char *tenant_id
    ) {
    financial_book_update_dto_t *financial_book_update_dto_local_var = malloc(sizeof(financial_book_update_dto_t));
    if (!financial_book_update_dto_local_var) {
        return NULL;
    }
    financial_book_update_dto_local_var->name = name;
    financial_book_update_dto_local_var->description = description;
    financial_book_update_dto_local_var->tenant_id = tenant_id;

    return financial_book_update_dto_local_var;
}


void financial_book_update_dto_free(financial_book_update_dto_t *financial_book_update_dto) {
    if(NULL == financial_book_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (financial_book_update_dto->name) {
        free(financial_book_update_dto->name);
        financial_book_update_dto->name = NULL;
    }
    if (financial_book_update_dto->description) {
        free(financial_book_update_dto->description);
        financial_book_update_dto->description = NULL;
    }
    if (financial_book_update_dto->tenant_id) {
        free(financial_book_update_dto->tenant_id);
        financial_book_update_dto->tenant_id = NULL;
    }
    free(financial_book_update_dto);
}

cJSON *financial_book_update_dto_convertToJSON(financial_book_update_dto_t *financial_book_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // financial_book_update_dto->name
    if(financial_book_update_dto->name) {
    if(cJSON_AddStringToObject(item, "name", financial_book_update_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // financial_book_update_dto->description
    if(financial_book_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", financial_book_update_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // financial_book_update_dto->tenant_id
    if(financial_book_update_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", financial_book_update_dto->tenant_id) == NULL) {
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

financial_book_update_dto_t *financial_book_update_dto_parseFromJSON(cJSON *financial_book_update_dtoJSON){

    financial_book_update_dto_t *financial_book_update_dto_local_var = NULL;

    // financial_book_update_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(financial_book_update_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // financial_book_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(financial_book_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // financial_book_update_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(financial_book_update_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }


    financial_book_update_dto_local_var = financial_book_update_dto_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL
        );

    return financial_book_update_dto_local_var;
end:
    return NULL;

}
