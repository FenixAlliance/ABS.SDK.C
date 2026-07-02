# MaintenanceVisitsAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**MaintenanceVisitsAPI_createMaintenanceVisitAsync**](MaintenanceVisitsAPI.md#MaintenanceVisitsAPI_createMaintenanceVisitAsync) | **POST** /api/v2/SupportService/MaintenanceVisits | Create a maintenance visit
[**MaintenanceVisitsAPI_deleteMaintenanceVisitAsync**](MaintenanceVisitsAPI.md#MaintenanceVisitsAPI_deleteMaintenanceVisitAsync) | **DELETE** /api/v2/SupportService/MaintenanceVisits/{maintenanceVisitId} | Delete a maintenance visit
[**MaintenanceVisitsAPI_getMaintenanceVisitAsync**](MaintenanceVisitsAPI.md#MaintenanceVisitsAPI_getMaintenanceVisitAsync) | **GET** /api/v2/SupportService/MaintenanceVisits/{maintenanceVisitId} | Retrieve a maintenance visit by ID
[**MaintenanceVisitsAPI_getMaintenanceVisitsAsync**](MaintenanceVisitsAPI.md#MaintenanceVisitsAPI_getMaintenanceVisitsAsync) | **GET** /api/v2/SupportService/MaintenanceVisits | Retrieve maintenance visits
[**MaintenanceVisitsAPI_getMaintenanceVisitsCountAsync**](MaintenanceVisitsAPI.md#MaintenanceVisitsAPI_getMaintenanceVisitsCountAsync) | **GET** /api/v2/SupportService/MaintenanceVisits/Count | Get maintenance visits count
[**MaintenanceVisitsAPI_patchMaintenanceVisitAsync**](MaintenanceVisitsAPI.md#MaintenanceVisitsAPI_patchMaintenanceVisitAsync) | **PATCH** /api/v2/SupportService/MaintenanceVisits/{maintenanceVisitId} | Patch a maintenance visit
[**MaintenanceVisitsAPI_updateMaintenanceVisitAsync**](MaintenanceVisitsAPI.md#MaintenanceVisitsAPI_updateMaintenanceVisitAsync) | **PUT** /api/v2/SupportService/MaintenanceVisits/{maintenanceVisitId} | Update a maintenance visit


# **MaintenanceVisitsAPI_createMaintenanceVisitAsync**
```c
// Create a maintenance visit
//
empty_envelope_t* MaintenanceVisitsAPI_createMaintenanceVisitAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, maintenance_visit_create_dto_t *maintenance_visit_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**maintenance_visit_create_dto** | **[maintenance_visit_create_dto_t](maintenance_visit_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **MaintenanceVisitsAPI_deleteMaintenanceVisitAsync**
```c
// Delete a maintenance visit
//
empty_envelope_t* MaintenanceVisitsAPI_deleteMaintenanceVisitAsync(apiClient_t *apiClient, char *tenantId, char *maintenanceVisitId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**maintenanceVisitId** | **char \*** |  | 
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

# **MaintenanceVisitsAPI_getMaintenanceVisitAsync**
```c
// Retrieve a maintenance visit by ID
//
maintenance_visit_dto_envelope_t* MaintenanceVisitsAPI_getMaintenanceVisitAsync(apiClient_t *apiClient, char *tenantId, char *maintenanceVisitId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**maintenanceVisitId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[maintenance_visit_dto_envelope_t](maintenance_visit_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **MaintenanceVisitsAPI_getMaintenanceVisitsAsync**
```c
// Retrieve maintenance visits
//
maintenance_visit_dto_list_envelope_t* MaintenanceVisitsAPI_getMaintenanceVisitsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[maintenance_visit_dto_list_envelope_t](maintenance_visit_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **MaintenanceVisitsAPI_getMaintenanceVisitsCountAsync**
```c
// Get maintenance visits count
//
int32_envelope_t* MaintenanceVisitsAPI_getMaintenanceVisitsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **MaintenanceVisitsAPI_patchMaintenanceVisitAsync**
```c
// Patch a maintenance visit
//
// Partially updates an existing maintenance visit by its unique identifier.
//
empty_envelope_t* MaintenanceVisitsAPI_patchMaintenanceVisitAsync(apiClient_t *apiClient, char *tenantId, char *maintenanceVisitId, char *api_version, char *x_api_version, list_t *operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**maintenanceVisitId** | **char \*** |  | 
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

# **MaintenanceVisitsAPI_updateMaintenanceVisitAsync**
```c
// Update a maintenance visit
//
empty_envelope_t* MaintenanceVisitsAPI_updateMaintenanceVisitAsync(apiClient_t *apiClient, char *tenantId, char *maintenanceVisitId, char *api_version, char *x_api_version, object_t *body);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**maintenanceVisitId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**body** | **[object_t](object.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

