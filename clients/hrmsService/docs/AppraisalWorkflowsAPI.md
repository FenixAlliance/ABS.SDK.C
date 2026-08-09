# AppraisalWorkflowsAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**AppraisalWorkflowsAPI_createAppraisalWorkflowAsync**](AppraisalWorkflowsAPI.md#AppraisalWorkflowsAPI_createAppraisalWorkflowAsync) | **POST** /api/v2/HrmsService/AppraisalWorkflows | Create an appraisal workflow
[**AppraisalWorkflowsAPI_deleteAppraisalWorkflowAsync**](AppraisalWorkflowsAPI.md#AppraisalWorkflowsAPI_deleteAppraisalWorkflowAsync) | **DELETE** /api/v2/HrmsService/AppraisalWorkflows/{workflowId} | Delete an appraisal workflow
[**AppraisalWorkflowsAPI_getAppraisalWorkflowByIdAsync**](AppraisalWorkflowsAPI.md#AppraisalWorkflowsAPI_getAppraisalWorkflowByIdAsync) | **GET** /api/v2/HrmsService/AppraisalWorkflows/{workflowId} | Get appraisal workflow by ID
[**AppraisalWorkflowsAPI_getAppraisalWorkflowsAsync**](AppraisalWorkflowsAPI.md#AppraisalWorkflowsAPI_getAppraisalWorkflowsAsync) | **GET** /api/v2/HrmsService/AppraisalWorkflows | Get appraisal workflows
[**AppraisalWorkflowsAPI_getAppraisalWorkflowsCountAsync**](AppraisalWorkflowsAPI.md#AppraisalWorkflowsAPI_getAppraisalWorkflowsCountAsync) | **GET** /api/v2/HrmsService/AppraisalWorkflows/Count | Count appraisal workflows
[**AppraisalWorkflowsAPI_updateAppraisalWorkflowAsync**](AppraisalWorkflowsAPI.md#AppraisalWorkflowsAPI_updateAppraisalWorkflowAsync) | **PUT** /api/v2/HrmsService/AppraisalWorkflows/{workflowId} | Update an appraisal workflow


# **AppraisalWorkflowsAPI_createAppraisalWorkflowAsync**
```c
// Create an appraisal workflow
//
// Creates a new appraisal workflow for the specified tenant.
//
empty_envelope_t* AppraisalWorkflowsAPI_createAppraisalWorkflowAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, appraisal_workflow_create_dto_t *appraisal_workflow_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**appraisal_workflow_create_dto** | **[appraisal_workflow_create_dto_t](appraisal_workflow_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AppraisalWorkflowsAPI_deleteAppraisalWorkflowAsync**
```c
// Delete an appraisal workflow
//
// Deletes an appraisal workflow for the specified tenant.
//
empty_envelope_t* AppraisalWorkflowsAPI_deleteAppraisalWorkflowAsync(apiClient_t *apiClient, char *tenantId, char *workflowId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**workflowId** | **char \*** |  | 
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

# **AppraisalWorkflowsAPI_getAppraisalWorkflowByIdAsync**
```c
// Get appraisal workflow by ID
//
// Retrieves a specific appraisal workflow by its identifier.
//
appraisal_workflow_dto_envelope_t* AppraisalWorkflowsAPI_getAppraisalWorkflowByIdAsync(apiClient_t *apiClient, char *tenantId, char *workflowId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**workflowId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[appraisal_workflow_dto_envelope_t](appraisal_workflow_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AppraisalWorkflowsAPI_getAppraisalWorkflowsAsync**
```c
// Get appraisal workflows
//
// Retrieves appraisal workflows for the specified tenant.
//
appraisal_workflow_dto_list_envelope_t* AppraisalWorkflowsAPI_getAppraisalWorkflowsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, appraisal_workflow_dto_collection_query_parameters_t *appraisal_workflow_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**appraisal_workflow_dto_collection_query_parameters** | **[appraisal_workflow_dto_collection_query_parameters_t](appraisal_workflow_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[appraisal_workflow_dto_list_envelope_t](appraisal_workflow_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AppraisalWorkflowsAPI_getAppraisalWorkflowsCountAsync**
```c
// Count appraisal workflows
//
// Counts appraisal workflows for the specified tenant.
//
int32_envelope_t* AppraisalWorkflowsAPI_getAppraisalWorkflowsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, appraisal_workflow_dto_collection_query_parameters_t *appraisal_workflow_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**appraisal_workflow_dto_collection_query_parameters** | **[appraisal_workflow_dto_collection_query_parameters_t](appraisal_workflow_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AppraisalWorkflowsAPI_updateAppraisalWorkflowAsync**
```c
// Update an appraisal workflow
//
// Updates an existing appraisal workflow for the specified tenant.
//
empty_envelope_t* AppraisalWorkflowsAPI_updateAppraisalWorkflowAsync(apiClient_t *apiClient, char *tenantId, char *workflowId, char *api_version, char *x_api_version, appraisal_workflow_update_dto_t *appraisal_workflow_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**workflowId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**appraisal_workflow_update_dto** | **[appraisal_workflow_update_dto_t](appraisal_workflow_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

