#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/asset_category_create_dto.h"
#include "../model/asset_category_dto_envelope.h"
#include "../model/asset_category_dto_list_envelope.h"
#include "../model/asset_category_update_dto.h"
#include "../model/asset_create_dto.h"
#include "../model/asset_depreciation_record_create_dto.h"
#include "../model/asset_depreciation_record_dto_envelope.h"
#include "../model/asset_depreciation_record_dto_list_envelope.h"
#include "../model/asset_depreciation_record_update_dto.h"
#include "../model/asset_dto_envelope.h"
#include "../model/asset_dto_list_envelope.h"
#include "../model/asset_repair_create_dto.h"
#include "../model/asset_repair_dto_envelope.h"
#include "../model/asset_repair_dto_list_envelope.h"
#include "../model/asset_repair_update_dto.h"
#include "../model/asset_transfer_create_dto.h"
#include "../model/asset_transfer_dto_envelope.h"
#include "../model/asset_transfer_dto_list_envelope.h"
#include "../model/asset_transfer_update_dto.h"
#include "../model/asset_update_dto.h"
#include "../model/asset_value_amend_create_dto.h"
#include "../model/asset_value_amend_dto_envelope.h"
#include "../model/asset_value_amend_dto_list_envelope.h"
#include "../model/asset_value_amend_update_dto.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"


// Creates a new asset
//
// Creates a new asset for the authenticated tenant.
//
asset_dto_envelope_t*
AssetsAPI_createAsset(apiClient_t *apiClient, char *tenantId, asset_create_dto_t *asset_create_dto);


// Creates a new asset category
//
// Creates a new asset category for the authenticated tenant.
//
asset_category_dto_envelope_t*
AssetsAPI_createAssetAssetCategory(apiClient_t *apiClient, char *tenantId, asset_category_create_dto_t *asset_category_create_dto);


// Creates a new depreciation record for an asset
//
// Creates a new depreciation record for the specified asset.
//
empty_envelope_t*
AssetsAPI_createAssetDepreciationRecord(apiClient_t *apiClient, char *tenantId, char *assetId, asset_depreciation_record_create_dto_t *asset_depreciation_record_create_dto);


// Creates a new repair for an asset
//
// Creates a new repair record for the specified asset.
//
empty_envelope_t*
AssetsAPI_createAssetRepair(apiClient_t *apiClient, char *tenantId, char *assetId, asset_repair_create_dto_t *asset_repair_create_dto);


// Creates a new transfer for an asset
//
// Creates a new transfer record for the specified asset.
//
empty_envelope_t*
AssetsAPI_createAssetTransfer(apiClient_t *apiClient, char *tenantId, char *assetId, asset_transfer_create_dto_t *asset_transfer_create_dto);


// Creates a new value amendment for an asset
//
// Creates a new value amendment record for the specified asset.
//
empty_envelope_t*
AssetsAPI_createAssetValueAmend(apiClient_t *apiClient, char *tenantId, char *assetId, asset_value_amend_create_dto_t *asset_value_amend_create_dto);


// Deletes an existing asset
//
// Deletes an existing asset for the authenticated tenant.
//
void
AssetsAPI_deleteAsset(apiClient_t *apiClient, char *tenantId, char *assetId);


// Deletes an existing asset category
//
// Deletes an existing asset category for the authenticated tenant.
//
void
AssetsAPI_deleteAssetAssetCategory(apiClient_t *apiClient, char *tenantId, char *categoryId);


// Deletes a depreciation record for an asset
//
// Deletes a depreciation record for the specified asset.
//
empty_envelope_t*
AssetsAPI_deleteAssetDepreciationRecord(apiClient_t *apiClient, char *tenantId, char *assetId, char *recordId);


// Deletes a repair for an asset
//
// Deletes a repair record for the specified asset.
//
empty_envelope_t*
AssetsAPI_deleteAssetRepair(apiClient_t *apiClient, char *tenantId, char *assetId, char *repairId);


// Deletes a transfer for an asset
//
// Deletes a transfer record for the specified asset.
//
empty_envelope_t*
AssetsAPI_deleteAssetTransfer(apiClient_t *apiClient, char *tenantId, char *assetId, char *transferId);


// Deletes a value amendment for an asset
//
// Deletes a value amendment record for the specified asset.
//
empty_envelope_t*
AssetsAPI_deleteAssetValueAmend(apiClient_t *apiClient, char *tenantId, char *assetId, char *amendId);


// Gets a specific asset by ID
//
// Retrieves a specific asset for the authenticated tenant.
//
asset_dto_envelope_t*
AssetsAPI_getAsset(apiClient_t *apiClient, char *tenantId, char *assetId);


// Gets all asset categories
//
// Retrieves all asset categories for the authenticated tenant.
//
asset_category_dto_list_envelope_t*
AssetsAPI_getAssetAssetCategories(apiClient_t *apiClient, char *tenantId);


// Gets the count of asset categories
//
// Returns the total number of asset categories for the authenticated tenant.
//
int32_envelope_t*
AssetsAPI_getAssetAssetCategoriesCount(apiClient_t *apiClient, char *tenantId);


// Gets a specific asset category
//
// Retrieves a specific asset category for the authenticated tenant.
//
asset_category_dto_envelope_t*
AssetsAPI_getAssetAssetCategory(apiClient_t *apiClient, char *tenantId, char *categoryId);


