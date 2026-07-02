# UserOptionsAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**UserOptionsAPI_createSystemUserOption**](UserOptionsAPI.md#UserOptionsAPI_createSystemUserOption) | **POST** /api/v2/SystemService/Users/{userId}/Options | Create a new user option (admin)
[**UserOptionsAPI_deleteSystemUserOption**](UserOptionsAPI.md#UserOptionsAPI_deleteSystemUserOption) | **DELETE** /api/v2/SystemService/Users/{userId}/Options/{optionId} | Delete a user option (admin)
[**UserOptionsAPI_getSystemUserOptionById**](UserOptionsAPI.md#UserOptionsAPI_getSystemUserOptionById) | **GET** /api/v2/SystemService/Users/{userId}/Options/{optionId} | Retrieve a single user option by its ID (admin)
[**UserOptionsAPI_getSystemUserOptions**](UserOptionsAPI.md#UserOptionsAPI_getSystemUserOptions) | **GET** /api/v2/SystemService/Users/{userId}/Options | Retrieve a list of user options (admin)
[**UserOptionsAPI_getSystemUserOptionsCount**](UserOptionsAPI.md#UserOptionsAPI_getSystemUserOptionsCount) | **GET** /api/v2/SystemService/Users/{userId}/Options/Count | Get the count of user options (admin)
[**UserOptionsAPI_patchSystemUserOption**](UserOptionsAPI.md#UserOptionsAPI_patchSystemUserOption) | **PATCH** /api/v2/SystemService/Users/{userId}/Options/{optionId} | Partially update a user option (admin)
[**UserOptionsAPI_updateSystemUserOption**](UserOptionsAPI.md#UserOptionsAPI_updateSystemUserOption) | **PUT** /api/v2/SystemService/Users/{userId}/Options/{optionId} | Update a user option (admin)


# **UserOptionsAPI_createSystemUserOption**
```c
// Create a new user option (admin)
//
// Admin endpoint to create an option for any user
//
empty_envelope_t* UserOptionsAPI_createSystemUserOption(apiClient_t *apiClient, char *userId, char *key, char *portalId, char *api_version, char *x_api_version, option_create_dto_t *option_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**userId** | **char \*** |  | 
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

# **UserOptionsAPI_deleteSystemUserOption**
```c
// Delete a user option (admin)
//
// Admin endpoint to delete an option for any user
//
empty_envelope_t* UserOptionsAPI_deleteSystemUserOption(apiClient_t *apiClient, char *userId, char *optionId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**userId** | **char \*** |  | 
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

# **UserOptionsAPI_getSystemUserOptionById**
```c
// Retrieve a single user option by its ID (admin)
//
// Admin endpoint to retrieve a single option for any user
//
option_dto_envelope_t* UserOptionsAPI_getSystemUserOptionById(apiClient_t *apiClient, char *userId, char *optionId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**userId** | **char \*** |  | 
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

# **UserOptionsAPI_getSystemUserOptions**
```c
// Retrieve a list of user options (admin)
//
// Admin endpoint to retrieve options for any user
//
option_dto_list_envelope_t* UserOptionsAPI_getSystemUserOptions(apiClient_t *apiClient, char *userId, char *portalId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**userId** | **char \*** |  | 
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

# **UserOptionsAPI_getSystemUserOptionsCount**
```c
// Get the count of user options (admin)
//
// Admin endpoint to get the count of options for any user
//
int32_envelope_t* UserOptionsAPI_getSystemUserOptionsCount(apiClient_t *apiClient, char *userId, char *portalId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**userId** | **char \*** |  | 
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

# **UserOptionsAPI_patchSystemUserOption**
```c
// Partially update a user option (admin)
//
// Admin endpoint to partially update an option for any user using a JSON Patch document
//
empty_envelope_t* UserOptionsAPI_patchSystemUserOption(apiClient_t *apiClient, char *userId, char *optionId, char *api_version, char *x_api_version, list_t *operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**userId** | **char \*** |  | 
**optionId** | **char \*** |  | 
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

# **UserOptionsAPI_updateSystemUserOption**
```c
// Update a user option (admin)
//
// Admin endpoint to update an option for any user
//
empty_envelope_t* UserOptionsAPI_updateSystemUserOption(apiClient_t *apiClient, char *userId, char *optionId, char *api_version, char *x_api_version, option_update_dto_t *option_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**userId** | **char \*** |  | 
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

