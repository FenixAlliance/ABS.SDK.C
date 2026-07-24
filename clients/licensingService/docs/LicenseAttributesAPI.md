# LicenseAttributesAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**LicenseAttributesAPI_createLicenseAttributeAsync**](LicenseAttributesAPI.md#LicenseAttributesAPI_createLicenseAttributeAsync) | **POST** /api/v2/LicensingService/LicenseAttributes | Create a new license attribute
[**LicenseAttributesAPI_deleteLicenseAttributeAsync**](LicenseAttributesAPI.md#LicenseAttributesAPI_deleteLicenseAttributeAsync) | **DELETE** /api/v2/LicensingService/LicenseAttributes/{id} | Delete a license attribute
[**LicenseAttributesAPI_getLicenseAttributeByIdAsync**](LicenseAttributesAPI.md#LicenseAttributesAPI_getLicenseAttributeByIdAsync) | **GET** /api/v2/LicensingService/LicenseAttributes/{id} | Get license attribute by ID
[**LicenseAttributesAPI_getLicenseAttributesAsync**](LicenseAttributesAPI.md#LicenseAttributesAPI_getLicenseAttributesAsync) | **GET** /api/v2/LicensingService/LicenseAttributes | Get all license attributes
[**LicenseAttributesAPI_getLicenseAttributesCountAsync**](LicenseAttributesAPI.md#LicenseAttributesAPI_getLicenseAttributesCountAsync) | **GET** /api/v2/LicensingService/LicenseAttributes/Count | Get license attributes count
[**LicenseAttributesAPI_patchLicenseAttributeAsync**](LicenseAttributesAPI.md#LicenseAttributesAPI_patchLicenseAttributeAsync) | **PATCH** /api/v2/LicensingService/LicenseAttributes/{id} | Patch a license attribute
[**LicenseAttributesAPI_updateLicenseAttributeAsync**](LicenseAttributesAPI.md#LicenseAttributesAPI_updateLicenseAttributeAsync) | **PUT** /api/v2/LicensingService/LicenseAttributes/{id} | Update a license attribute


# **LicenseAttributesAPI_createLicenseAttributeAsync**
```c
// Create a new license attribute
//
// Creates a new license attribute for the specified tenant.
//
void LicenseAttributesAPI_createLicenseAttributeAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, license_attribute_create_dto_t *license_attribute_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**license_attribute_create_dto** | **[license_attribute_create_dto_t](license_attribute_create_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **LicenseAttributesAPI_deleteLicenseAttributeAsync**
```c
// Delete a license attribute
//
// Deletes a license attribute for the specified tenant.
//
void LicenseAttributesAPI_deleteLicenseAttributeAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);
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

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **LicenseAttributesAPI_getLicenseAttributeByIdAsync**
```c
// Get license attribute by ID
//
// Retrieves a specific license attribute by its identifier.
//
license_attribute_dto_t* LicenseAttributesAPI_getLicenseAttributeByIdAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);
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

[license_attribute_dto_t](license_attribute_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **LicenseAttributesAPI_getLicenseAttributesAsync**
```c
// Get all license attributes
//
// Retrieves all license attributes for the specified tenant.
//
license_attribute_dto_list_envelope_t* LicenseAttributesAPI_getLicenseAttributesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[license_attribute_dto_list_envelope_t](license_attribute_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **LicenseAttributesAPI_getLicenseAttributesCountAsync**
```c
// Get license attributes count
//
// Returns the count of license attributes for the specified tenant.
//
int32_envelope_t* LicenseAttributesAPI_getLicenseAttributesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **LicenseAttributesAPI_patchLicenseAttributeAsync**
```c
// Patch a license attribute
//
// Patch a license attribute for the specified tenant.
//
empty_envelope_t* LicenseAttributesAPI_patchLicenseAttributeAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, list_t *operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**id** | **char \*** |  | 
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

# **LicenseAttributesAPI_updateLicenseAttributeAsync**
```c
// Update a license attribute
//
// Updates an existing license attribute for the specified tenant.
//
void LicenseAttributesAPI_updateLicenseAttributeAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, license_attribute_update_dto_t *license_attribute_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**id** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**license_attribute_update_dto** | **[license_attribute_update_dto_t](license_attribute_update_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

