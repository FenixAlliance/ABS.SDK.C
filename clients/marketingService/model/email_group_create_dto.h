/*
 * email_group_create_dto.h
 *
 * 
 */

#ifndef _email_group_create_dto_H_
#define _email_group_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct email_group_create_dto_t email_group_create_dto_t;




typedef struct email_group_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *description; // string
    int enabled; //boolean
    char *tenant_id; // string
    char *enrollment_id; // string

} email_group_create_dto_t;

email_group_create_dto_t *email_group_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description,
    int enabled,
    char *tenant_id,
    char *enrollment_id
);

void email_group_create_dto_free(email_group_create_dto_t *email_group_create_dto);

email_group_create_dto_t *email_group_create_dto_parseFromJSON(cJSON *email_group_create_dtoJSON);

cJSON *email_group_create_dto_convertToJSON(email_group_create_dto_t *email_group_create_dto);

#endif /* _email_group_create_dto_H_ */

