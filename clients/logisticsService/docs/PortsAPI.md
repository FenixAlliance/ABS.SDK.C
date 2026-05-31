# PortsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**PortsAPI_createPortAsync**](PortsAPI.md#PortsAPI_createPortAsync) | **POST** /api/v2/LogisticsService/Ports | Create a port
[**PortsAPI_deletePortAsync**](PortsAPI.md#PortsAPI_deletePortAsync) | **DELETE** /api/v2/LogisticsService/Ports/{portId} | Delete a port
[**PortsAPI_getPortByIdAsync**](PortsAPI.md#PortsAPI_getPortByIdAsync) | **GET** /api/v2/LogisticsService/Ports/{portId} | Get port by ID
[**PortsAPI_getPortsAsync**](PortsAPI.md#PortsAPI_getPortsAsync) | **GET** /api/v2/LogisticsService/Ports | Get all ports
[**PortsAPI_getPortsCountAsync**](PortsAPI.md#PortsAPI_getPortsCountAsync) | **GET** /api/v2/LogisticsService/Ports/Count | Get ports count
[**PortsAPI_updatePortAsync**](PortsAPI.md#PortsAPI_updatePortAsync) | **PUT** /api/v2/LogisticsService/Ports/{portId} | Update a port


# **PortsAPI_createPortAsync**
```c
// Create a port
//
// Creates a new port for the specified tenant.
//
empty_envelope_t* PortsAPI_createPortAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, port_create_dto_t *port_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**port_create_dto** | **[port_create_dto_t](port_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PortsAPI_deletePortAsync**
```c
// Delete a port
//
// Deletes a port.
//
empty_envelope_t* PortsAPI_deletePortAsync(apiClient_t *apiClient, char *tenantId, char *portId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**portId** | **char \*** |  | 
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

# **PortsAPI_getPortByIdAsync**
```c
// Get port by ID
//
// Retrieves a specific port by its identifier.
//
port_dto_envelope_t* PortsAPI_getPortByIdAsync(apiClient_t *apiClient, char *tenantId, char *portId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**portId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[port_dto_envelope_t](port_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PortsAPI_getPortsAsync**
```c
// Get all ports
//
// Retrieves all ports for the specified tenant.
//
port_dto_list_envelope_t* PortsAPI_getPortsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[port_dto_list_envelope_t](port_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PortsAPI_getPortsCountAsync**
```c
// Get ports count
//
// Returns the count of ports for the specified tenant.
//
int32_envelope_t* PortsAPI_getPortsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **PortsAPI_updatePortAsync**
```c
// Update a port
//
// Updates an existing port.
//
empty_envelope_t* PortsAPI_updatePortAsync(apiClient_t *apiClient, char *tenantId, char *portId, char *api_version, char *x_api_version, port_update_dto_t *port_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**portId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**port_update_dto** | **[port_update_dto_t](port_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

