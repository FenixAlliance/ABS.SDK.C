# BusinessDomainsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**BusinessDomainsAPI_getBusinessDomainByIdAsync**](BusinessDomainsAPI.md#BusinessDomainsAPI_getBusinessDomainByIdAsync) | **GET** /api/v2/ContentService/BusinessDomains/{businessDomainId} | Get business domain by ID
[**BusinessDomainsAPI_getBusinessDomainsAsync**](BusinessDomainsAPI.md#BusinessDomainsAPI_getBusinessDomainsAsync) | **GET** /api/v2/ContentService/BusinessDomains | Get business domains
[**BusinessDomainsAPI_getBusinessDomainsCountAsync**](BusinessDomainsAPI.md#BusinessDomainsAPI_getBusinessDomainsCountAsync) | **GET** /api/v2/ContentService/BusinessDomains/Count | Get business domains count


# **BusinessDomainsAPI_getBusinessDomainByIdAsync**
```c
// Get business domain by ID
//
// Retrieves a specific business domain.
//
business_domain_dto_envelope_t* BusinessDomainsAPI_getBusinessDomainByIdAsync(apiClient_t *apiClient, char *tenantId, char *businessDomainId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**businessDomainId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[business_domain_dto_envelope_t](business_domain_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BusinessDomainsAPI_getBusinessDomainsAsync**
```c
// Get business domains
//
// Retrieves business domains for the specified tenant.
//
business_domain_dto_list_envelope_t* BusinessDomainsAPI_getBusinessDomainsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[business_domain_dto_list_envelope_t](business_domain_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BusinessDomainsAPI_getBusinessDomainsCountAsync**
```c
// Get business domains count
//
// Retrieves the count of business domains for the specified tenant.
//
int32_envelope_t* BusinessDomainsAPI_getBusinessDomainsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

