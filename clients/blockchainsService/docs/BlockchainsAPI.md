# BlockchainsAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**BlockchainsAPI_createBlockchainAsync**](BlockchainsAPI.md#BlockchainsAPI_createBlockchainAsync) | **POST** /api/v2/BlockchainsService/Blockchains | Create a new blockchain
[**BlockchainsAPI_createBlockchainBlockAsync**](BlockchainsAPI.md#BlockchainsAPI_createBlockchainBlockAsync) | **POST** /api/v2/BlockchainsService/Blockchains/{blockchainId}/Blocks | Add a block to a blockchain
[**BlockchainsAPI_deleteBlockchainAsync**](BlockchainsAPI.md#BlockchainsAPI_deleteBlockchainAsync) | **DELETE** /api/v2/BlockchainsService/Blockchains/{id} | Delete a blockchain
[**BlockchainsAPI_deleteBlockchainBlockAsync**](BlockchainsAPI.md#BlockchainsAPI_deleteBlockchainBlockAsync) | **DELETE** /api/v2/BlockchainsService/Blockchains/{blockchainId}/Blocks/{blockId} | Delete a blockchain block
[**BlockchainsAPI_getBlockchainBlockByIdAsync**](BlockchainsAPI.md#BlockchainsAPI_getBlockchainBlockByIdAsync) | **GET** /api/v2/BlockchainsService/Blockchains/{blockchainId}/Blocks/{blockId} | Get a specific block
[**BlockchainsAPI_getBlockchainBlocksAsync**](BlockchainsAPI.md#BlockchainsAPI_getBlockchainBlocksAsync) | **GET** /api/v2/BlockchainsService/Blockchains/{blockchainId}/Blocks | Get blocks for a blockchain
[**BlockchainsAPI_getBlockchainBlocksCountAsync**](BlockchainsAPI.md#BlockchainsAPI_getBlockchainBlocksCountAsync) | **GET** /api/v2/BlockchainsService/Blockchains/{blockchainId}/Blocks/Count | Get block count for a blockchain
[**BlockchainsAPI_getBlockchainByIdAsync**](BlockchainsAPI.md#BlockchainsAPI_getBlockchainByIdAsync) | **GET** /api/v2/BlockchainsService/Blockchains/{id} | Get blockchain by ID
[**BlockchainsAPI_getBlockchainsAsync**](BlockchainsAPI.md#BlockchainsAPI_getBlockchainsAsync) | **GET** /api/v2/BlockchainsService/Blockchains | Get all blockchains
[**BlockchainsAPI_getBlockchainsCountAsync**](BlockchainsAPI.md#BlockchainsAPI_getBlockchainsCountAsync) | **GET** /api/v2/BlockchainsService/Blockchains/Count | Get blockchains count
[**BlockchainsAPI_patchBlockchainAsync**](BlockchainsAPI.md#BlockchainsAPI_patchBlockchainAsync) | **PATCH** /api/v2/BlockchainsService/Blockchains/{id} | Patch a blockchain
[**BlockchainsAPI_patchBlockchainBlockAsync**](BlockchainsAPI.md#BlockchainsAPI_patchBlockchainBlockAsync) | **PATCH** /api/v2/BlockchainsService/Blockchains/{blockchainId}/Blocks/{blockId} | Patch a blockchain block
[**BlockchainsAPI_updateBlockchainAsync**](BlockchainsAPI.md#BlockchainsAPI_updateBlockchainAsync) | **PUT** /api/v2/BlockchainsService/Blockchains/{id} | Update a blockchain
[**BlockchainsAPI_updateBlockchainBlockAsync**](BlockchainsAPI.md#BlockchainsAPI_updateBlockchainBlockAsync) | **PUT** /api/v2/BlockchainsService/Blockchains/{blockchainId}/Blocks/{blockId} | Update a blockchain block


# **BlockchainsAPI_createBlockchainAsync**
```c
// Create a new blockchain
//
// Creates a new blockchain for the specified tenant.
//
void BlockchainsAPI_createBlockchainAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, blockchain_create_dto_t *blockchain_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**blockchain_create_dto** | **[blockchain_create_dto_t](blockchain_create_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BlockchainsAPI_createBlockchainBlockAsync**
```c
// Add a block to a blockchain
//
void BlockchainsAPI_createBlockchainBlockAsync(apiClient_t *apiClient, char *tenantId, char *blockchainId, char *api_version, char *x_api_version, blockchain_block_create_dto_t *blockchain_block_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**blockchainId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**blockchain_block_create_dto** | **[blockchain_block_create_dto_t](blockchain_block_create_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BlockchainsAPI_deleteBlockchainAsync**
```c
// Delete a blockchain
//
// Deletes a blockchain for the specified tenant.
//
void BlockchainsAPI_deleteBlockchainAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**id** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BlockchainsAPI_deleteBlockchainBlockAsync**
```c
// Delete a blockchain block
//
void BlockchainsAPI_deleteBlockchainBlockAsync(apiClient_t *apiClient, char *tenantId, char *blockchainId, char *blockId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**blockchainId** | **char \*** |  | 
**blockId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BlockchainsAPI_getBlockchainBlockByIdAsync**
```c
// Get a specific block
//
blockchain_block_dto_t* BlockchainsAPI_getBlockchainBlockByIdAsync(apiClient_t *apiClient, char *tenantId, char *blockchainId, char *blockId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**blockchainId** | **char \*** |  | 
**blockId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[blockchain_block_dto_t](blockchain_block_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BlockchainsAPI_getBlockchainBlocksAsync**
```c
// Get blocks for a blockchain
//
blockchain_block_dto_list_envelope_t* BlockchainsAPI_getBlockchainBlocksAsync(apiClient_t *apiClient, char *tenantId, char *blockchainId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**blockchainId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[blockchain_block_dto_list_envelope_t](blockchain_block_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BlockchainsAPI_getBlockchainBlocksCountAsync**
```c
// Get block count for a blockchain
//
int32_envelope_t* BlockchainsAPI_getBlockchainBlocksCountAsync(apiClient_t *apiClient, char *tenantId, char *blockchainId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**blockchainId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BlockchainsAPI_getBlockchainByIdAsync**
```c
// Get blockchain by ID
//
// Retrieves a specific blockchain by its identifier.
//
blockchain_dto_t* BlockchainsAPI_getBlockchainByIdAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**id** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[blockchain_dto_t](blockchain_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BlockchainsAPI_getBlockchainsAsync**
```c
// Get all blockchains
//
// Retrieves all blockchains for the specified tenant.
//
blockchain_dto_list_envelope_t* BlockchainsAPI_getBlockchainsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[blockchain_dto_list_envelope_t](blockchain_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BlockchainsAPI_getBlockchainsCountAsync**
```c
// Get blockchains count
//
// Returns the count of blockchains for the specified tenant.
//
int32_envelope_t* BlockchainsAPI_getBlockchainsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BlockchainsAPI_patchBlockchainAsync**
```c
// Patch a blockchain
//
// Patch a blockchain
//
empty_envelope_t* BlockchainsAPI_patchBlockchainAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, list_t *operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**id** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**operation** | **[list_t](operation.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BlockchainsAPI_patchBlockchainBlockAsync**
```c
// Patch a blockchain block
//
// Patch a blockchain block
//
empty_envelope_t* BlockchainsAPI_patchBlockchainBlockAsync(apiClient_t *apiClient, char *tenantId, char *blockchainId, char *blockId, char *api_version, char *x_api_version, list_t *operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**blockchainId** | **char \*** |  | 
**blockId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**operation** | **[list_t](operation.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BlockchainsAPI_updateBlockchainAsync**
```c
// Update a blockchain
//
// Updates an existing blockchain for the specified tenant.
//
void BlockchainsAPI_updateBlockchainAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, blockchain_update_dto_t *blockchain_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**id** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**blockchain_update_dto** | **[blockchain_update_dto_t](blockchain_update_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BlockchainsAPI_updateBlockchainBlockAsync**
```c
// Update a blockchain block
//
void BlockchainsAPI_updateBlockchainBlockAsync(apiClient_t *apiClient, char *tenantId, char *blockchainId, char *blockId, char *api_version, char *x_api_version, blockchain_block_update_dto_t *blockchain_block_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**blockchainId** | **char \*** |  | 
**blockId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**blockchain_block_update_dto** | **[blockchain_block_update_dto_t](blockchain_block_update_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

