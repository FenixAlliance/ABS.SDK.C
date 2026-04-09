# ItemRefundPoliciesAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ItemRefundPoliciesAPI_countItemRefundPoliciesAsync**](ItemRefundPoliciesAPI.md#ItemRefundPoliciesAPI_countItemRefundPoliciesAsync) | **GET** /api/v2/CatalogService/ItemRefundPolicies/Count | Count item refund policies
[**ItemRefundPoliciesAPI_getItemRefundPoliciesAsync**](ItemRefundPoliciesAPI.md#ItemRefundPoliciesAPI_getItemRefundPoliciesAsync) | **GET** /api/v2/CatalogService/ItemRefundPolicies | Get item refund policies
[**ItemRefundPoliciesAPI_getItemRefundPolicyByIdAsync**](ItemRefundPoliciesAPI.md#ItemRefundPoliciesAPI_getItemRefundPolicyByIdAsync) | **GET** /api/v2/CatalogService/ItemRefundPolicies/{itemRefundPolicyId} | Get item refund policy by ID
[**ItemRefundPoliciesAPI_relateItemToRefundPolicyAsync**](ItemRefundPoliciesAPI.md#ItemRefundPoliciesAPI_relateItemToRefundPolicyAsync) | **POST** /api/v2/CatalogService/ItemRefundPolicies | Relate item to refund policy
[**ItemRefundPoliciesAPI_removeRefundPolicyFromItemAsync**](ItemRefundPoliciesAPI.md#ItemRefundPoliciesAPI_removeRefundPolicyFromItemAsync) | **DELETE** /api/v2/CatalogService/ItemRefundPolicies/{itemRefundPolicyId} | Remove refund policy from item


# **ItemRefundPoliciesAPI_countItemRefundPoliciesAsync**
```c
// Count item refund policies
//
// Counts all refund policies for a specific item.
//
int32_envelope_t* ItemRefundPoliciesAPI_countItemRefundPoliciesAsync(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**itemId** | **char \*** |  | [optional] 
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

# **ItemRefundPoliciesAPI_getItemRefundPoliciesAsync**
```c
// Get item refund policies
//
// Retrieves all refund policies for a specific item.
//
item_refund_policy_dto_list_envelope_t* ItemRefundPoliciesAPI_getItemRefundPoliciesAsync(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**itemId** | **char \*** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_refund_policy_dto_list_envelope_t](item_refund_policy_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemRefundPoliciesAPI_getItemRefundPolicyByIdAsync**
```c
// Get item refund policy by ID
//
// Retrieves a specific refund policy for an item.
//
item_refund_policy_dto_envelope_t* ItemRefundPoliciesAPI_getItemRefundPolicyByIdAsync(apiClient_t *apiClient, char *itemRefundPolicyId, char *itemId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**itemRefundPolicyId** | **char \*** |  | 
**itemId** | **char \*** |  | [optional] 
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

# **ItemRefundPoliciesAPI_relateItemToRefundPolicyAsync**
```c
// Relate item to refund policy
//
// Relates an item to an existing refund policy.
//
void ItemRefundPoliciesAPI_relateItemToRefundPolicyAsync(apiClient_t *apiClient, char *tenantId, char *itemId, char *refundPolicyId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**itemId** | **char \*** |  | 
**refundPolicyId** | **char \*** |  | 
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

# **ItemRefundPoliciesAPI_removeRefundPolicyFromItemAsync**
```c
// Remove refund policy from item
//
// Removes a refund policy from an item.
//
void ItemRefundPoliciesAPI_removeRefundPolicyFromItemAsync(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemRefundPolicyId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**itemId** | **char \*** |  | 
**itemRefundPolicyId** | **char \*** |  | 
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

