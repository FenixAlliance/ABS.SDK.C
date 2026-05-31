# MarketingListsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**MarketingListsAPI_createMarketingListAsync**](MarketingListsAPI.md#MarketingListsAPI_createMarketingListAsync) | **POST** /api/v2/MarketingService/MarketingLists | Create a marketing list
[**MarketingListsAPI_deleteMarketingListAsync**](MarketingListsAPI.md#MarketingListsAPI_deleteMarketingListAsync) | **DELETE** /api/v2/MarketingService/MarketingLists/{marketinglistId} | Delete a marketing list
[**MarketingListsAPI_getMarketingListDetailsAsync**](MarketingListsAPI.md#MarketingListsAPI_getMarketingListDetailsAsync) | **GET** /api/v2/MarketingService/MarketingLists/{marketinglistId} | Get marketing list by ID
[**MarketingListsAPI_getMarketingListODataAsync**](MarketingListsAPI.md#MarketingListsAPI_getMarketingListODataAsync) | **GET** /api/v2/MarketingService/MarketingLists | Get marketing lists
[**MarketingListsAPI_getMarketingListsCountAsync**](MarketingListsAPI.md#MarketingListsAPI_getMarketingListsCountAsync) | **GET** /api/v2/MarketingService/MarketingLists/Count | Get marketing lists count
[**MarketingListsAPI_updateMarketingListAsync**](MarketingListsAPI.md#MarketingListsAPI_updateMarketingListAsync) | **PUT** /api/v2/MarketingService/MarketingLists/{marketinglistId} | Update a marketing list


# **MarketingListsAPI_createMarketingListAsync**
```c
// Create a marketing list
//
// Creates a new marketing list for the specified tenant.
//
empty_envelope_t* MarketingListsAPI_createMarketingListAsync(apiClient_t *apiClient, char *tenantId, marketing_list_create_dto_t *marketing_list_create_dto, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**marketing_list_create_dto** | **[marketing_list_create_dto_t](marketing_list_create_dto.md) \*** |  | 
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

# **MarketingListsAPI_deleteMarketingListAsync**
```c
// Delete a marketing list
//
// Deletes a marketing list by its ID.
//
empty_envelope_t* MarketingListsAPI_deleteMarketingListAsync(apiClient_t *apiClient, char *tenantId, char *marketinglistId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**marketinglistId** | **char \*** |  | 
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

# **MarketingListsAPI_getMarketingListDetailsAsync**
```c
// Get marketing list by ID
//
// Retrieves the details of a specific marketing list by its ID.
//
marketing_list_dto_envelope_t* MarketingListsAPI_getMarketingListDetailsAsync(apiClient_t *apiClient, char *tenantId, char *marketinglistId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**marketinglistId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[marketing_list_dto_envelope_t](marketing_list_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **MarketingListsAPI_getMarketingListODataAsync**
```c
// Get marketing lists
//
// Retrieves a collection of marketing lists for the specified tenant using OData query options.
//
marketing_list_dto_list_envelope_t* MarketingListsAPI_getMarketingListODataAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[marketing_list_dto_list_envelope_t](marketing_list_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **MarketingListsAPI_getMarketingListsCountAsync**
```c
// Get marketing lists count
//
// Returns the count of marketing lists for the specified tenant using OData query options.
//
int32_envelope_t* MarketingListsAPI_getMarketingListsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **MarketingListsAPI_updateMarketingListAsync**
```c
// Update a marketing list
//
// Updates an existing marketing list by its ID.
//
empty_envelope_t* MarketingListsAPI_updateMarketingListAsync(apiClient_t *apiClient, char *tenantId, char *marketinglistId, marketing_list_update_dto_t *marketing_list_update_dto, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**marketinglistId** | **char \*** |  | 
**marketing_list_update_dto** | **[marketing_list_update_dto_t](marketing_list_update_dto.md) \*** |  | 
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

