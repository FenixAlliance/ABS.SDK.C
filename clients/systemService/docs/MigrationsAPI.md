# MigrationsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**MigrationsAPI_migrate**](MigrationsAPI.md#MigrationsAPI_migrate) | **POST** /api/v2/SystemService/Migrations/Migrate | Apply pending database migrations
[**MigrationsAPI_migrations**](MigrationsAPI.md#MigrationsAPI_migrations) | **GET** /api/v2/SystemService/Migrations | Retrieve database migrations


# **MigrationsAPI_migrate**
```c
// Apply pending database migrations
//
// Applies all pending database migrations and returns the list of migrations that were applied.
//
string_list_envelope_t* MigrationsAPI_migrate(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[string_list_envelope_t](string_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **MigrationsAPI_migrations**
```c
// Retrieve database migrations
//
// Retrieves the list of applied or pending database migrations.
//
string_list_envelope_t* MigrationsAPI_migrations(apiClient_t *apiClient, int *pending, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pending** | **int \*** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[string_list_envelope_t](string_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

