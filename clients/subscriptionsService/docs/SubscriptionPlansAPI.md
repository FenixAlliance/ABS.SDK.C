# SubscriptionPlansAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SubscriptionPlansAPI_createSubscriptionPlanAsync**](SubscriptionPlansAPI.md#SubscriptionPlansAPI_createSubscriptionPlanAsync) | **POST** /api/v2/SubscriptionsService/SubscriptionPlans | Create a subscription plan
[**SubscriptionPlansAPI_deleteSubscriptionPlanAsync**](SubscriptionPlansAPI.md#SubscriptionPlansAPI_deleteSubscriptionPlanAsync) | **DELETE** /api/v2/SubscriptionsService/SubscriptionPlans/{planId} | Delete a subscription plan
[**SubscriptionPlansAPI_getSubscriptionPlanByIdAsync**](SubscriptionPlansAPI.md#SubscriptionPlansAPI_getSubscriptionPlanByIdAsync) | **GET** /api/v2/SubscriptionsService/SubscriptionPlans/{planId} | Get a subscription plan by ID
[**SubscriptionPlansAPI_getSubscriptionPlansAsync**](SubscriptionPlansAPI.md#SubscriptionPlansAPI_getSubscriptionPlansAsync) | **GET** /api/v2/SubscriptionsService/SubscriptionPlans | Get all subscription plans
[**SubscriptionPlansAPI_getSubscriptionPlansCountAsync**](SubscriptionPlansAPI.md#SubscriptionPlansAPI_getSubscriptionPlansCountAsync) | **GET** /api/v2/SubscriptionsService/SubscriptionPlans/Count | Get subscription plans count
[**SubscriptionPlansAPI_updateSubscriptionPlanAsync**](SubscriptionPlansAPI.md#SubscriptionPlansAPI_updateSubscriptionPlanAsync) | **PUT** /api/v2/SubscriptionsService/SubscriptionPlans/{planId} | Update a subscription plan


# **SubscriptionPlansAPI_createSubscriptionPlanAsync**
```c
// Create a subscription plan
//
// Creates a new subscription plan for the specified tenant.
//
envelope_t* SubscriptionPlansAPI_createSubscriptionPlanAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, subscription_plan_create_dto_t *subscription_plan_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**subscription_plan_create_dto** | **[subscription_plan_create_dto_t](subscription_plan_create_dto.md) \*** |  | [optional] 

### Return type

[envelope_t](envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SubscriptionPlansAPI_deleteSubscriptionPlanAsync**
```c
// Delete a subscription plan
//
// Deletes a subscription plan by its identifier.
//
envelope_t* SubscriptionPlansAPI_deleteSubscriptionPlanAsync(apiClient_t *apiClient, char *tenantId, char *planId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**planId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[envelope_t](envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SubscriptionPlansAPI_getSubscriptionPlanByIdAsync**
```c
// Get a subscription plan by ID
//
// Retrieves a subscription plan by its identifier.
//
subscription_plan_dto_envelope_t* SubscriptionPlansAPI_getSubscriptionPlanByIdAsync(apiClient_t *apiClient, char *tenantId, char *planId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**planId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[subscription_plan_dto_envelope_t](subscription_plan_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SubscriptionPlansAPI_getSubscriptionPlansAsync**
```c
// Get all subscription plans
//
// Retrieves all subscription plans for the specified tenant.
//
subscription_plan_dto_i_read_only_list_envelope_t* SubscriptionPlansAPI_getSubscriptionPlansAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[subscription_plan_dto_i_read_only_list_envelope_t](subscription_plan_dto_i_read_only_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SubscriptionPlansAPI_getSubscriptionPlansCountAsync**
```c
// Get subscription plans count
//
// Returns the count of subscription plans for the specified tenant.
//
int32_envelope_t* SubscriptionPlansAPI_getSubscriptionPlansCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **SubscriptionPlansAPI_updateSubscriptionPlanAsync**
```c
// Update a subscription plan
//
// Updates an existing subscription plan.
//
envelope_t* SubscriptionPlansAPI_updateSubscriptionPlanAsync(apiClient_t *apiClient, char *tenantId, char *planId, char *api_version, char *x_api_version, subscription_plan_update_dto_t *subscription_plan_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**planId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**subscription_plan_update_dto** | **[subscription_plan_update_dto_t](subscription_plan_update_dto.md) \*** |  | [optional] 

### Return type

[envelope_t](envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

