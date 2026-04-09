#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "payment_commission_create_dto.h"



payment_commission_create_dto_t *payment_commission_create_dto_create(
    char *id,
    char *timestamp,
    char *payment_id
    ) {
    payment_commission_create_dto_t *payment_commission_create_dto_local_var = malloc(sizeof(payment_commission_create_dto_t));
    if (!payment_commission_create_dto_local_var) {
        return NULL;
    }
    payment_commission_create_dto_local_var->id = id;
    payment_commission_create_dto_local_var->timestamp = timestamp;
    payment_commission_create_dto_local_var->payment_id = payment_id;

    return payment_commission_create_dto_local_var;
}


void payment_commission_create_dto_free(payment_commission_create_dto_t *payment_commission_create_dto) {
    if(NULL == payment_commission_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (payment_commission_create_dto->id) {
        free(payment_commission_create_dto->id);
        payment_commission_create_dto->id = NULL;
    }
    if (payment_commission_create_dto->timestamp) {
        free(payment_commission_create_dto->timestamp);
        payment_commission_create_dto->timestamp = NULL;
    }
    if (payment_commission_create_dto->payment_id) {
        free(payment_commission_create_dto->payment_id);
        payment_commission_create_dto->payment_id = NULL;
    }
    free(payment_commission_create_dto);
}

cJSON *payment_commission_create_dto_convertToJSON(payment_commission_create_dto_t *payment_commission_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // payment_commission_create_dto->id
    if(payment_commission_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", payment_commission_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // payment_commission_create_dto->timestamp
    if(payment_commission_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", payment_commission_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // payment_commission_create_dto->payment_id
    if(payment_commission_create_dto->payment_id) {
    if(cJSON_AddStringToObject(item, "paymentId", payment_commission_create_dto->payment_id) == NULL) {
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

payment_commission_create_dto_t *payment_commission_create_dto_parseFromJSON(cJSON *payment_commission_create_dtoJSON){

    payment_commission_create_dto_t *payment_commission_create_dto_local_var = NULL;

    // payment_commission_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(payment_commission_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // payment_commission_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(payment_commission_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // payment_commission_create_dto->payment_id
    cJSON *payment_id = cJSON_GetObjectItemCaseSensitive(payment_commission_create_dtoJSON, "paymentId");
    if (payment_id) { 
    if(!cJSON_IsString(payment_id) && !cJSON_IsNull(payment_id))
    {
    goto end; //String
    }
    }


    payment_commission_create_dto_local_var = payment_commission_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        payment_id && !cJSON_IsNull(payment_id) ? strdup(payment_id->valuestring) : NULL
        );

    return payment_commission_create_dto_local_var;
end:
    return NULL;

}
