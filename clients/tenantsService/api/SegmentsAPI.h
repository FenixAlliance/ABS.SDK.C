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
#include "../model/tenant_segment_create_dto.h"
#include "../model/tenant_segment_dto_envelope.h"
#include "../model/tenant_segment_dto_list_envelope.h"
#include "../model/tenant_segment_update_dto.h"


// Create a new tenant segment
//
// Create a new tenant segment
//
empty_envelope_t*
SegmentsAPI_createTenantSegment(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, tenant_segment_create_dto_t *tenant_segment_create_dto);


// Delete a tenant segment
//
// Delete a tenant segment
//
empty_envelope_t*
SegmentsAPI_deleteTenantSegment(apiClient_t *apiClient, char *tenantId, char *tenantSegmentId, char *api_version, char *x_api_version);


// Retrieve a single tenant segment by its ID
//
// Retrieve a single tenant segment by its ID
//
tenant_segment_dto_envelope_t*
SegmentsAPI_getTenantSegmentById(apiClient_t *apiClient, char *tenantId, char *tenantSegmentId, char *api_version, char *x_api_version);


// Retrieve a list of tenant segments
//
// Retrieve a list of tenant segments
//
tenant_segment_dto_list_envelope_t*
SegmentsAPI_getTenantSegments(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get the count of tenant segments
//
// Get the count of tenant segments
//
int32_envelope_t*
SegmentsAPI_getTenantSegmentsCount(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update a tenant segment
//
// Update a tenant segment
//
empty_envelope_t*
SegmentsAPI_updateTenantSegment(apiClient_t *apiClient, char *tenantId, char *tenantSegmentId, char *api_version, char *x_api_version, tenant_segment_update_dto_t *tenant_segment_update_dto);


