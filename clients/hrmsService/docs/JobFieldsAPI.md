# JobFieldsAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**JobFieldsAPI_createJobFieldAsync**](JobFieldsAPI.md#JobFieldsAPI_createJobFieldAsync) | **POST** /api/v2/HrmsService/JobFields | Create a job field
[**JobFieldsAPI_deleteJobFieldAsync**](JobFieldsAPI.md#JobFieldsAPI_deleteJobFieldAsync) | **DELETE** /api/v2/HrmsService/JobFields/{jobFieldId} | Delete a job field
[**JobFieldsAPI_getJobFieldByIdAsync**](JobFieldsAPI.md#JobFieldsAPI_getJobFieldByIdAsync) | **GET** /api/v2/HrmsService/JobFields/{jobFieldId} | Get job field by ID
[**JobFieldsAPI_getJobFieldsAsync**](JobFieldsAPI.md#JobFieldsAPI_getJobFieldsAsync) | **GET** /api/v2/HrmsService/JobFields | Get job fields
[**JobFieldsAPI_getJobFieldsCountAsync**](JobFieldsAPI.md#JobFieldsAPI_getJobFieldsCountAsync) | **GET** /api/v2/HrmsService/JobFields/Count | Count job fields
[**JobFieldsAPI_patchJobFieldAsync**](JobFieldsAPI.md#JobFieldsAPI_patchJobFieldAsync) | **PATCH** /api/v2/HrmsService/JobFields/{jobFieldId} | Patch a job field
[**JobFieldsAPI_updateJobFieldAsync**](JobFieldsAPI.md#JobFieldsAPI_updateJobFieldAsync) | **PUT** /api/v2/HrmsService/JobFields/{jobFieldId} | Update a job field


# **JobFieldsAPI_createJobFieldAsync**
```c
// Create a job field
//
// Creates a new job field (role domain) for the specified tenant.
//
empty_envelope_t* JobFieldsAPI_createJobFieldAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, job_field_create_dto_t *job_field_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**job_field_create_dto** | **[job_field_create_dto_t](job_field_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **JobFieldsAPI_deleteJobFieldAsync**
```c
// Delete a job field
//
// Deletes a job field for the specified tenant.
//
empty_envelope_t* JobFieldsAPI_deleteJobFieldAsync(apiClient_t *apiClient, char *tenantId, char *jobFieldId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**jobFieldId** | **char \*** |  | 
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

# **JobFieldsAPI_getJobFieldByIdAsync**
```c
// Get job field by ID
//
// Retrieves a specific job field by its identifier.
//
job_field_dto_envelope_t* JobFieldsAPI_getJobFieldByIdAsync(apiClient_t *apiClient, char *tenantId, char *jobFieldId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**jobFieldId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[job_field_dto_envelope_t](job_field_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **JobFieldsAPI_getJobFieldsAsync**
```c
// Get job fields
//
// Retrieves job field (role domain) taxonomy entries for the specified tenant.
//
job_field_dto_list_envelope_t* JobFieldsAPI_getJobFieldsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, job_field_dto_collection_query_parameters_t *job_field_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**job_field_dto_collection_query_parameters** | **[job_field_dto_collection_query_parameters_t](job_field_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[job_field_dto_list_envelope_t](job_field_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **JobFieldsAPI_getJobFieldsCountAsync**
```c
// Count job fields
//
// Counts job field taxonomy entries for the specified tenant.
//
int32_envelope_t* JobFieldsAPI_getJobFieldsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, job_field_dto_collection_query_parameters_t *job_field_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**job_field_dto_collection_query_parameters** | **[job_field_dto_collection_query_parameters_t](job_field_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **JobFieldsAPI_patchJobFieldAsync**
```c
// Patch a job field
//
// Partially updates an existing job field for the specified tenant.
//
empty_envelope_t* JobFieldsAPI_patchJobFieldAsync(apiClient_t *apiClient, char *tenantId, char *jobFieldId, char *api_version, char *x_api_version, list_t *patch_operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**jobFieldId** | **char \*** |  | 
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

# **JobFieldsAPI_updateJobFieldAsync**
```c
// Update a job field
//
// Updates an existing job field for the specified tenant.
//
empty_envelope_t* JobFieldsAPI_updateJobFieldAsync(apiClient_t *apiClient, char *tenantId, char *jobFieldId, char *api_version, char *x_api_version, job_field_update_dto_t *job_field_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**jobFieldId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**job_field_update_dto** | **[job_field_update_dto_t](job_field_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

