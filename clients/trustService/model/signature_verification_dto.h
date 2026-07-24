/*
 * signature_verification_dto.h
 *
 * 
 */

#ifndef _signature_verification_dto_H_
#define _signature_verification_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct signature_verification_dto_t signature_verification_dto_t;




typedef struct signature_verification_dto_t {
    int is_valid; //boolean
    char *method; // string
    char *signer_subject; // string
    char *signer_thumbprint; // string
    list_t *issues; //primitive container

} signature_verification_dto_t;

signature_verification_dto_t *signature_verification_dto_create(
    int is_valid,
    char *method,
    char *signer_subject,
    char *signer_thumbprint,
    list_t *issues
);

void signature_verification_dto_free(signature_verification_dto_t *signature_verification_dto);

signature_verification_dto_t *signature_verification_dto_parseFromJSON(cJSON *signature_verification_dtoJSON);

cJSON *signature_verification_dto_convertToJSON(signature_verification_dto_t *signature_verification_dto);

#endif /* _signature_verification_dto_H_ */

