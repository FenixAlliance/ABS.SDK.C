# RadzenEditorAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**RadzenEditorAPI_image**](RadzenEditorAPI.md#RadzenEditorAPI_image) | **POST** /api/v2/StorageService/RadzenEditor/Uploads/Image | Upload an image file
[**RadzenEditorAPI_multiple**](RadzenEditorAPI.md#RadzenEditorAPI_multiple) | **POST** /api/v2/StorageService/RadzenEditor/Uploads/Multiple | Upload multiple files
[**RadzenEditorAPI_post**](RadzenEditorAPI.md#RadzenEditorAPI_post) | **POST** /api/v2/StorageService/RadzenEditor/Uploads/{id} | Upload files by ID
[**RadzenEditorAPI_single**](RadzenEditorAPI.md#RadzenEditorAPI_single) | **POST** /api/v2/StorageService/RadzenEditor/Uploads/Single | Upload a single file
[**RadzenEditorAPI_specific**](RadzenEditorAPI.md#RadzenEditorAPI_specific) | **POST** /api/v2/StorageService/RadzenEditor/Uploads/Specific | Upload a specific file


# **RadzenEditorAPI_image**
```c
// Upload an image file
//
// Uploads an image file and returns its URL for editor embedding.
//
void RadzenEditorAPI_image(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, binary_t* file);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | [optional] 
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

# **RadzenEditorAPI_multiple**
```c
// Upload multiple files
//
// Uploads multiple files to tenant or user storage.
//
void RadzenEditorAPI_multiple(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, list_t *files);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**files** | **[list_t](binary_t*.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: multipart/form-data
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **RadzenEditorAPI_post**
```c
// Upload files by ID
//
// Uploads files associated with a specific resource ID.
//
void RadzenEditorAPI_post(apiClient_t *apiClient, int *id, char *tenantId, char *api_version, char *x_api_version, list_t *files);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **int \*** |  | 
**tenantId** | **char \*** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**files** | **[list_t](binary_t*.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: multipart/form-data
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **RadzenEditorAPI_single**
```c
// Upload a single file
//
// Uploads a single file to tenant or user storage.
//
void RadzenEditorAPI_single(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, binary_t* file);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | [optional] 
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

# **RadzenEditorAPI_specific**
```c
// Upload a specific file
//
// Uploads a specific file to tenant or user storage.
//
void RadzenEditorAPI_specific(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, binary_t* file);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | [optional] 
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

