# ItemShippingPoliciesAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ItemShippingPoliciesAPI_createItemShippingPolicyAsync**](ItemShippingPoliciesAPI.md#ItemShippingPoliciesAPI_createItemShippingPolicyAsync) | **POST** /api/v2/ShipmentsService/ItemShippingPolicies | Create an item shipping policy
[**ItemShippingPoliciesAPI_deleteItemShippingPolicyAsync**](ItemShippingPoliciesAPI.md#ItemShippingPoliciesAPI_deleteItemShippingPolicyAsync) | **DELETE** /api/v2/ShipmentsService/ItemShippingPolicies/{policyId} | Delete an item shipping policy
[**ItemShippingPoliciesAPI_getItemShippingPoliciesAsync**](ItemShippingPoliciesAPI.md#ItemShippingPoliciesAPI_getItemShippingPoliciesAsync) | **GET** /api/v2/ShipmentsService/ItemShippingPolicies | Get all item shipping policies
[**ItemShippingPoliciesAPI_getItemShippingPoliciesCountAsync**](ItemShippingPoliciesAPI.md#ItemShippingPoliciesAPI_getItemShippingPoliciesCountAsync) | **GET** /api/v2/ShipmentsService/ItemShippingPolicies/Count | Get item shipping policies count
[**ItemShippingPoliciesAPI_getItemShippingPolicyByIdAsync**](ItemShippingPoliciesAPI.md#ItemShippingPoliciesAPI_getItemShippingPolicyByIdAsync) | **GET** /api/v2/ShipmentsService/ItemShippingPolicies/{policyId} | Get item shipping policy by ID
[**ItemShippingPoliciesAPI_patchItemShippingPolicyAsync**](ItemShippingPoliciesAPI.md#ItemShippingPoliciesAPI_patchItemShippingPolicyAsync) | **PATCH** /api/v2/ShipmentsService/ItemShippingPolicies/{policyId} | Patch an item shipping policy
[**ItemShippingPoliciesAPI_updateItemShippingPolicyAsync**](ItemShippingPoliciesAPI.md#ItemShippingPoliciesAPI_updateItemShippingPolicyAsync) | **PUT** /api/v2/ShipmentsService/ItemShippingPolicies/{policyId} | Update an item shipping policy


# **ItemShippingPoliciesAPI_createItemShippingPolicyAsync**
```c
// Create an item shipping policy
//
// Creates a new item shipping policy.
//
void ItemShippingPoliciesAPI_createItemShippingPolicyAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, item_shipping_policy_create_dto_t *item_shipping_policy_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**item_shipping_policy_create_dto** | **[item_shipping_policy_create_dto_t](item_shipping_policy_create_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemShippingPoliciesAPI_deleteItemShippingPolicyAsync**
```c
// Delete an item shipping policy
//
// Deletes an item shipping policy.
//
void ItemShippingPoliciesAPI_deleteItemShippingPolicyAsync(apiClient_t *apiClient, char *tenantId, char *policyId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**policyId** | **char \*** |  | 
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

# **ItemShippingPoliciesAPI_getItemShippingPoliciesAsync**
```c
// Get all item shipping policies
//
// Retrieves all item shipping policies for the specified tenant.
//
item_shipping_policy_dto_list_envelope_t* ItemShippingPoliciesAPI_getItemShippingPoliciesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_shipping_policy_dto_list_envelope_t](item_shipping_policy_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemShippingPoliciesAPI_getItemShippingPoliciesCountAsync**
```c
// Get item shipping policies count
//
// Returns the count of item shipping policies.
//
int32_envelope_t* ItemShippingPoliciesAPI_getItemShippingPoliciesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **ItemShippingPoliciesAPI_getItemShippingPolicyByIdAsync**
```c
// Get item shipping policy by ID
//
// Retrieves a specific item shipping policy.
//
item_shipping_policy_dto_envelope_t* ItemShippingPoliciesAPI_getItemShippingPolicyByIdAsync(apiClient_t *apiClient, char *tenantId, char *policyId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**policyId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_shipping_policy_dto_envelope_t](item_shipping_policy_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemShippingPoliciesAPI_patchItemShippingPolicyAsync**
```c
// Patch an item shipping policy
//
// Partially updates an existing item shipping policy using JSON Patch.
//
empty_envelope_t* ItemShippingPoliciesAPI_patchItemShippingPolicyAsync(apiClient_t *apiClient, char *tenantId, char *policyId, char *api_version, char *x_api_version, list_t *operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**policyId** | **char \*** |  | 
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

# **ItemShippingPoliciesAPI_updateItemShippingPolicyAsync**
```c
// Update an item shipping policy
//
// Updates an existing item shipping policy.
//
void ItemShippingPoliciesAPI_updateItemShippingPolicyAsync(apiClient_t *apiClient, char *tenantId, char *policyId, char *api_version, char *x_api_version, item_shipping_policy_update_dto_t *item_shipping_policy_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**policyId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**item_shipping_policy_update_dto** | **[item_shipping_policy_update_dto_t](item_shipping_policy_update_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

