#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/asset_type_create_dto.h"
#include "../model/asset_type_dto_envelope.h"
#include "../model/asset_type_dto_list_envelope.h"
#include "../model/asset_type_update_dto.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"


// Creates a new asset type
//
// Creates a new asset type for the authenticated tenant.
//
asset_type_dto_envelope_t*
AssetTypesAPI_createAssetType(apiClient_t *apiClient, char *tenantId, asset_type_create_dto_t *asset_type_create_dto);


// Deletes an asset type
//
// Deletes an asset type for the authenticated tenant.
//
void
AssetTypesAPI_deleteAssetType(apiClient_t *apiClient, char *tenantId, char *_typeId);


// Gets a specific asset type
//
// Retrieves a specific asset type by ID.
//
asset_type_dto_envelope_t*
AssetTypesAPI_getAssetType(apiClient_t *apiClient, char *tenantId, char *_typeId);


// Gets all asset types for the current tenant
//
// Retrieves all asset types for the authenticated tenant.
//
asset_type_dto_list_envelope_t*
AssetTypesAPI_getAssetTypes(apiClient_t *apiClient, char *tenantId);


// Gets the count of asset types
//
// Returns the total number of asset types for the authenticated tenant.
//
int32_envelope_t*
AssetTypesAPI_getAssetTypesCount(apiClient_t *apiClient, char *tenantId);


// Updates an existing asset type
//
// Updates an existing asset type for the authenticated tenant.
//
empty_envelope_t*
AssetTypesAPI_updateAssetType(apiClient_t *apiClient, char *tenantId, char *_typeId, asset_type_update_dto_t *asset_type_update_dto);


