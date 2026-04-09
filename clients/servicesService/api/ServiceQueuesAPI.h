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
#include "../model/service_queue_create_dto.h"
#include "../model/service_queue_dto_envelope.h"
#include "../model/service_queue_dto_i_read_only_list_envelope.h"
#include "../model/service_queue_update_dto.h"


// Create a service queue
//
// Creates a new service queue for the specified tenant.
//
envelope_t*
ServiceQueuesAPI_createServiceQueueAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, service_queue_create_dto_t *service_queue_create_dto);


// Delete a service queue
//
// Deletes a service queue by its identifier.
//
envelope_t*
ServiceQueuesAPI_deleteServiceQueueAsync(apiClient_t *apiClient, char *tenantId, char *serviceQueueId, char *api_version, char *x_api_version);


// Get a service queue by ID
//
// Retrieves a service queue by its identifier.
//
service_queue_dto_envelope_t*
ServiceQueuesAPI_getServiceQueueByIdAsync(apiClient_t *apiClient, char *tenantId, char *serviceQueueId, char *api_version, char *x_api_version);


// Get all service queues
//
// Retrieves all service queues for the specified tenant.
//
service_queue_dto_i_read_only_list_envelope_t*
ServiceQueuesAPI_getServiceQueuesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get service queues count
//
// Returns the count of service queues for the specified tenant.
//
int32_envelope_t*
ServiceQueuesAPI_getServiceQueuesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update a service queue
//
// Updates an existing service queue.
//
envelope_t*
ServiceQueuesAPI_updateServiceQueueAsync(apiClient_t *apiClient, char *tenantId, char *serviceQueueId, char *api_version, char *x_api_version, service_queue_update_dto_t *service_queue_update_dto);


