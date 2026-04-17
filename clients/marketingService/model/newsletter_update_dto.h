/*
 * newsletter_update_dto.h
 *
 * 
 */

#ifndef _newsletter_update_dto_H_
#define _newsletter_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct newsletter_update_dto_t newsletter_update_dto_t;




typedef struct newsletter_update_dto_t {
    char *code; // string
    char *title; // string
    char *name; // string

} newsletter_update_dto_t;

newsletter_update_dto_t *newsletter_update_dto_create(
    char *code,
    char *title,
    char *name
);

void newsletter_update_dto_free(newsletter_update_dto_t *newsletter_update_dto);

newsletter_update_dto_t *newsletter_update_dto_parseFromJSON(cJSON *newsletter_update_dtoJSON);

cJSON *newsletter_update_dto_convertToJSON(newsletter_update_dto_t *newsletter_update_dto);

#endif /* _newsletter_update_dto_H_ */

