# BillingProfilesAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**BillingProfilesAPI_createBillingProfileAsync**](BillingProfilesAPI.md#BillingProfilesAPI_createBillingProfileAsync) | **POST** /api/v2/AccountingService/BillingProfiles | Creates a new billing profile
[**BillingProfilesAPI_deleteBillingProfileAsync**](BillingProfilesAPI.md#BillingProfilesAPI_deleteBillingProfileAsync) | **DELETE** /api/v2/AccountingService/BillingProfiles/{billingProfileId} | Deletes a billing profile
[**BillingProfilesAPI_getBillingProfileByIdAsync**](BillingProfilesAPI.md#BillingProfilesAPI_getBillingProfileByIdAsync) | **GET** /api/v2/AccountingService/BillingProfiles/{billingProfileId} | Gets a billing profile by id
[**BillingProfilesAPI_getBillingProfilesAsync**](BillingProfilesAPI.md#BillingProfilesAPI_getBillingProfilesAsync) | **GET** /api/v2/AccountingService/BillingProfiles | Gets all billing profiles
[**BillingProfilesAPI_getBillingProfilesCountAsync**](BillingProfilesAPI.md#BillingProfilesAPI_getBillingProfilesCountAsync) | **GET** /api/v2/AccountingService/BillingProfiles/Count | Gets the count of billing profiles
[**BillingProfilesAPI_updateBillingProfileAsync**](BillingProfilesAPI.md#BillingProfilesAPI_updateBillingProfileAsync) | **PUT** /api/v2/AccountingService/BillingProfiles/{billingProfileId} | Updates an existing billing profile


# **BillingProfilesAPI_createBillingProfileAsync**
```c
// Creates a new billing profile
//
// Adds a new billing profile record for the specified tenant.
//
empty_envelope_t* BillingProfilesAPI_createBillingProfileAsync(apiClient_t *apiClient, char *tenantId, billing_profile_create_dto_t *billing_profile_create_dto, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**billing_profile_create_dto** | **[billing_profile_create_dto_t](billing_profile_create_dto.md) \*** |  | 
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

# **BillingProfilesAPI_deleteBillingProfileAsync**
```c
// Deletes a billing profile
//
// Removes a billing profile from the system using its unique identifier.
//
empty_envelope_t* BillingProfilesAPI_deleteBillingProfileAsync(apiClient_t *apiClient, char *tenantId, char *billingProfileId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**billingProfileId** | **char \*** |  | 
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

# **BillingProfilesAPI_getBillingProfileByIdAsync**
```c
// Gets a billing profile by id
//
// Retrieves a specific billing profile using its unique identifier.
//
billing_profile_dto_envelope_t* BillingProfilesAPI_getBillingProfileByIdAsync(apiClient_t *apiClient, char *tenantId, char *billingProfileId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**billingProfileId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[billing_profile_dto_envelope_t](billing_profile_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BillingProfilesAPI_getBillingProfilesAsync**
```c
// Gets all billing profiles
//
// Fetches all billing profiles for a tenant with support for OData queries.
//
billing_profile_dto_i_read_only_list_envelope_t* BillingProfilesAPI_getBillingProfilesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[billing_profile_dto_i_read_only_list_envelope_t](billing_profile_dto_i_read_only_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BillingProfilesAPI_getBillingProfilesCountAsync**
```c
// Gets the count of billing profiles
//
// Returns the number of billing profiles for a tenant, supporting OData filtering.
//
int32_envelope_t* BillingProfilesAPI_getBillingProfilesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **BillingProfilesAPI_updateBillingProfileAsync**
```c
// Updates an existing billing profile
//
// Modifies an existing billing profile using the provided data.
//
empty_envelope_t* BillingProfilesAPI_updateBillingProfileAsync(apiClient_t *apiClient, char *tenantId, char *billingProfileId, billing_profile_update_dto_t *billing_profile_update_dto, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**billingProfileId** | **char \*** |  | 
**billing_profile_update_dto** | **[billing_profile_update_dto_t](billing_profile_update_dto.md) \*** |  | 
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

