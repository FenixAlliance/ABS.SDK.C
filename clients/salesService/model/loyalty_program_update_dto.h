/*
 * loyalty_program_update_dto.h
 *
 * 
 */

#ifndef _loyalty_program_update_dto_H_
#define _loyalty_program_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct loyalty_program_update_dto_t loyalty_program_update_dto_t;




typedef struct loyalty_program_update_dto_t {
    char *title; // string
    char *description; // string
    char *price_list_id; // string

} loyalty_program_update_dto_t;

loyalty_program_update_dto_t *loyalty_program_update_dto_create(
    char *title,
    char *description,
    char *price_list_id
);

void loyalty_program_update_dto_free(loyalty_program_update_dto_t *loyalty_program_update_dto);

loyalty_program_update_dto_t *loyalty_program_update_dto_parseFromJSON(cJSON *loyalty_program_update_dtoJSON);

cJSON *loyalty_program_update_dto_convertToJSON(loyalty_program_update_dto_t *loyalty_program_update_dto);

#endif /* _loyalty_program_update_dto_H_ */

