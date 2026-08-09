# ItemShippingPoliciesAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ItemShippingPoliciesAPI_countItemShippingPoliciesAsync**](ItemShippingPoliciesAPI.md#ItemShippingPoliciesAPI_countItemShippingPoliciesAsync) | **GET** /api/v2/CatalogService/ItemShippingPolicies/Count | Count item shipping policies
[**ItemShippingPoliciesAPI_getCatalogItemShippingPoliciesAsync**](ItemShippingPoliciesAPI.md#ItemShippingPoliciesAPI_getCatalogItemShippingPoliciesAsync) | **GET** /api/v2/CatalogService/ItemShippingPolicies | Get item shipping policies
[**ItemShippingPoliciesAPI_getCatalogItemShippingPolicyByIdAsync**](ItemShippingPoliciesAPI.md#ItemShippingPoliciesAPI_getCatalogItemShippingPolicyByIdAsync) | **GET** /api/v2/CatalogService/ItemShippingPolicies/{itemShippingPolicyId} | Get item shipping policy by ID
[**ItemShippingPoliciesAPI_relateItemToShippingPolicyAsync**](ItemShippingPoliciesAPI.md#ItemShippingPoliciesAPI_relateItemToShippingPolicyAsync) | **POST** /api/v2/CatalogService/ItemShippingPolicies | Relate item to shipping policy
[**ItemShippingPoliciesAPI_removeShippingPolicyFromItemAsync**](ItemShippingPoliciesAPI.md#ItemShippingPoliciesAPI_removeShippingPolicyFromItemAsync) | **DELETE** /api/v2/CatalogService/ItemShippingPolicies/{itemShippingPolicyId} | Remove shipping policy from item


# **ItemShippingPoliciesAPI_countItemShippingPoliciesAsync**
```c
// Count item shipping policies
//
// Counts all shipping policies for a specific item.
//
int32_envelope_t* ItemShippingPoliciesAPI_countItemShippingPoliciesAsync(apiClient_t *apiClient, char *tenantId, char *itemId, char *api_version, char *x_api_version, item_shipping_policy_dto_collection_query_parameters_t *item_shipping_policy_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | [optional] 
**itemId** | **char \*** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**item_shipping_policy_dto_collection_query_parameters** | **[item_shipping_policy_dto_collection_query_parameters_t](item_shipping_policy_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemShippingPoliciesAPI_getCatalogItemShippingPoliciesAsync**
```c
// Get item shipping policies
//
// Retrieves all shipping policies for a specific item.
//
item_shipping_policy_dto_list_envelope_t* ItemShippingPoliciesAPI_getCatalogItemShippingPoliciesAsync(apiClient_t *apiClient, char *tenantId, char *itemId, char *api_version, char *x_api_version, item_shipping_policy_dto_collection_query_parameters_t *item_shipping_policy_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | [optional] 
**itemId** | **char \*** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**item_shipping_policy_dto_collection_query_parameters** | **[item_shipping_policy_dto_collection_query_parameters_t](item_shipping_policy_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[item_shipping_policy_dto_list_envelope_t](item_shipping_policy_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemShippingPoliciesAPI_getCatalogItemShippingPolicyByIdAsync**
```c
// Get item shipping policy by ID
//
// Retrieves a specific shipping policy for an item.
//
item_shipping_policy_dto_envelope_t* ItemShippingPoliciesAPI_getCatalogItemShippingPolicyByIdAsync(apiClient_t *apiClient, char *itemShippingPolicyId, char *tenantId, char *itemId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**itemShippingPolicyId** | **char \*** |  | 
**tenantId** | **char \*** |  | [optional] 
**itemId** | **char \*** |  | [optional] 
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

# **ItemShippingPoliciesAPI_relateItemToShippingPolicyAsync**
```c
// Relate item to shipping policy
//
// Relates an item to an existing shipping policy.
//
void ItemShippingPoliciesAPI_relateItemToShippingPolicyAsync(apiClient_t *apiClient, char *tenantId, char *itemId, char *shippingPolicyId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**itemId** | **char \*** |  | 
**shippingPolicyId** | **char \*** |  | 
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

# **ItemShippingPoliciesAPI_removeShippingPolicyFromItemAsync**
```c
// Remove shipping policy from item
//
// Removes a shipping policy from an item.
//
void ItemShippingPoliciesAPI_removeShippingPolicyFromItemAsync(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemShippingPolicyId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**itemId** | **char \*** |  | 
**itemShippingPolicyId** | **char \*** |  | 
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

