# ItemReturnPoliciesAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ItemReturnPoliciesAPI_countItemReturnPoliciesAsync**](ItemReturnPoliciesAPI.md#ItemReturnPoliciesAPI_countItemReturnPoliciesAsync) | **GET** /api/v2/CatalogService/ItemReturnPolicies/Count | Count item return policies
[**ItemReturnPoliciesAPI_getItemReturnPoliciesAsync**](ItemReturnPoliciesAPI.md#ItemReturnPoliciesAPI_getItemReturnPoliciesAsync) | **GET** /api/v2/CatalogService/ItemReturnPolicies | Get item return policies
[**ItemReturnPoliciesAPI_getItemReturnPolicyByIdAsync**](ItemReturnPoliciesAPI.md#ItemReturnPoliciesAPI_getItemReturnPolicyByIdAsync) | **GET** /api/v2/CatalogService/ItemReturnPolicies/{itemReturnPolicyId} | Get item return policy by ID
[**ItemReturnPoliciesAPI_relateItemToReturnPolicyAsync**](ItemReturnPoliciesAPI.md#ItemReturnPoliciesAPI_relateItemToReturnPolicyAsync) | **POST** /api/v2/CatalogService/ItemReturnPolicies | Relate item to return policy
[**ItemReturnPoliciesAPI_removeReturnPolicyFromItemAsync**](ItemReturnPoliciesAPI.md#ItemReturnPoliciesAPI_removeReturnPolicyFromItemAsync) | **DELETE** /api/v2/CatalogService/ItemReturnPolicies/{itemReturnPolicyId} | Remove return policy from item


# **ItemReturnPoliciesAPI_countItemReturnPoliciesAsync**
```c
// Count item return policies
//
// Counts all return policies for a specific item.
//
int32_envelope_t* ItemReturnPoliciesAPI_countItemReturnPoliciesAsync(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version);
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

# **ItemReturnPoliciesAPI_getItemReturnPoliciesAsync**
```c
// Get item return policies
//
// Retrieves all return policies for a specific item.
//
item_return_policy_dto_list_envelope_t* ItemReturnPoliciesAPI_getItemReturnPoliciesAsync(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**itemId** | **char \*** |  | [optional] 
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

# **ItemReturnPoliciesAPI_getItemReturnPolicyByIdAsync**
```c
// Get item return policy by ID
//
// Retrieves a specific return policy for an item.
//
item_return_policy_dto_envelope_t* ItemReturnPoliciesAPI_getItemReturnPolicyByIdAsync(apiClient_t *apiClient, char *itemReturnPolicyId, char *itemId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**itemReturnPolicyId** | **char \*** |  | 
**itemId** | **char \*** |  | [optional] 
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

# **ItemReturnPoliciesAPI_relateItemToReturnPolicyAsync**
```c
// Relate item to return policy
//
// Relates an item to an existing return policy.
//
void ItemReturnPoliciesAPI_relateItemToReturnPolicyAsync(apiClient_t *apiClient, char *tenantId, char *itemId, char *returnPolicyId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**itemId** | **char \*** |  | 
**returnPolicyId** | **char \*** |  | 
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

# **ItemReturnPoliciesAPI_removeReturnPolicyFromItemAsync**
```c
// Remove return policy from item
//
// Removes a return policy from an item.
//
void ItemReturnPoliciesAPI_removeReturnPolicyFromItemAsync(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemReturnPolicyId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**itemId** | **char \*** |  | 
**itemReturnPolicyId** | **char \*** |  | 
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

