/*
 * service_case_create_dto.h
 *
 * 
 */

#ifndef _service_case_create_dto_H_
#define _service_case_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct service_case_create_dto_t service_case_create_dto_t;




typedef struct service_case_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *title; // string
    char *description; // string
    char *instructions; // string
    int taxable; //boolean
    char *work_location; // string
    char *service_id; // string
    char *service_queue_id; // string
    char *service_case_type_id; // string
    char *service_level_agreement_id; // string
    char *individual_id; // string
    char *organization_id; // string
    char *account_holder_id; // string
    char *receiver_business_id; // string
    char *currency_id; // string
    char *territory_id; // string
    char *price_list_id; // string
    char *promised_start_date; //date time
    char *promised_end_date; //date time

} service_case_create_dto_t;

service_case_create_dto_t *service_case_create_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    char *instructions,
    int taxable,
    char *work_location,
    char *service_id,
    char *service_queue_id,
    char *service_case_type_id,
    char *service_level_agreement_id,
    char *individual_id,
    char *organization_id,
    char *account_holder_id,
    char *receiver_business_id,
    char *currency_id,
    char *territory_id,
    char *price_list_id,
    char *promised_start_date,
    char *promised_end_date
);

void service_case_create_dto_free(service_case_create_dto_t *service_case_create_dto);

service_case_create_dto_t *service_case_create_dto_parseFromJSON(cJSON *service_case_create_dtoJSON);

cJSON *service_case_create_dto_convertToJSON(service_case_create_dto_t *service_case_create_dto);

#endif /* _service_case_create_dto_H_ */

