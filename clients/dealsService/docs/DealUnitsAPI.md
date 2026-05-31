# DealUnitsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**DealUnitsAPI_calculateDealUnitAsync**](DealUnitsAPI.md#DealUnitsAPI_calculateDealUnitAsync) | **PUT** /api/v2/DealsService/DealUnits/{dealUnitId}/Calculate | Calculate a deal unit
[**DealUnitsAPI_calculateDealUnitLineAsync**](DealUnitsAPI.md#DealUnitsAPI_calculateDealUnitLineAsync) | **PUT** /api/v2/DealsService/DealUnits/{dealUnitId}/Lines/{dealUnitLineId}/Calculate | Calculate a deal unit line
[**DealUnitsAPI_createDealUnitAsync**](DealUnitsAPI.md#DealUnitsAPI_createDealUnitAsync) | **POST** /api/v2/DealsService/DealUnits | Create a deal unit
[**DealUnitsAPI_createGetDealUnitLinesAsync**](DealUnitsAPI.md#DealUnitsAPI_createGetDealUnitLinesAsync) | **POST** /api/v2/DealsService/DealUnits/{dealUnitId}/Lines | Create a deal unit line
[**DealUnitsAPI_deleteDealUnitAsync**](DealUnitsAPI.md#DealUnitsAPI_deleteDealUnitAsync) | **DELETE** /api/v2/DealsService/DealUnits/{dealUnitId} | Delete a deal unit
[**DealUnitsAPI_deleteDealUnitPriceAsync**](DealUnitsAPI.md#DealUnitsAPI_deleteDealUnitPriceAsync) | **DELETE** /api/v2/DealsService/DealUnits/{dealUnitId}/Lines/{dealUnitLineId} | Delete a deal unit line
[**DealUnitsAPI_getDealUnitAsync**](DealUnitsAPI.md#DealUnitsAPI_getDealUnitAsync) | **GET** /api/v2/DealsService/DealUnits/{dealUnitId} | Get deal unit by ID
[**DealUnitsAPI_getDealUnitLinesAsync**](DealUnitsAPI.md#DealUnitsAPI_getDealUnitLinesAsync) | **GET** /api/v2/DealsService/DealUnits/{dealUnitId}/Lines | Get deal unit lines
[**DealUnitsAPI_getDealUnitLinesCountAsync**](DealUnitsAPI.md#DealUnitsAPI_getDealUnitLinesCountAsync) | **GET** /api/v2/DealsService/DealUnits/{dealUnitId}/Lines/Count | Get deal unit lines count
[**DealUnitsAPI_getDealUnitPriceAsync**](DealUnitsAPI.md#DealUnitsAPI_getDealUnitPriceAsync) | **GET** /api/v2/DealsService/DealUnits/{dealUnitId}/Lines/{dealUnitLineId} | Get a deal unit line by ID
[**DealUnitsAPI_getDealUnitsAsync**](DealUnitsAPI.md#DealUnitsAPI_getDealUnitsAsync) | **GET** /api/v2/DealsService/DealUnits | Get deal units
[**DealUnitsAPI_getDealUnitsCountAsync**](DealUnitsAPI.md#DealUnitsAPI_getDealUnitsCountAsync) | **GET** /api/v2/DealsService/DealUnits/Count | Get deal units count
[**DealUnitsAPI_getExtendedDealUnitAsync**](DealUnitsAPI.md#DealUnitsAPI_getExtendedDealUnitAsync) | **GET** /api/v2/DealsService/DealUnits/{dealUnitId}/Extended | Get extended deal unit by ID
[**DealUnitsAPI_getExtendedDealUnitsAsync**](DealUnitsAPI.md#DealUnitsAPI_getExtendedDealUnitsAsync) | **GET** /api/v2/DealsService/DealUnits/Extended | Get extended deal units
[**DealUnitsAPI_updateDealUnitAsync**](DealUnitsAPI.md#DealUnitsAPI_updateDealUnitAsync) | **PUT** /api/v2/DealsService/DealUnits/{dealUnitId} | Update a deal unit
[**DealUnitsAPI_updateDealUnitPriceAsync**](DealUnitsAPI.md#DealUnitsAPI_updateDealUnitPriceAsync) | **PUT** /api/v2/DealsService/DealUnits/{dealUnitId}/Lines/{dealUnitLineId} | Update a deal unit line


# **DealUnitsAPI_calculateDealUnitAsync**
```c
// Calculate a deal unit
//
// Triggers recalculation of totals and derived values for a specific deal unit.
//
empty_envelope_t* DealUnitsAPI_calculateDealUnitAsync(apiClient_t *apiClient, char *tenantId, char *dealUnitId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**dealUnitId** | **char \*** |  | 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DealUnitsAPI_calculateDealUnitLineAsync**
```c
// Calculate a deal unit line
//
// Triggers recalculation of totals and derived values for a specific deal unit line.
//
empty_envelope_t* DealUnitsAPI_calculateDealUnitLineAsync(apiClient_t *apiClient, char *tenantId, char *dealUnitId, char *dealUnitLineId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**dealUnitId** | **char \*** |  | 
**dealUnitLineId** | **char \*** |  | 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DealUnitsAPI_createDealUnitAsync**
```c
// Create a deal unit
//
// Creates a new deal unit for the specified tenant.
//
empty_envelope_t* DealUnitsAPI_createDealUnitAsync(apiClient_t *apiClient, char *tenantId, deal_unit_create_dto_t *deal_unit_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**deal_unit_create_dto** | **[deal_unit_create_dto_t](deal_unit_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DealUnitsAPI_createGetDealUnitLinesAsync**
```c
// Create a deal unit line
//
// Creates a new line within a specific deal unit.
//
empty_envelope_t* DealUnitsAPI_createGetDealUnitLinesAsync(apiClient_t *apiClient, char *tenantId, char *dealUnitId, deal_unit_line_create_dto_t *deal_unit_line_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**dealUnitId** | **char \*** |  | 
**deal_unit_line_create_dto** | **[deal_unit_line_create_dto_t](deal_unit_line_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DealUnitsAPI_deleteDealUnitAsync**
```c
// Delete a deal unit
//
// Deletes an existing deal unit by its unique identifier.
//
empty_envelope_t* DealUnitsAPI_deleteDealUnitAsync(apiClient_t *apiClient, char *tenantId, char *dealUnitId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**dealUnitId** | **char \*** |  | 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DealUnitsAPI_deleteDealUnitPriceAsync**
```c
// Delete a deal unit line
//
// Deletes an existing line from a specific deal unit.
//
empty_envelope_t* DealUnitsAPI_deleteDealUnitPriceAsync(apiClient_t *apiClient, char *tenantId, char *dealUnitId, char *dealUnitLineId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**dealUnitId** | **char \*** |  | 
**dealUnitLineId** | **char \*** |  | 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DealUnitsAPI_getDealUnitAsync**
```c
// Get deal unit by ID
//
// Retrieves a single deal unit by its unique identifier.
//
deal_unit_dto_envelope_t* DealUnitsAPI_getDealUnitAsync(apiClient_t *apiClient, char *tenantId, char *dealUnitId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**dealUnitId** | **char \*** |  | 

### Return type

[deal_unit_dto_envelope_t](deal_unit_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DealUnitsAPI_getDealUnitLinesAsync**
```c
// Get deal unit lines
//
// Retrieves a list of lines for a specific deal unit with OData query support.
//
deal_unit_line_dto_list_envelope_t* DealUnitsAPI_getDealUnitLinesAsync(apiClient_t *apiClient, char *tenantId, char *dealUnitId, char *itemId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**dealUnitId** | **char \*** |  | 
**itemId** | **char \*** |  | [optional] 

### Return type

[deal_unit_line_dto_list_envelope_t](deal_unit_line_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DealUnitsAPI_getDealUnitLinesCountAsync**
```c
// Get deal unit lines count
//
// Returns the total count of lines for a specific deal unit with OData filter support.
//
int32_envelope_t* DealUnitsAPI_getDealUnitLinesCountAsync(apiClient_t *apiClient, char *tenantId, char *dealUnitId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**dealUnitId** | **char \*** |  | 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DealUnitsAPI_getDealUnitPriceAsync**
```c
// Get a deal unit line by ID
//
// Retrieves a single deal unit line by its unique identifier.
//
deal_unit_line_dto_envelope_t* DealUnitsAPI_getDealUnitPriceAsync(apiClient_t *apiClient, char *tenantId, char *dealUnitId, char *dealUnitLineId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**dealUnitId** | **char \*** |  | 
**dealUnitLineId** | **char \*** |  | 

### Return type

[deal_unit_line_dto_envelope_t](deal_unit_line_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DealUnitsAPI_getDealUnitsAsync**
```c
// Get deal units
//
// Retrieves a list of deal units for the specified tenant with OData query support.
//
deal_unit_dto_list_envelope_t* DealUnitsAPI_getDealUnitsAsync(apiClient_t *apiClient, char *tenantId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 

### Return type

[deal_unit_dto_list_envelope_t](deal_unit_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DealUnitsAPI_getDealUnitsCountAsync**
```c
// Get deal units count
//
// Returns the total count of deal units for the specified tenant with OData filter support.
//
int32_envelope_t* DealUnitsAPI_getDealUnitsCountAsync(apiClient_t *apiClient, char *tenantId);
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

# **DealUnitsAPI_getExtendedDealUnitAsync**
```c
// Get extended deal unit by ID
//
// Retrieves a single deal unit with extended details by its unique identifier.
//
extended_deal_unit_dto_envelope_t* DealUnitsAPI_getExtendedDealUnitAsync(apiClient_t *apiClient, char *tenantId, char *dealUnitId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**dealUnitId** | **char \*** |  | 

### Return type

[extended_deal_unit_dto_envelope_t](extended_deal_unit_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DealUnitsAPI_getExtendedDealUnitsAsync**
```c
// Get extended deal units
//
// Retrieves a list of deal units with extended details for the specified tenant with OData query support.
//
extended_deal_unit_dto_list_envelope_t* DealUnitsAPI_getExtendedDealUnitsAsync(apiClient_t *apiClient, char *tenantId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 

### Return type

[extended_deal_unit_dto_list_envelope_t](extended_deal_unit_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DealUnitsAPI_updateDealUnitAsync**
```c
// Update a deal unit
//
// Updates an existing deal unit by its unique identifier.
//
empty_envelope_t* DealUnitsAPI_updateDealUnitAsync(apiClient_t *apiClient, char *tenantId, char *dealUnitId, deal_unit_update_dto_t *deal_unit_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**dealUnitId** | **char \*** |  | 
**deal_unit_update_dto** | **[deal_unit_update_dto_t](deal_unit_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DealUnitsAPI_updateDealUnitPriceAsync**
```c
// Update a deal unit line
//
// Updates an existing line within a specific deal unit.
//
empty_envelope_t* DealUnitsAPI_updateDealUnitPriceAsync(apiClient_t *apiClient, char *tenantId, char *dealUnitId, char *dealUnitLineId, deal_unit_line_update_dto_t *deal_unit_line_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**dealUnitId** | **char \*** |  | 
**dealUnitLineId** | **char \*** |  | 
**deal_unit_line_update_dto** | **[deal_unit_line_update_dto_t](deal_unit_line_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

