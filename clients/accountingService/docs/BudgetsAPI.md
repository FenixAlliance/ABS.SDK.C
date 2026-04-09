# BudgetsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**BudgetsAPI_createBudgetAccountEntryAsync**](BudgetsAPI.md#BudgetsAPI_createBudgetAccountEntryAsync) | **POST** /api/v2/AccountingService/Budgets/{budgetId}/AccountEntries | Creates a budget account entry
[**BudgetsAPI_createBudgetAsync**](BudgetsAPI.md#BudgetsAPI_createBudgetAsync) | **POST** /api/v2/AccountingService/Budgets | Creates a budget
[**BudgetsAPI_deleteBudgetAccountEntryAsync**](BudgetsAPI.md#BudgetsAPI_deleteBudgetAccountEntryAsync) | **DELETE** /api/v2/AccountingService/Budgets/{budgetId}/AccountEntries/{entryId} | Deletes a budget account entry
[**BudgetsAPI_deleteBudgetAsync**](BudgetsAPI.md#BudgetsAPI_deleteBudgetAsync) | **DELETE** /api/v2/AccountingService/Budgets/{budgetId} | Deletes a budget
[**BudgetsAPI_getBudgetAccountEntriesCollectionAsync**](BudgetsAPI.md#BudgetsAPI_getBudgetAccountEntriesCollectionAsync) | **GET** /api/v2/AccountingService/Budgets/{budgetId}/AccountEntries | Gets all budget account entries
[**BudgetsAPI_getBudgetAccountEntryAsync**](BudgetsAPI.md#BudgetsAPI_getBudgetAccountEntryAsync) | **GET** /api/v2/AccountingService/Budgets/{budgetId}/AccountEntries/{entryId} | Gets a budget account entry by id
[**BudgetsAPI_getBudgetDetailsAsync**](BudgetsAPI.md#BudgetsAPI_getBudgetDetailsAsync) | **GET** /api/v2/AccountingService/Budgets/{budgetId} | Gets a budget by id
[**BudgetsAPI_getBudgetsAsync**](BudgetsAPI.md#BudgetsAPI_getBudgetsAsync) | **GET** /api/v2/AccountingService/Budgets | Gets all budgets
[**BudgetsAPI_updateBudgetAccountEntryAsync**](BudgetsAPI.md#BudgetsAPI_updateBudgetAccountEntryAsync) | **PUT** /api/v2/AccountingService/Budgets/{budgetId}/AccountEntries/{entryId} | Updates a budget account entry
[**BudgetsAPI_updateBudgetAsync**](BudgetsAPI.md#BudgetsAPI_updateBudgetAsync) | **PUT** /api/v2/AccountingService/Budgets/{budgetId} | Updates a budget


# **BudgetsAPI_createBudgetAccountEntryAsync**
```c
// Creates a budget account entry
//
// Create a budget account entry
//
empty_envelope_t* BudgetsAPI_createBudgetAccountEntryAsync(apiClient_t *apiClient, char *tenantId, char *budgetId, budget_account_entry_create_dto_t *budget_account_entry_create_dto, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**budgetId** | **char \*** |  | 
**budget_account_entry_create_dto** | **[budget_account_entry_create_dto_t](budget_account_entry_create_dto.md) \*** |  | 
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

# **BudgetsAPI_createBudgetAsync**
```c
// Creates a budget
//
// Create a budget
//
empty_envelope_t* BudgetsAPI_createBudgetAsync(apiClient_t *apiClient, char *tenantId, budget_create_dto_t *budget_create_dto, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**budget_create_dto** | **[budget_create_dto_t](budget_create_dto.md) \*** |  | 
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

# **BudgetsAPI_deleteBudgetAccountEntryAsync**
```c
// Deletes a budget account entry
//
// Delete a budget account entry
//
empty_envelope_t* BudgetsAPI_deleteBudgetAccountEntryAsync(apiClient_t *apiClient, char *tenantId, char *budgetId, char *entryId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**budgetId** | **char \*** |  | 
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

# **BudgetsAPI_deleteBudgetAsync**
```c
// Deletes a budget
//
// Delete a budget
//
empty_envelope_t* BudgetsAPI_deleteBudgetAsync(apiClient_t *apiClient, char *tenantId, char *budgetId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**budgetId** | **char \*** |  | 
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

# **BudgetsAPI_getBudgetAccountEntriesCollectionAsync**
```c
// Gets all budget account entries
//
// Get all budget account entries
//
budget_account_entry_dto_i_read_only_list_envelope_t* BudgetsAPI_getBudgetAccountEntriesCollectionAsync(apiClient_t *apiClient, char *tenantId, char *budgetId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**budgetId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[budget_account_entry_dto_i_read_only_list_envelope_t](budget_account_entry_dto_i_read_only_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BudgetsAPI_getBudgetAccountEntryAsync**
```c
// Gets a budget account entry by id
//
// Get a budget account entry by id
//
budget_account_entry_dto_envelope_t* BudgetsAPI_getBudgetAccountEntryAsync(apiClient_t *apiClient, char *tenantId, char *budgetId, char *entryId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**budgetId** | **char \*** |  | 
**entryId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[budget_account_entry_dto_envelope_t](budget_account_entry_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BudgetsAPI_getBudgetDetailsAsync**
```c
// Gets a budget by id
//
// Get a budget by id
//
budget_dto_envelope_t* BudgetsAPI_getBudgetDetailsAsync(apiClient_t *apiClient, char *tenantId, char *budgetId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**budgetId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[budget_dto_envelope_t](budget_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BudgetsAPI_getBudgetsAsync**
```c
// Gets all budgets
//
// Get all budgets
//
budget_dto_i_read_only_list_envelope_t* BudgetsAPI_getBudgetsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[budget_dto_i_read_only_list_envelope_t](budget_dto_i_read_only_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BudgetsAPI_updateBudgetAccountEntryAsync**
```c
// Updates a budget account entry
//
// Update a budget account entry
//
empty_envelope_t* BudgetsAPI_updateBudgetAccountEntryAsync(apiClient_t *apiClient, char *tenantId, char *budgetId, char *entryId, budget_account_entry_update_dto_t *budget_account_entry_update_dto, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**budgetId** | **char \*** |  | 
**entryId** | **char \*** |  | 
**budget_account_entry_update_dto** | **[budget_account_entry_update_dto_t](budget_account_entry_update_dto.md) \*** |  | 
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

# **BudgetsAPI_updateBudgetAsync**
```c
// Updates a budget
//
// Update a budget
//
empty_envelope_t* BudgetsAPI_updateBudgetAsync(apiClient_t *apiClient, char *tenantId, char *budgetId, budget_update_dto_t *budget_update_dto, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**budgetId** | **char \*** |  | 
**budget_update_dto** | **[budget_update_dto_t](budget_update_dto.md) \*** |  | 
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

