# WorkOrderTypesAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**WorkOrderTypesAPI_createWorkOrderTypeAsync**](WorkOrderTypesAPI.md#WorkOrderTypesAPI_createWorkOrderTypeAsync) | **POST** /api/v2/ManufacturingService/WorkOrderTypes | Create a new work order type
[**WorkOrderTypesAPI_deleteWorkOrderTypeAsync**](WorkOrderTypesAPI.md#WorkOrderTypesAPI_deleteWorkOrderTypeAsync) | **DELETE** /api/v2/ManufacturingService/WorkOrderTypes/{id} | Delete a work order type
[**WorkOrderTypesAPI_getWorkOrderTypeByIdAsync**](WorkOrderTypesAPI.md#WorkOrderTypesAPI_getWorkOrderTypeByIdAsync) | **GET** /api/v2/ManufacturingService/WorkOrderTypes/{id} | Get work order type by ID
[**WorkOrderTypesAPI_getWorkOrderTypesAsync**](WorkOrderTypesAPI.md#WorkOrderTypesAPI_getWorkOrderTypesAsync) | **GET** /api/v2/ManufacturingService/WorkOrderTypes | Get all work order types
[**WorkOrderTypesAPI_getWorkOrderTypesCountAsync**](WorkOrderTypesAPI.md#WorkOrderTypesAPI_getWorkOrderTypesCountAsync) | **GET** /api/v2/ManufacturingService/WorkOrderTypes/Count | Get work order types count
[**WorkOrderTypesAPI_patchWorkOrderTypeAsync**](WorkOrderTypesAPI.md#WorkOrderTypesAPI_patchWorkOrderTypeAsync) | **PATCH** /api/v2/ManufacturingService/WorkOrderTypes/{id} | Patch a work order type
[**WorkOrderTypesAPI_updateWorkOrderTypeAsync**](WorkOrderTypesAPI.md#WorkOrderTypesAPI_updateWorkOrderTypeAsync) | **PUT** /api/v2/ManufacturingService/WorkOrderTypes/{id} | Update a work order type


# **WorkOrderTypesAPI_createWorkOrderTypeAsync**
```c
// Create a new work order type
//
// Creates a new work order type for the specified tenant.
//
void WorkOrderTypesAPI_createWorkOrderTypeAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, work_order_type_create_dto_t *work_order_type_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**work_order_type_create_dto** | **[work_order_type_create_dto_t](work_order_type_create_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WorkOrderTypesAPI_deleteWorkOrderTypeAsync**
```c
// Delete a work order type
//
// Deletes a work order type for the specified tenant.
//
void WorkOrderTypesAPI_deleteWorkOrderTypeAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);
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

# **WorkOrderTypesAPI_getWorkOrderTypeByIdAsync**
```c
// Get work order type by ID
//
// Retrieves a specific work order type by its identifier.
//
work_order_type_dto_t* WorkOrderTypesAPI_getWorkOrderTypeByIdAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);
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

[work_order_type_dto_t](work_order_type_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WorkOrderTypesAPI_getWorkOrderTypesAsync**
```c
// Get all work order types
//
// Retrieves all work order types for the specified tenant.
//
work_order_type_dto_list_envelope_t* WorkOrderTypesAPI_getWorkOrderTypesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[work_order_type_dto_list_envelope_t](work_order_type_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WorkOrderTypesAPI_getWorkOrderTypesCountAsync**
```c
// Get work order types count
//
// Returns the count of work order types for the specified tenant.
//
int32_envelope_t* WorkOrderTypesAPI_getWorkOrderTypesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **WorkOrderTypesAPI_patchWorkOrderTypeAsync**
```c
// Patch a work order type
//
// Patch a work order type
//
empty_envelope_t* WorkOrderTypesAPI_patchWorkOrderTypeAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, list_t *operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**id** | **char \*** |  | 
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

# **WorkOrderTypesAPI_updateWorkOrderTypeAsync**
```c
// Update a work order type
//
// Updates an existing work order type for the specified tenant.
//
void WorkOrderTypesAPI_updateWorkOrderTypeAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, work_order_type_update_dto_t *work_order_type_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**id** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**work_order_type_update_dto** | **[work_order_type_update_dto_t](work_order_type_update_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

