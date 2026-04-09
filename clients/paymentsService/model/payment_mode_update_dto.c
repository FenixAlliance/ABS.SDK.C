#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "payment_mode_update_dto.h"



payment_mode_update_dto_t *payment_mode_update_dto_create(
    char *name,
    char *description
    ) {
    payment_mode_update_dto_t *payment_mode_update_dto_local_var = malloc(sizeof(payment_mode_update_dto_t));
    if (!payment_mode_update_dto_local_var) {
        return NULL;
    }
    payment_mode_update_dto_local_var->name = name;
    payment_mode_update_dto_local_var->description = description;

    return payment_mode_update_dto_local_var;
}


void payment_mode_update_dto_free(payment_mode_update_dto_t *payment_mode_update_dto) {
    if(NULL == payment_mode_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (payment_mode_update_dto->name) {
        free(payment_mode_update_dto->name);
        payment_mode_update_dto->name = NULL;
    }
    if (payment_mode_update_dto->description) {
        free(payment_mode_update_dto->description);
        payment_mode_update_dto->description = NULL;
    }
    free(payment_mode_update_dto);
}

cJSON *payment_mode_update_dto_convertToJSON(payment_mode_update_dto_t *payment_mode_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // payment_mode_update_dto->name
    if(payment_mode_update_dto->name) {
    if(cJSON_AddStringToObject(item, "name", payment_mode_update_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // payment_mode_update_dto->description
    if(payment_mode_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", payment_mode_update_dto->description) == NULL) {
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

payment_mode_update_dto_t *payment_mode_update_dto_parseFromJSON(cJSON *payment_mode_update_dtoJSON){

    payment_mode_update_dto_t *payment_mode_update_dto_local_var = NULL;

    // payment_mode_update_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(payment_mode_update_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // payment_mode_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(payment_mode_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }


    payment_mode_update_dto_local_var = payment_mode_update_dto_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL
        );

    return payment_mode_update_dto_local_var;
end:
    return NULL;

}
