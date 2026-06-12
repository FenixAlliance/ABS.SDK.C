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
#include "../model/loyalty_program_create_dto.h"
#include "../model/loyalty_program_dto_envelope.h"
#include "../model/loyalty_program_dto_list_envelope.h"
#include "../model/loyalty_program_update_dto.h"
#include "../model/operation.h"


// Get loyalty programs count
//
// Returns the total count of loyalty programs for the specified tenant with OData filter support.
//
int32_envelope_t*
LoyaltyProgramsAPI_countLoyaltyProgramsAsync(apiClient_t *apiClient, char *tenantId);


// Create a loyalty program
//
// Creates a new loyalty program for the specified tenant.
//
empty_envelope_t*
LoyaltyProgramsAPI_createLoyaltyProgramAsync(apiClient_t *apiClient, char *tenantId, loyalty_program_create_dto_t *loyalty_program_create_dto);


// Delete a loyalty program
//
// Deletes an existing loyalty program by its unique identifier.
//
empty_envelope_t*
LoyaltyProgramsAPI_deleteLoyaltyProgramAsync(apiClient_t *apiClient, char *tenantId, char *loyaltyProgramId);


// Get loyalty program by ID
//
// Retrieves a single loyalty program by its unique identifier.
//
loyalty_program_dto_envelope_t*
LoyaltyProgramsAPI_getLoyaltyProgramAsync(apiClient_t *apiClient, char *tenantId, char *loyaltyProgramId);


// Get loyalty programs
//
// Retrieves a list of loyalty programs for the specified tenant with OData query support.
//
loyalty_program_dto_list_envelope_t*
LoyaltyProgramsAPI_getLoyaltyProgramsAsync(apiClient_t *apiClient, char *tenantId);


// Patch a loyalty program
//
// Partially updates an existing loyalty program using a JSON Patch document.
//
empty_envelope_t*
LoyaltyProgramsAPI_patchLoyaltyProgramAsync(apiClient_t *apiClient, char *tenantId, char *loyaltyProgramId, list_t *operation);


// Update a loyalty program
//
// Updates an existing loyalty program by its unique identifier.
//
empty_envelope_t*
LoyaltyProgramsAPI_updateLoyaltyProgramAsync(apiClient_t *apiClient, char *tenantId, char *loyaltyProgramId, loyalty_program_update_dto_t *loyalty_program_update_dto);


