# ItemReviewsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ItemReviewsAPI_createItemReviewAsync**](ItemReviewsAPI.md#ItemReviewsAPI_createItemReviewAsync) | **POST** /api/v2/CatalogService/ItemReviews | Create a new item review
[**ItemReviewsAPI_deleteItemReviewAsync**](ItemReviewsAPI.md#ItemReviewsAPI_deleteItemReviewAsync) | **DELETE** /api/v2/CatalogService/ItemReviews/{itemReviewId} | Delete an item review
[**ItemReviewsAPI_getItemReviewByIdAsync**](ItemReviewsAPI.md#ItemReviewsAPI_getItemReviewByIdAsync) | **GET** /api/v2/CatalogService/ItemReviews/{itemReviewId} | Get item review by ID
[**ItemReviewsAPI_getItemReviewsAsync**](ItemReviewsAPI.md#ItemReviewsAPI_getItemReviewsAsync) | **GET** /api/v2/CatalogService/ItemReviews | Get all item reviews
[**ItemReviewsAPI_updateItemReviewAsync**](ItemReviewsAPI.md#ItemReviewsAPI_updateItemReviewAsync) | **PUT** /api/v2/CatalogService/ItemReviews/{itemReviewId} | Update an item review


# **ItemReviewsAPI_createItemReviewAsync**
```c
// Create a new item review
//
// Creates a new item review for the specified tenant.
//
item_review_dto_envelope_t* ItemReviewsAPI_createItemReviewAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, item_review_create_dto_t *item_review_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**item_review_create_dto** | **[item_review_create_dto_t](item_review_create_dto.md) \*** |  | [optional] 

### Return type

[item_review_dto_envelope_t](item_review_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemReviewsAPI_deleteItemReviewAsync**
```c
// Delete an item review
//
// Deletes an item review for the specified tenant.
//
void ItemReviewsAPI_deleteItemReviewAsync(apiClient_t *apiClient, char *tenantId, char *itemReviewId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**itemReviewId** | **char \*** |  | 
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

# **ItemReviewsAPI_getItemReviewByIdAsync**
```c
// Get item review by ID
//
// Retrieves a specific item review by its ID.
//
item_review_dto_envelope_t* ItemReviewsAPI_getItemReviewByIdAsync(apiClient_t *apiClient, char *itemReviewId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**itemReviewId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_review_dto_envelope_t](item_review_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemReviewsAPI_getItemReviewsAsync**
```c
// Get all item reviews
//
// Retrieves all item reviews for the specified item using OData query options.
//
item_review_dto_list_envelope_t* ItemReviewsAPI_getItemReviewsAsync(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**itemId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_review_dto_list_envelope_t](item_review_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemReviewsAPI_updateItemReviewAsync**
```c
// Update an item review
//
// Updates an existing item review for the specified tenant.
//
void ItemReviewsAPI_updateItemReviewAsync(apiClient_t *apiClient, char *tenantId, char *itemReviewId, char *api_version, char *x_api_version, item_review_update_dto_t *item_review_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**itemReviewId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**item_review_update_dto** | **[item_review_update_dto_t](item_review_update_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

