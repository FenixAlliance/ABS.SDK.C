# OverviewAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**OverviewAPI_getSystemOverview**](OverviewAPI.md#OverviewAPI_getSystemOverview) | **GET** /api/v2/SystemService/Overview | Get system overview information


# **OverviewAPI_getSystemOverview**
```c
// Get system overview information
//
// Returns runtime, memory, and entity count information for the system
//
system_overview_dto_envelope_t* OverviewAPI_getSystemOverview(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[system_overview_dto_envelope_t](system_overview_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

