/*
 * tenant_create_dto.h
 *
 * 
 */

#ifndef _tenant_create_dto_H_
#define _tenant_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct tenant_create_dto_t tenant_create_dto_t;




typedef struct tenant_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *legal_name; // string
    char *email; // string
    char *phone; // string
    char *web_url; // string
    char *handler; // string
    char *about; // string
    char *slogan; // string
    char *currency_id; // string
    char *duns; // string
    char *tax_id; // string
    char *avatar_url; // string
    char *country_id; // string
    char *state_id; // string
    char *city_id; // string
    char *language_id; // string
    char *timezone_id; // string
    char *business_type_id; // string
    char *business_segment_id; // string
    char *business_industry_id; // string
    char *business_size_id; // string

} tenant_create_dto_t;

tenant_create_dto_t *tenant_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *legal_name,
    char *email,
    char *phone,
    char *web_url,
    char *handler,
    char *about,
    char *slogan,
    char *currency_id,
    char *duns,
    char *tax_id,
    char *avatar_url,
    char *country_id,
    char *state_id,
    char *city_id,
    char *language_id,
    char *timezone_id,
    char *business_type_id,
    char *business_segment_id,
    char *business_industry_id,
    char *business_size_id
);

void tenant_create_dto_free(tenant_create_dto_t *tenant_create_dto);

tenant_create_dto_t *tenant_create_dto_parseFromJSON(cJSON *tenant_create_dtoJSON);

cJSON *tenant_create_dto_convertToJSON(tenant_create_dto_t *tenant_create_dto);

#endif /* _tenant_create_dto_H_ */

