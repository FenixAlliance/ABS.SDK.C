/*
 * activity_record_dto.h
 *
 * 
 */

#ifndef _activity_record_dto_H_
#define _activity_record_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct activity_record_dto_t activity_record_dto_t;




typedef struct activity_record_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *type; // string
    char *title; // string
    char *description; // string
    int completed; //boolean
    char *due_date; //date time
    char *activity_feed_id; // string
    char *activity_type_id; // string
    char *tenant_id; // string
    char *enrollment_id; // string
    char *social_profile_id; // string
    char *parent_activity_id; // string
    char *in_charge_enrollment_id; // string

} activity_record_dto_t;

activity_record_dto_t *activity_record_dto_create(
    char *id,
    char *timestamp,
    char *type,
    char *title,
    char *description,
    int completed,
    char *due_date,
    char *activity_feed_id,
    char *activity_type_id,
    char *tenant_id,
    char *enrollment_id,
    char *social_profile_id,
    char *parent_activity_id,
    char *in_charge_enrollment_id
);

void activity_record_dto_free(activity_record_dto_t *activity_record_dto);

activity_record_dto_t *activity_record_dto_parseFromJSON(cJSON *activity_record_dtoJSON);

cJSON *activity_record_dto_convertToJSON(activity_record_dto_t *activity_record_dto);

#endif /* _activity_record_dto_H_ */

