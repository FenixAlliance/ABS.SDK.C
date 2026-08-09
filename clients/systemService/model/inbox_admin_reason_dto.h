/*
 * inbox_admin_reason_dto.h
 *
 * 
 */

#ifndef _inbox_admin_reason_dto_H_
#define _inbox_admin_reason_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inbox_admin_reason_dto_t inbox_admin_reason_dto_t;




typedef struct inbox_admin_reason_dto_t {
    char *reason; // string

} inbox_admin_reason_dto_t;

inbox_admin_reason_dto_t *inbox_admin_reason_dto_create(
    char *reason
);

void inbox_admin_reason_dto_free(inbox_admin_reason_dto_t *inbox_admin_reason_dto);

inbox_admin_reason_dto_t *inbox_admin_reason_dto_parseFromJSON(cJSON *inbox_admin_reason_dtoJSON);

cJSON *inbox_admin_reason_dto_convertToJSON(inbox_admin_reason_dto_t *inbox_admin_reason_dto);

#endif /* _inbox_admin_reason_dto_H_ */

