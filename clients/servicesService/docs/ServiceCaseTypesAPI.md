# ServiceCaseTypesAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ServiceCaseTypesAPI_createServiceCaseTypeAsync**](ServiceCaseTypesAPI.md#ServiceCaseTypesAPI_createServiceCaseTypeAsync) | **POST** /api/v2/ServicesService/ServiceCaseTypes | Create a service case type
[**ServiceCaseTypesAPI_deleteServiceCaseTypeAsync**](ServiceCaseTypesAPI.md#ServiceCaseTypesAPI_deleteServiceCaseTypeAsync) | **DELETE** /api/v2/ServicesService/ServiceCaseTypes/{serviceCaseTypeId} | Delete a service case type
[**ServiceCaseTypesAPI_getServiceCaseTypeByIdAsync**](ServiceCaseTypesAPI.md#ServiceCaseTypesAPI_getServiceCaseTypeByIdAsync) | **GET** /api/v2/ServicesService/ServiceCaseTypes/{serviceCaseTypeId} | Get a service case type by ID
[**ServiceCaseTypesAPI_getServiceCaseTypesAsync**](ServiceCaseTypesAPI.md#ServiceCaseTypesAPI_getServiceCaseTypesAsync) | **GET** /api/v2/ServicesService/ServiceCaseTypes | Get all service case types
[**ServiceCaseTypesAPI_getServiceCaseTypesCountAsync**](ServiceCaseTypesAPI.md#ServiceCaseTypesAPI_getServiceCaseTypesCountAsync) | **GET** /api/v2/ServicesService/ServiceCaseTypes/Count | Get service case types count
[**ServiceCaseTypesAPI_updateServiceCaseTypeAsync**](ServiceCaseTypesAPI.md#ServiceCaseTypesAPI_updateServiceCaseTypeAsync) | **PUT** /api/v2/ServicesService/ServiceCaseTypes/{serviceCaseTypeId} | Update a service case type


# **ServiceCaseTypesAPI_createServiceCaseTypeAsync**
```c
// Create a service case type
//
// Creates a new service case type for the specified tenant.
//
envelope_t* ServiceCaseTypesAPI_createServiceCaseTypeAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, service_case_type_create_dto_t *service_case_type_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**service_case_type_create_dto** | **[service_case_type_create_dto_t](service_case_type_create_dto.md) \*** |  | [optional] 

### Return type

[envelope_t](envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ServiceCaseTypesAPI_deleteServiceCaseTypeAsync**
```c
// Delete a service case type
//
// Deletes a service case type by its identifier.
//
envelope_t* ServiceCaseTypesAPI_deleteServiceCaseTypeAsync(apiClient_t *apiClient, char *tenantId, char *serviceCaseTypeId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**serviceCaseTypeId** | **char \*** |  | 
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

# **ServiceCaseTypesAPI_getServiceCaseTypeByIdAsync**
```c
// Get a service case type by ID
//
// Retrieves a service case type by its identifier.
//
service_case_type_dto_envelope_t* ServiceCaseTypesAPI_getServiceCaseTypeByIdAsync(apiClient_t *apiClient, char *tenantId, char *serviceCaseTypeId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**serviceCaseTypeId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[service_case_type_dto_envelope_t](service_case_type_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ServiceCaseTypesAPI_getServiceCaseTypesAsync**
```c
// Get all service case types
//
// Retrieves all service case types for the specified tenant.
//
service_case_type_dto_i_read_only_list_envelope_t* ServiceCaseTypesAPI_getServiceCaseTypesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[service_case_type_dto_i_read_only_list_envelope_t](service_case_type_dto_i_read_only_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ServiceCaseTypesAPI_getServiceCaseTypesCountAsync**
```c
// Get service case types count
//
// Returns the count of service case types for the specified tenant.
//
int32_envelope_t* ServiceCaseTypesAPI_getServiceCaseTypesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **ServiceCaseTypesAPI_updateServiceCaseTypeAsync**
```c
// Update a service case type
//
// Updates an existing service case type.
//
envelope_t* ServiceCaseTypesAPI_updateServiceCaseTypeAsync(apiClient_t *apiClient, char *tenantId, char *serviceCaseTypeId, char *api_version, char *x_api_version, service_case_type_update_dto_t *service_case_type_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**serviceCaseTypeId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**service_case_type_update_dto** | **[service_case_type_update_dto_t](service_case_type_update_dto.md) \*** |  | [optional] 

### Return type

[envelope_t](envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

