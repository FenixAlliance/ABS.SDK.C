# RailWaybillsAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**RailWaybillsAPI_addRailWaybillLineAsync**](RailWaybillsAPI.md#RailWaybillsAPI_addRailWaybillLineAsync) | **POST** /api/v2/LogisticsService/RailWaybills/{waybillId}/Lines | Add a line to rail waybill
[**RailWaybillsAPI_cancelRailWaybillAsync**](RailWaybillsAPI.md#RailWaybillsAPI_cancelRailWaybillAsync) | **POST** /api/v2/LogisticsService/RailWaybills/{waybillId}/Cancel | Cancel a rail waybill
[**RailWaybillsAPI_createRailWaybillAsync**](RailWaybillsAPI.md#RailWaybillsAPI_createRailWaybillAsync) | **POST** /api/v2/LogisticsService/RailWaybills | Create a rail waybill
[**RailWaybillsAPI_deleteRailWaybillAsync**](RailWaybillsAPI.md#RailWaybillsAPI_deleteRailWaybillAsync) | **DELETE** /api/v2/LogisticsService/RailWaybills/{waybillId} | Delete a rail waybill
[**RailWaybillsAPI_getRailWaybillByIdAsync**](RailWaybillsAPI.md#RailWaybillsAPI_getRailWaybillByIdAsync) | **GET** /api/v2/LogisticsService/RailWaybills/{waybillId} | Get rail waybill by ID
[**RailWaybillsAPI_getRailWaybillLinesAsync**](RailWaybillsAPI.md#RailWaybillsAPI_getRailWaybillLinesAsync) | **GET** /api/v2/LogisticsService/RailWaybills/{waybillId}/Lines | Get rail waybill lines
[**RailWaybillsAPI_getRailWaybillLinesCountAsync**](RailWaybillsAPI.md#RailWaybillsAPI_getRailWaybillLinesCountAsync) | **GET** /api/v2/LogisticsService/RailWaybills/{waybillId}/Lines/Count | Get rail waybill lines count
[**RailWaybillsAPI_getRailWaybillsAsync**](RailWaybillsAPI.md#RailWaybillsAPI_getRailWaybillsAsync) | **GET** /api/v2/LogisticsService/RailWaybills | Get all rail waybills
[**RailWaybillsAPI_getRailWaybillsCountAsync**](RailWaybillsAPI.md#RailWaybillsAPI_getRailWaybillsCountAsync) | **GET** /api/v2/LogisticsService/RailWaybills/Count | Get rail waybills count
[**RailWaybillsAPI_issueRailWaybillAsync**](RailWaybillsAPI.md#RailWaybillsAPI_issueRailWaybillAsync) | **POST** /api/v2/LogisticsService/RailWaybills/{waybillId}/Issue | Issue a rail waybill
[**RailWaybillsAPI_markRailWaybillDeliveredAsync**](RailWaybillsAPI.md#RailWaybillsAPI_markRailWaybillDeliveredAsync) | **POST** /api/v2/LogisticsService/RailWaybills/{waybillId}/MarkDelivered | Mark rail waybill delivered
[**RailWaybillsAPI_markRailWaybillInTransitAsync**](RailWaybillsAPI.md#RailWaybillsAPI_markRailWaybillInTransitAsync) | **POST** /api/v2/LogisticsService/RailWaybills/{waybillId}/MarkInTransit | Mark rail waybill in transit
[**RailWaybillsAPI_patchRailWaybillAsync**](RailWaybillsAPI.md#RailWaybillsAPI_patchRailWaybillAsync) | **PATCH** /api/v2/LogisticsService/RailWaybills/{waybillId} | Patch a rail waybill
[**RailWaybillsAPI_patchRailWaybillLineAsync**](RailWaybillsAPI.md#RailWaybillsAPI_patchRailWaybillLineAsync) | **PATCH** /api/v2/LogisticsService/RailWaybills/{waybillId}/Lines/{lineId} | Patch a rail waybill line
[**RailWaybillsAPI_removeRailWaybillLineAsync**](RailWaybillsAPI.md#RailWaybillsAPI_removeRailWaybillLineAsync) | **DELETE** /api/v2/LogisticsService/RailWaybills/{waybillId}/Lines/{lineId} | Remove a rail waybill line
[**RailWaybillsAPI_updateRailWaybillAsync**](RailWaybillsAPI.md#RailWaybillsAPI_updateRailWaybillAsync) | **PUT** /api/v2/LogisticsService/RailWaybills/{waybillId} | Update a rail waybill
[**RailWaybillsAPI_updateRailWaybillLineAsync**](RailWaybillsAPI.md#RailWaybillsAPI_updateRailWaybillLineAsync) | **PUT** /api/v2/LogisticsService/RailWaybills/{waybillId}/Lines/{lineId} | Update a rail waybill line


# **RailWaybillsAPI_addRailWaybillLineAsync**
```c
// Add a line to rail waybill
//
// Adds a new line to a rail waybill.
//
empty_envelope_t* RailWaybillsAPI_addRailWaybillLineAsync(apiClient_t *apiClient, char *tenantId, char *waybillId, char *api_version, char *x_api_version, waybill_line_create_dto_t *waybill_line_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**waybillId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**waybill_line_create_dto** | **[waybill_line_create_dto_t](waybill_line_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **RailWaybillsAPI_cancelRailWaybillAsync**
```c
// Cancel a rail waybill
//
// Cancels a rail waybill.
//
empty_envelope_t* RailWaybillsAPI_cancelRailWaybillAsync(apiClient_t *apiClient, char *tenantId, char *waybillId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**waybillId** | **char \*** |  | 
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

# **RailWaybillsAPI_createRailWaybillAsync**
```c
// Create a rail waybill
//
// Creates a new rail waybill for the specified tenant.
//
empty_envelope_t* RailWaybillsAPI_createRailWaybillAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, rail_waybill_create_dto_t *rail_waybill_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**rail_waybill_create_dto** | **[rail_waybill_create_dto_t](rail_waybill_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **RailWaybillsAPI_deleteRailWaybillAsync**
```c
// Delete a rail waybill
//
// Deletes a rail waybill.
//
empty_envelope_t* RailWaybillsAPI_deleteRailWaybillAsync(apiClient_t *apiClient, char *tenantId, char *waybillId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**waybillId** | **char \*** |  | 
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

# **RailWaybillsAPI_getRailWaybillByIdAsync**
```c
// Get rail waybill by ID
//
// Retrieves a specific rail waybill by its identifier.
//
rail_waybill_dto_envelope_t* RailWaybillsAPI_getRailWaybillByIdAsync(apiClient_t *apiClient, char *tenantId, char *waybillId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**waybillId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[rail_waybill_dto_envelope_t](rail_waybill_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **RailWaybillsAPI_getRailWaybillLinesAsync**
```c
// Get rail waybill lines
//
// Retrieves all lines for a specific rail waybill.
//
waybill_line_dto_list_envelope_t* RailWaybillsAPI_getRailWaybillLinesAsync(apiClient_t *apiClient, char *tenantId, char *waybillId, char *api_version, char *x_api_version, waybill_line_dto_collection_query_parameters_t *waybill_line_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**waybillId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**waybill_line_dto_collection_query_parameters** | **[waybill_line_dto_collection_query_parameters_t](waybill_line_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[waybill_line_dto_list_envelope_t](waybill_line_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **RailWaybillsAPI_getRailWaybillLinesCountAsync**
```c
// Get rail waybill lines count
//
// Returns the count of lines for a specific rail waybill.
//
int32_envelope_t* RailWaybillsAPI_getRailWaybillLinesCountAsync(apiClient_t *apiClient, char *tenantId, char *waybillId, char *api_version, char *x_api_version, waybill_line_dto_collection_query_parameters_t *waybill_line_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**waybillId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**waybill_line_dto_collection_query_parameters** | **[waybill_line_dto_collection_query_parameters_t](waybill_line_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **RailWaybillsAPI_getRailWaybillsAsync**
```c
// Get all rail waybills
//
// Retrieves all rail waybills for the specified tenant.
//
rail_waybill_dto_list_envelope_t* RailWaybillsAPI_getRailWaybillsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, rail_waybill_dto_collection_query_parameters_t *rail_waybill_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**rail_waybill_dto_collection_query_parameters** | **[rail_waybill_dto_collection_query_parameters_t](rail_waybill_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[rail_waybill_dto_list_envelope_t](rail_waybill_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **RailWaybillsAPI_getRailWaybillsCountAsync**
```c
// Get rail waybills count
//
// Returns the count of rail waybills for the specified tenant.
//
int32_envelope_t* RailWaybillsAPI_getRailWaybillsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, rail_waybill_dto_collection_query_parameters_t *rail_waybill_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**rail_waybill_dto_collection_query_parameters** | **[rail_waybill_dto_collection_query_parameters_t](rail_waybill_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **RailWaybillsAPI_issueRailWaybillAsync**
```c
// Issue a rail waybill
//
// Issues a rail waybill.
//
empty_envelope_t* RailWaybillsAPI_issueRailWaybillAsync(apiClient_t *apiClient, char *tenantId, char *waybillId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**waybillId** | **char \*** |  | 
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

# **RailWaybillsAPI_markRailWaybillDeliveredAsync**
```c
// Mark rail waybill delivered
//
// Marks a rail waybill as delivered.
//
empty_envelope_t* RailWaybillsAPI_markRailWaybillDeliveredAsync(apiClient_t *apiClient, char *tenantId, char *waybillId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**waybillId** | **char \*** |  | 
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

# **RailWaybillsAPI_markRailWaybillInTransitAsync**
```c
// Mark rail waybill in transit
//
// Marks a rail waybill as in transit.
//
empty_envelope_t* RailWaybillsAPI_markRailWaybillInTransitAsync(apiClient_t *apiClient, char *tenantId, char *waybillId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**waybillId** | **char \*** |  | 
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

# **RailWaybillsAPI_patchRailWaybillAsync**
```c
// Patch a rail waybill
//
// Partially updates an existing rail waybill using a JSON Patch document.
//
empty_envelope_t* RailWaybillsAPI_patchRailWaybillAsync(apiClient_t *apiClient, char *tenantId, char *waybillId, char *api_version, char *x_api_version, list_t *patch_operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**waybillId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**patch_operation** | **[list_t](patch_operation.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **RailWaybillsAPI_patchRailWaybillLineAsync**
```c
// Patch a rail waybill line
//
// Partially updates a line on a rail waybill using a JSON Patch document.
//
empty_envelope_t* RailWaybillsAPI_patchRailWaybillLineAsync(apiClient_t *apiClient, char *tenantId, char *waybillId, char *lineId, char *api_version, char *x_api_version, list_t *patch_operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**waybillId** | **char \*** |  | 
**lineId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**patch_operation** | **[list_t](patch_operation.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **RailWaybillsAPI_removeRailWaybillLineAsync**
```c
// Remove a rail waybill line
//
// Removes a line from a rail waybill.
//
empty_envelope_t* RailWaybillsAPI_removeRailWaybillLineAsync(apiClient_t *apiClient, char *tenantId, char *waybillId, char *lineId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**waybillId** | **char \*** |  | 
**lineId** | **char \*** |  | 
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

# **RailWaybillsAPI_updateRailWaybillAsync**
```c
// Update a rail waybill
//
// Updates an existing rail waybill.
//
empty_envelope_t* RailWaybillsAPI_updateRailWaybillAsync(apiClient_t *apiClient, char *tenantId, char *waybillId, char *api_version, char *x_api_version, rail_waybill_update_dto_t *rail_waybill_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**waybillId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**rail_waybill_update_dto** | **[rail_waybill_update_dto_t](rail_waybill_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **RailWaybillsAPI_updateRailWaybillLineAsync**
```c
// Update a rail waybill line
//
// Updates an existing line on a rail waybill.
//
empty_envelope_t* RailWaybillsAPI_updateRailWaybillLineAsync(apiClient_t *apiClient, char *tenantId, char *waybillId, char *lineId, char *api_version, char *x_api_version, waybill_line_update_dto_t *waybill_line_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**waybillId** | **char \*** |  | 
**lineId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**waybill_line_update_dto** | **[waybill_line_update_dto_t](waybill_line_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

