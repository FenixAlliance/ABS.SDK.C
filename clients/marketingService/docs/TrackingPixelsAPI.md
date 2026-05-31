# TrackingPixelsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**TrackingPixelsAPI_getTrackingPixelAsync**](TrackingPixelsAPI.md#TrackingPixelsAPI_getTrackingPixelAsync) | **GET** /api/v2/MarketingService/TrackingPixels/{pixelId} | Get a tracking pixel


# **TrackingPixelsAPI_getTrackingPixelAsync**
```c
// Get a tracking pixel
//
// Retrieves a tracking pixel by its ID.
//
order_dto_envelope_t* TrackingPixelsAPI_getTrackingPixelAsync(apiClient_t *apiClient, char *pixelId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pixelId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[order_dto_envelope_t](order_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

