#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/create_provider_webhook_registration_request.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/payment_provider_registration_dto_collection_query_parameters.h"
#include "../model/payment_provider_registration_dto_list_envelope.h"
#include "../model/provider_webhook_registration_created_dto_envelope.h"


// Provisions a provider webhook registration
//
// Stores the BYO signing secret in the tenant options store, creates + activates the registration, and reveals the one-time plaintext webhook key plus its fully-composed inbound URL.
//
provider_webhook_registration_created_dto_envelope_t*
PaymentProviderRegistrationsAPI_createAsync(apiClient_t *apiClient, char *tenantId, create_provider_webhook_registration_request_t *create_provider_webhook_registration_request);


// Lists the tenant's provider registrations
//
// Gets all provider registrations for the current tenant with OData support (no secret is ever returned).
//
payment_provider_registration_dto_list_envelope_t*
PaymentProviderRegistrationsAPI_getAsync(apiClient_t *apiClient, char *tenantId, payment_provider_registration_dto_collection_query_parameters_t *payment_provider_registration_dto_collection_query_parameters);


// Counts the tenant's provider registrations
//
// Gets the count of provider registrations for the current tenant (OData sibling of the list).
//
int32_envelope_t*
PaymentProviderRegistrationsAPI_getCountAsync(apiClient_t *apiClient, char *tenantId, payment_provider_registration_dto_collection_query_parameters_t *payment_provider_registration_dto_collection_query_parameters);


// Rotates a registration's webhook key
//
// Mints a fresh webhook key (invalidating the previous one) and reveals it once, plus its composed URL.
//
provider_webhook_registration_created_dto_envelope_t*
PaymentProviderRegistrationsAPI_rotateKeyAsync(apiClient_t *apiClient, char *tenantId, char *registrationId);


