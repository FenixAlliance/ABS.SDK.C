/*
 * store_data_retention_policy.h
 *
 * 
 */

#ifndef _store_data_retention_policy_H_
#define _store_data_retention_policy_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct store_data_retention_policy_t store_data_retention_policy_t;


// Enum RETENTIONTIMESPAN for store_data_retention_policy

typedef enum  { contentservice_store_data_retention_policy_RETENTIONTIMESPAN_NULL = 0, contentservice_store_data_retention_policy_RETENTIONTIMESPAN_Days, contentservice_store_data_retention_policy_RETENTIONTIMESPAN_Weeks, contentservice_store_data_retention_policy_RETENTIONTIMESPAN_Months, contentservice_store_data_retention_policy_RETENTIONTIMESPAN_Years } contentservice_store_data_retention_policy_RETENTIONTIMESPAN_e;

char* store_data_retention_policy_retention_time_span_ToString(contentservice_store_data_retention_policy_RETENTIONTIMESPAN_e retention_time_span);

contentservice_store_data_retention_policy_RETENTIONTIMESPAN_e store_data_retention_policy_retention_time_span_FromString(char* retention_time_span);



typedef struct store_data_retention_policy_t {
    int data_retention_time_span_ammount; //numeric
    contentservice_store_data_retention_policy_RETENTIONTIMESPAN_e retention_time_span; //enum

} store_data_retention_policy_t;

store_data_retention_policy_t *store_data_retention_policy_create(
    int data_retention_time_span_ammount,
    contentservice_store_data_retention_policy_RETENTIONTIMESPAN_e retention_time_span
);

void store_data_retention_policy_free(store_data_retention_policy_t *store_data_retention_policy);

store_data_retention_policy_t *store_data_retention_policy_parseFromJSON(cJSON *store_data_retention_policyJSON);

cJSON *store_data_retention_policy_convertToJSON(store_data_retention_policy_t *store_data_retention_policy);

#endif /* _store_data_retention_policy_H_ */

