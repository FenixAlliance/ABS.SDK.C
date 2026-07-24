/*
 * trust_artifact_reference_dto.h
 *
 * 
 */

#ifndef _trust_artifact_reference_dto_H_
#define _trust_artifact_reference_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct trust_artifact_reference_dto_t trust_artifact_reference_dto_t;




typedef struct trust_artifact_reference_dto_t {
    char *storage_object_id; // string
    char *storage_key; // string
    char *storage_provider_key; // string
    char *sha256; // string
    char *content_type; // string
    long length; //numeric
    char *mutability; // string

} trust_artifact_reference_dto_t;

trust_artifact_reference_dto_t *trust_artifact_reference_dto_create(
    char *storage_object_id,
    char *storage_key,
    char *storage_provider_key,
    char *sha256,
    char *content_type,
    long length,
    char *mutability
);

void trust_artifact_reference_dto_free(trust_artifact_reference_dto_t *trust_artifact_reference_dto);

trust_artifact_reference_dto_t *trust_artifact_reference_dto_parseFromJSON(cJSON *trust_artifact_reference_dtoJSON);

cJSON *trust_artifact_reference_dto_convertToJSON(trust_artifact_reference_dto_t *trust_artifact_reference_dto);

#endif /* _trust_artifact_reference_dto_H_ */

