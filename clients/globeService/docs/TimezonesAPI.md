# TimezonesAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**TimezonesAPI_countTimezonesAsync**](TimezonesAPI.md#TimezonesAPI_countTimezonesAsync) | **GET** /api/v2/GlobeService/Timezones/Count | Count timezones
[**TimezonesAPI_getTimeZoneByIdAsync**](TimezonesAPI.md#TimezonesAPI_getTimeZoneByIdAsync) | **GET** /api/v2/GlobeService/Timezones/{timeZoneId} | Get timezone by ID
[**TimezonesAPI_getTimeZonesAsync**](TimezonesAPI.md#TimezonesAPI_getTimeZonesAsync) | **GET** /api/v2/GlobeService/Timezones | Get all timezones


# **TimezonesAPI_countTimezonesAsync**
```c
// Count timezones
//
// Returns the total number of supported timezones, with optional OData filtering.
//
int32_envelope_t* TimezonesAPI_countTimezonesAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);
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

# **TimezonesAPI_getTimeZoneByIdAsync**
```c
// Get timezone by ID
//
// Retrieves a single timezone by its unique identifier.
//
timezone_dto_envelope_t* TimezonesAPI_getTimeZoneByIdAsync(apiClient_t *apiClient, char *timeZoneId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**timeZoneId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[timezone_dto_envelope_t](timezone_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TimezonesAPI_getTimeZonesAsync**
```c
// Get all timezones
//
// Retrieves the list of all supported timezones with optional OData pagination and filtering.
//
timezone_dto_list_envelope_t* TimezonesAPI_getTimeZonesAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[timezone_dto_list_envelope_t](timezone_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

