#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "bank_update_dto.h"



bank_update_dto_t *bank_update_dto_create(
    char *name,
    char *image,
    char *country_id
    ) {
    bank_update_dto_t *bank_update_dto_local_var = malloc(sizeof(bank_update_dto_t));
    if (!bank_update_dto_local_var) {
        return NULL;
    }
    bank_update_dto_local_var->name = name;
    bank_update_dto_local_var->image = image;
    bank_update_dto_local_var->country_id = country_id;

    return bank_update_dto_local_var;
}


void bank_update_dto_free(bank_update_dto_t *bank_update_dto) {
    if(NULL == bank_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (bank_update_dto->name) {
        free(bank_update_dto->name);
        bank_update_dto->name = NULL;
    }
    if (bank_update_dto->image) {
        free(bank_update_dto->image);
        bank_update_dto->image = NULL;
    }
    if (bank_update_dto->country_id) {
        free(bank_update_dto->country_id);
        bank_update_dto->country_id = NULL;
    }
    free(bank_update_dto);
}

cJSON *bank_update_dto_convertToJSON(bank_update_dto_t *bank_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // bank_update_dto->name
    if(bank_update_dto->name) {
    if(cJSON_AddStringToObject(item, "name", bank_update_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // bank_update_dto->image
    if(bank_update_dto->image) {
    if(cJSON_AddStringToObject(item, "image", bank_update_dto->image) == NULL) {
    goto fail; //String
    }
    }


    // bank_update_dto->country_id
    if(bank_update_dto->country_id) {
    if(cJSON_AddStringToObject(item, "countryId", bank_update_dto->country_id) == NULL) {
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

bank_update_dto_t *bank_update_dto_parseFromJSON(cJSON *bank_update_dtoJSON){

    bank_update_dto_t *bank_update_dto_local_var = NULL;

    // bank_update_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(bank_update_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // bank_update_dto->image
    cJSON *image = cJSON_GetObjectItemCaseSensitive(bank_update_dtoJSON, "image");
    if (image) { 
    if(!cJSON_IsString(image) && !cJSON_IsNull(image))
    {
    goto end; //String
    }
    }

    // bank_update_dto->country_id
    cJSON *country_id = cJSON_GetObjectItemCaseSensitive(bank_update_dtoJSON, "countryId");
    if (country_id) { 
    if(!cJSON_IsString(country_id) && !cJSON_IsNull(country_id))
    {
    goto end; //String
    }
    }


    bank_update_dto_local_var = bank_update_dto_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        image && !cJSON_IsNull(image) ? strdup(image->valuestring) : NULL,
        country_id && !cJSON_IsNull(country_id) ? strdup(country_id->valuestring) : NULL
        );

    return bank_update_dto_local_var;
end:
    return NULL;

}
