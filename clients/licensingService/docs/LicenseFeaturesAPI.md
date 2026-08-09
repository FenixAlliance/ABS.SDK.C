# LicenseFeaturesAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**LicenseFeaturesAPI_createLicenseFeatureAsync**](LicenseFeaturesAPI.md#LicenseFeaturesAPI_createLicenseFeatureAsync) | **POST** /api/v2/LicensingService/LicenseFeatures | Create a new license feature
[**LicenseFeaturesAPI_deleteLicenseFeatureAsync**](LicenseFeaturesAPI.md#LicenseFeaturesAPI_deleteLicenseFeatureAsync) | **DELETE** /api/v2/LicensingService/LicenseFeatures/{id} | Delete a license feature
[**LicenseFeaturesAPI_getLicenseFeatureByIdAsync**](LicenseFeaturesAPI.md#LicenseFeaturesAPI_getLicenseFeatureByIdAsync) | **GET** /api/v2/LicensingService/LicenseFeatures/{id} | Get license feature by ID
[**LicenseFeaturesAPI_getLicenseFeaturesAsync**](LicenseFeaturesAPI.md#LicenseFeaturesAPI_getLicenseFeaturesAsync) | **GET** /api/v2/LicensingService/LicenseFeatures | Get all license features
[**LicenseFeaturesAPI_getLicenseFeaturesCountAsync**](LicenseFeaturesAPI.md#LicenseFeaturesAPI_getLicenseFeaturesCountAsync) | **GET** /api/v2/LicensingService/LicenseFeatures/Count | Get license features count
[**LicenseFeaturesAPI_patchLicenseFeatureAsync**](LicenseFeaturesAPI.md#LicenseFeaturesAPI_patchLicenseFeatureAsync) | **PATCH** /api/v2/LicensingService/LicenseFeatures/{id} | Patch a license feature
[**LicenseFeaturesAPI_updateLicenseFeatureAsync**](LicenseFeaturesAPI.md#LicenseFeaturesAPI_updateLicenseFeatureAsync) | **PUT** /api/v2/LicensingService/LicenseFeatures/{id} | Update a license feature


# **LicenseFeaturesAPI_createLicenseFeatureAsync**
```c
// Create a new license feature
//
// Creates a new license feature for the specified tenant.
//
void LicenseFeaturesAPI_createLicenseFeatureAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, license_feature_create_dto_t *license_feature_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**license_feature_create_dto** | **[license_feature_create_dto_t](license_feature_create_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **LicenseFeaturesAPI_deleteLicenseFeatureAsync**
```c
// Delete a license feature
//
// Deletes a license feature for the specified tenant.
//
void LicenseFeaturesAPI_deleteLicenseFeatureAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);
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

# **LicenseFeaturesAPI_getLicenseFeatureByIdAsync**
```c
// Get license feature by ID
//
// Retrieves a specific license feature by its identifier.
//
license_feature_dto_t* LicenseFeaturesAPI_getLicenseFeatureByIdAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);
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

[license_feature_dto_t](license_feature_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **LicenseFeaturesAPI_getLicenseFeaturesAsync**
```c
// Get all license features
//
// Retrieves all license features for the specified tenant.
//
license_feature_dto_list_envelope_t* LicenseFeaturesAPI_getLicenseFeaturesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, license_feature_dto_collection_query_parameters_t *license_feature_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**license_feature_dto_collection_query_parameters** | **[license_feature_dto_collection_query_parameters_t](license_feature_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[license_feature_dto_list_envelope_t](license_feature_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **LicenseFeaturesAPI_getLicenseFeaturesCountAsync**
```c
// Get license features count
//
// Returns the count of license features for the specified tenant.
//
int32_envelope_t* LicenseFeaturesAPI_getLicenseFeaturesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, license_feature_dto_collection_query_parameters_t *license_feature_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**license_feature_dto_collection_query_parameters** | **[license_feature_dto_collection_query_parameters_t](license_feature_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **LicenseFeaturesAPI_patchLicenseFeatureAsync**
```c
// Patch a license feature
//
// Patch a license feature for the specified tenant.
//
empty_envelope_t* LicenseFeaturesAPI_patchLicenseFeatureAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, list_t *patch_operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**id** | **char \*** |  | 
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

# **LicenseFeaturesAPI_updateLicenseFeatureAsync**
```c
// Update a license feature
//
// Updates an existing license feature for the specified tenant.
//
void LicenseFeaturesAPI_updateLicenseFeatureAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, license_feature_update_dto_t *license_feature_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**id** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**license_feature_update_dto** | **[license_feature_update_dto_t](license_feature_update_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

