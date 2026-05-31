# IPLookupsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**IPLookupsAPI_deleteSystemIPLookup**](IPLookupsAPI.md#IPLookupsAPI_deleteSystemIPLookup) | **DELETE** /api/v2/SystemService/IPLookups/{ipLookupId} | Delete a system IP lookup
[**IPLookupsAPI_getSystemIPLookupById**](IPLookupsAPI.md#IPLookupsAPI_getSystemIPLookupById) | **GET** /api/v2/SystemService/IPLookups/{ipLookupId} | Retrieve a single system IP lookup by its ID
[**IPLookupsAPI_getSystemIPLookups**](IPLookupsAPI.md#IPLookupsAPI_getSystemIPLookups) | **GET** /api/v2/SystemService/IPLookups | Retrieve a list of system IP lookups
[**IPLookupsAPI_getSystemIPLookupsCount**](IPLookupsAPI.md#IPLookupsAPI_getSystemIPLookupsCount) | **GET** /api/v2/SystemService/IPLookups/Count | Get the count of system IP lookups


# **IPLookupsAPI_deleteSystemIPLookup**
```c
// Delete a system IP lookup
//
// Delete a system IP lookup by its ID
//
empty_envelope_t* IPLookupsAPI_deleteSystemIPLookup(apiClient_t *apiClient, char *ipLookupId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ipLookupId** | **char \*** |  | 
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

# **IPLookupsAPI_getSystemIPLookupById**
```c
// Retrieve a single system IP lookup by its ID
//
// Retrieve a single system IP lookup by its ID
//
ip_lookup_dto_envelope_t* IPLookupsAPI_getSystemIPLookupById(apiClient_t *apiClient, char *ipLookupId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ipLookupId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[ip_lookup_dto_envelope_t](ip_lookup_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **IPLookupsAPI_getSystemIPLookups**
```c
// Retrieve a list of system IP lookups
//
// Retrieve a list of all IP lookups in the system
//
ip_lookup_dto_list_envelope_t* IPLookupsAPI_getSystemIPLookups(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[ip_lookup_dto_list_envelope_t](ip_lookup_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **IPLookupsAPI_getSystemIPLookupsCount**
```c
// Get the count of system IP lookups
//
// Get the count of all IP lookups in the system
//
int32_envelope_t* IPLookupsAPI_getSystemIPLookupsCount(apiClient_t *apiClient, char *api_version, char *x_api_version);
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

