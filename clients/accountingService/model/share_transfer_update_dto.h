/*
 * share_transfer_update_dto.h
 *
 * 
 */

#ifndef _share_transfer_update_dto_H_
#define _share_transfer_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct share_transfer_update_dto_t share_transfer_update_dto_t;




typedef struct share_transfer_update_dto_t {
    char *description; // string
    double value; //numeric
    char *new_share_holder_id; // string
    char *former_share_holder_id; // string
    char *share_transfer_reason_id; // string
    char *enrollment_id; // string
    char *tenant_id; // string

} share_transfer_update_dto_t;

share_transfer_update_dto_t *share_transfer_update_dto_create(
    char *description,
    double value,
    char *new_share_holder_id,
    char *former_share_holder_id,
    char *share_transfer_reason_id,
    char *enrollment_id,
    char *tenant_id
);

void share_transfer_update_dto_free(share_transfer_update_dto_t *share_transfer_update_dto);

share_transfer_update_dto_t *share_transfer_update_dto_parseFromJSON(cJSON *share_transfer_update_dtoJSON);

cJSON *share_transfer_update_dto_convertToJSON(share_transfer_update_dto_t *share_transfer_update_dto);

#endif /* _share_transfer_update_dto_H_ */

