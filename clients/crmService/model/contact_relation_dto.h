/*
 * contact_relation_dto.h
 *
 * 
 */

#ifndef _contact_relation_dto_H_
#define _contact_relation_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct contact_relation_dto_t contact_relation_dto_t;




typedef struct contact_relation_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *contact_id; // string
    char *contact_name; // string
    char *related_contact_id; // string
    char *related_contact_name; // string
    char *contact_relation_type_id; // string
    char *contact_relation_type_name; // string
    char *qualified_name; // string
    char *tenant_id; // string

} contact_relation_dto_t;

contact_relation_dto_t *contact_relation_dto_create(
    char *id,
    char *timestamp,
    char *contact_id,
    char *contact_name,
    char *related_contact_id,
    char *related_contact_name,
    char *contact_relation_type_id,
    char *contact_relation_type_name,
    char *qualified_name,
    char *tenant_id
);

void contact_relation_dto_free(contact_relation_dto_t *contact_relation_dto);

contact_relation_dto_t *contact_relation_dto_parseFromJSON(cJSON *contact_relation_dtoJSON);

cJSON *contact_relation_dto_convertToJSON(contact_relation_dto_t *contact_relation_dto);

#endif /* _contact_relation_dto_H_ */

