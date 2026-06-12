# MenuContextsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**MenuContextsAPI_countMenuContextsAsync**](MenuContextsAPI.md#MenuContextsAPI_countMenuContextsAsync) | **GET** /api/v2/ContentService/MenuContexts/Count | Count menu contexts
[**MenuContextsAPI_createMenuContextAsync**](MenuContextsAPI.md#MenuContextsAPI_createMenuContextAsync) | **POST** /api/v2/ContentService/MenuContexts | Create a menu context
[**MenuContextsAPI_deleteMenuContextAsync**](MenuContextsAPI.md#MenuContextsAPI_deleteMenuContextAsync) | **DELETE** /api/v2/ContentService/MenuContexts/{menuContextId} | Delete a menu context
[**MenuContextsAPI_getMenuContextByIdAsync**](MenuContextsAPI.md#MenuContextsAPI_getMenuContextByIdAsync) | **GET** /api/v2/ContentService/MenuContexts/{menuContextId} | Get menu context by ID
[**MenuContextsAPI_getMenuContextsAsync**](MenuContextsAPI.md#MenuContextsAPI_getMenuContextsAsync) | **GET** /api/v2/ContentService/MenuContexts | Get menu contexts
[**MenuContextsAPI_updateMenuContextAsync**](MenuContextsAPI.md#MenuContextsAPI_updateMenuContextAsync) | **PUT** /api/v2/ContentService/MenuContexts/{menuContextId} | Update a menu context


# **MenuContextsAPI_countMenuContextsAsync**
```c
// Count menu contexts
//
// Counts all menu contexts for the specified tenant.
//
int32_envelope_t* MenuContextsAPI_countMenuContextsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **MenuContextsAPI_createMenuContextAsync**
```c
// Create a menu context
//
// Creates a new menu context for the specified tenant.
//
empty_envelope_t* MenuContextsAPI_createMenuContextAsync(apiClient_t *apiClient, char *tenantId, menu_context_create_dto_t *menu_context_create_dto, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**menu_context_create_dto** | **[menu_context_create_dto_t](menu_context_create_dto.md) \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **MenuContextsAPI_deleteMenuContextAsync**
```c
// Delete a menu context
//
// Deletes a menu context for the specified tenant.
//
empty_envelope_t* MenuContextsAPI_deleteMenuContextAsync(apiClient_t *apiClient, char *tenantId, char *menuContextId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**menuContextId** | **char \*** |  | 
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

# **MenuContextsAPI_getMenuContextByIdAsync**
```c
// Get menu context by ID
//
// Retrieves a specific menu context by its identifier.
//
menu_context_dto_envelope_t* MenuContextsAPI_getMenuContextByIdAsync(apiClient_t *apiClient, char *tenantId, char *menuContextId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**menuContextId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[menu_context_dto_envelope_t](menu_context_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **MenuContextsAPI_getMenuContextsAsync**
```c
// Get menu contexts
//
// Retrieves all menu contexts for the specified tenant.
//
menu_context_dto_list_envelope_t* MenuContextsAPI_getMenuContextsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[menu_context_dto_list_envelope_t](menu_context_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **MenuContextsAPI_updateMenuContextAsync**
```c
// Update a menu context
//
// Updates an existing menu context for the specified tenant.
//
empty_envelope_t* MenuContextsAPI_updateMenuContextAsync(apiClient_t *apiClient, char *tenantId, char *menuContextId, menu_context_update_dto_t *menu_context_update_dto, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**menuContextId** | **char \*** |  | 
**menu_context_update_dto** | **[menu_context_update_dto_t](menu_context_update_dto.md) \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

