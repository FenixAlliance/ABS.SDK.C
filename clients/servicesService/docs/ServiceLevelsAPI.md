# ServiceLevelsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ServiceLevelsAPI_countAllServiceLevelsAsync**](ServiceLevelsAPI.md#ServiceLevelsAPI_countAllServiceLevelsAsync) | **GET** /api/v2/ServicesService/ServiceLevels/Count | Get all service levels count
[**ServiceLevelsAPI_createServiceLevelAsync**](ServiceLevelsAPI.md#ServiceLevelsAPI_createServiceLevelAsync) | **POST** /api/v2/ServicesService/Services/{serviceId}/ServiceLevels | Create a service level
[**ServiceLevelsAPI_deleteServiceLevelAsync**](ServiceLevelsAPI.md#ServiceLevelsAPI_deleteServiceLevelAsync) | **DELETE** /api/v2/ServicesService/Services/{serviceId}/ServiceLevels/{serviceLevelId} | Delete a service level
[**ServiceLevelsAPI_getAllServiceLevelsAsync**](ServiceLevelsAPI.md#ServiceLevelsAPI_getAllServiceLevelsAsync) | **GET** /api/v2/ServicesService/ServiceLevels | Get all service levels
[**ServiceLevelsAPI_getServiceLevelByIdAsync**](ServiceLevelsAPI.md#ServiceLevelsAPI_getServiceLevelByIdAsync) | **GET** /api/v2/ServicesService/Services/{serviceId}/ServiceLevels/{serviceLevelId} | Get a service level by ID
[**ServiceLevelsAPI_getServiceLevelsAsync**](ServiceLevelsAPI.md#ServiceLevelsAPI_getServiceLevelsAsync) | **GET** /api/v2/ServicesService/Services/{serviceId}/ServiceLevels | Get all service levels
[**ServiceLevelsAPI_getServiceLevelsCountAsync**](ServiceLevelsAPI.md#ServiceLevelsAPI_getServiceLevelsCountAsync) | **GET** /api/v2/ServicesService/Services/{serviceId}/ServiceLevels/Count | Get service levels count
[**ServiceLevelsAPI_updateServiceLevelAsync**](ServiceLevelsAPI.md#ServiceLevelsAPI_updateServiceLevelAsync) | **PUT** /api/v2/ServicesService/Services/{serviceId}/ServiceLevels/{serviceLevelId} | Update a service level


# **ServiceLevelsAPI_countAllServiceLevelsAsync**
```c
// Get all service levels count
//
// Returns the count of all service levels for the specified tenant.
//
int32_envelope_t* ServiceLevelsAPI_countAllServiceLevelsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **ServiceLevelsAPI_createServiceLevelAsync**
```c
// Create a service level
//
// Creates a new service level for the specified service.
//
envelope_t* ServiceLevelsAPI_createServiceLevelAsync(apiClient_t *apiClient, char *tenantId, char *serviceId, char *api_version, char *x_api_version, service_level_create_dto_t *service_level_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**serviceId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**service_level_create_dto** | **[service_level_create_dto_t](service_level_create_dto.md) \*** |  | [optional] 

### Return type

[envelope_t](envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ServiceLevelsAPI_deleteServiceLevelAsync**
```c
// Delete a service level
//
// Deletes a service level by its identifier.
//
envelope_t* ServiceLevelsAPI_deleteServiceLevelAsync(apiClient_t *apiClient, char *tenantId, char *serviceId, char *serviceLevelId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**serviceId** | **char \*** |  | 
**serviceLevelId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[envelope_t](envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ServiceLevelsAPI_getAllServiceLevelsAsync**
```c
// Get all service levels
//
// Retrieves all service levels for the specified tenant.
//
service_level_dto_i_read_only_list_envelope_t* ServiceLevelsAPI_getAllServiceLevelsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[service_level_dto_i_read_only_list_envelope_t](service_level_dto_i_read_only_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ServiceLevelsAPI_getServiceLevelByIdAsync**
```c
// Get a service level by ID
//
// Retrieves a service level by its identifier.
//
service_level_dto_envelope_t* ServiceLevelsAPI_getServiceLevelByIdAsync(apiClient_t *apiClient, char *tenantId, char *serviceId, char *serviceLevelId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**serviceId** | **char \*** |  | 
**serviceLevelId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[service_level_dto_envelope_t](service_level_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ServiceLevelsAPI_getServiceLevelsAsync**
```c
// Get all service levels
//
// Retrieves all service levels for the specified service.
//
service_level_dto_i_read_only_list_envelope_t* ServiceLevelsAPI_getServiceLevelsAsync(apiClient_t *apiClient, char *tenantId, char *serviceId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**serviceId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[service_level_dto_i_read_only_list_envelope_t](service_level_dto_i_read_only_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ServiceLevelsAPI_getServiceLevelsCountAsync**
```c
// Get service levels count
//
// Returns the count of service levels for the specified service.
//
int32_envelope_t* ServiceLevelsAPI_getServiceLevelsCountAsync(apiClient_t *apiClient, char *tenantId, char *serviceId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**serviceId** | **char \*** |  | 
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

# **ServiceLevelsAPI_updateServiceLevelAsync**
```c
// Update a service level
//
// Updates an existing service level.
//
envelope_t* ServiceLevelsAPI_updateServiceLevelAsync(apiClient_t *apiClient, char *tenantId, char *serviceId, char *serviceLevelId, char *api_version, char *x_api_version, service_level_update_dto_t *service_level_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**serviceId** | **char \*** |  | 
**serviceLevelId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**service_level_update_dto** | **[service_level_update_dto_t](service_level_update_dto.md) \*** |  | [optional] 

### Return type

[envelope_t](envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

