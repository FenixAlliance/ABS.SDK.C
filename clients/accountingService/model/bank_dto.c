#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "bank_dto.h"



bank_dto_t *bank_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *image,
    char *country_id
    ) {
    bank_dto_t *bank_dto_local_var = malloc(sizeof(bank_dto_t));
    if (!bank_dto_local_var) {
        return NULL;
    }
    bank_dto_local_var->id = id;
    bank_dto_local_var->timestamp = timestamp;
    bank_dto_local_var->name = name;
    bank_dto_local_var->image = image;
    bank_dto_local_var->country_id = country_id;

    return bank_dto_local_var;
}


void bank_dto_free(bank_dto_t *bank_dto) {
    if(NULL == bank_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (bank_dto->id) {
        free(bank_dto->id);
        bank_dto->id = NULL;
    }
    if (bank_dto->timestamp) {
        free(bank_dto->timestamp);
        bank_dto->timestamp = NULL;
    }
    if (bank_dto->name) {
        free(bank_dto->name);
        bank_dto->name = NULL;
    }
    if (bank_dto->image) {
        free(bank_dto->image);
        bank_dto->image = NULL;
    }
    if (bank_dto->country_id) {
        free(bank_dto->country_id);
        bank_dto->country_id = NULL;
    }
    free(bank_dto);
}

cJSON *bank_dto_convertToJSON(bank_dto_t *bank_dto) {
    cJSON *item = cJSON_CreateObject();

    // bank_dto->id
    if(bank_dto->id) {
    if(cJSON_AddStringToObject(item, "id", bank_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // bank_dto->timestamp
    if(bank_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", bank_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // bank_dto->name
    if(bank_dto->name) {
    if(cJSON_AddStringToObject(item, "name", bank_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // bank_dto->image
    if(bank_dto->image) {
    if(cJSON_AddStringToObject(item, "image", bank_dto->image) == NULL) {
    goto fail; //String
    }
    }


    // bank_dto->country_id
    if(bank_dto->country_id) {
    if(cJSON_AddStringToObject(item, "countryId", bank_dto->country_id) == NULL) {
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

bank_dto_t *bank_dto_parseFromJSON(cJSON *bank_dtoJSON){

    bank_dto_t *bank_dto_local_var = NULL;

    // bank_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(bank_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // bank_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(bank_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // bank_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(bank_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // bank_dto->image
    cJSON *image = cJSON_GetObjectItemCaseSensitive(bank_dtoJSON, "image");
    if (image) { 
    if(!cJSON_IsString(image) && !cJSON_IsNull(image))
    {
    goto end; //String
    }
    }

    // bank_dto->country_id
    cJSON *country_id = cJSON_GetObjectItemCaseSensitive(bank_dtoJSON, "countryId");
    if (country_id) { 
    if(!cJSON_IsString(country_id) && !cJSON_IsNull(country_id))
    {
    goto end; //String
    }
    }


    bank_dto_local_var = bank_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        image && !cJSON_IsNull(image) ? strdup(image->valuestring) : NULL,
        country_id && !cJSON_IsNull(country_id) ? strdup(country_id->valuestring) : NULL
        );

    return bank_dto_local_var;
end:
    return NULL;

}
