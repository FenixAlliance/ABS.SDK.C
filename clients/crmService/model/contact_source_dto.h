/*
 * contact_source_dto.h
 *
 * 
 */

#ifndef _contact_source_dto_H_
#define _contact_source_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct contact_source_dto_t contact_source_dto_t;




typedef struct contact_source_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *description; // string
    char *tenant_id; // string

} contact_source_dto_t;

contact_source_dto_t *contact_source_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description,
    char *tenant_id
);

void contact_source_dto_free(contact_source_dto_t *contact_source_dto);

contact_source_dto_t *contact_source_dto_parseFromJSON(cJSON *contact_source_dtoJSON);

cJSON *contact_source_dto_convertToJSON(contact_source_dto_t *contact_source_dto);

#endif /* _contact_source_dto_H_ */

