/*
 * payment_mode_dto.h
 *
 * 
 */

#ifndef _payment_mode_dto_H_
#define _payment_mode_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct payment_mode_dto_t payment_mode_dto_t;




typedef struct payment_mode_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *description; // string
    char *tenant_id; // string
    char *enrollment_id; // string

} payment_mode_dto_t;

payment_mode_dto_t *payment_mode_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description,
    char *tenant_id,
    char *enrollment_id
);

void payment_mode_dto_free(payment_mode_dto_t *payment_mode_dto);

payment_mode_dto_t *payment_mode_dto_parseFromJSON(cJSON *payment_mode_dtoJSON);

cJSON *payment_mode_dto_convertToJSON(payment_mode_dto_t *payment_mode_dto);

#endif /* _payment_mode_dto_H_ */

