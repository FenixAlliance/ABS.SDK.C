# ServiceCasesAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ServiceCasesAPI_createServiceCaseAsync**](ServiceCasesAPI.md#ServiceCasesAPI_createServiceCaseAsync) | **POST** /api/v2/ServicesService/ServiceCases | Create a service case
[**ServiceCasesAPI_deleteServiceCaseAsync**](ServiceCasesAPI.md#ServiceCasesAPI_deleteServiceCaseAsync) | **DELETE** /api/v2/ServicesService/ServiceCases/{serviceCaseId} | Delete a service case
[**ServiceCasesAPI_getServiceCaseByIdAsync**](ServiceCasesAPI.md#ServiceCasesAPI_getServiceCaseByIdAsync) | **GET** /api/v2/ServicesService/ServiceCases/{serviceCaseId} | Get a service case by ID
[**ServiceCasesAPI_getServiceCasesAsync**](ServiceCasesAPI.md#ServiceCasesAPI_getServiceCasesAsync) | **GET** /api/v2/ServicesService/ServiceCases | Get all service cases
[**ServiceCasesAPI_getServiceCasesCountAsync**](ServiceCasesAPI.md#ServiceCasesAPI_getServiceCasesCountAsync) | **GET** /api/v2/ServicesService/ServiceCases/Count | Get service cases count
[**ServiceCasesAPI_updateServiceCaseAsync**](ServiceCasesAPI.md#ServiceCasesAPI_updateServiceCaseAsync) | **PUT** /api/v2/ServicesService/ServiceCases/{serviceCaseId} | Update a service case


# **ServiceCasesAPI_createServiceCaseAsync**
```c
// Create a service case
//
// Creates a new service case for the specified tenant.
//
envelope_t* ServiceCasesAPI_createServiceCaseAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, service_case_create_dto_t *service_case_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**service_case_create_dto** | **[service_case_create_dto_t](service_case_create_dto.md) \*** |  | [optional] 

### Return type

[envelope_t](envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ServiceCasesAPI_deleteServiceCaseAsync**
```c
// Delete a service case
//
// Deletes a service case by its identifier.
//
envelope_t* ServiceCasesAPI_deleteServiceCaseAsync(apiClient_t *apiClient, char *tenantId, char *serviceCaseId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**serviceCaseId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[envelope_t](envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ServiceCasesAPI_getServiceCaseByIdAsync**
```c
// Get a service case by ID
//
// Retrieves a service case by its identifier.
//
service_case_dto_envelope_t* ServiceCasesAPI_getServiceCaseByIdAsync(apiClient_t *apiClient, char *tenantId, char *serviceCaseId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**serviceCaseId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[service_case_dto_envelope_t](service_case_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ServiceCasesAPI_getServiceCasesAsync**
```c
// Get all service cases
//
// Retrieves all service cases for the specified tenant.
//
service_case_dto_i_read_only_list_envelope_t* ServiceCasesAPI_getServiceCasesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[service_case_dto_i_read_only_list_envelope_t](service_case_dto_i_read_only_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ServiceCasesAPI_getServiceCasesCountAsync**
```c
// Get service cases count
//
// Returns the count of service cases for the specified tenant.
//
int32_envelope_t* ServiceCasesAPI_getServiceCasesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **ServiceCasesAPI_updateServiceCaseAsync**
```c
// Update a service case
//
// Updates an existing service case.
//
envelope_t* ServiceCasesAPI_updateServiceCaseAsync(apiClient_t *apiClient, char *tenantId, char *serviceCaseId, char *api_version, char *x_api_version, service_case_update_dto_t *service_case_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**serviceCaseId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**service_case_update_dto** | **[service_case_update_dto_t](service_case_update_dto.md) \*** |  | [optional] 

### Return type

[envelope_t](envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

