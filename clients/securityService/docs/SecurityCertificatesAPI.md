# SecurityCertificatesAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SecurityCertificatesAPI_getSecurityCertificatesAsync**](SecurityCertificatesAPI.md#SecurityCertificatesAPI_getSecurityCertificatesAsync) | **GET** /api/v2/SecurityService/SecurityCertificates | Get security certificates
[**SecurityCertificatesAPI_getSecurityCertificatesCountAsync**](SecurityCertificatesAPI.md#SecurityCertificatesAPI_getSecurityCertificatesCountAsync) | **GET** /api/v2/SecurityService/SecurityCertificates/Count | Get security certificates count


# **SecurityCertificatesAPI_getSecurityCertificatesAsync**
```c
// Get security certificates
//
// Retrieves security certificates for the specified tenant.
//
security_certificate_dto_list_envelope_t* SecurityCertificatesAPI_getSecurityCertificatesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[security_certificate_dto_list_envelope_t](security_certificate_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SecurityCertificatesAPI_getSecurityCertificatesCountAsync**
```c
// Get security certificates count
//
// Retrieves the count of security certificates for the specified tenant.
//
int32_envelope_t* SecurityCertificatesAPI_getSecurityCertificatesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

