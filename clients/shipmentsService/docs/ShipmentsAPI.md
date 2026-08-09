# ShipmentsAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ShipmentsAPI_createShipmentAsync**](ShipmentsAPI.md#ShipmentsAPI_createShipmentAsync) | **POST** /api/v2/ShipmentsService/Shipments | Create a shipment
[**ShipmentsAPI_deleteShipmentAsync**](ShipmentsAPI.md#ShipmentsAPI_deleteShipmentAsync) | **DELETE** /api/v2/ShipmentsService/Shipments/{shipmentId} | Delete a shipment
[**ShipmentsAPI_getShipmentByIdAsync**](ShipmentsAPI.md#ShipmentsAPI_getShipmentByIdAsync) | **GET** /api/v2/ShipmentsService/Shipments/{shipmentId} | Get shipment by ID
[**ShipmentsAPI_getShipmentsAsync**](ShipmentsAPI.md#ShipmentsAPI_getShipmentsAsync) | **GET** /api/v2/ShipmentsService/Shipments | Get all shipments
[**ShipmentsAPI_getShipmentsCountAsync**](ShipmentsAPI.md#ShipmentsAPI_getShipmentsCountAsync) | **GET** /api/v2/ShipmentsService/Shipments/Count | Get shipments count
[**ShipmentsAPI_patchShipmentAsync**](ShipmentsAPI.md#ShipmentsAPI_patchShipmentAsync) | **PATCH** /api/v2/ShipmentsService/Shipments/{shipmentId} | Patch a shipment
[**ShipmentsAPI_updateShipmentAsync**](ShipmentsAPI.md#ShipmentsAPI_updateShipmentAsync) | **PUT** /api/v2/ShipmentsService/Shipments/{shipmentId} | Update a shipment


# **ShipmentsAPI_createShipmentAsync**
```c
// Create a shipment
//
// Creates a new shipment for the specified tenant.
//
void ShipmentsAPI_createShipmentAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, shipment_create_dto_t *shipment_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**shipment_create_dto** | **[shipment_create_dto_t](shipment_create_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ShipmentsAPI_deleteShipmentAsync**
```c
// Delete a shipment
//
// Deletes a shipment.
//
void ShipmentsAPI_deleteShipmentAsync(apiClient_t *apiClient, char *tenantId, char *shipmentId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**shipmentId** | **char \*** |  | 
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

# **ShipmentsAPI_getShipmentByIdAsync**
```c
// Get shipment by ID
//
// Retrieves a specific shipment by its ID.
//
shipment_dto_envelope_t* ShipmentsAPI_getShipmentByIdAsync(apiClient_t *apiClient, char *tenantId, char *shipmentId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**shipmentId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[shipment_dto_envelope_t](shipment_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ShipmentsAPI_getShipmentsAsync**
```c
// Get all shipments
//
// Retrieves all shipments for the specified tenant.
//
shipment_dto_list_envelope_t* ShipmentsAPI_getShipmentsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, shipment_dto_collection_query_parameters_t *shipment_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**shipment_dto_collection_query_parameters** | **[shipment_dto_collection_query_parameters_t](shipment_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[shipment_dto_list_envelope_t](shipment_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ShipmentsAPI_getShipmentsCountAsync**
```c
// Get shipments count
//
// Returns the count of shipments for the specified tenant.
//
int32_envelope_t* ShipmentsAPI_getShipmentsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, shipment_dto_collection_query_parameters_t *shipment_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**shipment_dto_collection_query_parameters** | **[shipment_dto_collection_query_parameters_t](shipment_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ShipmentsAPI_patchShipmentAsync**
```c
// Patch a shipment
//
// Partially updates an existing shipment using JSON Patch.
//
empty_envelope_t* ShipmentsAPI_patchShipmentAsync(apiClient_t *apiClient, char *tenantId, char *shipmentId, char *api_version, char *x_api_version, list_t *patch_operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**shipmentId** | **char \*** |  | 
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

# **ShipmentsAPI_updateShipmentAsync**
```c
// Update a shipment
//
// Updates an existing shipment.
//
void ShipmentsAPI_updateShipmentAsync(apiClient_t *apiClient, char *tenantId, char *shipmentId, char *api_version, char *x_api_version, shipment_update_dto_t *shipment_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**shipmentId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**shipment_update_dto** | **[shipment_update_dto_t](shipment_update_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

