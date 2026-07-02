# BankProfilesAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**BankProfilesAPI_getBankProfiles**](BankProfilesAPI.md#BankProfilesAPI_getBankProfiles) | **GET** /api/v2/AccountingService/BankProfiles | Get all bank profiles for a tenant
[**BankProfilesAPI_getBankProfilesCount**](BankProfilesAPI.md#BankProfilesAPI_getBankProfilesCount) | **GET** /api/v2/AccountingService/BankProfiles/Count | Get bank profiles count


# **BankProfilesAPI_getBankProfiles**
```c
// Get all bank profiles for a tenant
//
// Retrieves all bank profiles for the specified tenant using OData query options.
//
bank_profile_dto_list_envelope_t* BankProfilesAPI_getBankProfiles(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[bank_profile_dto_list_envelope_t](bank_profile_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BankProfilesAPI_getBankProfilesCount**
```c
// Get bank profiles count
//
// Returns the count of bank profiles for the specified tenant.
//
int32_envelope_t* BankProfilesAPI_getBankProfilesCount(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

