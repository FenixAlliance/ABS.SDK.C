# RadzenEditorAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**RadzenEditorAPI_radzenUploadImage**](RadzenEditorAPI.md#RadzenEditorAPI_radzenUploadImage) | **POST** /api/v2/fs/radzen/tenants/{tenantId}/upload/image | Upload an editor image to tenant storage.
[**RadzenEditorAPI_radzenUploadImageScoped**](RadzenEditorAPI.md#RadzenEditorAPI_radzenUploadImageScoped) | **POST** /api/v2/fs/radzen/tenants/{tenantId}/{recordType}/{recordId}/upload/image | Upload an editor image scoped to a record.
[**RadzenEditorAPI_radzenUploadSingle**](RadzenEditorAPI.md#RadzenEditorAPI_radzenUploadSingle) | **POST** /api/v2/fs/radzen/tenants/{tenantId}/upload/single | Upload a single editor file to tenant storage.
[**RadzenEditorAPI_radzenUploadSingleScoped**](RadzenEditorAPI.md#RadzenEditorAPI_radzenUploadSingleScoped) | **POST** /api/v2/fs/radzen/tenants/{tenantId}/{recordType}/{recordId}/upload/single | Upload a single editor file scoped to a record.
[**RadzenEditorAPI_radzenUploadStream**](RadzenEditorAPI.md#RadzenEditorAPI_radzenUploadStream) | **PUT** /api/v2/fs/radzen/tenants/{tenantId}/upload/stream | Chunked editor upload (not implemented).
[**RadzenEditorAPI_radzenUploadStreamScoped**](RadzenEditorAPI.md#RadzenEditorAPI_radzenUploadStreamScoped) | **PUT** /api/v2/fs/radzen/tenants/{tenantId}/{recordType}/{recordId}/upload/stream | Chunked editor upload scoped to a record (not implemented).
[**RadzenEditorAPI_radzenUploadUserImage**](RadzenEditorAPI.md#RadzenEditorAPI_radzenUploadUserImage) | **POST** /api/v2/fs/radzen/users/upload/image | Upload an editor image to user storage.
[**RadzenEditorAPI_radzenUploadUserImageScoped**](RadzenEditorAPI.md#RadzenEditorAPI_radzenUploadUserImageScoped) | **POST** /api/v2/fs/radzen/users/{recordType}/{recordId}/upload/image | Upload a user editor image scoped to a record.


# **RadzenEditorAPI_radzenUploadImage**
```c
// Upload an editor image to tenant storage.
//
void RadzenEditorAPI_radzenUploadImage(apiClient_t *apiClient, char *tenantId, char *visibility, char *socialProfileId, char *purpose, char *api_version, char *x_api_version, binary_t* file);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**visibility** | **char \*** |  | [optional] 
**socialProfileId** | **char \*** |  | [optional] 
**purpose** | **char \*** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**file** | **binary_t*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: multipart/form-data
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **RadzenEditorAPI_radzenUploadImageScoped**
```c
// Upload an editor image scoped to a record.
//
void RadzenEditorAPI_radzenUploadImageScoped(apiClient_t *apiClient, char *tenantId, char *recordType, char *recordId, char *visibility, char *socialProfileId, char *purpose, char *api_version, char *x_api_version, binary_t* file);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**recordType** | **char \*** |  | 
**recordId** | **char \*** |  | 
**visibility** | **char \*** |  | [optional] 
**socialProfileId** | **char \*** |  | [optional] 
**purpose** | **char \*** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**file** | **binary_t*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: multipart/form-data
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **RadzenEditorAPI_radzenUploadSingle**
```c
// Upload a single editor file to tenant storage.
//
void RadzenEditorAPI_radzenUploadSingle(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, binary_t* file);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**file** | **binary_t*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: multipart/form-data
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **RadzenEditorAPI_radzenUploadSingleScoped**
```c
// Upload a single editor file scoped to a record.
//
void RadzenEditorAPI_radzenUploadSingleScoped(apiClient_t *apiClient, char *tenantId, char *recordType, char *recordId, char *api_version, char *x_api_version, binary_t* file);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**recordType** | **char \*** |  | 
**recordId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**file** | **binary_t*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: multipart/form-data
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **RadzenEditorAPI_radzenUploadStream**
```c
// Chunked editor upload (not implemented).
//
void RadzenEditorAPI_radzenUploadStream(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
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

# **RadzenEditorAPI_radzenUploadStreamScoped**
```c
// Chunked editor upload scoped to a record (not implemented).
//
void RadzenEditorAPI_radzenUploadStreamScoped(apiClient_t *apiClient, char *tenantId, char *recordType, char *recordId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**recordType** | **char \*** |  | 
**recordId** | **char \*** |  | 
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

# **RadzenEditorAPI_radzenUploadUserImage**
```c
// Upload an editor image to user storage.
//
void RadzenEditorAPI_radzenUploadUserImage(apiClient_t *apiClient, char *visibility, char *socialProfileId, char *purpose, char *api_version, char *x_api_version, binary_t* file);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**visibility** | **char \*** |  | [optional] 
**socialProfileId** | **char \*** |  | [optional] 
**purpose** | **char \*** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**file** | **binary_t*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: multipart/form-data
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **RadzenEditorAPI_radzenUploadUserImageScoped**
```c
// Upload a user editor image scoped to a record.
//
void RadzenEditorAPI_radzenUploadUserImageScoped(apiClient_t *apiClient, char *recordType, char *recordId, char *visibility, char *socialProfileId, char *purpose, char *api_version, char *x_api_version, binary_t* file);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**recordType** | **char \*** |  | 
**recordId** | **char \*** |  | 
**visibility** | **char \*** |  | [optional] 
**socialProfileId** | **char \*** |  | [optional] 
**purpose** | **char \*** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**file** | **binary_t*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: multipart/form-data
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

