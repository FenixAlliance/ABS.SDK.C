#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/blockchain_block_create_dto.h"
#include "../model/blockchain_block_dto.h"
#include "../model/blockchain_block_dto_collection_query_parameters.h"
#include "../model/blockchain_block_dto_list_envelope.h"
#include "../model/blockchain_block_update_dto.h"
#include "../model/blockchain_create_dto.h"
#include "../model/blockchain_dto.h"
#include "../model/blockchain_dto_collection_query_parameters.h"
#include "../model/blockchain_dto_list_envelope.h"
#include "../model/blockchain_update_dto.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/patch_operation.h"


// Create a new blockchain
//
// Creates a new blockchain for the specified tenant.
//
void
BlockchainsAPI_createBlockchainAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, blockchain_create_dto_t *blockchain_create_dto);


// Add a block to a blockchain
//
void
BlockchainsAPI_createBlockchainBlockAsync(apiClient_t *apiClient, char *tenantId, char *blockchainId, char *api_version, char *x_api_version, blockchain_block_create_dto_t *blockchain_block_create_dto);


// Delete a blockchain
//
// Deletes a blockchain for the specified tenant.
//
void
BlockchainsAPI_deleteBlockchainAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);


// Delete a blockchain block
//
void
BlockchainsAPI_deleteBlockchainBlockAsync(apiClient_t *apiClient, char *tenantId, char *blockchainId, char *blockId, char *api_version, char *x_api_version);


// Get a specific block
//
blockchain_block_dto_t*
BlockchainsAPI_getBlockchainBlockByIdAsync(apiClient_t *apiClient, char *tenantId, char *blockchainId, char *blockId, char *api_version, char *x_api_version);


// Get blocks for a blockchain
//
blockchain_block_dto_list_envelope_t*
BlockchainsAPI_getBlockchainBlocksAsync(apiClient_t *apiClient, char *tenantId, char *blockchainId, char *api_version, char *x_api_version, blockchain_block_dto_collection_query_parameters_t *blockchain_block_dto_collection_query_parameters);


// Get block count for a blockchain
//
int32_envelope_t*
BlockchainsAPI_getBlockchainBlocksCountAsync(apiClient_t *apiClient, char *tenantId, char *blockchainId, char *api_version, char *x_api_version, blockchain_block_dto_collection_query_parameters_t *blockchain_block_dto_collection_query_parameters);


// Get blockchain by ID
//
// Retrieves a specific blockchain by its identifier.
//
blockchain_dto_t*
BlockchainsAPI_getBlockchainByIdAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);


// Get all blockchains
//
// Retrieves all blockchains for the specified tenant.
//
blockchain_dto_list_envelope_t*
BlockchainsAPI_getBlockchainsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, blockchain_dto_collection_query_parameters_t *blockchain_dto_collection_query_parameters);


// Get blockchains count
//
// Returns the count of blockchains for the specified tenant.
//
int32_envelope_t*
BlockchainsAPI_getBlockchainsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, blockchain_dto_collection_query_parameters_t *blockchain_dto_collection_query_parameters);


// Patch a blockchain
//
// Patch a blockchain
//
empty_envelope_t*
BlockchainsAPI_patchBlockchainAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, list_t *patch_operation);


// Patch a blockchain block
//
// Patch a blockchain block
//
empty_envelope_t*
BlockchainsAPI_patchBlockchainBlockAsync(apiClient_t *apiClient, char *tenantId, char *blockchainId, char *blockId, char *api_version, char *x_api_version, list_t *patch_operation);


// Update a blockchain
//
// Updates an existing blockchain for the specified tenant.
//
void
BlockchainsAPI_updateBlockchainAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, blockchain_update_dto_t *blockchain_update_dto);


// Update a blockchain block
//
void
BlockchainsAPI_updateBlockchainBlockAsync(apiClient_t *apiClient, char *tenantId, char *blockchainId, char *blockId, char *api_version, char *x_api_version, blockchain_block_update_dto_t *blockchain_block_update_dto);


