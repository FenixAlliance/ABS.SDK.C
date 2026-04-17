/*
 * share_transfer_reason_create_dto.h
 *
 * 
 */

#ifndef _share_transfer_reason_create_dto_H_
#define _share_transfer_reason_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct share_transfer_reason_create_dto_t share_transfer_reason_create_dto_t;




typedef struct share_transfer_reason_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *description; // string

} share_transfer_reason_create_dto_t;

share_transfer_reason_create_dto_t *share_transfer_reason_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description
);

void share_transfer_reason_create_dto_free(share_transfer_reason_create_dto_t *share_transfer_reason_create_dto);

share_transfer_reason_create_dto_t *share_transfer_reason_create_dto_parseFromJSON(cJSON *share_transfer_reason_create_dtoJSON);

cJSON *share_transfer_reason_create_dto_convertToJSON(share_transfer_reason_create_dto_t *share_transfer_reason_create_dto);

#endif /* _share_transfer_reason_create_dto_H_ */

