/*
 * employer_profile_create_dto.h
 *
 * 
 */

#ifndef _employer_profile_create_dto_H_
#define _employer_profile_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct employer_profile_create_dto_t employer_profile_create_dto_t;




typedef struct employer_profile_create_dto_t {
    char *id; // string
    char *timestamp; //date time

} employer_profile_create_dto_t;

employer_profile_create_dto_t *employer_profile_create_dto_create(
    char *id,
    char *timestamp
);

void employer_profile_create_dto_free(employer_profile_create_dto_t *employer_profile_create_dto);

employer_profile_create_dto_t *employer_profile_create_dto_parseFromJSON(cJSON *employer_profile_create_dtoJSON);

cJSON *employer_profile_create_dto_convertToJSON(employer_profile_create_dto_t *employer_profile_create_dto);

#endif /* _employer_profile_create_dto_H_ */

