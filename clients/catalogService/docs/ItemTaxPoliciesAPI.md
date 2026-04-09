# ItemTaxPoliciesAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ItemTaxPoliciesAPI_countItemTaxPoliciesAsync**](ItemTaxPoliciesAPI.md#ItemTaxPoliciesAPI_countItemTaxPoliciesAsync) | **GET** /api/v2/CatalogService/ItemTaxPolicies/Count | Count item tax policies
[**ItemTaxPoliciesAPI_getItemTaxPoliciesAsync**](ItemTaxPoliciesAPI.md#ItemTaxPoliciesAPI_getItemTaxPoliciesAsync) | **GET** /api/v2/CatalogService/ItemTaxPolicies | Get item tax policies
[**ItemTaxPoliciesAPI_getItemTaxPolicyByIdAsync**](ItemTaxPoliciesAPI.md#ItemTaxPoliciesAPI_getItemTaxPolicyByIdAsync) | **GET** /api/v2/CatalogService/ItemTaxPolicies/{itemTaxPolicyId} | Get item tax policy by ID
[**ItemTaxPoliciesAPI_relateItemToTaxPolicyAsync**](ItemTaxPoliciesAPI.md#ItemTaxPoliciesAPI_relateItemToTaxPolicyAsync) | **POST** /api/v2/CatalogService/ItemTaxPolicies | Relate item to tax policy
[**ItemTaxPoliciesAPI_removeTaxPolicyFromItemAsync**](ItemTaxPoliciesAPI.md#ItemTaxPoliciesAPI_removeTaxPolicyFromItemAsync) | **DELETE** /api/v2/CatalogService/ItemTaxPolicies/{itemTaxPolicyId} | Remove tax policy from item


# **ItemTaxPoliciesAPI_countItemTaxPoliciesAsync**
```c
// Count item tax policies
//
// Counts all tax policies for a specific item.
//
int32_envelope_t* ItemTaxPoliciesAPI_countItemTaxPoliciesAsync(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version);
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

# **ItemTaxPoliciesAPI_getItemTaxPoliciesAsync**
```c
// Get item tax policies
//
// Retrieves all tax policies for a specific item.
//
item_tax_policy_dto_list_envelope_t* ItemTaxPoliciesAPI_getItemTaxPoliciesAsync(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**itemId** | **char \*** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_tax_policy_dto_list_envelope_t](item_tax_policy_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemTaxPoliciesAPI_getItemTaxPolicyByIdAsync**
```c
// Get item tax policy by ID
//
// Retrieves a specific tax policy for an item.
//
item_tax_policy_dto_envelope_t* ItemTaxPoliciesAPI_getItemTaxPolicyByIdAsync(apiClient_t *apiClient, char *itemTaxPolicyId, char *itemId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**itemTaxPolicyId** | **char \*** |  | 
**itemId** | **char \*** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_tax_policy_dto_envelope_t](item_tax_policy_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemTaxPoliciesAPI_relateItemToTaxPolicyAsync**
```c
// Relate item to tax policy
//
// Relates an item to an existing tax policy.
//
void ItemTaxPoliciesAPI_relateItemToTaxPolicyAsync(apiClient_t *apiClient, char *tenantId, char *itemId, char *taxPolicyId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**itemId** | **char \*** |  | 
**taxPolicyId** | **char \*** |  | 
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

# **ItemTaxPoliciesAPI_removeTaxPolicyFromItemAsync**
```c
// Remove tax policy from item
//
// Removes a tax policy from an item.
//
void ItemTaxPoliciesAPI_removeTaxPolicyFromItemAsync(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemTaxPolicyId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**itemId** | **char \*** |  | 
**itemTaxPolicyId** | **char \*** |  | 
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

