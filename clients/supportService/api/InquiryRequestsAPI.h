#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/empty_envelope.h"
#include "../model/inquiry_request_create_dto.h"
#include "../model/inquiry_request_dto_envelope.h"
#include "../model/inquiry_request_dto_list_envelope.h"
#include "../model/inquiry_request_update_dto.h"
#include "../model/int32_envelope.h"


// Create an inquiry request
//
empty_envelope_t*
InquiryRequestsAPI_createInquiryRequestAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, inquiry_request_create_dto_t *inquiry_request_create_dto);


// Delete an inquiry request
//
empty_envelope_t*
InquiryRequestsAPI_deleteInquiryRequestAsync(apiClient_t *apiClient, char *tenantId, char *inquiryRequestId, char *api_version, char *x_api_version);


// Retrieve an inquiry request by ID
//
inquiry_request_dto_envelope_t*
InquiryRequestsAPI_getInquiryRequestAsync(apiClient_t *apiClient, char *tenantId, char *inquiryRequestId, char *api_version, char *x_api_version);


// Retrieve inquiry requests
//
inquiry_request_dto_list_envelope_t*
InquiryRequestsAPI_getInquiryRequestsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get inquiry requests count
//
int32_envelope_t*
InquiryRequestsAPI_getInquiryRequestsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update an inquiry request
//
empty_envelope_t*
InquiryRequestsAPI_updateInquiryRequestAsync(apiClient_t *apiClient, char *tenantId, char *inquiryRequestId, char *api_version, char *x_api_version, inquiry_request_update_dto_t *inquiry_request_update_dto);


