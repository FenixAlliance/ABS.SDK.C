# RoundingPoliciesAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**RoundingPoliciesAPI_createRoundingPolicyAsync**](RoundingPoliciesAPI.md#RoundingPoliciesAPI_createRoundingPolicyAsync) | **POST** /api/v2/PricingService/RoundingPolicies | Creates a rounding policy
[**RoundingPoliciesAPI_deleteRoundingPolicyAsync**](RoundingPoliciesAPI.md#RoundingPoliciesAPI_deleteRoundingPolicyAsync) | **DELETE** /api/v2/PricingService/RoundingPolicies/{roundingPolicyId} | Deletes a rounding policy
[**RoundingPoliciesAPI_getRoundingPoliciesAsync**](RoundingPoliciesAPI.md#RoundingPoliciesAPI_getRoundingPoliciesAsync) | **GET** /api/v2/PricingService/RoundingPolicies | Gets all rounding policies
[**RoundingPoliciesAPI_getRoundingPoliciesCountAsync**](RoundingPoliciesAPI.md#RoundingPoliciesAPI_getRoundingPoliciesCountAsync) | **GET** /api/v2/PricingService/RoundingPolicies/Count | Counts rounding policies
[**RoundingPoliciesAPI_getRoundingPolicyByIdAsync**](RoundingPoliciesAPI.md#RoundingPoliciesAPI_getRoundingPolicyByIdAsync) | **GET** /api/v2/PricingService/RoundingPolicies/{roundingPolicyId} | Gets a rounding policy by ID
[**RoundingPoliciesAPI_patchRoundingPolicyAsync**](RoundingPoliciesAPI.md#RoundingPoliciesAPI_patchRoundingPolicyAsync) | **PATCH** /api/v2/PricingService/RoundingPolicies/{roundingPolicyId} | Patches a rounding policy
[**RoundingPoliciesAPI_updateRoundingPolicyAsync**](RoundingPoliciesAPI.md#RoundingPoliciesAPI_updateRoundingPolicyAsync) | **PUT** /api/v2/PricingService/RoundingPolicies/{roundingPolicyId} | Updates a rounding policy


# **RoundingPoliciesAPI_createRoundingPolicyAsync**
```c
// Creates a rounding policy
//
// Creates a new rounding policy for the current tenant.
//
empty_envelope_t* RoundingPoliciesAPI_createRoundingPolicyAsync(apiClient_t *apiClient, char *tenantId, rounding_policy_create_dto_t *rounding_policy_create_dto, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**rounding_policy_create_dto** | **[rounding_policy_create_dto_t](rounding_policy_create_dto.md) \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **RoundingPoliciesAPI_deleteRoundingPolicyAsync**
```c
// Deletes a rounding policy
//
// Deletes the specified rounding policy.
//
empty_envelope_t* RoundingPoliciesAPI_deleteRoundingPolicyAsync(apiClient_t *apiClient, char *tenantId, char *roundingPolicyId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**roundingPolicyId** | **char \*** |  | 
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

# **RoundingPoliciesAPI_getRoundingPoliciesAsync**
```c
// Gets all rounding policies
//
// Retrieves all rounding policies for the current tenant with OData support.
//
rounding_policy_dto_list_envelope_t* RoundingPoliciesAPI_getRoundingPoliciesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, rounding_policy_dto_collection_query_parameters_t *rounding_policy_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**rounding_policy_dto_collection_query_parameters** | **[rounding_policy_dto_collection_query_parameters_t](rounding_policy_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[rounding_policy_dto_list_envelope_t](rounding_policy_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **RoundingPoliciesAPI_getRoundingPoliciesCountAsync**
```c
// Counts rounding policies
//
// Gets the count of rounding policies for the current tenant.
//
int32_envelope_t* RoundingPoliciesAPI_getRoundingPoliciesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, rounding_policy_dto_collection_query_parameters_t *rounding_policy_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**rounding_policy_dto_collection_query_parameters** | **[rounding_policy_dto_collection_query_parameters_t](rounding_policy_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **RoundingPoliciesAPI_getRoundingPolicyByIdAsync**
```c
// Gets a rounding policy by ID
//
// Retrieves the details of a rounding policy using its unique ID.
//
rounding_policy_dto_envelope_t* RoundingPoliciesAPI_getRoundingPolicyByIdAsync(apiClient_t *apiClient, char *tenantId, char *roundingPolicyId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**roundingPolicyId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[rounding_policy_dto_envelope_t](rounding_policy_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **RoundingPoliciesAPI_patchRoundingPolicyAsync**
```c
// Patches a rounding policy
//
// Partially updates the specified rounding policy using a JSON Patch document.
//
empty_envelope_t* RoundingPoliciesAPI_patchRoundingPolicyAsync(apiClient_t *apiClient, char *tenantId, char *roundingPolicyId, char *api_version, char *x_api_version, list_t *patch_operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**roundingPolicyId** | **char \*** |  | 
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

# **RoundingPoliciesAPI_updateRoundingPolicyAsync**
```c
// Updates a rounding policy
//
// Updates the specified rounding policy.
//
empty_envelope_t* RoundingPoliciesAPI_updateRoundingPolicyAsync(apiClient_t *apiClient, char *tenantId, char *roundingPolicyId, rounding_policy_update_dto_t *rounding_policy_update_dto, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**roundingPolicyId** | **char \*** |  | 
**rounding_policy_update_dto** | **[rounding_policy_update_dto_t](rounding_policy_update_dto.md) \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

