/*
 * contacts_group_dto.h
 *
 * 
 */

#ifndef _contacts_group_dto_H_
#define _contacts_group_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct contacts_group_dto_t contacts_group_dto_t;




typedef struct contacts_group_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *description; // string
    char *tenant_id; // string
    char *enrollment_id; // string

} contacts_group_dto_t;

contacts_group_dto_t *contacts_group_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description,
    char *tenant_id,
    char *enrollment_id
);

void contacts_group_dto_free(contacts_group_dto_t *contacts_group_dto);

contacts_group_dto_t *contacts_group_dto_parseFromJSON(cJSON *contacts_group_dtoJSON);

cJSON *contacts_group_dto_convertToJSON(contacts_group_dto_t *contacts_group_dto);

#endif /* _contacts_group_dto_H_ */

