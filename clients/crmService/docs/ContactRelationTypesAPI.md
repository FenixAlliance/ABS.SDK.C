# ContactRelationTypesAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ContactRelationTypesAPI_createContactRelationTypeAsync**](ContactRelationTypesAPI.md#ContactRelationTypesAPI_createContactRelationTypeAsync) | **POST** /api/v2/CrmService/ContactRelationTypes | Create a new contact relation type
[**ContactRelationTypesAPI_deleteContactRelationTypeAsync**](ContactRelationTypesAPI.md#ContactRelationTypesAPI_deleteContactRelationTypeAsync) | **DELETE** /api/v2/CrmService/ContactRelationTypes/{id} | Delete a contact relation type
[**ContactRelationTypesAPI_getContactRelationTypeByIdAsync**](ContactRelationTypesAPI.md#ContactRelationTypesAPI_getContactRelationTypeByIdAsync) | **GET** /api/v2/CrmService/ContactRelationTypes/{id} | Get contact relation type by ID
[**ContactRelationTypesAPI_getContactRelationTypesAsync**](ContactRelationTypesAPI.md#ContactRelationTypesAPI_getContactRelationTypesAsync) | **GET** /api/v2/CrmService/ContactRelationTypes | Get all contact relation types
[**ContactRelationTypesAPI_getContactRelationTypesCountAsync**](ContactRelationTypesAPI.md#ContactRelationTypesAPI_getContactRelationTypesCountAsync) | **GET** /api/v2/CrmService/ContactRelationTypes/Count | Get contact relation types count
[**ContactRelationTypesAPI_patchContactRelationTypeAsync**](ContactRelationTypesAPI.md#ContactRelationTypesAPI_patchContactRelationTypeAsync) | **PATCH** /api/v2/CrmService/ContactRelationTypes/{id} | Patch a contact relation type
[**ContactRelationTypesAPI_updateContactRelationTypeAsync**](ContactRelationTypesAPI.md#ContactRelationTypesAPI_updateContactRelationTypeAsync) | **PUT** /api/v2/CrmService/ContactRelationTypes/{id} | Update a contact relation type


# **ContactRelationTypesAPI_createContactRelationTypeAsync**
```c
// Create a new contact relation type
//
// Creates a new contact relation type for the specified tenant.
//
void ContactRelationTypesAPI_createContactRelationTypeAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, contact_relation_type_create_dto_t *contact_relation_type_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**contact_relation_type_create_dto** | **[contact_relation_type_create_dto_t](contact_relation_type_create_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ContactRelationTypesAPI_deleteContactRelationTypeAsync**
```c
// Delete a contact relation type
//
// Deletes a contact relation type for the specified tenant.
//
void ContactRelationTypesAPI_deleteContactRelationTypeAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);
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

# **ContactRelationTypesAPI_getContactRelationTypeByIdAsync**
```c
// Get contact relation type by ID
//
// Retrieves a specific contact relation type by its identifier.
//
contact_relation_type_dto_t* ContactRelationTypesAPI_getContactRelationTypeByIdAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);
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

[contact_relation_type_dto_t](contact_relation_type_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ContactRelationTypesAPI_getContactRelationTypesAsync**
```c
// Get all contact relation types
//
// Retrieves all contact relation types for the specified tenant.
//
contact_relation_type_dto_list_envelope_t* ContactRelationTypesAPI_getContactRelationTypesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, contact_relation_type_dto_collection_query_parameters_t *contact_relation_type_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**contact_relation_type_dto_collection_query_parameters** | **[contact_relation_type_dto_collection_query_parameters_t](contact_relation_type_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[contact_relation_type_dto_list_envelope_t](contact_relation_type_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ContactRelationTypesAPI_getContactRelationTypesCountAsync**
```c
// Get contact relation types count
//
// Returns the count of contact relation types for the specified tenant.
//
int32_envelope_t* ContactRelationTypesAPI_getContactRelationTypesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, contact_relation_type_dto_collection_query_parameters_t *contact_relation_type_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**contact_relation_type_dto_collection_query_parameters** | **[contact_relation_type_dto_collection_query_parameters_t](contact_relation_type_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ContactRelationTypesAPI_patchContactRelationTypeAsync**
```c
// Patch a contact relation type
//
// Patch a contact relation type
//
empty_envelope_t* ContactRelationTypesAPI_patchContactRelationTypeAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, list_t *patch_operation);
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

# **ContactRelationTypesAPI_updateContactRelationTypeAsync**
```c
// Update a contact relation type
//
// Updates an existing contact relation type for the specified tenant.
//
void ContactRelationTypesAPI_updateContactRelationTypeAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, contact_relation_type_update_dto_t *contact_relation_type_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**id** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**contact_relation_type_update_dto** | **[contact_relation_type_update_dto_t](contact_relation_type_update_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

