/*
 * billing_profile_update_dto.h
 *
 * 
 */

#ifndef _billing_profile_update_dto_H_
#define _billing_profile_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct billing_profile_update_dto_t billing_profile_update_dto_t;




typedef struct billing_profile_update_dto_t {
    char *contact_id; // string
    char *tax_id; // string
    char *phone; // string
    char *email; // string
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
    char *country_id; // string
    char *state_id; // string
    char *city_id; // string
    char *fiscal_identification_type_id; // string
    char *fiscal_authority_id; // string
    char *fiscal_regime_id; // string

} billing_profile_update_dto_t;

billing_profile_update_dto_t *billing_profile_update_dto_create(
    char *contact_id,
    char *tax_id,
    char *phone,
    char *email,
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
    char *country_id,
    char *state_id,
    char *city_id,
    char *fiscal_identification_type_id,
    char *fiscal_authority_id,
    char *fiscal_regime_id
);

void billing_profile_update_dto_free(billing_profile_update_dto_t *billing_profile_update_dto);

billing_profile_update_dto_t *billing_profile_update_dto_parseFromJSON(cJSON *billing_profile_update_dtoJSON);

cJSON *billing_profile_update_dto_convertToJSON(billing_profile_update_dto_t *billing_profile_update_dto);

#endif /* _billing_profile_update_dto_H_ */

