/*
 * work_order_update_dto.h
 *
 * 
 */

#ifndef _work_order_update_dto_H_
#define _work_order_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct work_order_update_dto_t work_order_update_dto_t;




typedef struct work_order_update_dto_t {
    char *title; // string
    char *description; // string
    char *instructions; // string
    int taxable; //boolean
    char *work_location; // string
    char *production_plan_id; // string
    char *work_order_type_id; // string
    char *workstation_id; // string
    char *currency_id; // string
    char *individual_id; // string
    char *organization_id; // string
    char *promised_start_date; //date time
    char *promised_end_date; //date time

} work_order_update_dto_t;

work_order_update_dto_t *work_order_update_dto_create(
    char *title,
    char *description,
    char *instructions,
    int taxable,
    char *work_location,
    char *production_plan_id,
    char *work_order_type_id,
    char *workstation_id,
    char *currency_id,
    char *individual_id,
    char *organization_id,
    char *promised_start_date,
    char *promised_end_date
);

void work_order_update_dto_free(work_order_update_dto_t *work_order_update_dto);

work_order_update_dto_t *work_order_update_dto_parseFromJSON(cJSON *work_order_update_dtoJSON);

cJSON *work_order_update_dto_convertToJSON(work_order_update_dto_t *work_order_update_dto);

#endif /* _work_order_update_dto_H_ */

