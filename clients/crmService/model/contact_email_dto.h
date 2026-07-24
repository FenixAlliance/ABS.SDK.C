/*
 * contact_email_dto.h
 *
 * 
 */

#ifndef _contact_email_dto_H_
#define _contact_email_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct contact_email_dto_t contact_email_dto_t;

#include "contact_dto.h"



typedef struct contact_email_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *contact_id; // string
    char *tenant_id; // string
    char *enrollment_id; // string
    char *address; // string
    char *label; // string
    int is_primary; //boolean
    int is_verified; //boolean
    char *verified_timestamp; //date time
    struct contact_dto_t *contact; //model

} contact_email_dto_t;

contact_email_dto_t *contact_email_dto_create(
    char *id,
    char *timestamp,
    char *contact_id,
    char *tenant_id,
    char *enrollment_id,
    char *address,
    char *label,
    int is_primary,
    int is_verified,
    char *verified_timestamp,
    contact_dto_t *contact
);

void contact_email_dto_free(contact_email_dto_t *contact_email_dto);

contact_email_dto_t *contact_email_dto_parseFromJSON(cJSON *contact_email_dtoJSON);

cJSON *contact_email_dto_convertToJSON(contact_email_dto_t *contact_email_dto);

#endif /* _contact_email_dto_H_ */

