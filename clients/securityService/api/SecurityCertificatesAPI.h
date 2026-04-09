#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/security_certificate_dto_list_envelope.h"


// Get security certificates
//
// Retrieves security certificates for the specified tenant.
//
security_certificate_dto_list_envelope_t*
SecurityCertificatesAPI_getSecurityCertificatesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get security certificates count
//
// Retrieves the count of security certificates for the specified tenant.
//
int32_envelope_t*
SecurityCertificatesAPI_getSecurityCertificatesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


