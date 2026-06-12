/*
 * activity_record_update_dto.h
 *
 * 
 */

#ifndef _activity_record_update_dto_H_
#define _activity_record_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct activity_record_update_dto_t activity_record_update_dto_t;




typedef struct activity_record_update_dto_t {
    char *type; // string
    char *title; // string
    char *description; // string
    int completed; //boolean
    char *due_date; //date time
    char *activity_type_id; // string
    char *parent_activity_id; // string
    char *in_charge_enrollment_id; // string

} activity_record_update_dto_t;

activity_record_update_dto_t *activity_record_update_dto_create(
    char *type,
    char *title,
    char *description,
    int completed,
    char *due_date,
    char *activity_type_id,
    char *parent_activity_id,
    char *in_charge_enrollment_id
);

void activity_record_update_dto_free(activity_record_update_dto_t *activity_record_update_dto);

activity_record_update_dto_t *activity_record_update_dto_parseFromJSON(cJSON *activity_record_update_dtoJSON);

cJSON *activity_record_update_dto_convertToJSON(activity_record_update_dto_t *activity_record_update_dto);

#endif /* _activity_record_update_dto_H_ */

