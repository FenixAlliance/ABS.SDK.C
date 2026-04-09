# LanguagesAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**LanguagesAPI_countLanguagesAsync**](LanguagesAPI.md#LanguagesAPI_countLanguagesAsync) | **GET** /api/v2/GlobeService/Languages/Count | Count languages
[**LanguagesAPI_getLanguageByIdAsync**](LanguagesAPI.md#LanguagesAPI_getLanguageByIdAsync) | **GET** /api/v2/GlobeService/Languages/{languageId} | Get language by ID
[**LanguagesAPI_getLanguagesAsync**](LanguagesAPI.md#LanguagesAPI_getLanguagesAsync) | **GET** /api/v2/GlobeService/Languages | Get all languages


# **LanguagesAPI_countLanguagesAsync**
```c
// Count languages
//
// Returns the total number of supported languages, with optional OData filtering.
//
int32_envelope_t* LanguagesAPI_countLanguagesAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);
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

# **LanguagesAPI_getLanguageByIdAsync**
```c
// Get language by ID
//
// Retrieves a single language by its unique identifier.
//
country_language_dto_envelope_t* LanguagesAPI_getLanguageByIdAsync(apiClient_t *apiClient, char *languageId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**languageId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[country_language_dto_envelope_t](country_language_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **LanguagesAPI_getLanguagesAsync**
```c
// Get all languages
//
// Retrieves the list of all supported languages with optional OData pagination and filtering.
//
country_language_dto_list_envelope_t* LanguagesAPI_getLanguagesAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[country_language_dto_list_envelope_t](country_language_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

