# BusinessDomainsAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**BusinessDomainsAPI_createBusinessDomainAsync**](BusinessDomainsAPI.md#BusinessDomainsAPI_createBusinessDomainAsync) | **POST** /api/v2/ContentService/BusinessDomains | Register a business domain
[**BusinessDomainsAPI_deleteBusinessDomainAsync**](BusinessDomainsAPI.md#BusinessDomainsAPI_deleteBusinessDomainAsync) | **DELETE** /api/v2/ContentService/BusinessDomains/{businessDomainId} | Delete a business domain
[**BusinessDomainsAPI_getBusinessDomainByIdAsync**](BusinessDomainsAPI.md#BusinessDomainsAPI_getBusinessDomainByIdAsync) | **GET** /api/v2/ContentService/BusinessDomains/{businessDomainId} | Get business domain by ID
[**BusinessDomainsAPI_getBusinessDomainsAsync**](BusinessDomainsAPI.md#BusinessDomainsAPI_getBusinessDomainsAsync) | **GET** /api/v2/ContentService/BusinessDomains | Get business domains
[**BusinessDomainsAPI_getBusinessDomainsCountAsync**](BusinessDomainsAPI.md#BusinessDomainsAPI_getBusinessDomainsCountAsync) | **GET** /api/v2/ContentService/BusinessDomains/Count | Get business domains count
[**BusinessDomainsAPI_updateBusinessDomainAsync**](BusinessDomainsAPI.md#BusinessDomainsAPI_updateBusinessDomainAsync) | **PUT** /api/v2/ContentService/BusinessDomains/{businessDomainId} | Update a business domain
[**BusinessDomainsAPI_verifyBusinessDomainAsync**](BusinessDomainsAPI.md#BusinessDomainsAPI_verifyBusinessDomainAsync) | **POST** /api/v2/ContentService/BusinessDomains/{businessDomainId}/Verify | Verify a business domain


# **BusinessDomainsAPI_createBusinessDomainAsync**
```c
// Register a business domain
//
// Registers a new (unverified) business domain for the tenant and issues a DNS TXT verification token.
//
empty_envelope_t* BusinessDomainsAPI_createBusinessDomainAsync(apiClient_t *apiClient, char *tenantId, business_domain_create_dto_t *business_domain_create_dto, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**business_domain_create_dto** | **[business_domain_create_dto_t](business_domain_create_dto.md) \*** |  | 
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

# **BusinessDomainsAPI_deleteBusinessDomainAsync**
```c
// Delete a business domain
//
// Removes a business domain from the tenant.
//
empty_envelope_t* BusinessDomainsAPI_deleteBusinessDomainAsync(apiClient_t *apiClient, char *tenantId, char *businessDomainId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**businessDomainId** | **char \*** |  | 
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

# **BusinessDomainsAPI_getBusinessDomainByIdAsync**
```c
// Get business domain by ID
//
// Retrieves a specific business domain.
//
business_domain_dto_envelope_t* BusinessDomainsAPI_getBusinessDomainByIdAsync(apiClient_t *apiClient, char *tenantId, char *businessDomainId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**businessDomainId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[business_domain_dto_envelope_t](business_domain_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BusinessDomainsAPI_getBusinessDomainsAsync**
```c
// Get business domains
//
// Retrieves business domains for the specified tenant.
//
business_domain_dto_list_envelope_t* BusinessDomainsAPI_getBusinessDomainsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, business_domain_dto_collection_query_parameters_t *business_domain_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**business_domain_dto_collection_query_parameters** | **[business_domain_dto_collection_query_parameters_t](business_domain_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[business_domain_dto_list_envelope_t](business_domain_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BusinessDomainsAPI_getBusinessDomainsCountAsync**
```c
// Get business domains count
//
// Retrieves the count of business domains for the specified tenant.
//
int32_envelope_t* BusinessDomainsAPI_getBusinessDomainsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, business_domain_dto_collection_query_parameters_t *business_domain_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**business_domain_dto_collection_query_parameters** | **[business_domain_dto_collection_query_parameters_t](business_domain_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BusinessDomainsAPI_updateBusinessDomainAsync**
```c
// Update a business domain
//
// Updates a business domain. Changing the host re-issues the verification token and clears verification.
//
empty_envelope_t* BusinessDomainsAPI_updateBusinessDomainAsync(apiClient_t *apiClient, char *tenantId, char *businessDomainId, business_domain_update_dto_t *business_domain_update_dto, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**businessDomainId** | **char \*** |  | 
**business_domain_update_dto** | **[business_domain_update_dto_t](business_domain_update_dto.md) \*** |  | 
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

# **BusinessDomainsAPI_verifyBusinessDomainAsync**
```c
// Verify a business domain
//
// Checks the domain's DNS TXT records for the verification token and marks the domain verified.
//
empty_envelope_t* BusinessDomainsAPI_verifyBusinessDomainAsync(apiClient_t *apiClient, char *tenantId, char *businessDomainId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**businessDomainId** | **char \*** |  | 
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

