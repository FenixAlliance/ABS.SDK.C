# SigningProfilesAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SigningProfilesAPI_createSigningProfileAsync**](SigningProfilesAPI.md#SigningProfilesAPI_createSigningProfileAsync) | **POST** /api/v2/TrustService/SigningProfiles | Create a new signing profile
[**SigningProfilesAPI_deleteSigningProfileAsync**](SigningProfilesAPI.md#SigningProfilesAPI_deleteSigningProfileAsync) | **DELETE** /api/v2/TrustService/SigningProfiles/{id} | Delete a signing profile
[**SigningProfilesAPI_getSigningProfileByIdAsync**](SigningProfilesAPI.md#SigningProfilesAPI_getSigningProfileByIdAsync) | **GET** /api/v2/TrustService/SigningProfiles/{id} | Get signing profile by ID
[**SigningProfilesAPI_getSigningProfilesAsync**](SigningProfilesAPI.md#SigningProfilesAPI_getSigningProfilesAsync) | **GET** /api/v2/TrustService/SigningProfiles | Get all signing profiles
[**SigningProfilesAPI_getSigningProfilesCountAsync**](SigningProfilesAPI.md#SigningProfilesAPI_getSigningProfilesCountAsync) | **GET** /api/v2/TrustService/SigningProfiles/Count | Get signing profiles count
[**SigningProfilesAPI_patchSigningProfileAsync**](SigningProfilesAPI.md#SigningProfilesAPI_patchSigningProfileAsync) | **PATCH** /api/v2/TrustService/SigningProfiles/{id} | Patch a signing profile
[**SigningProfilesAPI_updateSigningProfileAsync**](SigningProfilesAPI.md#SigningProfilesAPI_updateSigningProfileAsync) | **PUT** /api/v2/TrustService/SigningProfiles/{id} | Update a signing profile


# **SigningProfilesAPI_createSigningProfileAsync**
```c
// Create a new signing profile
//
// Creates a new signing profile for the specified tenant (supports inline contact creation).
//
void SigningProfilesAPI_createSigningProfileAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, signing_profile_create_dto_t *signing_profile_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**signing_profile_create_dto** | **[signing_profile_create_dto_t](signing_profile_create_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SigningProfilesAPI_deleteSigningProfileAsync**
```c
// Delete a signing profile
//
// Deletes a signing profile for the specified tenant.
//
void SigningProfilesAPI_deleteSigningProfileAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**id** | **char \*** |  | 
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

# **SigningProfilesAPI_getSigningProfileByIdAsync**
```c
// Get signing profile by ID
//
// Retrieves a specific signing profile by its identifier.
//
signing_profile_dto_t* SigningProfilesAPI_getSigningProfileByIdAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**id** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[signing_profile_dto_t](signing_profile_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SigningProfilesAPI_getSigningProfilesAsync**
```c
// Get all signing profiles
//
// Retrieves all signing profiles for the specified tenant.
//
signing_profile_dto_list_envelope_t* SigningProfilesAPI_getSigningProfilesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[signing_profile_dto_list_envelope_t](signing_profile_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SigningProfilesAPI_getSigningProfilesCountAsync**
```c
// Get signing profiles count
//
// Returns the count of signing profiles for the specified tenant.
//
int32_envelope_t* SigningProfilesAPI_getSigningProfilesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **SigningProfilesAPI_patchSigningProfileAsync**
```c
// Patch a signing profile
//
// Patch a signing profile
//
empty_envelope_t* SigningProfilesAPI_patchSigningProfileAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, list_t *operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**id** | **char \*** |  | 
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

# **SigningProfilesAPI_updateSigningProfileAsync**
```c
// Update a signing profile
//
// Updates an existing signing profile for the specified tenant.
//
void SigningProfilesAPI_updateSigningProfileAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, signing_profile_update_dto_t *signing_profile_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**id** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**signing_profile_update_dto** | **[signing_profile_update_dto_t](signing_profile_update_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

