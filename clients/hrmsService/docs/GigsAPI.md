# GigsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**GigsAPI_createGigAsync**](GigsAPI.md#GigsAPI_createGigAsync) | **POST** /api/v2/HrmsService/Gigs | Create a gig
[**GigsAPI_deleteGigAsync**](GigsAPI.md#GigsAPI_deleteGigAsync) | **DELETE** /api/v2/HrmsService/Gigs/{gigId} | Delete a gig
[**GigsAPI_getGigByIdAsync**](GigsAPI.md#GigsAPI_getGigByIdAsync) | **GET** /api/v2/HrmsService/Gigs/{gigId} | Get gig by ID
[**GigsAPI_getGigsAsync**](GigsAPI.md#GigsAPI_getGigsAsync) | **GET** /api/v2/HrmsService/Gigs | Get gigs
[**GigsAPI_getGigsCountAsync**](GigsAPI.md#GigsAPI_getGigsCountAsync) | **GET** /api/v2/HrmsService/Gigs/Count | Count gigs
[**GigsAPI_updateGigAsync**](GigsAPI.md#GigsAPI_updateGigAsync) | **PUT** /api/v2/HrmsService/Gigs/{gigId} | Update a gig


# **GigsAPI_createGigAsync**
```c
// Create a gig
//
// Creates a new gig for the specified tenant.
//
empty_envelope_t* GigsAPI_createGigAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, gig_create_dto_t *gig_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**gig_create_dto** | **[gig_create_dto_t](gig_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **GigsAPI_deleteGigAsync**
```c
// Delete a gig
//
// Deletes a gig for the specified tenant.
//
empty_envelope_t* GigsAPI_deleteGigAsync(apiClient_t *apiClient, char *tenantId, char *gigId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**gigId** | **char \*** |  | 
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

# **GigsAPI_getGigByIdAsync**
```c
// Get gig by ID
//
// Retrieves a specific gig by its identifier.
//
gig_dto_envelope_t* GigsAPI_getGigByIdAsync(apiClient_t *apiClient, char *tenantId, char *gigId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**gigId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[gig_dto_envelope_t](gig_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **GigsAPI_getGigsAsync**
```c
// Get gigs
//
// Retrieves gigs for the specified tenant.
//
gig_dto_list_envelope_t* GigsAPI_getGigsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[gig_dto_list_envelope_t](gig_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **GigsAPI_getGigsCountAsync**
```c
// Count gigs
//
// Counts gigs for the specified tenant.
//
int32_envelope_t* GigsAPI_getGigsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **GigsAPI_updateGigAsync**
```c
// Update a gig
//
// Updates an existing gig for the specified tenant.
//
empty_envelope_t* GigsAPI_updateGigAsync(apiClient_t *apiClient, char *tenantId, char *gigId, char *api_version, char *x_api_version, gig_update_dto_t *gig_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**gigId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**gig_update_dto** | **[gig_update_dto_t](gig_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

