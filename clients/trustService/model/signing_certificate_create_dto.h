/*
 * signing_certificate_create_dto.h
 *
 * 
 */

#ifndef _signing_certificate_create_dto_H_
#define _signing_certificate_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct signing_certificate_create_dto_t signing_certificate_create_dto_t;


// Enum CERTIFICATETYPE for signing_certificate_create_dto

typedef enum  { trustservice_signing_certificate_create_dto_CERTIFICATETYPE_NULL = 0, trustservice_signing_certificate_create_dto_CERTIFICATETYPE_AuthSignedCertificate, trustservice_signing_certificate_create_dto_CERTIFICATETYPE_SelfSignedCertificate, trustservice_signing_certificate_create_dto_CERTIFICATETYPE_AllianceSignedCertificate } trustservice_signing_certificate_create_dto_CERTIFICATETYPE_e;

char* signing_certificate_create_dto_certificate_type_ToString(trustservice_signing_certificate_create_dto_CERTIFICATETYPE_e certificate_type);

trustservice_signing_certificate_create_dto_CERTIFICATETYPE_e signing_certificate_create_dto_certificate_type_FromString(char* certificate_type);



typedef struct signing_certificate_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *title; // string
    char *type; // string
    char *url; // string
    char *csr; // string
    char *public_key; // string
    trustservice_signing_certificate_create_dto_CERTIFICATETYPE_e certificate_type; //enum
    char *contact_id; // string
    char *security_certificate_id; // string

} signing_certificate_create_dto_t;

signing_certificate_create_dto_t *signing_certificate_create_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *type,
    char *url,
    char *csr,
    char *public_key,
    trustservice_signing_certificate_create_dto_CERTIFICATETYPE_e certificate_type,
    char *contact_id,
    char *security_certificate_id
);

void signing_certificate_create_dto_free(signing_certificate_create_dto_t *signing_certificate_create_dto);

signing_certificate_create_dto_t *signing_certificate_create_dto_parseFromJSON(cJSON *signing_certificate_create_dtoJSON);

cJSON *signing_certificate_create_dto_convertToJSON(signing_certificate_create_dto_t *signing_certificate_create_dto);

#endif /* _signing_certificate_create_dto_H_ */

