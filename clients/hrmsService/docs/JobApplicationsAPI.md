# JobApplicationsAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**JobApplicationsAPI_changeJobApplicationStatusAsync**](JobApplicationsAPI.md#JobApplicationsAPI_changeJobApplicationStatusAsync) | **POST** /api/v2/HrmsService/JobApplications/{jobApplicationId}/Status | Change job application status
[**JobApplicationsAPI_createJobApplicationAsync**](JobApplicationsAPI.md#JobApplicationsAPI_createJobApplicationAsync) | **POST** /api/v2/HrmsService/JobApplications | Create a job application
[**JobApplicationsAPI_deleteJobApplicationAsync**](JobApplicationsAPI.md#JobApplicationsAPI_deleteJobApplicationAsync) | **DELETE** /api/v2/HrmsService/JobApplications/{jobApplicationId} | Delete a job application
[**JobApplicationsAPI_getJobApplicationByIdAsync**](JobApplicationsAPI.md#JobApplicationsAPI_getJobApplicationByIdAsync) | **GET** /api/v2/HrmsService/JobApplications/{jobApplicationId} | Get job application by ID
[**JobApplicationsAPI_getJobApplicationsAsync**](JobApplicationsAPI.md#JobApplicationsAPI_getJobApplicationsAsync) | **GET** /api/v2/HrmsService/JobApplications | Get job applications
[**JobApplicationsAPI_getJobApplicationsCountAsync**](JobApplicationsAPI.md#JobApplicationsAPI_getJobApplicationsCountAsync) | **GET** /api/v2/HrmsService/JobApplications/Count | Count job applications
[**JobApplicationsAPI_patchJobApplicationAsync**](JobApplicationsAPI.md#JobApplicationsAPI_patchJobApplicationAsync) | **PATCH** /api/v2/HrmsService/JobApplications/{jobApplicationId} | Patch a job application
[**JobApplicationsAPI_updateJobApplicationAsync**](JobApplicationsAPI.md#JobApplicationsAPI_updateJobApplicationAsync) | **PUT** /api/v2/HrmsService/JobApplications/{jobApplicationId} | Update a job application


# **JobApplicationsAPI_changeJobApplicationStatusAsync**
```c
// Change job application status
//
// Transitions the application to a new funnel status (e.g. UnderReview, Interviewing, Offered, Hired, Rejected). Raises JobApplicationStatusChanged; terminal statuses are immutable.
//
empty_envelope_t* JobApplicationsAPI_changeJobApplicationStatusAsync(apiClient_t *apiClient, char *tenantId, char *jobApplicationId, hrmsservice_changeJobApplicationStatusAsync_status_e status, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**jobApplicationId** | **char \*** |  | 
**status** | **hrmsservice_changeJobApplicationStatusAsync_status_e** |  | 
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

# **JobApplicationsAPI_createJobApplicationAsync**
```c
// Create a job application
//
// Records a candidate's application against one of the tenant's job offers. The targeted job offer must belong to the tenant.
//
empty_envelope_t* JobApplicationsAPI_createJobApplicationAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, job_offer_application_create_dto_t *job_offer_application_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**job_offer_application_create_dto** | **[job_offer_application_create_dto_t](job_offer_application_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **JobApplicationsAPI_deleteJobApplicationAsync**
```c
// Delete a job application
//
// Removes an application submitted against one of the tenant's job offers.
//
empty_envelope_t* JobApplicationsAPI_deleteJobApplicationAsync(apiClient_t *apiClient, char *tenantId, char *jobApplicationId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**jobApplicationId** | **char \*** |  | 
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

# **JobApplicationsAPI_getJobApplicationByIdAsync**
```c
// Get job application by ID
//
// Retrieves a specific application submitted against one of the tenant's job offers.
//
job_offer_application_dto_envelope_t* JobApplicationsAPI_getJobApplicationByIdAsync(apiClient_t *apiClient, char *tenantId, char *jobApplicationId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**jobApplicationId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[job_offer_application_dto_envelope_t](job_offer_application_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **JobApplicationsAPI_getJobApplicationsAsync**
```c
// Get job applications
//
// Retrieves applications submitted against the tenant's job offers. Filter with `$filter=JobOfferId eq '...'` or `JobApplicantProfileId eq '...'`.
//
job_offer_application_dto_list_envelope_t* JobApplicationsAPI_getJobApplicationsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[job_offer_application_dto_list_envelope_t](job_offer_application_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **JobApplicationsAPI_getJobApplicationsCountAsync**
```c
// Count job applications
//
// Counts applications submitted against the tenant's job offers.
//
int32_envelope_t* JobApplicationsAPI_getJobApplicationsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **JobApplicationsAPI_patchJobApplicationAsync**
```c
// Patch a job application
//
// Partially updates an existing application submitted against one of the tenant's job offers.
//
empty_envelope_t* JobApplicationsAPI_patchJobApplicationAsync(apiClient_t *apiClient, char *tenantId, char *jobApplicationId, char *api_version, char *x_api_version, list_t *operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**jobApplicationId** | **char \*** |  | 
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

# **JobApplicationsAPI_updateJobApplicationAsync**
```c
// Update a job application
//
// Updates an existing application submitted against one of the tenant's job offers.
//
empty_envelope_t* JobApplicationsAPI_updateJobApplicationAsync(apiClient_t *apiClient, char *tenantId, char *jobApplicationId, char *api_version, char *x_api_version, job_offer_application_update_dto_t *job_offer_application_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**jobApplicationId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**job_offer_application_update_dto** | **[job_offer_application_update_dto_t](job_offer_application_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

