# ReceiptAdvicesAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ReceiptAdvicesAPI_apiV2UblServiceReceiptAdvicesItemRestockIdGet**](ReceiptAdvicesAPI.md#ReceiptAdvicesAPI_apiV2UblServiceReceiptAdvicesItemRestockIdGet) | **GET** /api/v2/UblService/ReceiptAdvices/{itemRestockId} | 
[**ReceiptAdvicesAPI_apiV2UblServiceReceiptAdvicesItemRestockIdPartitionsGet**](ReceiptAdvicesAPI.md#ReceiptAdvicesAPI_apiV2UblServiceReceiptAdvicesItemRestockIdPartitionsGet) | **GET** /api/v2/UblService/ReceiptAdvices/{itemRestockId}/partitions | 


# **ReceiptAdvicesAPI_apiV2UblServiceReceiptAdvicesItemRestockIdGet**
```c
void ReceiptAdvicesAPI_apiV2UblServiceReceiptAdvicesItemRestockIdGet(apiClient_t *apiClient, char *tenantId, char *itemRestockId, ublintegration_apiV2UblServiceReceiptAdvicesItemRestockIdGet_profile_e profile, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**itemRestockId** | **char \*** |  | 
**profile** | **ublintegration_apiV2UblServiceReceiptAdvicesItemRestockIdGet_profile_e** |  | [optional] [default to &#39;Generic&#39;]
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ReceiptAdvicesAPI_apiV2UblServiceReceiptAdvicesItemRestockIdPartitionsGet**
```c
void ReceiptAdvicesAPI_apiV2UblServiceReceiptAdvicesItemRestockIdPartitionsGet(apiClient_t *apiClient, char *tenantId, char *itemRestockId, ublintegration_apiV2UblServiceReceiptAdvicesItemRestockIdPartitionsGet_profile_e profile, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**itemRestockId** | **char \*** |  | 
**profile** | **ublintegration_apiV2UblServiceReceiptAdvicesItemRestockIdPartitionsGet_profile_e** |  | [optional] [default to &#39;Generic&#39;]
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

