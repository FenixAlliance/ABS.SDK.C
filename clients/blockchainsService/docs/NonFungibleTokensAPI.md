# NonFungibleTokensAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**NonFungibleTokensAPI_createNonFungibleTokenAsync**](NonFungibleTokensAPI.md#NonFungibleTokensAPI_createNonFungibleTokenAsync) | **POST** /api/v2/BlockchainsService/NonFungibleTokens | Create a new NFT
[**NonFungibleTokensAPI_deleteNonFungibleTokenAsync**](NonFungibleTokensAPI.md#NonFungibleTokensAPI_deleteNonFungibleTokenAsync) | **DELETE** /api/v2/BlockchainsService/NonFungibleTokens/{id} | Delete an NFT
[**NonFungibleTokensAPI_getNonFungibleTokenByIdAsync**](NonFungibleTokensAPI.md#NonFungibleTokensAPI_getNonFungibleTokenByIdAsync) | **GET** /api/v2/BlockchainsService/NonFungibleTokens/{id} | Get NFT by ID
[**NonFungibleTokensAPI_getNonFungibleTokensAsync**](NonFungibleTokensAPI.md#NonFungibleTokensAPI_getNonFungibleTokensAsync) | **GET** /api/v2/BlockchainsService/NonFungibleTokens | Get all non-fungible tokens
[**NonFungibleTokensAPI_getNonFungibleTokensCountAsync**](NonFungibleTokensAPI.md#NonFungibleTokensAPI_getNonFungibleTokensCountAsync) | **GET** /api/v2/BlockchainsService/NonFungibleTokens/Count | Get NFTs count
[**NonFungibleTokensAPI_patchNonFungibleTokenAsync**](NonFungibleTokensAPI.md#NonFungibleTokensAPI_patchNonFungibleTokenAsync) | **PATCH** /api/v2/BlockchainsService/NonFungibleTokens/{id} | Patch a non-fungible token
[**NonFungibleTokensAPI_updateNonFungibleTokenAsync**](NonFungibleTokensAPI.md#NonFungibleTokensAPI_updateNonFungibleTokenAsync) | **PUT** /api/v2/BlockchainsService/NonFungibleTokens/{id} | Update an NFT


# **NonFungibleTokensAPI_createNonFungibleTokenAsync**
```c
// Create a new NFT
//
// Creates a new non-fungible token for the specified tenant.
//
void NonFungibleTokensAPI_createNonFungibleTokenAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, non_fungible_token_create_dto_t *non_fungible_token_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**non_fungible_token_create_dto** | **[non_fungible_token_create_dto_t](non_fungible_token_create_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **NonFungibleTokensAPI_deleteNonFungibleTokenAsync**
```c
// Delete an NFT
//
// Deletes a non-fungible token for the specified tenant.
//
void NonFungibleTokensAPI_deleteNonFungibleTokenAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);
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

# **NonFungibleTokensAPI_getNonFungibleTokenByIdAsync**
```c
// Get NFT by ID
//
// Retrieves a specific non-fungible token by its identifier.
//
non_fungible_token_dto_t* NonFungibleTokensAPI_getNonFungibleTokenByIdAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);
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

[non_fungible_token_dto_t](non_fungible_token_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **NonFungibleTokensAPI_getNonFungibleTokensAsync**
```c
// Get all non-fungible tokens
//
// Retrieves all NFTs for the specified tenant.
//
non_fungible_token_dto_list_envelope_t* NonFungibleTokensAPI_getNonFungibleTokensAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, non_fungible_token_dto_collection_query_parameters_t *non_fungible_token_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**non_fungible_token_dto_collection_query_parameters** | **[non_fungible_token_dto_collection_query_parameters_t](non_fungible_token_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[non_fungible_token_dto_list_envelope_t](non_fungible_token_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **NonFungibleTokensAPI_getNonFungibleTokensCountAsync**
```c
// Get NFTs count
//
// Returns the count of NFTs for the specified tenant.
//
int32_envelope_t* NonFungibleTokensAPI_getNonFungibleTokensCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, non_fungible_token_dto_collection_query_parameters_t *non_fungible_token_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**non_fungible_token_dto_collection_query_parameters** | **[non_fungible_token_dto_collection_query_parameters_t](non_fungible_token_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **NonFungibleTokensAPI_patchNonFungibleTokenAsync**
```c
// Patch a non-fungible token
//
// Patch a non-fungible token
//
empty_envelope_t* NonFungibleTokensAPI_patchNonFungibleTokenAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, list_t *patch_operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**id** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**patch_operation** | **[list_t](patch_operation.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **NonFungibleTokensAPI_updateNonFungibleTokenAsync**
```c
// Update an NFT
//
// Updates an existing non-fungible token for the specified tenant.
//
void NonFungibleTokensAPI_updateNonFungibleTokenAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, non_fungible_token_update_dto_t *non_fungible_token_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**id** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**non_fungible_token_update_dto** | **[non_fungible_token_update_dto_t](non_fungible_token_update_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

