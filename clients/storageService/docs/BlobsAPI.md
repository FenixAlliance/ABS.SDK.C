# BlobsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**BlobsAPI_getBlobAsync**](BlobsAPI.md#BlobsAPI_getBlobAsync) | **GET** /api/v2/StorageService/Blobs/Single | 
[**BlobsAPI_getBlobsAsync**](BlobsAPI.md#BlobsAPI_getBlobsAsync) | **GET** /api/v2/StorageService/Blobs | 


# **BlobsAPI_getBlobAsync**
```c
blob_envelope_t* BlobsAPI_getBlobAsync(apiClient_t *apiClient, char *tenantId, char *filePath, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | [optional] 
**filePath** | **char \*** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[blob_envelope_t](blob_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, image/png

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **BlobsAPI_getBlobsAsync**
```c
blob_envelope_t* BlobsAPI_getBlobsAsync(apiClient_t *apiClient, char *tenantId, char *folderPath, char *browseFilter, char *filePrefix, int *recurse, int *maxResults, int *includeAttributes, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | [optional] 
**folderPath** | **char \*** |  | [optional] 
**browseFilter** | **char \*** |  | [optional] 
**filePrefix** | **char \*** |  | [optional] 
**recurse** | **int \*** |  | [optional] 
**maxResults** | **int \*** |  | [optional] 
**includeAttributes** | **int \*** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[blob_envelope_t](blob_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, image/png

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

