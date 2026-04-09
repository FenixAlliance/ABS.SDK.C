/*
 * billing_profile_dto.h
 *
 * 
 */

#ifndef _billing_profile_dto_H_
#define _billing_profile_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct billing_profile_dto_t billing_profile_dto_t;


// Enum TAXPAYERTYPE for billing_profile_dto

typedef enum  { accountingservice_billing_profile_dto_TAXPAYERTYPE_NULL = 0, accountingservice_billing_profile_dto_TAXPAYERTYPE_Individual, accountingservice_billing_profile_dto_TAXPAYERTYPE_Business } accountingservice_billing_profile_dto_TAXPAYERTYPE_e;

char* billing_profile_dto_tax_payer_type_ToString(accountingservice_billing_profile_dto_TAXPAYERTYPE_e tax_payer_type);

accountingservice_billing_profile_dto_TAXPAYERTYPE_e billing_profile_dto_tax_payer_type_FromString(char* tax_payer_type);



typedef struct billing_profile_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *tenant_id; // string
    char *contact_id; // string
    char *enrollment_id; // string
    char *about; // string
    int verified; //boolean
    int submitted; //boolean
    char *avatar_url; // string
    char *qualified_name; // string
    char *verification_timestamp; //date time
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
    char *tax_id; // string
    char *email; // string
    char *phone; // string
    char *address; // string
    char *address1; // string
    char *address2; // string
    char *postal_code; // string
    char *business_name; // string
    char *commercial_name; // string
    char *ticker; // string
    char *duns; // string
    int is_public_company; //boolean
    int is_facta_customer; //boolean
    accountingservice_billing_profile_dto_TAXPAYERTYPE_e tax_payer_type; //enum
    char *country_id; // string
    char *state_id; // string
    char *city_id; // string
    char *fiscal_identification_type_id; // string
    char *fiscal_authority_id; // string
    char *fiscal_regime_id; // string
    char *contact_name; // string
    char *fiscal_authority_name; // string
    char *country_name; // string

} billing_profile_dto_t;

billing_profile_dto_t *billing_profile_dto_create(
    char *id,
    char *timestamp,
    char *tenant_id,
    char *contact_id,
    char *enrollment_id,
    char *about,
    int verified,
    int submitted,
    char *avatar_url,
    char *qualified_name,
    char *verification_timestamp,
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
    char *tax_id,
    char *email,
    char *phone,
    char *address,
    char *address1,
    char *address2,
    char *postal_code,
    char *business_name,
    char *commercial_name,
    char *ticker,
    char *duns,
    int is_public_company,
    int is_facta_customer,
    accountingservice_billing_profile_dto_TAXPAYERTYPE_e tax_payer_type,
    char *country_id,
    char *state_id,
    char *city_id,
    char *fiscal_identification_type_id,
    char *fiscal_authority_id,
    char *fiscal_regime_id,
    char *contact_name,
    char *fiscal_authority_name,
    char *country_name
);

void billing_profile_dto_free(billing_profile_dto_t *billing_profile_dto);

billing_profile_dto_t *billing_profile_dto_parseFromJSON(cJSON *billing_profile_dtoJSON);

cJSON *billing_profile_dto_convertToJSON(billing_profile_dto_t *billing_profile_dto);

#endif /* _billing_profile_dto_H_ */

