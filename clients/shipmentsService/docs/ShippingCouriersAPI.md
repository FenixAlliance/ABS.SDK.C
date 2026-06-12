# ShippingCouriersAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ShippingCouriersAPI_createShippingCourierAsync**](ShippingCouriersAPI.md#ShippingCouriersAPI_createShippingCourierAsync) | **POST** /api/v2/ShipmentsService/ShippingCouriers | Create a shipping courier
[**ShippingCouriersAPI_deleteShippingCourierAsync**](ShippingCouriersAPI.md#ShippingCouriersAPI_deleteShippingCourierAsync) | **DELETE** /api/v2/ShipmentsService/ShippingCouriers/{courierId} | Delete a shipping courier
[**ShippingCouriersAPI_getShippingCourierByIdAsync**](ShippingCouriersAPI.md#ShippingCouriersAPI_getShippingCourierByIdAsync) | **GET** /api/v2/ShipmentsService/ShippingCouriers/{courierId} | Get shipping courier by ID
[**ShippingCouriersAPI_getShippingCouriersAsync**](ShippingCouriersAPI.md#ShippingCouriersAPI_getShippingCouriersAsync) | **GET** /api/v2/ShipmentsService/ShippingCouriers | Get all shipping couriers
[**ShippingCouriersAPI_getShippingCouriersCountAsync**](ShippingCouriersAPI.md#ShippingCouriersAPI_getShippingCouriersCountAsync) | **GET** /api/v2/ShipmentsService/ShippingCouriers/Count | Get shipping couriers count
[**ShippingCouriersAPI_patchShippingCourierAsync**](ShippingCouriersAPI.md#ShippingCouriersAPI_patchShippingCourierAsync) | **PATCH** /api/v2/ShipmentsService/ShippingCouriers/{courierId} | Patch a shipping courier
[**ShippingCouriersAPI_updateShippingCourierAsync**](ShippingCouriersAPI.md#ShippingCouriersAPI_updateShippingCourierAsync) | **PUT** /api/v2/ShipmentsService/ShippingCouriers/{courierId} | Update a shipping courier


# **ShippingCouriersAPI_createShippingCourierAsync**
```c
// Create a shipping courier
//
// Creates a new shipping courier.
//
void ShippingCouriersAPI_createShippingCourierAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, shipping_courier_create_dto_t *shipping_courier_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**shipping_courier_create_dto** | **[shipping_courier_create_dto_t](shipping_courier_create_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ShippingCouriersAPI_deleteShippingCourierAsync**
```c
// Delete a shipping courier
//
// Deletes a shipping courier.
//
void ShippingCouriersAPI_deleteShippingCourierAsync(apiClient_t *apiClient, char *tenantId, char *courierId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**courierId** | **char \*** |  | 
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

# **ShippingCouriersAPI_getShippingCourierByIdAsync**
```c
// Get shipping courier by ID
//
// Retrieves a specific shipping courier by its ID.
//
shipping_courier_dto_envelope_t* ShippingCouriersAPI_getShippingCourierByIdAsync(apiClient_t *apiClient, char *tenantId, char *courierId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**courierId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[shipping_courier_dto_envelope_t](shipping_courier_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ShippingCouriersAPI_getShippingCouriersAsync**
```c
// Get all shipping couriers
//
// Retrieves all shipping couriers for the specified tenant.
//
shipping_courier_dto_list_envelope_t* ShippingCouriersAPI_getShippingCouriersAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[shipping_courier_dto_list_envelope_t](shipping_courier_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ShippingCouriersAPI_getShippingCouriersCountAsync**
```c
// Get shipping couriers count
//
// Returns the count of shipping couriers for the specified tenant.
//
int32_envelope_t* ShippingCouriersAPI_getShippingCouriersCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **ShippingCouriersAPI_patchShippingCourierAsync**
```c
// Patch a shipping courier
//
// Partially updates an existing shipping courier using JSON Patch.
//
empty_envelope_t* ShippingCouriersAPI_patchShippingCourierAsync(apiClient_t *apiClient, char *tenantId, char *courierId, char *api_version, char *x_api_version, list_t *operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**courierId** | **char \*** |  | 
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

# **ShippingCouriersAPI_updateShippingCourierAsync**
```c
// Update a shipping courier
//
// Updates an existing shipping courier.
//
void ShippingCouriersAPI_updateShippingCourierAsync(apiClient_t *apiClient, char *tenantId, char *courierId, char *api_version, char *x_api_version, shipping_courier_update_dto_t *shipping_courier_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**courierId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**shipping_courier_update_dto** | **[shipping_courier_update_dto_t](shipping_courier_update_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

