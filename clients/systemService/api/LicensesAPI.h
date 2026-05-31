#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/boolean_envelope.h"
#include "../model/error_envelope.h"
#include "../model/license_attributes_list_envelope.h"
#include "../model/license_key.h"
#include "../model/license_key_request.h"
#include "../model/license_validation_error_list_envelope.h"
#include "../model/string_envelope.h"


string_envelope_t*
LicensesAPI_apiLicensingLicensesGeneratePost(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, license_key_request_t *license_key_request);


license_attributes_list_envelope_t*
LicensesAPI_apiLicensingLicensesValidateAttributesGet(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, license_key_t *license_key);


license_validation_error_list_envelope_t*
LicensesAPI_apiLicensingLicensesValidateErrorsGet(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, license_key_t *license_key);


boolean_envelope_t*
LicensesAPI_apiLicensingLicensesValidateGet(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, license_key_t *license_key);


