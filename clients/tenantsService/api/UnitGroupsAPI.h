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
#include "../model/unit_create_dto.h"
#include "../model/unit_dto_envelope.h"
#include "../model/unit_dto_list_envelope.h"
#include "../model/unit_group_create_dto.h"
#include "../model/unit_group_dto_envelope.h"
#include "../model/unit_group_dto_list_envelope.h"
#include "../model/unit_group_update_dto.h"
#include "../model/unit_update_dto.h"


// Create a unit within a unit group
//
// Creates a new unit within a specific unit group.
//
empty_envelope_t*
UnitGroupsAPI_createUnitAsync(apiClient_t *apiClient, char *tenantId, char *unitGroupId, char *api_version, char *x_api_version, unit_create_dto_t *unit_create_dto);


// Create a new unit group
//
// Creates a new unit group for the specified tenant.
//
empty_envelope_t*
UnitGroupsAPI_createUnitGroupAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, unit_group_create_dto_t *unit_group_create_dto);


// Delete a unit from a unit group
//
// Deletes a unit from a specific unit group.
//
empty_envelope_t*
UnitGroupsAPI_deleteUnitAsync(apiClient_t *apiClient, char *tenantId, char *unitGroupId, char *unitId, char *api_version, char *x_api_version);


// Delete a unit group
//
// Deletes a unit group by its unique identifier.
//
empty_envelope_t*
UnitGroupsAPI_deleteUnitGroupAsync(apiClient_t *apiClient, char *tenantId, char *unitGroupId, char *api_version, char *x_api_version);


// Retrieve a unit by ID within a unit group
//
// Retrieves a single unit by its unique identifier within a specific unit group.
//
unit_dto_envelope_t*
UnitGroupsAPI_getUnitAsync(apiClient_t *apiClient, char *tenantId, char *unitGroupId, char *unitId, char *api_version, char *x_api_version);


// Retrieve a unit group by ID
//
// Retrieves a single unit group by its unique identifier.
//
unit_group_dto_envelope_t*
UnitGroupsAPI_getUnitGroupAsync(apiClient_t *apiClient, char *tenantId, char *unitGroupId, char *api_version, char *x_api_version);


// Retrieve a list of unit groups
//
// Retrieves a list of unit groups for the specified tenant with OData query support.
//
unit_group_dto_list_envelope_t*
UnitGroupsAPI_getUnitGroupsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get the count of unit groups
//
// Returns the total count of unit groups for the specified tenant with OData query support.
//
int32_envelope_t*
UnitGroupsAPI_getUnitGroupsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Retrieve units for a unit group
//
// Retrieves a list of units belonging to a specific unit group.
//
unit_dto_list_envelope_t*
UnitGroupsAPI_getUnitsAsync(apiClient_t *apiClient, char *tenantId, char *unitGroupId, char *api_version, char *x_api_version);


// Get the count of units in a unit group
//
// Returns the total count of units in a specific unit group.
//
int32_envelope_t*
UnitGroupsAPI_getUnitsCountAsync(apiClient_t *apiClient, char *tenantId, char *unitGroupId, char *api_version, char *x_api_version);


// Update a unit within a unit group
//
// Updates an existing unit within a specific unit group.
//
empty_envelope_t*
UnitGroupsAPI_updateUnitAsync(apiClient_t *apiClient, char *tenantId, char *unitGroupId, char *unitId, char *api_version, char *x_api_version, unit_update_dto_t *unit_update_dto);


// Update a unit group
//
// Updates an existing unit group by its unique identifier.
//
empty_envelope_t*
UnitGroupsAPI_updateUnitGroupAsync(apiClient_t *apiClient, char *tenantId, char *unitGroupId, char *api_version, char *x_api_version, unit_group_update_dto_t *unit_group_update_dto);


