# WarrantyPoliciesAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**WarrantyPoliciesAPI_createWarrantyPolicyAsync**](WarrantyPoliciesAPI.md#WarrantyPoliciesAPI_createWarrantyPolicyAsync) | **POST** /api/v2/SupportService/WarrantyPolicies | Create a new warranty policy
[**WarrantyPoliciesAPI_deleteWarrantyPolicyAsync**](WarrantyPoliciesAPI.md#WarrantyPoliciesAPI_deleteWarrantyPolicyAsync) | **DELETE** /api/v2/SupportService/WarrantyPolicies/{warrantyPolicyId} | Delete a warranty policy
[**WarrantyPoliciesAPI_getWarrantyPoliciesAsync**](WarrantyPoliciesAPI.md#WarrantyPoliciesAPI_getWarrantyPoliciesAsync) | **GET** /api/v2/SupportService/WarrantyPolicies | Retrieve a list of warranty policies
[**WarrantyPoliciesAPI_getWarrantyPoliciesCountAsync**](WarrantyPoliciesAPI.md#WarrantyPoliciesAPI_getWarrantyPoliciesCountAsync) | **GET** /api/v2/SupportService/WarrantyPolicies/Count | Get the count of warranty policies
[**WarrantyPoliciesAPI_getWarrantyPolicyAsync**](WarrantyPoliciesAPI.md#WarrantyPoliciesAPI_getWarrantyPolicyAsync) | **GET** /api/v2/SupportService/WarrantyPolicies/{warrantyPolicyId} | Retrieve a warranty policy by ID
[**WarrantyPoliciesAPI_patchWarrantyPolicyAsync**](WarrantyPoliciesAPI.md#WarrantyPoliciesAPI_patchWarrantyPolicyAsync) | **PATCH** /api/v2/SupportService/WarrantyPolicies/{warrantyPolicyId} | Patch a warranty policy
[**WarrantyPoliciesAPI_updateWarrantyPolicyAsync**](WarrantyPoliciesAPI.md#WarrantyPoliciesAPI_updateWarrantyPolicyAsync) | **PUT** /api/v2/SupportService/WarrantyPolicies/{warrantyPolicyId} | Update a warranty policy


# **WarrantyPoliciesAPI_createWarrantyPolicyAsync**
```c
// Create a new warranty policy
//
empty_envelope_t* WarrantyPoliciesAPI_createWarrantyPolicyAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, item_warranty_policy_create_dto_t *item_warranty_policy_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**item_warranty_policy_create_dto** | **[item_warranty_policy_create_dto_t](item_warranty_policy_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **WarrantyPoliciesAPI_deleteWarrantyPolicyAsync**
```c
// Delete a warranty policy
//
empty_envelope_t* WarrantyPoliciesAPI_deleteWarrantyPolicyAsync(apiClient_t *apiClient, char *tenantId, char *warrantyPolicyId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**warrantyPolicyId** | **char \*** |  | 
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

# **WarrantyPoliciesAPI_getWarrantyPoliciesAsync**
```c
// Retrieve a list of warranty policies
//
item_warranty_policy_dto_list_envelope_t* WarrantyPoliciesAPI_getWarrantyPoliciesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
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

# **WarrantyPoliciesAPI_getWarrantyPoliciesCountAsync**
```c
// Get the count of warranty policies
//
int32_envelope_t* WarrantyPoliciesAPI_getWarrantyPoliciesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **WarrantyPoliciesAPI_getWarrantyPolicyAsync**
```c
// Retrieve a warranty policy by ID
//
item_warranty_policy_dto_envelope_t* WarrantyPoliciesAPI_getWarrantyPolicyAsync(apiClient_t *apiClient, char *tenantId, char *warrantyPolicyId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**warrantyPolicyId** | **char \*** |  | 
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

# **WarrantyPoliciesAPI_patchWarrantyPolicyAsync**
```c
// Patch a warranty policy
//
// Partially updates an existing warranty policy by its unique identifier.
//
empty_envelope_t* WarrantyPoliciesAPI_patchWarrantyPolicyAsync(apiClient_t *apiClient, char *tenantId, char *warrantyPolicyId, char *api_version, char *x_api_version, list_t *operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**warrantyPolicyId** | **char \*** |  | 
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

# **WarrantyPoliciesAPI_updateWarrantyPolicyAsync**
```c
// Update a warranty policy
//
empty_envelope_t* WarrantyPoliciesAPI_updateWarrantyPolicyAsync(apiClient_t *apiClient, char *tenantId, char *warrantyPolicyId, char *api_version, char *x_api_version, item_warranty_policy_update_dto_t *item_warranty_policy_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**warrantyPolicyId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**item_warranty_policy_update_dto** | **[item_warranty_policy_update_dto_t](item_warranty_policy_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

