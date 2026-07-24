/*
 * contact_relation_update_dto.h
 *
 * 
 */

#ifndef _contact_relation_update_dto_H_
#define _contact_relation_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct contact_relation_update_dto_t contact_relation_update_dto_t;




typedef struct contact_relation_update_dto_t {
    char *contact_id; // string
    char *related_contact_id; // string
    char *contact_relation_type_id; // string

} contact_relation_update_dto_t;

contact_relation_update_dto_t *contact_relation_update_dto_create(
    char *contact_id,
    char *related_contact_id,
    char *contact_relation_type_id
);

void contact_relation_update_dto_free(contact_relation_update_dto_t *contact_relation_update_dto);

contact_relation_update_dto_t *contact_relation_update_dto_parseFromJSON(cJSON *contact_relation_update_dtoJSON);

cJSON *contact_relation_update_dto_convertToJSON(contact_relation_update_dto_t *contact_relation_update_dto);

#endif /* _contact_relation_update_dto_H_ */

