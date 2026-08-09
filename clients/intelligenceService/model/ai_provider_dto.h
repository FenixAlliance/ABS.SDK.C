/*
 * ai_provider_dto.h
 *
 * 
 */

#ifndef _ai_provider_dto_H_
#define _ai_provider_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ai_provider_dto_t ai_provider_dto_t;




typedef struct ai_provider_dto_t {
    char *provider_key; // string

} ai_provider_dto_t;

ai_provider_dto_t *ai_provider_dto_create(
    char *provider_key
);

void ai_provider_dto_free(ai_provider_dto_t *ai_provider_dto);

ai_provider_dto_t *ai_provider_dto_parseFromJSON(cJSON *ai_provider_dtoJSON);

cJSON *ai_provider_dto_convertToJSON(ai_provider_dto_t *ai_provider_dto);

#endif /* _ai_provider_dto_H_ */

