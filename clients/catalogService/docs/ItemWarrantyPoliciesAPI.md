# ItemWarrantyPoliciesAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ItemWarrantyPoliciesAPI_countItemWarrantyPoliciesAsync**](ItemWarrantyPoliciesAPI.md#ItemWarrantyPoliciesAPI_countItemWarrantyPoliciesAsync) | **GET** /api/v2/CatalogService/ItemWarrantyPolicies/Count | Count item warranty policies
[**ItemWarrantyPoliciesAPI_getItemWarrantyPoliciesAsync**](ItemWarrantyPoliciesAPI.md#ItemWarrantyPoliciesAPI_getItemWarrantyPoliciesAsync) | **GET** /api/v2/CatalogService/ItemWarrantyPolicies | Get item warranty policies
[**ItemWarrantyPoliciesAPI_getItemWarrantyPolicyByIdAsync**](ItemWarrantyPoliciesAPI.md#ItemWarrantyPoliciesAPI_getItemWarrantyPolicyByIdAsync) | **GET** /api/v2/CatalogService/ItemWarrantyPolicies/{itemWarrantyPolicyId} | Get item warranty policy by ID
[**ItemWarrantyPoliciesAPI_relateItemToWarrantyPolicyAsync**](ItemWarrantyPoliciesAPI.md#ItemWarrantyPoliciesAPI_relateItemToWarrantyPolicyAsync) | **POST** /api/v2/CatalogService/ItemWarrantyPolicies | Relate item to warranty policy
[**ItemWarrantyPoliciesAPI_removeWarrantyPolicyFromItemAsync**](ItemWarrantyPoliciesAPI.md#ItemWarrantyPoliciesAPI_removeWarrantyPolicyFromItemAsync) | **DELETE** /api/v2/CatalogService/ItemWarrantyPolicies/{itemWarrantyPolicyId} | Remove warranty policy from item


# **ItemWarrantyPoliciesAPI_countItemWarrantyPoliciesAsync**
```c
// Count item warranty policies
//
// Counts all warranty policies for a specific item.
//
int32_envelope_t* ItemWarrantyPoliciesAPI_countItemWarrantyPoliciesAsync(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version);
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

# **ItemWarrantyPoliciesAPI_getItemWarrantyPoliciesAsync**
```c
// Get item warranty policies
//
// Retrieves all warranty policies for a specific item.
//
item_warranty_policy_dto_list_envelope_t* ItemWarrantyPoliciesAPI_getItemWarrantyPoliciesAsync(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**itemId** | **char \*** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_warranty_policy_dto_list_envelope_t](item_warranty_policy_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemWarrantyPoliciesAPI_getItemWarrantyPolicyByIdAsync**
```c
// Get item warranty policy by ID
//
// Retrieves a specific warranty policy for an item.
//
item_warranty_policy_dto_envelope_t* ItemWarrantyPoliciesAPI_getItemWarrantyPolicyByIdAsync(apiClient_t *apiClient, char *itemWarrantyPolicyId, char *itemId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**itemWarrantyPolicyId** | **char \*** |  | 
**itemId** | **char \*** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_warranty_policy_dto_envelope_t](item_warranty_policy_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemWarrantyPoliciesAPI_relateItemToWarrantyPolicyAsync**
```c
// Relate item to warranty policy
//
// Relates an item to an existing warranty policy.
//
void ItemWarrantyPoliciesAPI_relateItemToWarrantyPolicyAsync(apiClient_t *apiClient, char *tenantId, char *itemId, char *warrantyPolicyId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**itemId** | **char \*** |  | 
**warrantyPolicyId** | **char \*** |  | 
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

# **ItemWarrantyPoliciesAPI_removeWarrantyPolicyFromItemAsync**
```c
// Remove warranty policy from item
//
// Removes a warranty policy from an item.
//
void ItemWarrantyPoliciesAPI_removeWarrantyPolicyFromItemAsync(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemWarrantyPolicyId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**itemId** | **char \*** |  | 
**itemWarrantyPolicyId** | **char \*** |  | 
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

