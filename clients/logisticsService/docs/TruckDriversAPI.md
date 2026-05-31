# TruckDriversAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**TruckDriversAPI_activateTruckDriverAsync**](TruckDriversAPI.md#TruckDriversAPI_activateTruckDriverAsync) | **POST** /api/v2/LogisticsService/TruckDrivers/{driverId}/Activate | Activate a truck driver
[**TruckDriversAPI_createTruckDriverAsync**](TruckDriversAPI.md#TruckDriversAPI_createTruckDriverAsync) | **POST** /api/v2/LogisticsService/TruckDrivers | Create a truck driver
[**TruckDriversAPI_deactivateTruckDriverAsync**](TruckDriversAPI.md#TruckDriversAPI_deactivateTruckDriverAsync) | **POST** /api/v2/LogisticsService/TruckDrivers/{driverId}/Deactivate | Deactivate a truck driver
[**TruckDriversAPI_deleteTruckDriverAsync**](TruckDriversAPI.md#TruckDriversAPI_deleteTruckDriverAsync) | **DELETE** /api/v2/LogisticsService/TruckDrivers/{driverId} | Delete a truck driver
[**TruckDriversAPI_getTruckDriverByIdAsync**](TruckDriversAPI.md#TruckDriversAPI_getTruckDriverByIdAsync) | **GET** /api/v2/LogisticsService/TruckDrivers/{driverId} | Get truck driver by ID
[**TruckDriversAPI_getTruckDriversAsync**](TruckDriversAPI.md#TruckDriversAPI_getTruckDriversAsync) | **GET** /api/v2/LogisticsService/TruckDrivers | Get all truck drivers
[**TruckDriversAPI_getTruckDriversCountAsync**](TruckDriversAPI.md#TruckDriversAPI_getTruckDriversCountAsync) | **GET** /api/v2/LogisticsService/TruckDrivers/Count | Get truck drivers count
[**TruckDriversAPI_updateTruckDriverAsync**](TruckDriversAPI.md#TruckDriversAPI_updateTruckDriverAsync) | **PUT** /api/v2/LogisticsService/TruckDrivers/{driverId} | Update a truck driver


# **TruckDriversAPI_activateTruckDriverAsync**
```c
// Activate a truck driver
//
// Activates a truck driver.
//
empty_envelope_t* TruckDriversAPI_activateTruckDriverAsync(apiClient_t *apiClient, char *tenantId, char *driverId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**driverId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TruckDriversAPI_createTruckDriverAsync**
```c
// Create a truck driver
//
// Creates a new truck driver for the specified tenant.
//
empty_envelope_t* TruckDriversAPI_createTruckDriverAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, truck_driver_create_dto_t *truck_driver_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**truck_driver_create_dto** | **[truck_driver_create_dto_t](truck_driver_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TruckDriversAPI_deactivateTruckDriverAsync**
```c
// Deactivate a truck driver
//
// Deactivates a truck driver.
//
empty_envelope_t* TruckDriversAPI_deactivateTruckDriverAsync(apiClient_t *apiClient, char *tenantId, char *driverId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**driverId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TruckDriversAPI_deleteTruckDriverAsync**
```c
// Delete a truck driver
//
// Deletes a truck driver.
//
empty_envelope_t* TruckDriversAPI_deleteTruckDriverAsync(apiClient_t *apiClient, char *tenantId, char *driverId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**driverId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TruckDriversAPI_getTruckDriverByIdAsync**
```c
// Get truck driver by ID
//
// Retrieves a specific truck driver by its identifier.
//
truck_driver_dto_envelope_t* TruckDriversAPI_getTruckDriverByIdAsync(apiClient_t *apiClient, char *tenantId, char *driverId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**driverId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[truck_driver_dto_envelope_t](truck_driver_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TruckDriversAPI_getTruckDriversAsync**
```c
// Get all truck drivers
//
// Retrieves all truck drivers for the specified tenant.
//
truck_driver_dto_list_envelope_t* TruckDriversAPI_getTruckDriversAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[truck_driver_dto_list_envelope_t](truck_driver_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TruckDriversAPI_getTruckDriversCountAsync**
```c
// Get truck drivers count
//
// Returns the count of truck drivers for the specified tenant.
//
int32_envelope_t* TruckDriversAPI_getTruckDriversCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **TruckDriversAPI_updateTruckDriverAsync**
```c
// Update a truck driver
//
// Updates an existing truck driver.
//
empty_envelope_t* TruckDriversAPI_updateTruckDriverAsync(apiClient_t *apiClient, char *tenantId, char *driverId, char *api_version, char *x_api_version, truck_driver_update_dto_t *truck_driver_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**driverId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**truck_driver_update_dto** | **[truck_driver_update_dto_t](truck_driver_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

