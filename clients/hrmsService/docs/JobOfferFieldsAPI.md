# JobOfferFieldsAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**JobOfferFieldsAPI_createJobOfferFieldAsync**](JobOfferFieldsAPI.md#JobOfferFieldsAPI_createJobOfferFieldAsync) | **POST** /api/v2/HrmsService/JobOfferFields | Create a job offer field
[**JobOfferFieldsAPI_deleteJobOfferFieldAsync**](JobOfferFieldsAPI.md#JobOfferFieldsAPI_deleteJobOfferFieldAsync) | **DELETE** /api/v2/HrmsService/JobOfferFields/{jobOfferFieldId} | Delete a job offer field
[**JobOfferFieldsAPI_getJobOfferFieldByIdAsync**](JobOfferFieldsAPI.md#JobOfferFieldsAPI_getJobOfferFieldByIdAsync) | **GET** /api/v2/HrmsService/JobOfferFields/{jobOfferFieldId} | Get job offer field by ID
[**JobOfferFieldsAPI_getJobOfferFieldsAsync**](JobOfferFieldsAPI.md#JobOfferFieldsAPI_getJobOfferFieldsAsync) | **GET** /api/v2/HrmsService/JobOfferFields | Get job offer fields
[**JobOfferFieldsAPI_getJobOfferFieldsCountAsync**](JobOfferFieldsAPI.md#JobOfferFieldsAPI_getJobOfferFieldsCountAsync) | **GET** /api/v2/HrmsService/JobOfferFields/Count | Count job offer fields
[**JobOfferFieldsAPI_patchJobOfferFieldAsync**](JobOfferFieldsAPI.md#JobOfferFieldsAPI_patchJobOfferFieldAsync) | **PATCH** /api/v2/HrmsService/JobOfferFields/{jobOfferFieldId} | Patch a job offer field
[**JobOfferFieldsAPI_updateJobOfferFieldAsync**](JobOfferFieldsAPI.md#JobOfferFieldsAPI_updateJobOfferFieldAsync) | **PUT** /api/v2/HrmsService/JobOfferFields/{jobOfferFieldId} | Update a job offer field


# **JobOfferFieldsAPI_createJobOfferFieldAsync**
```c
// Create a job offer field
//
// Links a job field to a job offer for the specified tenant.
//
empty_envelope_t* JobOfferFieldsAPI_createJobOfferFieldAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, job_offer_field_record_create_dto_t *job_offer_field_record_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**job_offer_field_record_create_dto** | **[job_offer_field_record_create_dto_t](job_offer_field_record_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **JobOfferFieldsAPI_deleteJobOfferFieldAsync**
```c
// Delete a job offer field
//
// Removes a job-offer field link record for the specified tenant.
//
empty_envelope_t* JobOfferFieldsAPI_deleteJobOfferFieldAsync(apiClient_t *apiClient, char *tenantId, char *jobOfferFieldId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**jobOfferFieldId** | **char \*** |  | 
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

# **JobOfferFieldsAPI_getJobOfferFieldByIdAsync**
```c
// Get job offer field by ID
//
// Retrieves a specific job-offer field link record by its identifier.
//
job_offer_field_record_dto_envelope_t* JobOfferFieldsAPI_getJobOfferFieldByIdAsync(apiClient_t *apiClient, char *tenantId, char *jobOfferFieldId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**jobOfferFieldId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[job_offer_field_record_dto_envelope_t](job_offer_field_record_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **JobOfferFieldsAPI_getJobOfferFieldsAsync**
```c
// Get job offer fields
//
// Retrieves job-offer field link records for the tenant. Filter with `$filter=JobOfferId eq '...'` or `JobFieldId eq '...'`.
//
job_offer_field_record_dto_list_envelope_t* JobOfferFieldsAPI_getJobOfferFieldsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[job_offer_field_record_dto_list_envelope_t](job_offer_field_record_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **JobOfferFieldsAPI_getJobOfferFieldsCountAsync**
```c
// Count job offer fields
//
// Counts job-offer field link records for the specified tenant.
//
int32_envelope_t* JobOfferFieldsAPI_getJobOfferFieldsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **JobOfferFieldsAPI_patchJobOfferFieldAsync**
```c
// Patch a job offer field
//
// Partially updates an existing job-offer field link record for the specified tenant.
//
empty_envelope_t* JobOfferFieldsAPI_patchJobOfferFieldAsync(apiClient_t *apiClient, char *tenantId, char *jobOfferFieldId, char *api_version, char *x_api_version, list_t *operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**jobOfferFieldId** | **char \*** |  | 
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

# **JobOfferFieldsAPI_updateJobOfferFieldAsync**
```c
// Update a job offer field
//
// Updates an existing job-offer field link record for the specified tenant.
//
empty_envelope_t* JobOfferFieldsAPI_updateJobOfferFieldAsync(apiClient_t *apiClient, char *tenantId, char *jobOfferFieldId, char *api_version, char *x_api_version, job_offer_field_record_update_dto_t *job_offer_field_record_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**jobOfferFieldId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**job_offer_field_record_update_dto** | **[job_offer_field_record_update_dto_t](job_offer_field_record_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

