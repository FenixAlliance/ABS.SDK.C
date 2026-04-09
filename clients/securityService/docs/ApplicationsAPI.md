# ApplicationsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ApplicationsAPI_createBusinessApplicationAsync**](ApplicationsAPI.md#ApplicationsAPI_createBusinessApplicationAsync) | **POST** /api/v2/SecurityService/Applications | Create a new business application
[**ApplicationsAPI_deleteBusinessApplicationAsync**](ApplicationsAPI.md#ApplicationsAPI_deleteBusinessApplicationAsync) | **DELETE** /api/v2/SecurityService/Applications/{applicationId} | Delete a business application
[**ApplicationsAPI_getBusinessApplicationByIdAsync**](ApplicationsAPI.md#ApplicationsAPI_getBusinessApplicationByIdAsync) | **GET** /api/v2/SecurityService/Applications/{applicationId} | Get business application by ID
[**ApplicationsAPI_getBusinessApplicationsAsync**](ApplicationsAPI.md#ApplicationsAPI_getBusinessApplicationsAsync) | **GET** /api/v2/SecurityService/Applications | Get all business applications
[**ApplicationsAPI_getBusinessApplicationsCountAsync**](ApplicationsAPI.md#ApplicationsAPI_getBusinessApplicationsCountAsync) | **GET** /api/v2/SecurityService/Applications/Count | Get business applications count
[**ApplicationsAPI_updateBusinessApplicationAsync**](ApplicationsAPI.md#ApplicationsAPI_updateBusinessApplicationAsync) | **PUT** /api/v2/SecurityService/Applications/{applicationId} | Update an existing business application


# **ApplicationsAPI_createBusinessApplicationAsync**
```c
// Create a new business application
//
// Creates a new business application for the specified tenant.
//
empty_envelope_t* ApplicationsAPI_createBusinessApplicationAsync(apiClient_t *apiClient, char *tenantId, business_application_create_dto_t *business_application_create_dto, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**business_application_create_dto** | **[business_application_create_dto_t](business_application_create_dto.md) \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ApplicationsAPI_deleteBusinessApplicationAsync**
```c
// Delete a business application
//
// Deletes an existing business application for the specified tenant.
//
empty_envelope_t* ApplicationsAPI_deleteBusinessApplicationAsync(apiClient_t *apiClient, char *tenantId, char *applicationId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**applicationId** | **char \*** |  | 
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

# **ApplicationsAPI_getBusinessApplicationByIdAsync**
```c
// Get business application by ID
//
// Retrieves a specific business application by its identifier.
//
business_application_dto_envelope_t* ApplicationsAPI_getBusinessApplicationByIdAsync(apiClient_t *apiClient, char *tenantId, char *applicationId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**applicationId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[business_application_dto_envelope_t](business_application_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ApplicationsAPI_getBusinessApplicationsAsync**
```c
// Get all business applications
//
// Retrieves all business applications for the specified tenant.
//
business_application_dto_list_envelope_t* ApplicationsAPI_getBusinessApplicationsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[business_application_dto_list_envelope_t](business_application_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ApplicationsAPI_getBusinessApplicationsCountAsync**
```c
// Get business applications count
//
// Retrieves the count of business applications for the specified tenant.
//
int32_envelope_t* ApplicationsAPI_getBusinessApplicationsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **ApplicationsAPI_updateBusinessApplicationAsync**
```c
// Update an existing business application
//
// Updates an existing business application for the specified tenant.
//
empty_envelope_t* ApplicationsAPI_updateBusinessApplicationAsync(apiClient_t *apiClient, char *tenantId, char *applicationId, business_application_update_dto_t *business_application_update_dto, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**applicationId** | **char \*** |  | 
**business_application_update_dto** | **[business_application_update_dto_t](business_application_update_dto.md) \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

