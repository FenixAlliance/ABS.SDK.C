# ActivityRecordsAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ActivityRecordsAPI_getActivityRecordsCountAsync**](ActivityRecordsAPI.md#ActivityRecordsAPI_getActivityRecordsCountAsync) | **GET** /api/v2/ActivitiesService/ActivityRecords/Count | Count activity records


# **ActivityRecordsAPI_getActivityRecordsCountAsync**
```c
// Count activity records
//
// Returns the tenant-wide count of activity records across all feeds owned by the tenant.
//
int32_envelope_t* ActivityRecordsAPI_getActivityRecordsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

