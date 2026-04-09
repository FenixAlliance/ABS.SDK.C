# CompareAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CompareAPI_addItemToCompareTableAsync**](CompareAPI.md#CompareAPI_addItemToCompareTableAsync) | **POST** /api/v2/CartService/Compare | Add an item to the compare table
[**CompareAPI_getItemToCompareRecord**](CompareAPI.md#CompareAPI_getItemToCompareRecord) | **GET** /api/v2/CartService/Compare/{recordId}/Details | Get compare record details
[**CompareAPI_getItemToCompareRecords**](CompareAPI.md#CompareAPI_getItemToCompareRecords) | **GET** /api/v2/CartService/Compare/{cartId} | Get items to compare in a cart
[**CompareAPI_removeItemFromCompareTable**](CompareAPI.md#CompareAPI_removeItemFromCompareTable) | **DELETE** /api/v2/CartService/Compare/{recordId} | Remove an item from the compare table


# **CompareAPI_addItemToCompareTableAsync**
```c
// Add an item to the compare table
//
// Adds a product to the compare table for the specified cart with tracking.
//
item_cart_record_dto_t* CompareAPI_addItemToCompareTableAsync(apiClient_t *apiClient, char *api_version, char *x_api_version, add_product_to_compare_request_t *add_product_to_compare_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**add_product_to_compare_request** | **[add_product_to_compare_request_t](add_product_to_compare_request.md) \*** |  | [optional] 

### Return type

[item_cart_record_dto_t](item_cart_record_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CompareAPI_getItemToCompareRecord**
```c
// Get compare record details
//
// Retrieves the details of a specific item-to-compare cart record.
//
item_to_compare_cart_record_dto_envelope_t* CompareAPI_getItemToCompareRecord(apiClient_t *apiClient, char *recordId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**recordId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_to_compare_cart_record_dto_envelope_t](item_to_compare_cart_record_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CompareAPI_getItemToCompareRecords**
```c
// Get items to compare in a cart
//
// Retrieves all items added to the compare table for the specified cart.
//
item_to_compare_cart_record_dto_list_envelope_t* CompareAPI_getItemToCompareRecords(apiClient_t *apiClient, char *cartId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**cartId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_to_compare_cart_record_dto_list_envelope_t](item_to_compare_cart_record_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CompareAPI_removeItemFromCompareTable**
```c
// Remove an item from the compare table
//
// Removes a specific record from the compare table by its record ID.
//
item_to_compare_cart_record_dto_t* CompareAPI_removeItemFromCompareTable(apiClient_t *apiClient, char *recordId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**recordId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_to_compare_cart_record_dto_t](item_to_compare_cart_record_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

