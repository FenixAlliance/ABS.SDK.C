#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "store_data_retention_policy.h"


char* store_data_retention_policy_retention_time_span_ToString(contentservice_store_data_retention_policy_RETENTIONTIMESPAN_e retention_time_span) {
    char* retention_time_spanArray[] =  { "NULL", "Days", "Weeks", "Months", "Years" };
    return retention_time_spanArray[retention_time_span];
}

contentservice_store_data_retention_policy_RETENTIONTIMESPAN_e store_data_retention_policy_retention_time_span_FromString(char* retention_time_span){
    int stringToReturn = 0;
    char *retention_time_spanArray[] =  { "NULL", "Days", "Weeks", "Months", "Years" };
    size_t sizeofArray = sizeof(retention_time_spanArray) / sizeof(retention_time_spanArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(retention_time_span, retention_time_spanArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

store_data_retention_policy_t *store_data_retention_policy_create(
    int data_retention_time_span_ammount,
    contentservice_store_data_retention_policy_RETENTIONTIMESPAN_e retention_time_span
    ) {
    store_data_retention_policy_t *store_data_retention_policy_local_var = malloc(sizeof(store_data_retention_policy_t));
    if (!store_data_retention_policy_local_var) {
        return NULL;
    }
    store_data_retention_policy_local_var->data_retention_time_span_ammount = data_retention_time_span_ammount;
    store_data_retention_policy_local_var->retention_time_span = retention_time_span;

    return store_data_retention_policy_local_var;
}


void store_data_retention_policy_free(store_data_retention_policy_t *store_data_retention_policy) {
    if(NULL == store_data_retention_policy){
        return ;
    }
    listEntry_t *listEntry;
    free(store_data_retention_policy);
}

cJSON *store_data_retention_policy_convertToJSON(store_data_retention_policy_t *store_data_retention_policy) {
    cJSON *item = cJSON_CreateObject();

    // store_data_retention_policy->data_retention_time_span_ammount
    if(store_data_retention_policy->data_retention_time_span_ammount) {
    if(cJSON_AddNumberToObject(item, "dataRetentionTimeSpanAmmount", store_data_retention_policy->data_retention_time_span_ammount) == NULL) {
    goto fail; //Numeric
    }
    }


    // store_data_retention_policy->retention_time_span
    if(store_data_retention_policy->retention_time_span != contentservice_store_data_retention_policy_RETENTIONTIMESPAN_NULL) {
    if(cJSON_AddStringToObject(item, "retentionTimeSpan", retention_time_spanstore_data_retention_policy_ToString(store_data_retention_policy->retention_time_span)) == NULL)
    {
    goto fail; //Enum
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

store_data_retention_policy_t *store_data_retention_policy_parseFromJSON(cJSON *store_data_retention_policyJSON){

    store_data_retention_policy_t *store_data_retention_policy_local_var = NULL;

    // store_data_retention_policy->data_retention_time_span_ammount
    cJSON *data_retention_time_span_ammount = cJSON_GetObjectItemCaseSensitive(store_data_retention_policyJSON, "dataRetentionTimeSpanAmmount");
    if (data_retention_time_span_ammount) { 
    if(!cJSON_IsNumber(data_retention_time_span_ammount))
    {
    goto end; //Numeric
    }
    }

    // store_data_retention_policy->retention_time_span
    cJSON *retention_time_span = cJSON_GetObjectItemCaseSensitive(store_data_retention_policyJSON, "retentionTimeSpan");
    contentservice_store_data_retention_policy_RETENTIONTIMESPAN_e retention_time_spanVariable;
    if (retention_time_span) { 
    if(!cJSON_IsString(retention_time_span))
    {
    goto end; //Enum
    }
    retention_time_spanVariable = store_data_retention_policy_retention_time_span_FromString(retention_time_span->valuestring);
    }


    store_data_retention_policy_local_var = store_data_retention_policy_create (
        data_retention_time_span_ammount ? data_retention_time_span_ammount->valuedouble : 0,
        retention_time_span ? retention_time_spanVariable : contentservice_store_data_retention_policy_RETENTIONTIMESPAN_NULL
        );

    return store_data_retention_policy_local_var;
end:
    return NULL;

}
