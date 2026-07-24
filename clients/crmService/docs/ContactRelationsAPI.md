# ContactRelationsAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ContactRelationsAPI_createContactRelationAsync**](ContactRelationsAPI.md#ContactRelationsAPI_createContactRelationAsync) | **POST** /api/v2/CrmService/ContactRelations | Create a new contact relation
[**ContactRelationsAPI_deleteContactRelationAsync**](ContactRelationsAPI.md#ContactRelationsAPI_deleteContactRelationAsync) | **DELETE** /api/v2/CrmService/ContactRelations/{id} | Delete a contact relation
[**ContactRelationsAPI_getContactRelationByIdAsync**](ContactRelationsAPI.md#ContactRelationsAPI_getContactRelationByIdAsync) | **GET** /api/v2/CrmService/ContactRelations/{id} | Get contact relation by ID
[**ContactRelationsAPI_getContactRelationsAsync**](ContactRelationsAPI.md#ContactRelationsAPI_getContactRelationsAsync) | **GET** /api/v2/CrmService/ContactRelations | Get all contact relations
[**ContactRelationsAPI_getContactRelationsCountAsync**](ContactRelationsAPI.md#ContactRelationsAPI_getContactRelationsCountAsync) | **GET** /api/v2/CrmService/ContactRelations/Count | Get contact relations count
[**ContactRelationsAPI_patchContactRelationAsync**](ContactRelationsAPI.md#ContactRelationsAPI_patchContactRelationAsync) | **PATCH** /api/v2/CrmService/ContactRelations/{id} | Patch a contact relation
[**ContactRelationsAPI_updateContactRelationAsync**](ContactRelationsAPI.md#ContactRelationsAPI_updateContactRelationAsync) | **PUT** /api/v2/CrmService/ContactRelations/{id} | Update a contact relation


# **ContactRelationsAPI_createContactRelationAsync**
```c
// Create a new contact relation
//
// Creates a new contact relation for the specified tenant.
//
void ContactRelationsAPI_createContactRelationAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, contact_relation_create_dto_t *contact_relation_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**contact_relation_create_dto** | **[contact_relation_create_dto_t](contact_relation_create_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ContactRelationsAPI_deleteContactRelationAsync**
```c
// Delete a contact relation
//
// Deletes a contact relation for the specified tenant.
//
void ContactRelationsAPI_deleteContactRelationAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);
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

# **ContactRelationsAPI_getContactRelationByIdAsync**
```c
// Get contact relation by ID
//
// Retrieves a specific contact relation by its identifier.
//
contact_relation_dto_t* ContactRelationsAPI_getContactRelationByIdAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);
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

[contact_relation_dto_t](contact_relation_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ContactRelationsAPI_getContactRelationsAsync**
```c
// Get all contact relations
//
// Retrieves all contact relations for the specified tenant.
//
contact_relation_dto_list_envelope_t* ContactRelationsAPI_getContactRelationsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[contact_relation_dto_list_envelope_t](contact_relation_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ContactRelationsAPI_getContactRelationsCountAsync**
```c
// Get contact relations count
//
// Returns the count of contact relations for the specified tenant.
//
int32_envelope_t* ContactRelationsAPI_getContactRelationsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **ContactRelationsAPI_patchContactRelationAsync**
```c
// Patch a contact relation
//
// Patch a contact relation
//
empty_envelope_t* ContactRelationsAPI_patchContactRelationAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, list_t *operation);
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

# **ContactRelationsAPI_updateContactRelationAsync**
```c
// Update a contact relation
//
// Updates an existing contact relation for the specified tenant.
//
void ContactRelationsAPI_updateContactRelationAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, contact_relation_update_dto_t *contact_relation_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**id** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**contact_relation_update_dto** | **[contact_relation_update_dto_t](contact_relation_update_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

