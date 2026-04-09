#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "forex_rates_dto.h"



forex_rates_dto_t *forex_rates_dto_create(
    int success,
    char *date,
    char *base,
    long timestamp,
    char *request_timestamp,
    list_t* rates
    ) {
    forex_rates_dto_t *forex_rates_dto_local_var = malloc(sizeof(forex_rates_dto_t));
    if (!forex_rates_dto_local_var) {
        return NULL;
    }
    forex_rates_dto_local_var->success = success;
    forex_rates_dto_local_var->date = date;
    forex_rates_dto_local_var->base = base;
    forex_rates_dto_local_var->timestamp = timestamp;
    forex_rates_dto_local_var->request_timestamp = request_timestamp;
    forex_rates_dto_local_var->rates = rates;

    return forex_rates_dto_local_var;
}


void forex_rates_dto_free(forex_rates_dto_t *forex_rates_dto) {
    if(NULL == forex_rates_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (forex_rates_dto->date) {
        free(forex_rates_dto->date);
        forex_rates_dto->date = NULL;
    }
    if (forex_rates_dto->base) {
        free(forex_rates_dto->base);
        forex_rates_dto->base = NULL;
    }
    if (forex_rates_dto->request_timestamp) {
        free(forex_rates_dto->request_timestamp);
        forex_rates_dto->request_timestamp = NULL;
    }
    if (forex_rates_dto->rates) {
        list_ForEach(listEntry, forex_rates_dto->rates) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_freeList(forex_rates_dto->rates);
        forex_rates_dto->rates = NULL;
    }
    free(forex_rates_dto);
}

cJSON *forex_rates_dto_convertToJSON(forex_rates_dto_t *forex_rates_dto) {
    cJSON *item = cJSON_CreateObject();

    // forex_rates_dto->success
    if(forex_rates_dto->success) {
    if(cJSON_AddBoolToObject(item, "success", forex_rates_dto->success) == NULL) {
    goto fail; //Bool
    }
    }


    // forex_rates_dto->date
    if(forex_rates_dto->date) {
    if(cJSON_AddStringToObject(item, "date", forex_rates_dto->date) == NULL) {
    goto fail; //String
    }
    }


    // forex_rates_dto->base
    if(forex_rates_dto->base) {
    if(cJSON_AddStringToObject(item, "base", forex_rates_dto->base) == NULL) {
    goto fail; //String
    }
    }


    // forex_rates_dto->timestamp
    if(forex_rates_dto->timestamp) {
    if(cJSON_AddNumberToObject(item, "timestamp", forex_rates_dto->timestamp) == NULL) {
    goto fail; //Numeric
    }
    }


    // forex_rates_dto->request_timestamp
    if(forex_rates_dto->request_timestamp) {
    if(cJSON_AddStringToObject(item, "requestTimestamp", forex_rates_dto->request_timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // forex_rates_dto->rates
    if(forex_rates_dto->rates) {
    cJSON *rates = cJSON_AddObjectToObject(item, "rates");
    if(rates == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = rates;
    listEntry_t *ratesListEntry;
    if (forex_rates_dto->rates) {
    list_ForEach(ratesListEntry, forex_rates_dto->rates) {
        keyValuePair_t *localKeyValue = (keyValuePair_t*)ratesListEntry->data;
        if(cJSON_AddNumberToObject(localMapObject, localKeyValue->key, *(double *)localKeyValue->value) == NULL)
        {
            goto fail;
        }
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

forex_rates_dto_t *forex_rates_dto_parseFromJSON(cJSON *forex_rates_dtoJSON){

    forex_rates_dto_t *forex_rates_dto_local_var = NULL;

    // define the local map for forex_rates_dto->rates
    list_t *ratesList = NULL;

    // forex_rates_dto->success
    cJSON *success = cJSON_GetObjectItemCaseSensitive(forex_rates_dtoJSON, "success");
    if (success) { 
    if(!cJSON_IsBool(success))
    {
    goto end; //Bool
    }
    }

    // forex_rates_dto->date
    cJSON *date = cJSON_GetObjectItemCaseSensitive(forex_rates_dtoJSON, "date");
    if (date) { 
    if(!cJSON_IsString(date) && !cJSON_IsNull(date))
    {
    goto end; //String
    }
    }

    // forex_rates_dto->base
    cJSON *base = cJSON_GetObjectItemCaseSensitive(forex_rates_dtoJSON, "base");
    if (base) { 
    if(!cJSON_IsString(base) && !cJSON_IsNull(base))
    {
    goto end; //String
    }
    }

    // forex_rates_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(forex_rates_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsNumber(timestamp))
    {
    goto end; //Numeric
    }
    }

    // forex_rates_dto->request_timestamp
    cJSON *request_timestamp = cJSON_GetObjectItemCaseSensitive(forex_rates_dtoJSON, "requestTimestamp");
    if (request_timestamp) { 
    if(!cJSON_IsString(request_timestamp) && !cJSON_IsNull(request_timestamp))
    {
    goto end; //DateTime
    }
    }

    // forex_rates_dto->rates
    cJSON *rates = cJSON_GetObjectItemCaseSensitive(forex_rates_dtoJSON, "rates");
    if (rates) { 
    cJSON *rates_local_map = NULL;
    if(!cJSON_IsObject(rates) && !cJSON_IsNull(rates))
    {
        goto end;//primitive map container
    }
    if(cJSON_IsObject(rates))
    {
        ratesList = list_createList();
        keyValuePair_t *localMapKeyPair;
        cJSON_ArrayForEach(rates_local_map, rates)
        {
            cJSON *localMapObject = rates_local_map;
            if(!cJSON_IsNumber(localMapObject))
            {
                goto end;
            }
            localMapKeyPair = keyValuePair_create(strdup(localMapObject->string),&localMapObject->valuedouble );
            list_addElement(ratesList , localMapKeyPair);
        }
    }
    }


    forex_rates_dto_local_var = forex_rates_dto_create (
        success ? success->valueint : 0,
        date && !cJSON_IsNull(date) ? strdup(date->valuestring) : NULL,
        base && !cJSON_IsNull(base) ? strdup(base->valuestring) : NULL,
        timestamp ? timestamp->valuedouble : 0,
        request_timestamp && !cJSON_IsNull(request_timestamp) ? strdup(request_timestamp->valuestring) : NULL,
        rates ? ratesList : NULL
        );

    return forex_rates_dto_local_var;
end:
    if (ratesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, ratesList) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free(localKeyValue->key);
            localKeyValue->key = NULL;
            keyValuePair_free(localKeyValue);
            localKeyValue = NULL;
        }
        list_freeList(ratesList);
        ratesList = NULL;
    }
    return NULL;

}
