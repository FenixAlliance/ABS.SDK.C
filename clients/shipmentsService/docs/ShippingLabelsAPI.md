# ShippingLabelsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ShippingLabelsAPI_createShippingLabelAsync**](ShippingLabelsAPI.md#ShippingLabelsAPI_createShippingLabelAsync) | **POST** /api/v2/ShipmentsService/ShippingLabels | Create a shipping label
[**ShippingLabelsAPI_deleteShippingLabelAsync**](ShippingLabelsAPI.md#ShippingLabelsAPI_deleteShippingLabelAsync) | **DELETE** /api/v2/ShipmentsService/ShippingLabels/{labelId} | Delete a shipping label
[**ShippingLabelsAPI_getShippingLabelByIdAsync**](ShippingLabelsAPI.md#ShippingLabelsAPI_getShippingLabelByIdAsync) | **GET** /api/v2/ShipmentsService/ShippingLabels/{labelId} | Get shipping label by ID
[**ShippingLabelsAPI_getShippingLabelsAsync**](ShippingLabelsAPI.md#ShippingLabelsAPI_getShippingLabelsAsync) | **GET** /api/v2/ShipmentsService/ShippingLabels | Get all shipping labels
[**ShippingLabelsAPI_getShippingLabelsCountAsync**](ShippingLabelsAPI.md#ShippingLabelsAPI_getShippingLabelsCountAsync) | **GET** /api/v2/ShipmentsService/ShippingLabels/Count | Get shipping labels count
[**ShippingLabelsAPI_updateShippingLabelAsync**](ShippingLabelsAPI.md#ShippingLabelsAPI_updateShippingLabelAsync) | **PUT** /api/v2/ShipmentsService/ShippingLabels/{labelId} | Update a shipping label


# **ShippingLabelsAPI_createShippingLabelAsync**
```c
// Create a shipping label
//
// Creates a new shipping label.
//
void ShippingLabelsAPI_createShippingLabelAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, shipping_label_create_dto_t *shipping_label_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**shipping_label_create_dto** | **[shipping_label_create_dto_t](shipping_label_create_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ShippingLabelsAPI_deleteShippingLabelAsync**
```c
// Delete a shipping label
//
// Deletes a shipping label.
//
void ShippingLabelsAPI_deleteShippingLabelAsync(apiClient_t *apiClient, char *tenantId, char *labelId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**labelId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ShippingLabelsAPI_getShippingLabelByIdAsync**
```c
// Get shipping label by ID
//
// Retrieves a specific shipping label.
//
shipping_label_dto_envelope_t* ShippingLabelsAPI_getShippingLabelByIdAsync(apiClient_t *apiClient, char *tenantId, char *labelId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**labelId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[shipping_label_dto_envelope_t](shipping_label_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ShippingLabelsAPI_getShippingLabelsAsync**
```c
// Get all shipping labels
//
// Retrieves all shipping labels for the specified tenant.
//
shipping_label_dto_list_envelope_t* ShippingLabelsAPI_getShippingLabelsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[shipping_label_dto_list_envelope_t](shipping_label_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ShippingLabelsAPI_getShippingLabelsCountAsync**
```c
// Get shipping labels count
//
// Returns the count of shipping labels.
//
int32_envelope_t* ShippingLabelsAPI_getShippingLabelsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **ShippingLabelsAPI_updateShippingLabelAsync**
```c
// Update a shipping label
//
// Updates an existing shipping label.
//
void ShippingLabelsAPI_updateShippingLabelAsync(apiClient_t *apiClient, char *tenantId, char *labelId, char *api_version, char *x_api_version, shipping_label_update_dto_t *shipping_label_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**labelId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**shipping_label_update_dto** | **[shipping_label_update_dto_t](shipping_label_update_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

