# PortalsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**PortalsAPI_createSystemPortal**](PortalsAPI.md#PortalsAPI_createSystemPortal) | **POST** /api/v2/SystemService/Portals | Create a new system portal
[**PortalsAPI_deleteSystemPortal**](PortalsAPI.md#PortalsAPI_deleteSystemPortal) | **DELETE** /api/v2/SystemService/Portals/{portalId} | Delete a system portal
[**PortalsAPI_getSystemPortalById**](PortalsAPI.md#PortalsAPI_getSystemPortalById) | **GET** /api/v2/SystemService/Portals/{portalId} | Retrieve a single system portal by its ID
[**PortalsAPI_getSystemPortals**](PortalsAPI.md#PortalsAPI_getSystemPortals) | **GET** /api/v2/SystemService/Portals | Retrieve a list of system portals
[**PortalsAPI_getSystemPortalsCount**](PortalsAPI.md#PortalsAPI_getSystemPortalsCount) | **GET** /api/v2/SystemService/Portals/Count | Get the count of system portals
[**PortalsAPI_updateSystemPortal**](PortalsAPI.md#PortalsAPI_updateSystemPortal) | **PUT** /api/v2/SystemService/Portals/{portalId} | Update a system portal


# **PortalsAPI_createSystemPortal**
```c
// Create a new system portal
//
// Create a new web portal in the system
//
empty_envelope_t* PortalsAPI_createSystemPortal(apiClient_t *apiClient, char *api_version, char *x_api_version, web_portal_create_dto_t *web_portal_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**web_portal_create_dto** | **[web_portal_create_dto_t](web_portal_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PortalsAPI_deleteSystemPortal**
```c
// Delete a system portal
//
// Delete a web portal from the system
//
empty_envelope_t* PortalsAPI_deleteSystemPortal(apiClient_t *apiClient, char *portalId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**portalId** | **char \*** |  | 
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

# **PortalsAPI_getSystemPortalById**
```c
// Retrieve a single system portal by its ID
//
// Retrieve a single system portal by its ID
//
web_portal_dto_envelope_t* PortalsAPI_getSystemPortalById(apiClient_t *apiClient, char *portalId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**portalId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[web_portal_dto_envelope_t](web_portal_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PortalsAPI_getSystemPortals**
```c
// Retrieve a list of system portals
//
// Retrieve a list of all web portals in the system
//
web_portal_dto_list_envelope_t* PortalsAPI_getSystemPortals(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[web_portal_dto_list_envelope_t](web_portal_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PortalsAPI_getSystemPortalsCount**
```c
// Get the count of system portals
//
// Get the count of all web portals in the system
//
int32_envelope_t* PortalsAPI_getSystemPortalsCount(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
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

# **PortalsAPI_updateSystemPortal**
```c
// Update a system portal
//
// Update an existing web portal in the system
//
empty_envelope_t* PortalsAPI_updateSystemPortal(apiClient_t *apiClient, char *portalId, char *api_version, char *x_api_version, web_portal_update_dto_t *web_portal_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**portalId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**web_portal_update_dto** | **[web_portal_update_dto_t](web_portal_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

