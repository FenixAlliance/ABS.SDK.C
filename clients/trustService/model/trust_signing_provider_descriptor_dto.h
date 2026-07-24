/*
 * trust_signing_provider_descriptor_dto.h
 *
 * 
 */

#ifndef _trust_signing_provider_descriptor_dto_H_
#define _trust_signing_provider_descriptor_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct trust_signing_provider_descriptor_dto_t trust_signing_provider_descriptor_dto_t;




typedef struct trust_signing_provider_descriptor_dto_t {
    char *name; // string
    char *display_name; // string
    char *mode; // string
    int can_record_outcome; //boolean
    char *description; // string

} trust_signing_provider_descriptor_dto_t;

trust_signing_provider_descriptor_dto_t *trust_signing_provider_descriptor_dto_create(
    char *name,
    char *display_name,
    char *mode,
    int can_record_outcome,
    char *description
);

void trust_signing_provider_descriptor_dto_free(trust_signing_provider_descriptor_dto_t *trust_signing_provider_descriptor_dto);

trust_signing_provider_descriptor_dto_t *trust_signing_provider_descriptor_dto_parseFromJSON(cJSON *trust_signing_provider_descriptor_dtoJSON);

cJSON *trust_signing_provider_descriptor_dto_convertToJSON(trust_signing_provider_descriptor_dto_t *trust_signing_provider_descriptor_dto);

#endif /* _trust_signing_provider_descriptor_dto_H_ */

