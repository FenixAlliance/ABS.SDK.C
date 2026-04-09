/*
 * security_certificate_dto.h
 *
 * 
 */

#ifndef _security_certificate_dto_H_
#define _security_certificate_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct security_certificate_dto_t security_certificate_dto_t;




typedef struct security_certificate_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *type; // string
    char *expire_period; // string
    int expired; //boolean
    int disabled; //boolean
    char *business_id; // string
    char *csr; // string

} security_certificate_dto_t;

security_certificate_dto_t *security_certificate_dto_create(
    char *id,
    char *timestamp,
    char *type,
    char *expire_period,
    int expired,
    int disabled,
    char *business_id,
    char *csr
);

void security_certificate_dto_free(security_certificate_dto_t *security_certificate_dto);

security_certificate_dto_t *security_certificate_dto_parseFromJSON(cJSON *security_certificate_dtoJSON);

cJSON *security_certificate_dto_convertToJSON(security_certificate_dto_t *security_certificate_dto);

#endif /* _security_certificate_dto_H_ */

