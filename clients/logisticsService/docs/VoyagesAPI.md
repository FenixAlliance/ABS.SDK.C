# VoyagesAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**VoyagesAPI_cancelVoyageAsync**](VoyagesAPI.md#VoyagesAPI_cancelVoyageAsync) | **POST** /api/v2/LogisticsService/Voyages/{voyageId}/Cancel | Cancel a voyage
[**VoyagesAPI_completeVoyageAsync**](VoyagesAPI.md#VoyagesAPI_completeVoyageAsync) | **POST** /api/v2/LogisticsService/Voyages/{voyageId}/Complete | Complete a voyage
[**VoyagesAPI_createVoyageAsync**](VoyagesAPI.md#VoyagesAPI_createVoyageAsync) | **POST** /api/v2/LogisticsService/Voyages | Create a voyage
[**VoyagesAPI_createVoyagePortCallAsync**](VoyagesAPI.md#VoyagesAPI_createVoyagePortCallAsync) | **POST** /api/v2/LogisticsService/Voyages/{voyageId}/PortCalls | Create a port call
[**VoyagesAPI_deleteVoyageAsync**](VoyagesAPI.md#VoyagesAPI_deleteVoyageAsync) | **DELETE** /api/v2/LogisticsService/Voyages/{voyageId} | Delete a voyage
[**VoyagesAPI_deleteVoyagePortCallAsync**](VoyagesAPI.md#VoyagesAPI_deleteVoyagePortCallAsync) | **DELETE** /api/v2/LogisticsService/Voyages/{voyageId}/PortCalls/{portCallId} | Delete a port call
[**VoyagesAPI_getVoyageByIdAsync**](VoyagesAPI.md#VoyagesAPI_getVoyageByIdAsync) | **GET** /api/v2/LogisticsService/Voyages/{voyageId} | Get voyage by ID
[**VoyagesAPI_getVoyagePortCallsAsync**](VoyagesAPI.md#VoyagesAPI_getVoyagePortCallsAsync) | **GET** /api/v2/LogisticsService/Voyages/{voyageId}/PortCalls | Get voyage port calls
[**VoyagesAPI_getVoyagePortCallsCountAsync**](VoyagesAPI.md#VoyagesAPI_getVoyagePortCallsCountAsync) | **GET** /api/v2/LogisticsService/Voyages/{voyageId}/PortCalls/Count | Get voyage port calls count
[**VoyagesAPI_getVoyagesAsync**](VoyagesAPI.md#VoyagesAPI_getVoyagesAsync) | **GET** /api/v2/LogisticsService/Voyages | Get all voyages
[**VoyagesAPI_getVoyagesCountAsync**](VoyagesAPI.md#VoyagesAPI_getVoyagesCountAsync) | **GET** /api/v2/LogisticsService/Voyages/Count | Get voyages count
[**VoyagesAPI_patchVoyageAsync**](VoyagesAPI.md#VoyagesAPI_patchVoyageAsync) | **PATCH** /api/v2/LogisticsService/Voyages/{voyageId} | Patch a voyage
[**VoyagesAPI_patchVoyagePortCallAsync**](VoyagesAPI.md#VoyagesAPI_patchVoyagePortCallAsync) | **PATCH** /api/v2/LogisticsService/Voyages/{voyageId}/PortCalls/{portCallId} | Patch a voyage port call
[**VoyagesAPI_startVoyageAsync**](VoyagesAPI.md#VoyagesAPI_startVoyageAsync) | **POST** /api/v2/LogisticsService/Voyages/{voyageId}/Start | Start a voyage
[**VoyagesAPI_updateVoyageAsync**](VoyagesAPI.md#VoyagesAPI_updateVoyageAsync) | **PUT** /api/v2/LogisticsService/Voyages/{voyageId} | Update a voyage
[**VoyagesAPI_updateVoyagePortCallAsync**](VoyagesAPI.md#VoyagesAPI_updateVoyagePortCallAsync) | **PUT** /api/v2/LogisticsService/Voyages/{voyageId}/PortCalls/{portCallId} | Update a port call


# **VoyagesAPI_cancelVoyageAsync**
```c
// Cancel a voyage
//
// Cancels a voyage.
//
empty_envelope_t* VoyagesAPI_cancelVoyageAsync(apiClient_t *apiClient, char *tenantId, char *voyageId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**voyageId** | **char \*** |  | 
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

# **VoyagesAPI_completeVoyageAsync**
```c
// Complete a voyage
//
// Marks a voyage as completed.
//
empty_envelope_t* VoyagesAPI_completeVoyageAsync(apiClient_t *apiClient, char *tenantId, char *voyageId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**voyageId** | **char \*** |  | 
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

# **VoyagesAPI_createVoyageAsync**
```c
// Create a voyage
//
// Creates a new voyage for the specified tenant.
//
empty_envelope_t* VoyagesAPI_createVoyageAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, voyage_create_dto_t *voyage_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**voyage_create_dto** | **[voyage_create_dto_t](voyage_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **VoyagesAPI_createVoyagePortCallAsync**
```c
// Create a port call
//
// Creates a new port call for a voyage.
//
empty_envelope_t* VoyagesAPI_createVoyagePortCallAsync(apiClient_t *apiClient, char *tenantId, char *voyageId, char *api_version, char *x_api_version, voyage_port_call_create_dto_t *voyage_port_call_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**voyageId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**voyage_port_call_create_dto** | **[voyage_port_call_create_dto_t](voyage_port_call_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **VoyagesAPI_deleteVoyageAsync**
```c
// Delete a voyage
//
// Deletes a voyage.
//
empty_envelope_t* VoyagesAPI_deleteVoyageAsync(apiClient_t *apiClient, char *tenantId, char *voyageId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**voyageId** | **char \*** |  | 
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

# **VoyagesAPI_deleteVoyagePortCallAsync**
```c
// Delete a port call
//
// Deletes a port call.
//
empty_envelope_t* VoyagesAPI_deleteVoyagePortCallAsync(apiClient_t *apiClient, char *tenantId, char *voyageId, char *portCallId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**voyageId** | **char \*** |  | 
**portCallId** | **char \*** |  | 
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

# **VoyagesAPI_getVoyageByIdAsync**
```c
// Get voyage by ID
//
// Retrieves a specific voyage by its identifier.
//
voyage_dto_envelope_t* VoyagesAPI_getVoyageByIdAsync(apiClient_t *apiClient, char *tenantId, char *voyageId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**voyageId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[voyage_dto_envelope_t](voyage_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **VoyagesAPI_getVoyagePortCallsAsync**
```c
// Get voyage port calls
//
// Retrieves all port calls for a specific voyage.
//
voyage_port_call_dto_list_envelope_t* VoyagesAPI_getVoyagePortCallsAsync(apiClient_t *apiClient, char *tenantId, char *voyageId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**voyageId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[voyage_port_call_dto_list_envelope_t](voyage_port_call_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **VoyagesAPI_getVoyagePortCallsCountAsync**
```c
// Get voyage port calls count
//
// Returns the count of port calls for a specific voyage.
//
int32_envelope_t* VoyagesAPI_getVoyagePortCallsCountAsync(apiClient_t *apiClient, char *tenantId, char *voyageId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**voyageId** | **char \*** |  | 
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

# **VoyagesAPI_getVoyagesAsync**
```c
// Get all voyages
//
// Retrieves all voyages for the specified tenant.
//
voyage_dto_list_envelope_t* VoyagesAPI_getVoyagesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[voyage_dto_list_envelope_t](voyage_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **VoyagesAPI_getVoyagesCountAsync**
```c
// Get voyages count
//
// Returns the count of voyages for the specified tenant.
//
int32_envelope_t* VoyagesAPI_getVoyagesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **VoyagesAPI_patchVoyageAsync**
```c
// Patch a voyage
//
// Partially updates an existing voyage using JSON Patch.
//
empty_envelope_t* VoyagesAPI_patchVoyageAsync(apiClient_t *apiClient, char *tenantId, char *voyageId, char *api_version, char *x_api_version, list_t *operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**voyageId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**operation** | **[list_t](operation.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **VoyagesAPI_patchVoyagePortCallAsync**
```c
// Patch a voyage port call
//
// Partially updates an existing voyage port call using JSON Patch.
//
empty_envelope_t* VoyagesAPI_patchVoyagePortCallAsync(apiClient_t *apiClient, char *tenantId, char *voyageId, char *portCallId, char *api_version, char *x_api_version, list_t *operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**voyageId** | **char \*** |  | 
**portCallId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**operation** | **[list_t](operation.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **VoyagesAPI_startVoyageAsync**
```c
// Start a voyage
//
// Starts a voyage.
//
empty_envelope_t* VoyagesAPI_startVoyageAsync(apiClient_t *apiClient, char *tenantId, char *voyageId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**voyageId** | **char \*** |  | 
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

# **VoyagesAPI_updateVoyageAsync**
```c
// Update a voyage
//
// Updates an existing voyage.
//
empty_envelope_t* VoyagesAPI_updateVoyageAsync(apiClient_t *apiClient, char *tenantId, char *voyageId, char *api_version, char *x_api_version, voyage_update_dto_t *voyage_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**voyageId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**voyage_update_dto** | **[voyage_update_dto_t](voyage_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **VoyagesAPI_updateVoyagePortCallAsync**
```c
// Update a port call
//
// Updates an existing port call.
//
empty_envelope_t* VoyagesAPI_updateVoyagePortCallAsync(apiClient_t *apiClient, char *tenantId, char *voyageId, char *portCallId, char *api_version, char *x_api_version, voyage_port_call_update_dto_t *voyage_port_call_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**voyageId** | **char \*** |  | 
**portCallId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**voyage_port_call_update_dto** | **[voyage_port_call_update_dto_t](voyage_port_call_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

