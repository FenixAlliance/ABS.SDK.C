# OptionsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**OptionsAPI_createUserOption**](OptionsAPI.md#OptionsAPI_createUserOption) | **POST** /api/v2/Me/Options | Create a new user option
[**OptionsAPI_deleteUserOption**](OptionsAPI.md#OptionsAPI_deleteUserOption) | **DELETE** /api/v2/Me/Options/{optionId} | Delete a user option
[**OptionsAPI_getUserOptionById**](OptionsAPI.md#OptionsAPI_getUserOptionById) | **GET** /api/v2/Me/Options/{optionId} | Retrieve a single user option by its ID
[**OptionsAPI_getUserOptionByKey**](OptionsAPI.md#OptionsAPI_getUserOptionByKey) | **GET** /api/v2/Me/Options/Key/{key} | Retrieve a single user option by its key
[**OptionsAPI_getUserOptions**](OptionsAPI.md#OptionsAPI_getUserOptions) | **GET** /api/v2/Me/Options | Retrieve a list of user options
[**OptionsAPI_getUserOptionsCount**](OptionsAPI.md#OptionsAPI_getUserOptionsCount) | **GET** /api/v2/Me/Options/Count | Get the count of user options
[**OptionsAPI_updateUserOption**](OptionsAPI.md#OptionsAPI_updateUserOption) | **PUT** /api/v2/Me/Options/{optionId} | Update a user option
[**OptionsAPI_upsertUserOption**](OptionsAPI.md#OptionsAPI_upsertUserOption) | **PUT** /api/v2/Me/Options/Upsert/{key} | Create or update a user option by key


# **OptionsAPI_createUserOption**
```c
// Create a new user option
//
// Create a new option for the current user
//
empty_envelope_t* OptionsAPI_createUserOption(apiClient_t *apiClient, char *key, char *portalId, char *api_version, char *x_api_version, option_create_dto_t *option_create_dto);
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

# **OptionsAPI_deleteUserOption**
```c
// Delete a user option
//
// Delete a user option
//
empty_envelope_t* OptionsAPI_deleteUserOption(apiClient_t *apiClient, char *optionId, char *api_version, char *x_api_version);
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

# **OptionsAPI_getUserOptionById**
```c
// Retrieve a single user option by its ID
//
// Retrieve a single user option by its ID
//
option_dto_envelope_t* OptionsAPI_getUserOptionById(apiClient_t *apiClient, char *optionId, char *api_version, char *x_api_version);
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

# **OptionsAPI_getUserOptionByKey**
```c
// Retrieve a single user option by its key
//
// Retrieve a single user option by its key
//
option_dto_envelope_t* OptionsAPI_getUserOptionByKey(apiClient_t *apiClient, char *key, char *portalId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**key** | **char \*** |  | 
**portalId** | **char \*** |  | [optional] 
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

# **OptionsAPI_getUserOptions**
```c
// Retrieve a list of user options
//
// Retrieve a list of options for the current user
//
option_dto_list_envelope_t* OptionsAPI_getUserOptions(apiClient_t *apiClient, char *portalId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**portalId** | **char \*** |  | [optional] 
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

# **OptionsAPI_getUserOptionsCount**
```c
// Get the count of user options
//
// Get the count of options for the current user
//
int32_envelope_t* OptionsAPI_getUserOptionsCount(apiClient_t *apiClient, char *portalId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**portalId** | **char \*** |  | [optional] 
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

# **OptionsAPI_updateUserOption**
```c
// Update a user option
//
// Update a user option
//
empty_envelope_t* OptionsAPI_updateUserOption(apiClient_t *apiClient, char *optionId, char *api_version, char *x_api_version, option_update_dto_t *option_update_dto);
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

# **OptionsAPI_upsertUserOption**
```c
// Create or update a user option by key
//
// Create or update a user option by key
//
empty_envelope_t* OptionsAPI_upsertUserOption(apiClient_t *apiClient, char *key, char *portalId, char *api_version, char *x_api_version, option_update_dto_t *option_update_dto);
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

