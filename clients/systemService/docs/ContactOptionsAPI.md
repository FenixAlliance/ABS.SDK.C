# ContactOptionsAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ContactOptionsAPI_createSystemContactOption**](ContactOptionsAPI.md#ContactOptionsAPI_createSystemContactOption) | **POST** /api/v2/SystemService/Contacts/{contactId}/Options | Create a new contact option (admin)
[**ContactOptionsAPI_deleteSystemContactOption**](ContactOptionsAPI.md#ContactOptionsAPI_deleteSystemContactOption) | **DELETE** /api/v2/SystemService/Contacts/{contactId}/Options/{optionId} | Delete a contact option (admin)
[**ContactOptionsAPI_getSystemContactOptionById**](ContactOptionsAPI.md#ContactOptionsAPI_getSystemContactOptionById) | **GET** /api/v2/SystemService/Contacts/{contactId}/Options/{optionId} | Retrieve a single contact option by its ID (admin)
[**ContactOptionsAPI_getSystemContactOptions**](ContactOptionsAPI.md#ContactOptionsAPI_getSystemContactOptions) | **GET** /api/v2/SystemService/Contacts/{contactId}/Options | Retrieve a list of contact options (admin)
[**ContactOptionsAPI_getSystemContactOptionsCount**](ContactOptionsAPI.md#ContactOptionsAPI_getSystemContactOptionsCount) | **GET** /api/v2/SystemService/Contacts/{contactId}/Options/Count | Get the count of contact options (admin)
[**ContactOptionsAPI_patchSystemContactOption**](ContactOptionsAPI.md#ContactOptionsAPI_patchSystemContactOption) | **PATCH** /api/v2/SystemService/Contacts/{contactId}/Options/{optionId} | Partially update a contact option (admin)
[**ContactOptionsAPI_updateSystemContactOption**](ContactOptionsAPI.md#ContactOptionsAPI_updateSystemContactOption) | **PUT** /api/v2/SystemService/Contacts/{contactId}/Options/{optionId} | Update a contact option (admin)


# **ContactOptionsAPI_createSystemContactOption**
```c
// Create a new contact option (admin)
//
// Admin endpoint to create an option for any contact
//
empty_envelope_t* ContactOptionsAPI_createSystemContactOption(apiClient_t *apiClient, char *contactId, char *key, char *portalId, char *api_version, char *x_api_version, option_create_dto_t *option_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**contactId** | **char \*** |  | 
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

# **ContactOptionsAPI_deleteSystemContactOption**
```c
// Delete a contact option (admin)
//
// Admin endpoint to delete an option for any contact
//
empty_envelope_t* ContactOptionsAPI_deleteSystemContactOption(apiClient_t *apiClient, char *contactId, char *optionId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**contactId** | **char \*** |  | 
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

# **ContactOptionsAPI_getSystemContactOptionById**
```c
// Retrieve a single contact option by its ID (admin)
//
// Admin endpoint to retrieve a single option for any contact
//
option_dto_envelope_t* ContactOptionsAPI_getSystemContactOptionById(apiClient_t *apiClient, char *contactId, char *optionId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**contactId** | **char \*** |  | 
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

# **ContactOptionsAPI_getSystemContactOptions**
```c
// Retrieve a list of contact options (admin)
//
// Admin endpoint to retrieve options for any contact
//
option_dto_list_envelope_t* ContactOptionsAPI_getSystemContactOptions(apiClient_t *apiClient, char *contactId, char *portalId, char *api_version, char *x_api_version, option_dto_collection_query_parameters_t *option_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**contactId** | **char \*** |  | 
**portalId** | **char \*** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**option_dto_collection_query_parameters** | **[option_dto_collection_query_parameters_t](option_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[option_dto_list_envelope_t](option_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ContactOptionsAPI_getSystemContactOptionsCount**
```c
// Get the count of contact options (admin)
//
// Admin endpoint to get the count of options for any contact
//
int32_envelope_t* ContactOptionsAPI_getSystemContactOptionsCount(apiClient_t *apiClient, char *contactId, char *portalId, char *api_version, char *x_api_version, option_dto_collection_query_parameters_t *option_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**contactId** | **char \*** |  | 
**portalId** | **char \*** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**option_dto_collection_query_parameters** | **[option_dto_collection_query_parameters_t](option_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ContactOptionsAPI_patchSystemContactOption**
```c
// Partially update a contact option (admin)
//
// Admin endpoint to partially update an option for any contact using a JSON Patch document
//
empty_envelope_t* ContactOptionsAPI_patchSystemContactOption(apiClient_t *apiClient, char *contactId, char *optionId, char *api_version, char *x_api_version, list_t *patch_operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**contactId** | **char \*** |  | 
**optionId** | **char \*** |  | 
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

# **ContactOptionsAPI_updateSystemContactOption**
```c
// Update a contact option (admin)
//
// Admin endpoint to update an option for any contact
//
empty_envelope_t* ContactOptionsAPI_updateSystemContactOption(apiClient_t *apiClient, char *contactId, char *optionId, char *api_version, char *x_api_version, option_update_dto_t *option_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**contactId** | **char \*** |  | 
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

