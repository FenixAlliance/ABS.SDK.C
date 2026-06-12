# MarketingLeadsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**MarketingLeadsAPI_createMarketingLeadAsync**](MarketingLeadsAPI.md#MarketingLeadsAPI_createMarketingLeadAsync) | **POST** /api/v2/MarketingService/MarketingLeads | Create a marketing lead
[**MarketingLeadsAPI_deleteMarketingLeadAsync**](MarketingLeadsAPI.md#MarketingLeadsAPI_deleteMarketingLeadAsync) | **DELETE** /api/v2/MarketingService/MarketingLeads/{marketingLeadId} | Delete a marketing lead
[**MarketingLeadsAPI_getMarketingLeadDetailsAsync**](MarketingLeadsAPI.md#MarketingLeadsAPI_getMarketingLeadDetailsAsync) | **GET** /api/v2/MarketingService/MarketingLeads/{marketingLeadId} | Get marketing lead by ID
[**MarketingLeadsAPI_getMarketingLeadsCountAsync**](MarketingLeadsAPI.md#MarketingLeadsAPI_getMarketingLeadsCountAsync) | **GET** /api/v2/MarketingService/MarketingLeads/Count | Get marketing leads count
[**MarketingLeadsAPI_getMarketingLeadsODataAsync**](MarketingLeadsAPI.md#MarketingLeadsAPI_getMarketingLeadsODataAsync) | **GET** /api/v2/MarketingService/MarketingLeads | Get marketing leads
[**MarketingLeadsAPI_patchMarketingLeadAsync**](MarketingLeadsAPI.md#MarketingLeadsAPI_patchMarketingLeadAsync) | **PATCH** /api/v2/MarketingService/MarketingLeads/{marketingLeadId} | Patch a marketing lead
[**MarketingLeadsAPI_updateMarketingLeadAsync**](MarketingLeadsAPI.md#MarketingLeadsAPI_updateMarketingLeadAsync) | **PUT** /api/v2/MarketingService/MarketingLeads/{marketingLeadId} | Update a marketing lead


# **MarketingLeadsAPI_createMarketingLeadAsync**
```c
// Create a marketing lead
//
empty_envelope_t* MarketingLeadsAPI_createMarketingLeadAsync(apiClient_t *apiClient, char *tenantId, marketing_lead_create_dto_t *marketing_lead_create_dto, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**marketing_lead_create_dto** | **[marketing_lead_create_dto_t](marketing_lead_create_dto.md) \*** |  | 
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

# **MarketingLeadsAPI_deleteMarketingLeadAsync**
```c
// Delete a marketing lead
//
empty_envelope_t* MarketingLeadsAPI_deleteMarketingLeadAsync(apiClient_t *apiClient, char *tenantId, char *marketingLeadId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**marketingLeadId** | **char \*** |  | 
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

# **MarketingLeadsAPI_getMarketingLeadDetailsAsync**
```c
// Get marketing lead by ID
//
marketing_lead_dto_envelope_t* MarketingLeadsAPI_getMarketingLeadDetailsAsync(apiClient_t *apiClient, char *tenantId, char *marketingLeadId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**marketingLeadId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[marketing_lead_dto_envelope_t](marketing_lead_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **MarketingLeadsAPI_getMarketingLeadsCountAsync**
```c
// Get marketing leads count
//
int32_envelope_t* MarketingLeadsAPI_getMarketingLeadsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **MarketingLeadsAPI_getMarketingLeadsODataAsync**
```c
// Get marketing leads
//
// Retrieves a collection of marketing leads for the specified tenant using OData query options.
//
marketing_lead_dto_list_envelope_t* MarketingLeadsAPI_getMarketingLeadsODataAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[marketing_lead_dto_list_envelope_t](marketing_lead_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **MarketingLeadsAPI_patchMarketingLeadAsync**
```c
// Patch a marketing lead
//
// Partially updates a marketing lead by its ID using JSON Patch.
//
empty_envelope_t* MarketingLeadsAPI_patchMarketingLeadAsync(apiClient_t *apiClient, char *tenantId, char *marketingLeadId, char *api_version, char *x_api_version, list_t *operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**marketingLeadId** | **char \*** |  | 
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

# **MarketingLeadsAPI_updateMarketingLeadAsync**
```c
// Update a marketing lead
//
empty_envelope_t* MarketingLeadsAPI_updateMarketingLeadAsync(apiClient_t *apiClient, char *tenantId, char *marketingLeadId, marketing_lead_update_dto_t *marketing_lead_update_dto, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**marketingLeadId** | **char \*** |  | 
**marketing_lead_update_dto** | **[marketing_lead_update_dto_t](marketing_lead_update_dto.md) \*** |  | 
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

