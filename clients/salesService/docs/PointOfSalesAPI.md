# PointOfSalesAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**PointOfSalesAPI_countPointOfSalesAsync**](PointOfSalesAPI.md#PointOfSalesAPI_countPointOfSalesAsync) | **GET** /api/v2/SalesService/PointOfSales/Count | Get point of sales count
[**PointOfSalesAPI_createPointOfSaleAsync**](PointOfSalesAPI.md#PointOfSalesAPI_createPointOfSaleAsync) | **POST** /api/v2/SalesService/PointOfSales | Create a point of sale
[**PointOfSalesAPI_deletePointOfSaleAsync**](PointOfSalesAPI.md#PointOfSalesAPI_deletePointOfSaleAsync) | **DELETE** /api/v2/SalesService/PointOfSales/{pointOfSaleId} | Delete a point of sale
[**PointOfSalesAPI_getPointOfSaleAsync**](PointOfSalesAPI.md#PointOfSalesAPI_getPointOfSaleAsync) | **GET** /api/v2/SalesService/PointOfSales/{pointOfSaleId} | Get point of sale by ID
[**PointOfSalesAPI_getPointOfSalesAsync**](PointOfSalesAPI.md#PointOfSalesAPI_getPointOfSalesAsync) | **GET** /api/v2/SalesService/PointOfSales | Get point of sales
[**PointOfSalesAPI_patchPointOfSaleAsync**](PointOfSalesAPI.md#PointOfSalesAPI_patchPointOfSaleAsync) | **PATCH** /api/v2/SalesService/PointOfSales/{pointOfSaleId} | Patch a point of sale
[**PointOfSalesAPI_updatePointOfSaleAsync**](PointOfSalesAPI.md#PointOfSalesAPI_updatePointOfSaleAsync) | **PUT** /api/v2/SalesService/PointOfSales/{pointOfSaleId} | Update a point of sale


# **PointOfSalesAPI_countPointOfSalesAsync**
```c
// Get point of sales count
//
// Returns the total count of point of sales for the specified tenant with OData filter support.
//
int32_envelope_t* PointOfSalesAPI_countPointOfSalesAsync(apiClient_t *apiClient, char *tenantId, point_of_sale_dto_collection_query_parameters_t *point_of_sale_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**point_of_sale_dto_collection_query_parameters** | **[point_of_sale_dto_collection_query_parameters_t](point_of_sale_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PointOfSalesAPI_createPointOfSaleAsync**
```c
// Create a point of sale
//
// Creates a new point of sale for the specified tenant.
//
empty_envelope_t* PointOfSalesAPI_createPointOfSaleAsync(apiClient_t *apiClient, char *tenantId, point_of_sale_create_dto_t *point_of_sale_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**point_of_sale_create_dto** | **[point_of_sale_create_dto_t](point_of_sale_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PointOfSalesAPI_deletePointOfSaleAsync**
```c
// Delete a point of sale
//
// Deletes an existing point of sale by its unique identifier.
//
empty_envelope_t* PointOfSalesAPI_deletePointOfSaleAsync(apiClient_t *apiClient, char *tenantId, char *pointOfSaleId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**pointOfSaleId** | **char \*** |  | 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PointOfSalesAPI_getPointOfSaleAsync**
```c
// Get point of sale by ID
//
// Retrieves a single point of sale by its unique identifier.
//
point_of_sale_dto_envelope_t* PointOfSalesAPI_getPointOfSaleAsync(apiClient_t *apiClient, char *tenantId, char *pointOfSaleId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**pointOfSaleId** | **char \*** |  | 

### Return type

[point_of_sale_dto_envelope_t](point_of_sale_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PointOfSalesAPI_getPointOfSalesAsync**
```c
// Get point of sales
//
// Retrieves a list of point of sales for the specified tenant with OData query support.
//
point_of_sale_dto_list_envelope_t* PointOfSalesAPI_getPointOfSalesAsync(apiClient_t *apiClient, char *tenantId, point_of_sale_dto_collection_query_parameters_t *point_of_sale_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**point_of_sale_dto_collection_query_parameters** | **[point_of_sale_dto_collection_query_parameters_t](point_of_sale_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[point_of_sale_dto_list_envelope_t](point_of_sale_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PointOfSalesAPI_patchPointOfSaleAsync**
```c
// Patch a point of sale
//
// Partially updates an existing point of sale using a JSON Patch document.
//
empty_envelope_t* PointOfSalesAPI_patchPointOfSaleAsync(apiClient_t *apiClient, char *tenantId, char *pointOfSaleId, list_t *patch_operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**pointOfSaleId** | **char \*** |  | 
**patch_operation** | **[list_t](patch_operation.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PointOfSalesAPI_updatePointOfSaleAsync**
```c
// Update a point of sale
//
// Updates an existing point of sale by its unique identifier.
//
empty_envelope_t* PointOfSalesAPI_updatePointOfSaleAsync(apiClient_t *apiClient, char *tenantId, char *pointOfSaleId, point_of_sale_update_dto_t *point_of_sale_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**pointOfSaleId** | **char \*** |  | 
**point_of_sale_update_dto** | **[point_of_sale_update_dto_t](point_of_sale_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

