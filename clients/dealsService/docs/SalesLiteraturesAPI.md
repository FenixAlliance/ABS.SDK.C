# SalesLiteraturesAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SalesLiteraturesAPI_countSalesLiteraturesAsync**](SalesLiteraturesAPI.md#SalesLiteraturesAPI_countSalesLiteraturesAsync) | **GET** /api/v2/DealsService/SalesLiteratures/Count | Get sales literatures count
[**SalesLiteraturesAPI_createSalesLiteratureAsync**](SalesLiteraturesAPI.md#SalesLiteraturesAPI_createSalesLiteratureAsync) | **POST** /api/v2/DealsService/SalesLiteratures | Create a sales literature
[**SalesLiteraturesAPI_deleteSalesLiteratureAsync**](SalesLiteraturesAPI.md#SalesLiteraturesAPI_deleteSalesLiteratureAsync) | **DELETE** /api/v2/DealsService/SalesLiteratures/{salesLiteratureId} | Delete a sales literature
[**SalesLiteraturesAPI_getExtendedSalesLiteraturesAsync**](SalesLiteraturesAPI.md#SalesLiteraturesAPI_getExtendedSalesLiteraturesAsync) | **GET** /api/v2/DealsService/SalesLiteratures/Extended | Get extended sales literatures
[**SalesLiteraturesAPI_getSalesLiteratureAsync**](SalesLiteraturesAPI.md#SalesLiteraturesAPI_getSalesLiteratureAsync) | **GET** /api/v2/DealsService/SalesLiteratures/{salesLiteratureId} | Get sales literature by ID
[**SalesLiteraturesAPI_getSalesLiteraturesAsync**](SalesLiteraturesAPI.md#SalesLiteraturesAPI_getSalesLiteraturesAsync) | **GET** /api/v2/DealsService/SalesLiteratures | Get sales literatures
[**SalesLiteraturesAPI_updateSalesLiteratureAsync**](SalesLiteraturesAPI.md#SalesLiteraturesAPI_updateSalesLiteratureAsync) | **PUT** /api/v2/DealsService/SalesLiteratures/{salesLiteratureId} | Update a sales literature


# **SalesLiteraturesAPI_countSalesLiteraturesAsync**
```c
// Get sales literatures count
//
// Returns the total count of sales literatures for the specified tenant with OData filter support.
//
int32_envelope_t* SalesLiteraturesAPI_countSalesLiteraturesAsync(apiClient_t *apiClient, char *tenantId);
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

# **SalesLiteraturesAPI_createSalesLiteratureAsync**
```c
// Create a sales literature
//
// Creates a new sales literature for the specified tenant.
//
empty_envelope_t* SalesLiteraturesAPI_createSalesLiteratureAsync(apiClient_t *apiClient, char *tenantId, sales_literature_create_dto_t *sales_literature_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**sales_literature_create_dto** | **[sales_literature_create_dto_t](sales_literature_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SalesLiteraturesAPI_deleteSalesLiteratureAsync**
```c
// Delete a sales literature
//
// Deletes an existing sales literature by its unique identifier.
//
empty_envelope_t* SalesLiteraturesAPI_deleteSalesLiteratureAsync(apiClient_t *apiClient, char *tenantId, char *salesLiteratureId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**salesLiteratureId** | **char \*** |  | 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SalesLiteraturesAPI_getExtendedSalesLiteraturesAsync**
```c
// Get extended sales literatures
//
// Retrieves a list of sales literatures with extended details for the specified tenant with OData query support.
//
extended_sales_literature_dto_list_envelope_t* SalesLiteraturesAPI_getExtendedSalesLiteraturesAsync(apiClient_t *apiClient, char *tenantId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 

### Return type

[extended_sales_literature_dto_list_envelope_t](extended_sales_literature_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SalesLiteraturesAPI_getSalesLiteratureAsync**
```c
// Get sales literature by ID
//
// Retrieves a single sales literature by its unique identifier.
//
sales_literature_dto_envelope_t* SalesLiteraturesAPI_getSalesLiteratureAsync(apiClient_t *apiClient, char *tenantId, char *salesLiteratureId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**salesLiteratureId** | **char \*** |  | 

### Return type

[sales_literature_dto_envelope_t](sales_literature_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SalesLiteraturesAPI_getSalesLiteraturesAsync**
```c
// Get sales literatures
//
// Retrieves a list of sales literatures for the specified tenant with OData query support.
//
sales_literature_dto_list_envelope_t* SalesLiteraturesAPI_getSalesLiteraturesAsync(apiClient_t *apiClient, char *tenantId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 

### Return type

[sales_literature_dto_list_envelope_t](sales_literature_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SalesLiteraturesAPI_updateSalesLiteratureAsync**
```c
// Update a sales literature
//
// Updates an existing sales literature by its unique identifier.
//
empty_envelope_t* SalesLiteraturesAPI_updateSalesLiteratureAsync(apiClient_t *apiClient, char *tenantId, char *salesLiteratureId, sales_literature_update_dto_t *sales_literature_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**salesLiteratureId** | **char \*** |  | 
**sales_literature_update_dto** | **[sales_literature_update_dto_t](sales_literature_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

