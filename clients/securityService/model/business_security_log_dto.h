/*
 * business_security_log_dto.h
 *
 * 
 */

#ifndef _business_security_log_dto_H_
#define _business_security_log_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct business_security_log_dto_t business_security_log_dto_t;




typedef struct business_security_log_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *type; // string
    char *message; // string
    char *security_event; // string
    int requires_attention; //boolean
    char *business_id; // string

} business_security_log_dto_t;

business_security_log_dto_t *business_security_log_dto_create(
    char *id,
    char *timestamp,
    char *type,
    char *message,
    char *security_event,
    int requires_attention,
    char *business_id
);

void business_security_log_dto_free(business_security_log_dto_t *business_security_log_dto);

business_security_log_dto_t *business_security_log_dto_parseFromJSON(cJSON *business_security_log_dtoJSON);

cJSON *business_security_log_dto_convertToJSON(business_security_log_dto_t *business_security_log_dto);

#endif /* _business_security_log_dto_H_ */

