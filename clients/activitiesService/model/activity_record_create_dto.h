/*
 * activity_record_create_dto.h
 *
 * 
 */

#ifndef _activity_record_create_dto_H_
#define _activity_record_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct activity_record_create_dto_t activity_record_create_dto_t;




typedef struct activity_record_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *type; // string
    char *title; // string
    char *description; // string
    char *due_date; //date time
    char *activity_feed_id; // string
    char *activity_type_id; // string
    char *parent_activity_id; // string
    char *in_charge_enrollment_id; // string

} activity_record_create_dto_t;

activity_record_create_dto_t *activity_record_create_dto_create(
    char *id,
    char *timestamp,
    char *type,
    char *title,
    char *description,
    char *due_date,
    char *activity_feed_id,
    char *activity_type_id,
    char *parent_activity_id,
    char *in_charge_enrollment_id
);

void activity_record_create_dto_free(activity_record_create_dto_t *activity_record_create_dto);

activity_record_create_dto_t *activity_record_create_dto_parseFromJSON(cJSON *activity_record_create_dtoJSON);

cJSON *activity_record_create_dto_convertToJSON(activity_record_create_dto_t *activity_record_create_dto);

#endif /* _activity_record_create_dto_H_ */

