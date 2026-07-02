/*
 * job_field_update_dto.h
 *
 * 
 */

#ifndef _job_field_update_dto_H_
#define _job_field_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct job_field_update_dto_t job_field_update_dto_t;




typedef struct job_field_update_dto_t {
    char *name; // string
    char *image_url; // string
    char *description; // string

} job_field_update_dto_t;

job_field_update_dto_t *job_field_update_dto_create(
    char *name,
    char *image_url,
    char *description
);

void job_field_update_dto_free(job_field_update_dto_t *job_field_update_dto);

job_field_update_dto_t *job_field_update_dto_parseFromJSON(cJSON *job_field_update_dtoJSON);

cJSON *job_field_update_dto_convertToJSON(job_field_update_dto_t *job_field_update_dto);

#endif /* _job_field_update_dto_H_ */

