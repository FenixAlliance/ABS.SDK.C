# ProductionPlansAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ProductionPlansAPI_createProductionPlanAsync**](ProductionPlansAPI.md#ProductionPlansAPI_createProductionPlanAsync) | **POST** /api/v2/ManufacturingService/ProductionPlans | Create a new production plan
[**ProductionPlansAPI_deleteProductionPlanAsync**](ProductionPlansAPI.md#ProductionPlansAPI_deleteProductionPlanAsync) | **DELETE** /api/v2/ManufacturingService/ProductionPlans/{id} | Delete a production plan
[**ProductionPlansAPI_getProductionPlanByIdAsync**](ProductionPlansAPI.md#ProductionPlansAPI_getProductionPlanByIdAsync) | **GET** /api/v2/ManufacturingService/ProductionPlans/{id} | Get production plan by ID
[**ProductionPlansAPI_getProductionPlansAsync**](ProductionPlansAPI.md#ProductionPlansAPI_getProductionPlansAsync) | **GET** /api/v2/ManufacturingService/ProductionPlans | Get all production plans
[**ProductionPlansAPI_getProductionPlansCountAsync**](ProductionPlansAPI.md#ProductionPlansAPI_getProductionPlansCountAsync) | **GET** /api/v2/ManufacturingService/ProductionPlans/Count | Get production plans count
[**ProductionPlansAPI_patchProductionPlanAsync**](ProductionPlansAPI.md#ProductionPlansAPI_patchProductionPlanAsync) | **PATCH** /api/v2/ManufacturingService/ProductionPlans/{id} | Patch a production plan
[**ProductionPlansAPI_updateProductionPlanAsync**](ProductionPlansAPI.md#ProductionPlansAPI_updateProductionPlanAsync) | **PUT** /api/v2/ManufacturingService/ProductionPlans/{id} | Update a production plan


# **ProductionPlansAPI_createProductionPlanAsync**
```c
// Create a new production plan
//
// Creates a new production plan for the specified tenant.
//
void ProductionPlansAPI_createProductionPlanAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, production_plan_create_dto_t *production_plan_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**production_plan_create_dto** | **[production_plan_create_dto_t](production_plan_create_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ProductionPlansAPI_deleteProductionPlanAsync**
```c
// Delete a production plan
//
// Deletes a production plan for the specified tenant.
//
void ProductionPlansAPI_deleteProductionPlanAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**id** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ProductionPlansAPI_getProductionPlanByIdAsync**
```c
// Get production plan by ID
//
// Retrieves a specific production plan by its identifier.
//
production_plan_dto_t* ProductionPlansAPI_getProductionPlanByIdAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**id** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[production_plan_dto_t](production_plan_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ProductionPlansAPI_getProductionPlansAsync**
```c
// Get all production plans
//
// Retrieves all production plans for the specified tenant.
//
production_plan_dto_list_envelope_t* ProductionPlansAPI_getProductionPlansAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, production_plan_dto_collection_query_parameters_t *production_plan_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**production_plan_dto_collection_query_parameters** | **[production_plan_dto_collection_query_parameters_t](production_plan_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[production_plan_dto_list_envelope_t](production_plan_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ProductionPlansAPI_getProductionPlansCountAsync**
```c
// Get production plans count
//
// Returns the count of production plans for the specified tenant.
//
int32_envelope_t* ProductionPlansAPI_getProductionPlansCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, production_plan_dto_collection_query_parameters_t *production_plan_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**production_plan_dto_collection_query_parameters** | **[production_plan_dto_collection_query_parameters_t](production_plan_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ProductionPlansAPI_patchProductionPlanAsync**
```c
// Patch a production plan
//
// Patch a production plan
//
empty_envelope_t* ProductionPlansAPI_patchProductionPlanAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, list_t *patch_operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**id** | **char \*** |  | 
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

# **ProductionPlansAPI_updateProductionPlanAsync**
```c
// Update a production plan
//
// Updates an existing production plan for the specified tenant.
//
void ProductionPlansAPI_updateProductionPlanAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, production_plan_update_dto_t *production_plan_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**id** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**production_plan_update_dto** | **[production_plan_update_dto_t](production_plan_update_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

