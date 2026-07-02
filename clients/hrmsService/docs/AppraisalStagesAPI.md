# AppraisalStagesAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**AppraisalStagesAPI_createAppraisalStageAsync**](AppraisalStagesAPI.md#AppraisalStagesAPI_createAppraisalStageAsync) | **POST** /api/v2/HrmsService/AppraisalStages | Create an appraisal stage
[**AppraisalStagesAPI_deleteAppraisalStageAsync**](AppraisalStagesAPI.md#AppraisalStagesAPI_deleteAppraisalStageAsync) | **DELETE** /api/v2/HrmsService/AppraisalStages/{stageId} | Delete an appraisal stage
[**AppraisalStagesAPI_getAppraisalStageByIdAsync**](AppraisalStagesAPI.md#AppraisalStagesAPI_getAppraisalStageByIdAsync) | **GET** /api/v2/HrmsService/AppraisalStages/{stageId} | Get appraisal stage by ID
[**AppraisalStagesAPI_getAppraisalStagesAsync**](AppraisalStagesAPI.md#AppraisalStagesAPI_getAppraisalStagesAsync) | **GET** /api/v2/HrmsService/AppraisalStages | Get appraisal stages
[**AppraisalStagesAPI_getAppraisalStagesCountAsync**](AppraisalStagesAPI.md#AppraisalStagesAPI_getAppraisalStagesCountAsync) | **GET** /api/v2/HrmsService/AppraisalStages/Count | Count appraisal stages
[**AppraisalStagesAPI_updateAppraisalStageAsync**](AppraisalStagesAPI.md#AppraisalStagesAPI_updateAppraisalStageAsync) | **PUT** /api/v2/HrmsService/AppraisalStages/{stageId} | Update an appraisal stage


# **AppraisalStagesAPI_createAppraisalStageAsync**
```c
// Create an appraisal stage
//
// Creates a new appraisal stage for the specified tenant.
//
empty_envelope_t* AppraisalStagesAPI_createAppraisalStageAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, appraisal_stage_create_dto_t *appraisal_stage_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**appraisal_stage_create_dto** | **[appraisal_stage_create_dto_t](appraisal_stage_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AppraisalStagesAPI_deleteAppraisalStageAsync**
```c
// Delete an appraisal stage
//
// Deletes an appraisal stage for the specified tenant.
//
empty_envelope_t* AppraisalStagesAPI_deleteAppraisalStageAsync(apiClient_t *apiClient, char *tenantId, char *stageId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**stageId** | **char \*** |  | 
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

# **AppraisalStagesAPI_getAppraisalStageByIdAsync**
```c
// Get appraisal stage by ID
//
// Retrieves a specific appraisal stage by its identifier.
//
appraisal_stage_dto_envelope_t* AppraisalStagesAPI_getAppraisalStageByIdAsync(apiClient_t *apiClient, char *tenantId, char *stageId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**stageId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[appraisal_stage_dto_envelope_t](appraisal_stage_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AppraisalStagesAPI_getAppraisalStagesAsync**
```c
// Get appraisal stages
//
// Retrieves appraisal stages for the specified tenant.
//
appraisal_stage_dto_list_envelope_t* AppraisalStagesAPI_getAppraisalStagesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[appraisal_stage_dto_list_envelope_t](appraisal_stage_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AppraisalStagesAPI_getAppraisalStagesCountAsync**
```c
// Count appraisal stages
//
// Counts appraisal stages for the specified tenant.
//
int32_envelope_t* AppraisalStagesAPI_getAppraisalStagesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **AppraisalStagesAPI_updateAppraisalStageAsync**
```c
// Update an appraisal stage
//
// Updates an existing appraisal stage for the specified tenant.
//
empty_envelope_t* AppraisalStagesAPI_updateAppraisalStageAsync(apiClient_t *apiClient, char *tenantId, char *stageId, char *api_version, char *x_api_version, appraisal_stage_update_dto_t *appraisal_stage_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**stageId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**appraisal_stage_update_dto** | **[appraisal_stage_update_dto_t](appraisal_stage_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

