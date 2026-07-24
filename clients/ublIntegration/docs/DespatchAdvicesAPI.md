# DespatchAdvicesAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**DespatchAdvicesAPI_apiV2UblServiceDespatchAdvicesShipmentIdGet**](DespatchAdvicesAPI.md#DespatchAdvicesAPI_apiV2UblServiceDespatchAdvicesShipmentIdGet) | **GET** /api/v2/UblService/DespatchAdvices/{shipmentId} | 


# **DespatchAdvicesAPI_apiV2UblServiceDespatchAdvicesShipmentIdGet**
```c
void DespatchAdvicesAPI_apiV2UblServiceDespatchAdvicesShipmentIdGet(apiClient_t *apiClient, char *tenantId, char *shipmentId, ublintegration_apiV2UblServiceDespatchAdvicesShipmentIdGet_profile_e profile, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**shipmentId** | **char \*** |  | 
**profile** | **ublintegration_apiV2UblServiceDespatchAdvicesShipmentIdGet_profile_e** |  | [optional] [default to &#39;Generic&#39;]
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

