# BillableLineTaxesAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**BillableLineTaxesAPI_createBillableLineTax**](BillableLineTaxesAPI.md#BillableLineTaxesAPI_createBillableLineTax) | **POST** /api/v2/AccountingService/BillableLines/{billableLineId}/Taxes | Create a new tax for a billable line.
[**BillableLineTaxesAPI_deleteBillableLineTax**](BillableLineTaxesAPI.md#BillableLineTaxesAPI_deleteBillableLineTax) | **DELETE** /api/v2/AccountingService/BillableLines/{billableLineId}/Taxes/{taxId} | Delete a tax from a billable line.
[**BillableLineTaxesAPI_getBillableLineTaxes**](BillableLineTaxesAPI.md#BillableLineTaxesAPI_getBillableLineTaxes) | **GET** /api/v2/AccountingService/BillableLines/{billableLineId}/Taxes | Get taxes for a billable line.
[**BillableLineTaxesAPI_getBillableLineTaxesCount**](BillableLineTaxesAPI.md#BillableLineTaxesAPI_getBillableLineTaxesCount) | **GET** /api/v2/AccountingService/BillableLines/{billableLineId}/Taxes/Count | Get the count of taxes for a billable line.
[**BillableLineTaxesAPI_updateBillableLineTax**](BillableLineTaxesAPI.md#BillableLineTaxesAPI_updateBillableLineTax) | **PUT** /api/v2/AccountingService/BillableLines/{billableLineId}/Taxes/{taxId} | Update a tax for a billable line.


# **BillableLineTaxesAPI_createBillableLineTax**
```c
// Create a new tax for a billable line.
//
// Creates a new tax entry for the specified billable line.
//
empty_envelope_t* BillableLineTaxesAPI_createBillableLineTax(apiClient_t *apiClient, char *tenantId, char *billableLineId, char *api_version, char *x_api_version, applied_item_tax_record_create_dto_t *applied_item_tax_record_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**billableLineId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**applied_item_tax_record_create_dto** | **[applied_item_tax_record_create_dto_t](applied_item_tax_record_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BillableLineTaxesAPI_deleteBillableLineTax**
```c
// Delete a tax from a billable line.
//
// Deletes the specified tax entry from the billable line.
//
empty_envelope_t* BillableLineTaxesAPI_deleteBillableLineTax(apiClient_t *apiClient, char *tenantId, char *billableLineId, char *taxId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**billableLineId** | **char \*** |  | 
**taxId** | **char \*** |  | 
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

# **BillableLineTaxesAPI_getBillableLineTaxes**
```c
// Get taxes for a billable line.
//
// Retrieves the taxes applied to the specified billable line.
//
applied_item_tax_record_dto_i_read_only_list_envelope_t* BillableLineTaxesAPI_getBillableLineTaxes(apiClient_t *apiClient, char *tenantId, char *billableLineId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**billableLineId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[applied_item_tax_record_dto_i_read_only_list_envelope_t](applied_item_tax_record_dto_i_read_only_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BillableLineTaxesAPI_getBillableLineTaxesCount**
```c
// Get the count of taxes for a billable line.
//
// Retrieves the total count of taxes applied to the specified billable line.
//
int32_envelope_t* BillableLineTaxesAPI_getBillableLineTaxesCount(apiClient_t *apiClient, char *tenantId, char *billableLineId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**billableLineId** | **char \*** |  | 
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

# **BillableLineTaxesAPI_updateBillableLineTax**
```c
// Update a tax for a billable line.
//
// Updates the specified tax entry for the billable line.
//
empty_envelope_t* BillableLineTaxesAPI_updateBillableLineTax(apiClient_t *apiClient, char *tenantId, char *billableLineId, char *taxId, char *api_version, char *x_api_version, applied_item_tax_record_update_dto_t *applied_item_tax_record_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**billableLineId** | **char \*** |  | 
**taxId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**applied_item_tax_record_update_dto** | **[applied_item_tax_record_update_dto_t](applied_item_tax_record_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

