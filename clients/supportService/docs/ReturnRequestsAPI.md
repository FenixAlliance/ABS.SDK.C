# ReturnRequestsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ReturnRequestsAPI_createReturnRequestAsync**](ReturnRequestsAPI.md#ReturnRequestsAPI_createReturnRequestAsync) | **POST** /api/v2/SupportService/ReturnRequests | Create a return request
[**ReturnRequestsAPI_deleteReturnRequestAsync**](ReturnRequestsAPI.md#ReturnRequestsAPI_deleteReturnRequestAsync) | **DELETE** /api/v2/SupportService/ReturnRequests/{returnRequestId} | Delete a return request
[**ReturnRequestsAPI_getReturnRequestAsync**](ReturnRequestsAPI.md#ReturnRequestsAPI_getReturnRequestAsync) | **GET** /api/v2/SupportService/ReturnRequests/{returnRequestId} | Retrieve a return request by ID
[**ReturnRequestsAPI_getReturnRequestsAsync**](ReturnRequestsAPI.md#ReturnRequestsAPI_getReturnRequestsAsync) | **GET** /api/v2/SupportService/ReturnRequests | Retrieve return requests
[**ReturnRequestsAPI_getReturnRequestsCountAsync**](ReturnRequestsAPI.md#ReturnRequestsAPI_getReturnRequestsCountAsync) | **GET** /api/v2/SupportService/ReturnRequests/Count | Get return requests count
[**ReturnRequestsAPI_updateReturnRequestAsync**](ReturnRequestsAPI.md#ReturnRequestsAPI_updateReturnRequestAsync) | **PUT** /api/v2/SupportService/ReturnRequests/{returnRequestId} | Update a return request


# **ReturnRequestsAPI_createReturnRequestAsync**
```c
// Create a return request
//
empty_envelope_t* ReturnRequestsAPI_createReturnRequestAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, return_request_create_dto_t *return_request_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**return_request_create_dto** | **[return_request_create_dto_t](return_request_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ReturnRequestsAPI_deleteReturnRequestAsync**
```c
// Delete a return request
//
empty_envelope_t* ReturnRequestsAPI_deleteReturnRequestAsync(apiClient_t *apiClient, char *tenantId, char *returnRequestId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**returnRequestId** | **char \*** |  | 
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

# **ReturnRequestsAPI_getReturnRequestAsync**
```c
// Retrieve a return request by ID
//
return_request_dto_envelope_t* ReturnRequestsAPI_getReturnRequestAsync(apiClient_t *apiClient, char *tenantId, char *returnRequestId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**returnRequestId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[return_request_dto_envelope_t](return_request_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ReturnRequestsAPI_getReturnRequestsAsync**
```c
// Retrieve return requests
//
return_request_dto_list_envelope_t* ReturnRequestsAPI_getReturnRequestsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[return_request_dto_list_envelope_t](return_request_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ReturnRequestsAPI_getReturnRequestsCountAsync**
```c
// Get return requests count
//
int32_envelope_t* ReturnRequestsAPI_getReturnRequestsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **ReturnRequestsAPI_updateReturnRequestAsync**
```c
// Update a return request
//
empty_envelope_t* ReturnRequestsAPI_updateReturnRequestAsync(apiClient_t *apiClient, char *tenantId, char *returnRequestId, char *api_version, char *x_api_version, return_request_update_dto_t *return_request_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**returnRequestId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**return_request_update_dto** | **[return_request_update_dto_t](return_request_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

