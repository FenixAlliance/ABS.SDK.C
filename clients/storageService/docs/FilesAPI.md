# FilesAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**FilesAPI_createFileAsync**](FilesAPI.md#FilesAPI_createFileAsync) | **POST** /api/v2/StorageService/Files | 
[**FilesAPI_deleteFileAsync**](FilesAPI.md#FilesAPI_deleteFileAsync) | **DELETE** /api/v2/StorageService/Files/{fileId} | 
[**FilesAPI_downloadFileAsync**](FilesAPI.md#FilesAPI_downloadFileAsync) | **GET** /api/v2/StorageService/Files/{fileId}/Raw | 
[**FilesAPI_getFileAsync**](FilesAPI.md#FilesAPI_getFileAsync) | **GET** /api/v2/StorageService/Files/{fileId} | 
[**FilesAPI_getFileThumbnailAsync**](FilesAPI.md#FilesAPI_getFileThumbnailAsync) | **GET** /api/v2/StorageService/Files/{fileId}/Thumbnail | 
[**FilesAPI_getFilesAsync**](FilesAPI.md#FilesAPI_getFilesAsync) | **GET** /api/v2/StorageService/Files | 
[**FilesAPI_getFilesCountAsync**](FilesAPI.md#FilesAPI_getFilesCountAsync) | **GET** /api/v2/StorageService/Files/Count | 
[**FilesAPI_updateFileAsync**](FilesAPI.md#FilesAPI_updateFileAsync) | **PUT** /api/v2/StorageService/Files/{fileId} | 


# **FilesAPI_createFileAsync**
```c
empty_envelope_t* FilesAPI_createFileAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, binary_t* file, char *notes, char *title, char *author, int *isFolder, char *fileName, char *abstract, char *keyWords, int *validResponse, char *parentFileUploadId, char *filePath, storageservice_createFileAsync_publicAccessType_e publicAccessType, storageservice_createFileAsync_purpose_e purpose, char *socialProfileId.value, char *appFile.content, char *appFile.sha256, char appFile.createdAtUtc, char *appFile.userId.value, char *appFile.tenantId.value, char *appFile.enrollmentId.value, storageservice_createFileAsync_appFile.source_e appFile.source, long appFile.length, char *appFile.name, char *appFile.fileName, char appFile.lastModified, long appFile.size, char *appFile.contentType, char *appFile.contentDisposition, list_t* appFile.headers, char *id, char timestamp);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**file** | **binary_t*** |  | [optional] 
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
**publicAccessType** | **storageservice_createFileAsync_publicAccessType_e** |  | [optional] 
**purpose** | **storageservice_createFileAsync_purpose_e** |  | [optional] 
**socialProfileId.value** | **char \*** |  | [optional] 
**appFile.content** | **char \*** |  | [optional] 
**appFile.sha256** | **char \*** |  | [optional] 
**appFile.createdAtUtc** | **char** |  | [optional] 
**appFile.userId.value** | **char \*** |  | [optional] 
**appFile.tenantId.value** | **char \*** |  | [optional] 
**appFile.enrollmentId.value** | **char \*** |  | [optional] 
**appFile.source** | **storageservice_createFileAsync_appFile.source_e** |  | [optional] 
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
 - **Accept**: application/json, image/png

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **FilesAPI_deleteFileAsync**
```c
empty_envelope_t* FilesAPI_deleteFileAsync(apiClient_t *apiClient, char *fileId, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**fileId** | **char \*** |  | 
**tenantId** | **char \*** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, image/png

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **FilesAPI_downloadFileAsync**
```c
binary_t** FilesAPI_downloadFileAsync(apiClient_t *apiClient, char *fileId, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**fileId** | **char \*** |  | 
**tenantId** | **char \*** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

binary_t**



### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, image/png

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **FilesAPI_getFileAsync**
```c
file_upload_dto_envelope_t* FilesAPI_getFileAsync(apiClient_t *apiClient, char *fileId, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**fileId** | **char \*** |  | 
**tenantId** | **char \*** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[file_upload_dto_envelope_t](file_upload_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, image/png

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **FilesAPI_getFileThumbnailAsync**
```c
binary_t** FilesAPI_getFileThumbnailAsync(apiClient_t *apiClient, char *fileId, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**fileId** | **char \*** |  | 
**tenantId** | **char \*** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

binary_t**



### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, image/png

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **FilesAPI_getFilesAsync**
```c
file_upload_dto_envelope_t* FilesAPI_getFilesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, int *top, int *skip, int *count, char *filter, char *orderBy, char *search, char *select, char *expand, int *isEmpty);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**top** | **int \*** |  | [optional] 
**skip** | **int \*** |  | [optional] 
**count** | **int \*** |  | [optional] 
**filter** | **char \*** |  | [optional] 
**orderBy** | **char \*** |  | [optional] 
**search** | **char \*** |  | [optional] 
**select** | **char \*** |  | [optional] 
**expand** | **char \*** |  | [optional] 
**isEmpty** | **int \*** |  | [optional] 

### Return type

[file_upload_dto_envelope_t](file_upload_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: multipart/form-data
 - **Accept**: application/json, image/png

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **FilesAPI_getFilesCountAsync**
```c
long* FilesAPI_getFilesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, int *top, int *skip, int *count, char *filter, char *orderBy, char *search, char *select, char *expand, int *isEmpty);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**top** | **int \*** |  | [optional] 
**skip** | **int \*** |  | [optional] 
**count** | **int \*** |  | [optional] 
**filter** | **char \*** |  | [optional] 
**orderBy** | **char \*** |  | [optional] 
**search** | **char \*** |  | [optional] 
**select** | **char \*** |  | [optional] 
**expand** | **char \*** |  | [optional] 
**isEmpty** | **int \*** |  | [optional] 

### Return type

long*



### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: multipart/form-data
 - **Accept**: application/json, image/png

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **FilesAPI_updateFileAsync**
```c
empty_envelope_t* FilesAPI_updateFileAsync(apiClient_t *apiClient, char *fileId, char *tenantId, char *api_version, char *x_api_version, binary_t* file, char *notes, char *metadata, char *title, char *author, int *isFolder, char *fileName, char *abstract, char *keyWords, int *validResponse, char *parentFileUploadID, char *filePath, char *appFile.content, char *appFile.sha256, char appFile.createdAtUtc, char *appFile.userId.value, char *appFile.tenantId.value, char *appFile.enrollmentId.value, storageservice_updateFileAsync_appFile.source_e appFile.source, long appFile.length, char *appFile.name, char *appFile.fileName, char appFile.lastModified, long appFile.size, char *appFile.contentType, char *appFile.contentDisposition, list_t* appFile.headers);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**fileId** | **char \*** |  | 
**tenantId** | **char \*** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**file** | **binary_t*** |  | [optional] 
**notes** | **char \*** |  | [optional] 
**metadata** | **char \*** |  | [optional] 
**title** | **char \*** |  | [optional] 
**author** | **char \*** |  | [optional] 
**isFolder** | **int \*** |  | [optional] 
**fileName** | **char \*** |  | [optional] 
**abstract** | **char \*** |  | [optional] 
**keyWords** | **char \*** |  | [optional] 
**validResponse** | **int \*** |  | [optional] 
**parentFileUploadID** | **char \*** |  | [optional] 
**filePath** | **char \*** |  | [optional] 
**appFile.content** | **char \*** |  | [optional] 
**appFile.sha256** | **char \*** |  | [optional] 
**appFile.createdAtUtc** | **char** |  | [optional] 
**appFile.userId.value** | **char \*** |  | [optional] 
**appFile.tenantId.value** | **char \*** |  | [optional] 
**appFile.enrollmentId.value** | **char \*** |  | [optional] 
**appFile.source** | **storageservice_updateFileAsync_appFile.source_e** |  | [optional] 
**appFile.length** | **long** |  | [optional] 
**appFile.name** | **char \*** |  | [optional] 
**appFile.fileName** | **char \*** |  | [optional] 
**appFile.lastModified** | **char** |  | [optional] 
**appFile.size** | **long** |  | [optional] 
**appFile.contentType** | **char \*** |  | [optional] 
**appFile.contentDisposition** | **char \*** |  | [optional] 
**appFile.headers** | **list_t*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: multipart/form-data
 - **Accept**: application/json, image/png

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

