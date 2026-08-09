# LoansAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**LoansAPI_createLoanApplicationAsync**](LoansAPI.md#LoansAPI_createLoanApplicationAsync) | **POST** /api/v2/AccountingService/Loans/Applications | Creates a loan application
[**LoansAPI_createLoanAsync**](LoansAPI.md#LoansAPI_createLoanAsync) | **POST** /api/v2/AccountingService/Loans | Creates a new loan
[**LoansAPI_createLoanTypeAsync**](LoansAPI.md#LoansAPI_createLoanTypeAsync) | **POST** /api/v2/AccountingService/Loans/Types | Creates a loan type
[**LoansAPI_deleteLoanApplicationAsync**](LoansAPI.md#LoansAPI_deleteLoanApplicationAsync) | **DELETE** /api/v2/AccountingService/Loans/Applications/{applicationId} | Deletes a loan application
[**LoansAPI_deleteLoanAsync**](LoansAPI.md#LoansAPI_deleteLoanAsync) | **DELETE** /api/v2/AccountingService/Loans/{loanId} | Deletes a loan
[**LoansAPI_deleteLoanTypeAsync**](LoansAPI.md#LoansAPI_deleteLoanTypeAsync) | **DELETE** /api/v2/AccountingService/Loans/Types/{loanTypeId} | Deletes a loan type
[**LoansAPI_getLoanApplicationDetailsAsync**](LoansAPI.md#LoansAPI_getLoanApplicationDetailsAsync) | **GET** /api/v2/AccountingService/Loans/Applications/{applicationId} | Gets a loan application by ID
[**LoansAPI_getLoanApplicationsAsync**](LoansAPI.md#LoansAPI_getLoanApplicationsAsync) | **GET** /api/v2/AccountingService/Loans/Applications | Gets all loan applications
[**LoansAPI_getLoanApplicationsCountAsync**](LoansAPI.md#LoansAPI_getLoanApplicationsCountAsync) | **GET** /api/v2/AccountingService/Loans/Applications/Count | Counts loan applications
[**LoansAPI_getLoanDetailsAsync**](LoansAPI.md#LoansAPI_getLoanDetailsAsync) | **GET** /api/v2/AccountingService/Loans/{loanId} | Gets a loan by ID
[**LoansAPI_getLoanTypeByIdAsync**](LoansAPI.md#LoansAPI_getLoanTypeByIdAsync) | **GET** /api/v2/AccountingService/Loans/Types/{loanTypeId} | Gets a loan type by ID
[**LoansAPI_getLoanTypesAsync**](LoansAPI.md#LoansAPI_getLoanTypesAsync) | **GET** /api/v2/AccountingService/Loans/Types | Gets all loan types
[**LoansAPI_getLoanTypesCountAsync**](LoansAPI.md#LoansAPI_getLoanTypesCountAsync) | **GET** /api/v2/AccountingService/Loans/Types/Count | Counts loan types
[**LoansAPI_getLoansAsync**](LoansAPI.md#LoansAPI_getLoansAsync) | **GET** /api/v2/AccountingService/Loans | Gets all loans
[**LoansAPI_getLoansCountAsync**](LoansAPI.md#LoansAPI_getLoansCountAsync) | **GET** /api/v2/AccountingService/Loans/Count | Counts loans
[**LoansAPI_patchLoanApplicationAsync**](LoansAPI.md#LoansAPI_patchLoanApplicationAsync) | **PATCH** /api/v2/AccountingService/Loans/Applications/{applicationId} | Patches a loan application
[**LoansAPI_patchLoanAsync**](LoansAPI.md#LoansAPI_patchLoanAsync) | **PATCH** /api/v2/AccountingService/Loans/{loanId} | Patches a loan
[**LoansAPI_patchLoanTypeAsync**](LoansAPI.md#LoansAPI_patchLoanTypeAsync) | **PATCH** /api/v2/AccountingService/Loans/Types/{loanTypeId} | Patches a loan type
[**LoansAPI_updateLoanApplicationAsync**](LoansAPI.md#LoansAPI_updateLoanApplicationAsync) | **PUT** /api/v2/AccountingService/Loans/Applications/{applicationId} | Updates a loan application
[**LoansAPI_updateLoanAsync**](LoansAPI.md#LoansAPI_updateLoanAsync) | **PUT** /api/v2/AccountingService/Loans/{loanId} | Updates a loan
[**LoansAPI_updateLoanTypeAsync**](LoansAPI.md#LoansAPI_updateLoanTypeAsync) | **PUT** /api/v2/AccountingService/Loans/Types/{loanTypeId} | Updates a loan type


# **LoansAPI_createLoanApplicationAsync**
```c
// Creates a loan application
//
// Creates a new loan application.
//
empty_envelope_t* LoansAPI_createLoanApplicationAsync(apiClient_t *apiClient, char *tenantId, loan_application_create_dto_t *loan_application_create_dto, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**loan_application_create_dto** | **[loan_application_create_dto_t](loan_application_create_dto.md) \*** |  | 
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

# **LoansAPI_createLoanAsync**
```c
// Creates a new loan
//
// Creates a new loan for the current tenant.
//
empty_envelope_t* LoansAPI_createLoanAsync(apiClient_t *apiClient, char *tenantId, loan_create_dto_t *loan_create_dto, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**loan_create_dto** | **[loan_create_dto_t](loan_create_dto.md) \*** |  | 
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

# **LoansAPI_createLoanTypeAsync**
```c
// Creates a loan type
//
// Creates a new loan type for the current tenant.
//
empty_envelope_t* LoansAPI_createLoanTypeAsync(apiClient_t *apiClient, char *tenantId, loan_type_create_dto_t *loan_type_create_dto, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**loan_type_create_dto** | **[loan_type_create_dto_t](loan_type_create_dto.md) \*** |  | 
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

# **LoansAPI_deleteLoanApplicationAsync**
```c
// Deletes a loan application
//
// Deletes the specified loan application.
//
empty_envelope_t* LoansAPI_deleteLoanApplicationAsync(apiClient_t *apiClient, char *tenantId, char *applicationId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**applicationId** | **char \*** |  | 
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

# **LoansAPI_deleteLoanAsync**
```c
// Deletes a loan
//
// Deletes the specified loan.
//
empty_envelope_t* LoansAPI_deleteLoanAsync(apiClient_t *apiClient, char *tenantId, char *loanId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**loanId** | **char \*** |  | 
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

# **LoansAPI_deleteLoanTypeAsync**
```c
// Deletes a loan type
//
// Deletes the specified loan type.
//
empty_envelope_t* LoansAPI_deleteLoanTypeAsync(apiClient_t *apiClient, char *tenantId, char *loanTypeId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**loanTypeId** | **char \*** |  | 
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

# **LoansAPI_getLoanApplicationDetailsAsync**
```c
// Gets a loan application by ID
//
// Retrieves the details of a loan application.
//
loan_application_dto_envelope_t* LoansAPI_getLoanApplicationDetailsAsync(apiClient_t *apiClient, char *tenantId, char *applicationId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**applicationId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[loan_application_dto_envelope_t](loan_application_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **LoansAPI_getLoanApplicationsAsync**
```c
// Gets all loan applications
//
// Retrieves all loan applications for the current tenant.
//
loan_application_dto_i_read_only_list_envelope_t* LoansAPI_getLoanApplicationsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, loan_application_dto_collection_query_parameters_t *loan_application_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**loan_application_dto_collection_query_parameters** | **[loan_application_dto_collection_query_parameters_t](loan_application_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[loan_application_dto_i_read_only_list_envelope_t](loan_application_dto_i_read_only_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **LoansAPI_getLoanApplicationsCountAsync**
```c
// Counts loan applications
//
// Gets the count of loan applications for the current tenant.
//
int32_envelope_t* LoansAPI_getLoanApplicationsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, loan_application_dto_collection_query_parameters_t *loan_application_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**loan_application_dto_collection_query_parameters** | **[loan_application_dto_collection_query_parameters_t](loan_application_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **LoansAPI_getLoanDetailsAsync**
```c
// Gets a loan by ID
//
// Retrieves the details of a loan using its unique ID.
//
loan_dto_envelope_t* LoansAPI_getLoanDetailsAsync(apiClient_t *apiClient, char *tenantId, char *loanId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**loanId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[loan_dto_envelope_t](loan_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **LoansAPI_getLoanTypeByIdAsync**
```c
// Gets a loan type by ID
//
// Retrieves the details of a loan type using its unique ID.
//
loan_type_dto_envelope_t* LoansAPI_getLoanTypeByIdAsync(apiClient_t *apiClient, char *tenantId, char *loanTypeId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**loanTypeId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[loan_type_dto_envelope_t](loan_type_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **LoansAPI_getLoanTypesAsync**
```c
// Gets all loan types
//
// Retrieves all loan types for the current tenant with OData support.
//
loan_type_dto_i_read_only_list_envelope_t* LoansAPI_getLoanTypesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, loan_type_dto_collection_query_parameters_t *loan_type_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**loan_type_dto_collection_query_parameters** | **[loan_type_dto_collection_query_parameters_t](loan_type_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[loan_type_dto_i_read_only_list_envelope_t](loan_type_dto_i_read_only_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **LoansAPI_getLoanTypesCountAsync**
```c
// Counts loan types
//
// Gets the count of loan types for the current tenant.
//
int32_envelope_t* LoansAPI_getLoanTypesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, loan_type_dto_collection_query_parameters_t *loan_type_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**loan_type_dto_collection_query_parameters** | **[loan_type_dto_collection_query_parameters_t](loan_type_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **LoansAPI_getLoansAsync**
```c
// Gets all loans
//
// Retrieves all loans for the current tenant with OData support.
//
loan_dto_i_read_only_list_envelope_t* LoansAPI_getLoansAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, loan_dto_collection_query_parameters_t *loan_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**loan_dto_collection_query_parameters** | **[loan_dto_collection_query_parameters_t](loan_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[loan_dto_i_read_only_list_envelope_t](loan_dto_i_read_only_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **LoansAPI_getLoansCountAsync**
```c
// Counts loans
//
// Gets the count of loans for the current tenant.
//
int32_envelope_t* LoansAPI_getLoansCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, loan_dto_collection_query_parameters_t *loan_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**loan_dto_collection_query_parameters** | **[loan_dto_collection_query_parameters_t](loan_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **LoansAPI_patchLoanApplicationAsync**
```c
// Patches a loan application
//
// Partially updates the specified loan application using a JSON Patch document.
//
empty_envelope_t* LoansAPI_patchLoanApplicationAsync(apiClient_t *apiClient, char *tenantId, char *applicationId, char *api_version, char *x_api_version, list_t *patch_operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**applicationId** | **char \*** |  | 
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

# **LoansAPI_patchLoanAsync**
```c
// Patches a loan
//
// Partially updates the specified loan using a JSON Patch document.
//
empty_envelope_t* LoansAPI_patchLoanAsync(apiClient_t *apiClient, char *tenantId, char *loanId, char *api_version, char *x_api_version, list_t *patch_operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**loanId** | **char \*** |  | 
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

# **LoansAPI_patchLoanTypeAsync**
```c
// Patches a loan type
//
// Partially updates the specified loan type using a JSON Patch document.
//
empty_envelope_t* LoansAPI_patchLoanTypeAsync(apiClient_t *apiClient, char *tenantId, char *loanTypeId, char *api_version, char *x_api_version, list_t *patch_operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**loanTypeId** | **char \*** |  | 
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

# **LoansAPI_updateLoanApplicationAsync**
```c
// Updates a loan application
//
// Updates the specified loan application.
//
empty_envelope_t* LoansAPI_updateLoanApplicationAsync(apiClient_t *apiClient, char *tenantId, char *applicationId, object_t *body, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**applicationId** | **char \*** |  | 
**body** | **[object_t](object.md) \*** |  | 
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

# **LoansAPI_updateLoanAsync**
```c
// Updates a loan
//
// Updates the specified loan.
//
empty_envelope_t* LoansAPI_updateLoanAsync(apiClient_t *apiClient, char *tenantId, char *loanId, loan_update_dto_t *loan_update_dto, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**loanId** | **char \*** |  | 
**loan_update_dto** | **[loan_update_dto_t](loan_update_dto.md) \*** |  | 
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

# **LoansAPI_updateLoanTypeAsync**
```c
// Updates a loan type
//
// Updates the specified loan type.
//
empty_envelope_t* LoansAPI_updateLoanTypeAsync(apiClient_t *apiClient, char *tenantId, char *loanTypeId, loan_type_update_dto_t *loan_type_update_dto, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**loanTypeId** | **char \*** |  | 
**loan_type_update_dto** | **[loan_type_update_dto_t](loan_type_update_dto.md) \*** |  | 
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

