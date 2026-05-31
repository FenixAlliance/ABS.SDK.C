/*
 * license_key_request.h
 *
 * 
 */

#ifndef _license_key_request_H_
#define _license_key_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct license_key_request_t license_key_request_t;

#include "additional_attribute.h"
#include "license_feature.h"

// Enum LICENSETYPE for license_key_request

typedef enum  { systemservice_license_key_request_LICENSETYPE_NULL = 0, systemservice_license_key_request_LICENSETYPE_Trial, systemservice_license_key_request_LICENSETYPE_Standard, systemservice_license_key_request_LICENSETYPE_Enterprise } systemservice_license_key_request_LICENSETYPE_e;

char* license_key_request_license_type_ToString(systemservice_license_key_request_LICENSETYPE_e license_type);

systemservice_license_key_request_LICENSETYPE_e license_key_request_license_type_FromString(char* license_type);



typedef struct license_key_request_t {
    char *user_id; // string
    char *tenant_id; // string
    char *order_id; // string
    char *payment_id; // string
    char *invoice_id; // string
    char *enrollment_id; // string
    char *entitlement_id; // string
    int seats; //numeric
    systemservice_license_key_request_LICENSETYPE_e license_type; //enum
    char *expiration_date; //date time
    list_t *features; //nonprimitive container
    list_t *additional_attributes; //nonprimitive container

} license_key_request_t;

license_key_request_t *license_key_request_create(
    char *user_id,
    char *tenant_id,
    char *order_id,
    char *payment_id,
    char *invoice_id,
    char *enrollment_id,
    char *entitlement_id,
    int seats,
    systemservice_license_key_request_LICENSETYPE_e license_type,
    char *expiration_date,
    list_t *features,
    list_t *additional_attributes
);

void license_key_request_free(license_key_request_t *license_key_request);

license_key_request_t *license_key_request_parseFromJSON(cJSON *license_key_requestJSON);

cJSON *license_key_request_convertToJSON(license_key_request_t *license_key_request);

#endif /* _license_key_request_H_ */

