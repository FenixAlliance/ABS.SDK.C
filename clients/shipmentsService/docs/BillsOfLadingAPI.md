# BillsOfLadingAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**BillsOfLadingAPI_createBillOfLadingAsync**](BillsOfLadingAPI.md#BillsOfLadingAPI_createBillOfLadingAsync) | **POST** /api/v2/ShipmentsService/BillsOfLading | Create a bill of lading
[**BillsOfLadingAPI_createBillOfLadingLineAsync**](BillsOfLadingAPI.md#BillsOfLadingAPI_createBillOfLadingLineAsync) | **POST** /api/v2/ShipmentsService/BillsOfLading/{billOfLadingId}/Lines | Create a bill of lading line
[**BillsOfLadingAPI_deleteBillOfLadingAsync**](BillsOfLadingAPI.md#BillsOfLadingAPI_deleteBillOfLadingAsync) | **DELETE** /api/v2/ShipmentsService/BillsOfLading/{billOfLadingId} | Delete a bill of lading
[**BillsOfLadingAPI_deleteBillOfLadingLineAsync**](BillsOfLadingAPI.md#BillsOfLadingAPI_deleteBillOfLadingLineAsync) | **DELETE** /api/v2/ShipmentsService/BillsOfLading/{billOfLadingId}/Lines/{lineId} | Delete a bill of lading line
[**BillsOfLadingAPI_getBillOfLadingByIdAsync**](BillsOfLadingAPI.md#BillsOfLadingAPI_getBillOfLadingByIdAsync) | **GET** /api/v2/ShipmentsService/BillsOfLading/{billOfLadingId} | Get bill of lading by ID
[**BillsOfLadingAPI_getBillOfLadingLineByIdAsync**](BillsOfLadingAPI.md#BillsOfLadingAPI_getBillOfLadingLineByIdAsync) | **GET** /api/v2/ShipmentsService/BillsOfLading/{billOfLadingId}/Lines/{lineId} | Get bill of lading line by ID
[**BillsOfLadingAPI_getBillOfLadingLinesAsync**](BillsOfLadingAPI.md#BillsOfLadingAPI_getBillOfLadingLinesAsync) | **GET** /api/v2/ShipmentsService/BillsOfLading/{billOfLadingId}/Lines | Get bill of lading lines
[**BillsOfLadingAPI_getBillOfLadingLinesCountAsync**](BillsOfLadingAPI.md#BillsOfLadingAPI_getBillOfLadingLinesCountAsync) | **GET** /api/v2/ShipmentsService/BillsOfLading/{billOfLadingId}/Lines/Count | Get bill of lading lines count
[**BillsOfLadingAPI_getBillsOfLadingAsync**](BillsOfLadingAPI.md#BillsOfLadingAPI_getBillsOfLadingAsync) | **GET** /api/v2/ShipmentsService/BillsOfLading | Get all bills of lading
[**BillsOfLadingAPI_getBillsOfLadingCountAsync**](BillsOfLadingAPI.md#BillsOfLadingAPI_getBillsOfLadingCountAsync) | **GET** /api/v2/ShipmentsService/BillsOfLading/Count | Get bills of lading count
[**BillsOfLadingAPI_patchBillOfLadingAsync**](BillsOfLadingAPI.md#BillsOfLadingAPI_patchBillOfLadingAsync) | **PATCH** /api/v2/ShipmentsService/BillsOfLading/{billOfLadingId} | Patch a bill of lading
[**BillsOfLadingAPI_patchBillOfLadingLineAsync**](BillsOfLadingAPI.md#BillsOfLadingAPI_patchBillOfLadingLineAsync) | **PATCH** /api/v2/ShipmentsService/BillsOfLading/{billOfLadingId}/Lines/{lineId} | Patch a bill of lading line
[**BillsOfLadingAPI_updateBillOfLadingAsync**](BillsOfLadingAPI.md#BillsOfLadingAPI_updateBillOfLadingAsync) | **PUT** /api/v2/ShipmentsService/BillsOfLading/{billOfLadingId} | Update a bill of lading
[**BillsOfLadingAPI_updateBillOfLadingLineAsync**](BillsOfLadingAPI.md#BillsOfLadingAPI_updateBillOfLadingLineAsync) | **PUT** /api/v2/ShipmentsService/BillsOfLading/{billOfLadingId}/Lines/{lineId} | Update a bill of lading line


# **BillsOfLadingAPI_createBillOfLadingAsync**
```c
// Create a bill of lading
//
// Creates a new bill of lading for the specified tenant.
//
empty_envelope_t* BillsOfLadingAPI_createBillOfLadingAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, bill_of_lading_create_dto_t *bill_of_lading_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**bill_of_lading_create_dto** | **[bill_of_lading_create_dto_t](bill_of_lading_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BillsOfLadingAPI_createBillOfLadingLineAsync**
```c
// Create a bill of lading line
//
// Creates a new line for a bill of lading.
//
empty_envelope_t* BillsOfLadingAPI_createBillOfLadingLineAsync(apiClient_t *apiClient, char *tenantId, char *billOfLadingId, char *api_version, char *x_api_version, bill_of_lading_line_create_dto_t *bill_of_lading_line_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**billOfLadingId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**bill_of_lading_line_create_dto** | **[bill_of_lading_line_create_dto_t](bill_of_lading_line_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BillsOfLadingAPI_deleteBillOfLadingAsync**
```c
// Delete a bill of lading
//
// Deletes a bill of lading.
//
empty_envelope_t* BillsOfLadingAPI_deleteBillOfLadingAsync(apiClient_t *apiClient, char *tenantId, char *billOfLadingId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**billOfLadingId** | **char \*** |  | 
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

# **BillsOfLadingAPI_deleteBillOfLadingLineAsync**
```c
// Delete a bill of lading line
//
// Deletes a line from a bill of lading.
//
empty_envelope_t* BillsOfLadingAPI_deleteBillOfLadingLineAsync(apiClient_t *apiClient, char *tenantId, char *billOfLadingId, char *lineId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**billOfLadingId** | **char \*** |  | 
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

# **BillsOfLadingAPI_getBillOfLadingByIdAsync**
```c
// Get bill of lading by ID
//
// Retrieves a specific bill of lading by its identifier.
//
bill_of_lading_dto_envelope_t* BillsOfLadingAPI_getBillOfLadingByIdAsync(apiClient_t *apiClient, char *tenantId, char *billOfLadingId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**billOfLadingId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[bill_of_lading_dto_envelope_t](bill_of_lading_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BillsOfLadingAPI_getBillOfLadingLineByIdAsync**
```c
// Get bill of lading line by ID
//
// Retrieves a specific line from a bill of lading.
//
bill_of_lading_line_dto_envelope_t* BillsOfLadingAPI_getBillOfLadingLineByIdAsync(apiClient_t *apiClient, char *tenantId, char *billOfLadingId, char *lineId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**billOfLadingId** | **char \*** |  | 
**lineId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[bill_of_lading_line_dto_envelope_t](bill_of_lading_line_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BillsOfLadingAPI_getBillOfLadingLinesAsync**
```c
// Get bill of lading lines
//
// Retrieves all lines for a specific bill of lading.
//
bill_of_lading_line_dto_list_envelope_t* BillsOfLadingAPI_getBillOfLadingLinesAsync(apiClient_t *apiClient, char *tenantId, char *billOfLadingId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**billOfLadingId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[bill_of_lading_line_dto_list_envelope_t](bill_of_lading_line_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BillsOfLadingAPI_getBillOfLadingLinesCountAsync**
```c
// Get bill of lading lines count
//
// Returns the count of lines for a specific bill of lading.
//
int32_envelope_t* BillsOfLadingAPI_getBillOfLadingLinesCountAsync(apiClient_t *apiClient, char *tenantId, char *billOfLadingId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**billOfLadingId** | **char \*** |  | 
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

# **BillsOfLadingAPI_getBillsOfLadingAsync**
```c
// Get all bills of lading
//
// Retrieves all bills of lading for the specified tenant.
//
bill_of_lading_dto_list_envelope_t* BillsOfLadingAPI_getBillsOfLadingAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[bill_of_lading_dto_list_envelope_t](bill_of_lading_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BillsOfLadingAPI_getBillsOfLadingCountAsync**
```c
// Get bills of lading count
//
// Returns the count of bills of lading for the specified tenant.
//
int32_envelope_t* BillsOfLadingAPI_getBillsOfLadingCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **BillsOfLadingAPI_patchBillOfLadingAsync**
```c
// Patch a bill of lading
//
// Partially updates an existing bill of lading using JSON Patch.
//
empty_envelope_t* BillsOfLadingAPI_patchBillOfLadingAsync(apiClient_t *apiClient, char *tenantId, char *billOfLadingId, char *api_version, char *x_api_version, list_t *operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**billOfLadingId** | **char \*** |  | 
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

# **BillsOfLadingAPI_patchBillOfLadingLineAsync**
```c
// Patch a bill of lading line
//
// Partially updates an existing line on a bill of lading using JSON Patch.
//
empty_envelope_t* BillsOfLadingAPI_patchBillOfLadingLineAsync(apiClient_t *apiClient, char *tenantId, char *billOfLadingId, char *lineId, char *api_version, char *x_api_version, list_t *operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**billOfLadingId** | **char \*** |  | 
**lineId** | **char \*** |  | 
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

# **BillsOfLadingAPI_updateBillOfLadingAsync**
```c
// Update a bill of lading
//
// Updates an existing bill of lading.
//
empty_envelope_t* BillsOfLadingAPI_updateBillOfLadingAsync(apiClient_t *apiClient, char *tenantId, char *billOfLadingId, char *api_version, char *x_api_version, bill_of_lading_update_dto_t *bill_of_lading_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**billOfLadingId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**bill_of_lading_update_dto** | **[bill_of_lading_update_dto_t](bill_of_lading_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BillsOfLadingAPI_updateBillOfLadingLineAsync**
```c
// Update a bill of lading line
//
// Updates an existing line on a bill of lading.
//
empty_envelope_t* BillsOfLadingAPI_updateBillOfLadingLineAsync(apiClient_t *apiClient, char *tenantId, char *billOfLadingId, char *lineId, char *api_version, char *x_api_version, bill_of_lading_line_update_dto_t *bill_of_lading_line_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**billOfLadingId** | **char \*** |  | 
**lineId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**bill_of_lading_line_update_dto** | **[bill_of_lading_line_update_dto_t](bill_of_lading_line_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

