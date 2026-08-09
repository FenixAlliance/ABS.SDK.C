# ContactGroupsAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ContactGroupsAPI_createContactGroupAsync**](ContactGroupsAPI.md#ContactGroupsAPI_createContactGroupAsync) | **POST** /api/v2/CrmService/ContactGroups | Create a new contact group
[**ContactGroupsAPI_deleteContactGroupAsync**](ContactGroupsAPI.md#ContactGroupsAPI_deleteContactGroupAsync) | **DELETE** /api/v2/CrmService/ContactGroups/{id} | Delete a contact group
[**ContactGroupsAPI_getContactGroupByIdAsync**](ContactGroupsAPI.md#ContactGroupsAPI_getContactGroupByIdAsync) | **GET** /api/v2/CrmService/ContactGroups/{id} | Get contact group by ID
[**ContactGroupsAPI_getContactGroupsAsync**](ContactGroupsAPI.md#ContactGroupsAPI_getContactGroupsAsync) | **GET** /api/v2/CrmService/ContactGroups | Get all contact groups
[**ContactGroupsAPI_getContactGroupsCountAsync**](ContactGroupsAPI.md#ContactGroupsAPI_getContactGroupsCountAsync) | **GET** /api/v2/CrmService/ContactGroups/Count | Get contact groups count
[**ContactGroupsAPI_patchContactGroupAsync**](ContactGroupsAPI.md#ContactGroupsAPI_patchContactGroupAsync) | **PATCH** /api/v2/CrmService/ContactGroups/{id} | Patch a contact group
[**ContactGroupsAPI_updateContactGroupAsync**](ContactGroupsAPI.md#ContactGroupsAPI_updateContactGroupAsync) | **PUT** /api/v2/CrmService/ContactGroups/{id} | Update a contact group


# **ContactGroupsAPI_createContactGroupAsync**
```c
// Create a new contact group
//
// Creates a new contact group for the specified tenant.
//
void ContactGroupsAPI_createContactGroupAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, contacts_group_create_dto_t *contacts_group_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**contacts_group_create_dto** | **[contacts_group_create_dto_t](contacts_group_create_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ContactGroupsAPI_deleteContactGroupAsync**
```c
// Delete a contact group
//
// Deletes a contact group for the specified tenant.
//
void ContactGroupsAPI_deleteContactGroupAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);
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

# **ContactGroupsAPI_getContactGroupByIdAsync**
```c
// Get contact group by ID
//
// Retrieves a specific contact group by its identifier.
//
contacts_group_dto_t* ContactGroupsAPI_getContactGroupByIdAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);
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

[contacts_group_dto_t](contacts_group_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ContactGroupsAPI_getContactGroupsAsync**
```c
// Get all contact groups
//
// Retrieves all contact groups for the specified tenant.
//
contacts_group_dto_list_envelope_t* ContactGroupsAPI_getContactGroupsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, contacts_group_dto_collection_query_parameters_t *contacts_group_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**contacts_group_dto_collection_query_parameters** | **[contacts_group_dto_collection_query_parameters_t](contacts_group_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[contacts_group_dto_list_envelope_t](contacts_group_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ContactGroupsAPI_getContactGroupsCountAsync**
```c
// Get contact groups count
//
// Returns the count of contact groups for the specified tenant.
//
int32_envelope_t* ContactGroupsAPI_getContactGroupsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, contacts_group_dto_collection_query_parameters_t *contacts_group_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**contacts_group_dto_collection_query_parameters** | **[contacts_group_dto_collection_query_parameters_t](contacts_group_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ContactGroupsAPI_patchContactGroupAsync**
```c
// Patch a contact group
//
// Patch a contact group
//
empty_envelope_t* ContactGroupsAPI_patchContactGroupAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, list_t *patch_operation);
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

# **ContactGroupsAPI_updateContactGroupAsync**
```c
// Update a contact group
//
// Updates an existing contact group for the specified tenant.
//
void ContactGroupsAPI_updateContactGroupAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, contacts_group_update_dto_t *contacts_group_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**id** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**contacts_group_update_dto** | **[contacts_group_update_dto_t](contacts_group_update_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

