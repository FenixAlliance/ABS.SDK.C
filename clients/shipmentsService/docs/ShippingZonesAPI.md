# ShippingZonesAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ShippingZonesAPI_createShippingZoneAsync**](ShippingZonesAPI.md#ShippingZonesAPI_createShippingZoneAsync) | **POST** /api/v2/ShipmentsService/ShippingZones | Create a shipping zone
[**ShippingZonesAPI_deleteShippingZoneAsync**](ShippingZonesAPI.md#ShippingZonesAPI_deleteShippingZoneAsync) | **DELETE** /api/v2/ShipmentsService/ShippingZones/{zoneId} | Delete a shipping zone
[**ShippingZonesAPI_getShippingZoneByIdAsync**](ShippingZonesAPI.md#ShippingZonesAPI_getShippingZoneByIdAsync) | **GET** /api/v2/ShipmentsService/ShippingZones/{zoneId} | Get shipping zone by ID
[**ShippingZonesAPI_getShippingZonesAsync**](ShippingZonesAPI.md#ShippingZonesAPI_getShippingZonesAsync) | **GET** /api/v2/ShipmentsService/ShippingZones | Get all shipping zones
[**ShippingZonesAPI_getShippingZonesCountAsync**](ShippingZonesAPI.md#ShippingZonesAPI_getShippingZonesCountAsync) | **GET** /api/v2/ShipmentsService/ShippingZones/Count | Get shipping zones count
[**ShippingZonesAPI_patchShippingZoneAsync**](ShippingZonesAPI.md#ShippingZonesAPI_patchShippingZoneAsync) | **PATCH** /api/v2/ShipmentsService/ShippingZones/{zoneId} | Patch a shipping zone
[**ShippingZonesAPI_updateShippingZoneAsync**](ShippingZonesAPI.md#ShippingZonesAPI_updateShippingZoneAsync) | **PUT** /api/v2/ShipmentsService/ShippingZones/{zoneId} | Update a shipping zone


# **ShippingZonesAPI_createShippingZoneAsync**
```c
// Create a shipping zone
//
// Creates a new shipping zone.
//
void ShippingZonesAPI_createShippingZoneAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, shipping_zone_create_dto_t *shipping_zone_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**shipping_zone_create_dto** | **[shipping_zone_create_dto_t](shipping_zone_create_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ShippingZonesAPI_deleteShippingZoneAsync**
```c
// Delete a shipping zone
//
// Deletes a shipping zone.
//
void ShippingZonesAPI_deleteShippingZoneAsync(apiClient_t *apiClient, char *tenantId, char *zoneId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**zoneId** | **char \*** |  | 
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

# **ShippingZonesAPI_getShippingZoneByIdAsync**
```c
// Get shipping zone by ID
//
// Retrieves a specific shipping zone.
//
shipping_zone_dto_envelope_t* ShippingZonesAPI_getShippingZoneByIdAsync(apiClient_t *apiClient, char *tenantId, char *zoneId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**zoneId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[shipping_zone_dto_envelope_t](shipping_zone_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ShippingZonesAPI_getShippingZonesAsync**
```c
// Get all shipping zones
//
// Retrieves all shipping zones for the specified tenant.
//
shipping_zone_dto_list_envelope_t* ShippingZonesAPI_getShippingZonesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[shipping_zone_dto_list_envelope_t](shipping_zone_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ShippingZonesAPI_getShippingZonesCountAsync**
```c
// Get shipping zones count
//
// Returns the count of shipping zones.
//
int32_envelope_t* ShippingZonesAPI_getShippingZonesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **ShippingZonesAPI_patchShippingZoneAsync**
```c
// Patch a shipping zone
//
// Partially updates an existing shipping zone using JSON Patch.
//
empty_envelope_t* ShippingZonesAPI_patchShippingZoneAsync(apiClient_t *apiClient, char *tenantId, char *zoneId, char *api_version, char *x_api_version, list_t *operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**zoneId** | **char \*** |  | 
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

# **ShippingZonesAPI_updateShippingZoneAsync**
```c
// Update a shipping zone
//
// Updates an existing shipping zone.
//
void ShippingZonesAPI_updateShippingZoneAsync(apiClient_t *apiClient, char *tenantId, char *zoneId, char *api_version, char *x_api_version, shipping_zone_update_dto_t *shipping_zone_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**zoneId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**shipping_zone_update_dto** | **[shipping_zone_update_dto_t](shipping_zone_update_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

