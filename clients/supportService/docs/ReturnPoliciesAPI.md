# ReturnPoliciesAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ReturnPoliciesAPI_createReturnPolicyAsync**](ReturnPoliciesAPI.md#ReturnPoliciesAPI_createReturnPolicyAsync) | **POST** /api/v2/SupportService/ReturnPolicies | Create a new return policy
[**ReturnPoliciesAPI_deleteReturnPolicyAsync**](ReturnPoliciesAPI.md#ReturnPoliciesAPI_deleteReturnPolicyAsync) | **DELETE** /api/v2/SupportService/ReturnPolicies/{returnPolicyId} | Delete a return policy
[**ReturnPoliciesAPI_getReturnPoliciesAsync**](ReturnPoliciesAPI.md#ReturnPoliciesAPI_getReturnPoliciesAsync) | **GET** /api/v2/SupportService/ReturnPolicies | Retrieve a list of return policies
[**ReturnPoliciesAPI_getReturnPoliciesCountAsync**](ReturnPoliciesAPI.md#ReturnPoliciesAPI_getReturnPoliciesCountAsync) | **GET** /api/v2/SupportService/ReturnPolicies/Count | Get the count of return policies
[**ReturnPoliciesAPI_getReturnPolicyAsync**](ReturnPoliciesAPI.md#ReturnPoliciesAPI_getReturnPolicyAsync) | **GET** /api/v2/SupportService/ReturnPolicies/{returnPolicyId} | Retrieve a return policy by ID
[**ReturnPoliciesAPI_patchReturnPolicyAsync**](ReturnPoliciesAPI.md#ReturnPoliciesAPI_patchReturnPolicyAsync) | **PATCH** /api/v2/SupportService/ReturnPolicies/{returnPolicyId} | Patch a return policy
[**ReturnPoliciesAPI_updateReturnPolicyAsync**](ReturnPoliciesAPI.md#ReturnPoliciesAPI_updateReturnPolicyAsync) | **PUT** /api/v2/SupportService/ReturnPolicies/{returnPolicyId} | Update a return policy


# **ReturnPoliciesAPI_createReturnPolicyAsync**
```c
// Create a new return policy
//
empty_envelope_t* ReturnPoliciesAPI_createReturnPolicyAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, item_return_policy_create_dto_t *item_return_policy_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**item_return_policy_create_dto** | **[item_return_policy_create_dto_t](item_return_policy_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ReturnPoliciesAPI_deleteReturnPolicyAsync**
```c
// Delete a return policy
//
empty_envelope_t* ReturnPoliciesAPI_deleteReturnPolicyAsync(apiClient_t *apiClient, char *tenantId, char *returnPolicyId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**returnPolicyId** | **char \*** |  | 
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

# **ReturnPoliciesAPI_getReturnPoliciesAsync**
```c
// Retrieve a list of return policies
//
item_return_policy_dto_list_envelope_t* ReturnPoliciesAPI_getReturnPoliciesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_return_policy_dto_list_envelope_t](item_return_policy_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ReturnPoliciesAPI_getReturnPoliciesCountAsync**
```c
// Get the count of return policies
//
int32_envelope_t* ReturnPoliciesAPI_getReturnPoliciesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **ReturnPoliciesAPI_getReturnPolicyAsync**
```c
// Retrieve a return policy by ID
//
item_return_policy_dto_envelope_t* ReturnPoliciesAPI_getReturnPolicyAsync(apiClient_t *apiClient, char *tenantId, char *returnPolicyId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**returnPolicyId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_return_policy_dto_envelope_t](item_return_policy_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ReturnPoliciesAPI_patchReturnPolicyAsync**
```c
// Patch a return policy
//
// Partially updates an existing return policy by its unique identifier.
//
empty_envelope_t* ReturnPoliciesAPI_patchReturnPolicyAsync(apiClient_t *apiClient, char *tenantId, char *returnPolicyId, char *api_version, char *x_api_version, list_t *operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**returnPolicyId** | **char \*** |  | 
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

# **ReturnPoliciesAPI_updateReturnPolicyAsync**
```c
// Update a return policy
//
empty_envelope_t* ReturnPoliciesAPI_updateReturnPolicyAsync(apiClient_t *apiClient, char *tenantId, char *returnPolicyId, char *api_version, char *x_api_version, item_return_policy_update_dto_t *item_return_policy_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**returnPolicyId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**item_return_policy_update_dto** | **[item_return_policy_update_dto_t](item_return_policy_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

