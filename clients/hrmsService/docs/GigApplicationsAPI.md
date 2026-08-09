# GigApplicationsAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**GigApplicationsAPI_acceptGigApplicationAsync**](GigApplicationsAPI.md#GigApplicationsAPI_acceptGigApplicationAsync) | **POST** /api/v2/HrmsService/GigApplications/{gigApplicationId}/Accept | Accept a gig application
[**GigApplicationsAPI_createGigApplicationAsync**](GigApplicationsAPI.md#GigApplicationsAPI_createGigApplicationAsync) | **POST** /api/v2/HrmsService/GigApplications | Create a gig application
[**GigApplicationsAPI_deleteGigApplicationAsync**](GigApplicationsAPI.md#GigApplicationsAPI_deleteGigApplicationAsync) | **DELETE** /api/v2/HrmsService/GigApplications/{gigApplicationId} | Delete a gig application
[**GigApplicationsAPI_getGigApplicationByIdAsync**](GigApplicationsAPI.md#GigApplicationsAPI_getGigApplicationByIdAsync) | **GET** /api/v2/HrmsService/GigApplications/{gigApplicationId} | Get gig application by ID
[**GigApplicationsAPI_getGigApplicationsAsync**](GigApplicationsAPI.md#GigApplicationsAPI_getGigApplicationsAsync) | **GET** /api/v2/HrmsService/GigApplications | Get gig applications
[**GigApplicationsAPI_getGigApplicationsCountAsync**](GigApplicationsAPI.md#GigApplicationsAPI_getGigApplicationsCountAsync) | **GET** /api/v2/HrmsService/GigApplications/Count | Count gig applications
[**GigApplicationsAPI_patchGigApplicationAsync**](GigApplicationsAPI.md#GigApplicationsAPI_patchGigApplicationAsync) | **PATCH** /api/v2/HrmsService/GigApplications/{gigApplicationId} | Patch a gig application
[**GigApplicationsAPI_updateGigApplicationAsync**](GigApplicationsAPI.md#GigApplicationsAPI_updateGigApplicationAsync) | **PUT** /api/v2/HrmsService/GigApplications/{gigApplicationId} | Update a gig application


# **GigApplicationsAPI_acceptGigApplicationAsync**
```c
// Accept a gig application
//
// Accepts the candidate's gig proposal, forming an engagement (raises GigApplicationAccepted). A proposal cannot be accepted twice.
//
empty_envelope_t* GigApplicationsAPI_acceptGigApplicationAsync(apiClient_t *apiClient, char *tenantId, char *gigApplicationId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**gigApplicationId** | **char \*** |  | 
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

# **GigApplicationsAPI_createGigApplicationAsync**
```c
// Create a gig application
//
// Records a candidate's proposal against one of the tenant's gigs. The targeted gig must belong to the tenant.
//
empty_envelope_t* GigApplicationsAPI_createGigApplicationAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, gig_application_create_dto_t *gig_application_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**gig_application_create_dto** | **[gig_application_create_dto_t](gig_application_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **GigApplicationsAPI_deleteGigApplicationAsync**
```c
// Delete a gig application
//
// Removes a proposal submitted against one of the tenant's gigs.
//
empty_envelope_t* GigApplicationsAPI_deleteGigApplicationAsync(apiClient_t *apiClient, char *tenantId, char *gigApplicationId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**gigApplicationId** | **char \*** |  | 
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

# **GigApplicationsAPI_getGigApplicationByIdAsync**
```c
// Get gig application by ID
//
// Retrieves a specific proposal submitted against one of the tenant's gigs.
//
gig_application_dto_envelope_t* GigApplicationsAPI_getGigApplicationByIdAsync(apiClient_t *apiClient, char *tenantId, char *gigApplicationId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**gigApplicationId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[gig_application_dto_envelope_t](gig_application_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **GigApplicationsAPI_getGigApplicationsAsync**
```c
// Get gig applications
//
// Retrieves proposals submitted against the tenant's gigs. Filter with `$filter=GigId eq '...'` or `JobApplicantProfileId eq '...'`.
//
gig_application_dto_list_envelope_t* GigApplicationsAPI_getGigApplicationsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, gig_application_dto_collection_query_parameters_t *gig_application_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**gig_application_dto_collection_query_parameters** | **[gig_application_dto_collection_query_parameters_t](gig_application_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[gig_application_dto_list_envelope_t](gig_application_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **GigApplicationsAPI_getGigApplicationsCountAsync**
```c
// Count gig applications
//
// Counts proposals submitted against the tenant's gigs.
//
int32_envelope_t* GigApplicationsAPI_getGigApplicationsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, gig_application_dto_collection_query_parameters_t *gig_application_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**gig_application_dto_collection_query_parameters** | **[gig_application_dto_collection_query_parameters_t](gig_application_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **GigApplicationsAPI_patchGigApplicationAsync**
```c
// Patch a gig application
//
// Partially updates an existing proposal submitted against one of the tenant's gigs.
//
empty_envelope_t* GigApplicationsAPI_patchGigApplicationAsync(apiClient_t *apiClient, char *tenantId, char *gigApplicationId, char *api_version, char *x_api_version, list_t *patch_operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**gigApplicationId** | **char \*** |  | 
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

# **GigApplicationsAPI_updateGigApplicationAsync**
```c
// Update a gig application
//
// Updates an existing proposal submitted against one of the tenant's gigs (e.g. accept it).
//
empty_envelope_t* GigApplicationsAPI_updateGigApplicationAsync(apiClient_t *apiClient, char *tenantId, char *gigApplicationId, char *api_version, char *x_api_version, gig_application_update_dto_t *gig_application_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**gigApplicationId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**gig_application_update_dto** | **[gig_application_update_dto_t](gig_application_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

