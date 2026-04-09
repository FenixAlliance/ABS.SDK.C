#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "financial_book_create_dto.h"



financial_book_create_dto_t *financial_book_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description,
    char *tenant_id
    ) {
    financial_book_create_dto_t *financial_book_create_dto_local_var = malloc(sizeof(financial_book_create_dto_t));
    if (!financial_book_create_dto_local_var) {
        return NULL;
    }
    financial_book_create_dto_local_var->id = id;
    financial_book_create_dto_local_var->timestamp = timestamp;
    financial_book_create_dto_local_var->name = name;
    financial_book_create_dto_local_var->description = description;
    financial_book_create_dto_local_var->tenant_id = tenant_id;

    return financial_book_create_dto_local_var;
}


void financial_book_create_dto_free(financial_book_create_dto_t *financial_book_create_dto) {
    if(NULL == financial_book_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (financial_book_create_dto->id) {
        free(financial_book_create_dto->id);
        financial_book_create_dto->id = NULL;
    }
    if (financial_book_create_dto->timestamp) {
        free(financial_book_create_dto->timestamp);
        financial_book_create_dto->timestamp = NULL;
    }
    if (financial_book_create_dto->name) {
        free(financial_book_create_dto->name);
        financial_book_create_dto->name = NULL;
    }
    if (financial_book_create_dto->description) {
        free(financial_book_create_dto->description);
        financial_book_create_dto->description = NULL;
    }
    if (financial_book_create_dto->tenant_id) {
        free(financial_book_create_dto->tenant_id);
        financial_book_create_dto->tenant_id = NULL;
    }
    free(financial_book_create_dto);
}

cJSON *financial_book_create_dto_convertToJSON(financial_book_create_dto_t *financial_book_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // financial_book_create_dto->id
    if(financial_book_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", financial_book_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // financial_book_create_dto->timestamp
    if(financial_book_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", financial_book_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // financial_book_create_dto->name
    if (!financial_book_create_dto->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", financial_book_create_dto->name) == NULL) {
    goto fail; //String
    }


    // financial_book_create_dto->description
    if(financial_book_create_dto->description) {
    if(cJSON_AddStringToObject(item, "description", financial_book_create_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // financial_book_create_dto->tenant_id
    if(financial_book_create_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantID", financial_book_create_dto->tenant_id) == NULL) {
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

financial_book_create_dto_t *financial_book_create_dto_parseFromJSON(cJSON *financial_book_create_dtoJSON){

    financial_book_create_dto_t *financial_book_create_dto_local_var = NULL;

    // financial_book_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(financial_book_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // financial_book_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(financial_book_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // financial_book_create_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(financial_book_create_dtoJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // financial_book_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(financial_book_create_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // financial_book_create_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(financial_book_create_dtoJSON, "tenantID");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }


    financial_book_create_dto_local_var = financial_book_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(name->valuestring),
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL
        );

    return financial_book_create_dto_local_var;
end:
    return NULL;

}
