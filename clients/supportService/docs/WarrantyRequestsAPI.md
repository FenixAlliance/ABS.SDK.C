# WarrantyRequestsAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**WarrantyRequestsAPI_createWarrantyRequestAsync**](WarrantyRequestsAPI.md#WarrantyRequestsAPI_createWarrantyRequestAsync) | **POST** /api/v2/SupportService/WarrantyRequests | Create a warranty request
[**WarrantyRequestsAPI_deleteWarrantyRequestAsync**](WarrantyRequestsAPI.md#WarrantyRequestsAPI_deleteWarrantyRequestAsync) | **DELETE** /api/v2/SupportService/WarrantyRequests/{warrantyRequestId} | Delete a warranty request
[**WarrantyRequestsAPI_getWarrantyRequestAsync**](WarrantyRequestsAPI.md#WarrantyRequestsAPI_getWarrantyRequestAsync) | **GET** /api/v2/SupportService/WarrantyRequests/{warrantyRequestId} | Retrieve a warranty request by ID
[**WarrantyRequestsAPI_getWarrantyRequestsAsync**](WarrantyRequestsAPI.md#WarrantyRequestsAPI_getWarrantyRequestsAsync) | **GET** /api/v2/SupportService/WarrantyRequests | Retrieve warranty requests
[**WarrantyRequestsAPI_getWarrantyRequestsCountAsync**](WarrantyRequestsAPI.md#WarrantyRequestsAPI_getWarrantyRequestsCountAsync) | **GET** /api/v2/SupportService/WarrantyRequests/Count | Get warranty requests count
[**WarrantyRequestsAPI_patchWarrantyRequestAsync**](WarrantyRequestsAPI.md#WarrantyRequestsAPI_patchWarrantyRequestAsync) | **PATCH** /api/v2/SupportService/WarrantyRequests/{warrantyRequestId} | Patch a warranty request
[**WarrantyRequestsAPI_updateWarrantyRequestAsync**](WarrantyRequestsAPI.md#WarrantyRequestsAPI_updateWarrantyRequestAsync) | **PUT** /api/v2/SupportService/WarrantyRequests/{warrantyRequestId} | Update a warranty request


# **WarrantyRequestsAPI_createWarrantyRequestAsync**
```c
// Create a warranty request
//
empty_envelope_t* WarrantyRequestsAPI_createWarrantyRequestAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, warranty_request_create_dto_t *warranty_request_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**warranty_request_create_dto** | **[warranty_request_create_dto_t](warranty_request_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WarrantyRequestsAPI_deleteWarrantyRequestAsync**
```c
// Delete a warranty request
//
empty_envelope_t* WarrantyRequestsAPI_deleteWarrantyRequestAsync(apiClient_t *apiClient, char *tenantId, char *warrantyRequestId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**warrantyRequestId** | **char \*** |  | 
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

# **WarrantyRequestsAPI_getWarrantyRequestAsync**
```c
// Retrieve a warranty request by ID
//
warranty_request_dto_envelope_t* WarrantyRequestsAPI_getWarrantyRequestAsync(apiClient_t *apiClient, char *tenantId, char *warrantyRequestId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**warrantyRequestId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[warranty_request_dto_envelope_t](warranty_request_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WarrantyRequestsAPI_getWarrantyRequestsAsync**
```c
// Retrieve warranty requests
//
warranty_request_dto_list_envelope_t* WarrantyRequestsAPI_getWarrantyRequestsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[warranty_request_dto_list_envelope_t](warranty_request_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WarrantyRequestsAPI_getWarrantyRequestsCountAsync**
```c
// Get warranty requests count
//
int32_envelope_t* WarrantyRequestsAPI_getWarrantyRequestsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **WarrantyRequestsAPI_patchWarrantyRequestAsync**
```c
// Patch a warranty request
//
// Partially updates an existing warranty request by its unique identifier.
//
empty_envelope_t* WarrantyRequestsAPI_patchWarrantyRequestAsync(apiClient_t *apiClient, char *tenantId, char *warrantyRequestId, char *api_version, char *x_api_version, list_t *operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**warrantyRequestId** | **char \*** |  | 
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

# **WarrantyRequestsAPI_updateWarrantyRequestAsync**
```c
// Update a warranty request
//
empty_envelope_t* WarrantyRequestsAPI_updateWarrantyRequestAsync(apiClient_t *apiClient, char *tenantId, char *warrantyRequestId, char *api_version, char *x_api_version, warranty_request_update_dto_t *warranty_request_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**warrantyRequestId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**warranty_request_update_dto** | **[warranty_request_update_dto_t](warranty_request_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

