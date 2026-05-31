# UploadsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**UploadsAPI_saveFileAsync**](UploadsAPI.md#UploadsAPI_saveFileAsync) | **POST** /api/v2/StorageService/Uploads | Upload a file


# **UploadsAPI_saveFileAsync**
```c
// Upload a file
//
// Uploads a file to tenant or user storage.
//
empty_envelope_t* UploadsAPI_saveFileAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, char *notes, char *title, char *author, int *isFolder, char *fileName, char *abstract, char *keyWords, int *validResponse, char *parentFileUploadId, char *filePath, char *appFile.content, char *appFile.sha256, char appFile.createdAtUtc, char *appFile.userId.value, char *appFile.tenantId.value, char *appFile.enrollmentId.value, storageservice_saveFileAsync_appFile.source_e appFile.source, long appFile.length, char *appFile.name, char *appFile.fileName, char appFile.lastModified, long appFile.size, char *appFile.contentType, char *appFile.contentDisposition, list_t* appFile.headers, char *id, char timestamp);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**notes** | **char \*** |  | [optional] 
**title** | **char \*** |  | [optional] 
**author** | **char \*** |  | [optional] 
**isFolder** | **int \*** |  | [optional] 
**fileName** | **char \*** |  | [optional] 
**abstract** | **char \*** |  | [optional] 
**keyWords** | **char \*** |  | [optional] 
**validResponse** | **int \*** |  | [optional] 
**parentFileUploadId** | **char \*** |  | [optional] 
**filePath** | **char \*** |  | [optional] 
**appFile.content** | **char \*** |  | [optional] 
**appFile.sha256** | **char \*** |  | [optional] 
**appFile.createdAtUtc** | **char** |  | [optional] 
**appFile.userId.value** | **char \*** |  | [optional] 
**appFile.tenantId.value** | **char \*** |  | [optional] 
**appFile.enrollmentId.value** | **char \*** |  | [optional] 
**appFile.source** | **storageservice_saveFileAsync_appFile.source_e** |  | [optional] 
**appFile.length** | **long** |  | [optional] 
**appFile.name** | **char \*** |  | [optional] 
**appFile.fileName** | **char \*** |  | [optional] 
**appFile.lastModified** | **char** |  | [optional] 
**appFile.size** | **long** |  | [optional] 
**appFile.contentType** | **char \*** |  | [optional] 
**appFile.contentDisposition** | **char \*** |  | [optional] 
**appFile.headers** | **list_t*** |  | [optional] 
**id** | **char \*** |  | [optional] 
**timestamp** | **char** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: multipart/form-data
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

