/*
 * signing_certificate_dto.h
 *
 * 
 */

#ifndef _signing_certificate_dto_H_
#define _signing_certificate_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct signing_certificate_dto_t signing_certificate_dto_t;


// Enum CERTIFICATETYPE for signing_certificate_dto

typedef enum  { trustservice_signing_certificate_dto_CERTIFICATETYPE_NULL = 0, trustservice_signing_certificate_dto_CERTIFICATETYPE_AuthSignedCertificate, trustservice_signing_certificate_dto_CERTIFICATETYPE_SelfSignedCertificate, trustservice_signing_certificate_dto_CERTIFICATETYPE_AllianceSignedCertificate } trustservice_signing_certificate_dto_CERTIFICATETYPE_e;

char* signing_certificate_dto_certificate_type_ToString(trustservice_signing_certificate_dto_CERTIFICATETYPE_e certificate_type);

trustservice_signing_certificate_dto_CERTIFICATETYPE_e signing_certificate_dto_certificate_type_FromString(char* certificate_type);

// Enum CERTIFICATESTATUS for signing_certificate_dto

typedef enum  { trustservice_signing_certificate_dto_CERTIFICATESTATUS_NULL = 0, trustservice_signing_certificate_dto_CERTIFICATESTATUS_Unknown, trustservice_signing_certificate_dto_CERTIFICATESTATUS_Active, trustservice_signing_certificate_dto_CERTIFICATESTATUS_Expiring, trustservice_signing_certificate_dto_CERTIFICATESTATUS_Expired, trustservice_signing_certificate_dto_CERTIFICATESTATUS_Revoked, trustservice_signing_certificate_dto_CERTIFICATESTATUS_Disabled } trustservice_signing_certificate_dto_CERTIFICATESTATUS_e;

char* signing_certificate_dto_certificate_status_ToString(trustservice_signing_certificate_dto_CERTIFICATESTATUS_e certificate_status);

trustservice_signing_certificate_dto_CERTIFICATESTATUS_e signing_certificate_dto_certificate_status_FromString(char* certificate_status);



typedef struct signing_certificate_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *title; // string
    char *type; // string
    char *url; // string
    char *csr; // string
    char *public_key; // string
    char *signature; // string
    long file_length_in_bits; //numeric
    trustservice_signing_certificate_dto_CERTIFICATETYPE_e certificate_type; //enum
    char *contact_id; // string
    char *tenant_id; // string
    char *user_id; // string
    char *enrollment_id; // string
    char *security_certificate_id; // string
    trustservice_signing_certificate_dto_CERTIFICATESTATUS_e certificate_status; //enum
    char *thumbprint; // string
    char *subject_name; // string
    char *issuer_name; // string
    char *serial_number; // string
    char *not_before_utc; //date time
    char *not_after_utc; //date time
    char *contact_name; // string

} signing_certificate_dto_t;

signing_certificate_dto_t *signing_certificate_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *type,
    char *url,
    char *csr,
    char *public_key,
    char *signature,
    long file_length_in_bits,
    trustservice_signing_certificate_dto_CERTIFICATETYPE_e certificate_type,
    char *contact_id,
    char *tenant_id,
    char *user_id,
    char *enrollment_id,
    char *security_certificate_id,
    trustservice_signing_certificate_dto_CERTIFICATESTATUS_e certificate_status,
    char *thumbprint,
    char *subject_name,
    char *issuer_name,
    char *serial_number,
    char *not_before_utc,
    char *not_after_utc,
    char *contact_name
);

void signing_certificate_dto_free(signing_certificate_dto_t *signing_certificate_dto);

signing_certificate_dto_t *signing_certificate_dto_parseFromJSON(cJSON *signing_certificate_dtoJSON);

cJSON *signing_certificate_dto_convertToJSON(signing_certificate_dto_t *signing_certificate_dto);

#endif /* _signing_certificate_dto_H_ */

