# LocalizationStringsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**LocalizationStringsAPI_countLocalizationStringsAsync**](LocalizationStringsAPI.md#LocalizationStringsAPI_countLocalizationStringsAsync) | **GET** /api/v2/ContentService/LocalizationStrings/Count | Count localization strings
[**LocalizationStringsAPI_createLocalizationStringAsync**](LocalizationStringsAPI.md#LocalizationStringsAPI_createLocalizationStringAsync) | **POST** /api/v2/ContentService/LocalizationStrings | Create a localization string
[**LocalizationStringsAPI_deleteLocalizationStringAsync**](LocalizationStringsAPI.md#LocalizationStringsAPI_deleteLocalizationStringAsync) | **DELETE** /api/v2/ContentService/LocalizationStrings/{localizationStringId} | Delete a localization string
[**LocalizationStringsAPI_getLocalizationStringByIdAsync**](LocalizationStringsAPI.md#LocalizationStringsAPI_getLocalizationStringByIdAsync) | **GET** /api/v2/ContentService/LocalizationStrings/{localizationStringId} | Get localization string by ID
[**LocalizationStringsAPI_getLocalizationStringsAsync**](LocalizationStringsAPI.md#LocalizationStringsAPI_getLocalizationStringsAsync) | **GET** /api/v2/ContentService/LocalizationStrings | Get localization strings
[**LocalizationStringsAPI_updateLocalizationStringAsync**](LocalizationStringsAPI.md#LocalizationStringsAPI_updateLocalizationStringAsync) | **PUT** /api/v2/ContentService/LocalizationStrings/{localizationStringId} | Update a localization string


# **LocalizationStringsAPI_countLocalizationStringsAsync**
```c
// Count localization strings
//
// Counts all localization strings for the specified tenant.
//
int32_envelope_t* LocalizationStringsAPI_countLocalizationStringsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **LocalizationStringsAPI_createLocalizationStringAsync**
```c
// Create a localization string
//
// Creates a new localization string for the specified tenant.
//
empty_envelope_t* LocalizationStringsAPI_createLocalizationStringAsync(apiClient_t *apiClient, char *tenantId, localization_string_create_dto_t *localization_string_create_dto, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**localization_string_create_dto** | **[localization_string_create_dto_t](localization_string_create_dto.md) \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **LocalizationStringsAPI_deleteLocalizationStringAsync**
```c
// Delete a localization string
//
// Deletes a localization string for the specified tenant.
//
empty_envelope_t* LocalizationStringsAPI_deleteLocalizationStringAsync(apiClient_t *apiClient, char *tenantId, char *localizationStringId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**localizationStringId** | **char \*** |  | 
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

# **LocalizationStringsAPI_getLocalizationStringByIdAsync**
```c
// Get localization string by ID
//
// Retrieves a specific localization string by its identifier.
//
localization_string_dto_envelope_t* LocalizationStringsAPI_getLocalizationStringByIdAsync(apiClient_t *apiClient, char *tenantId, char *localizationStringId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**localizationStringId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[localization_string_dto_envelope_t](localization_string_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **LocalizationStringsAPI_getLocalizationStringsAsync**
```c
// Get localization strings
//
// Retrieves all localization strings for the specified tenant.
//
localization_string_dto_list_envelope_t* LocalizationStringsAPI_getLocalizationStringsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[localization_string_dto_list_envelope_t](localization_string_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **LocalizationStringsAPI_updateLocalizationStringAsync**
```c
// Update a localization string
//
// Updates an existing localization string for the specified tenant.
//
empty_envelope_t* LocalizationStringsAPI_updateLocalizationStringAsync(apiClient_t *apiClient, char *tenantId, char *localizationStringId, localization_string_update_dto_t *localization_string_update_dto, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**localizationStringId** | **char \*** |  | 
**localization_string_update_dto** | **[localization_string_update_dto_t](localization_string_update_dto.md) \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

