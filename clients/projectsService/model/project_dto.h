/*
 * project_dto.h
 *
 * 
 */

#ifndef _project_dto_H_
#define _project_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct project_dto_t project_dto_t;




typedef struct project_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *title; // string
    char *description; // string
    char *project_start_date; //date time
    char *project_end_date; //date time

} project_dto_t;

project_dto_t *project_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    char *project_start_date,
    char *project_end_date
);

void project_dto_free(project_dto_t *project_dto);

project_dto_t *project_dto_parseFromJSON(cJSON *project_dtoJSON);

cJSON *project_dto_convertToJSON(project_dto_t *project_dto);

#endif /* _project_dto_H_ */

