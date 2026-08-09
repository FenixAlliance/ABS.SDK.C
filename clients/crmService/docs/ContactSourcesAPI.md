# ContactSourcesAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ContactSourcesAPI_createContactSourceAsync**](ContactSourcesAPI.md#ContactSourcesAPI_createContactSourceAsync) | **POST** /api/v2/CrmService/ContactSources | Create a new contact source
[**ContactSourcesAPI_deleteContactSourceAsync**](ContactSourcesAPI.md#ContactSourcesAPI_deleteContactSourceAsync) | **DELETE** /api/v2/CrmService/ContactSources/{id} | Delete a contact source
[**ContactSourcesAPI_getContactSourceByIdAsync**](ContactSourcesAPI.md#ContactSourcesAPI_getContactSourceByIdAsync) | **GET** /api/v2/CrmService/ContactSources/{id} | Get contact source by ID
[**ContactSourcesAPI_getContactSourcesAsync**](ContactSourcesAPI.md#ContactSourcesAPI_getContactSourcesAsync) | **GET** /api/v2/CrmService/ContactSources | Get all contact sources
[**ContactSourcesAPI_getContactSourcesCountAsync**](ContactSourcesAPI.md#ContactSourcesAPI_getContactSourcesCountAsync) | **GET** /api/v2/CrmService/ContactSources/Count | Get contact sources count
[**ContactSourcesAPI_patchContactSourceAsync**](ContactSourcesAPI.md#ContactSourcesAPI_patchContactSourceAsync) | **PATCH** /api/v2/CrmService/ContactSources/{id} | Patch a contact source
[**ContactSourcesAPI_updateContactSourceAsync**](ContactSourcesAPI.md#ContactSourcesAPI_updateContactSourceAsync) | **PUT** /api/v2/CrmService/ContactSources/{id} | Update a contact source


# **ContactSourcesAPI_createContactSourceAsync**
```c
// Create a new contact source
//
// Creates a new contact source for the specified tenant.
//
void ContactSourcesAPI_createContactSourceAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, contact_source_create_dto_t *contact_source_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**contact_source_create_dto** | **[contact_source_create_dto_t](contact_source_create_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ContactSourcesAPI_deleteContactSourceAsync**
```c
// Delete a contact source
//
// Deletes a contact source for the specified tenant.
//
void ContactSourcesAPI_deleteContactSourceAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);
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

# **ContactSourcesAPI_getContactSourceByIdAsync**
```c
// Get contact source by ID
//
// Retrieves a specific contact source by its identifier.
//
contact_source_dto_t* ContactSourcesAPI_getContactSourceByIdAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);
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

[contact_source_dto_t](contact_source_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ContactSourcesAPI_getContactSourcesAsync**
```c
// Get all contact sources
//
// Retrieves all contact sources for the specified tenant.
//
contact_source_dto_list_envelope_t* ContactSourcesAPI_getContactSourcesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, contact_source_dto_collection_query_parameters_t *contact_source_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**contact_source_dto_collection_query_parameters** | **[contact_source_dto_collection_query_parameters_t](contact_source_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[contact_source_dto_list_envelope_t](contact_source_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ContactSourcesAPI_getContactSourcesCountAsync**
```c
// Get contact sources count
//
// Returns the count of contact sources for the specified tenant.
//
int32_envelope_t* ContactSourcesAPI_getContactSourcesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, contact_source_dto_collection_query_parameters_t *contact_source_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**contact_source_dto_collection_query_parameters** | **[contact_source_dto_collection_query_parameters_t](contact_source_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ContactSourcesAPI_patchContactSourceAsync**
```c
// Patch a contact source
//
// Patch a contact source
//
empty_envelope_t* ContactSourcesAPI_patchContactSourceAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, list_t *patch_operation);
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

# **ContactSourcesAPI_updateContactSourceAsync**
```c
// Update a contact source
//
// Updates an existing contact source for the specified tenant.
//
void ContactSourcesAPI_updateContactSourceAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, contact_source_update_dto_t *contact_source_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**id** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**contact_source_update_dto** | **[contact_source_update_dto_t](contact_source_update_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

