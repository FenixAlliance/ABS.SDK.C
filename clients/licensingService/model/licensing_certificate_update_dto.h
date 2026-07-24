/*
 * licensing_certificate_update_dto.h
 *
 * 
 */

#ifndef _licensing_certificate_update_dto_H_
#define _licensing_certificate_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct licensing_certificate_update_dto_t licensing_certificate_update_dto_t;




typedef struct licensing_certificate_update_dto_t {
    int expired; //boolean
    int disabled; //boolean

} licensing_certificate_update_dto_t;

licensing_certificate_update_dto_t *licensing_certificate_update_dto_create(
    int expired,
    int disabled
);

void licensing_certificate_update_dto_free(licensing_certificate_update_dto_t *licensing_certificate_update_dto);

licensing_certificate_update_dto_t *licensing_certificate_update_dto_parseFromJSON(cJSON *licensing_certificate_update_dtoJSON);

cJSON *licensing_certificate_update_dto_convertToJSON(licensing_certificate_update_dto_t *licensing_certificate_update_dto);

#endif /* _licensing_certificate_update_dto_H_ */

