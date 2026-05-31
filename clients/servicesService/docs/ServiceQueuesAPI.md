# ServiceQueuesAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ServiceQueuesAPI_createServiceQueueAsync**](ServiceQueuesAPI.md#ServiceQueuesAPI_createServiceQueueAsync) | **POST** /api/v2/ServicesService/ServiceQueues | Create a service queue
[**ServiceQueuesAPI_deleteServiceQueueAsync**](ServiceQueuesAPI.md#ServiceQueuesAPI_deleteServiceQueueAsync) | **DELETE** /api/v2/ServicesService/ServiceQueues/{serviceQueueId} | Delete a service queue
[**ServiceQueuesAPI_getServiceQueueByIdAsync**](ServiceQueuesAPI.md#ServiceQueuesAPI_getServiceQueueByIdAsync) | **GET** /api/v2/ServicesService/ServiceQueues/{serviceQueueId} | Get a service queue by ID
[**ServiceQueuesAPI_getServiceQueuesAsync**](ServiceQueuesAPI.md#ServiceQueuesAPI_getServiceQueuesAsync) | **GET** /api/v2/ServicesService/ServiceQueues | Get all service queues
[**ServiceQueuesAPI_getServiceQueuesCountAsync**](ServiceQueuesAPI.md#ServiceQueuesAPI_getServiceQueuesCountAsync) | **GET** /api/v2/ServicesService/ServiceQueues/Count | Get service queues count
[**ServiceQueuesAPI_updateServiceQueueAsync**](ServiceQueuesAPI.md#ServiceQueuesAPI_updateServiceQueueAsync) | **PUT** /api/v2/ServicesService/ServiceQueues/{serviceQueueId} | Update a service queue


# **ServiceQueuesAPI_createServiceQueueAsync**
```c
// Create a service queue
//
// Creates a new service queue for the specified tenant.
//
envelope_t* ServiceQueuesAPI_createServiceQueueAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, service_queue_create_dto_t *service_queue_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**service_queue_create_dto** | **[service_queue_create_dto_t](service_queue_create_dto.md) \*** |  | [optional] 

### Return type

[envelope_t](envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ServiceQueuesAPI_deleteServiceQueueAsync**
```c
// Delete a service queue
//
// Deletes a service queue by its identifier.
//
envelope_t* ServiceQueuesAPI_deleteServiceQueueAsync(apiClient_t *apiClient, char *tenantId, char *serviceQueueId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**serviceQueueId** | **char \*** |  | 
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

# **ServiceQueuesAPI_getServiceQueueByIdAsync**
```c
// Get a service queue by ID
//
// Retrieves a service queue by its identifier.
//
service_queue_dto_envelope_t* ServiceQueuesAPI_getServiceQueueByIdAsync(apiClient_t *apiClient, char *tenantId, char *serviceQueueId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**serviceQueueId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[service_queue_dto_envelope_t](service_queue_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ServiceQueuesAPI_getServiceQueuesAsync**
```c
// Get all service queues
//
// Retrieves all service queues for the specified tenant.
//
service_queue_dto_i_read_only_list_envelope_t* ServiceQueuesAPI_getServiceQueuesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[service_queue_dto_i_read_only_list_envelope_t](service_queue_dto_i_read_only_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ServiceQueuesAPI_getServiceQueuesCountAsync**
```c
// Get service queues count
//
// Returns the count of service queues for the specified tenant.
//
int32_envelope_t* ServiceQueuesAPI_getServiceQueuesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **ServiceQueuesAPI_updateServiceQueueAsync**
```c
// Update a service queue
//
// Updates an existing service queue.
//
envelope_t* ServiceQueuesAPI_updateServiceQueueAsync(apiClient_t *apiClient, char *tenantId, char *serviceQueueId, char *api_version, char *x_api_version, service_queue_update_dto_t *service_queue_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**serviceQueueId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**service_queue_update_dto** | **[service_queue_update_dto_t](service_queue_update_dto.md) \*** |  | [optional] 

### Return type

[envelope_t](envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

