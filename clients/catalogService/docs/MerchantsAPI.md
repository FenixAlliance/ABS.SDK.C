# MerchantsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**MerchantsAPI_getMerchantById**](MerchantsAPI.md#MerchantsAPI_getMerchantById) | **GET** /api/v2/CatalogService/Merchants/{merchantId} | Get merchant by ID
[**MerchantsAPI_getMerchants**](MerchantsAPI.md#MerchantsAPI_getMerchants) | **GET** /api/v2/CatalogService/Merchants | Get all merchants
[**MerchantsAPI_getMerchantsCount**](MerchantsAPI.md#MerchantsAPI_getMerchantsCount) | **GET** /api/v2/CatalogService/Merchants/Count | Count merchants


# **MerchantsAPI_getMerchantById**
```c
// Get merchant by ID
//
// Retrieves a merchant by its unique identifier.
//
merchant_dto_envelope_t* MerchantsAPI_getMerchantById(apiClient_t *apiClient, char *merchantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**merchantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[merchant_dto_envelope_t](merchant_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **MerchantsAPI_getMerchants**
```c
// Get all merchants
//
// Retrieves all merchants, optionally filtered by OData query options.
//
merchant_dto_list_envelope_t* MerchantsAPI_getMerchants(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[merchant_dto_list_envelope_t](merchant_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **MerchantsAPI_getMerchantsCount**
```c
// Count merchants
//
// Counts the number of merchants, optionally filtered by OData query options.
//
int32_envelope_t* MerchantsAPI_getMerchantsCount(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
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

