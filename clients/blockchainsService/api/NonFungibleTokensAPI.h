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
#include "../model/non_fungible_token_create_dto.h"
#include "../model/non_fungible_token_dto.h"
#include "../model/non_fungible_token_dto_list_envelope.h"
#include "../model/non_fungible_token_dto_o_data_query_options.h"
#include "../model/non_fungible_token_update_dto.h"
#include "../model/operation.h"


// Create a new NFT
//
// Creates a new non-fungible token for the specified tenant.
//
void
NonFungibleTokensAPI_createNonFungibleTokenAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, non_fungible_token_create_dto_t *non_fungible_token_create_dto);


// Delete an NFT
//
// Deletes a non-fungible token for the specified tenant.
//
void
NonFungibleTokensAPI_deleteNonFungibleTokenAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);


// Get NFT by ID
//
// Retrieves a specific non-fungible token by its identifier.
//
non_fungible_token_dto_t*
NonFungibleTokensAPI_getNonFungibleTokenByIdAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);


// Get all non-fungible tokens
//
// Retrieves all NFTs for the specified tenant.
//
non_fungible_token_dto_list_envelope_t*
NonFungibleTokensAPI_getNonFungibleTokensAsync(apiClient_t *apiClient, char *tenantId, non_fungible_token_dto_o_data_query_options_t *oDataQueryOptions, char *api_version, char *x_api_version);


// Get NFTs count
//
// Returns the count of NFTs for the specified tenant.
//
int32_envelope_t*
NonFungibleTokensAPI_getNonFungibleTokensCountAsync(apiClient_t *apiClient, char *tenantId, non_fungible_token_dto_o_data_query_options_t *oDataQueryOptions, char *api_version, char *x_api_version);


// Patch a non-fungible token
//
// Patch a non-fungible token
//
empty_envelope_t*
NonFungibleTokensAPI_patchNonFungibleTokenAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, list_t *operation);


// Update an NFT
//
// Updates an existing non-fungible token for the specified tenant.
//
void
NonFungibleTokensAPI_updateNonFungibleTokenAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, non_fungible_token_update_dto_t *non_fungible_token_update_dto);


