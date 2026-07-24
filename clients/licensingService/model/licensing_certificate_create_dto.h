/*
 * licensing_certificate_create_dto.h
 *
 * 
 */

#ifndef _licensing_certificate_create_dto_H_
#define _licensing_certificate_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct licensing_certificate_create_dto_t licensing_certificate_create_dto_t;




typedef struct licensing_certificate_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *type; // string
    char *contact_id; // string
    char *csr; // string

} licensing_certificate_create_dto_t;

licensing_certificate_create_dto_t *licensing_certificate_create_dto_create(
    char *id,
    char *timestamp,
    char *type,
    char *contact_id,
    char *csr
);

void licensing_certificate_create_dto_free(licensing_certificate_create_dto_t *licensing_certificate_create_dto);

licensing_certificate_create_dto_t *licensing_certificate_create_dto_parseFromJSON(cJSON *licensing_certificate_create_dtoJSON);

cJSON *licensing_certificate_create_dto_convertToJSON(licensing_certificate_create_dto_t *licensing_certificate_create_dto);

#endif /* _licensing_certificate_create_dto_H_ */

