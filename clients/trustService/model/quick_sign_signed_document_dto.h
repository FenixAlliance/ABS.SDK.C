/*
 * quick_sign_signed_document_dto.h
 *
 * 
 */

#ifndef _quick_sign_signed_document_dto_H_
#define _quick_sign_signed_document_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct quick_sign_signed_document_dto_t quick_sign_signed_document_dto_t;




typedef struct quick_sign_signed_document_dto_t {
    char *provider_name; // string
    char *signing_certificate_id; // string
    char *signing_profile_id; // string

} quick_sign_signed_document_dto_t;

quick_sign_signed_document_dto_t *quick_sign_signed_document_dto_create(
    char *provider_name,
    char *signing_certificate_id,
    char *signing_profile_id
);

void quick_sign_signed_document_dto_free(quick_sign_signed_document_dto_t *quick_sign_signed_document_dto);

quick_sign_signed_document_dto_t *quick_sign_signed_document_dto_parseFromJSON(cJSON *quick_sign_signed_document_dtoJSON);

cJSON *quick_sign_signed_document_dto_convertToJSON(quick_sign_signed_document_dto_t *quick_sign_signed_document_dto);

#endif /* _quick_sign_signed_document_dto_H_ */

