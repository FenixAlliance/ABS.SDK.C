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
#include "../model/tenant_size_create_dto.h"
#include "../model/tenant_size_dto_envelope.h"
#include "../model/tenant_size_dto_list_envelope.h"
#include "../model/tenant_size_update_dto.h"


// Create a new tenant size
//
// Create a new tenant size
//
empty_envelope_t*
SizesAPI_createTenantSize(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, tenant_size_create_dto_t *tenant_size_create_dto);


// Delete a tenant size
//
// Delete a tenant size
//
empty_envelope_t*
SizesAPI_deleteTenantSize(apiClient_t *apiClient, char *tenantId, char *tenantSizeId, char *api_version, char *x_api_version);


// Retrieve a single tenant size by its ID
//
// Retrieve a single tenant size by its ID
//
tenant_size_dto_envelope_t*
SizesAPI_getTenantSizeById(apiClient_t *apiClient, char *tenantId, char *tenantSizeId, char *api_version, char *x_api_version);


// Retrieve a list of tenant sizes
//
// Retrieve a list of tenant sizes
//
tenant_size_dto_list_envelope_t*
SizesAPI_getTenantSizes(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get the count of tenant sizes
//
// Get the count of tenant sizes
//
int32_envelope_t*
SizesAPI_getTenantSizesCount(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update a tenant size
//
// Update a tenant size
//
empty_envelope_t*
SizesAPI_updateTenantSize(apiClient_t *apiClient, char *tenantId, char *tenantSizeId, char *api_version, char *x_api_version, tenant_size_update_dto_t *tenant_size_update_dto);


