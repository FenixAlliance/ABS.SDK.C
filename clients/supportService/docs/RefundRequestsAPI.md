# RefundRequestsAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**RefundRequestsAPI_createRefundRequestAsync**](RefundRequestsAPI.md#RefundRequestsAPI_createRefundRequestAsync) | **POST** /api/v2/SupportService/RefundRequests | Create a refund request
[**RefundRequestsAPI_deleteRefundRequestAsync**](RefundRequestsAPI.md#RefundRequestsAPI_deleteRefundRequestAsync) | **DELETE** /api/v2/SupportService/RefundRequests/{refundRequestId} | Delete a refund request
[**RefundRequestsAPI_getRefundRequestAsync**](RefundRequestsAPI.md#RefundRequestsAPI_getRefundRequestAsync) | **GET** /api/v2/SupportService/RefundRequests/{refundRequestId} | Retrieve a refund request by ID
[**RefundRequestsAPI_getRefundRequestsAsync**](RefundRequestsAPI.md#RefundRequestsAPI_getRefundRequestsAsync) | **GET** /api/v2/SupportService/RefundRequests | Retrieve refund requests
[**RefundRequestsAPI_getRefundRequestsCountAsync**](RefundRequestsAPI.md#RefundRequestsAPI_getRefundRequestsCountAsync) | **GET** /api/v2/SupportService/RefundRequests/Count | Get refund requests count
[**RefundRequestsAPI_patchRefundRequestAsync**](RefundRequestsAPI.md#RefundRequestsAPI_patchRefundRequestAsync) | **PATCH** /api/v2/SupportService/RefundRequests/{refundRequestId} | Patch a refund request
[**RefundRequestsAPI_updateRefundRequestAsync**](RefundRequestsAPI.md#RefundRequestsAPI_updateRefundRequestAsync) | **PUT** /api/v2/SupportService/RefundRequests/{refundRequestId} | Update a refund request


# **RefundRequestsAPI_createRefundRequestAsync**
```c
// Create a refund request
//
empty_envelope_t* RefundRequestsAPI_createRefundRequestAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, refund_request_create_dto_t *refund_request_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**refund_request_create_dto** | **[refund_request_create_dto_t](refund_request_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **RefundRequestsAPI_deleteRefundRequestAsync**
```c
// Delete a refund request
//
empty_envelope_t* RefundRequestsAPI_deleteRefundRequestAsync(apiClient_t *apiClient, char *tenantId, char *refundRequestId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**refundRequestId** | **char \*** |  | 
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

# **RefundRequestsAPI_getRefundRequestAsync**
```c
// Retrieve a refund request by ID
//
refund_request_dto_envelope_t* RefundRequestsAPI_getRefundRequestAsync(apiClient_t *apiClient, char *tenantId, char *refundRequestId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**refundRequestId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[refund_request_dto_envelope_t](refund_request_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **RefundRequestsAPI_getRefundRequestsAsync**
```c
// Retrieve refund requests
//
refund_request_dto_list_envelope_t* RefundRequestsAPI_getRefundRequestsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[refund_request_dto_list_envelope_t](refund_request_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **RefundRequestsAPI_getRefundRequestsCountAsync**
```c
// Get refund requests count
//
int32_envelope_t* RefundRequestsAPI_getRefundRequestsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **RefundRequestsAPI_patchRefundRequestAsync**
```c
// Patch a refund request
//
// Partially updates an existing refund request by its unique identifier.
//
empty_envelope_t* RefundRequestsAPI_patchRefundRequestAsync(apiClient_t *apiClient, char *tenantId, char *refundRequestId, char *api_version, char *x_api_version, list_t *operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**refundRequestId** | **char \*** |  | 
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

# **RefundRequestsAPI_updateRefundRequestAsync**
```c
// Update a refund request
//
empty_envelope_t* RefundRequestsAPI_updateRefundRequestAsync(apiClient_t *apiClient, char *tenantId, char *refundRequestId, char *api_version, char *x_api_version, refund_request_update_dto_t *refund_request_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**refundRequestId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**refund_request_update_dto** | **[refund_request_update_dto_t](refund_request_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

