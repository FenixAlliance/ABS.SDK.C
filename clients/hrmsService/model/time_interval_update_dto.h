/*
 * time_interval_update_dto.h
 *
 * 
 */

#ifndef _time_interval_update_dto_H_
#define _time_interval_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct time_interval_update_dto_t time_interval_update_dto_t;




typedef struct time_interval_update_dto_t {
    char *title; // string
    char *description; // string
    int is_break; //boolean
    int occust_on_monday; //boolean
    int occust_on_tuesday; //boolean
    int occust_on_wednesday; //boolean
    int occust_on_thursday; //boolean
    int occust_on_friday; //boolean
    int occust_on_saturday; //boolean
    int occust_on_sunday; //boolean
    char *start; //date time
    char *end; //date time
    int repeat_every; //numeric
    char *parent_time_interval_id; // string

} time_interval_update_dto_t;

time_interval_update_dto_t *time_interval_update_dto_create(
    char *title,
    char *description,
    int is_break,
    int occust_on_monday,
    int occust_on_tuesday,
    int occust_on_wednesday,
    int occust_on_thursday,
    int occust_on_friday,
    int occust_on_saturday,
    int occust_on_sunday,
    char *start,
    char *end,
    int repeat_every,
    char *parent_time_interval_id
);

void time_interval_update_dto_free(time_interval_update_dto_t *time_interval_update_dto);

time_interval_update_dto_t *time_interval_update_dto_parseFromJSON(cJSON *time_interval_update_dtoJSON);

cJSON *time_interval_update_dto_convertToJSON(time_interval_update_dto_t *time_interval_update_dto);

#endif /* _time_interval_update_dto_H_ */