// Gets a specific depreciation record for an asset
//
// Retrieves a specific depreciation record by ID for the specified asset.
//
asset_depreciation_record_dto_envelope_t*
AssetsAPI_getAssetDepreciationRecord(apiClient_t *apiClient, char *tenantId, char *assetId, char *recordId);


// Gets depreciation records for a specific asset
//
// Retrieves all depreciation records for the specified asset.
//
asset_depreciation_record_dto_list_envelope_t*
AssetsAPI_getAssetDepreciationRecords(apiClient_t *apiClient, char *tenantId, char *assetId);


// Gets count of depreciation records for a specific asset
//
// Returns the total number of depreciation records for the specified asset.
//
int32_envelope_t*
AssetsAPI_getAssetDepreciationRecordsCount(apiClient_t *apiClient, char *tenantId, char *assetId);


// Gets a specific repair for an asset
//
// Retrieves a specific repair record by ID for the specified asset.
//
asset_repair_dto_envelope_t*
AssetsAPI_getAssetRepair(apiClient_t *apiClient, char *tenantId, char *assetId, char *repairId);


// Gets repairs for a specific asset
//
// Retrieves all repair records for the specified asset.
//
asset_repair_dto_list_envelope_t*
AssetsAPI_getAssetRepairs(apiClient_t *apiClient, char *tenantId, char *assetId);


// Gets count of repairs for a specific asset
//
// Returns the total number of repair records for the specified asset.
//
int32_envelope_t*
AssetsAPI_getAssetRepairsCount(apiClient_t *apiClient, char *tenantId, char *assetId);


// Gets a specific transfer for an asset
//
// Retrieves a specific transfer record by ID for the specified asset.
//
asset_transfer_dto_envelope_t*
AssetsAPI_getAssetTransfer(apiClient_t *apiClient, char *tenantId, char *assetId, char *transferId);


// Gets transfers for a specific asset
//
// Retrieves all transfer records for the specified asset.
//
asset_transfer_dto_list_envelope_t*
AssetsAPI_getAssetTransfers(apiClient_t *apiClient, char *tenantId, char *assetId);


// Gets count of transfers for a specific asset
//
// Returns the total number of transfer records for the specified asset.
//
int32_envelope_t*
AssetsAPI_getAssetTransfersCount(apiClient_t *apiClient, char *tenantId, char *assetId);


// Gets a specific value amendment for an asset
//
// Retrieves a specific value amendment record by ID for the specified asset.
//
asset_value_amend_dto_envelope_t*
AssetsAPI_getAssetValueAmend(apiClient_t *apiClient, char *tenantId, char *assetId, char *amendId);


// Gets value amendments for a specific asset
//
// Retrieves all value amendment records for the specified asset.
//
asset_value_amend_dto_list_envelope_t*
AssetsAPI_getAssetValueAmends(apiClient_t *apiClient, char *tenantId, char *assetId);


// Gets count of value amendments for a specific asset
//
// Returns the total number of value amendment records for the specified asset.
//
int32_envelope_t*
AssetsAPI_getAssetValueAmendsCount(apiClient_t *apiClient, char *tenantId, char *assetId);


// Gets all assets for the current tenant
//
// Retrieves all assets for the authenticated tenant with optional filtering.
//
asset_dto_list_envelope_t*
AssetsAPI_getAssets(apiClient_t *apiClient, char *tenantId);


// Gets the count of assets
//
// Returns the total number of assets for the authenticated tenant.
//
int32_envelope_t*
AssetsAPI_getAssetsCount(apiClient_t *apiClient, char *tenantId);


// Updates an existing asset
//
// Updates an existing asset for the authenticated tenant.
//
asset_dto_envelope_t*
AssetsAPI_updateAsset(apiClient_t *apiClient, char *tenantId, char *assetId, asset_update_dto_t *asset_update_dto);


// Updates an existing asset category
//
// Updates an existing asset category for the authenticated tenant.
//
asset_category_dto_envelope_t*
AssetsAPI_updateAssetAssetCategory(apiClient_t *apiClient, char *tenantId, char *categoryId, asset_category_update_dto_t *asset_category_update_dto);


// Updates a depreciation record for an asset
//
// Updates an existing depreciation record for the specified asset.
//
empty_envelope_t*
AssetsAPI_updateAssetDepreciationRecord(apiClient_t *apiClient, char *tenantId, char *assetId, char *recordId, asset_depreciation_record_update_dto_t *asset_depreciation_record_update_dto);


// Updates a repair for an asset
//
// Updates an existing repair record for the specified asset.
//
empty_envelope_t*
AssetsAPI_updateAssetRepair(apiClient_t *apiClient, char *tenantId, char *assetId, char *repairId, asset_repair_update_dto_t *asset_repair_update_dto);


// Updates a transfer for an asset
//
// Updates an existing transfer record for the specified asset.
//
empty_envelope_t*
AssetsAPI_updateAssetTransfer(apiClient_t *apiClient, char *tenantId, char *assetId, char *transferId, asset_transfer_update_dto_t *asset_transfer_update_dto);


// Updates a value amendment for an asset
//
// Updates an existing value amendment record for the specified asset.
//
empty_envelope_t*
AssetsAPI_updateAssetValueAmend(apiClient_t *apiClient, char *tenantId, char *assetId, char *amendId, asset_value_amend_update_dto_t *asset_value_amend_update_dto);


