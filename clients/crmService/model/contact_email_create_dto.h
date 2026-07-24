/*
 * contact_email_create_dto.h
 *
 * 
 */

#ifndef _contact_email_create_dto_H_
#define _contact_email_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct contact_email_create_dto_t contact_email_create_dto_t;




typedef struct contact_email_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *contact_id; // string
    char *address; // string
    char *label; // string
    int is_primary; //boolean

} contact_email_create_dto_t;

contact_email_create_dto_t *contact_email_create_dto_create(
    char *id,
    char *timestamp,
    char *contact_id,
    char *address,
    char *label,
    int is_primary
);

void contact_email_create_dto_free(contact_email_create_dto_t *contact_email_create_dto);

contact_email_create_dto_t *contact_email_create_dto_parseFromJSON(cJSON *contact_email_create_dtoJSON);

cJSON *contact_email_create_dto_convertToJSON(contact_email_create_dto_t *contact_email_create_dto);

#endif /* _contact_email_create_dto_H_ */

