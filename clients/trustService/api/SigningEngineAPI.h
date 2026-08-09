#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/trust_signing_provider_descriptor_dto_collection_query_parameters.h"
#include "../model/trust_signing_provider_descriptor_dto_list_envelope.h"
#include "../model/trust_signing_readiness_dto_envelope.h"
#include "../model/trust_signing_request_dto.h"


// List signing providers
//
// Returns the registered alpha signing providers (Noop / Manual / External). OData-queryable.
//
trust_signing_provider_descriptor_dto_list_envelope_t*
SigningEngineAPI_getProvidersAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, trust_signing_provider_descriptor_dto_collection_query_parameters_t *trust_signing_provider_descriptor_dto_collection_query_parameters);


// Count signing providers
//
// Returns the count of registered alpha signing providers. OData-queryable.
//
int32_envelope_t*
SigningEngineAPI_getProvidersCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, trust_signing_provider_descriptor_dto_collection_query_parameters_t *trust_signing_provider_descriptor_dto_collection_query_parameters);


// Preview signing readiness
//
// Side-effect-free: validates a signing request and reports whether it can proceed and with what policy.
//
trust_signing_readiness_dto_envelope_t*
SigningEngineAPI_previewAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, trust_signing_request_dto_t *trust_signing_request_dto);


