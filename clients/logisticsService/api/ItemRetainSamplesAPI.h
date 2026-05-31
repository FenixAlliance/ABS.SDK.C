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
#include "../model/item_retain_sample_create_dto.h"
#include "../model/item_retain_sample_dto_envelope.h"
#include "../model/item_retain_sample_dto_list_envelope.h"
#include "../model/item_retain_sample_update_dto.h"


// Create an item retain sample
//
// Creates a new item retain sample.
//
empty_envelope_t*
ItemRetainSamplesAPI_createItemRetainSampleAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, item_retain_sample_create_dto_t *item_retain_sample_create_dto);


// Delete an item retain sample
//
// Deletes an item retain sample.
//
empty_envelope_t*
ItemRetainSamplesAPI_deleteItemRetainSampleAsync(apiClient_t *apiClient, char *tenantId, char *retainSampleId, char *api_version, char *x_api_version);


// Get item retain sample by ID
//
// Retrieves a specific item retain sample.
//
item_retain_sample_dto_envelope_t*
ItemRetainSamplesAPI_getItemRetainSampleByIdAsync(apiClient_t *apiClient, char *tenantId, char *retainSampleId, char *api_version, char *x_api_version);


// Get all item retain samples
//
// Retrieves all item retain samples for the specified tenant.
//
item_retain_sample_dto_list_envelope_t*
ItemRetainSamplesAPI_getItemRetainSamplesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get item retain samples count
//
// Returns the count of item retain samples.
//
int32_envelope_t*
ItemRetainSamplesAPI_getItemRetainSamplesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update an item retain sample
//
// Updates an existing item retain sample.
//
empty_envelope_t*
ItemRetainSamplesAPI_updateItemRetainSampleAsync(apiClient_t *apiClient, char *tenantId, char *retainSampleId, char *api_version, char *x_api_version, item_retain_sample_update_dto_t *item_retain_sample_update_dto);


