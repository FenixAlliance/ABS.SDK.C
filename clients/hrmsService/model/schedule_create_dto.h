/*
 * schedule_create_dto.h
 *
 * 
 */

#ifndef _schedule_create_dto_H_
#define _schedule_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct schedule_create_dto_t schedule_create_dto_t;




typedef struct schedule_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *description; // string
    int disabled; //boolean
    int sunday; //boolean
    int monday; //boolean
    int tuesday; //boolean
    int wednesday; //boolean
    int thursday; //boolean
    int friday; //boolean
    int saturday; //boolean
    int unique_interval; //boolean
    int is24x7_interval; //boolean
    char *start; //date time
    char *end; //date time
    char *timezone_id; // string
    char *fiscal_year_id; // string
    char *holiday_schedule_id; // string

} schedule_create_dto_t;

schedule_create_dto_t *schedule_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description,
    int disabled,
    int sunday,
    int monday,
    int tuesday,
    int wednesday,
    int thursday,
    int friday,
    int saturday,
    int unique_interval,
    int is24x7_interval,
    char *start,
    char *end,
    char *timezone_id,
    char *fiscal_year_id,
    char *holiday_schedule_id
);

void schedule_create_dto_free(schedule_create_dto_t *schedule_create_dto);

schedule_create_dto_t *schedule_create_dto_parseFromJSON(cJSON *schedule_create_dtoJSON);

cJSON *schedule_create_dto_convertToJSON(schedule_create_dto_t *schedule_create_dto);

#endif /* _schedule_create_dto_H_ */

