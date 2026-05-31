# TaxPoliciesAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**TaxPoliciesAPI_createAppliedTaxPolicyRecord**](TaxPoliciesAPI.md#TaxPoliciesAPI_createAppliedTaxPolicyRecord) | **POST** /api/v2/AccountingService/TaxPolicies/{taxPolicyId}/AppliedTaxPolicyRecords | Create an applied tax policy record
[**TaxPoliciesAPI_createItemTaxPolicyRecord**](TaxPoliciesAPI.md#TaxPoliciesAPI_createItemTaxPolicyRecord) | **POST** /api/v2/AccountingService/TaxPolicies/{taxPolicyId}/ItemTaxPolicyRecords | Create an item tax policy record
[**TaxPoliciesAPI_createTaxPolicy**](TaxPoliciesAPI.md#TaxPoliciesAPI_createTaxPolicy) | **POST** /api/v2/AccountingService/TaxPolicies | Create a tax policy
[**TaxPoliciesAPI_deleteAppliedTaxPolicyRecord**](TaxPoliciesAPI.md#TaxPoliciesAPI_deleteAppliedTaxPolicyRecord) | **DELETE** /api/v2/AccountingService/TaxPolicies/{taxPolicyId}/AppliedTaxPolicyRecords/{appliedTaxPolicyRecordId} | Delete an applied tax policy record
[**TaxPoliciesAPI_deleteItemTaxPolicyRecord**](TaxPoliciesAPI.md#TaxPoliciesAPI_deleteItemTaxPolicyRecord) | **DELETE** /api/v2/AccountingService/TaxPolicies/{taxPolicyId}/ItemTaxPolicyRecords/{itemTaxPolicyRecordId} | Delete an item tax policy record
[**TaxPoliciesAPI_deleteTaxPolicy**](TaxPoliciesAPI.md#TaxPoliciesAPI_deleteTaxPolicy) | **DELETE** /api/v2/AccountingService/TaxPolicies/{id} | Delete a tax policy
[**TaxPoliciesAPI_getAppliedTaxPolicyRecord**](TaxPoliciesAPI.md#TaxPoliciesAPI_getAppliedTaxPolicyRecord) | **GET** /api/v2/AccountingService/TaxPolicies/{taxPolicyId}/AppliedTaxPolicyRecords/{appliedTaxPolicyRecordId} | Get applied tax policy record by ID
[**TaxPoliciesAPI_getAppliedTaxPolicyRecords**](TaxPoliciesAPI.md#TaxPoliciesAPI_getAppliedTaxPolicyRecords) | **GET** /api/v2/AccountingService/TaxPolicies/{taxPolicyId}/AppliedTaxPolicyRecords | Get applied tax policy records
[**TaxPoliciesAPI_getAppliedTaxPolicyRecordsCount**](TaxPoliciesAPI.md#TaxPoliciesAPI_getAppliedTaxPolicyRecordsCount) | **GET** /api/v2/AccountingService/TaxPolicies/{taxPolicyId}/AppliedTaxPolicyRecords/Count | Get applied tax policy records count
[**TaxPoliciesAPI_getItemTaxPolicyRecord**](TaxPoliciesAPI.md#TaxPoliciesAPI_getItemTaxPolicyRecord) | **GET** /api/v2/AccountingService/TaxPolicies/{taxPolicyId}/ItemTaxPolicyRecords/{itemTaxPolicyRecordId} | Get item tax policy record by ID
[**TaxPoliciesAPI_getItemTaxPolicyRecords**](TaxPoliciesAPI.md#TaxPoliciesAPI_getItemTaxPolicyRecords) | **GET** /api/v2/AccountingService/TaxPolicies/{taxPolicyId}/ItemTaxPolicyRecords | Get item tax policy records
[**TaxPoliciesAPI_getTaxPolicies**](TaxPoliciesAPI.md#TaxPoliciesAPI_getTaxPolicies) | **GET** /api/v2/AccountingService/TaxPolicies | Get all tax policies for a tenant
[**TaxPoliciesAPI_getTaxPoliciesByAuthority**](TaxPoliciesAPI.md#TaxPoliciesAPI_getTaxPoliciesByAuthority) | **GET** /api/v2/AccountingService/TaxPolicies/ByAuthority/{authorityId} | Get tax policies by fiscal authority
[**TaxPoliciesAPI_getTaxPoliciesCount**](TaxPoliciesAPI.md#TaxPoliciesAPI_getTaxPoliciesCount) | **GET** /api/v2/AccountingService/TaxPolicies/Count | Get tax policies count
[**TaxPoliciesAPI_getTaxPolicy**](TaxPoliciesAPI.md#TaxPoliciesAPI_getTaxPolicy) | **GET** /api/v2/AccountingService/TaxPolicies/{id} | Get tax policy by ID
[**TaxPoliciesAPI_updateAppliedTaxPolicyRecord**](TaxPoliciesAPI.md#TaxPoliciesAPI_updateAppliedTaxPolicyRecord) | **PUT** /api/v2/AccountingService/TaxPolicies/{taxPolicyId}/AppliedTaxPolicyRecords/{appliedTaxPolicyRecordId} | Update an applied tax policy record
[**TaxPoliciesAPI_updateItemTaxPolicyRecord**](TaxPoliciesAPI.md#TaxPoliciesAPI_updateItemTaxPolicyRecord) | **PUT** /api/v2/AccountingService/TaxPolicies/{taxPolicyId}/ItemTaxPolicyRecords/{itemTaxPolicyRecordId} | Update an item tax policy record
[**TaxPoliciesAPI_updateTaxPolicy**](TaxPoliciesAPI.md#TaxPoliciesAPI_updateTaxPolicy) | **PUT** /api/v2/AccountingService/TaxPolicies/{id} | Update a tax policy


# **TaxPoliciesAPI_createAppliedTaxPolicyRecord**
```c
// Create an applied tax policy record
//
// Creates a new applied tax policy record for the specified tax policy.
//
empty_envelope_t* TaxPoliciesAPI_createAppliedTaxPolicyRecord(apiClient_t *apiClient, char *tenantId, char *taxPolicyId, char *api_version, char *x_api_version, applied_tax_policy_record_create_dto_t *applied_tax_policy_record_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**taxPolicyId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**applied_tax_policy_record_create_dto** | **[applied_tax_policy_record_create_dto_t](applied_tax_policy_record_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TaxPoliciesAPI_createItemTaxPolicyRecord**
```c
// Create an item tax policy record
//
// Creates a new item tax policy record for the specified tax policy.
//
empty_envelope_t* TaxPoliciesAPI_createItemTaxPolicyRecord(apiClient_t *apiClient, char *tenantId, char *taxPolicyId, char *api_version, char *x_api_version, item_tax_policy_record_create_dto_t *item_tax_policy_record_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**taxPolicyId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**item_tax_policy_record_create_dto** | **[item_tax_policy_record_create_dto_t](item_tax_policy_record_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TaxPoliciesAPI_createTaxPolicy**
```c
// Create a tax policy
//
// Creates a new tax policy for the specified tenant.
//
empty_envelope_t* TaxPoliciesAPI_createTaxPolicy(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, tax_policy_create_dto_t *tax_policy_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**tax_policy_create_dto** | **[tax_policy_create_dto_t](tax_policy_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TaxPoliciesAPI_deleteAppliedTaxPolicyRecord**
```c
// Delete an applied tax policy record
//
// Deletes an applied tax policy record identified by its unique identifier.
//
empty_envelope_t* TaxPoliciesAPI_deleteAppliedTaxPolicyRecord(apiClient_t *apiClient, char *tenantId, char *taxPolicyId, char *appliedTaxPolicyRecordId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**taxPolicyId** | **char \*** |  | 
**appliedTaxPolicyRecordId** | **char \*** |  | 
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

# **TaxPoliciesAPI_deleteItemTaxPolicyRecord**
```c
// Delete an item tax policy record
//
// Deletes an item tax policy record identified by its unique identifier.
//
empty_envelope_t* TaxPoliciesAPI_deleteItemTaxPolicyRecord(apiClient_t *apiClient, char *tenantId, char *taxPolicyId, char *itemTaxPolicyRecordId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**taxPolicyId** | **char \*** |  | 
**itemTaxPolicyRecordId** | **char \*** |  | 
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

# **TaxPoliciesAPI_deleteTaxPolicy**
```c
// Delete a tax policy
//
// Deletes a tax policy identified by its unique identifier.
//
empty_envelope_t* TaxPoliciesAPI_deleteTaxPolicy(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);
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

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TaxPoliciesAPI_getAppliedTaxPolicyRecord**
```c
// Get applied tax policy record by ID
//
// Retrieves a specific applied tax policy record by its unique identifier.
//
applied_tax_policy_record_dto_envelope_t* TaxPoliciesAPI_getAppliedTaxPolicyRecord(apiClient_t *apiClient, char *tenantId, char *taxPolicyId, char *appliedTaxPolicyRecordId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**taxPolicyId** | **char \*** |  | 
**appliedTaxPolicyRecordId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[applied_tax_policy_record_dto_envelope_t](applied_tax_policy_record_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TaxPoliciesAPI_getAppliedTaxPolicyRecords**
```c
// Get applied tax policy records
//
// Retrieves all applied tax policy records for the specified tax policy.
//
applied_tax_policy_record_dto_list_envelope_t* TaxPoliciesAPI_getAppliedTaxPolicyRecords(apiClient_t *apiClient, char *tenantId, char *taxPolicyId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**taxPolicyId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[applied_tax_policy_record_dto_list_envelope_t](applied_tax_policy_record_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TaxPoliciesAPI_getAppliedTaxPolicyRecordsCount**
```c
// Get applied tax policy records count
//
// Returns the total count of applied tax policy records for the specified tax policy.
//
int32_envelope_t* TaxPoliciesAPI_getAppliedTaxPolicyRecordsCount(apiClient_t *apiClient, char *tenantId, char *taxPolicyId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**taxPolicyId** | **char \*** |  | 
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

# **TaxPoliciesAPI_getItemTaxPolicyRecord**
```c
// Get item tax policy record by ID
//
// Retrieves a specific item tax policy record by its unique identifier.
//
item_tax_policy_record_dto_envelope_t* TaxPoliciesAPI_getItemTaxPolicyRecord(apiClient_t *apiClient, char *tenantId, char *taxPolicyId, char *itemTaxPolicyRecordId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**taxPolicyId** | **char \*** |  | 
**itemTaxPolicyRecordId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_tax_policy_record_dto_envelope_t](item_tax_policy_record_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TaxPoliciesAPI_getItemTaxPolicyRecords**
```c
// Get item tax policy records
//
// Retrieves all item tax policy records for the specified tax policy.
//
item_tax_policy_record_dto_list_envelope_t* TaxPoliciesAPI_getItemTaxPolicyRecords(apiClient_t *apiClient, char *tenantId, char *taxPolicyId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**taxPolicyId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_tax_policy_record_dto_list_envelope_t](item_tax_policy_record_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TaxPoliciesAPI_getTaxPolicies**
```c
// Get all tax policies for a tenant
//
// Retrieves all tax policies for the specified tenant using OData query options.
//
tax_policy_dto_list_envelope_t* TaxPoliciesAPI_getTaxPolicies(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[tax_policy_dto_list_envelope_t](tax_policy_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TaxPoliciesAPI_getTaxPoliciesByAuthority**
```c
// Get tax policies by fiscal authority
//
// Retrieves all tax policies associated with the specified fiscal authority.
//
tax_policy_dto_list_envelope_t* TaxPoliciesAPI_getTaxPoliciesByAuthority(apiClient_t *apiClient, char *tenantId, char *authorityId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**authorityId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[tax_policy_dto_list_envelope_t](tax_policy_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TaxPoliciesAPI_getTaxPoliciesCount**
```c
// Get tax policies count
//
// Returns the count of tax policies for the specified tenant.
//
int32_envelope_t* TaxPoliciesAPI_getTaxPoliciesCount(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **TaxPoliciesAPI_getTaxPolicy**
```c
// Get tax policy by ID
//
// Retrieves a specific tax policy by its unique identifier.
//
tax_policy_dto_envelope_t* TaxPoliciesAPI_getTaxPolicy(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);
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

[tax_policy_dto_envelope_t](tax_policy_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TaxPoliciesAPI_updateAppliedTaxPolicyRecord**
```c
// Update an applied tax policy record
//
// Updates an existing applied tax policy record identified by its unique identifier.
//
empty_envelope_t* TaxPoliciesAPI_updateAppliedTaxPolicyRecord(apiClient_t *apiClient, char *tenantId, char *taxPolicyId, char *appliedTaxPolicyRecordId, char *api_version, char *x_api_version, applied_tax_policy_record_update_dto_t *applied_tax_policy_record_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**taxPolicyId** | **char \*** |  | 
**appliedTaxPolicyRecordId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**applied_tax_policy_record_update_dto** | **[applied_tax_policy_record_update_dto_t](applied_tax_policy_record_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TaxPoliciesAPI_updateItemTaxPolicyRecord**
```c
// Update an item tax policy record
//
// Updates an existing item tax policy record identified by its unique identifier.
//
empty_envelope_t* TaxPoliciesAPI_updateItemTaxPolicyRecord(apiClient_t *apiClient, char *tenantId, char *taxPolicyId, char *itemTaxPolicyRecordId, char *api_version, char *x_api_version, item_tax_policy_record_update_dto_t *item_tax_policy_record_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**taxPolicyId** | **char \*** |  | 
**itemTaxPolicyRecordId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**item_tax_policy_record_update_dto** | **[item_tax_policy_record_update_dto_t](item_tax_policy_record_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TaxPoliciesAPI_updateTaxPolicy**
```c
// Update a tax policy
//
// Updates an existing tax policy identified by its unique identifier.
//
empty_envelope_t* TaxPoliciesAPI_updateTaxPolicy(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, tax_policy_update_dto_t *tax_policy_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**id** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**tax_policy_update_dto** | **[tax_policy_update_dto_t](tax_policy_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

