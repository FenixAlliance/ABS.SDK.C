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
#include "../model/return_request_create_dto.h"
#include "../model/return_request_dto_envelope.h"
#include "../model/return_request_dto_list_envelope.h"
#include "../model/return_request_update_dto.h"


// Create a return request
//
empty_envelope_t*
ReturnRequestsAPI_createReturnRequestAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, return_request_create_dto_t *return_request_create_dto);


// Delete a return request
//
empty_envelope_t*
ReturnRequestsAPI_deleteReturnRequestAsync(apiClient_t *apiClient, char *tenantId, char *returnRequestId, char *api_version, char *x_api_version);


// Retrieve a return request by ID
//
return_request_dto_envelope_t*
ReturnRequestsAPI_getReturnRequestAsync(apiClient_t *apiClient, char *tenantId, char *returnRequestId, char *api_version, char *x_api_version);


// Retrieve return requests
//
return_request_dto_list_envelope_t*
ReturnRequestsAPI_getReturnRequestsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get return requests count
//
int32_envelope_t*
ReturnRequestsAPI_getReturnRequestsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Patch a return request
//
// Partially updates an existing return request by its unique identifier.
//
empty_envelope_t*
ReturnRequestsAPI_patchReturnRequestAsync(apiClient_t *apiClient, char *tenantId, char *returnRequestId, char *api_version, char *x_api_version, list_t *operation);


// Update a return request
//
empty_envelope_t*
ReturnRequestsAPI_updateReturnRequestAsync(apiClient_t *apiClient, char *tenantId, char *returnRequestId, char *api_version, char *x_api_version, return_request_update_dto_t *return_request_update_dto);


