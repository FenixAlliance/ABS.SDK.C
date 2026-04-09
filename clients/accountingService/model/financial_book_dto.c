#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "financial_book_dto.h"



financial_book_dto_t *financial_book_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description,
    char *business_id
    ) {
    financial_book_dto_t *financial_book_dto_local_var = malloc(sizeof(financial_book_dto_t));
    if (!financial_book_dto_local_var) {
        return NULL;
    }
    financial_book_dto_local_var->id = id;
    financial_book_dto_local_var->timestamp = timestamp;
    financial_book_dto_local_var->name = name;
    financial_book_dto_local_var->description = description;
    financial_book_dto_local_var->business_id = business_id;

    return financial_book_dto_local_var;
}


void financial_book_dto_free(financial_book_dto_t *financial_book_dto) {
    if(NULL == financial_book_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (financial_book_dto->id) {
        free(financial_book_dto->id);
        financial_book_dto->id = NULL;
    }
    if (financial_book_dto->timestamp) {
        free(financial_book_dto->timestamp);
        financial_book_dto->timestamp = NULL;
    }
    if (financial_book_dto->name) {
        free(financial_book_dto->name);
        financial_book_dto->name = NULL;
    }
    if (financial_book_dto->description) {
        free(financial_book_dto->description);
        financial_book_dto->description = NULL;
    }
    if (financial_book_dto->business_id) {
        free(financial_book_dto->business_id);
        financial_book_dto->business_id = NULL;
    }
    free(financial_book_dto);
}

cJSON *financial_book_dto_convertToJSON(financial_book_dto_t *financial_book_dto) {
    cJSON *item = cJSON_CreateObject();

    // financial_book_dto->id
    if(financial_book_dto->id) {
    if(cJSON_AddStringToObject(item, "id", financial_book_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // financial_book_dto->timestamp
    if(financial_book_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", financial_book_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // financial_book_dto->name
    if(financial_book_dto->name) {
    if(cJSON_AddStringToObject(item, "name", financial_book_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // financial_book_dto->description
    if(financial_book_dto->description) {
    if(cJSON_AddStringToObject(item, "description", financial_book_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // financial_book_dto->business_id
    if(financial_book_dto->business_id) {
    if(cJSON_AddStringToObject(item, "businessID", financial_book_dto->business_id) == NULL) {
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

financial_book_dto_t *financial_book_dto_parseFromJSON(cJSON *financial_book_dtoJSON){

    financial_book_dto_t *financial_book_dto_local_var = NULL;

    // financial_book_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(financial_book_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // financial_book_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(financial_book_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // financial_book_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(financial_book_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // financial_book_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(financial_book_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // financial_book_dto->business_id
    cJSON *business_id = cJSON_GetObjectItemCaseSensitive(financial_book_dtoJSON, "businessID");
    if (business_id) { 
    if(!cJSON_IsString(business_id) && !cJSON_IsNull(business_id))
    {
    goto end; //String
    }
    }


    financial_book_dto_local_var = financial_book_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        business_id && !cJSON_IsNull(business_id) ? strdup(business_id->valuestring) : NULL
        );

    return financial_book_dto_local_var;
end:
    return NULL;

}
