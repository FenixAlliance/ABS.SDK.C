# VesselsAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**VesselsAPI_createVesselAsync**](VesselsAPI.md#VesselsAPI_createVesselAsync) | **POST** /api/v2/LogisticsService/Vessels | Create a vessel
[**VesselsAPI_deleteVesselAsync**](VesselsAPI.md#VesselsAPI_deleteVesselAsync) | **DELETE** /api/v2/LogisticsService/Vessels/{vesselId} | Delete a vessel
[**VesselsAPI_getVesselByIdAsync**](VesselsAPI.md#VesselsAPI_getVesselByIdAsync) | **GET** /api/v2/LogisticsService/Vessels/{vesselId} | Get vessel by ID
[**VesselsAPI_getVesselsAsync**](VesselsAPI.md#VesselsAPI_getVesselsAsync) | **GET** /api/v2/LogisticsService/Vessels | Get all vessels
[**VesselsAPI_getVesselsCountAsync**](VesselsAPI.md#VesselsAPI_getVesselsCountAsync) | **GET** /api/v2/LogisticsService/Vessels/Count | Get vessels count
[**VesselsAPI_patchVesselAsync**](VesselsAPI.md#VesselsAPI_patchVesselAsync) | **PATCH** /api/v2/LogisticsService/Vessels/{vesselId} | Patch a vessel
[**VesselsAPI_updateVesselAsync**](VesselsAPI.md#VesselsAPI_updateVesselAsync) | **PUT** /api/v2/LogisticsService/Vessels/{vesselId} | Update a vessel


# **VesselsAPI_createVesselAsync**
```c
// Create a vessel
//
// Creates a new vessel for the specified tenant.
//
empty_envelope_t* VesselsAPI_createVesselAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, vessel_create_dto_t *vessel_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**vessel_create_dto** | **[vessel_create_dto_t](vessel_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **VesselsAPI_deleteVesselAsync**
```c
// Delete a vessel
//
// Deletes a vessel.
//
empty_envelope_t* VesselsAPI_deleteVesselAsync(apiClient_t *apiClient, char *tenantId, char *vesselId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**vesselId** | **char \*** |  | 
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

# **VesselsAPI_getVesselByIdAsync**
```c
// Get vessel by ID
//
// Retrieves a specific vessel by its identifier.
//
vessel_dto_envelope_t* VesselsAPI_getVesselByIdAsync(apiClient_t *apiClient, char *tenantId, char *vesselId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**vesselId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[vessel_dto_envelope_t](vessel_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **VesselsAPI_getVesselsAsync**
```c
// Get all vessels
//
// Retrieves all vessels for the specified tenant.
//
vessel_dto_list_envelope_t* VesselsAPI_getVesselsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[vessel_dto_list_envelope_t](vessel_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **VesselsAPI_getVesselsCountAsync**
```c
// Get vessels count
//
// Returns the count of vessels for the specified tenant.
//
int32_envelope_t* VesselsAPI_getVesselsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **VesselsAPI_patchVesselAsync**
```c
// Patch a vessel
//
// Partially updates an existing vessel using JSON Patch.
//
empty_envelope_t* VesselsAPI_patchVesselAsync(apiClient_t *apiClient, char *tenantId, char *vesselId, char *api_version, char *x_api_version, list_t *operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**vesselId** | **char \*** |  | 
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

# **VesselsAPI_updateVesselAsync**
```c
// Update a vessel
//
// Updates an existing vessel.
//
empty_envelope_t* VesselsAPI_updateVesselAsync(apiClient_t *apiClient, char *tenantId, char *vesselId, char *api_version, char *x_api_version, vessel_update_dto_t *vessel_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**vesselId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**vessel_update_dto** | **[vessel_update_dto_t](vessel_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

