# ItemQuestionsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ItemQuestionsAPI_createItemQuestionAsync**](ItemQuestionsAPI.md#ItemQuestionsAPI_createItemQuestionAsync) | **POST** /api/v2/CatalogService/ItemQuestions | Create a new item question
[**ItemQuestionsAPI_deleteItemQuestionAsync**](ItemQuestionsAPI.md#ItemQuestionsAPI_deleteItemQuestionAsync) | **DELETE** /api/v2/CatalogService/ItemQuestions/{itemQuestionId} | Delete an item question
[**ItemQuestionsAPI_getItemQuestionByIdAsync**](ItemQuestionsAPI.md#ItemQuestionsAPI_getItemQuestionByIdAsync) | **GET** /api/v2/CatalogService/ItemQuestions/{itemQuestionId} | Get item question by ID
[**ItemQuestionsAPI_getItemQuestionsAsync**](ItemQuestionsAPI.md#ItemQuestionsAPI_getItemQuestionsAsync) | **GET** /api/v2/CatalogService/ItemQuestions | Get all item questions
[**ItemQuestionsAPI_updateItemQuestionAsync**](ItemQuestionsAPI.md#ItemQuestionsAPI_updateItemQuestionAsync) | **PUT** /api/v2/CatalogService/ItemQuestions/{itemQuestionId} | Update an item question


# **ItemQuestionsAPI_createItemQuestionAsync**
```c
// Create a new item question
//
// Creates a new item question for the specified tenant.
//
item_question_dto_envelope_t* ItemQuestionsAPI_createItemQuestionAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, item_question_create_dto_t *item_question_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**item_question_create_dto** | **[item_question_create_dto_t](item_question_create_dto.md) \*** |  | [optional] 

### Return type

[item_question_dto_envelope_t](item_question_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemQuestionsAPI_deleteItemQuestionAsync**
```c
// Delete an item question
//
// Deletes an item question for the specified tenant.
//
void ItemQuestionsAPI_deleteItemQuestionAsync(apiClient_t *apiClient, char *tenantId, char *itemQuestionId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**itemQuestionId** | **char \*** |  | 
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

# **ItemQuestionsAPI_getItemQuestionByIdAsync**
```c
// Get item question by ID
//
// Retrieves a specific item question by its ID.
//
item_question_dto_envelope_t* ItemQuestionsAPI_getItemQuestionByIdAsync(apiClient_t *apiClient, char *itemQuestionId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**itemQuestionId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_question_dto_envelope_t](item_question_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemQuestionsAPI_getItemQuestionsAsync**
```c
// Get all item questions
//
// Retrieves all item questions for the specified tenant using OData query options.
//
item_question_dto_list_envelope_t* ItemQuestionsAPI_getItemQuestionsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_question_dto_list_envelope_t](item_question_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemQuestionsAPI_updateItemQuestionAsync**
```c
// Update an item question
//
// Updates an existing item question for the specified tenant.
//
void ItemQuestionsAPI_updateItemQuestionAsync(apiClient_t *apiClient, char *tenantId, char *itemQuestionId, char *api_version, char *x_api_version, item_question_update_dto_t *item_question_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**itemQuestionId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**item_question_update_dto** | **[item_question_update_dto_t](item_question_update_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

