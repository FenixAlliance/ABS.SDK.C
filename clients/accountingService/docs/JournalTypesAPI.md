# JournalTypesAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**JournalTypesAPI_createJournalTypeAsync**](JournalTypesAPI.md#JournalTypesAPI_createJournalTypeAsync) | **POST** /api/v2/AccountingService/JournalTypes | Creates a new journal type
[**JournalTypesAPI_deleteJournalTypeAsync**](JournalTypesAPI.md#JournalTypesAPI_deleteJournalTypeAsync) | **DELETE** /api/v2/AccountingService/JournalTypes/{journalTypeId} | Deletes a journal type
[**JournalTypesAPI_getJournalTypeDetailsAsync**](JournalTypesAPI.md#JournalTypesAPI_getJournalTypeDetailsAsync) | **GET** /api/v2/AccountingService/JournalTypes/{journalTypeId} | Retrieves a journal type by ID
[**JournalTypesAPI_getJournalTypesAsync**](JournalTypesAPI.md#JournalTypesAPI_getJournalTypesAsync) | **GET** /api/v2/AccountingService/JournalTypes | Retrieves all journal types
[**JournalTypesAPI_getJournalTypesCountAsync**](JournalTypesAPI.md#JournalTypesAPI_getJournalTypesCountAsync) | **GET** /api/v2/AccountingService/JournalTypes/Count | Counts journal types
[**JournalTypesAPI_updateJournalTypeAsync**](JournalTypesAPI.md#JournalTypesAPI_updateJournalTypeAsync) | **PUT** /api/v2/AccountingService/JournalTypes/{journalTypeId} | Updates an existing journal type


# **JournalTypesAPI_createJournalTypeAsync**
```c
// Creates a new journal type
//
// Adds a new journal type to the tenant's catalog.
//
empty_envelope_t* JournalTypesAPI_createJournalTypeAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, journal_type_create_dto_t *journal_type_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**journal_type_create_dto** | **[journal_type_create_dto_t](journal_type_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **JournalTypesAPI_deleteJournalTypeAsync**
```c
// Deletes a journal type
//
// Removes a journal type from the tenant's configuration.
//
empty_envelope_t* JournalTypesAPI_deleteJournalTypeAsync(apiClient_t *apiClient, char *tenantId, char *journalTypeId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**journalTypeId** | **char \*** |  | 
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

# **JournalTypesAPI_getJournalTypeDetailsAsync**
```c
// Retrieves a journal type by ID
//
// Fetches the journal type matching the specified ID.
//
journal_type_dto_envelope_t* JournalTypesAPI_getJournalTypeDetailsAsync(apiClient_t *apiClient, char *tenantId, char *journalTypeId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**journalTypeId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[journal_type_dto_envelope_t](journal_type_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **JournalTypesAPI_getJournalTypesAsync**
```c
// Retrieves all journal types
//
// Fetches all journal types for the current tenant with OData support.
//
journal_type_dto_i_read_only_list_envelope_t* JournalTypesAPI_getJournalTypesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[journal_type_dto_i_read_only_list_envelope_t](journal_type_dto_i_read_only_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **JournalTypesAPI_getJournalTypesCountAsync**
```c
// Counts journal types
//
// Returns the total number of journal types available for the tenant.
//
int32_envelope_t* JournalTypesAPI_getJournalTypesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **JournalTypesAPI_updateJournalTypeAsync**
```c
// Updates an existing journal type
//
// Modifies the details of a specific journal type.
//
empty_envelope_t* JournalTypesAPI_updateJournalTypeAsync(apiClient_t *apiClient, char *tenantId, char *journalTypeId, char *api_version, char *x_api_version, journal_type_update_dto_t *journal_type_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**journalTypeId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**journal_type_update_dto** | **[journal_type_update_dto_t](journal_type_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

