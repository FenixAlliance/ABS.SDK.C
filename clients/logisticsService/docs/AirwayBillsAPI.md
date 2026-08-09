# AirwayBillsAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**AirwayBillsAPI_addAirwayBillLineAsync**](AirwayBillsAPI.md#AirwayBillsAPI_addAirwayBillLineAsync) | **POST** /api/v2/LogisticsService/AirwayBills/{billId}/Lines | Add a line to airway bill
[**AirwayBillsAPI_cancelAirwayBillAsync**](AirwayBillsAPI.md#AirwayBillsAPI_cancelAirwayBillAsync) | **POST** /api/v2/LogisticsService/AirwayBills/{billId}/Cancel | Cancel an airway bill
[**AirwayBillsAPI_createAirwayBillAsync**](AirwayBillsAPI.md#AirwayBillsAPI_createAirwayBillAsync) | **POST** /api/v2/LogisticsService/AirwayBills | Create an airway bill
[**AirwayBillsAPI_deleteAirwayBillAsync**](AirwayBillsAPI.md#AirwayBillsAPI_deleteAirwayBillAsync) | **DELETE** /api/v2/LogisticsService/AirwayBills/{billId} | Delete an airway bill
[**AirwayBillsAPI_getAirwayBillByIdAsync**](AirwayBillsAPI.md#AirwayBillsAPI_getAirwayBillByIdAsync) | **GET** /api/v2/LogisticsService/AirwayBills/{billId} | Get airway bill by ID
[**AirwayBillsAPI_getAirwayBillLinesAsync**](AirwayBillsAPI.md#AirwayBillsAPI_getAirwayBillLinesAsync) | **GET** /api/v2/LogisticsService/AirwayBills/{billId}/Lines | Get airway bill lines
[**AirwayBillsAPI_getAirwayBillLinesCountAsync**](AirwayBillsAPI.md#AirwayBillsAPI_getAirwayBillLinesCountAsync) | **GET** /api/v2/LogisticsService/AirwayBills/{billId}/Lines/Count | Get airway bill lines count
[**AirwayBillsAPI_getAirwayBillsAsync**](AirwayBillsAPI.md#AirwayBillsAPI_getAirwayBillsAsync) | **GET** /api/v2/LogisticsService/AirwayBills | Get all airway bills
[**AirwayBillsAPI_getAirwayBillsCountAsync**](AirwayBillsAPI.md#AirwayBillsAPI_getAirwayBillsCountAsync) | **GET** /api/v2/LogisticsService/AirwayBills/Count | Get airway bills count
[**AirwayBillsAPI_issueAirwayBillAsync**](AirwayBillsAPI.md#AirwayBillsAPI_issueAirwayBillAsync) | **POST** /api/v2/LogisticsService/AirwayBills/{billId}/Issue | Issue an airway bill
[**AirwayBillsAPI_markAirwayBillArrivedAsync**](AirwayBillsAPI.md#AirwayBillsAPI_markAirwayBillArrivedAsync) | **POST** /api/v2/LogisticsService/AirwayBills/{billId}/MarkArrived | Mark airway bill arrived
[**AirwayBillsAPI_markAirwayBillDeliveredAsync**](AirwayBillsAPI.md#AirwayBillsAPI_markAirwayBillDeliveredAsync) | **POST** /api/v2/LogisticsService/AirwayBills/{billId}/MarkDelivered | Mark airway bill delivered
[**AirwayBillsAPI_markAirwayBillInTransitAsync**](AirwayBillsAPI.md#AirwayBillsAPI_markAirwayBillInTransitAsync) | **POST** /api/v2/LogisticsService/AirwayBills/{billId}/MarkInTransit | Mark airway bill in transit
[**AirwayBillsAPI_patchAirwayBillAsync**](AirwayBillsAPI.md#AirwayBillsAPI_patchAirwayBillAsync) | **PATCH** /api/v2/LogisticsService/AirwayBills/{billId} | Patch an airway bill
[**AirwayBillsAPI_patchAirwayBillLineAsync**](AirwayBillsAPI.md#AirwayBillsAPI_patchAirwayBillLineAsync) | **PATCH** /api/v2/LogisticsService/AirwayBills/{billId}/Lines/{lineId} | Patch an airway bill line
[**AirwayBillsAPI_removeAirwayBillLineAsync**](AirwayBillsAPI.md#AirwayBillsAPI_removeAirwayBillLineAsync) | **DELETE** /api/v2/LogisticsService/AirwayBills/{billId}/Lines/{lineId} | Remove an airway bill line
[**AirwayBillsAPI_updateAirwayBillAsync**](AirwayBillsAPI.md#AirwayBillsAPI_updateAirwayBillAsync) | **PUT** /api/v2/LogisticsService/AirwayBills/{billId} | Update an airway bill
[**AirwayBillsAPI_updateAirwayBillLineAsync**](AirwayBillsAPI.md#AirwayBillsAPI_updateAirwayBillLineAsync) | **PUT** /api/v2/LogisticsService/AirwayBills/{billId}/Lines/{lineId} | Update an airway bill line


# **AirwayBillsAPI_addAirwayBillLineAsync**
```c
// Add a line to airway bill
//
// Adds a new line to an airway bill.
//
empty_envelope_t* AirwayBillsAPI_addAirwayBillLineAsync(apiClient_t *apiClient, char *tenantId, char *billId, char *api_version, char *x_api_version, waybill_line_create_dto_t *waybill_line_create_dto);
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

# **AirwayBillsAPI_cancelAirwayBillAsync**
```c
// Cancel an airway bill
//
// Cancels an airway bill.
//
empty_envelope_t* AirwayBillsAPI_cancelAirwayBillAsync(apiClient_t *apiClient, char *tenantId, char *billId, char *api_version, char *x_api_version);
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

# **AirwayBillsAPI_createAirwayBillAsync**
```c
// Create an airway bill
//
// Creates a new airway bill for the specified tenant.
//
empty_envelope_t* AirwayBillsAPI_createAirwayBillAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, airway_bill_create_dto_t *airway_bill_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**airway_bill_create_dto** | **[airway_bill_create_dto_t](airway_bill_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AirwayBillsAPI_deleteAirwayBillAsync**
```c
// Delete an airway bill
//
// Deletes an airway bill.
//
empty_envelope_t* AirwayBillsAPI_deleteAirwayBillAsync(apiClient_t *apiClient, char *tenantId, char *billId, char *api_version, char *x_api_version);
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

# **AirwayBillsAPI_getAirwayBillByIdAsync**
```c
// Get airway bill by ID
//
// Retrieves a specific airway bill by its identifier.
//
airway_bill_dto_envelope_t* AirwayBillsAPI_getAirwayBillByIdAsync(apiClient_t *apiClient, char *tenantId, char *billId, char *api_version, char *x_api_version);
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

[airway_bill_dto_envelope_t](airway_bill_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AirwayBillsAPI_getAirwayBillLinesAsync**
```c
// Get airway bill lines
//
// Retrieves all lines for a specific airway bill.
//
waybill_line_dto_list_envelope_t* AirwayBillsAPI_getAirwayBillLinesAsync(apiClient_t *apiClient, char *tenantId, char *billId, char *api_version, char *x_api_version, waybill_line_dto_collection_query_parameters_t *waybill_line_dto_collection_query_parameters);
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

# **AirwayBillsAPI_getAirwayBillLinesCountAsync**
```c
// Get airway bill lines count
//
// Returns the count of lines for a specific airway bill.
//
int32_envelope_t* AirwayBillsAPI_getAirwayBillLinesCountAsync(apiClient_t *apiClient, char *tenantId, char *billId, char *api_version, char *x_api_version, waybill_line_dto_collection_query_parameters_t *waybill_line_dto_collection_query_parameters);
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

# **AirwayBillsAPI_getAirwayBillsAsync**
```c
// Get all airway bills
//
// Retrieves all airway bills for the specified tenant.
//
airway_bill_dto_list_envelope_t* AirwayBillsAPI_getAirwayBillsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, airway_bill_dto_collection_query_parameters_t *airway_bill_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**airway_bill_dto_collection_query_parameters** | **[airway_bill_dto_collection_query_parameters_t](airway_bill_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[airway_bill_dto_list_envelope_t](airway_bill_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AirwayBillsAPI_getAirwayBillsCountAsync**
```c
// Get airway bills count
//
// Returns the count of airway bills for the specified tenant.
//
int32_envelope_t* AirwayBillsAPI_getAirwayBillsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, airway_bill_dto_collection_query_parameters_t *airway_bill_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**airway_bill_dto_collection_query_parameters** | **[airway_bill_dto_collection_query_parameters_t](airway_bill_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AirwayBillsAPI_issueAirwayBillAsync**
```c
// Issue an airway bill
//
// Issues an airway bill.
//
empty_envelope_t* AirwayBillsAPI_issueAirwayBillAsync(apiClient_t *apiClient, char *tenantId, char *billId, char *api_version, char *x_api_version);
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

# **AirwayBillsAPI_markAirwayBillArrivedAsync**
```c
// Mark airway bill arrived
//
// Marks an airway bill as arrived.
//
empty_envelope_t* AirwayBillsAPI_markAirwayBillArrivedAsync(apiClient_t *apiClient, char *tenantId, char *billId, char *api_version, char *x_api_version);
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

# **AirwayBillsAPI_markAirwayBillDeliveredAsync**
```c
// Mark airway bill delivered
//
// Marks an airway bill as delivered.
//
empty_envelope_t* AirwayBillsAPI_markAirwayBillDeliveredAsync(apiClient_t *apiClient, char *tenantId, char *billId, char *api_version, char *x_api_version);
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

# **AirwayBillsAPI_markAirwayBillInTransitAsync**
```c
// Mark airway bill in transit
//
// Marks an airway bill as in transit.
//
empty_envelope_t* AirwayBillsAPI_markAirwayBillInTransitAsync(apiClient_t *apiClient, char *tenantId, char *billId, char *api_version, char *x_api_version);
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

# **AirwayBillsAPI_patchAirwayBillAsync**
```c
// Patch an airway bill
//
// Partially updates an existing airway bill using a JSON Patch document.
//
empty_envelope_t* AirwayBillsAPI_patchAirwayBillAsync(apiClient_t *apiClient, char *tenantId, char *billId, char *api_version, char *x_api_version, list_t *patch_operation);
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

# **AirwayBillsAPI_patchAirwayBillLineAsync**
```c
// Patch an airway bill line
//
// Partially updates a line on an airway bill using a JSON Patch document.
//
empty_envelope_t* AirwayBillsAPI_patchAirwayBillLineAsync(apiClient_t *apiClient, char *tenantId, char *billId, char *lineId, char *api_version, char *x_api_version, list_t *patch_operation);
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

# **AirwayBillsAPI_removeAirwayBillLineAsync**
```c
// Remove an airway bill line
//
// Removes a line from an airway bill.
//
empty_envelope_t* AirwayBillsAPI_removeAirwayBillLineAsync(apiClient_t *apiClient, char *tenantId, char *billId, char *lineId, char *api_version, char *x_api_version);
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

# **AirwayBillsAPI_updateAirwayBillAsync**
```c
// Update an airway bill
//
// Updates an existing airway bill.
//
empty_envelope_t* AirwayBillsAPI_updateAirwayBillAsync(apiClient_t *apiClient, char *tenantId, char *billId, char *api_version, char *x_api_version, airway_bill_update_dto_t *airway_bill_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**billId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**airway_bill_update_dto** | **[airway_bill_update_dto_t](airway_bill_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AirwayBillsAPI_updateAirwayBillLineAsync**
```c
// Update an airway bill line
//
// Updates an existing line on an airway bill.
//
empty_envelope_t* AirwayBillsAPI_updateAirwayBillLineAsync(apiClient_t *apiClient, char *tenantId, char *billId, char *lineId, char *api_version, char *x_api_version, waybill_line_update_dto_t *waybill_line_update_dto);
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

