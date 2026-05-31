# ShippingClassesAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ShippingClassesAPI_createShippingClassAsync**](ShippingClassesAPI.md#ShippingClassesAPI_createShippingClassAsync) | **POST** /api/v2/ShipmentsService/ShippingClasses | Create a shipping class
[**ShippingClassesAPI_deleteShippingClassAsync**](ShippingClassesAPI.md#ShippingClassesAPI_deleteShippingClassAsync) | **DELETE** /api/v2/ShipmentsService/ShippingClasses/{classId} | Delete a shipping class
[**ShippingClassesAPI_getShippingClassByIdAsync**](ShippingClassesAPI.md#ShippingClassesAPI_getShippingClassByIdAsync) | **GET** /api/v2/ShipmentsService/ShippingClasses/{classId} | Get shipping class by ID
[**ShippingClassesAPI_getShippingClassesAsync**](ShippingClassesAPI.md#ShippingClassesAPI_getShippingClassesAsync) | **GET** /api/v2/ShipmentsService/ShippingClasses | Get all shipping classes
[**ShippingClassesAPI_getShippingClassesCountAsync**](ShippingClassesAPI.md#ShippingClassesAPI_getShippingClassesCountAsync) | **GET** /api/v2/ShipmentsService/ShippingClasses/Count | Get shipping classes count
[**ShippingClassesAPI_updateShippingClassAsync**](ShippingClassesAPI.md#ShippingClassesAPI_updateShippingClassAsync) | **PUT** /api/v2/ShipmentsService/ShippingClasses/{classId} | Update a shipping class


# **ShippingClassesAPI_createShippingClassAsync**
```c
// Create a shipping class
//
// Creates a new shipping class.
//
void ShippingClassesAPI_createShippingClassAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, shipping_class_create_dto_t *shipping_class_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**shipping_class_create_dto** | **[shipping_class_create_dto_t](shipping_class_create_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ShippingClassesAPI_deleteShippingClassAsync**
```c
// Delete a shipping class
//
// Deletes a shipping class.
//
void ShippingClassesAPI_deleteShippingClassAsync(apiClient_t *apiClient, char *tenantId, char *classId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**classId** | **char \*** |  | 
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

# **ShippingClassesAPI_getShippingClassByIdAsync**
```c
// Get shipping class by ID
//
// Retrieves a specific shipping class.
//
shipping_class_dto_envelope_t* ShippingClassesAPI_getShippingClassByIdAsync(apiClient_t *apiClient, char *tenantId, char *classId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**classId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[shipping_class_dto_envelope_t](shipping_class_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ShippingClassesAPI_getShippingClassesAsync**
```c
// Get all shipping classes
//
// Retrieves all shipping classes for the specified tenant.
//
shipping_class_dto_list_envelope_t* ShippingClassesAPI_getShippingClassesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[shipping_class_dto_list_envelope_t](shipping_class_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ShippingClassesAPI_getShippingClassesCountAsync**
```c
// Get shipping classes count
//
// Returns the count of shipping classes.
//
int32_envelope_t* ShippingClassesAPI_getShippingClassesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **ShippingClassesAPI_updateShippingClassAsync**
```c
// Update a shipping class
//
// Updates an existing shipping class.
//
void ShippingClassesAPI_updateShippingClassAsync(apiClient_t *apiClient, char *tenantId, char *classId, char *api_version, char *x_api_version, shipping_class_update_dto_t *shipping_class_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**classId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**shipping_class_update_dto** | **[shipping_class_update_dto_t](shipping_class_update_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

