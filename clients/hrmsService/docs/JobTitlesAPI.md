# JobTitlesAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**JobTitlesAPI_createJobTitleAsync**](JobTitlesAPI.md#JobTitlesAPI_createJobTitleAsync) | **POST** /api/v2/HrmsService/JobTitles | Create a job title
[**JobTitlesAPI_deleteJobTitleAsync**](JobTitlesAPI.md#JobTitlesAPI_deleteJobTitleAsync) | **DELETE** /api/v2/HrmsService/JobTitles/{jobTitleId} | Delete a job title
[**JobTitlesAPI_getJobTitleByIdAsync**](JobTitlesAPI.md#JobTitlesAPI_getJobTitleByIdAsync) | **GET** /api/v2/HrmsService/JobTitles/{jobTitleId} | Get job title by ID
[**JobTitlesAPI_getJobTitlesAsync**](JobTitlesAPI.md#JobTitlesAPI_getJobTitlesAsync) | **GET** /api/v2/HrmsService/JobTitles | Get job titles
[**JobTitlesAPI_getJobTitlesCountAsync**](JobTitlesAPI.md#JobTitlesAPI_getJobTitlesCountAsync) | **GET** /api/v2/HrmsService/JobTitles/Count | Count job titles
[**JobTitlesAPI_patchJobTitleAsync**](JobTitlesAPI.md#JobTitlesAPI_patchJobTitleAsync) | **PATCH** /api/v2/HrmsService/JobTitles/{jobTitleId} | Patch a job title
[**JobTitlesAPI_updateJobTitleAsync**](JobTitlesAPI.md#JobTitlesAPI_updateJobTitleAsync) | **PUT** /api/v2/HrmsService/JobTitles/{jobTitleId} | Update a job title


# **JobTitlesAPI_createJobTitleAsync**
```c
// Create a job title
//
// Creates a new job title for the specified tenant.
//
empty_envelope_t* JobTitlesAPI_createJobTitleAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, job_title_create_dto_t *job_title_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**job_title_create_dto** | **[job_title_create_dto_t](job_title_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **JobTitlesAPI_deleteJobTitleAsync**
```c
// Delete a job title
//
// Deletes a job title for the specified tenant.
//
empty_envelope_t* JobTitlesAPI_deleteJobTitleAsync(apiClient_t *apiClient, char *tenantId, char *jobTitleId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**jobTitleId** | **char \*** |  | 
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

# **JobTitlesAPI_getJobTitleByIdAsync**
```c
// Get job title by ID
//
// Retrieves a specific job title by its identifier.
//
job_title_dto_envelope_t* JobTitlesAPI_getJobTitleByIdAsync(apiClient_t *apiClient, char *tenantId, char *jobTitleId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**jobTitleId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[job_title_dto_envelope_t](job_title_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **JobTitlesAPI_getJobTitlesAsync**
```c
// Get job titles
//
// Retrieves job titles for the specified tenant.
//
job_title_dto_list_envelope_t* JobTitlesAPI_getJobTitlesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[job_title_dto_list_envelope_t](job_title_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **JobTitlesAPI_getJobTitlesCountAsync**
```c
// Count job titles
//
// Counts job titles for the specified tenant.
//
int32_envelope_t* JobTitlesAPI_getJobTitlesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **JobTitlesAPI_patchJobTitleAsync**
```c
// Patch a job title
//
// Partially updates an existing job title for the specified tenant.
//
empty_envelope_t* JobTitlesAPI_patchJobTitleAsync(apiClient_t *apiClient, char *tenantId, char *jobTitleId, char *api_version, char *x_api_version, list_t *operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**jobTitleId** | **char \*** |  | 
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

# **JobTitlesAPI_updateJobTitleAsync**
```c
// Update a job title
//
// Updates an existing job title for the specified tenant.
//
empty_envelope_t* JobTitlesAPI_updateJobTitleAsync(apiClient_t *apiClient, char *tenantId, char *jobTitleId, char *api_version, char *x_api_version, job_title_update_dto_t *job_title_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**jobTitleId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**job_title_update_dto** | **[job_title_update_dto_t](job_title_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

