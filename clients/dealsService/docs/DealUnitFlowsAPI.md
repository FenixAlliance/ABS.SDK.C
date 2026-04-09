# DealUnitFlowsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**DealUnitFlowsAPI_createDealUnitFlowAsync**](DealUnitFlowsAPI.md#DealUnitFlowsAPI_createDealUnitFlowAsync) | **POST** /api/v2/DealsService/DealUnitFlows | Create a deal unit flow
[**DealUnitFlowsAPI_createDealUnitFlowStageAsync**](DealUnitFlowsAPI.md#DealUnitFlowsAPI_createDealUnitFlowStageAsync) | **POST** /api/v2/DealsService/DealUnitFlows/{dealUnitFlowId}/Stages | Create a deal unit flow stage
[**DealUnitFlowsAPI_deleteDealUnitFlowAsync**](DealUnitFlowsAPI.md#DealUnitFlowsAPI_deleteDealUnitFlowAsync) | **DELETE** /api/v2/DealsService/DealUnitFlows/{dealUnitFlowId} | Delete a deal unit flow
[**DealUnitFlowsAPI_deleteDealUnitFlowStageAsync**](DealUnitFlowsAPI.md#DealUnitFlowsAPI_deleteDealUnitFlowStageAsync) | **DELETE** /api/v2/DealsService/DealUnitFlows/{dealUnitFlowId}/Stages/{dealUnitFlowStageId} | Delete a deal unit flow stage
[**DealUnitFlowsAPI_getDealUnitFlowAsync**](DealUnitFlowsAPI.md#DealUnitFlowsAPI_getDealUnitFlowAsync) | **GET** /api/v2/DealsService/DealUnitFlows/{dealUnitFlowId} | Get deal unit flow by ID
[**DealUnitFlowsAPI_getDealUnitFlowStageAsync**](DealUnitFlowsAPI.md#DealUnitFlowsAPI_getDealUnitFlowStageAsync) | **GET** /api/v2/DealsService/DealUnitFlows/{dealUnitFlowId}/Stages/{dealUnitFlowStageId} | Get a deal unit flow stage by ID
[**DealUnitFlowsAPI_getDealUnitFlowStagesAsync**](DealUnitFlowsAPI.md#DealUnitFlowsAPI_getDealUnitFlowStagesAsync) | **GET** /api/v2/DealsService/DealUnitFlows/{dealUnitFlowId}/Stages | Get stages for a deal unit flow
[**DealUnitFlowsAPI_getDealUnitFlowStagesCountAsync**](DealUnitFlowsAPI.md#DealUnitFlowsAPI_getDealUnitFlowStagesCountAsync) | **GET** /api/v2/DealsService/DealUnitFlows/{dealUnitFlowId}/Stages/Count | Get stages count for a deal unit flow
[**DealUnitFlowsAPI_getDealUnitFlowsAsync**](DealUnitFlowsAPI.md#DealUnitFlowsAPI_getDealUnitFlowsAsync) | **GET** /api/v2/DealsService/DealUnitFlows | Get deal unit flows
[**DealUnitFlowsAPI_getDealUnitFlowsCountAsync**](DealUnitFlowsAPI.md#DealUnitFlowsAPI_getDealUnitFlowsCountAsync) | **GET** /api/v2/DealsService/DealUnitFlows/Count | Get deal unit flows count
[**DealUnitFlowsAPI_updateDealUnitFlowAsync**](DealUnitFlowsAPI.md#DealUnitFlowsAPI_updateDealUnitFlowAsync) | **PUT** /api/v2/DealsService/DealUnitFlows/{dealUnitFlowId} | Update a deal unit flow
[**DealUnitFlowsAPI_updateDealUnitFlowStageAsync**](DealUnitFlowsAPI.md#DealUnitFlowsAPI_updateDealUnitFlowStageAsync) | **PUT** /api/v2/DealsService/DealUnitFlows/{dealUnitFlowId}/Stages/{dealUnitFlowStageId} | Update a deal unit flow stage


# **DealUnitFlowsAPI_createDealUnitFlowAsync**
```c
// Create a deal unit flow
//
// Creates a new deal unit flow for the specified tenant.
//
empty_envelope_t* DealUnitFlowsAPI_createDealUnitFlowAsync(apiClient_t *apiClient, char *tenantId, deal_unit_flow_create_dto_t *deal_unit_flow_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**deal_unit_flow_create_dto** | **[deal_unit_flow_create_dto_t](deal_unit_flow_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DealUnitFlowsAPI_createDealUnitFlowStageAsync**
```c
// Create a deal unit flow stage
//
// Creates a new stage within a specific deal unit flow.
//
empty_envelope_t* DealUnitFlowsAPI_createDealUnitFlowStageAsync(apiClient_t *apiClient, char *tenantId, char *dealUnitFlowId, deal_unit_flow_stage_create_dto_t *deal_unit_flow_stage_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**dealUnitFlowId** | **char \*** |  | 
**deal_unit_flow_stage_create_dto** | **[deal_unit_flow_stage_create_dto_t](deal_unit_flow_stage_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DealUnitFlowsAPI_deleteDealUnitFlowAsync**
```c
// Delete a deal unit flow
//
// Deletes an existing deal unit flow by its unique identifier.
//
empty_envelope_t* DealUnitFlowsAPI_deleteDealUnitFlowAsync(apiClient_t *apiClient, char *tenantId, char *dealUnitFlowId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**dealUnitFlowId** | **char \*** |  | 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DealUnitFlowsAPI_deleteDealUnitFlowStageAsync**
```c
// Delete a deal unit flow stage
//
// Deletes an existing stage from a specific deal unit flow.
//
empty_envelope_t* DealUnitFlowsAPI_deleteDealUnitFlowStageAsync(apiClient_t *apiClient, char *tenantId, char *dealUnitFlowId, char *dealUnitFlowStageId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**dealUnitFlowId** | **char \*** |  | 
**dealUnitFlowStageId** | **char \*** |  | 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DealUnitFlowsAPI_getDealUnitFlowAsync**
```c
// Get deal unit flow by ID
//
// Retrieves a single deal unit flow by its unique identifier.
//
deal_unit_flow_dto_envelope_t* DealUnitFlowsAPI_getDealUnitFlowAsync(apiClient_t *apiClient, char *tenantId, char *dealUnitFlowId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**dealUnitFlowId** | **char \*** |  | 

### Return type

[deal_unit_flow_dto_envelope_t](deal_unit_flow_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DealUnitFlowsAPI_getDealUnitFlowStageAsync**
```c
// Get a deal unit flow stage by ID
//
// Retrieves a single stage for a specific deal unit flow by its unique identifier.
//
deal_unit_flow_stage_dto_envelope_t* DealUnitFlowsAPI_getDealUnitFlowStageAsync(apiClient_t *apiClient, char *tenantId, char *dealUnitFlowId, char *dealUnitFlowStageId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**dealUnitFlowId** | **char \*** |  | 
**dealUnitFlowStageId** | **char \*** |  | 

### Return type

[deal_unit_flow_stage_dto_envelope_t](deal_unit_flow_stage_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DealUnitFlowsAPI_getDealUnitFlowStagesAsync**
```c
// Get stages for a deal unit flow
//
// Retrieves a list of stages for a specific deal unit flow with OData query support.
//
deal_unit_flow_stage_dto_list_envelope_t* DealUnitFlowsAPI_getDealUnitFlowStagesAsync(apiClient_t *apiClient, char *tenantId, char *dealUnitFlowId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**dealUnitFlowId** | **char \*** |  | 

### Return type

[deal_unit_flow_stage_dto_list_envelope_t](deal_unit_flow_stage_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DealUnitFlowsAPI_getDealUnitFlowStagesCountAsync**
```c
// Get stages count for a deal unit flow
//
// Returns the total count of stages for a specific deal unit flow with OData filter support.
//
int32_envelope_t* DealUnitFlowsAPI_getDealUnitFlowStagesCountAsync(apiClient_t *apiClient, char *tenantId, char *dealUnitFlowId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**dealUnitFlowId** | **char \*** |  | 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DealUnitFlowsAPI_getDealUnitFlowsAsync**
```c
// Get deal unit flows
//
// Retrieves a list of deal unit flows for the specified tenant with OData query support.
//
deal_unit_flow_dto_list_envelope_t* DealUnitFlowsAPI_getDealUnitFlowsAsync(apiClient_t *apiClient, char *tenantId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 

### Return type

[deal_unit_flow_dto_list_envelope_t](deal_unit_flow_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DealUnitFlowsAPI_getDealUnitFlowsCountAsync**
```c
// Get deal unit flows count
//
// Returns the total count of deal unit flows for the specified tenant with OData filter support.
//
int32_envelope_t* DealUnitFlowsAPI_getDealUnitFlowsCountAsync(apiClient_t *apiClient, char *tenantId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DealUnitFlowsAPI_updateDealUnitFlowAsync**
```c
// Update a deal unit flow
//
// Updates an existing deal unit flow by its unique identifier.
//
empty_envelope_t* DealUnitFlowsAPI_updateDealUnitFlowAsync(apiClient_t *apiClient, char *tenantId, char *dealUnitFlowId, deal_unit_flow_update_dto_t *deal_unit_flow_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**dealUnitFlowId** | **char \*** |  | 
**deal_unit_flow_update_dto** | **[deal_unit_flow_update_dto_t](deal_unit_flow_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DealUnitFlowsAPI_updateDealUnitFlowStageAsync**
```c
// Update a deal unit flow stage
//
// Updates an existing stage within a specific deal unit flow.
//
empty_envelope_t* DealUnitFlowsAPI_updateDealUnitFlowStageAsync(apiClient_t *apiClient, char *tenantId, char *dealUnitFlowId, char *dealUnitFlowStageId, deal_unit_flow_stage_update_dto_t *deal_unit_flow_stage_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**dealUnitFlowId** | **char \*** |  | 
**dealUnitFlowStageId** | **char \*** |  | 
**deal_unit_flow_stage_update_dto** | **[deal_unit_flow_stage_update_dto_t](deal_unit_flow_stage_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

