# WorkstationsAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**WorkstationsAPI_createWorkstationAsync**](WorkstationsAPI.md#WorkstationsAPI_createWorkstationAsync) | **POST** /api/v2/ManufacturingService/Workstations | Create a new workstation
[**WorkstationsAPI_deleteWorkstationAsync**](WorkstationsAPI.md#WorkstationsAPI_deleteWorkstationAsync) | **DELETE** /api/v2/ManufacturingService/Workstations/{id} | Delete a workstation
[**WorkstationsAPI_getWorkstationByIdAsync**](WorkstationsAPI.md#WorkstationsAPI_getWorkstationByIdAsync) | **GET** /api/v2/ManufacturingService/Workstations/{id} | Get workstation by ID
[**WorkstationsAPI_getWorkstationsAsync**](WorkstationsAPI.md#WorkstationsAPI_getWorkstationsAsync) | **GET** /api/v2/ManufacturingService/Workstations | Get all workstations
[**WorkstationsAPI_getWorkstationsCountAsync**](WorkstationsAPI.md#WorkstationsAPI_getWorkstationsCountAsync) | **GET** /api/v2/ManufacturingService/Workstations/Count | Get workstations count
[**WorkstationsAPI_patchWorkstationAsync**](WorkstationsAPI.md#WorkstationsAPI_patchWorkstationAsync) | **PATCH** /api/v2/ManufacturingService/Workstations/{id} | Patch a workstation
[**WorkstationsAPI_updateWorkstationAsync**](WorkstationsAPI.md#WorkstationsAPI_updateWorkstationAsync) | **PUT** /api/v2/ManufacturingService/Workstations/{id} | Update a workstation


# **WorkstationsAPI_createWorkstationAsync**
```c
// Create a new workstation
//
// Creates a new workstation for the specified tenant.
//
void WorkstationsAPI_createWorkstationAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, workstation_create_dto_t *workstation_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**workstation_create_dto** | **[workstation_create_dto_t](workstation_create_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WorkstationsAPI_deleteWorkstationAsync**
```c
// Delete a workstation
//
// Deletes a workstation for the specified tenant.
//
void WorkstationsAPI_deleteWorkstationAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);
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

# **WorkstationsAPI_getWorkstationByIdAsync**
```c
// Get workstation by ID
//
// Retrieves a specific workstation by its identifier.
//
workstation_dto_t* WorkstationsAPI_getWorkstationByIdAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);
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

[workstation_dto_t](workstation_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WorkstationsAPI_getWorkstationsAsync**
```c
// Get all workstations
//
// Retrieves all workstations for the specified tenant.
//
workstation_dto_list_envelope_t* WorkstationsAPI_getWorkstationsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[workstation_dto_list_envelope_t](workstation_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WorkstationsAPI_getWorkstationsCountAsync**
```c
// Get workstations count
//
// Returns the count of workstations for the specified tenant.
//
int32_envelope_t* WorkstationsAPI_getWorkstationsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **WorkstationsAPI_patchWorkstationAsync**
```c
// Patch a workstation
//
// Patch a workstation
//
empty_envelope_t* WorkstationsAPI_patchWorkstationAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, list_t *operation);
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

# **WorkstationsAPI_updateWorkstationAsync**
```c
// Update a workstation
//
// Updates an existing workstation for the specified tenant.
//
void WorkstationsAPI_updateWorkstationAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, workstation_update_dto_t *workstation_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**id** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**workstation_update_dto** | **[workstation_update_dto_t](workstation_update_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

