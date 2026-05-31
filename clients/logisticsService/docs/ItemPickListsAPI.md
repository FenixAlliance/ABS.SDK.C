# ItemPickListsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ItemPickListsAPI_createItemPickListAsync**](ItemPickListsAPI.md#ItemPickListsAPI_createItemPickListAsync) | **POST** /api/v2/LogisticsService/ItemPickLists | Create an item pick list
[**ItemPickListsAPI_createItemPickListEntryAsync**](ItemPickListsAPI.md#ItemPickListsAPI_createItemPickListEntryAsync) | **POST** /api/v2/LogisticsService/ItemPickLists/{pickListId}/Entries | Create a pick list entry
[**ItemPickListsAPI_deleteItemPickListAsync**](ItemPickListsAPI.md#ItemPickListsAPI_deleteItemPickListAsync) | **DELETE** /api/v2/LogisticsService/ItemPickLists/{pickListId} | Delete an item pick list
[**ItemPickListsAPI_deleteItemPickListEntryAsync**](ItemPickListsAPI.md#ItemPickListsAPI_deleteItemPickListEntryAsync) | **DELETE** /api/v2/LogisticsService/ItemPickLists/{pickListId}/Entries/{entryId} | Delete a pick list entry
[**ItemPickListsAPI_getItemPickListByIdAsync**](ItemPickListsAPI.md#ItemPickListsAPI_getItemPickListByIdAsync) | **GET** /api/v2/LogisticsService/ItemPickLists/{pickListId} | Get item pick list by ID
[**ItemPickListsAPI_getItemPickListEntriesAsync**](ItemPickListsAPI.md#ItemPickListsAPI_getItemPickListEntriesAsync) | **GET** /api/v2/LogisticsService/ItemPickLists/{pickListId}/Entries | Get pick list entries
[**ItemPickListsAPI_getItemPickListEntriesCountAsync**](ItemPickListsAPI.md#ItemPickListsAPI_getItemPickListEntriesCountAsync) | **GET** /api/v2/LogisticsService/ItemPickLists/{pickListId}/Entries/Count | Get pick list entries count
[**ItemPickListsAPI_getItemPickListEntryByIdAsync**](ItemPickListsAPI.md#ItemPickListsAPI_getItemPickListEntryByIdAsync) | **GET** /api/v2/LogisticsService/ItemPickLists/{pickListId}/Entries/{entryId} | Get pick list entry by ID
[**ItemPickListsAPI_getItemPickListsAsync**](ItemPickListsAPI.md#ItemPickListsAPI_getItemPickListsAsync) | **GET** /api/v2/LogisticsService/ItemPickLists | Get all item pick lists
[**ItemPickListsAPI_getItemPickListsCountAsync**](ItemPickListsAPI.md#ItemPickListsAPI_getItemPickListsCountAsync) | **GET** /api/v2/LogisticsService/ItemPickLists/Count | Get item pick lists count
[**ItemPickListsAPI_updateItemPickListAsync**](ItemPickListsAPI.md#ItemPickListsAPI_updateItemPickListAsync) | **PUT** /api/v2/LogisticsService/ItemPickLists/{pickListId} | Update an item pick list
[**ItemPickListsAPI_updateItemPickListEntryAsync**](ItemPickListsAPI.md#ItemPickListsAPI_updateItemPickListEntryAsync) | **PUT** /api/v2/LogisticsService/ItemPickLists/{pickListId}/Entries/{entryId} | Update a pick list entry


# **ItemPickListsAPI_createItemPickListAsync**
```c
// Create an item pick list
//
// Creates a new item pick list.
//
empty_envelope_t* ItemPickListsAPI_createItemPickListAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, item_pick_list_create_dto_t *item_pick_list_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**item_pick_list_create_dto** | **[item_pick_list_create_dto_t](item_pick_list_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemPickListsAPI_createItemPickListEntryAsync**
```c
// Create a pick list entry
//
// Creates a new pick list entry.
//
empty_envelope_t* ItemPickListsAPI_createItemPickListEntryAsync(apiClient_t *apiClient, char *tenantId, char *pickListId, char *api_version, char *x_api_version, item_pick_list_entry_create_dto_t *item_pick_list_entry_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**pickListId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**item_pick_list_entry_create_dto** | **[item_pick_list_entry_create_dto_t](item_pick_list_entry_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemPickListsAPI_deleteItemPickListAsync**
```c
// Delete an item pick list
//
// Deletes an item pick list.
//
empty_envelope_t* ItemPickListsAPI_deleteItemPickListAsync(apiClient_t *apiClient, char *tenantId, char *pickListId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**pickListId** | **char \*** |  | 
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

# **ItemPickListsAPI_deleteItemPickListEntryAsync**
```c
// Delete a pick list entry
//
// Deletes a pick list entry.
//
empty_envelope_t* ItemPickListsAPI_deleteItemPickListEntryAsync(apiClient_t *apiClient, char *tenantId, char *pickListId, char *entryId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**pickListId** | **char \*** |  | 
**entryId** | **char \*** |  | 
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

# **ItemPickListsAPI_getItemPickListByIdAsync**
```c
// Get item pick list by ID
//
// Retrieves a specific item pick list.
//
item_pick_list_dto_envelope_t* ItemPickListsAPI_getItemPickListByIdAsync(apiClient_t *apiClient, char *tenantId, char *pickListId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**pickListId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_pick_list_dto_envelope_t](item_pick_list_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemPickListsAPI_getItemPickListEntriesAsync**
```c
// Get pick list entries
//
// Retrieves all entries for the specified pick list.
//
item_pick_list_entry_dto_list_envelope_t* ItemPickListsAPI_getItemPickListEntriesAsync(apiClient_t *apiClient, char *tenantId, char *pickListId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**pickListId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_pick_list_entry_dto_list_envelope_t](item_pick_list_entry_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemPickListsAPI_getItemPickListEntriesCountAsync**
```c
// Get pick list entries count
//
// Returns the count of pick list entries.
//
int32_envelope_t* ItemPickListsAPI_getItemPickListEntriesCountAsync(apiClient_t *apiClient, char *tenantId, char *pickListId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**pickListId** | **char \*** |  | 
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

# **ItemPickListsAPI_getItemPickListEntryByIdAsync**
```c
// Get pick list entry by ID
//
// Retrieves a specific pick list entry.
//
item_pick_list_entry_dto_envelope_t* ItemPickListsAPI_getItemPickListEntryByIdAsync(apiClient_t *apiClient, char *tenantId, char *pickListId, char *entryId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**pickListId** | **char \*** |  | 
**entryId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_pick_list_entry_dto_envelope_t](item_pick_list_entry_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemPickListsAPI_getItemPickListsAsync**
```c
// Get all item pick lists
//
// Retrieves all item pick lists for the specified tenant.
//
item_pick_list_dto_list_envelope_t* ItemPickListsAPI_getItemPickListsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_pick_list_dto_list_envelope_t](item_pick_list_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemPickListsAPI_getItemPickListsCountAsync**
```c
// Get item pick lists count
//
// Returns the count of item pick lists.
//
int32_envelope_t* ItemPickListsAPI_getItemPickListsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **ItemPickListsAPI_updateItemPickListAsync**
```c
// Update an item pick list
//
// Updates an existing item pick list.
//
empty_envelope_t* ItemPickListsAPI_updateItemPickListAsync(apiClient_t *apiClient, char *tenantId, char *pickListId, char *api_version, char *x_api_version, item_pick_list_update_dto_t *item_pick_list_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**pickListId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**item_pick_list_update_dto** | **[item_pick_list_update_dto_t](item_pick_list_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemPickListsAPI_updateItemPickListEntryAsync**
```c
// Update a pick list entry
//
// Updates an existing pick list entry.
//
empty_envelope_t* ItemPickListsAPI_updateItemPickListEntryAsync(apiClient_t *apiClient, char *tenantId, char *pickListId, char *entryId, char *api_version, char *x_api_version, item_pick_list_entry_update_dto_t *item_pick_list_entry_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**pickListId** | **char \*** |  | 
**entryId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**item_pick_list_entry_update_dto** | **[item_pick_list_entry_update_dto_t](item_pick_list_entry_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

