# ContactProfilesAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ContactProfilesAPI_createContactProfileAsync**](ContactProfilesAPI.md#ContactProfilesAPI_createContactProfileAsync) | **POST** /api/v2/CrmService/ContactProfiles | Create a new contact profile
[**ContactProfilesAPI_deleteContactProfileAsync**](ContactProfilesAPI.md#ContactProfilesAPI_deleteContactProfileAsync) | **DELETE** /api/v2/CrmService/ContactProfiles/{id} | Delete a contact profile
[**ContactProfilesAPI_getContactProfileByIdAsync**](ContactProfilesAPI.md#ContactProfilesAPI_getContactProfileByIdAsync) | **GET** /api/v2/CrmService/ContactProfiles/{id} | Get contact profile by ID
[**ContactProfilesAPI_getContactProfilesAsync**](ContactProfilesAPI.md#ContactProfilesAPI_getContactProfilesAsync) | **GET** /api/v2/CrmService/ContactProfiles | Get all contact profiles
[**ContactProfilesAPI_getContactProfilesCountAsync**](ContactProfilesAPI.md#ContactProfilesAPI_getContactProfilesCountAsync) | **GET** /api/v2/CrmService/ContactProfiles/Count | Get contact profiles count
[**ContactProfilesAPI_getPartnerProfilesCountAsync**](ContactProfilesAPI.md#ContactProfilesAPI_getPartnerProfilesCountAsync) | **GET** /api/v2/CrmService/ContactProfiles/Partners/Count | Get partner profiles count
[**ContactProfilesAPI_getPatientProfilesCountAsync**](ContactProfilesAPI.md#ContactProfilesAPI_getPatientProfilesCountAsync) | **GET** /api/v2/CrmService/ContactProfiles/Patients/Count | Get patient profiles count
[**ContactProfilesAPI_patchContactProfileAsync**](ContactProfilesAPI.md#ContactProfilesAPI_patchContactProfileAsync) | **PATCH** /api/v2/CrmService/ContactProfiles/{id} | Patch a contact profile
[**ContactProfilesAPI_updateContactProfileAsync**](ContactProfilesAPI.md#ContactProfilesAPI_updateContactProfileAsync) | **PUT** /api/v2/CrmService/ContactProfiles/{id} | Update a contact profile


# **ContactProfilesAPI_createContactProfileAsync**
```c
// Create a new contact profile
//
// Creates a new contact profile for the specified tenant. The ContactId must be provided in the request body.
//
void ContactProfilesAPI_createContactProfileAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, contact_profile_create_dto_t *contact_profile_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**contact_profile_create_dto** | **[contact_profile_create_dto_t](contact_profile_create_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ContactProfilesAPI_deleteContactProfileAsync**
```c
// Delete a contact profile
//
// Deletes a contact profile for the specified tenant.
//
void ContactProfilesAPI_deleteContactProfileAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);
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

# **ContactProfilesAPI_getContactProfileByIdAsync**
```c
// Get contact profile by ID
//
// Retrieves a specific contact profile by its identifier.
//
contact_profile_dto_t* ContactProfilesAPI_getContactProfileByIdAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);
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

[contact_profile_dto_t](contact_profile_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ContactProfilesAPI_getContactProfilesAsync**
```c
// Get all contact profiles
//
// Retrieves all contact profiles for the specified tenant.
//
contact_profile_dto_list_envelope_t* ContactProfilesAPI_getContactProfilesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, contact_profile_dto_collection_query_parameters_t *contact_profile_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**contact_profile_dto_collection_query_parameters** | **[contact_profile_dto_collection_query_parameters_t](contact_profile_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[contact_profile_dto_list_envelope_t](contact_profile_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ContactProfilesAPI_getContactProfilesCountAsync**
```c
// Get contact profiles count
//
// Returns the count of contact profiles for the specified tenant.
//
int32_envelope_t* ContactProfilesAPI_getContactProfilesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, contact_profile_dto_collection_query_parameters_t *contact_profile_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**contact_profile_dto_collection_query_parameters** | **[contact_profile_dto_collection_query_parameters_t](contact_profile_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ContactProfilesAPI_getPartnerProfilesCountAsync**
```c
// Get partner profiles count
//
// Returns the count of partner contact profiles for the specified tenant.
//
int32_envelope_t* ContactProfilesAPI_getPartnerProfilesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, contact_profile_dto_collection_query_parameters_t *contact_profile_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**contact_profile_dto_collection_query_parameters** | **[contact_profile_dto_collection_query_parameters_t](contact_profile_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ContactProfilesAPI_getPatientProfilesCountAsync**
```c
// Get patient profiles count
//
// Returns the count of patient contact profiles for the specified tenant.
//
int32_envelope_t* ContactProfilesAPI_getPatientProfilesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, contact_profile_dto_collection_query_parameters_t *contact_profile_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**contact_profile_dto_collection_query_parameters** | **[contact_profile_dto_collection_query_parameters_t](contact_profile_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ContactProfilesAPI_patchContactProfileAsync**
```c
// Patch a contact profile
//
// Patch a contact profile
//
empty_envelope_t* ContactProfilesAPI_patchContactProfileAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, list_t *patch_operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**id** | **char \*** |  | 
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

# **ContactProfilesAPI_updateContactProfileAsync**
```c
// Update a contact profile
//
// Updates an existing contact profile for the specified tenant.
//
void ContactProfilesAPI_updateContactProfileAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, contact_profile_update_dto_t *contact_profile_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**id** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**contact_profile_update_dto** | **[contact_profile_update_dto_t](contact_profile_update_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

