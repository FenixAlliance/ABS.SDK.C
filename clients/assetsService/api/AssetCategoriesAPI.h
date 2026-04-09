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
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"


// Creates a new asset category
//
// Creates a new asset category for the authenticated tenant.
//
asset_category_dto_envelope_t*
AssetCategoriesAPI_createAssetCategory(apiClient_t *apiClient, char *tenantId, asset_category_create_dto_t *asset_category_create_dto);


// Deletes an asset category
//
// Deletes an asset category for the authenticated tenant.
//
void
AssetCategoriesAPI_deleteAssetCategory(apiClient_t *apiClient, char *tenantId, char *categoryId);


// Gets all asset categories for the current tenant
//
// Retrieves all asset categories for the authenticated tenant.
//
asset_category_dto_list_envelope_t*
AssetCategoriesAPI_getAssetCategories(apiClient_t *apiClient, char *tenantId);


// Gets the count of asset categories
//
// Returns the total number of asset categories for the authenticated tenant.
//
int32_envelope_t*
AssetCategoriesAPI_getAssetCategoriesCount(apiClient_t *apiClient, char *tenantId);


// Gets a specific asset category
//
// Retrieves a specific asset category by ID.
//
asset_category_dto_envelope_t*
AssetCategoriesAPI_getAssetCategory(apiClient_t *apiClient, char *tenantId, char *categoryId);


// Updates an existing asset category
//
// Updates an existing asset category for the authenticated tenant.
//
empty_envelope_t*
AssetCategoriesAPI_updateAssetCategory(apiClient_t *apiClient, char *tenantId, char *categoryId, asset_category_update_dto_t *asset_category_update_dto);


