# SizesAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SizesAPI_createTenantSize**](SizesAPI.md#SizesAPI_createTenantSize) | **POST** /api/v2/TenantsService/Sizes | Create a new tenant size
[**SizesAPI_deleteTenantSize**](SizesAPI.md#SizesAPI_deleteTenantSize) | **DELETE** /api/v2/TenantsService/Sizes/{tenantSizeId} | Delete a tenant size
[**SizesAPI_getTenantSizeById**](SizesAPI.md#SizesAPI_getTenantSizeById) | **GET** /api/v2/TenantsService/Sizes/{tenantSizeId} | Retrieve a single tenant size by its ID
[**SizesAPI_getTenantSizes**](SizesAPI.md#SizesAPI_getTenantSizes) | **GET** /api/v2/TenantsService/Sizes | Retrieve a list of tenant sizes
[**SizesAPI_getTenantSizesCount**](SizesAPI.md#SizesAPI_getTenantSizesCount) | **GET** /api/v2/TenantsService/Sizes/Count | Get the count of tenant sizes
[**SizesAPI_updateTenantSize**](SizesAPI.md#SizesAPI_updateTenantSize) | **PUT** /api/v2/TenantsService/Sizes/{tenantSizeId} | Update a tenant size


# **SizesAPI_createTenantSize**
```c
// Create a new tenant size
//
// Create a new tenant size
//
empty_envelope_t* SizesAPI_createTenantSize(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, tenant_size_create_dto_t *tenant_size_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**tenant_size_create_dto** | **[tenant_size_create_dto_t](tenant_size_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SizesAPI_deleteTenantSize**
```c
// Delete a tenant size
//
// Delete a tenant size
//
empty_envelope_t* SizesAPI_deleteTenantSize(apiClient_t *apiClient, char *tenantId, char *tenantSizeId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**tenantSizeId** | **char \*** |  | 
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

# **SizesAPI_getTenantSizeById**
```c
// Retrieve a single tenant size by its ID
//
// Retrieve a single tenant size by its ID
//
tenant_size_dto_envelope_t* SizesAPI_getTenantSizeById(apiClient_t *apiClient, char *tenantId, char *tenantSizeId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**tenantSizeId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[tenant_size_dto_envelope_t](tenant_size_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SizesAPI_getTenantSizes**
```c
// Retrieve a list of tenant sizes
//
// Retrieve a list of tenant sizes
//
tenant_size_dto_list_envelope_t* SizesAPI_getTenantSizes(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[tenant_size_dto_list_envelope_t](tenant_size_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SizesAPI_getTenantSizesCount**
```c
// Get the count of tenant sizes
//
// Get the count of tenant sizes
//
int32_envelope_t* SizesAPI_getTenantSizesCount(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **SizesAPI_updateTenantSize**
```c
// Update a tenant size
//
// Update a tenant size
//
empty_envelope_t* SizesAPI_updateTenantSize(apiClient_t *apiClient, char *tenantId, char *tenantSizeId, char *api_version, char *x_api_version, tenant_size_update_dto_t *tenant_size_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**tenantSizeId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**tenant_size_update_dto** | **[tenant_size_update_dto_t](tenant_size_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

