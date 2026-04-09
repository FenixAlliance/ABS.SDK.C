#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "forex_rates.h"



forex_rates_t *forex_rates_create(
    int success,
    char *date,
    char *base,
    long timestamp,
    char *request_timestamp,
    list_t* rates
    ) {
    forex_rates_t *forex_rates_local_var = malloc(sizeof(forex_rates_t));
    if (!forex_rates_local_var) {
        return NULL;
    }
    forex_rates_local_var->success = success;
    forex_rates_local_var->date = date;
    forex_rates_local_var->base = base;
    forex_rates_local_var->timestamp = timestamp;
    forex_rates_local_var->request_timestamp = request_timestamp;
    forex_rates_local_var->rates = rates;

    return forex_rates_local_var;
}


void forex_rates_free(forex_rates_t *forex_rates) {
    if(NULL == forex_rates){
        return ;
    }
    listEntry_t *listEntry;
    if (forex_rates->date) {
        free(forex_rates->date);
        forex_rates->date = NULL;
    }
    if (forex_rates->base) {
        free(forex_rates->base);
        forex_rates->base = NULL;
    }
    if (forex_rates->request_timestamp) {
        free(forex_rates->request_timestamp);
        forex_rates->request_timestamp = NULL;
    }
    if (forex_rates->rates) {
        list_ForEach(listEntry, forex_rates->rates) {
            keyValuePair_t *localKeyValue = (keyValuePair_t*) listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_freeList(forex_rates->rates);
        forex_rates->rates = NULL;
    }
    free(forex_rates);
}

cJSON *forex_rates_convertToJSON(forex_rates_t *forex_rates) {
    cJSON *item = cJSON_CreateObject();

    // forex_rates->success
    if(forex_rates->success) {
    if(cJSON_AddBoolToObject(item, "success", forex_rates->success) == NULL) {
    goto fail; //Bool
    }
    }


    // forex_rates->date
    if(forex_rates->date) {
    if(cJSON_AddStringToObject(item, "date", forex_rates->date) == NULL) {
    goto fail; //String
    }
    }


    // forex_rates->base
    if(forex_rates->base) {
    if(cJSON_AddStringToObject(item, "base", forex_rates->base) == NULL) {
    goto fail; //String
    }
    }


    // forex_rates->timestamp
    if(forex_rates->timestamp) {
    if(cJSON_AddNumberToObject(item, "timestamp", forex_rates->timestamp) == NULL) {
    goto fail; //Numeric
    }
    }


    // forex_rates->request_timestamp
    if(forex_rates->request_timestamp) {
    if(cJSON_AddStringToObject(item, "requestTimestamp", forex_rates->request_timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // forex_rates->rates
    if(forex_rates->rates) {
    cJSON *rates = cJSON_AddObjectToObject(item, "rates");
    if(rates == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = rates;
    listEntry_t *ratesListEntry;
    if (forex_rates->rates) {
    list_ForEach(ratesListEntry, forex_rates->rates) {
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

forex_rates_t *forex_rates_parseFromJSON(cJSON *forex_ratesJSON){

    forex_rates_t *forex_rates_local_var = NULL;

    // define the local map for forex_rates->rates
    list_t *ratesList = NULL;

    // forex_rates->success
    cJSON *success = cJSON_GetObjectItemCaseSensitive(forex_ratesJSON, "success");
    if (success) { 
    if(!cJSON_IsBool(success))
    {
    goto end; //Bool
    }
    }

    // forex_rates->date
    cJSON *date = cJSON_GetObjectItemCaseSensitive(forex_ratesJSON, "date");
    if (date) { 
    if(!cJSON_IsString(date) && !cJSON_IsNull(date))
    {
    goto end; //String
    }
    }

    // forex_rates->base
    cJSON *base = cJSON_GetObjectItemCaseSensitive(forex_ratesJSON, "base");
    if (base) { 
    if(!cJSON_IsString(base) && !cJSON_IsNull(base))
    {
    goto end; //String
    }
    }

    // forex_rates->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(forex_ratesJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsNumber(timestamp))
    {
    goto end; //Numeric
    }
    }

    // forex_rates->request_timestamp
    cJSON *request_timestamp = cJSON_GetObjectItemCaseSensitive(forex_ratesJSON, "requestTimestamp");
    if (request_timestamp) { 
    if(!cJSON_IsString(request_timestamp) && !cJSON_IsNull(request_timestamp))
    {
    goto end; //DateTime
    }
    }

    // forex_rates->rates
    cJSON *rates = cJSON_GetObjectItemCaseSensitive(forex_ratesJSON, "rates");
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


    forex_rates_local_var = forex_rates_create (
        success ? success->valueint : 0,
        date && !cJSON_IsNull(date) ? strdup(date->valuestring) : NULL,
        base && !cJSON_IsNull(base) ? strdup(base->valuestring) : NULL,
        timestamp ? timestamp->valuedouble : 0,
        request_timestamp && !cJSON_IsNull(request_timestamp) ? strdup(request_timestamp->valuestring) : NULL,
        rates ? ratesList : NULL
        );

    return forex_rates_local_var;
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
