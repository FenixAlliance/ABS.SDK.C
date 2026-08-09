# ExpenseTypesAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ExpenseTypesAPI_createExpenseType**](ExpenseTypesAPI.md#ExpenseTypesAPI_createExpenseType) | **POST** /api/v2/AccountingService/ExpenseTypes | Create an expense type
[**ExpenseTypesAPI_deleteExpenseType**](ExpenseTypesAPI.md#ExpenseTypesAPI_deleteExpenseType) | **DELETE** /api/v2/AccountingService/ExpenseTypes/{expenseTypeId} | Delete an expense type
[**ExpenseTypesAPI_getExpenseType**](ExpenseTypesAPI.md#ExpenseTypesAPI_getExpenseType) | **GET** /api/v2/AccountingService/ExpenseTypes/{expenseTypeId} | Get an expense type by id
[**ExpenseTypesAPI_getExpenseTypes**](ExpenseTypesAPI.md#ExpenseTypesAPI_getExpenseTypes) | **GET** /api/v2/AccountingService/ExpenseTypes | Get all expense types for a tenant
[**ExpenseTypesAPI_getExpenseTypesCount**](ExpenseTypesAPI.md#ExpenseTypesAPI_getExpenseTypesCount) | **GET** /api/v2/AccountingService/ExpenseTypes/Count | Get the count of expense types for a tenant
[**ExpenseTypesAPI_patchExpenseType**](ExpenseTypesAPI.md#ExpenseTypesAPI_patchExpenseType) | **PATCH** /api/v2/AccountingService/ExpenseTypes/{expenseTypeId} | Patch an expense type
[**ExpenseTypesAPI_updateExpenseType**](ExpenseTypesAPI.md#ExpenseTypesAPI_updateExpenseType) | **PUT** /api/v2/AccountingService/ExpenseTypes/{expenseTypeId} | Update an expense type


# **ExpenseTypesAPI_createExpenseType**
```c
// Create an expense type
//
// Creates a new expense type.
//
empty_envelope_t* ExpenseTypesAPI_createExpenseType(apiClient_t *apiClient, char *tenantId, expense_type_create_dto_t *expense_type_create_dto, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**expense_type_create_dto** | **[expense_type_create_dto_t](expense_type_create_dto.md) \*** |  | 
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

# **ExpenseTypesAPI_deleteExpenseType**
```c
// Delete an expense type
//
// Deletes an expense type.
//
empty_envelope_t* ExpenseTypesAPI_deleteExpenseType(apiClient_t *apiClient, char *tenantId, char *expenseTypeId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**expenseTypeId** | **char \*** |  | 
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

# **ExpenseTypesAPI_getExpenseType**
```c
// Get an expense type by id
//
// Retrieves an expense type by its identifier.
//
expense_type_dto_envelope_t* ExpenseTypesAPI_getExpenseType(apiClient_t *apiClient, char *tenantId, char *expenseTypeId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**expenseTypeId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[expense_type_dto_envelope_t](expense_type_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ExpenseTypesAPI_getExpenseTypes**
```c
// Get all expense types for a tenant
//
// Retrieves all expense types for the specified tenant using OData query options.
//
expense_type_dto_list_envelope_t* ExpenseTypesAPI_getExpenseTypes(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, expense_type_dto_collection_query_parameters_t *expense_type_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**expense_type_dto_collection_query_parameters** | **[expense_type_dto_collection_query_parameters_t](expense_type_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[expense_type_dto_list_envelope_t](expense_type_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ExpenseTypesAPI_getExpenseTypesCount**
```c
// Get the count of expense types for a tenant
//
// Retrieves the count of expense types for the specified tenant using OData query options.
//
int32_envelope_t* ExpenseTypesAPI_getExpenseTypesCount(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, expense_type_dto_collection_query_parameters_t *expense_type_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**expense_type_dto_collection_query_parameters** | **[expense_type_dto_collection_query_parameters_t](expense_type_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ExpenseTypesAPI_patchExpenseType**
```c
// Patch an expense type
//
// Partially updates an existing expense type.
//
empty_envelope_t* ExpenseTypesAPI_patchExpenseType(apiClient_t *apiClient, char *tenantId, char *expenseTypeId, char *api_version, char *x_api_version, list_t *patch_operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**expenseTypeId** | **char \*** |  | 
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

# **ExpenseTypesAPI_updateExpenseType**
```c
// Update an expense type
//
// Updates an existing expense type.
//
empty_envelope_t* ExpenseTypesAPI_updateExpenseType(apiClient_t *apiClient, char *tenantId, char *expenseTypeId, expense_type_update_dto_t *expense_type_update_dto, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**expenseTypeId** | **char \*** |  | 
**expense_type_update_dto** | **[expense_type_update_dto_t](expense_type_update_dto.md) \*** |  | 
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

