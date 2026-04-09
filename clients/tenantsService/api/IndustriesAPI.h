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
#include "../model/tenant_industry_create_dto.h"
#include "../model/tenant_industry_dto_envelope.h"
#include "../model/tenant_industry_dto_list_envelope.h"
#include "../model/tenant_industry_update_dto.h"


// Create a new tenant industry
//
// Create a new tenant industry
//
empty_envelope_t*
IndustriesAPI_createTenantIndustry(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, tenant_industry_create_dto_t *tenant_industry_create_dto);


// Delete a tenant industry
//
// Delete a tenant industry
//
empty_envelope_t*
IndustriesAPI_deleteTenantIndustry(apiClient_t *apiClient, char *tenantId, char *tenantIndustryId, char *api_version, char *x_api_version);


// Retrieve a list of tenant industries
//
// Retrieve a list of tenant industries
//
tenant_industry_dto_list_envelope_t*
IndustriesAPI_getTenantIndustries(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get the count of tenant industries
//
// Get the count of tenant industries
//
int32_envelope_t*
IndustriesAPI_getTenantIndustriesCount(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Retrieve a single tenant industry by its ID
//
// Retrieve a single tenant industry by its ID
//
tenant_industry_dto_envelope_t*
IndustriesAPI_getTenantIndustryById(apiClient_t *apiClient, char *tenantId, char *tenantIndustryId, char *api_version, char *x_api_version);


// Update a tenant industry
//
// Update a tenant industry
//
empty_envelope_t*
IndustriesAPI_updateTenantIndustry(apiClient_t *apiClient, char *tenantId, char *tenantIndustryId, char *api_version, char *x_api_version, tenant_industry_update_dto_t *tenant_industry_update_dto);


