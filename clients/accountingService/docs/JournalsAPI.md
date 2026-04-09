# JournalsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**JournalsAPI_countJournalsAsync**](JournalsAPI.md#JournalsAPI_countJournalsAsync) | **GET** /api/v2/AccountingService/Journals/Count | Count journals
[**JournalsAPI_createJournalAsync**](JournalsAPI.md#JournalsAPI_createJournalAsync) | **POST** /api/v2/AccountingService/Journals | Create journal
[**JournalsAPI_createJournalEntryAsync**](JournalsAPI.md#JournalsAPI_createJournalEntryAsync) | **POST** /api/v2/AccountingService/Journals/{journalId}/Entries | Create journal entry
[**JournalsAPI_deleteJournalAsync**](JournalsAPI.md#JournalsAPI_deleteJournalAsync) | **DELETE** /api/v2/AccountingService/Journals/{journalId} | Delete journal
[**JournalsAPI_deleteJournalEntryAsync**](JournalsAPI.md#JournalsAPI_deleteJournalEntryAsync) | **DELETE** /api/v2/AccountingService/Journals/{journalId}/Entries/{entryId} | Delete journal entry
[**JournalsAPI_getJournalDetailsAsync**](JournalsAPI.md#JournalsAPI_getJournalDetailsAsync) | **GET** /api/v2/AccountingService/Journals/{journalId} | Get journal by ID
[**JournalsAPI_getJournalEntriesAsync**](JournalsAPI.md#JournalsAPI_getJournalEntriesAsync) | **GET** /api/v2/AccountingService/Journals/{journalId}/Entries | Get journal entries
[**JournalsAPI_getJournalEntriesCountAsync**](JournalsAPI.md#JournalsAPI_getJournalEntriesCountAsync) | **GET** /api/v2/AccountingService/Journals/{journalId}/Entries/Count | Count journal entries
[**JournalsAPI_getJournalsAsync**](JournalsAPI.md#JournalsAPI_getJournalsAsync) | **GET** /api/v2/AccountingService/Journals | Get all journals
[**JournalsAPI_updateJournalAsync**](JournalsAPI.md#JournalsAPI_updateJournalAsync) | **PUT** /api/v2/AccountingService/Journals/{journalId} | Update journal
[**JournalsAPI_updateJournalEntryAsync**](JournalsAPI.md#JournalsAPI_updateJournalEntryAsync) | **PUT** /api/v2/AccountingService/Journals/{journalId}/Entries/{entryId} | Update journal entry


# **JournalsAPI_countJournalsAsync**
```c
// Count journals
//
// Returns the count of journals for the tenant.
//
int32_envelope_t* JournalsAPI_countJournalsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **JournalsAPI_createJournalAsync**
```c
// Create journal
//
// Creates a new journal for the tenant.
//
empty_envelope_t* JournalsAPI_createJournalAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, journal_create_dto_t *journal_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**journal_create_dto** | **[journal_create_dto_t](journal_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **JournalsAPI_createJournalEntryAsync**
```c
// Create journal entry
//
// Creates a new journal entry for a given journal.
//
empty_envelope_t* JournalsAPI_createJournalEntryAsync(apiClient_t *apiClient, char *tenantId, char *journalId, char *api_version, char *x_api_version, journal_entry_create_dto_t *journal_entry_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**journalId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**journal_entry_create_dto** | **[journal_entry_create_dto_t](journal_entry_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **JournalsAPI_deleteJournalAsync**
```c
// Delete journal
//
// Deletes a journal by ID.
//
empty_envelope_t* JournalsAPI_deleteJournalAsync(apiClient_t *apiClient, char *tenantId, char *journalId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**journalId** | **char \*** |  | 
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

# **JournalsAPI_deleteJournalEntryAsync**
```c
// Delete journal entry
//
// Deletes a specific journal entry.
//
empty_envelope_t* JournalsAPI_deleteJournalEntryAsync(apiClient_t *apiClient, char *tenantId, char *journalId, char *entryId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**journalId** | **char \*** |  | 
**entryId** | **char \*** |  | 
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

# **JournalsAPI_getJournalDetailsAsync**
```c
// Get journal by ID
//
// Retrieves the details of a journal.
//
journal_dto_envelope_t* JournalsAPI_getJournalDetailsAsync(apiClient_t *apiClient, char *tenantId, char *journalId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**journalId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[journal_dto_envelope_t](journal_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **JournalsAPI_getJournalEntriesAsync**
```c
// Get journal entries
//
// Gets entries for the specified journal.
//
journal_entry_dto_i_read_only_list_envelope_t* JournalsAPI_getJournalEntriesAsync(apiClient_t *apiClient, char *tenantId, char *journalId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**journalId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[journal_entry_dto_i_read_only_list_envelope_t](journal_entry_dto_i_read_only_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **JournalsAPI_getJournalEntriesCountAsync**
```c
// Count journal entries
//
// Returns the number of entries in the specified journal.
//
int32_envelope_t* JournalsAPI_getJournalEntriesCountAsync(apiClient_t *apiClient, char *tenantId, char *journalId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**journalId** | **char \*** |  | 
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

# **JournalsAPI_getJournalsAsync**
```c
// Get all journals
//
// Retrieves all journals for the specified tenant.
//
journal_dto_i_read_only_list_envelope_t* JournalsAPI_getJournalsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[journal_dto_i_read_only_list_envelope_t](journal_dto_i_read_only_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **JournalsAPI_updateJournalAsync**
```c
// Update journal
//
// Updates an existing journal.
//
empty_envelope_t* JournalsAPI_updateJournalAsync(apiClient_t *apiClient, char *tenantId, char *journalId, char *api_version, char *x_api_version, journal_update_dto_t *journal_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**journalId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**journal_update_dto** | **[journal_update_dto_t](journal_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **JournalsAPI_updateJournalEntryAsync**
```c
// Update journal entry
//
// Updates a specific journal entry.
//
empty_envelope_t* JournalsAPI_updateJournalEntryAsync(apiClient_t *apiClient, char *tenantId, char *journalId, char *entryId, char *api_version, char *x_api_version, journal_entry_update_dto_t *journal_entry_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**journalId** | **char \*** |  | 
**entryId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**journal_entry_update_dto** | **[journal_entry_update_dto_t](journal_entry_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

