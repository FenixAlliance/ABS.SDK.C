#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/envelope.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/service_level_agreement_create_dto.h"
#include "../model/service_level_agreement_dto_envelope.h"
#include "../model/service_level_agreement_dto_i_read_only_list_envelope.h"
#include "../model/service_level_agreement_update_dto.h"


// Create a service level agreement
//
// Creates a new service level agreement for the specified tenant.
//
envelope_t*
ServiceLevelAgreementsAPI_createServiceLevelAgreementAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, service_level_agreement_create_dto_t *service_level_agreement_create_dto);


// Delete a service level agreement
//
// Deletes a service level agreement by its identifier.
//
envelope_t*
ServiceLevelAgreementsAPI_deleteServiceLevelAgreementAsync(apiClient_t *apiClient, char *tenantId, char *serviceLevelAgreementId, char *api_version, char *x_api_version);


// Get a service level agreement by ID
//
// Retrieves a service level agreement by its identifier.
//
service_level_agreement_dto_envelope_t*
ServiceLevelAgreementsAPI_getServiceLevelAgreementByIdAsync(apiClient_t *apiClient, char *tenantId, char *serviceLevelAgreementId, char *api_version, char *x_api_version);


// Get all service level agreements
//
// Retrieves all service level agreements for the specified tenant.
//
service_level_agreement_dto_i_read_only_list_envelope_t*
ServiceLevelAgreementsAPI_getServiceLevelAgreementsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get service level agreements count
//
// Returns the count of service level agreements for the specified tenant.
//
int32_envelope_t*
ServiceLevelAgreementsAPI_getServiceLevelAgreementsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update a service level agreement
//
// Updates an existing service level agreement.
//
envelope_t*
ServiceLevelAgreementsAPI_updateServiceLevelAgreementAsync(apiClient_t *apiClient, char *tenantId, char *serviceLevelAgreementId, char *api_version, char *x_api_version, service_level_agreement_update_dto_t *service_level_agreement_update_dto);


