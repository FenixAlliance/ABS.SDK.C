# SigningProfileGraphicalRepresentationsAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SigningProfileGraphicalRepresentationsAPI_createSigningProfileGraphicalRepresentationAsync**](SigningProfileGraphicalRepresentationsAPI.md#SigningProfileGraphicalRepresentationsAPI_createSigningProfileGraphicalRepresentationAsync) | **POST** /api/v2/TrustService/SigningProfileGraphicalRepresentations | Create a new signature representation
[**SigningProfileGraphicalRepresentationsAPI_deleteSigningProfileGraphicalRepresentationAsync**](SigningProfileGraphicalRepresentationsAPI.md#SigningProfileGraphicalRepresentationsAPI_deleteSigningProfileGraphicalRepresentationAsync) | **DELETE** /api/v2/TrustService/SigningProfileGraphicalRepresentations/{id} | Delete a signature representation
[**SigningProfileGraphicalRepresentationsAPI_getSigningProfileGraphicalRepresentationByIdAsync**](SigningProfileGraphicalRepresentationsAPI.md#SigningProfileGraphicalRepresentationsAPI_getSigningProfileGraphicalRepresentationByIdAsync) | **GET** /api/v2/TrustService/SigningProfileGraphicalRepresentations/{id} | Get signature representation by ID
[**SigningProfileGraphicalRepresentationsAPI_getSigningProfileGraphicalRepresentationsAsync**](SigningProfileGraphicalRepresentationsAPI.md#SigningProfileGraphicalRepresentationsAPI_getSigningProfileGraphicalRepresentationsAsync) | **GET** /api/v2/TrustService/SigningProfileGraphicalRepresentations | Get all signature representations
[**SigningProfileGraphicalRepresentationsAPI_getSigningProfileGraphicalRepresentationsCountAsync**](SigningProfileGraphicalRepresentationsAPI.md#SigningProfileGraphicalRepresentationsAPI_getSigningProfileGraphicalRepresentationsCountAsync) | **GET** /api/v2/TrustService/SigningProfileGraphicalRepresentations/Count | Get signature representations count
[**SigningProfileGraphicalRepresentationsAPI_patchSigningProfileGraphicalRepresentationAsync**](SigningProfileGraphicalRepresentationsAPI.md#SigningProfileGraphicalRepresentationsAPI_patchSigningProfileGraphicalRepresentationAsync) | **PATCH** /api/v2/TrustService/SigningProfileGraphicalRepresentations/{id} | Patch a signature representation
[**SigningProfileGraphicalRepresentationsAPI_updateSigningProfileGraphicalRepresentationAsync**](SigningProfileGraphicalRepresentationsAPI.md#SigningProfileGraphicalRepresentationsAPI_updateSigningProfileGraphicalRepresentationAsync) | **PUT** /api/v2/TrustService/SigningProfileGraphicalRepresentations/{id} | Update a signature representation


# **SigningProfileGraphicalRepresentationsAPI_createSigningProfileGraphicalRepresentationAsync**
```c
// Create a new signature representation
//
// Creates a new reusable signature representation for the specified tenant.
//
void SigningProfileGraphicalRepresentationsAPI_createSigningProfileGraphicalRepresentationAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, signing_profile_graphical_representation_create_dto_t *signing_profile_graphical_representation_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**signing_profile_graphical_representation_create_dto** | **[signing_profile_graphical_representation_create_dto_t](signing_profile_graphical_representation_create_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SigningProfileGraphicalRepresentationsAPI_deleteSigningProfileGraphicalRepresentationAsync**
```c
// Delete a signature representation
//
// Deletes a signature representation for the specified tenant.
//
void SigningProfileGraphicalRepresentationsAPI_deleteSigningProfileGraphicalRepresentationAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);
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

# **SigningProfileGraphicalRepresentationsAPI_getSigningProfileGraphicalRepresentationByIdAsync**
```c
// Get signature representation by ID
//
// Retrieves a specific signature representation by its identifier.
//
signing_profile_graphical_representation_dto_t* SigningProfileGraphicalRepresentationsAPI_getSigningProfileGraphicalRepresentationByIdAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);
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

[signing_profile_graphical_representation_dto_t](signing_profile_graphical_representation_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SigningProfileGraphicalRepresentationsAPI_getSigningProfileGraphicalRepresentationsAsync**
```c
// Get all signature representations
//
// Retrieves all reusable signature representations for the specified tenant.
//
signing_profile_graphical_representation_dto_list_envelope_t* SigningProfileGraphicalRepresentationsAPI_getSigningProfileGraphicalRepresentationsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[signing_profile_graphical_representation_dto_list_envelope_t](signing_profile_graphical_representation_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SigningProfileGraphicalRepresentationsAPI_getSigningProfileGraphicalRepresentationsCountAsync**
```c
// Get signature representations count
//
// Returns the count of signature representations for the specified tenant.
//
int32_envelope_t* SigningProfileGraphicalRepresentationsAPI_getSigningProfileGraphicalRepresentationsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **SigningProfileGraphicalRepresentationsAPI_patchSigningProfileGraphicalRepresentationAsync**
```c
// Patch a signature representation
//
// Patch a signature representation
//
empty_envelope_t* SigningProfileGraphicalRepresentationsAPI_patchSigningProfileGraphicalRepresentationAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, list_t *operation);
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

# **SigningProfileGraphicalRepresentationsAPI_updateSigningProfileGraphicalRepresentationAsync**
```c
// Update a signature representation
//
// Updates an existing signature representation for the specified tenant.
//
void SigningProfileGraphicalRepresentationsAPI_updateSigningProfileGraphicalRepresentationAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, signing_profile_graphical_representation_update_dto_t *signing_profile_graphical_representation_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**id** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**signing_profile_graphical_representation_update_dto** | **[signing_profile_graphical_representation_update_dto_t](signing_profile_graphical_representation_update_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

