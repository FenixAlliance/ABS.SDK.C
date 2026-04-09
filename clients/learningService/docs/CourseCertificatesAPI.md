# CourseCertificatesAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CourseCertificatesAPI_createCourseCertificateAsync**](CourseCertificatesAPI.md#CourseCertificatesAPI_createCourseCertificateAsync) | **POST** /api/v2/LearningService/CourseCertificates | Create a course certificate
[**CourseCertificatesAPI_createCourseCertificateTemplateAsync**](CourseCertificatesAPI.md#CourseCertificatesAPI_createCourseCertificateTemplateAsync) | **POST** /api/v2/LearningService/CourseCertificates/Template | Create a certificate template
[**CourseCertificatesAPI_deleteCourseCertificateAsync**](CourseCertificatesAPI.md#CourseCertificatesAPI_deleteCourseCertificateAsync) | **DELETE** /api/v2/LearningService/CourseCertificates/{courseCertificateId} | Delete a course certificate
[**CourseCertificatesAPI_deleteCourseCertificateTemplateAsync**](CourseCertificatesAPI.md#CourseCertificatesAPI_deleteCourseCertificateTemplateAsync) | **DELETE** /api/v2/LearningService/CourseCertificates/Template/{courseCertificateTemplateId} | Delete a certificate template
[**CourseCertificatesAPI_getCourseCertificateAsync**](CourseCertificatesAPI.md#CourseCertificatesAPI_getCourseCertificateAsync) | **GET** /api/v2/LearningService/CourseCertificates/{courseCertificateId} | Get course certificate by ID
[**CourseCertificatesAPI_getCourseCertificateTemplateAsync**](CourseCertificatesAPI.md#CourseCertificatesAPI_getCourseCertificateTemplateAsync) | **GET** /api/v2/LearningService/CourseCertificates/Template/{courseCertificateTemplateId} | Get certificate template by ID
[**CourseCertificatesAPI_getCourseCertificateTemplatesAsync**](CourseCertificatesAPI.md#CourseCertificatesAPI_getCourseCertificateTemplatesAsync) | **GET** /api/v2/LearningService/CourseCertificates/Template | Get all certificate templates
[**CourseCertificatesAPI_getCourseCertificatesAsync**](CourseCertificatesAPI.md#CourseCertificatesAPI_getCourseCertificatesAsync) | **GET** /api/v2/LearningService/CourseCertificates | Get all course certificates
[**CourseCertificatesAPI_getCourseCertificatesCountAsync**](CourseCertificatesAPI.md#CourseCertificatesAPI_getCourseCertificatesCountAsync) | **GET** /api/v2/LearningService/CourseCertificates/Count | Get course certificates count
[**CourseCertificatesAPI_updateCourseCertificateAsync**](CourseCertificatesAPI.md#CourseCertificatesAPI_updateCourseCertificateAsync) | **PUT** /api/v2/LearningService/CourseCertificates/{courseCertificateId} | Update a course certificate


# **CourseCertificatesAPI_createCourseCertificateAsync**
```c
// Create a course certificate
//
// Creates a new course certificate for the specified tenant.
//
void CourseCertificatesAPI_createCourseCertificateAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, course_completion_certificate_create_dto_t *course_completion_certificate_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**course_completion_certificate_create_dto** | **[course_completion_certificate_create_dto_t](course_completion_certificate_create_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CourseCertificatesAPI_createCourseCertificateTemplateAsync**
```c
// Create a certificate template
//
// Creates a new course certificate template for the specified tenant.
//
void CourseCertificatesAPI_createCourseCertificateTemplateAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, course_certificate_template_create_dto_t *course_certificate_template_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**course_certificate_template_create_dto** | **[course_certificate_template_create_dto_t](course_certificate_template_create_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CourseCertificatesAPI_deleteCourseCertificateAsync**
```c
// Delete a course certificate
//
// Deletes a course certificate for the specified tenant.
//
void CourseCertificatesAPI_deleteCourseCertificateAsync(apiClient_t *apiClient, char *tenantId, char *courseCertificateId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**courseCertificateId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CourseCertificatesAPI_deleteCourseCertificateTemplateAsync**
```c
// Delete a certificate template
//
// Deletes a course certificate template for the specified tenant.
//
void CourseCertificatesAPI_deleteCourseCertificateTemplateAsync(apiClient_t *apiClient, char *tenantId, char *courseCertificateTemplateId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**courseCertificateTemplateId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CourseCertificatesAPI_getCourseCertificateAsync**
```c
// Get course certificate by ID
//
// Retrieves a specific course certificate by its ID.
//
course_completion_certificate_dto_t* CourseCertificatesAPI_getCourseCertificateAsync(apiClient_t *apiClient, char *tenantId, char *courseCertificateId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**courseCertificateId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[course_completion_certificate_dto_t](course_completion_certificate_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CourseCertificatesAPI_getCourseCertificateTemplateAsync**
```c
// Get certificate template by ID
//
// Retrieves a specific course certificate template by its ID.
//
course_certificate_template_dto_t* CourseCertificatesAPI_getCourseCertificateTemplateAsync(apiClient_t *apiClient, char *tenantId, char *courseCertificateTemplateId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**courseCertificateTemplateId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[course_certificate_template_dto_t](course_certificate_template_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CourseCertificatesAPI_getCourseCertificateTemplatesAsync**
```c
// Get all certificate templates
//
// Retrieves all course certificate templates for the specified tenant.
//
list_t* CourseCertificatesAPI_getCourseCertificateTemplatesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[list_t](course_certificate_template_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CourseCertificatesAPI_getCourseCertificatesAsync**
```c
// Get all course certificates
//
// Retrieves all course certificates for the specified tenant.
//
list_t* CourseCertificatesAPI_getCourseCertificatesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[list_t](course_completion_certificate_dto.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CourseCertificatesAPI_getCourseCertificatesCountAsync**
```c
// Get course certificates count
//
// Returns the count of course certificates for the specified tenant.
//
int* CourseCertificatesAPI_getCourseCertificatesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

int*



### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CourseCertificatesAPI_updateCourseCertificateAsync**
```c
// Update a course certificate
//
// Updates an existing course certificate for the specified tenant.
//
void CourseCertificatesAPI_updateCourseCertificateAsync(apiClient_t *apiClient, char *tenantId, char *courseCertificateId, char *api_version, char *x_api_version, course_completion_certificate_update_dto_t *course_completion_certificate_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**courseCertificateId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**course_completion_certificate_update_dto** | **[course_completion_certificate_update_dto_t](course_completion_certificate_update_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

