# SupportTicketTypesAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SupportTicketTypesAPI_createSupportTicketTypeAsync**](SupportTicketTypesAPI.md#SupportTicketTypesAPI_createSupportTicketTypeAsync) | **POST** /api/v2/SupportService/SupportTicketTypes | Create a new support ticket type
[**SupportTicketTypesAPI_deleteSupportTicketTypeAsync**](SupportTicketTypesAPI.md#SupportTicketTypesAPI_deleteSupportTicketTypeAsync) | **DELETE** /api/v2/SupportService/SupportTicketTypes/{supportTicketTypeId} | Delete a support ticket type
[**SupportTicketTypesAPI_getSupportTicketTypeAsync**](SupportTicketTypesAPI.md#SupportTicketTypesAPI_getSupportTicketTypeAsync) | **GET** /api/v2/SupportService/SupportTicketTypes/{supportTicketTypeId} | Retrieve a support ticket type by ID
[**SupportTicketTypesAPI_getSupportTicketTypesAsync**](SupportTicketTypesAPI.md#SupportTicketTypesAPI_getSupportTicketTypesAsync) | **GET** /api/v2/SupportService/SupportTicketTypes | Retrieve a list of support ticket types
[**SupportTicketTypesAPI_getSupportTicketTypesCountAsync**](SupportTicketTypesAPI.md#SupportTicketTypesAPI_getSupportTicketTypesCountAsync) | **GET** /api/v2/SupportService/SupportTicketTypes/Count | Get the count of support ticket types
[**SupportTicketTypesAPI_updateSupportTicketTypeAsync**](SupportTicketTypesAPI.md#SupportTicketTypesAPI_updateSupportTicketTypeAsync) | **PUT** /api/v2/SupportService/SupportTicketTypes/{supportTicketTypeId} | Update a support ticket type


# **SupportTicketTypesAPI_createSupportTicketTypeAsync**
```c
// Create a new support ticket type
//
// Creates a new support ticket type for the specified tenant.
//
empty_envelope_t* SupportTicketTypesAPI_createSupportTicketTypeAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, support_ticket_type_create_dto_t *support_ticket_type_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**support_ticket_type_create_dto** | **[support_ticket_type_create_dto_t](support_ticket_type_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SupportTicketTypesAPI_deleteSupportTicketTypeAsync**
```c
// Delete a support ticket type
//
// Deletes a support ticket type by its unique identifier.
//
empty_envelope_t* SupportTicketTypesAPI_deleteSupportTicketTypeAsync(apiClient_t *apiClient, char *tenantId, char *supportTicketTypeId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**supportTicketTypeId** | **char \*** |  | 
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

# **SupportTicketTypesAPI_getSupportTicketTypeAsync**
```c
// Retrieve a support ticket type by ID
//
// Retrieves a single support ticket type by its unique identifier.
//
support_ticket_type_dto_envelope_t* SupportTicketTypesAPI_getSupportTicketTypeAsync(apiClient_t *apiClient, char *tenantId, char *supportTicketTypeId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**supportTicketTypeId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[support_ticket_type_dto_envelope_t](support_ticket_type_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SupportTicketTypesAPI_getSupportTicketTypesAsync**
```c
// Retrieve a list of support ticket types
//
// Retrieves a list of support ticket types for the specified tenant with OData query support.
//
support_ticket_type_dto_list_envelope_t* SupportTicketTypesAPI_getSupportTicketTypesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[support_ticket_type_dto_list_envelope_t](support_ticket_type_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SupportTicketTypesAPI_getSupportTicketTypesCountAsync**
```c
// Get the count of support ticket types
//
// Returns the total count of support ticket types for the specified tenant with OData query support.
//
int32_envelope_t* SupportTicketTypesAPI_getSupportTicketTypesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **SupportTicketTypesAPI_updateSupportTicketTypeAsync**
```c
// Update a support ticket type
//
// Updates an existing support ticket type by its unique identifier.
//
empty_envelope_t* SupportTicketTypesAPI_updateSupportTicketTypeAsync(apiClient_t *apiClient, char *tenantId, char *supportTicketTypeId, char *api_version, char *x_api_version, support_ticket_type_update_dto_t *support_ticket_type_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**supportTicketTypeId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**support_ticket_type_update_dto** | **[support_ticket_type_update_dto_t](support_ticket_type_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

