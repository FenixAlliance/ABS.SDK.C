# RefundPoliciesAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**RefundPoliciesAPI_createRefundPolicyAsync**](RefundPoliciesAPI.md#RefundPoliciesAPI_createRefundPolicyAsync) | **POST** /api/v2/SupportService/RefundPolicies | Create a new refund policy
[**RefundPoliciesAPI_deleteRefundPolicyAsync**](RefundPoliciesAPI.md#RefundPoliciesAPI_deleteRefundPolicyAsync) | **DELETE** /api/v2/SupportService/RefundPolicies/{refundPolicyId} | Delete a refund policy
[**RefundPoliciesAPI_getRefundPoliciesAsync**](RefundPoliciesAPI.md#RefundPoliciesAPI_getRefundPoliciesAsync) | **GET** /api/v2/SupportService/RefundPolicies | Retrieve a list of refund policies
[**RefundPoliciesAPI_getRefundPoliciesCountAsync**](RefundPoliciesAPI.md#RefundPoliciesAPI_getRefundPoliciesCountAsync) | **GET** /api/v2/SupportService/RefundPolicies/Count | Get the count of refund policies
[**RefundPoliciesAPI_getRefundPolicyAsync**](RefundPoliciesAPI.md#RefundPoliciesAPI_getRefundPolicyAsync) | **GET** /api/v2/SupportService/RefundPolicies/{refundPolicyId} | Retrieve a refund policy by ID
[**RefundPoliciesAPI_patchRefundPolicyAsync**](RefundPoliciesAPI.md#RefundPoliciesAPI_patchRefundPolicyAsync) | **PATCH** /api/v2/SupportService/RefundPolicies/{refundPolicyId} | Patch a refund policy
[**RefundPoliciesAPI_updateRefundPolicyAsync**](RefundPoliciesAPI.md#RefundPoliciesAPI_updateRefundPolicyAsync) | **PUT** /api/v2/SupportService/RefundPolicies/{refundPolicyId} | Update a refund policy


# **RefundPoliciesAPI_createRefundPolicyAsync**
```c
// Create a new refund policy
//
empty_envelope_t* RefundPoliciesAPI_createRefundPolicyAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, item_refund_policy_create_dto_t *item_refund_policy_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**item_refund_policy_create_dto** | **[item_refund_policy_create_dto_t](item_refund_policy_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **RefundPoliciesAPI_deleteRefundPolicyAsync**
```c
// Delete a refund policy
//
empty_envelope_t* RefundPoliciesAPI_deleteRefundPolicyAsync(apiClient_t *apiClient, char *tenantId, char *refundPolicyId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**refundPolicyId** | **char \*** |  | 
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

# **RefundPoliciesAPI_getRefundPoliciesAsync**
```c
// Retrieve a list of refund policies
//
item_refund_policy_dto_list_envelope_t* RefundPoliciesAPI_getRefundPoliciesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, item_refund_policy_dto_collection_query_parameters_t *item_refund_policy_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**item_refund_policy_dto_collection_query_parameters** | **[item_refund_policy_dto_collection_query_parameters_t](item_refund_policy_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[item_refund_policy_dto_list_envelope_t](item_refund_policy_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **RefundPoliciesAPI_getRefundPoliciesCountAsync**
```c
// Get the count of refund policies
//
int32_envelope_t* RefundPoliciesAPI_getRefundPoliciesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, item_refund_policy_dto_collection_query_parameters_t *item_refund_policy_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**item_refund_policy_dto_collection_query_parameters** | **[item_refund_policy_dto_collection_query_parameters_t](item_refund_policy_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **RefundPoliciesAPI_getRefundPolicyAsync**
```c
// Retrieve a refund policy by ID
//
item_refund_policy_dto_envelope_t* RefundPoliciesAPI_getRefundPolicyAsync(apiClient_t *apiClient, char *tenantId, char *refundPolicyId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**refundPolicyId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_refund_policy_dto_envelope_t](item_refund_policy_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **RefundPoliciesAPI_patchRefundPolicyAsync**
```c
// Patch a refund policy
//
// Partially updates an existing refund policy by its unique identifier.
//
empty_envelope_t* RefundPoliciesAPI_patchRefundPolicyAsync(apiClient_t *apiClient, char *tenantId, char *refundPolicyId, char *api_version, char *x_api_version, list_t *patch_operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**refundPolicyId** | **char \*** |  | 
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

# **RefundPoliciesAPI_updateRefundPolicyAsync**
```c
// Update a refund policy
//
empty_envelope_t* RefundPoliciesAPI_updateRefundPolicyAsync(apiClient_t *apiClient, char *tenantId, char *refundPolicyId, char *api_version, char *x_api_version, item_refund_policy_update_dto_t *item_refund_policy_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**refundPolicyId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**item_refund_policy_update_dto** | **[item_refund_policy_update_dto_t](item_refund_policy_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

