# BusinessDomainsAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**BusinessDomainsAPI_deleteSystemBusinessDomain**](BusinessDomainsAPI.md#BusinessDomainsAPI_deleteSystemBusinessDomain) | **DELETE** /api/v2/SystemService/BusinessDomains/{businessDomainId} | Delete a business domain
[**BusinessDomainsAPI_getSystemBusinessDomainById**](BusinessDomainsAPI.md#BusinessDomainsAPI_getSystemBusinessDomainById) | **GET** /api/v2/SystemService/BusinessDomains/{businessDomainId} | Retrieve a business domain by its ID
[**BusinessDomainsAPI_getSystemBusinessDomains**](BusinessDomainsAPI.md#BusinessDomainsAPI_getSystemBusinessDomains) | **GET** /api/v2/SystemService/BusinessDomains | Retrieve all business domains in the system
[**BusinessDomainsAPI_getSystemBusinessDomainsCount**](BusinessDomainsAPI.md#BusinessDomainsAPI_getSystemBusinessDomainsCount) | **GET** /api/v2/SystemService/BusinessDomains/Count | Get the count of all business domains in the system
[**BusinessDomainsAPI_verifySystemBusinessDomain**](BusinessDomainsAPI.md#BusinessDomainsAPI_verifySystemBusinessDomain) | **POST** /api/v2/SystemService/BusinessDomains/{businessDomainId}/Verify | Verify a business domain


# **BusinessDomainsAPI_deleteSystemBusinessDomain**
```c
// Delete a business domain
//
// Removes any business domain from the system, regardless of owning tenant.
//
empty_envelope_t* BusinessDomainsAPI_deleteSystemBusinessDomain(apiClient_t *apiClient, char *businessDomainId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**businessDomainId** | **char \*** |  | 
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

# **BusinessDomainsAPI_getSystemBusinessDomainById**
```c
// Retrieve a business domain by its ID
//
// Retrieve any business domain by its ID, regardless of owning tenant.
//
business_domain_dto_envelope_t* BusinessDomainsAPI_getSystemBusinessDomainById(apiClient_t *apiClient, char *businessDomainId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
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

# **BusinessDomainsAPI_getSystemBusinessDomains**
```c
// Retrieve all business domains in the system
//
// Retrieve all registered business domains across every tenant (global administrators only).
//
business_domain_dto_list_envelope_t* BusinessDomainsAPI_getSystemBusinessDomains(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
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

# **BusinessDomainsAPI_getSystemBusinessDomainsCount**
```c
// Get the count of all business domains in the system
//
// Get the count of all registered business domains across every tenant.
//
int32_envelope_t* BusinessDomainsAPI_getSystemBusinessDomainsCount(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
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

# **BusinessDomainsAPI_verifySystemBusinessDomain**
```c
// Verify a business domain
//
// Checks the domain's DNS TXT records for the verification token and marks it verified.
//
empty_envelope_t* BusinessDomainsAPI_verifySystemBusinessDomain(apiClient_t *apiClient, char *businessDomainId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**businessDomainId** | **char \*** |  | 
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

