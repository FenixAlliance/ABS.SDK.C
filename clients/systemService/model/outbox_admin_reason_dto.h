/*
 * outbox_admin_reason_dto.h
 *
 * 
 */

#ifndef _outbox_admin_reason_dto_H_
#define _outbox_admin_reason_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct outbox_admin_reason_dto_t outbox_admin_reason_dto_t;




typedef struct outbox_admin_reason_dto_t {
    char *reason; // string

} outbox_admin_reason_dto_t;

outbox_admin_reason_dto_t *outbox_admin_reason_dto_create(
    char *reason
);

void outbox_admin_reason_dto_free(outbox_admin_reason_dto_t *outbox_admin_reason_dto);

outbox_admin_reason_dto_t *outbox_admin_reason_dto_parseFromJSON(cJSON *outbox_admin_reason_dtoJSON);

cJSON *outbox_admin_reason_dto_convertToJSON(outbox_admin_reason_dto_t *outbox_admin_reason_dto);

#endif /* _outbox_admin_reason_dto_H_ */

