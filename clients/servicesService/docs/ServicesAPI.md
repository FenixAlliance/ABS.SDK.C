# ServicesAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ServicesAPI_createServiceAsync**](ServicesAPI.md#ServicesAPI_createServiceAsync) | **POST** /api/v2/ServicesService/Services | Create a service
[**ServicesAPI_deleteServiceAsync**](ServicesAPI.md#ServicesAPI_deleteServiceAsync) | **DELETE** /api/v2/ServicesService/Services/{serviceId} | Delete a service
[**ServicesAPI_getServiceByIdAsync**](ServicesAPI.md#ServicesAPI_getServiceByIdAsync) | **GET** /api/v2/ServicesService/Services/{serviceId} | Get a service by ID
[**ServicesAPI_getServicesAsync**](ServicesAPI.md#ServicesAPI_getServicesAsync) | **GET** /api/v2/ServicesService/Services | Get all services
[**ServicesAPI_getServicesCountAsync**](ServicesAPI.md#ServicesAPI_getServicesCountAsync) | **GET** /api/v2/ServicesService/Services/Count | Get services count
[**ServicesAPI_updateServiceAsync**](ServicesAPI.md#ServicesAPI_updateServiceAsync) | **PUT** /api/v2/ServicesService/Services/{serviceId} | Update a service


# **ServicesAPI_createServiceAsync**
```c
// Create a service
//
// Creates a new service for the specified tenant.
//
envelope_t* ServicesAPI_createServiceAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, service_create_dto_t *service_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**service_create_dto** | **[service_create_dto_t](service_create_dto.md) \*** |  | [optional] 

### Return type

[envelope_t](envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ServicesAPI_deleteServiceAsync**
```c
// Delete a service
//
// Deletes a service by its identifier.
//
envelope_t* ServicesAPI_deleteServiceAsync(apiClient_t *apiClient, char *tenantId, char *serviceId, char *api_version, char *x_api_version);
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

[envelope_t](envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ServicesAPI_getServiceByIdAsync**
```c
// Get a service by ID
//
// Retrieves a service by its identifier.
//
service_dto_envelope_t* ServicesAPI_getServiceByIdAsync(apiClient_t *apiClient, char *tenantId, char *serviceId, char *api_version, char *x_api_version);
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

[service_dto_envelope_t](service_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ServicesAPI_getServicesAsync**
```c
// Get all services
//
// Retrieves all services for the specified tenant.
//
service_dto_i_read_only_list_envelope_t* ServicesAPI_getServicesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[service_dto_i_read_only_list_envelope_t](service_dto_i_read_only_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ServicesAPI_getServicesCountAsync**
```c
// Get services count
//
// Returns the count of services for the specified tenant.
//
int32_envelope_t* ServicesAPI_getServicesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **ServicesAPI_updateServiceAsync**
```c
// Update a service
//
// Updates an existing service.
//
envelope_t* ServicesAPI_updateServiceAsync(apiClient_t *apiClient, char *tenantId, char *serviceId, char *api_version, char *x_api_version, service_update_dto_t *service_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**serviceId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**service_update_dto** | **[service_update_dto_t](service_update_dto.md) \*** |  | [optional] 

### Return type

[envelope_t](envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

