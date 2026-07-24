/*
 * signing_profile_create_dto.h
 *
 * 
 */

#ifndef _signing_profile_create_dto_H_
#define _signing_profile_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct signing_profile_create_dto_t signing_profile_create_dto_t;

#include "contact_create_dto.h"

// Enum SIGNATUREFORMAT for signing_profile_create_dto

typedef enum  { trustservice_signing_profile_create_dto_SIGNATUREFORMAT_NULL = 0, trustservice_signing_profile_create_dto_SIGNATUREFORMAT_Unknown, trustservice_signing_profile_create_dto_SIGNATUREFORMAT_XAdES, trustservice_signing_profile_create_dto_SIGNATUREFORMAT_PAdES, trustservice_signing_profile_create_dto_SIGNATUREFORMAT_CAdES, trustservice_signing_profile_create_dto_SIGNATUREFORMAT_SMIME, trustservice_signing_profile_create_dto_SIGNATUREFORMAT_DetachedXmlDSig, trustservice_signing_profile_create_dto_SIGNATUREFORMAT_Enveloped, trustservice_signing_profile_create_dto_SIGNATUREFORMAT_Other } trustservice_signing_profile_create_dto_SIGNATUREFORMAT_e;

char* signing_profile_create_dto_signature_format_ToString(trustservice_signing_profile_create_dto_SIGNATUREFORMAT_e signature_format);

trustservice_signing_profile_create_dto_SIGNATUREFORMAT_e signing_profile_create_dto_signature_format_FromString(char* signature_format);

// Enum SIGNATUREPURPOSE for signing_profile_create_dto

typedef enum  { trustservice_signing_profile_create_dto_SIGNATUREPURPOSE_NULL = 0, trustservice_signing_profile_create_dto_SIGNATUREPURPOSE_Unknown, trustservice_signing_profile_create_dto_SIGNATUREPURPOSE_RegulatorySubmission, trustservice_signing_profile_create_dto_SIGNATUREPURPOSE_ContractExecution, trustservice_signing_profile_create_dto_SIGNATUREPURPOSE_EmailSigning, trustservice_signing_profile_create_dto_SIGNATUREPURPOSE_InternalApproval, trustservice_signing_profile_create_dto_SIGNATUREPURPOSE_EvidenceSealing, trustservice_signing_profile_create_dto_SIGNATUREPURPOSE_AgentCredential, trustservice_signing_profile_create_dto_SIGNATUREPURPOSE_Other } trustservice_signing_profile_create_dto_SIGNATUREPURPOSE_e;

char* signing_profile_create_dto_signature_purpose_ToString(trustservice_signing_profile_create_dto_SIGNATUREPURPOSE_e signature_purpose);

trustservice_signing_profile_create_dto_SIGNATUREPURPOSE_e signing_profile_create_dto_signature_purpose_FromString(char* signature_purpose);



typedef struct signing_profile_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *type; // string
    char *contact_id; // string
    struct contact_create_dto_t *contact; //model
    char *about; // string
    char *avatar_url; // string
    char *data; // string
    char *data_label; // string
    char *data1; // string
    char *data1_label; // string
    char *data2; // string
    char *data2_label; // string
    char *data3; // string
    char *data3_label; // string
    char *data4; // string
    char *data4_label; // string
    char *data5; // string
    char *data5_label; // string
    char *data6; // string
    char *data6_label; // string
    char *data7; // string
    char *data7_label; // string
    char *data8; // string
    char *data8_label; // string
    char *data9; // string
    char *data9_label; // string
    trustservice_signing_profile_create_dto_SIGNATUREFORMAT_e signature_format; //enum
    trustservice_signing_profile_create_dto_SIGNATUREPURPOSE_e signature_purpose; //enum
    char *digest_algorithm; // string
    char *signature_algorithm; // string
    char *canonicalization_algorithm; // string
    char *policy_identifier; // string
    char *policy_uri; // string
    char *authority_profile; // string
    int is_active; //boolean
    char *default_for_document_type; // string

} signing_profile_create_dto_t;

signing_profile_create_dto_t *signing_profile_create_dto_create(
    char *id,
    char *timestamp,
    char *type,
    char *contact_id,
    contact_create_dto_t *contact,
    char *about,
    char *avatar_url,
    char *data,
    char *data_label,
    char *data1,
    char *data1_label,
    char *data2,
    char *data2_label,
    char *data3,
    char *data3_label,
    char *data4,
    char *data4_label,
    char *data5,
    char *data5_label,
    char *data6,
    char *data6_label,
    char *data7,
    char *data7_label,
    char *data8,
    char *data8_label,
    char *data9,
    char *data9_label,
    trustservice_signing_profile_create_dto_SIGNATUREFORMAT_e signature_format,
    trustservice_signing_profile_create_dto_SIGNATUREPURPOSE_e signature_purpose,
    char *digest_algorithm,
    char *signature_algorithm,
    char *canonicalization_algorithm,
    char *policy_identifier,
    char *policy_uri,
    char *authority_profile,
    int is_active,
    char *default_for_document_type
);

void signing_profile_create_dto_free(signing_profile_create_dto_t *signing_profile_create_dto);

signing_profile_create_dto_t *signing_profile_create_dto_parseFromJSON(cJSON *signing_profile_create_dtoJSON);

cJSON *signing_profile_create_dto_convertToJSON(signing_profile_create_dto_t *signing_profile_create_dto);

#endif /* _signing_profile_create_dto_H_ */

