# WorkOrdersAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**WorkOrdersAPI_createWorkOrderAsync**](WorkOrdersAPI.md#WorkOrdersAPI_createWorkOrderAsync) | **POST** /api/v2/ManufacturingService/WorkOrders | Create a new work order
[**WorkOrdersAPI_deleteWorkOrderAsync**](WorkOrdersAPI.md#WorkOrdersAPI_deleteWorkOrderAsync) | **DELETE** /api/v2/ManufacturingService/WorkOrders/{id} | Delete a work order
[**WorkOrdersAPI_getWorkOrderByIdAsync**](WorkOrdersAPI.md#WorkOrdersAPI_getWorkOrderByIdAsync) | **GET** /api/v2/ManufacturingService/WorkOrders/{id} | Get work order by ID
[**WorkOrdersAPI_getWorkOrdersAsync**](WorkOrdersAPI.md#WorkOrdersAPI_getWorkOrdersAsync) | **GET** /api/v2/ManufacturingService/WorkOrders | Get all work orders
[**WorkOrdersAPI_getWorkOrdersCountAsync**](WorkOrdersAPI.md#WorkOrdersAPI_getWorkOrdersCountAsync) | **GET** /api/v2/ManufacturingService/WorkOrders/Count | Get work orders count
[**WorkOrdersAPI_patchWorkOrderAsync**](WorkOrdersAPI.md#WorkOrdersAPI_patchWorkOrderAsync) | **PATCH** /api/v2/ManufacturingService/WorkOrders/{id} | Patch a work order
[**WorkOrdersAPI_updateWorkOrderAsync**](WorkOrdersAPI.md#WorkOrdersAPI_updateWorkOrderAsync) | **PUT** /api/v2/ManufacturingService/WorkOrders/{id} | Update a work order


# **WorkOrdersAPI_createWorkOrderAsync**
```c
// Create a new work order
//
// Creates a new work order for the specified tenant.
//
void WorkOrdersAPI_createWorkOrderAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, work_order_create_dto_t *work_order_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**work_order_create_dto** | **[work_order_create_dto_t](work_order_create_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WorkOrdersAPI_deleteWorkOrderAsync**
```c
// Delete a work order
//
// Deletes a work order for the specified tenant.
//
void WorkOrdersAPI_deleteWorkOrderAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);
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

# **WorkOrdersAPI_getWorkOrderByIdAsync**
```c
// Get work order by ID
//
// Retrieves a specific work order by its identifier.
//
work_order_dto_t* WorkOrdersAPI_getWorkOrderByIdAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);
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

[work_order_dto_t](work_order_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WorkOrdersAPI_getWorkOrdersAsync**
```c
// Get all work orders
//
// Retrieves all work orders for the specified tenant.
//
work_order_dto_list_envelope_t* WorkOrdersAPI_getWorkOrdersAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, work_order_dto_collection_query_parameters_t *work_order_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**work_order_dto_collection_query_parameters** | **[work_order_dto_collection_query_parameters_t](work_order_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[work_order_dto_list_envelope_t](work_order_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WorkOrdersAPI_getWorkOrdersCountAsync**
```c
// Get work orders count
//
// Returns the count of work orders for the specified tenant.
//
int32_envelope_t* WorkOrdersAPI_getWorkOrdersCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, work_order_dto_collection_query_parameters_t *work_order_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**work_order_dto_collection_query_parameters** | **[work_order_dto_collection_query_parameters_t](work_order_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WorkOrdersAPI_patchWorkOrderAsync**
```c
// Patch a work order
//
// Patch a work order
//
empty_envelope_t* WorkOrdersAPI_patchWorkOrderAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, list_t *patch_operation);
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

# **WorkOrdersAPI_updateWorkOrderAsync**
```c
// Update a work order
//
// Updates an existing work order for the specified tenant.
//
void WorkOrdersAPI_updateWorkOrderAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, work_order_update_dto_t *work_order_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**id** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**work_order_update_dto** | **[work_order_update_dto_t](work_order_update_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

