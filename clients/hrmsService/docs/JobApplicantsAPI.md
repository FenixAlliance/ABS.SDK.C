# JobApplicantsAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**JobApplicantsAPI_createJobApplicantAsync**](JobApplicantsAPI.md#JobApplicantsAPI_createJobApplicantAsync) | **POST** /api/v2/HrmsService/JobApplicants | Create a job applicant
[**JobApplicantsAPI_deleteJobApplicantAsync**](JobApplicantsAPI.md#JobApplicantsAPI_deleteJobApplicantAsync) | **DELETE** /api/v2/HrmsService/JobApplicants/{jobApplicantId} | Delete a job applicant
[**JobApplicantsAPI_getJobApplicantByIdAsync**](JobApplicantsAPI.md#JobApplicantsAPI_getJobApplicantByIdAsync) | **GET** /api/v2/HrmsService/JobApplicants/{jobApplicantId} | Get job applicant by ID
[**JobApplicantsAPI_getJobApplicantsAsync**](JobApplicantsAPI.md#JobApplicantsAPI_getJobApplicantsAsync) | **GET** /api/v2/HrmsService/JobApplicants | Get job applicants
[**JobApplicantsAPI_getJobApplicantsCountAsync**](JobApplicantsAPI.md#JobApplicantsAPI_getJobApplicantsCountAsync) | **GET** /api/v2/HrmsService/JobApplicants/Count | Count job applicants
[**JobApplicantsAPI_patchJobApplicantAsync**](JobApplicantsAPI.md#JobApplicantsAPI_patchJobApplicantAsync) | **PATCH** /api/v2/HrmsService/JobApplicants/{jobApplicantId} | Patch a job applicant
[**JobApplicantsAPI_updateJobApplicantAsync**](JobApplicantsAPI.md#JobApplicantsAPI_updateJobApplicantAsync) | **PUT** /api/v2/HrmsService/JobApplicants/{jobApplicantId} | Update a job applicant


# **JobApplicantsAPI_createJobApplicantAsync**
```c
// Create a job applicant
//
// Creates a new job applicant (candidate) profile for the specified tenant.
//
empty_envelope_t* JobApplicantsAPI_createJobApplicantAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, job_applicant_profile_create_dto_t *job_applicant_profile_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**job_applicant_profile_create_dto** | **[job_applicant_profile_create_dto_t](job_applicant_profile_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **JobApplicantsAPI_deleteJobApplicantAsync**
```c
// Delete a job applicant
//
// Deletes a job applicant (candidate) profile for the specified tenant.
//
empty_envelope_t* JobApplicantsAPI_deleteJobApplicantAsync(apiClient_t *apiClient, char *tenantId, char *jobApplicantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**jobApplicantId** | **char \*** |  | 
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

# **JobApplicantsAPI_getJobApplicantByIdAsync**
```c
// Get job applicant by ID
//
// Retrieves a specific job applicant (candidate) profile by its identifier.
//
job_applicant_profile_dto_envelope_t* JobApplicantsAPI_getJobApplicantByIdAsync(apiClient_t *apiClient, char *tenantId, char *jobApplicantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**jobApplicantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[job_applicant_profile_dto_envelope_t](job_applicant_profile_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **JobApplicantsAPI_getJobApplicantsAsync**
```c
// Get job applicants
//
// Retrieves job applicant (candidate) profiles for the specified tenant.
//
job_applicant_profile_dto_list_envelope_t* JobApplicantsAPI_getJobApplicantsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, job_applicant_profile_dto_collection_query_parameters_t *job_applicant_profile_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**job_applicant_profile_dto_collection_query_parameters** | **[job_applicant_profile_dto_collection_query_parameters_t](job_applicant_profile_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[job_applicant_profile_dto_list_envelope_t](job_applicant_profile_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **JobApplicantsAPI_getJobApplicantsCountAsync**
```c
// Count job applicants
//
// Counts job applicant profiles for the specified tenant.
//
int32_envelope_t* JobApplicantsAPI_getJobApplicantsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, job_applicant_profile_dto_collection_query_parameters_t *job_applicant_profile_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**job_applicant_profile_dto_collection_query_parameters** | **[job_applicant_profile_dto_collection_query_parameters_t](job_applicant_profile_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **JobApplicantsAPI_patchJobApplicantAsync**
```c
// Patch a job applicant
//
// Partially updates an existing job applicant (candidate) profile for the specified tenant.
//
empty_envelope_t* JobApplicantsAPI_patchJobApplicantAsync(apiClient_t *apiClient, char *tenantId, char *jobApplicantId, char *api_version, char *x_api_version, list_t *patch_operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**jobApplicantId** | **char \*** |  | 
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

# **JobApplicantsAPI_updateJobApplicantAsync**
```c
// Update a job applicant
//
// Updates an existing job applicant (candidate) profile for the specified tenant.
//
empty_envelope_t* JobApplicantsAPI_updateJobApplicantAsync(apiClient_t *apiClient, char *tenantId, char *jobApplicantId, char *api_version, char *x_api_version, job_applicant_profile_update_dto_t *job_applicant_profile_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**jobApplicantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**job_applicant_profile_update_dto** | **[job_applicant_profile_update_dto_t](job_applicant_profile_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

