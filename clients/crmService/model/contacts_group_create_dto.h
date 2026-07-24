/*
 * contacts_group_create_dto.h
 *
 * 
 */

#ifndef _contacts_group_create_dto_H_
#define _contacts_group_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct contacts_group_create_dto_t contacts_group_create_dto_t;




typedef struct contacts_group_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *description; // string

} contacts_group_create_dto_t;

contacts_group_create_dto_t *contacts_group_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description
);

void contacts_group_create_dto_free(contacts_group_create_dto_t *contacts_group_create_dto);

contacts_group_create_dto_t *contacts_group_create_dto_parseFromJSON(cJSON *contacts_group_create_dtoJSON);

cJSON *contacts_group_create_dto_convertToJSON(contacts_group_create_dto_t *contacts_group_create_dto);

#endif /* _contacts_group_create_dto_H_ */

