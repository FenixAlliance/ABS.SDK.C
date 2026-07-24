/*
 * contact_source_create_dto.h
 *
 * 
 */

#ifndef _contact_source_create_dto_H_
#define _contact_source_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct contact_source_create_dto_t contact_source_create_dto_t;




typedef struct contact_source_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *description; // string

} contact_source_create_dto_t;

contact_source_create_dto_t *contact_source_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description
);

void contact_source_create_dto_free(contact_source_create_dto_t *contact_source_create_dto);

contact_source_create_dto_t *contact_source_create_dto_parseFromJSON(cJSON *contact_source_create_dtoJSON);

cJSON *contact_source_create_dto_convertToJSON(contact_source_create_dto_t *contact_source_create_dto);

#endif /* _contact_source_create_dto_H_ */

