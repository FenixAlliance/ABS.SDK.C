# CapabilitiesAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CapabilitiesAPI_getCapabilitiesAsync**](CapabilitiesAPI.md#CapabilitiesAPI_getCapabilitiesAsync) | **GET** /api/v2/IntelligenceService/Capabilities | Get the annotated capability catalog
[**CapabilitiesAPI_getCapabilitiesCountAsync**](CapabilitiesAPI.md#CapabilitiesAPI_getCapabilitiesCountAsync) | **GET** /api/v2/IntelligenceService/Capabilities/Count | Get the capability catalog count
[**CapabilitiesAPI_getCapabilityByKeyAsync**](CapabilitiesAPI.md#CapabilitiesAPI_getCapabilityByKeyAsync) | **GET** /api/v2/IntelligenceService/Capabilities/{key} | Get a capability by key


# **CapabilitiesAPI_getCapabilitiesAsync**
```c
// Get the annotated capability catalog
//
// Retrieves the full governed-capability catalog for the specified tenant, optionally narrowed to a single execution surface. Every capability is returned with an Available flag (and a DeniedReason when not available) so callers render disabled-with-reason instead of hiding; entitlement is computed server-side.
//
capability_dto_list_envelope_t* CapabilitiesAPI_getCapabilitiesAsync(apiClient_t *apiClient, char *tenantId, intelligenceservice_getCapabilitiesAsync_surface_e surface, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**surface** | **intelligenceservice_getCapabilitiesAsync_surface_e** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[capability_dto_list_envelope_t](capability_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CapabilitiesAPI_getCapabilitiesCountAsync**
```c
// Get the capability catalog count
//
// Returns the number of governed capabilities in the catalog for the specified tenant — the surface-matching total that mirrors the list route's returned-set size (entitled or not), honouring the same optional surface narrowing.
//
int32_envelope_t* CapabilitiesAPI_getCapabilitiesCountAsync(apiClient_t *apiClient, char *tenantId, intelligenceservice_getCapabilitiesCountAsync_surface_e surface, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**surface** | **intelligenceservice_getCapabilitiesCountAsync_surface_e** |  | [optional] 
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

# **CapabilitiesAPI_getCapabilityByKeyAsync**
```c
// Get a capability by key
//
// Retrieves a single governed capability by its stable, dotted key, stamped with the Available / DeniedReason entitlement flag. Returns 404 only when the capability does not exist; an existing capability the actor is not entitled to run is returned annotated as unavailable, not hidden.
//
capability_dto_envelope_t* CapabilitiesAPI_getCapabilityByKeyAsync(apiClient_t *apiClient, char *tenantId, char *key, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**key** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[capability_dto_envelope_t](capability_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

