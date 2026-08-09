# RoadWaybillsAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**RoadWaybillsAPI_addRoadWaybillLineAsync**](RoadWaybillsAPI.md#RoadWaybillsAPI_addRoadWaybillLineAsync) | **POST** /api/v2/LogisticsService/RoadWaybills/{waybillId}/Lines | Add a line to road waybill
[**RoadWaybillsAPI_cancelRoadWaybillAsync**](RoadWaybillsAPI.md#RoadWaybillsAPI_cancelRoadWaybillAsync) | **POST** /api/v2/LogisticsService/RoadWaybills/{waybillId}/Cancel | Cancel a road waybill
[**RoadWaybillsAPI_createRoadWaybillAsync**](RoadWaybillsAPI.md#RoadWaybillsAPI_createRoadWaybillAsync) | **POST** /api/v2/LogisticsService/RoadWaybills | Create a road waybill
[**RoadWaybillsAPI_deleteRoadWaybillAsync**](RoadWaybillsAPI.md#RoadWaybillsAPI_deleteRoadWaybillAsync) | **DELETE** /api/v2/LogisticsService/RoadWaybills/{waybillId} | Delete a road waybill
[**RoadWaybillsAPI_disputeRoadWaybillAsync**](RoadWaybillsAPI.md#RoadWaybillsAPI_disputeRoadWaybillAsync) | **POST** /api/v2/LogisticsService/RoadWaybills/{waybillId}/Dispute | Dispute a road waybill
[**RoadWaybillsAPI_getRoadWaybillByIdAsync**](RoadWaybillsAPI.md#RoadWaybillsAPI_getRoadWaybillByIdAsync) | **GET** /api/v2/LogisticsService/RoadWaybills/{waybillId} | Get road waybill by ID
[**RoadWaybillsAPI_getRoadWaybillLinesAsync**](RoadWaybillsAPI.md#RoadWaybillsAPI_getRoadWaybillLinesAsync) | **GET** /api/v2/LogisticsService/RoadWaybills/{waybillId}/Lines | Get road waybill lines
[**RoadWaybillsAPI_getRoadWaybillLinesCountAsync**](RoadWaybillsAPI.md#RoadWaybillsAPI_getRoadWaybillLinesCountAsync) | **GET** /api/v2/LogisticsService/RoadWaybills/{waybillId}/Lines/Count | Get road waybill lines count
[**RoadWaybillsAPI_getRoadWaybillsAsync**](RoadWaybillsAPI.md#RoadWaybillsAPI_getRoadWaybillsAsync) | **GET** /api/v2/LogisticsService/RoadWaybills | Get all road waybills
[**RoadWaybillsAPI_getRoadWaybillsCountAsync**](RoadWaybillsAPI.md#RoadWaybillsAPI_getRoadWaybillsCountAsync) | **GET** /api/v2/LogisticsService/RoadWaybills/Count | Get road waybills count
[**RoadWaybillsAPI_issueRoadWaybillAsync**](RoadWaybillsAPI.md#RoadWaybillsAPI_issueRoadWaybillAsync) | **POST** /api/v2/LogisticsService/RoadWaybills/{waybillId}/Issue | Issue a road waybill
[**RoadWaybillsAPI_markRoadWaybillDeliveredAsync**](RoadWaybillsAPI.md#RoadWaybillsAPI_markRoadWaybillDeliveredAsync) | **POST** /api/v2/LogisticsService/RoadWaybills/{waybillId}/MarkDelivered | Mark road waybill delivered
[**RoadWaybillsAPI_markRoadWaybillInTransitAsync**](RoadWaybillsAPI.md#RoadWaybillsAPI_markRoadWaybillInTransitAsync) | **POST** /api/v2/LogisticsService/RoadWaybills/{waybillId}/MarkInTransit | Mark road waybill in transit
[**RoadWaybillsAPI_patchRoadWaybillAsync**](RoadWaybillsAPI.md#RoadWaybillsAPI_patchRoadWaybillAsync) | **PATCH** /api/v2/LogisticsService/RoadWaybills/{waybillId} | Patch a road waybill
[**RoadWaybillsAPI_patchRoadWaybillLineAsync**](RoadWaybillsAPI.md#RoadWaybillsAPI_patchRoadWaybillLineAsync) | **PATCH** /api/v2/LogisticsService/RoadWaybills/{waybillId}/Lines/{lineId} | Patch a road waybill line
[**RoadWaybillsAPI_removeRoadWaybillLineAsync**](RoadWaybillsAPI.md#RoadWaybillsAPI_removeRoadWaybillLineAsync) | **DELETE** /api/v2/LogisticsService/RoadWaybills/{waybillId}/Lines/{lineId} | Remove a road waybill line
[**RoadWaybillsAPI_updateRoadWaybillAsync**](RoadWaybillsAPI.md#RoadWaybillsAPI_updateRoadWaybillAsync) | **PUT** /api/v2/LogisticsService/RoadWaybills/{waybillId} | Update a road waybill
[**RoadWaybillsAPI_updateRoadWaybillLineAsync**](RoadWaybillsAPI.md#RoadWaybillsAPI_updateRoadWaybillLineAsync) | **PUT** /api/v2/LogisticsService/RoadWaybills/{waybillId}/Lines/{lineId} | Update a road waybill line


# **RoadWaybillsAPI_addRoadWaybillLineAsync**
```c
// Add a line to road waybill
//
// Adds a new line to a road waybill.
//
empty_envelope_t* RoadWaybillsAPI_addRoadWaybillLineAsync(apiClient_t *apiClient, char *tenantId, char *waybillId, char *api_version, char *x_api_version, waybill_line_create_dto_t *waybill_line_create_dto);
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

# **RoadWaybillsAPI_cancelRoadWaybillAsync**
```c
// Cancel a road waybill
//
// Cancels a road waybill.
//
empty_envelope_t* RoadWaybillsAPI_cancelRoadWaybillAsync(apiClient_t *apiClient, char *tenantId, char *waybillId, char *api_version, char *x_api_version);
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

# **RoadWaybillsAPI_createRoadWaybillAsync**
```c
// Create a road waybill
//
// Creates a new road waybill for the specified tenant.
//
empty_envelope_t* RoadWaybillsAPI_createRoadWaybillAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, road_waybill_create_dto_t *road_waybill_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**road_waybill_create_dto** | **[road_waybill_create_dto_t](road_waybill_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **RoadWaybillsAPI_deleteRoadWaybillAsync**
```c
// Delete a road waybill
//
// Deletes a road waybill.
//
empty_envelope_t* RoadWaybillsAPI_deleteRoadWaybillAsync(apiClient_t *apiClient, char *tenantId, char *waybillId, char *api_version, char *x_api_version);
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

# **RoadWaybillsAPI_disputeRoadWaybillAsync**
```c
// Dispute a road waybill
//
// Disputes a road waybill.
//
empty_envelope_t* RoadWaybillsAPI_disputeRoadWaybillAsync(apiClient_t *apiClient, char *tenantId, char *waybillId, char *api_version, char *x_api_version);
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

# **RoadWaybillsAPI_getRoadWaybillByIdAsync**
```c
// Get road waybill by ID
//
// Retrieves a specific road waybill by its identifier.
//
road_waybill_dto_envelope_t* RoadWaybillsAPI_getRoadWaybillByIdAsync(apiClient_t *apiClient, char *tenantId, char *waybillId, char *api_version, char *x_api_version);
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

[road_waybill_dto_envelope_t](road_waybill_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **RoadWaybillsAPI_getRoadWaybillLinesAsync**
```c
// Get road waybill lines
//
// Retrieves all lines for a specific road waybill.
//
waybill_line_dto_list_envelope_t* RoadWaybillsAPI_getRoadWaybillLinesAsync(apiClient_t *apiClient, char *tenantId, char *waybillId, char *api_version, char *x_api_version, waybill_line_dto_collection_query_parameters_t *waybill_line_dto_collection_query_parameters);
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

# **RoadWaybillsAPI_getRoadWaybillLinesCountAsync**
```c
// Get road waybill lines count
//
// Returns the count of lines for a specific road waybill.
//
int32_envelope_t* RoadWaybillsAPI_getRoadWaybillLinesCountAsync(apiClient_t *apiClient, char *tenantId, char *waybillId, char *api_version, char *x_api_version, waybill_line_dto_collection_query_parameters_t *waybill_line_dto_collection_query_parameters);
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

# **RoadWaybillsAPI_getRoadWaybillsAsync**
```c
// Get all road waybills
//
// Retrieves all road waybills for the specified tenant.
//
road_waybill_dto_list_envelope_t* RoadWaybillsAPI_getRoadWaybillsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, road_waybill_dto_collection_query_parameters_t *road_waybill_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**road_waybill_dto_collection_query_parameters** | **[road_waybill_dto_collection_query_parameters_t](road_waybill_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[road_waybill_dto_list_envelope_t](road_waybill_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **RoadWaybillsAPI_getRoadWaybillsCountAsync**
```c
// Get road waybills count
//
// Returns the count of road waybills for the specified tenant.
//
int32_envelope_t* RoadWaybillsAPI_getRoadWaybillsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, road_waybill_dto_collection_query_parameters_t *road_waybill_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**road_waybill_dto_collection_query_parameters** | **[road_waybill_dto_collection_query_parameters_t](road_waybill_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **RoadWaybillsAPI_issueRoadWaybillAsync**
```c
// Issue a road waybill
//
// Issues a road waybill.
//
empty_envelope_t* RoadWaybillsAPI_issueRoadWaybillAsync(apiClient_t *apiClient, char *tenantId, char *waybillId, char *api_version, char *x_api_version);
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

# **RoadWaybillsAPI_markRoadWaybillDeliveredAsync**
```c
// Mark road waybill delivered
//
// Marks a road waybill as delivered.
//
empty_envelope_t* RoadWaybillsAPI_markRoadWaybillDeliveredAsync(apiClient_t *apiClient, char *tenantId, char *waybillId, char *api_version, char *x_api_version);
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

# **RoadWaybillsAPI_markRoadWaybillInTransitAsync**
```c
// Mark road waybill in transit
//
// Marks a road waybill as in transit.
//
empty_envelope_t* RoadWaybillsAPI_markRoadWaybillInTransitAsync(apiClient_t *apiClient, char *tenantId, char *waybillId, char *api_version, char *x_api_version);
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

# **RoadWaybillsAPI_patchRoadWaybillAsync**
```c
// Patch a road waybill
//
// Partially updates an existing road waybill using a JSON Patch document.
//
empty_envelope_t* RoadWaybillsAPI_patchRoadWaybillAsync(apiClient_t *apiClient, char *tenantId, char *waybillId, char *api_version, char *x_api_version, list_t *patch_operation);
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

# **RoadWaybillsAPI_patchRoadWaybillLineAsync**
```c
// Patch a road waybill line
//
// Partially updates a line on a road waybill using a JSON Patch document.
//
empty_envelope_t* RoadWaybillsAPI_patchRoadWaybillLineAsync(apiClient_t *apiClient, char *tenantId, char *waybillId, char *lineId, char *api_version, char *x_api_version, list_t *patch_operation);
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

# **RoadWaybillsAPI_removeRoadWaybillLineAsync**
```c
// Remove a road waybill line
//
// Removes a line from a road waybill.
//
empty_envelope_t* RoadWaybillsAPI_removeRoadWaybillLineAsync(apiClient_t *apiClient, char *tenantId, char *waybillId, char *lineId, char *api_version, char *x_api_version);
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

# **RoadWaybillsAPI_updateRoadWaybillAsync**
```c
// Update a road waybill
//
// Updates an existing road waybill.
//
empty_envelope_t* RoadWaybillsAPI_updateRoadWaybillAsync(apiClient_t *apiClient, char *tenantId, char *waybillId, char *api_version, char *x_api_version, road_waybill_update_dto_t *road_waybill_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**waybillId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**road_waybill_update_dto** | **[road_waybill_update_dto_t](road_waybill_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **RoadWaybillsAPI_updateRoadWaybillLineAsync**
```c
// Update a road waybill line
//
// Updates an existing line on a road waybill.
//
empty_envelope_t* RoadWaybillsAPI_updateRoadWaybillLineAsync(apiClient_t *apiClient, char *tenantId, char *waybillId, char *lineId, char *api_version, char *x_api_version, waybill_line_update_dto_t *waybill_line_update_dto);
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

