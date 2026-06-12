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
#include "../model/maintenance_visit_create_dto.h"
#include "../model/maintenance_visit_dto_envelope.h"
#include "../model/maintenance_visit_dto_list_envelope.h"
#include "../model/object.h"
#include "../model/operation.h"


// Create a maintenance visit
//
empty_envelope_t*
MaintenanceVisitsAPI_createMaintenanceVisitAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, maintenance_visit_create_dto_t *maintenance_visit_create_dto);


// Delete a maintenance visit
//
empty_envelope_t*
MaintenanceVisitsAPI_deleteMaintenanceVisitAsync(apiClient_t *apiClient, char *tenantId, char *maintenanceVisitId, char *api_version, char *x_api_version);


// Retrieve a maintenance visit by ID
//
maintenance_visit_dto_envelope_t*
MaintenanceVisitsAPI_getMaintenanceVisitAsync(apiClient_t *apiClient, char *tenantId, char *maintenanceVisitId, char *api_version, char *x_api_version);


// Retrieve maintenance visits
//
maintenance_visit_dto_list_envelope_t*
MaintenanceVisitsAPI_getMaintenanceVisitsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get maintenance visits count
//
int32_envelope_t*
MaintenanceVisitsAPI_getMaintenanceVisitsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Patch a maintenance visit
//
// Partially updates an existing maintenance visit by its unique identifier.
//
empty_envelope_t*
MaintenanceVisitsAPI_patchMaintenanceVisitAsync(apiClient_t *apiClient, char *tenantId, char *maintenanceVisitId, char *api_version, char *x_api_version, list_t *operation);


// Update a maintenance visit
//
empty_envelope_t*
MaintenanceVisitsAPI_updateMaintenanceVisitAsync(apiClient_t *apiClient, char *tenantId, char *maintenanceVisitId, char *api_version, char *x_api_version, object_t *body);


