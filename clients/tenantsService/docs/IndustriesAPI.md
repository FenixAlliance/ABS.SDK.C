# IndustriesAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**IndustriesAPI_createTenantIndustry**](IndustriesAPI.md#IndustriesAPI_createTenantIndustry) | **POST** /api/v2/TenantsService/Industries | Create a new tenant industry
[**IndustriesAPI_deleteTenantIndustry**](IndustriesAPI.md#IndustriesAPI_deleteTenantIndustry) | **DELETE** /api/v2/TenantsService/Industries/{tenantIndustryId} | Delete a tenant industry
[**IndustriesAPI_getTenantIndustries**](IndustriesAPI.md#IndustriesAPI_getTenantIndustries) | **GET** /api/v2/TenantsService/Industries | Retrieve a list of tenant industries
[**IndustriesAPI_getTenantIndustriesCount**](IndustriesAPI.md#IndustriesAPI_getTenantIndustriesCount) | **GET** /api/v2/TenantsService/Industries/Count | Get the count of tenant industries
[**IndustriesAPI_getTenantIndustryById**](IndustriesAPI.md#IndustriesAPI_getTenantIndustryById) | **GET** /api/v2/TenantsService/Industries/{tenantIndustryId} | Retrieve a single tenant industry by its ID
[**IndustriesAPI_updateTenantIndustry**](IndustriesAPI.md#IndustriesAPI_updateTenantIndustry) | **PUT** /api/v2/TenantsService/Industries/{tenantIndustryId} | Update a tenant industry


# **IndustriesAPI_createTenantIndustry**
```c
// Create a new tenant industry
//
// Create a new tenant industry
//
empty_envelope_t* IndustriesAPI_createTenantIndustry(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, tenant_industry_create_dto_t *tenant_industry_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**tenant_industry_create_dto** | **[tenant_industry_create_dto_t](tenant_industry_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **IndustriesAPI_deleteTenantIndustry**
```c
// Delete a tenant industry
//
// Delete a tenant industry
//
empty_envelope_t* IndustriesAPI_deleteTenantIndustry(apiClient_t *apiClient, char *tenantId, char *tenantIndustryId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**tenantIndustryId** | **char \*** |  | 
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

# **IndustriesAPI_getTenantIndustries**
```c
// Retrieve a list of tenant industries
//
// Retrieve a list of tenant industries
//
tenant_industry_dto_list_envelope_t* IndustriesAPI_getTenantIndustries(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[tenant_industry_dto_list_envelope_t](tenant_industry_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **IndustriesAPI_getTenantIndustriesCount**
```c
// Get the count of tenant industries
//
// Get the count of tenant industries
//
int32_envelope_t* IndustriesAPI_getTenantIndustriesCount(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **IndustriesAPI_getTenantIndustryById**
```c
// Retrieve a single tenant industry by its ID
//
// Retrieve a single tenant industry by its ID
//
tenant_industry_dto_envelope_t* IndustriesAPI_getTenantIndustryById(apiClient_t *apiClient, char *tenantId, char *tenantIndustryId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**tenantIndustryId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[tenant_industry_dto_envelope_t](tenant_industry_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **IndustriesAPI_updateTenantIndustry**
```c
// Update a tenant industry
//
// Update a tenant industry
//
empty_envelope_t* IndustriesAPI_updateTenantIndustry(apiClient_t *apiClient, char *tenantId, char *tenantIndustryId, char *api_version, char *x_api_version, tenant_industry_update_dto_t *tenant_industry_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**tenantIndustryId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**tenant_industry_update_dto** | **[tenant_industry_update_dto_t](tenant_industry_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

