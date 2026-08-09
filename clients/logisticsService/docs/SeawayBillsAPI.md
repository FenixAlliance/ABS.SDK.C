# SeawayBillsAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SeawayBillsAPI_addSeawayBillLineAsync**](SeawayBillsAPI.md#SeawayBillsAPI_addSeawayBillLineAsync) | **POST** /api/v2/LogisticsService/SeawayBills/{billId}/Lines | Add a line to seaway bill
[**SeawayBillsAPI_cancelSeawayBillAsync**](SeawayBillsAPI.md#SeawayBillsAPI_cancelSeawayBillAsync) | **POST** /api/v2/LogisticsService/SeawayBills/{billId}/Cancel | Cancel a seaway bill
[**SeawayBillsAPI_createSeawayBillAsync**](SeawayBillsAPI.md#SeawayBillsAPI_createSeawayBillAsync) | **POST** /api/v2/LogisticsService/SeawayBills | Create a seaway bill
[**SeawayBillsAPI_deleteSeawayBillAsync**](SeawayBillsAPI.md#SeawayBillsAPI_deleteSeawayBillAsync) | **DELETE** /api/v2/LogisticsService/SeawayBills/{billId} | Delete a seaway bill
[**SeawayBillsAPI_getSeawayBillByIdAsync**](SeawayBillsAPI.md#SeawayBillsAPI_getSeawayBillByIdAsync) | **GET** /api/v2/LogisticsService/SeawayBills/{billId} | Get seaway bill by ID
[**SeawayBillsAPI_getSeawayBillLinesAsync**](SeawayBillsAPI.md#SeawayBillsAPI_getSeawayBillLinesAsync) | **GET** /api/v2/LogisticsService/SeawayBills/{billId}/Lines | Get seaway bill lines
[**SeawayBillsAPI_getSeawayBillLinesCountAsync**](SeawayBillsAPI.md#SeawayBillsAPI_getSeawayBillLinesCountAsync) | **GET** /api/v2/LogisticsService/SeawayBills/{billId}/Lines/Count | Get seaway bill lines count
[**SeawayBillsAPI_getSeawayBillsAsync**](SeawayBillsAPI.md#SeawayBillsAPI_getSeawayBillsAsync) | **GET** /api/v2/LogisticsService/SeawayBills | Get all seaway bills
[**SeawayBillsAPI_getSeawayBillsCountAsync**](SeawayBillsAPI.md#SeawayBillsAPI_getSeawayBillsCountAsync) | **GET** /api/v2/LogisticsService/SeawayBills/Count | Get seaway bills count
[**SeawayBillsAPI_issueSeawayBillAsync**](SeawayBillsAPI.md#SeawayBillsAPI_issueSeawayBillAsync) | **POST** /api/v2/LogisticsService/SeawayBills/{billId}/Issue | Issue a seaway bill
[**SeawayBillsAPI_markSeawayBillArrivedAsync**](SeawayBillsAPI.md#SeawayBillsAPI_markSeawayBillArrivedAsync) | **POST** /api/v2/LogisticsService/SeawayBills/{billId}/MarkArrived | Mark seaway bill arrived
[**SeawayBillsAPI_markSeawayBillInTransitAsync**](SeawayBillsAPI.md#SeawayBillsAPI_markSeawayBillInTransitAsync) | **POST** /api/v2/LogisticsService/SeawayBills/{billId}/MarkInTransit | Mark seaway bill in transit
[**SeawayBillsAPI_patchSeawayBillAsync**](SeawayBillsAPI.md#SeawayBillsAPI_patchSeawayBillAsync) | **PATCH** /api/v2/LogisticsService/SeawayBills/{billId} | Patch a seaway bill
[**SeawayBillsAPI_patchSeawayBillLineAsync**](SeawayBillsAPI.md#SeawayBillsAPI_patchSeawayBillLineAsync) | **PATCH** /api/v2/LogisticsService/SeawayBills/{billId}/Lines/{lineId} | Patch a seaway bill line
[**SeawayBillsAPI_releaseSeawayBillAsync**](SeawayBillsAPI.md#SeawayBillsAPI_releaseSeawayBillAsync) | **POST** /api/v2/LogisticsService/SeawayBills/{billId}/Release | Release a seaway bill
[**SeawayBillsAPI_removeSeawayBillLineAsync**](SeawayBillsAPI.md#SeawayBillsAPI_removeSeawayBillLineAsync) | **DELETE** /api/v2/LogisticsService/SeawayBills/{billId}/Lines/{lineId} | Remove a seaway bill line
[**SeawayBillsAPI_updateSeawayBillAsync**](SeawayBillsAPI.md#SeawayBillsAPI_updateSeawayBillAsync) | **PUT** /api/v2/LogisticsService/SeawayBills/{billId} | Update a seaway bill
[**SeawayBillsAPI_updateSeawayBillLineAsync**](SeawayBillsAPI.md#SeawayBillsAPI_updateSeawayBillLineAsync) | **PUT** /api/v2/LogisticsService/SeawayBills/{billId}/Lines/{lineId} | Update a seaway bill line


# **SeawayBillsAPI_addSeawayBillLineAsync**
```c
// Add a line to seaway bill
//
// Adds a new line to a seaway bill.
//
empty_envelope_t* SeawayBillsAPI_addSeawayBillLineAsync(apiClient_t *apiClient, char *tenantId, char *billId, char *api_version, char *x_api_version, waybill_line_create_dto_t *waybill_line_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**billId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**waybill_line_create_dto** | **[waybill_line_create_dto_t](waybill_line_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SeawayBillsAPI_cancelSeawayBillAsync**
```c
// Cancel a seaway bill
//
// Cancels a seaway bill.
//
empty_envelope_t* SeawayBillsAPI_cancelSeawayBillAsync(apiClient_t *apiClient, char *tenantId, char *billId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**billId** | **char \*** |  | 
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

# **SeawayBillsAPI_createSeawayBillAsync**
```c
// Create a seaway bill
//
// Creates a new seaway bill for the specified tenant.
//
empty_envelope_t* SeawayBillsAPI_createSeawayBillAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, seaway_bill_create_dto_t *seaway_bill_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**seaway_bill_create_dto** | **[seaway_bill_create_dto_t](seaway_bill_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SeawayBillsAPI_deleteSeawayBillAsync**
```c
// Delete a seaway bill
//
// Deletes a seaway bill.
//
empty_envelope_t* SeawayBillsAPI_deleteSeawayBillAsync(apiClient_t *apiClient, char *tenantId, char *billId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**billId** | **char \*** |  | 
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

# **SeawayBillsAPI_getSeawayBillByIdAsync**
```c
// Get seaway bill by ID
//
// Retrieves a specific seaway bill by its identifier.
//
seaway_bill_dto_envelope_t* SeawayBillsAPI_getSeawayBillByIdAsync(apiClient_t *apiClient, char *tenantId, char *billId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**billId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[seaway_bill_dto_envelope_t](seaway_bill_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SeawayBillsAPI_getSeawayBillLinesAsync**
```c
// Get seaway bill lines
//
// Retrieves all lines for a specific seaway bill.
//
waybill_line_dto_list_envelope_t* SeawayBillsAPI_getSeawayBillLinesAsync(apiClient_t *apiClient, char *tenantId, char *billId, char *api_version, char *x_api_version, waybill_line_dto_collection_query_parameters_t *waybill_line_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**billId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**waybill_line_dto_collection_query_parameters** | **[waybill_line_dto_collection_query_parameters_t](waybill_line_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[waybill_line_dto_list_envelope_t](waybill_line_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SeawayBillsAPI_getSeawayBillLinesCountAsync**
```c
// Get seaway bill lines count
//
// Returns the count of lines for a specific seaway bill.
//
int32_envelope_t* SeawayBillsAPI_getSeawayBillLinesCountAsync(apiClient_t *apiClient, char *tenantId, char *billId, char *api_version, char *x_api_version, waybill_line_dto_collection_query_parameters_t *waybill_line_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**billId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**waybill_line_dto_collection_query_parameters** | **[waybill_line_dto_collection_query_parameters_t](waybill_line_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SeawayBillsAPI_getSeawayBillsAsync**
```c
// Get all seaway bills
//
// Retrieves all seaway bills for the specified tenant.
//
seaway_bill_dto_list_envelope_t* SeawayBillsAPI_getSeawayBillsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, seaway_bill_dto_collection_query_parameters_t *seaway_bill_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**seaway_bill_dto_collection_query_parameters** | **[seaway_bill_dto_collection_query_parameters_t](seaway_bill_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[seaway_bill_dto_list_envelope_t](seaway_bill_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SeawayBillsAPI_getSeawayBillsCountAsync**
```c
// Get seaway bills count
//
// Returns the count of seaway bills for the specified tenant.
//
int32_envelope_t* SeawayBillsAPI_getSeawayBillsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, seaway_bill_dto_collection_query_parameters_t *seaway_bill_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**seaway_bill_dto_collection_query_parameters** | **[seaway_bill_dto_collection_query_parameters_t](seaway_bill_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SeawayBillsAPI_issueSeawayBillAsync**
```c
// Issue a seaway bill
//
// Issues a seaway bill.
//
empty_envelope_t* SeawayBillsAPI_issueSeawayBillAsync(apiClient_t *apiClient, char *tenantId, char *billId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**billId** | **char \*** |  | 
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

# **SeawayBillsAPI_markSeawayBillArrivedAsync**
```c
// Mark seaway bill arrived
//
// Marks a seaway bill as arrived.
//
empty_envelope_t* SeawayBillsAPI_markSeawayBillArrivedAsync(apiClient_t *apiClient, char *tenantId, char *billId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**billId** | **char \*** |  | 
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

# **SeawayBillsAPI_markSeawayBillInTransitAsync**
```c
// Mark seaway bill in transit
//
// Marks a seaway bill as in transit.
//
empty_envelope_t* SeawayBillsAPI_markSeawayBillInTransitAsync(apiClient_t *apiClient, char *tenantId, char *billId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**billId** | **char \*** |  | 
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

# **SeawayBillsAPI_patchSeawayBillAsync**
```c
// Patch a seaway bill
//
// Partially updates an existing seaway bill using a JSON Patch document.
//
empty_envelope_t* SeawayBillsAPI_patchSeawayBillAsync(apiClient_t *apiClient, char *tenantId, char *billId, char *api_version, char *x_api_version, list_t *patch_operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**billId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**patch_operation** | **[list_t](patch_operation.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SeawayBillsAPI_patchSeawayBillLineAsync**
```c
// Patch a seaway bill line
//
// Partially updates a line on a seaway bill using a JSON Patch document.
//
empty_envelope_t* SeawayBillsAPI_patchSeawayBillLineAsync(apiClient_t *apiClient, char *tenantId, char *billId, char *lineId, char *api_version, char *x_api_version, list_t *patch_operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**billId** | **char \*** |  | 
**lineId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**patch_operation** | **[list_t](patch_operation.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SeawayBillsAPI_releaseSeawayBillAsync**
```c
// Release a seaway bill
//
// Releases a seaway bill.
//
empty_envelope_t* SeawayBillsAPI_releaseSeawayBillAsync(apiClient_t *apiClient, char *tenantId, char *billId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**billId** | **char \*** |  | 
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

# **SeawayBillsAPI_removeSeawayBillLineAsync**
```c
// Remove a seaway bill line
//
// Removes a line from a seaway bill.
//
empty_envelope_t* SeawayBillsAPI_removeSeawayBillLineAsync(apiClient_t *apiClient, char *tenantId, char *billId, char *lineId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**billId** | **char \*** |  | 
**lineId** | **char \*** |  | 
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

# **SeawayBillsAPI_updateSeawayBillAsync**
```c
// Update a seaway bill
//
// Updates an existing seaway bill.
//
empty_envelope_t* SeawayBillsAPI_updateSeawayBillAsync(apiClient_t *apiClient, char *tenantId, char *billId, char *api_version, char *x_api_version, seaway_bill_update_dto_t *seaway_bill_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**billId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**seaway_bill_update_dto** | **[seaway_bill_update_dto_t](seaway_bill_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SeawayBillsAPI_updateSeawayBillLineAsync**
```c
// Update a seaway bill line
//
// Updates an existing line on a seaway bill.
//
empty_envelope_t* SeawayBillsAPI_updateSeawayBillLineAsync(apiClient_t *apiClient, char *tenantId, char *billId, char *lineId, char *api_version, char *x_api_version, waybill_line_update_dto_t *waybill_line_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**billId** | **char \*** |  | 
**lineId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**waybill_line_update_dto** | **[waybill_line_update_dto_t](waybill_line_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

