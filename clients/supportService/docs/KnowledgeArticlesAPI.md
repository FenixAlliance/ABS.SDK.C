# KnowledgeArticlesAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**KnowledgeArticlesAPI_createKnowledgeArticleAsync**](KnowledgeArticlesAPI.md#KnowledgeArticlesAPI_createKnowledgeArticleAsync) | **POST** /api/v2/SupportService/KnowledgeArticles | Create a knowledge article
[**KnowledgeArticlesAPI_deleteKnowledgeArticleAsync**](KnowledgeArticlesAPI.md#KnowledgeArticlesAPI_deleteKnowledgeArticleAsync) | **DELETE** /api/v2/SupportService/KnowledgeArticles/{knowledgeArticleId} | Delete a knowledge article
[**KnowledgeArticlesAPI_getKnowledgeArticleAsync**](KnowledgeArticlesAPI.md#KnowledgeArticlesAPI_getKnowledgeArticleAsync) | **GET** /api/v2/SupportService/KnowledgeArticles/{knowledgeArticleId} | Retrieve a knowledge article by ID
[**KnowledgeArticlesAPI_getKnowledgeArticlesAsync**](KnowledgeArticlesAPI.md#KnowledgeArticlesAPI_getKnowledgeArticlesAsync) | **GET** /api/v2/SupportService/KnowledgeArticles | Retrieve knowledge articles
[**KnowledgeArticlesAPI_getKnowledgeArticlesCountAsync**](KnowledgeArticlesAPI.md#KnowledgeArticlesAPI_getKnowledgeArticlesCountAsync) | **GET** /api/v2/SupportService/KnowledgeArticles/Count | Get knowledge articles count
[**KnowledgeArticlesAPI_patchKnowledgeArticleAsync**](KnowledgeArticlesAPI.md#KnowledgeArticlesAPI_patchKnowledgeArticleAsync) | **PATCH** /api/v2/SupportService/KnowledgeArticles/{knowledgeArticleId} | Patch a knowledge article
[**KnowledgeArticlesAPI_updateKnowledgeArticleAsync**](KnowledgeArticlesAPI.md#KnowledgeArticlesAPI_updateKnowledgeArticleAsync) | **PUT** /api/v2/SupportService/KnowledgeArticles/{knowledgeArticleId} | Update a knowledge article


# **KnowledgeArticlesAPI_createKnowledgeArticleAsync**
```c
// Create a knowledge article
//
empty_envelope_t* KnowledgeArticlesAPI_createKnowledgeArticleAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, knowledge_article_create_dto_t *knowledge_article_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**knowledge_article_create_dto** | **[knowledge_article_create_dto_t](knowledge_article_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **KnowledgeArticlesAPI_deleteKnowledgeArticleAsync**
```c
// Delete a knowledge article
//
empty_envelope_t* KnowledgeArticlesAPI_deleteKnowledgeArticleAsync(apiClient_t *apiClient, char *tenantId, char *knowledgeArticleId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**knowledgeArticleId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **KnowledgeArticlesAPI_getKnowledgeArticleAsync**
```c
// Retrieve a knowledge article by ID
//
knowledge_article_dto_envelope_t* KnowledgeArticlesAPI_getKnowledgeArticleAsync(apiClient_t *apiClient, char *tenantId, char *knowledgeArticleId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**knowledgeArticleId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[knowledge_article_dto_envelope_t](knowledge_article_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **KnowledgeArticlesAPI_getKnowledgeArticlesAsync**
```c
// Retrieve knowledge articles
//
knowledge_article_dto_list_envelope_t* KnowledgeArticlesAPI_getKnowledgeArticlesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, knowledge_article_dto_collection_query_parameters_t *knowledge_article_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**knowledge_article_dto_collection_query_parameters** | **[knowledge_article_dto_collection_query_parameters_t](knowledge_article_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[knowledge_article_dto_list_envelope_t](knowledge_article_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **KnowledgeArticlesAPI_getKnowledgeArticlesCountAsync**
```c
// Get knowledge articles count
//
int32_envelope_t* KnowledgeArticlesAPI_getKnowledgeArticlesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, knowledge_article_dto_collection_query_parameters_t *knowledge_article_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**knowledge_article_dto_collection_query_parameters** | **[knowledge_article_dto_collection_query_parameters_t](knowledge_article_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **KnowledgeArticlesAPI_patchKnowledgeArticleAsync**
```c
// Patch a knowledge article
//
// Partially updates an existing knowledge article by its unique identifier.
//
empty_envelope_t* KnowledgeArticlesAPI_patchKnowledgeArticleAsync(apiClient_t *apiClient, char *tenantId, char *knowledgeArticleId, char *api_version, char *x_api_version, list_t *patch_operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**knowledgeArticleId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**patch_operation** | **[list_t](patch_operation.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **KnowledgeArticlesAPI_updateKnowledgeArticleAsync**
```c
// Update a knowledge article
//
empty_envelope_t* KnowledgeArticlesAPI_updateKnowledgeArticleAsync(apiClient_t *apiClient, char *tenantId, char *knowledgeArticleId, char *api_version, char *x_api_version, knowledge_article_update_dto_t *knowledge_article_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**knowledgeArticleId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**knowledge_article_update_dto** | **[knowledge_article_update_dto_t](knowledge_article_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

