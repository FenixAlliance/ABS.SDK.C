/*
 * project_create_dto.h
 *
 * 
 */

#ifndef _project_create_dto_H_
#define _project_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct project_create_dto_t project_create_dto_t;




typedef struct project_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *title; // string
    char *description; // string
    char *project_start_date; //date time
    char *project_end_date; //date time

} project_create_dto_t;

project_create_dto_t *project_create_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    char *project_start_date,
    char *project_end_date
);

void project_create_dto_free(project_create_dto_t *project_create_dto);

project_create_dto_t *project_create_dto_parseFromJSON(cJSON *project_create_dtoJSON);

cJSON *project_create_dto_convertToJSON(project_create_dto_t *project_create_dto);

#endif /* _project_create_dto_H_ */

