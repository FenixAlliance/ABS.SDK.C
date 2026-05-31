# InquiryRequestsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**InquiryRequestsAPI_createInquiryRequestAsync**](InquiryRequestsAPI.md#InquiryRequestsAPI_createInquiryRequestAsync) | **POST** /api/v2/SupportService/InquiryRequests | Create an inquiry request
[**InquiryRequestsAPI_deleteInquiryRequestAsync**](InquiryRequestsAPI.md#InquiryRequestsAPI_deleteInquiryRequestAsync) | **DELETE** /api/v2/SupportService/InquiryRequests/{inquiryRequestId} | Delete an inquiry request
[**InquiryRequestsAPI_getInquiryRequestAsync**](InquiryRequestsAPI.md#InquiryRequestsAPI_getInquiryRequestAsync) | **GET** /api/v2/SupportService/InquiryRequests/{inquiryRequestId} | Retrieve an inquiry request by ID
[**InquiryRequestsAPI_getInquiryRequestsAsync**](InquiryRequestsAPI.md#InquiryRequestsAPI_getInquiryRequestsAsync) | **GET** /api/v2/SupportService/InquiryRequests | Retrieve inquiry requests
[**InquiryRequestsAPI_getInquiryRequestsCountAsync**](InquiryRequestsAPI.md#InquiryRequestsAPI_getInquiryRequestsCountAsync) | **GET** /api/v2/SupportService/InquiryRequests/Count | Get inquiry requests count
[**InquiryRequestsAPI_updateInquiryRequestAsync**](InquiryRequestsAPI.md#InquiryRequestsAPI_updateInquiryRequestAsync) | **PUT** /api/v2/SupportService/InquiryRequests/{inquiryRequestId} | Update an inquiry request


# **InquiryRequestsAPI_createInquiryRequestAsync**
```c
// Create an inquiry request
//
empty_envelope_t* InquiryRequestsAPI_createInquiryRequestAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, inquiry_request_create_dto_t *inquiry_request_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**inquiry_request_create_dto** | **[inquiry_request_create_dto_t](inquiry_request_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **InquiryRequestsAPI_deleteInquiryRequestAsync**
```c
// Delete an inquiry request
//
empty_envelope_t* InquiryRequestsAPI_deleteInquiryRequestAsync(apiClient_t *apiClient, char *tenantId, char *inquiryRequestId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**inquiryRequestId** | **char \*** |  | 
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

# **InquiryRequestsAPI_getInquiryRequestAsync**
```c
// Retrieve an inquiry request by ID
//
inquiry_request_dto_envelope_t* InquiryRequestsAPI_getInquiryRequestAsync(apiClient_t *apiClient, char *tenantId, char *inquiryRequestId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**inquiryRequestId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[inquiry_request_dto_envelope_t](inquiry_request_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **InquiryRequestsAPI_getInquiryRequestsAsync**
```c
// Retrieve inquiry requests
//
inquiry_request_dto_list_envelope_t* InquiryRequestsAPI_getInquiryRequestsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[inquiry_request_dto_list_envelope_t](inquiry_request_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **InquiryRequestsAPI_getInquiryRequestsCountAsync**
```c
// Get inquiry requests count
//
int32_envelope_t* InquiryRequestsAPI_getInquiryRequestsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **InquiryRequestsAPI_updateInquiryRequestAsync**
```c
// Update an inquiry request
//
empty_envelope_t* InquiryRequestsAPI_updateInquiryRequestAsync(apiClient_t *apiClient, char *tenantId, char *inquiryRequestId, char *api_version, char *x_api_version, inquiry_request_update_dto_t *inquiry_request_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**inquiryRequestId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**inquiry_request_update_dto** | **[inquiry_request_update_dto_t](inquiry_request_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

