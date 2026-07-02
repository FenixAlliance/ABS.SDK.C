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


// Enum KIND for tenant_create_dto

typedef enum  { systemservice_tenant_create_dto_KIND_NULL = 0, systemservice_tenant_create_dto_KIND_Organization, systemservice_tenant_create_dto_KIND_Individual } systemservice_tenant_create_dto_KIND_e;

char* tenant_create_dto_kind_ToString(systemservice_tenant_create_dto_KIND_e kind);

systemservice_tenant_create_dto_KIND_e tenant_create_dto_kind_FromString(char* kind);



typedef struct tenant_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    systemservice_tenant_create_dto_KIND_e kind; //enum
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
    systemservice_tenant_create_dto_KIND_e kind,
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

