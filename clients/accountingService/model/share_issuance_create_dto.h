/*
 * share_issuance_create_dto.h
 *
 * 
 */

#ifndef _share_issuance_create_dto_H_
#define _share_issuance_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct share_issuance_create_dto_t share_issuance_create_dto_t;




typedef struct share_issuance_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *tenant_id; // string
    char *enrollment_id; // string
    int unit_price; //numeric
    int quantity; //numeric
    char *currency_id; // string

} share_issuance_create_dto_t;

share_issuance_create_dto_t *share_issuance_create_dto_create(
    char *id,
    char *timestamp,
    char *tenant_id,
    char *enrollment_id,
    int unit_price,
    int quantity,
    char *currency_id
);

void share_issuance_create_dto_free(share_issuance_create_dto_t *share_issuance_create_dto);

share_issuance_create_dto_t *share_issuance_create_dto_parseFromJSON(cJSON *share_issuance_create_dtoJSON);

cJSON *share_issuance_create_dto_convertToJSON(share_issuance_create_dto_t *share_issuance_create_dto);

#endif /* _share_issuance_create_dto_H_ */

