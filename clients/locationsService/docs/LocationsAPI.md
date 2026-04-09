# LocationsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**LocationsAPI_createLocationAsync**](LocationsAPI.md#LocationsAPI_createLocationAsync) | **POST** /api/v2/LocationsService/Locations | Create Location
[**LocationsAPI_createWalletLocationAsync**](LocationsAPI.md#LocationsAPI_createWalletLocationAsync) | **POST** /api/v2/LocationsService/Locations/wallet/{walletId} | Create Wallet Location
[**LocationsAPI_deleteLocationAsync**](LocationsAPI.md#LocationsAPI_deleteLocationAsync) | **DELETE** /api/v2/LocationsService/Locations/{locationId} | Delete Location
[**LocationsAPI_deleteWalletLocationAsync**](LocationsAPI.md#LocationsAPI_deleteWalletLocationAsync) | **DELETE** /api/v2/LocationsService/Locations/wallet/{walletId}/{locationId} | Delete Wallet Location
[**LocationsAPI_getLocationAsync**](LocationsAPI.md#LocationsAPI_getLocationAsync) | **GET** /api/v2/LocationsService/Locations/{locationId} | Get Location
[**LocationsAPI_getLocationsAsync**](LocationsAPI.md#LocationsAPI_getLocationsAsync) | **GET** /api/v2/LocationsService/Locations | Get Locations
[**LocationsAPI_getLocationsCountAsync**](LocationsAPI.md#LocationsAPI_getLocationsCountAsync) | **GET** /api/v2/LocationsService/Locations/count | Get Locations Count
[**LocationsAPI_getWalletLocationAsync**](LocationsAPI.md#LocationsAPI_getWalletLocationAsync) | **GET** /api/v2/LocationsService/Locations/wallet/{walletId}/{locationId} | Get Wallet Location
[**LocationsAPI_getWalletLocationsAsync**](LocationsAPI.md#LocationsAPI_getWalletLocationsAsync) | **GET** /api/v2/LocationsService/Locations/wallet/{walletId} | Get Wallet Locations
[**LocationsAPI_getWalletLocationsCountAsync**](LocationsAPI.md#LocationsAPI_getWalletLocationsCountAsync) | **GET** /api/v2/LocationsService/Locations/wallet/{walletId}/count | Get Wallet Locations Count
[**LocationsAPI_updateLocationAsync**](LocationsAPI.md#LocationsAPI_updateLocationAsync) | **PUT** /api/v2/LocationsService/Locations/{locationId} | Update Location
[**LocationsAPI_updateWalletLocationAsync**](LocationsAPI.md#LocationsAPI_updateWalletLocationAsync) | **PUT** /api/v2/LocationsService/Locations/wallet/{walletId}/{locationId} | Update Wallet Location


# **LocationsAPI_createLocationAsync**
```c
// Create Location
//
// Create a new location.
//
empty_envelope_t* LocationsAPI_createLocationAsync(apiClient_t *apiClient, char *tenantId, location_create_dto_t *location_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**location_create_dto** | **[location_create_dto_t](location_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **LocationsAPI_createWalletLocationAsync**
```c
// Create Wallet Location
//
// Create a new location for a specific wallet.
//
empty_envelope_t* LocationsAPI_createWalletLocationAsync(apiClient_t *apiClient, char *walletId, location_create_dto_t *location_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**walletId** | **char \*** |  | 
**location_create_dto** | **[location_create_dto_t](location_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **LocationsAPI_deleteLocationAsync**
```c
// Delete Location
//
// Delete a specific location by ID.
//
empty_envelope_t* LocationsAPI_deleteLocationAsync(apiClient_t *apiClient, char *tenantId, char *locationId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**locationId** | **char \*** |  | 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **LocationsAPI_deleteWalletLocationAsync**
```c
// Delete Wallet Location
//
// Delete a specific location of a wallet.
//
empty_envelope_t* LocationsAPI_deleteWalletLocationAsync(apiClient_t *apiClient, char *walletId, char *locationId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**walletId** | **char \*** |  | 
**locationId** | **char \*** |  | 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **LocationsAPI_getLocationAsync**
```c
// Get Location
//
// Get details of a specific location by ID.
//
location_dto_envelope_t* LocationsAPI_getLocationAsync(apiClient_t *apiClient, char *tenantId, char *locationId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**locationId** | **char \*** |  | 

### Return type

[location_dto_envelope_t](location_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **LocationsAPI_getLocationsAsync**
```c
// Get Locations
//
// Get all locations with OData query support.
//
location_dto_i_read_only_list_envelope_t* LocationsAPI_getLocationsAsync(apiClient_t *apiClient, char *tenantId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 

### Return type

[location_dto_i_read_only_list_envelope_t](location_dto_i_read_only_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **LocationsAPI_getLocationsCountAsync**
```c
// Get Locations Count
//
// Get the count of locations with OData query support.
//
int32_envelope_t* LocationsAPI_getLocationsCountAsync(apiClient_t *apiClient, char *tenantId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **LocationsAPI_getWalletLocationAsync**
```c
// Get Wallet Location
//
// Get a specific location of a wallet by ID.
//
location_dto_envelope_t* LocationsAPI_getWalletLocationAsync(apiClient_t *apiClient, char *walletId, char *locationId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**walletId** | **char \*** |  | 
**locationId** | **char \*** |  | 

### Return type

[location_dto_envelope_t](location_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **LocationsAPI_getWalletLocationsAsync**
```c
// Get Wallet Locations
//
// Get locations for a specific wallet by ID.
//
location_dto_i_read_only_list_envelope_t* LocationsAPI_getWalletLocationsAsync(apiClient_t *apiClient, char *walletId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**walletId** | **char \*** |  | 

### Return type

[location_dto_i_read_only_list_envelope_t](location_dto_i_read_only_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **LocationsAPI_getWalletLocationsCountAsync**
```c
// Get Wallet Locations Count
//
// Get the count of locations for a specific wallet by ID.
//
int32_envelope_t* LocationsAPI_getWalletLocationsCountAsync(apiClient_t *apiClient, char *walletId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**walletId** | **char \*** |  | 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **LocationsAPI_updateLocationAsync**
```c
// Update Location
//
// Update a specific location by ID.
//
empty_envelope_t* LocationsAPI_updateLocationAsync(apiClient_t *apiClient, char *tenantId, char *locationId, location_update_dto_t *location_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**locationId** | **char \*** |  | 
**location_update_dto** | **[location_update_dto_t](location_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **LocationsAPI_updateWalletLocationAsync**
```c
// Update Wallet Location
//
// Update a specific location of a wallet.
//
empty_envelope_t* LocationsAPI_updateWalletLocationAsync(apiClient_t *apiClient, char *walletId, char *locationId, location_update_dto_t *location_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**walletId** | **char \*** |  | 
**locationId** | **char \*** |  | 
**location_update_dto** | **[location_update_dto_t](location_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

