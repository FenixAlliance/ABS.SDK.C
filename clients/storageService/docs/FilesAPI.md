# FilesAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**FilesAPI_createFileAsync**](FilesAPI.md#FilesAPI_createFileAsync) | **POST** /api/v2/StorageService/Files | 
[**FilesAPI_deleteFileAsync**](FilesAPI.md#FilesAPI_deleteFileAsync) | **DELETE** /api/v2/StorageService/Files/{fileId} | 
[**FilesAPI_downloadFileAsync**](FilesAPI.md#FilesAPI_downloadFileAsync) | **GET** /api/v2/StorageService/Files/{fileId}/Raw | 
[**FilesAPI_getFileAsync**](FilesAPI.md#FilesAPI_getFileAsync) | **GET** /api/v2/StorageService/Files/{fileId} | 
[**FilesAPI_getFilesAsync**](FilesAPI.md#FilesAPI_getFilesAsync) | **GET** /api/v2/StorageService/Files | 
[**FilesAPI_updateFileAsync**](FilesAPI.md#FilesAPI_updateFileAsync) | **PUT** /api/v2/StorageService/Files/{fileId} | 


# **FilesAPI_createFileAsync**
```c
empty_envelope_t* FilesAPI_createFileAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, char *id, char timestamp, char *notes, char *title, char *author, int *isFolder, char *fileName, char *abstract, char *keyWords, int *validResponse, char *parentFileUploadId, char *filePath, binary_t* file);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**id** | **char \*** |  | [optional] 
**timestamp** | **char** |  | [optional] 
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
**file** | **binary_t*** |  | [optional] 

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
file_upload_dto_envelope_t* FilesAPI_deleteFileAsync(apiClient_t *apiClient, char *fileId, char *tenantId, char *api_version, char *x_api_version);
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

# **FilesAPI_getFilesAsync**
```c
file_upload_dto_envelope_t* FilesAPI_getFilesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
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

# **FilesAPI_updateFileAsync**
```c
file_upload_dto_envelope_t* FilesAPI_updateFileAsync(apiClient_t *apiClient, char *fileId, char *tenantId, char *api_version, char *x_api_version, char *notes, char *metadata, char *title, char *author, int *isFolder, char *fileName, char *abstract, char *keyWords, int *validResponse, char *parentFileUploadID, char *filePath, binary_t* file);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**fileId** | **char \*** |  | 
**tenantId** | **char \*** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
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
**file** | **binary_t*** |  | [optional] 

### Return type

[file_upload_dto_envelope_t](file_upload_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: multipart/form-data
 - **Accept**: application/json, image/png

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

