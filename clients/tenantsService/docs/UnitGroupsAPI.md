# UnitGroupsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**UnitGroupsAPI_createUnitAsync**](UnitGroupsAPI.md#UnitGroupsAPI_createUnitAsync) | **POST** /api/v2/TenantsService/UnitGroups/{unitGroupId}/Units | Create a unit within a unit group
[**UnitGroupsAPI_createUnitGroupAsync**](UnitGroupsAPI.md#UnitGroupsAPI_createUnitGroupAsync) | **POST** /api/v2/TenantsService/UnitGroups | Create a new unit group
[**UnitGroupsAPI_deleteUnitAsync**](UnitGroupsAPI.md#UnitGroupsAPI_deleteUnitAsync) | **DELETE** /api/v2/TenantsService/UnitGroups/{unitGroupId}/Units/{unitId} | Delete a unit from a unit group
[**UnitGroupsAPI_deleteUnitGroupAsync**](UnitGroupsAPI.md#UnitGroupsAPI_deleteUnitGroupAsync) | **DELETE** /api/v2/TenantsService/UnitGroups/{unitGroupId} | Delete a unit group
[**UnitGroupsAPI_getUnitAsync**](UnitGroupsAPI.md#UnitGroupsAPI_getUnitAsync) | **GET** /api/v2/TenantsService/UnitGroups/{unitGroupId}/Units/{unitId} | Retrieve a unit by ID within a unit group
[**UnitGroupsAPI_getUnitGroupAsync**](UnitGroupsAPI.md#UnitGroupsAPI_getUnitGroupAsync) | **GET** /api/v2/TenantsService/UnitGroups/{unitGroupId} | Retrieve a unit group by ID
[**UnitGroupsAPI_getUnitGroupsAsync**](UnitGroupsAPI.md#UnitGroupsAPI_getUnitGroupsAsync) | **GET** /api/v2/TenantsService/UnitGroups | Retrieve a list of unit groups
[**UnitGroupsAPI_getUnitGroupsCountAsync**](UnitGroupsAPI.md#UnitGroupsAPI_getUnitGroupsCountAsync) | **GET** /api/v2/TenantsService/UnitGroups/Count | Get the count of unit groups
[**UnitGroupsAPI_getUnitsAsync**](UnitGroupsAPI.md#UnitGroupsAPI_getUnitsAsync) | **GET** /api/v2/TenantsService/UnitGroups/{unitGroupId}/Units | Retrieve units for a unit group
[**UnitGroupsAPI_getUnitsCountAsync**](UnitGroupsAPI.md#UnitGroupsAPI_getUnitsCountAsync) | **GET** /api/v2/TenantsService/UnitGroups/{unitGroupId}/Units/Count | Get the count of units in a unit group
[**UnitGroupsAPI_updateUnitAsync**](UnitGroupsAPI.md#UnitGroupsAPI_updateUnitAsync) | **PUT** /api/v2/TenantsService/UnitGroups/{unitGroupId}/Units/{unitId} | Update a unit within a unit group
[**UnitGroupsAPI_updateUnitGroupAsync**](UnitGroupsAPI.md#UnitGroupsAPI_updateUnitGroupAsync) | **PUT** /api/v2/TenantsService/UnitGroups/{unitGroupId} | Update a unit group


# **UnitGroupsAPI_createUnitAsync**
```c
// Create a unit within a unit group
//
// Creates a new unit within a specific unit group.
//
empty_envelope_t* UnitGroupsAPI_createUnitAsync(apiClient_t *apiClient, char *tenantId, char *unitGroupId, char *api_version, char *x_api_version, unit_create_dto_t *unit_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**unitGroupId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**unit_create_dto** | **[unit_create_dto_t](unit_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **UnitGroupsAPI_createUnitGroupAsync**
```c
// Create a new unit group
//
// Creates a new unit group for the specified tenant.
//
empty_envelope_t* UnitGroupsAPI_createUnitGroupAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, unit_group_create_dto_t *unit_group_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**unit_group_create_dto** | **[unit_group_create_dto_t](unit_group_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **UnitGroupsAPI_deleteUnitAsync**
```c
// Delete a unit from a unit group
//
// Deletes a unit from a specific unit group.
//
empty_envelope_t* UnitGroupsAPI_deleteUnitAsync(apiClient_t *apiClient, char *tenantId, char *unitGroupId, char *unitId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**unitGroupId** | **char \*** |  | 
**unitId** | **char \*** |  | 
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

# **UnitGroupsAPI_deleteUnitGroupAsync**
```c
// Delete a unit group
//
// Deletes a unit group by its unique identifier.
//
empty_envelope_t* UnitGroupsAPI_deleteUnitGroupAsync(apiClient_t *apiClient, char *tenantId, char *unitGroupId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**unitGroupId** | **char \*** |  | 
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

# **UnitGroupsAPI_getUnitAsync**
```c
// Retrieve a unit by ID within a unit group
//
// Retrieves a single unit by its unique identifier within a specific unit group.
//
unit_dto_envelope_t* UnitGroupsAPI_getUnitAsync(apiClient_t *apiClient, char *tenantId, char *unitGroupId, char *unitId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**unitGroupId** | **char \*** |  | 
**unitId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[unit_dto_envelope_t](unit_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **UnitGroupsAPI_getUnitGroupAsync**
```c
// Retrieve a unit group by ID
//
// Retrieves a single unit group by its unique identifier.
//
unit_group_dto_envelope_t* UnitGroupsAPI_getUnitGroupAsync(apiClient_t *apiClient, char *tenantId, char *unitGroupId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**unitGroupId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[unit_group_dto_envelope_t](unit_group_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **UnitGroupsAPI_getUnitGroupsAsync**
```c
// Retrieve a list of unit groups
//
// Retrieves a list of unit groups for the specified tenant with OData query support.
//
unit_group_dto_list_envelope_t* UnitGroupsAPI_getUnitGroupsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[unit_group_dto_list_envelope_t](unit_group_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **UnitGroupsAPI_getUnitGroupsCountAsync**
```c
// Get the count of unit groups
//
// Returns the total count of unit groups for the specified tenant with OData query support.
//
int32_envelope_t* UnitGroupsAPI_getUnitGroupsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **UnitGroupsAPI_getUnitsAsync**
```c
// Retrieve units for a unit group
//
// Retrieves a list of units belonging to a specific unit group.
//
unit_dto_list_envelope_t* UnitGroupsAPI_getUnitsAsync(apiClient_t *apiClient, char *tenantId, char *unitGroupId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**unitGroupId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[unit_dto_list_envelope_t](unit_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **UnitGroupsAPI_getUnitsCountAsync**
```c
// Get the count of units in a unit group
//
// Returns the total count of units in a specific unit group.
//
int32_envelope_t* UnitGroupsAPI_getUnitsCountAsync(apiClient_t *apiClient, char *tenantId, char *unitGroupId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**unitGroupId** | **char \*** |  | 
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

# **UnitGroupsAPI_updateUnitAsync**
```c
// Update a unit within a unit group
//
// Updates an existing unit within a specific unit group.
//
empty_envelope_t* UnitGroupsAPI_updateUnitAsync(apiClient_t *apiClient, char *tenantId, char *unitGroupId, char *unitId, char *api_version, char *x_api_version, unit_update_dto_t *unit_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**unitGroupId** | **char \*** |  | 
**unitId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**unit_update_dto** | **[unit_update_dto_t](unit_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **UnitGroupsAPI_updateUnitGroupAsync**
```c
// Update a unit group
//
// Updates an existing unit group by its unique identifier.
//
empty_envelope_t* UnitGroupsAPI_updateUnitGroupAsync(apiClient_t *apiClient, char *tenantId, char *unitGroupId, char *api_version, char *x_api_version, unit_group_update_dto_t *unit_group_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**unitGroupId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**unit_group_update_dto** | **[unit_group_update_dto_t](unit_group_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

