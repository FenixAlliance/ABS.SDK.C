# ServiceLevelAgreementsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ServiceLevelAgreementsAPI_createServiceLevelAgreementAsync**](ServiceLevelAgreementsAPI.md#ServiceLevelAgreementsAPI_createServiceLevelAgreementAsync) | **POST** /api/v2/ServicesService/ServiceLevelAgreements | Create a service level agreement
[**ServiceLevelAgreementsAPI_deleteServiceLevelAgreementAsync**](ServiceLevelAgreementsAPI.md#ServiceLevelAgreementsAPI_deleteServiceLevelAgreementAsync) | **DELETE** /api/v2/ServicesService/ServiceLevelAgreements/{serviceLevelAgreementId} | Delete a service level agreement
[**ServiceLevelAgreementsAPI_getServiceLevelAgreementByIdAsync**](ServiceLevelAgreementsAPI.md#ServiceLevelAgreementsAPI_getServiceLevelAgreementByIdAsync) | **GET** /api/v2/ServicesService/ServiceLevelAgreements/{serviceLevelAgreementId} | Get a service level agreement by ID
[**ServiceLevelAgreementsAPI_getServiceLevelAgreementsAsync**](ServiceLevelAgreementsAPI.md#ServiceLevelAgreementsAPI_getServiceLevelAgreementsAsync) | **GET** /api/v2/ServicesService/ServiceLevelAgreements | Get all service level agreements
[**ServiceLevelAgreementsAPI_getServiceLevelAgreementsCountAsync**](ServiceLevelAgreementsAPI.md#ServiceLevelAgreementsAPI_getServiceLevelAgreementsCountAsync) | **GET** /api/v2/ServicesService/ServiceLevelAgreements/Count | Get service level agreements count
[**ServiceLevelAgreementsAPI_updateServiceLevelAgreementAsync**](ServiceLevelAgreementsAPI.md#ServiceLevelAgreementsAPI_updateServiceLevelAgreementAsync) | **PUT** /api/v2/ServicesService/ServiceLevelAgreements/{serviceLevelAgreementId} | Update a service level agreement


# **ServiceLevelAgreementsAPI_createServiceLevelAgreementAsync**
```c
// Create a service level agreement
//
// Creates a new service level agreement for the specified tenant.
//
envelope_t* ServiceLevelAgreementsAPI_createServiceLevelAgreementAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, service_level_agreement_create_dto_t *service_level_agreement_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**service_level_agreement_create_dto** | **[service_level_agreement_create_dto_t](service_level_agreement_create_dto.md) \*** |  | [optional] 

### Return type

[envelope_t](envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ServiceLevelAgreementsAPI_deleteServiceLevelAgreementAsync**
```c
// Delete a service level agreement
//
// Deletes a service level agreement by its identifier.
//
envelope_t* ServiceLevelAgreementsAPI_deleteServiceLevelAgreementAsync(apiClient_t *apiClient, char *tenantId, char *serviceLevelAgreementId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**serviceLevelAgreementId** | **char \*** |  | 
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

# **ServiceLevelAgreementsAPI_getServiceLevelAgreementByIdAsync**
```c
// Get a service level agreement by ID
//
// Retrieves a service level agreement by its identifier.
//
service_level_agreement_dto_envelope_t* ServiceLevelAgreementsAPI_getServiceLevelAgreementByIdAsync(apiClient_t *apiClient, char *tenantId, char *serviceLevelAgreementId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**serviceLevelAgreementId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[service_level_agreement_dto_envelope_t](service_level_agreement_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ServiceLevelAgreementsAPI_getServiceLevelAgreementsAsync**
```c
// Get all service level agreements
//
// Retrieves all service level agreements for the specified tenant.
//
service_level_agreement_dto_i_read_only_list_envelope_t* ServiceLevelAgreementsAPI_getServiceLevelAgreementsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[service_level_agreement_dto_i_read_only_list_envelope_t](service_level_agreement_dto_i_read_only_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ServiceLevelAgreementsAPI_getServiceLevelAgreementsCountAsync**
```c
// Get service level agreements count
//
// Returns the count of service level agreements for the specified tenant.
//
int32_envelope_t* ServiceLevelAgreementsAPI_getServiceLevelAgreementsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **ServiceLevelAgreementsAPI_updateServiceLevelAgreementAsync**
```c
// Update a service level agreement
//
// Updates an existing service level agreement.
//
envelope_t* ServiceLevelAgreementsAPI_updateServiceLevelAgreementAsync(apiClient_t *apiClient, char *tenantId, char *serviceLevelAgreementId, char *api_version, char *x_api_version, service_level_agreement_update_dto_t *service_level_agreement_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**serviceLevelAgreementId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**service_level_agreement_update_dto** | **[service_level_agreement_update_dto_t](service_level_agreement_update_dto.md) \*** |  | [optional] 

### Return type

[envelope_t](envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

