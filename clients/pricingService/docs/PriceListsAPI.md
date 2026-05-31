# PriceListsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**PriceListsAPI_createPriceListAsync**](PriceListsAPI.md#PriceListsAPI_createPriceListAsync) | **POST** /api/v2/PricingService/PriceLists | Creates a new price list
[**PriceListsAPI_createPriceListPricesAsync**](PriceListsAPI.md#PriceListsAPI_createPriceListPricesAsync) | **POST** /api/v2/PricingService/PriceLists/{priceListId}/Prices | Creates a price list entry
[**PriceListsAPI_deletePriceListAsync**](PriceListsAPI.md#PriceListsAPI_deletePriceListAsync) | **DELETE** /api/v2/PricingService/PriceLists/{priceListId} | Deletes a price list
[**PriceListsAPI_deletePriceListPriceAsync**](PriceListsAPI.md#PriceListsAPI_deletePriceListPriceAsync) | **DELETE** /api/v2/PricingService/PriceLists/{priceListId}/Prices/{priceId} | Deletes a price list entry
[**PriceListsAPI_getPriceListAsync**](PriceListsAPI.md#PriceListsAPI_getPriceListAsync) | **GET** /api/v2/PricingService/PriceLists/{priceListId} | Gets a price list by ID
[**PriceListsAPI_getPriceListPriceAsync**](PriceListsAPI.md#PriceListsAPI_getPriceListPriceAsync) | **GET** /api/v2/PricingService/PriceLists/{priceListId}/Prices/{priceId} | Gets a price list entry by ID
[**PriceListsAPI_getPriceListPricesAsync**](PriceListsAPI.md#PriceListsAPI_getPriceListPricesAsync) | **GET** /api/v2/PricingService/PriceLists/{priceListId}/Prices | Retrieves prices in a price list
[**PriceListsAPI_getPriceListsAsync**](PriceListsAPI.md#PriceListsAPI_getPriceListsAsync) | **GET** /api/v2/PricingService/PriceLists | Retrieves all price lists
[**PriceListsAPI_getPriceListsCountAsync**](PriceListsAPI.md#PriceListsAPI_getPriceListsCountAsync) | **GET** /api/v2/PricingService/PriceLists/Count | Counts price lists
[**PriceListsAPI_updatePriceListAsync**](PriceListsAPI.md#PriceListsAPI_updatePriceListAsync) | **PUT** /api/v2/PricingService/PriceLists/{priceListId} | Updates a price list
[**PriceListsAPI_updatePriceListPriceAsync**](PriceListsAPI.md#PriceListsAPI_updatePriceListPriceAsync) | **PUT** /api/v2/PricingService/PriceLists/{priceListId}/Prices/{priceId} | Updates a price list entry


# **PriceListsAPI_createPriceListAsync**
```c
// Creates a new price list
//
// Creates a new price list for the current tenant.
//
empty_envelope_t* PriceListsAPI_createPriceListAsync(apiClient_t *apiClient, char *tenantId, price_list_create_dto_t *price_list_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**price_list_create_dto** | **[price_list_create_dto_t](price_list_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PriceListsAPI_createPriceListPricesAsync**
```c
// Creates a price list entry
//
// Creates a new price entry in the specified price list.
//
empty_envelope_t* PriceListsAPI_createPriceListPricesAsync(apiClient_t *apiClient, char *tenantId, char *priceListId, item_price_create_dto_t *item_price_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**priceListId** | **char \*** |  | 
**item_price_create_dto** | **[item_price_create_dto_t](item_price_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PriceListsAPI_deletePriceListAsync**
```c
// Deletes a price list
//
// Deletes the specified price list.
//
empty_envelope_t* PriceListsAPI_deletePriceListAsync(apiClient_t *apiClient, char *tenantId, char *priceListId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**priceListId** | **char \*** |  | 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PriceListsAPI_deletePriceListPriceAsync**
```c
// Deletes a price list entry
//
// Deletes the specified price entry from a price list.
//
empty_envelope_t* PriceListsAPI_deletePriceListPriceAsync(apiClient_t *apiClient, char *tenantId, char *priceListId, char *priceId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**priceListId** | **char \*** |  | 
**priceId** | **char \*** |  | 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PriceListsAPI_getPriceListAsync**
```c
// Gets a price list by ID
//
// Retrieves the details of a price list using its unique identifier.
//
price_list_dto_envelope_t* PriceListsAPI_getPriceListAsync(apiClient_t *apiClient, char *tenantId, char *priceListId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**priceListId** | **char \*** |  | 

### Return type

[price_list_dto_envelope_t](price_list_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PriceListsAPI_getPriceListPriceAsync**
```c
// Gets a price list entry by ID
//
// Retrieves a specific price entry from a price list.
//
item_price_dto_envelope_t* PriceListsAPI_getPriceListPriceAsync(apiClient_t *apiClient, char *tenantId, char *priceListId, char *priceId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**priceListId** | **char \*** |  | 
**priceId** | **char \*** |  | 

### Return type

[item_price_dto_envelope_t](item_price_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PriceListsAPI_getPriceListPricesAsync**
```c
// Retrieves prices in a price list
//
// Gets all price entries for a specific price list with OData support.
//
item_price_dto_list_envelope_t* PriceListsAPI_getPriceListPricesAsync(apiClient_t *apiClient, char *tenantId, char *priceListId, char *itemId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**priceListId** | **char \*** |  | 
**itemId** | **char \*** |  | [optional] 

### Return type

[item_price_dto_list_envelope_t](item_price_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PriceListsAPI_getPriceListsAsync**
```c
// Retrieves all price lists
//
// Gets all price lists for the current tenant with OData support.
//
price_list_dto_list_envelope_t* PriceListsAPI_getPriceListsAsync(apiClient_t *apiClient, char *tenantId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 

### Return type

[price_list_dto_list_envelope_t](price_list_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PriceListsAPI_getPriceListsCountAsync**
```c
// Counts price lists
//
// Gets the count of price lists for the current tenant.
//
int32_envelope_t* PriceListsAPI_getPriceListsCountAsync(apiClient_t *apiClient, char *tenantId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PriceListsAPI_updatePriceListAsync**
```c
// Updates a price list
//
// Updates the specified price list.
//
empty_envelope_t* PriceListsAPI_updatePriceListAsync(apiClient_t *apiClient, char *tenantId, char *priceListId, price_list_update_dto_t *price_list_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**priceListId** | **char \*** |  | 
**price_list_update_dto** | **[price_list_update_dto_t](price_list_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PriceListsAPI_updatePriceListPriceAsync**
```c
// Updates a price list entry
//
// Updates the specified price entry in a price list.
//
empty_envelope_t* PriceListsAPI_updatePriceListPriceAsync(apiClient_t *apiClient, char *tenantId, char *priceListId, char *priceId, item_price_update_dto_t *item_price_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**priceListId** | **char \*** |  | 
**priceId** | **char \*** |  | 
**item_price_update_dto** | **[item_price_update_dto_t](item_price_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

