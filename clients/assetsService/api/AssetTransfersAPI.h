#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/asset_transfer_create_dto.h"
#include "../model/asset_transfer_dto_envelope.h"
#include "../model/asset_transfer_dto_list_envelope.h"
#include "../model/asset_transfer_update_dto.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"


// Creates a new asset transfer
//
// Creates a new asset transfer for the authenticated tenant.
//
empty_envelope_t*
AssetTransfersAPI_createAssetTransferAsync(apiClient_t *apiClient, char *tenantId, asset_transfer_create_dto_t *asset_transfer_create_dto);


// Deletes an asset transfer
//
// Deletes an asset transfer for the authenticated tenant.
//
empty_envelope_t*
AssetTransfersAPI_deleteAssetTransferAsync(apiClient_t *apiClient, char *tenantId, char *transferId);


// Gets a single asset transfer by ID
//
// Retrieves a specific asset transfer by its ID for the authenticated tenant.
//
asset_transfer_dto_envelope_t*
AssetTransfersAPI_getAssetTransferAsync(apiClient_t *apiClient, char *tenantId, char *transferId);


// Gets a list of asset transfers
//
// Retrieves all asset transfers for the authenticated tenant.
//
asset_transfer_dto_list_envelope_t*
AssetTransfersAPI_getAssetTransfersAsync(apiClient_t *apiClient, char *tenantId);


// Gets the count of asset transfers
//
// Returns the total number of asset transfers for the authenticated tenant.
//
int32_envelope_t*
AssetTransfersAPI_getAssetTransfersCountAsync(apiClient_t *apiClient, char *tenantId);


// Updates an existing asset transfer
//
// Updates an existing asset transfer for the authenticated tenant.
//
empty_envelope_t*
AssetTransfersAPI_updateAssetTransferAsync(apiClient_t *apiClient, char *tenantId, char *transferId, asset_transfer_update_dto_t *asset_transfer_update_dto);


