# ShippingRegionsAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ShippingRegionsAPI_createShippingRegionAsync**](ShippingRegionsAPI.md#ShippingRegionsAPI_createShippingRegionAsync) | **POST** /api/v2/ShipmentsService/ShippingRegions | Create a shipping region
[**ShippingRegionsAPI_deleteShippingRegionAsync**](ShippingRegionsAPI.md#ShippingRegionsAPI_deleteShippingRegionAsync) | **DELETE** /api/v2/ShipmentsService/ShippingRegions/{regionId} | Delete a shipping region
[**ShippingRegionsAPI_getShippingRegionByIdAsync**](ShippingRegionsAPI.md#ShippingRegionsAPI_getShippingRegionByIdAsync) | **GET** /api/v2/ShipmentsService/ShippingRegions/{regionId} | Get shipping region by ID
[**ShippingRegionsAPI_getShippingRegionsAsync**](ShippingRegionsAPI.md#ShippingRegionsAPI_getShippingRegionsAsync) | **GET** /api/v2/ShipmentsService/ShippingRegions | Get all shipping regions
[**ShippingRegionsAPI_getShippingRegionsCountAsync**](ShippingRegionsAPI.md#ShippingRegionsAPI_getShippingRegionsCountAsync) | **GET** /api/v2/ShipmentsService/ShippingRegions/Count | Get shipping regions count
[**ShippingRegionsAPI_patchShippingRegionAsync**](ShippingRegionsAPI.md#ShippingRegionsAPI_patchShippingRegionAsync) | **PATCH** /api/v2/ShipmentsService/ShippingRegions/{regionId} | Patch a shipping region
[**ShippingRegionsAPI_updateShippingRegionAsync**](ShippingRegionsAPI.md#ShippingRegionsAPI_updateShippingRegionAsync) | **PUT** /api/v2/ShipmentsService/ShippingRegions/{regionId} | Update a shipping region


# **ShippingRegionsAPI_createShippingRegionAsync**
```c
// Create a shipping region
//
// Creates a new shipping region.
//
void ShippingRegionsAPI_createShippingRegionAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, shipping_region_create_dto_t *shipping_region_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**shipping_region_create_dto** | **[shipping_region_create_dto_t](shipping_region_create_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ShippingRegionsAPI_deleteShippingRegionAsync**
```c
// Delete a shipping region
//
// Deletes a shipping region.
//
void ShippingRegionsAPI_deleteShippingRegionAsync(apiClient_t *apiClient, char *tenantId, char *regionId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**regionId** | **char \*** |  | 
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

# **ShippingRegionsAPI_getShippingRegionByIdAsync**
```c
// Get shipping region by ID
//
// Retrieves a specific shipping region.
//
shipping_region_dto_envelope_t* ShippingRegionsAPI_getShippingRegionByIdAsync(apiClient_t *apiClient, char *tenantId, char *regionId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**regionId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[shipping_region_dto_envelope_t](shipping_region_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ShippingRegionsAPI_getShippingRegionsAsync**
```c
// Get all shipping regions
//
// Retrieves all shipping regions for the specified tenant.
//
shipping_region_dto_list_envelope_t* ShippingRegionsAPI_getShippingRegionsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[shipping_region_dto_list_envelope_t](shipping_region_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ShippingRegionsAPI_getShippingRegionsCountAsync**
```c
// Get shipping regions count
//
// Returns the count of shipping regions.
//
int32_envelope_t* ShippingRegionsAPI_getShippingRegionsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **ShippingRegionsAPI_patchShippingRegionAsync**
```c
// Patch a shipping region
//
// Partially updates an existing shipping region using JSON Patch.
//
empty_envelope_t* ShippingRegionsAPI_patchShippingRegionAsync(apiClient_t *apiClient, char *tenantId, char *regionId, char *api_version, char *x_api_version, list_t *operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**regionId** | **char \*** |  | 
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

# **ShippingRegionsAPI_updateShippingRegionAsync**
```c
// Update a shipping region
//
// Updates an existing shipping region.
//
void ShippingRegionsAPI_updateShippingRegionAsync(apiClient_t *apiClient, char *tenantId, char *regionId, char *api_version, char *x_api_version, shipping_region_update_dto_t *shipping_region_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**regionId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**shipping_region_update_dto** | **[shipping_region_update_dto_t](shipping_region_update_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

