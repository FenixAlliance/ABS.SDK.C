#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "payment_mode_create_dto.h"



payment_mode_create_dto_t *payment_mode_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description
    ) {
    payment_mode_create_dto_t *payment_mode_create_dto_local_var = malloc(sizeof(payment_mode_create_dto_t));
    if (!payment_mode_create_dto_local_var) {
        return NULL;
    }
    payment_mode_create_dto_local_var->id = id;
    payment_mode_create_dto_local_var->timestamp = timestamp;
    payment_mode_create_dto_local_var->name = name;
    payment_mode_create_dto_local_var->description = description;

    return payment_mode_create_dto_local_var;
}


void payment_mode_create_dto_free(payment_mode_create_dto_t *payment_mode_create_dto) {
    if(NULL == payment_mode_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (payment_mode_create_dto->id) {
        free(payment_mode_create_dto->id);
        payment_mode_create_dto->id = NULL;
    }
    if (payment_mode_create_dto->timestamp) {
        free(payment_mode_create_dto->timestamp);
        payment_mode_create_dto->timestamp = NULL;
    }
    if (payment_mode_create_dto->name) {
        free(payment_mode_create_dto->name);
        payment_mode_create_dto->name = NULL;
    }
    if (payment_mode_create_dto->description) {
        free(payment_mode_create_dto->description);
        payment_mode_create_dto->description = NULL;
    }
    free(payment_mode_create_dto);
}

cJSON *payment_mode_create_dto_convertToJSON(payment_mode_create_dto_t *payment_mode_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // payment_mode_create_dto->id
    if(payment_mode_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", payment_mode_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // payment_mode_create_dto->timestamp
    if(payment_mode_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", payment_mode_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // payment_mode_create_dto->name
    if (!payment_mode_create_dto->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", payment_mode_create_dto->name) == NULL) {
    goto fail; //String
    }


    // payment_mode_create_dto->description
    if(payment_mode_create_dto->description) {
    if(cJSON_AddStringToObject(item, "description", payment_mode_create_dto->description) == NULL) {
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

payment_mode_create_dto_t *payment_mode_create_dto_parseFromJSON(cJSON *payment_mode_create_dtoJSON){

    payment_mode_create_dto_t *payment_mode_create_dto_local_var = NULL;

    // payment_mode_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(payment_mode_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // payment_mode_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(payment_mode_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // payment_mode_create_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(payment_mode_create_dtoJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // payment_mode_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(payment_mode_create_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }


    payment_mode_create_dto_local_var = payment_mode_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(name->valuestring),
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL
        );

    return payment_mode_create_dto_local_var;
end:
    return NULL;

}
