# JobOffersAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**JobOffersAPI_closeJobOfferAsync**](JobOffersAPI.md#JobOffersAPI_closeJobOfferAsync) | **POST** /api/v2/HrmsService/JobOffers/{jobOfferId}/Close | Close a job offer
[**JobOffersAPI_createJobOfferAsync**](JobOffersAPI.md#JobOffersAPI_createJobOfferAsync) | **POST** /api/v2/HrmsService/JobOffers | Create a job offer
[**JobOffersAPI_deleteJobOfferAsync**](JobOffersAPI.md#JobOffersAPI_deleteJobOfferAsync) | **DELETE** /api/v2/HrmsService/JobOffers/{jobOfferId} | Delete a job offer
[**JobOffersAPI_fillJobOfferAsync**](JobOffersAPI.md#JobOffersAPI_fillJobOfferAsync) | **POST** /api/v2/HrmsService/JobOffers/{jobOfferId}/Fill | Mark a job offer filled
[**JobOffersAPI_getJobOfferByIdAsync**](JobOffersAPI.md#JobOffersAPI_getJobOfferByIdAsync) | **GET** /api/v2/HrmsService/JobOffers/{jobOfferId} | Get job offer by ID
[**JobOffersAPI_getJobOffersAsync**](JobOffersAPI.md#JobOffersAPI_getJobOffersAsync) | **GET** /api/v2/HrmsService/JobOffers | Get job offers
[**JobOffersAPI_getJobOffersCountAsync**](JobOffersAPI.md#JobOffersAPI_getJobOffersCountAsync) | **GET** /api/v2/HrmsService/JobOffers/Count | Count job offers
[**JobOffersAPI_getPublicJobOfferByIdAsync**](JobOffersAPI.md#JobOffersAPI_getPublicJobOfferByIdAsync) | **GET** /api/v2/HrmsService/JobOffers/Public/{jobOfferId} | Get public job offer by ID
[**JobOffersAPI_getPublicJobOffersAsync**](JobOffersAPI.md#JobOffersAPI_getPublicJobOffersAsync) | **GET** /api/v2/HrmsService/JobOffers/Public | Get public job offers
[**JobOffersAPI_getPublicJobOffersCountAsync**](JobOffersAPI.md#JobOffersAPI_getPublicJobOffersCountAsync) | **GET** /api/v2/HrmsService/JobOffers/Public/Count | Count public job offers
[**JobOffersAPI_patchJobOfferAsync**](JobOffersAPI.md#JobOffersAPI_patchJobOfferAsync) | **PATCH** /api/v2/HrmsService/JobOffers/{jobOfferId} | Patch a job offer
[**JobOffersAPI_publishJobOfferAsync**](JobOffersAPI.md#JobOffersAPI_publishJobOfferAsync) | **POST** /api/v2/HrmsService/JobOffers/{jobOfferId}/Publish | Publish a job offer
[**JobOffersAPI_updateJobOfferAsync**](JobOffersAPI.md#JobOffersAPI_updateJobOfferAsync) | **PUT** /api/v2/HrmsService/JobOffers/{jobOfferId} | Update a job offer


# **JobOffersAPI_closeJobOfferAsync**
```c
// Close a job offer
//
// Closes the job offer without a hire and removes it from the public board (raises JobOfferClosed).
//
empty_envelope_t* JobOffersAPI_closeJobOfferAsync(apiClient_t *apiClient, char *tenantId, char *jobOfferId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**jobOfferId** | **char \*** |  | 
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

# **JobOffersAPI_createJobOfferAsync**
```c
// Create a job offer
//
// Creates a new job offer for the specified tenant.
//
empty_envelope_t* JobOffersAPI_createJobOfferAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, job_offer_create_dto_t *job_offer_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**job_offer_create_dto** | **[job_offer_create_dto_t](job_offer_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **JobOffersAPI_deleteJobOfferAsync**
```c
// Delete a job offer
//
// Deletes a job offer for the specified tenant.
//
empty_envelope_t* JobOffersAPI_deleteJobOfferAsync(apiClient_t *apiClient, char *tenantId, char *jobOfferId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**jobOfferId** | **char \*** |  | 
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

# **JobOffersAPI_fillJobOfferAsync**
```c
// Mark a job offer filled
//
// Marks the offer filled — converted to a hire — and removes it from the public board (raises JobOfferFilled).
//
empty_envelope_t* JobOffersAPI_fillJobOfferAsync(apiClient_t *apiClient, char *tenantId, char *jobOfferId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**jobOfferId** | **char \*** |  | 
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

# **JobOffersAPI_getJobOfferByIdAsync**
```c
// Get job offer by ID
//
// Retrieves a specific job offer by its identifier.
//
job_offer_dto_envelope_t* JobOffersAPI_getJobOfferByIdAsync(apiClient_t *apiClient, char *tenantId, char *jobOfferId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**jobOfferId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[job_offer_dto_envelope_t](job_offer_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **JobOffersAPI_getJobOffersAsync**
```c
// Get job offers
//
// Retrieves job offers for the specified tenant.
//
job_offer_dto_list_envelope_t* JobOffersAPI_getJobOffersAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, job_offer_dto_collection_query_parameters_t *job_offer_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**job_offer_dto_collection_query_parameters** | **[job_offer_dto_collection_query_parameters_t](job_offer_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[job_offer_dto_list_envelope_t](job_offer_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **JobOffersAPI_getJobOffersCountAsync**
```c
// Count job offers
//
// Counts job offers for the specified tenant.
//
int32_envelope_t* JobOffersAPI_getJobOffersCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, job_offer_dto_collection_query_parameters_t *job_offer_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**job_offer_dto_collection_query_parameters** | **[job_offer_dto_collection_query_parameters_t](job_offer_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **JobOffersAPI_getPublicJobOfferByIdAsync**
```c
// Get public job offer by ID
//
// Retrieves a published job offer by its identifier for the Talent Portal. Anonymous; optionally scoped to a tenant.
//
job_offer_dto_envelope_t* JobOffersAPI_getPublicJobOfferByIdAsync(apiClient_t *apiClient, char *jobOfferId, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**jobOfferId** | **char \*** |  | 
**tenantId** | **char \*** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[job_offer_dto_envelope_t](job_offer_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **JobOffersAPI_getPublicJobOffersAsync**
```c
// Get public job offers
//
// Retrieves published job offers for the Talent Portal. Anonymous; optionally scoped to a single tenant.
//
job_offer_dto_list_envelope_t* JobOffersAPI_getPublicJobOffersAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, job_offer_dto_collection_query_parameters_t *job_offer_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**job_offer_dto_collection_query_parameters** | **[job_offer_dto_collection_query_parameters_t](job_offer_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[job_offer_dto_list_envelope_t](job_offer_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **JobOffersAPI_getPublicJobOffersCountAsync**
```c
// Count public job offers
//
// Counts published job offers for the Talent Portal. Anonymous; optionally scoped to a single tenant.
//
int32_envelope_t* JobOffersAPI_getPublicJobOffersCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, job_offer_dto_collection_query_parameters_t *job_offer_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**job_offer_dto_collection_query_parameters** | **[job_offer_dto_collection_query_parameters_t](job_offer_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **JobOffersAPI_patchJobOfferAsync**
```c
// Patch a job offer
//
// Partially updates an existing job offer for the specified tenant.
//
empty_envelope_t* JobOffersAPI_patchJobOfferAsync(apiClient_t *apiClient, char *tenantId, char *jobOfferId, char *api_version, char *x_api_version, list_t *patch_operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**jobOfferId** | **char \*** |  | 
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

# **JobOffersAPI_publishJobOfferAsync**
```c
// Publish a job offer
//
// Publishes the job offer to the public Talent Portal (raises JobOfferPublished).
//
empty_envelope_t* JobOffersAPI_publishJobOfferAsync(apiClient_t *apiClient, char *tenantId, char *jobOfferId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**jobOfferId** | **char \*** |  | 
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

# **JobOffersAPI_updateJobOfferAsync**
```c
// Update a job offer
//
// Updates an existing job offer for the specified tenant.
//
empty_envelope_t* JobOffersAPI_updateJobOfferAsync(apiClient_t *apiClient, char *tenantId, char *jobOfferId, char *api_version, char *x_api_version, job_offer_update_dto_t *job_offer_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**jobOfferId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**job_offer_update_dto** | **[job_offer_update_dto_t](job_offer_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

