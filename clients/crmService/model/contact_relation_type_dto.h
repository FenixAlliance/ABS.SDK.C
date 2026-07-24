/*
 * contact_relation_type_dto.h
 *
 * 
 */

#ifndef _contact_relation_type_dto_H_
#define _contact_relation_type_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct contact_relation_type_dto_t contact_relation_type_dto_t;




typedef struct contact_relation_type_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *back_name; // string
    char *description; // string
    char *tenant_id; // string

} contact_relation_type_dto_t;

contact_relation_type_dto_t *contact_relation_type_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *back_name,
    char *description,
    char *tenant_id
);

void contact_relation_type_dto_free(contact_relation_type_dto_t *contact_relation_type_dto);

contact_relation_type_dto_t *contact_relation_type_dto_parseFromJSON(cJSON *contact_relation_type_dtoJSON);

cJSON *contact_relation_type_dto_convertToJSON(contact_relation_type_dto_t *contact_relation_type_dto);

#endif /* _contact_relation_type_dto_H_ */

