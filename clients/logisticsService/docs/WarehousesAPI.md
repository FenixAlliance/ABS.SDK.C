# WarehousesAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**WarehousesAPI_createWarehouseAsync**](WarehousesAPI.md#WarehousesAPI_createWarehouseAsync) | **POST** /api/v2/LogisticsService/Warehouses | Create a warehouse
[**WarehousesAPI_deleteWarehouseAsync**](WarehousesAPI.md#WarehousesAPI_deleteWarehouseAsync) | **DELETE** /api/v2/LogisticsService/Warehouses/{warehouseId} | Delete a warehouse
[**WarehousesAPI_getWarehouseByIdAsync**](WarehousesAPI.md#WarehousesAPI_getWarehouseByIdAsync) | **GET** /api/v2/LogisticsService/Warehouses/{warehouseId} | Get warehouse by ID
[**WarehousesAPI_getWarehousesAsync**](WarehousesAPI.md#WarehousesAPI_getWarehousesAsync) | **GET** /api/v2/LogisticsService/Warehouses | Get all warehouses
[**WarehousesAPI_getWarehousesCountAsync**](WarehousesAPI.md#WarehousesAPI_getWarehousesCountAsync) | **GET** /api/v2/LogisticsService/Warehouses/Count | Get warehouses count
[**WarehousesAPI_patchWarehouseAsync**](WarehousesAPI.md#WarehousesAPI_patchWarehouseAsync) | **PATCH** /api/v2/LogisticsService/Warehouses/{warehouseId} | Patch a warehouse
[**WarehousesAPI_updateWarehouseAsync**](WarehousesAPI.md#WarehousesAPI_updateWarehouseAsync) | **PUT** /api/v2/LogisticsService/Warehouses/{warehouseId} | Update a warehouse


# **WarehousesAPI_createWarehouseAsync**
```c
// Create a warehouse
//
// Creates a new warehouse.
//
empty_envelope_t* WarehousesAPI_createWarehouseAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, warehouse_create_dto_t *warehouse_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**warehouse_create_dto** | **[warehouse_create_dto_t](warehouse_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WarehousesAPI_deleteWarehouseAsync**
```c
// Delete a warehouse
//
// Deletes a warehouse.
//
empty_envelope_t* WarehousesAPI_deleteWarehouseAsync(apiClient_t *apiClient, char *tenantId, char *warehouseId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**warehouseId** | **char \*** |  | 
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

# **WarehousesAPI_getWarehouseByIdAsync**
```c
// Get warehouse by ID
//
// Retrieves a specific warehouse.
//
warehouse_dto_envelope_t* WarehousesAPI_getWarehouseByIdAsync(apiClient_t *apiClient, char *tenantId, char *warehouseId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**warehouseId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[warehouse_dto_envelope_t](warehouse_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WarehousesAPI_getWarehousesAsync**
```c
// Get all warehouses
//
// Retrieves all warehouses for the specified tenant.
//
warehouse_dto_list_envelope_t* WarehousesAPI_getWarehousesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[warehouse_dto_list_envelope_t](warehouse_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WarehousesAPI_getWarehousesCountAsync**
```c
// Get warehouses count
//
// Returns the count of warehouses.
//
int32_envelope_t* WarehousesAPI_getWarehousesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **WarehousesAPI_patchWarehouseAsync**
```c
// Patch a warehouse
//
// Partially updates an existing warehouse using JSON Patch.
//
empty_envelope_t* WarehousesAPI_patchWarehouseAsync(apiClient_t *apiClient, char *tenantId, char *warehouseId, char *api_version, char *x_api_version, list_t *operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**warehouseId** | **char \*** |  | 
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

# **WarehousesAPI_updateWarehouseAsync**
```c
// Update a warehouse
//
// Updates an existing warehouse.
//
empty_envelope_t* WarehousesAPI_updateWarehouseAsync(apiClient_t *apiClient, char *tenantId, char *warehouseId, char *api_version, char *x_api_version, warehouse_update_dto_t *warehouse_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**warehouseId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**warehouse_update_dto** | **[warehouse_update_dto_t](warehouse_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

