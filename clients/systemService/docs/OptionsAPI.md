# OptionsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**OptionsAPI_createSystemOption**](OptionsAPI.md#OptionsAPI_createSystemOption) | **POST** /api/v2/SystemService/Options | Create a new system option
[**OptionsAPI_deleteSystemOption**](OptionsAPI.md#OptionsAPI_deleteSystemOption) | **DELETE** /api/v2/SystemService/Options/{optionId} | Delete a system option
[**OptionsAPI_getSystemOptionById**](OptionsAPI.md#OptionsAPI_getSystemOptionById) | **GET** /api/v2/SystemService/Options/{optionId} | Retrieve a single system option by its ID
[**OptionsAPI_getSystemOptionByKey**](OptionsAPI.md#OptionsAPI_getSystemOptionByKey) | **GET** /api/v2/SystemService/Options/Key/{key} | Retrieve a single system option by its key
[**OptionsAPI_getSystemOptions**](OptionsAPI.md#OptionsAPI_getSystemOptions) | **GET** /api/v2/SystemService/Options | Retrieve a list of system options
[**OptionsAPI_getSystemOptionsCount**](OptionsAPI.md#OptionsAPI_getSystemOptionsCount) | **GET** /api/v2/SystemService/Options/Count | Get the count of system options
[**OptionsAPI_updateSystemOption**](OptionsAPI.md#OptionsAPI_updateSystemOption) | **PUT** /api/v2/SystemService/Options/{optionId} | Update a system option
[**OptionsAPI_upsertSystemOption**](OptionsAPI.md#OptionsAPI_upsertSystemOption) | **PUT** /api/v2/SystemService/Options/Upsert/{key} | Create or update a system option by key


# **OptionsAPI_createSystemOption**
```c
// Create a new system option
//
// Create a new system option
//
empty_envelope_t* OptionsAPI_createSystemOption(apiClient_t *apiClient, char *key, char *portalId, char *api_version, char *x_api_version, option_create_dto_t *option_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**key** | **char \*** |  | 
**portalId** | **char \*** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**option_create_dto** | **[option_create_dto_t](option_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **OptionsAPI_deleteSystemOption**
```c
// Delete a system option
//
// Delete a system option
//
empty_envelope_t* OptionsAPI_deleteSystemOption(apiClient_t *apiClient, char *optionId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**optionId** | **char \*** |  | 
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

# **OptionsAPI_getSystemOptionById**
```c
// Retrieve a single system option by its ID
//
// Retrieve a single system option by its ID
//
option_dto_envelope_t* OptionsAPI_getSystemOptionById(apiClient_t *apiClient, char *optionId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**optionId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[option_dto_envelope_t](option_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **OptionsAPI_getSystemOptionByKey**
```c
// Retrieve a single system option by its key
//
// Retrieve a single system option by its key
//
option_dto_envelope_t* OptionsAPI_getSystemOptionByKey(apiClient_t *apiClient, char *portalId, char *key, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**portalId** | **char \*** |  | 
**key** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[option_dto_envelope_t](option_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **OptionsAPI_getSystemOptions**
```c
// Retrieve a list of system options
//
// Retrieve a list of system options for a portal
//
option_dto_list_envelope_t* OptionsAPI_getSystemOptions(apiClient_t *apiClient, char *portalId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**portalId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[option_dto_list_envelope_t](option_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **OptionsAPI_getSystemOptionsCount**
```c
// Get the count of system options
//
// Get the count of system options for a portal
//
int32_envelope_t* OptionsAPI_getSystemOptionsCount(apiClient_t *apiClient, char *portalId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**portalId** | **char \*** |  | 
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

# **OptionsAPI_updateSystemOption**
```c
// Update a system option
//
// Update a system option
//
empty_envelope_t* OptionsAPI_updateSystemOption(apiClient_t *apiClient, char *optionId, char *api_version, char *x_api_version, option_update_dto_t *option_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**optionId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**option_update_dto** | **[option_update_dto_t](option_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **OptionsAPI_upsertSystemOption**
```c
// Create or update a system option by key
//
// Create or update a system option by key
//
empty_envelope_t* OptionsAPI_upsertSystemOption(apiClient_t *apiClient, char *key, char *portalId, char *api_version, char *x_api_version, option_update_dto_t *option_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**key** | **char \*** |  | 
**portalId** | **char \*** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**option_update_dto** | **[option_update_dto_t](option_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

