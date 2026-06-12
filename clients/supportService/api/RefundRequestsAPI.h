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
#include "../model/refund_request_create_dto.h"
#include "../model/refund_request_dto_envelope.h"
#include "../model/refund_request_dto_list_envelope.h"
#include "../model/refund_request_update_dto.h"


// Create a refund request
//
empty_envelope_t*
RefundRequestsAPI_createRefundRequestAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, refund_request_create_dto_t *refund_request_create_dto);


// Delete a refund request
//
empty_envelope_t*
RefundRequestsAPI_deleteRefundRequestAsync(apiClient_t *apiClient, char *tenantId, char *refundRequestId, char *api_version, char *x_api_version);


// Retrieve a refund request by ID
//
refund_request_dto_envelope_t*
RefundRequestsAPI_getRefundRequestAsync(apiClient_t *apiClient, char *tenantId, char *refundRequestId, char *api_version, char *x_api_version);


// Retrieve refund requests
//
refund_request_dto_list_envelope_t*
RefundRequestsAPI_getRefundRequestsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get refund requests count
//
int32_envelope_t*
RefundRequestsAPI_getRefundRequestsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Patch a refund request
//
// Partially updates an existing refund request by its unique identifier.
//
empty_envelope_t*
RefundRequestsAPI_patchRefundRequestAsync(apiClient_t *apiClient, char *tenantId, char *refundRequestId, char *api_version, char *x_api_version, list_t *operation);


// Update a refund request
//
empty_envelope_t*
RefundRequestsAPI_updateRefundRequestAsync(apiClient_t *apiClient, char *tenantId, char *refundRequestId, char *api_version, char *x_api_version, refund_request_update_dto_t *refund_request_update_dto);


