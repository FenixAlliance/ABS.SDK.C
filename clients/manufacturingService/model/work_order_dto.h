/*
 * work_order_dto.h
 *
 * 
 */

#ifndef _work_order_dto_H_
#define _work_order_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct work_order_dto_t work_order_dto_t;




typedef struct work_order_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *title; // string
    char *description; // string
    char *instructions; // string
    int taxable; //boolean
    char *work_location; // string
    char *promised_start_date; //date time
    char *promised_end_date; //date time
    char *currency_id; // string
    char *individual_id; // string
    char *organization_id; // string
    char *production_plan_id; // string
    char *work_order_type_id; // string
    char *workstation_id; // string
    char *tenant_id; // string

} work_order_dto_t;

work_order_dto_t *work_order_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    char *instructions,
    int taxable,
    char *work_location,
    char *promised_start_date,
    char *promised_end_date,
    char *currency_id,
    char *individual_id,
    char *organization_id,
    char *production_plan_id,
    char *work_order_type_id,
    char *workstation_id,
    char *tenant_id
);

void work_order_dto_free(work_order_dto_t *work_order_dto);

work_order_dto_t *work_order_dto_parseFromJSON(cJSON *work_order_dtoJSON);

cJSON *work_order_dto_convertToJSON(work_order_dto_t *work_order_dto);

#endif /* _work_order_dto_H_ */

