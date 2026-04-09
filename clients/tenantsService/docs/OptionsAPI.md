# OptionsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**OptionsAPI_createTenantOption**](OptionsAPI.md#OptionsAPI_createTenantOption) | **POST** /api/v2/TenantsService/Options | Create a new tenant option
[**OptionsAPI_deleteTenantOption**](OptionsAPI.md#OptionsAPI_deleteTenantOption) | **DELETE** /api/v2/TenantsService/Options/{optionId} | Delete a tenant option
[**OptionsAPI_getTenantOptionById**](OptionsAPI.md#OptionsAPI_getTenantOptionById) | **GET** /api/v2/TenantsService/Options/{optionId} | Retrieve a single tenant option by its ID
[**OptionsAPI_getTenantOptionByKey**](OptionsAPI.md#OptionsAPI_getTenantOptionByKey) | **GET** /api/v2/TenantsService/Options/Key/{key} | Retrieve a single tenant option by its key
[**OptionsAPI_getTenantOptions**](OptionsAPI.md#OptionsAPI_getTenantOptions) | **GET** /api/v2/TenantsService/Options | Retrieve a list of tenant options
[**OptionsAPI_getTenantOptionsCount**](OptionsAPI.md#OptionsAPI_getTenantOptionsCount) | **GET** /api/v2/TenantsService/Options/Count | Get the count of tenant options
[**OptionsAPI_updateTenantOption**](OptionsAPI.md#OptionsAPI_updateTenantOption) | **PUT** /api/v2/TenantsService/Options/{optionId} | Update a tenant option
[**OptionsAPI_upsertTenantOption**](OptionsAPI.md#OptionsAPI_upsertTenantOption) | **PUT** /api/v2/TenantsService/Options/Upsert/{key} | Create or update a tenant option by key


# **OptionsAPI_createTenantOption**
```c
// Create a new tenant option
//
// Create a new tenant option
//
empty_envelope_t* OptionsAPI_createTenantOption(apiClient_t *apiClient, char *tenantId, char *key, char *portalId, char *api_version, char *x_api_version, option_create_dto_t *option_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
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

# **OptionsAPI_deleteTenantOption**
```c
// Delete a tenant option
//
// Delete a tenant option
//
empty_envelope_t* OptionsAPI_deleteTenantOption(apiClient_t *apiClient, char *tenantId, char *optionId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
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

# **OptionsAPI_getTenantOptionById**
```c
// Retrieve a single tenant option by its ID
//
// Retrieve a single tenant option by its ID
//
option_dto_envelope_t* OptionsAPI_getTenantOptionById(apiClient_t *apiClient, char *tenantId, char *optionId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
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

# **OptionsAPI_getTenantOptionByKey**
```c
// Retrieve a single tenant option by its key
//
// Retrieve a single tenant option by its key
//
option_dto_envelope_t* OptionsAPI_getTenantOptionByKey(apiClient_t *apiClient, char *tenantId, char *key, char *portalId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
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

# **OptionsAPI_getTenantOptions**
```c
// Retrieve a list of tenant options
//
// Retrieve a list of tenant options
//
option_dto_list_envelope_t* OptionsAPI_getTenantOptions(apiClient_t *apiClient, char *tenantId, char *portalId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
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

# **OptionsAPI_getTenantOptionsCount**
```c
// Get the count of tenant options
//
// Get the count of tenant options
//
int32_envelope_t* OptionsAPI_getTenantOptionsCount(apiClient_t *apiClient, char *tenantId, char *portalId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
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

# **OptionsAPI_updateTenantOption**
```c
// Update a tenant option
//
// Update a tenant option
//
empty_envelope_t* OptionsAPI_updateTenantOption(apiClient_t *apiClient, char *tenantId, char *optionId, char *api_version, char *x_api_version, option_update_dto_t *option_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
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

# **OptionsAPI_upsertTenantOption**
```c
// Create or update a tenant option by key
//
// Create or update a tenant option by key
//
empty_envelope_t* OptionsAPI_upsertTenantOption(apiClient_t *apiClient, char *tenantId, char *key, char *portalId, char *api_version, char *x_api_version, option_update_dto_t *option_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
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

