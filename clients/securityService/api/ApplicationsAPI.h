#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/business_application_create_dto.h"
#include "../model/business_application_dto_envelope.h"
#include "../model/business_application_dto_list_envelope.h"
#include "../model/business_application_update_dto.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"


// Create a new business application
//
// Creates a new business application for the specified tenant.
//
empty_envelope_t*
ApplicationsAPI_createBusinessApplicationAsync(apiClient_t *apiClient, char *tenantId, business_application_create_dto_t *business_application_create_dto, char *api_version, char *x_api_version);


// Delete a business application
//
// Deletes an existing business application for the specified tenant.
//
empty_envelope_t*
ApplicationsAPI_deleteBusinessApplicationAsync(apiClient_t *apiClient, char *tenantId, char *applicationId, char *api_version, char *x_api_version);


// Get business application by ID
//
// Retrieves a specific business application by its identifier.
//
business_application_dto_envelope_t*
ApplicationsAPI_getBusinessApplicationByIdAsync(apiClient_t *apiClient, char *tenantId, char *applicationId, char *api_version, char *x_api_version);


// Get all business applications
//
// Retrieves all business applications for the specified tenant.
//
business_application_dto_list_envelope_t*
ApplicationsAPI_getBusinessApplicationsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get business applications count
//
// Retrieves the count of business applications for the specified tenant.
//
int32_envelope_t*
ApplicationsAPI_getBusinessApplicationsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update an existing business application
//
// Updates an existing business application for the specified tenant.
//
empty_envelope_t*
ApplicationsAPI_updateBusinessApplicationAsync(apiClient_t *apiClient, char *tenantId, char *applicationId, business_application_update_dto_t *business_application_update_dto, char *api_version, char *x_api_version);


