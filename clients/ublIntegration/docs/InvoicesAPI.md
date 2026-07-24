# InvoicesAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**InvoicesAPI_apiV2UblServiceInvoicesInvoiceIdGet**](InvoicesAPI.md#InvoicesAPI_apiV2UblServiceInvoicesInvoiceIdGet) | **GET** /api/v2/UblService/Invoices/{invoiceId} | 


# **InvoicesAPI_apiV2UblServiceInvoicesInvoiceIdGet**
```c
void InvoicesAPI_apiV2UblServiceInvoicesInvoiceIdGet(apiClient_t *apiClient, char *tenantId, char *invoiceId, ublintegration_apiV2UblServiceInvoicesInvoiceIdGet_profile_e profile, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**invoiceId** | **char \*** |  | 
**profile** | **ublintegration_apiV2UblServiceInvoicesInvoiceIdGet_profile_e** |  | [optional] [default to &#39;Generic&#39;]
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

