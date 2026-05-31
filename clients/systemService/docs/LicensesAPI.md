# LicensesAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**LicensesAPI_apiLicensingLicensesGeneratePost**](LicensesAPI.md#LicensesAPI_apiLicensingLicensesGeneratePost) | **POST** /api/Licensing/Licenses/Generate | 
[**LicensesAPI_apiLicensingLicensesValidateAttributesGet**](LicensesAPI.md#LicensesAPI_apiLicensingLicensesValidateAttributesGet) | **GET** /api/Licensing/Licenses/Validate/Attributes | 
[**LicensesAPI_apiLicensingLicensesValidateErrorsGet**](LicensesAPI.md#LicensesAPI_apiLicensingLicensesValidateErrorsGet) | **GET** /api/Licensing/Licenses/Validate/Errors | 
[**LicensesAPI_apiLicensingLicensesValidateGet**](LicensesAPI.md#LicensesAPI_apiLicensingLicensesValidateGet) | **GET** /api/Licensing/Licenses/Validate | 


# **LicensesAPI_apiLicensingLicensesGeneratePost**
```c
string_envelope_t* LicensesAPI_apiLicensingLicensesGeneratePost(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, license_key_request_t *license_key_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**license_key_request** | **[license_key_request_t](license_key_request.md) \*** |  | [optional] 

### Return type

[string_envelope_t](string_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **LicensesAPI_apiLicensingLicensesValidateAttributesGet**
```c
license_attributes_list_envelope_t* LicensesAPI_apiLicensingLicensesValidateAttributesGet(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, license_key_t *license_key);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**license_key** | **[license_key_t](license_key.md) \*** |  | [optional] 

### Return type

[license_attributes_list_envelope_t](license_attributes_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **LicensesAPI_apiLicensingLicensesValidateErrorsGet**
```c
license_validation_error_list_envelope_t* LicensesAPI_apiLicensingLicensesValidateErrorsGet(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, license_key_t *license_key);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**license_key** | **[license_key_t](license_key.md) \*** |  | [optional] 

### Return type

[license_validation_error_list_envelope_t](license_validation_error_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **LicensesAPI_apiLicensingLicensesValidateGet**
```c
boolean_envelope_t* LicensesAPI_apiLicensingLicensesValidateGet(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, license_key_t *license_key);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**license_key** | **[license_key_t](license_key.md) \*** |  | [optional] 

### Return type

[boolean_envelope_t](boolean_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

