# ExpenseClaimsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ExpenseClaimsAPI_createExpenseClaim**](ExpenseClaimsAPI.md#ExpenseClaimsAPI_createExpenseClaim) | **POST** /api/v2/AccountingService/ExpenseClaims | Create an expense claim
[**ExpenseClaimsAPI_deleteExpenseClaim**](ExpenseClaimsAPI.md#ExpenseClaimsAPI_deleteExpenseClaim) | **DELETE** /api/v2/AccountingService/ExpenseClaims/{expenseClaimId} | Delete an expense claim
[**ExpenseClaimsAPI_getExpenseClaim**](ExpenseClaimsAPI.md#ExpenseClaimsAPI_getExpenseClaim) | **GET** /api/v2/AccountingService/ExpenseClaims/{expenseClaimId} | Get an expense claim by id
[**ExpenseClaimsAPI_getExpenseClaims**](ExpenseClaimsAPI.md#ExpenseClaimsAPI_getExpenseClaims) | **GET** /api/v2/AccountingService/ExpenseClaims | Get all expense claims for a tenant
[**ExpenseClaimsAPI_getExpenseClaimsCount**](ExpenseClaimsAPI.md#ExpenseClaimsAPI_getExpenseClaimsCount) | **GET** /api/v2/AccountingService/ExpenseClaims/Count | Get the count of expense claims for a tenant
[**ExpenseClaimsAPI_patchExpenseClaim**](ExpenseClaimsAPI.md#ExpenseClaimsAPI_patchExpenseClaim) | **PATCH** /api/v2/AccountingService/ExpenseClaims/{expenseClaimId} | Patch an expense claim
[**ExpenseClaimsAPI_updateExpenseClaim**](ExpenseClaimsAPI.md#ExpenseClaimsAPI_updateExpenseClaim) | **PUT** /api/v2/AccountingService/ExpenseClaims/{expenseClaimId} | Update an expense claim


# **ExpenseClaimsAPI_createExpenseClaim**
```c
// Create an expense claim
//
// Creates a new expense claim.
//
empty_envelope_t* ExpenseClaimsAPI_createExpenseClaim(apiClient_t *apiClient, char *tenantId, expense_claim_create_dto_t *expense_claim_create_dto, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**expense_claim_create_dto** | **[expense_claim_create_dto_t](expense_claim_create_dto.md) \*** |  | 
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

# **ExpenseClaimsAPI_deleteExpenseClaim**
```c
// Delete an expense claim
//
// Deletes an expense claim.
//
empty_envelope_t* ExpenseClaimsAPI_deleteExpenseClaim(apiClient_t *apiClient, char *tenantId, char *expenseClaimId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**expenseClaimId** | **char \*** |  | 
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

# **ExpenseClaimsAPI_getExpenseClaim**
```c
// Get an expense claim by id
//
// Retrieves an expense claim by its identifier.
//
expense_claim_dto_envelope_t* ExpenseClaimsAPI_getExpenseClaim(apiClient_t *apiClient, char *tenantId, char *expenseClaimId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**expenseClaimId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[expense_claim_dto_envelope_t](expense_claim_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ExpenseClaimsAPI_getExpenseClaims**
```c
// Get all expense claims for a tenant
//
// Retrieves all expense claims for the specified tenant using OData query options.
//
expense_claim_dto_list_envelope_t* ExpenseClaimsAPI_getExpenseClaims(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[expense_claim_dto_list_envelope_t](expense_claim_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ExpenseClaimsAPI_getExpenseClaimsCount**
```c
// Get the count of expense claims for a tenant
//
// Retrieves the count of expense claims for the specified tenant using OData query options.
//
int32_envelope_t* ExpenseClaimsAPI_getExpenseClaimsCount(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **ExpenseClaimsAPI_patchExpenseClaim**
```c
// Patch an expense claim
//
// Partially updates an existing expense claim.
//
empty_envelope_t* ExpenseClaimsAPI_patchExpenseClaim(apiClient_t *apiClient, char *tenantId, char *expenseClaimId, char *api_version, char *x_api_version, list_t *operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**expenseClaimId** | **char \*** |  | 
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

# **ExpenseClaimsAPI_updateExpenseClaim**
```c
// Update an expense claim
//
// Updates an existing expense claim.
//
empty_envelope_t* ExpenseClaimsAPI_updateExpenseClaim(apiClient_t *apiClient, char *tenantId, char *expenseClaimId, expense_claim_update_dto_t *expense_claim_update_dto, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**expenseClaimId** | **char \*** |  | 
**expense_claim_update_dto** | **[expense_claim_update_dto_t](expense_claim_update_dto.md) \*** |  | 
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

