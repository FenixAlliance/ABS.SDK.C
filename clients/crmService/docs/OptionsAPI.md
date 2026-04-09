# OptionsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**OptionsAPI_createContactOption**](OptionsAPI.md#OptionsAPI_createContactOption) | **POST** /api/v2/CrmService/Contacts/{contactId}/Options | Create a new contact option
[**OptionsAPI_deleteContactOption**](OptionsAPI.md#OptionsAPI_deleteContactOption) | **DELETE** /api/v2/CrmService/Contacts/{contactId}/Options/{optionId} | Delete a contact option
[**OptionsAPI_getContactOptionById**](OptionsAPI.md#OptionsAPI_getContactOptionById) | **GET** /api/v2/CrmService/Contacts/{contactId}/Options/{optionId} | Retrieve a single contact option by its ID
[**OptionsAPI_getContactOptionByKey**](OptionsAPI.md#OptionsAPI_getContactOptionByKey) | **GET** /api/v2/CrmService/Contacts/{contactId}/Options/Key/{key} | Retrieve a single contact option by its key
[**OptionsAPI_getContactOptions**](OptionsAPI.md#OptionsAPI_getContactOptions) | **GET** /api/v2/CrmService/Contacts/{contactId}/Options | Retrieve a list of contact options
[**OptionsAPI_getContactOptionsCount**](OptionsAPI.md#OptionsAPI_getContactOptionsCount) | **GET** /api/v2/CrmService/Contacts/{contactId}/Options/Count | Get the count of contact options
[**OptionsAPI_updateContactOption**](OptionsAPI.md#OptionsAPI_updateContactOption) | **PUT** /api/v2/CrmService/Contacts/{contactId}/Options/{optionId} | Update a contact option
[**OptionsAPI_upsertContactOption**](OptionsAPI.md#OptionsAPI_upsertContactOption) | **PUT** /api/v2/CrmService/Contacts/{contactId}/Options/Upsert/{key} | Create or update a contact option by key


# **OptionsAPI_createContactOption**
```c
// Create a new contact option
//
// Create a new option for a contact
//
empty_envelope_t* OptionsAPI_createContactOption(apiClient_t *apiClient, char *tenantId, char *contactId, char *key, char *portalId, char *api_version, char *x_api_version, option_create_dto_t *option_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
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

# **OptionsAPI_deleteContactOption**
```c
// Delete a contact option
//
// Delete a contact option
//
empty_envelope_t* OptionsAPI_deleteContactOption(apiClient_t *apiClient, char *tenantId, char *contactId, char *optionId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
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

# **OptionsAPI_getContactOptionById**
```c
// Retrieve a single contact option by its ID
//
// Retrieve a single contact option by its ID
//
option_dto_envelope_t* OptionsAPI_getContactOptionById(apiClient_t *apiClient, char *tenantId, char *contactId, char *optionId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
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

# **OptionsAPI_getContactOptionByKey**
```c
// Retrieve a single contact option by its key
//
// Retrieve a single contact option by its key
//
option_dto_envelope_t* OptionsAPI_getContactOptionByKey(apiClient_t *apiClient, char *tenantId, char *contactId, char *key, char *portalId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**contactId** | **char \*** |  | 
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

# **OptionsAPI_getContactOptions**
```c
// Retrieve a list of contact options
//
// Retrieve a list of options for a contact
//
option_dto_list_envelope_t* OptionsAPI_getContactOptions(apiClient_t *apiClient, char *tenantId, char *contactId, char *portalId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**contactId** | **char \*** |  | 
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

# **OptionsAPI_getContactOptionsCount**
```c
// Get the count of contact options
//
// Get the count of options for a contact
//
int32_envelope_t* OptionsAPI_getContactOptionsCount(apiClient_t *apiClient, char *tenantId, char *contactId, char *portalId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**contactId** | **char \*** |  | 
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

# **OptionsAPI_updateContactOption**
```c
// Update a contact option
//
// Update a contact option
//
empty_envelope_t* OptionsAPI_updateContactOption(apiClient_t *apiClient, char *tenantId, char *contactId, char *optionId, char *api_version, char *x_api_version, option_update_dto_t *option_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
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

# **OptionsAPI_upsertContactOption**
```c
// Create or update a contact option by key
//
// Create or update a contact option by key
//
empty_envelope_t* OptionsAPI_upsertContactOption(apiClient_t *apiClient, char *tenantId, char *contactId, char *key, char *portalId, char *api_version, char *x_api_version, option_update_dto_t *option_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**contactId** | **char \*** |  | 
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

