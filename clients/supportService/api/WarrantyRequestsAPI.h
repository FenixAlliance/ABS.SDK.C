#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/operation.h"
#include "../model/warranty_request_create_dto.h"
#include "../model/warranty_request_dto_envelope.h"
#include "../model/warranty_request_dto_list_envelope.h"
#include "../model/warranty_request_update_dto.h"


// Create a warranty request
//
empty_envelope_t*
WarrantyRequestsAPI_createWarrantyRequestAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, warranty_request_create_dto_t *warranty_request_create_dto);


// Delete a warranty request
//
empty_envelope_t*
WarrantyRequestsAPI_deleteWarrantyRequestAsync(apiClient_t *apiClient, char *tenantId, char *warrantyRequestId, char *api_version, char *x_api_version);


// Retrieve a warranty request by ID
//
warranty_request_dto_envelope_t*
WarrantyRequestsAPI_getWarrantyRequestAsync(apiClient_t *apiClient, char *tenantId, char *warrantyRequestId, char *api_version, char *x_api_version);


// Retrieve warranty requests
//
warranty_request_dto_list_envelope_t*
WarrantyRequestsAPI_getWarrantyRequestsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get warranty requests count
//
int32_envelope_t*
WarrantyRequestsAPI_getWarrantyRequestsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Patch a warranty request
//
// Partially updates an existing warranty request by its unique identifier.
//
empty_envelope_t*
WarrantyRequestsAPI_patchWarrantyRequestAsync(apiClient_t *apiClient, char *tenantId, char *warrantyRequestId, char *api_version, char *x_api_version, list_t *operation);


// Update a warranty request
//
empty_envelope_t*
WarrantyRequestsAPI_updateWarrantyRequestAsync(apiClient_t *apiClient, char *tenantId, char *warrantyRequestId, char *api_version, char *x_api_version, warranty_request_update_dto_t *warranty_request_update_dto);


