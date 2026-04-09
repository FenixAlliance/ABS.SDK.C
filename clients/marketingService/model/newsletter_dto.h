/*
 * newsletter_dto.h
 *
 * 
 */

#ifndef _newsletter_dto_H_
#define _newsletter_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct newsletter_dto_t newsletter_dto_t;




typedef struct newsletter_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *code; // string
    char *title; // string
    char *tenant_id; // string
    char *enrollment_id; // string

} newsletter_dto_t;

newsletter_dto_t *newsletter_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *code,
    char *title,
    char *tenant_id,
    char *enrollment_id
);

void newsletter_dto_free(newsletter_dto_t *newsletter_dto);

newsletter_dto_t *newsletter_dto_parseFromJSON(cJSON *newsletter_dtoJSON);

cJSON *newsletter_dto_convertToJSON(newsletter_dto_t *newsletter_dto);

#endif /* _newsletter_dto_H_ */

