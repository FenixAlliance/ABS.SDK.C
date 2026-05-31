# JobOffersAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**JobOffersAPI_createJobOfferAsync**](JobOffersAPI.md#JobOffersAPI_createJobOfferAsync) | **POST** /api/v2/HrmsService/JobOffers | Create a job offer
[**JobOffersAPI_deleteJobOfferAsync**](JobOffersAPI.md#JobOffersAPI_deleteJobOfferAsync) | **DELETE** /api/v2/HrmsService/JobOffers/{jobOfferId} | Delete a job offer
[**JobOffersAPI_getJobOfferByIdAsync**](JobOffersAPI.md#JobOffersAPI_getJobOfferByIdAsync) | **GET** /api/v2/HrmsService/JobOffers/{jobOfferId} | Get job offer by ID
[**JobOffersAPI_getJobOffersAsync**](JobOffersAPI.md#JobOffersAPI_getJobOffersAsync) | **GET** /api/v2/HrmsService/JobOffers | Get job offers
[**JobOffersAPI_getJobOffersCountAsync**](JobOffersAPI.md#JobOffersAPI_getJobOffersCountAsync) | **GET** /api/v2/HrmsService/JobOffers/Count | Count job offers
[**JobOffersAPI_updateJobOfferAsync**](JobOffersAPI.md#JobOffersAPI_updateJobOfferAsync) | **PUT** /api/v2/HrmsService/JobOffers/{jobOfferId} | Update a job offer


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
job_offer_dto_list_envelope_t* JobOffersAPI_getJobOffersAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[job_offer_dto_list_envelope_t](job_offer_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **JobOffersAPI_getJobOffersCountAsync**
```c
// Count job offers
//
// Counts job offers for the specified tenant.
//
int32_envelope_t* JobOffersAPI_getJobOffersCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **JobOffersAPI_updateJobOfferAsync**
```c
// Update a job offer
//
// Updates an existing job offer for the specified tenant.
//
empty_envelope_t* JobOffersAPI_updateJobOfferAsync(apiClient_t *apiClient, char *tenantId, char *jobOfferId, char *api_version, char *x_api_version, object_t *body);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**jobOfferId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**body** | **[object_t](object.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

