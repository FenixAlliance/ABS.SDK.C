# BusinessRelationshipsAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**BusinessRelationshipsAPI_createBusinessRelationshipAsync**](BusinessRelationshipsAPI.md#BusinessRelationshipsAPI_createBusinessRelationshipAsync) | **POST** /api/v2/TenantsService/BusinessRelationships | Create a business relationship
[**BusinessRelationshipsAPI_deleteBusinessRelationshipAsync**](BusinessRelationshipsAPI.md#BusinessRelationshipsAPI_deleteBusinessRelationshipAsync) | **DELETE** /api/v2/TenantsService/BusinessRelationships/{businessRelationshipId} | Delete a business relationship
[**BusinessRelationshipsAPI_getBusinessRelationshipByIdAsync**](BusinessRelationshipsAPI.md#BusinessRelationshipsAPI_getBusinessRelationshipByIdAsync) | **GET** /api/v2/TenantsService/BusinessRelationships/{businessRelationshipId} | Get business relationship by ID
[**BusinessRelationshipsAPI_getBusinessRelationshipsAsync**](BusinessRelationshipsAPI.md#BusinessRelationshipsAPI_getBusinessRelationshipsAsync) | **GET** /api/v2/TenantsService/BusinessRelationships | Get business relationships
[**BusinessRelationshipsAPI_getBusinessRelationshipsCountAsync**](BusinessRelationshipsAPI.md#BusinessRelationshipsAPI_getBusinessRelationshipsCountAsync) | **GET** /api/v2/TenantsService/BusinessRelationships/Count | Get business relationships count
[**BusinessRelationshipsAPI_updateBusinessRelationshipAsync**](BusinessRelationshipsAPI.md#BusinessRelationshipsAPI_updateBusinessRelationshipAsync) | **PUT** /api/v2/TenantsService/BusinessRelationships/{businessRelationshipId} | Update a business relationship


# **BusinessRelationshipsAPI_createBusinessRelationshipAsync**
```c
// Create a business relationship
//
// Creates a new business relationship owned by the specified parent tenant.
//
empty_envelope_t* BusinessRelationshipsAPI_createBusinessRelationshipAsync(apiClient_t *apiClient, char *tenantId, business_relationship_create_dto_t *business_relationship_create_dto, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**business_relationship_create_dto** | **[business_relationship_create_dto_t](business_relationship_create_dto.md) \*** |  | 
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

# **BusinessRelationshipsAPI_deleteBusinessRelationshipAsync**
```c
// Delete a business relationship
//
// Deletes a business relationship by its ID.
//
empty_envelope_t* BusinessRelationshipsAPI_deleteBusinessRelationshipAsync(apiClient_t *apiClient, char *tenantId, char *businessRelationshipId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**businessRelationshipId** | **char \*** |  | 
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

# **BusinessRelationshipsAPI_getBusinessRelationshipByIdAsync**
```c
// Get business relationship by ID
//
// Retrieves the details of a specific business relationship by its ID.
//
business_relationship_dto_envelope_t* BusinessRelationshipsAPI_getBusinessRelationshipByIdAsync(apiClient_t *apiClient, char *tenantId, char *businessRelationshipId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**businessRelationshipId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[business_relationship_dto_envelope_t](business_relationship_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BusinessRelationshipsAPI_getBusinessRelationshipsAsync**
```c
// Get business relationships
//
// Retrieves the child business relationships owned by the specified parent tenant using OData query options.
//
business_relationship_dto_list_envelope_t* BusinessRelationshipsAPI_getBusinessRelationshipsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[business_relationship_dto_list_envelope_t](business_relationship_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BusinessRelationshipsAPI_getBusinessRelationshipsCountAsync**
```c
// Get business relationships count
//
// Returns the count of child business relationships owned by the specified parent tenant.
//
int32_envelope_t* BusinessRelationshipsAPI_getBusinessRelationshipsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **BusinessRelationshipsAPI_updateBusinessRelationshipAsync**
```c
// Update a business relationship
//
// Updates an existing business relationship by its ID.
//
empty_envelope_t* BusinessRelationshipsAPI_updateBusinessRelationshipAsync(apiClient_t *apiClient, char *tenantId, char *businessRelationshipId, business_relationship_update_dto_t *business_relationship_update_dto, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**businessRelationshipId** | **char \*** |  | 
**business_relationship_update_dto** | **[business_relationship_update_dto_t](business_relationship_update_dto.md) \*** |  | 
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

