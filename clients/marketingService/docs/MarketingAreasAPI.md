# MarketingAreasAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**MarketingAreasAPI_createMarketingAreaAsync**](MarketingAreasAPI.md#MarketingAreasAPI_createMarketingAreaAsync) | **POST** /api/v2/MarketingService/MarketingAreas | Create a marketing area
[**MarketingAreasAPI_deleteMarketingAreaAsync**](MarketingAreasAPI.md#MarketingAreasAPI_deleteMarketingAreaAsync) | **DELETE** /api/v2/MarketingService/MarketingAreas/{marketingAreaId} | Delete a marketing area
[**MarketingAreasAPI_getMarketingAreaByIdAsync**](MarketingAreasAPI.md#MarketingAreasAPI_getMarketingAreaByIdAsync) | **GET** /api/v2/MarketingService/MarketingAreas/{marketingAreaId} | Get marketing area by ID
[**MarketingAreasAPI_getMarketingAreasAsync**](MarketingAreasAPI.md#MarketingAreasAPI_getMarketingAreasAsync) | **GET** /api/v2/MarketingService/MarketingAreas | Get marketing areas
[**MarketingAreasAPI_getMarketingAreasCountAsync**](MarketingAreasAPI.md#MarketingAreasAPI_getMarketingAreasCountAsync) | **GET** /api/v2/MarketingService/MarketingAreas/Count | Count marketing areas
[**MarketingAreasAPI_patchMarketingAreaAsync**](MarketingAreasAPI.md#MarketingAreasAPI_patchMarketingAreaAsync) | **PATCH** /api/v2/MarketingService/MarketingAreas/{marketingAreaId} | Patch a marketing area
[**MarketingAreasAPI_updateMarketingAreaAsync**](MarketingAreasAPI.md#MarketingAreasAPI_updateMarketingAreaAsync) | **PUT** /api/v2/MarketingService/MarketingAreas/{marketingAreaId} | Update a marketing area


# **MarketingAreasAPI_createMarketingAreaAsync**
```c
// Create a marketing area
//
// Creates a new marketing area for the specified tenant.
//
empty_envelope_t* MarketingAreasAPI_createMarketingAreaAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, marketing_area_create_dto_t *marketing_area_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**marketing_area_create_dto** | **[marketing_area_create_dto_t](marketing_area_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **MarketingAreasAPI_deleteMarketingAreaAsync**
```c
// Delete a marketing area
//
// Deletes a marketing area for the specified tenant.
//
empty_envelope_t* MarketingAreasAPI_deleteMarketingAreaAsync(apiClient_t *apiClient, char *tenantId, char *marketingAreaId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**marketingAreaId** | **char \*** |  | 
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

# **MarketingAreasAPI_getMarketingAreaByIdAsync**
```c
// Get marketing area by ID
//
// Retrieves a specific marketing area by its identifier.
//
marketing_area_dto_envelope_t* MarketingAreasAPI_getMarketingAreaByIdAsync(apiClient_t *apiClient, char *tenantId, char *marketingAreaId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**marketingAreaId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[marketing_area_dto_envelope_t](marketing_area_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **MarketingAreasAPI_getMarketingAreasAsync**
```c
// Get marketing areas
//
// Retrieves marketing areas for the specified tenant.
//
marketing_area_dto_list_envelope_t* MarketingAreasAPI_getMarketingAreasAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[marketing_area_dto_list_envelope_t](marketing_area_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **MarketingAreasAPI_getMarketingAreasCountAsync**
```c
// Count marketing areas
//
// Counts marketing areas for the specified tenant.
//
int32_envelope_t* MarketingAreasAPI_getMarketingAreasCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **MarketingAreasAPI_patchMarketingAreaAsync**
```c
// Patch a marketing area
//
// Partially updates a marketing area by its ID using JSON Patch.
//
empty_envelope_t* MarketingAreasAPI_patchMarketingAreaAsync(apiClient_t *apiClient, char *tenantId, char *marketingAreaId, char *api_version, char *x_api_version, list_t *operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**marketingAreaId** | **char \*** |  | 
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

# **MarketingAreasAPI_updateMarketingAreaAsync**
```c
// Update a marketing area
//
// Updates an existing marketing area for the specified tenant.
//
empty_envelope_t* MarketingAreasAPI_updateMarketingAreaAsync(apiClient_t *apiClient, char *tenantId, char *marketingAreaId, char *api_version, char *x_api_version, marketing_area_update_dto_t *marketing_area_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**marketingAreaId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**marketing_area_update_dto** | **[marketing_area_update_dto_t](marketing_area_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

