# ItemsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ItemsAPI_countStockItemTagsByItemId**](ItemsAPI.md#ItemsAPI_countStockItemTagsByItemId) | **GET** /api/v2/CatalogService/Items/{itemId}/Tags/Count | Count tags for a stock item
[**ItemsAPI_countStockItemsByBusiness**](ItemsAPI.md#ItemsAPI_countStockItemsByBusiness) | **GET** /api/v2/CatalogService/Items/Count | Count stock items by business
[**ItemsAPI_createStockItem**](ItemsAPI.md#ItemsAPI_createStockItem) | **POST** /api/v2/CatalogService/Items | Create a new stock item
[**ItemsAPI_deleteStockItem**](ItemsAPI.md#ItemsAPI_deleteStockItem) | **DELETE** /api/v2/CatalogService/Items/{itemId} | Delete a stock item
[**ItemsAPI_getExtendedStockItemById**](ItemsAPI.md#ItemsAPI_getExtendedStockItemById) | **GET** /api/v2/CatalogService/Items/{itemId}/Extended | Get extended stock item by ID
[**ItemsAPI_getProductPrimaryImageAsync**](ItemsAPI.md#ItemsAPI_getProductPrimaryImageAsync) | **GET** /api/v2/CatalogService/Items/{itemId}/Images/Primary | Get item primary image
[**ItemsAPI_getStockItemAttachmentById**](ItemsAPI.md#ItemsAPI_getStockItemAttachmentById) | **GET** /api/v2/CatalogService/Items/{itemId}/Attachments/{itemAttachmentId} | Get attachment by ID for a stock item
[**ItemsAPI_getStockItemAttachmentsByItemId**](ItemsAPI.md#ItemsAPI_getStockItemAttachmentsByItemId) | **GET** /api/v2/CatalogService/Items/{itemId}/Attachments | Get attachments for a stock item
[**ItemsAPI_getStockItemAttributeOptionById**](ItemsAPI.md#ItemsAPI_getStockItemAttributeOptionById) | **GET** /api/v2/CatalogService/Items/{itemId}/AttributeOptions/{itemAttributeOptionId} | Get attribute option by ID for a stock item
[**ItemsAPI_getStockItemAttributeOptionsByItemId**](ItemsAPI.md#ItemsAPI_getStockItemAttributeOptionsByItemId) | **GET** /api/v2/CatalogService/Items/{itemId}/AttributeOptions | Get attribute options for a stock item
[**ItemsAPI_getStockItemBrandById**](ItemsAPI.md#ItemsAPI_getStockItemBrandById) | **GET** /api/v2/CatalogService/Items/{itemId}/Brands/{itemBrandId} | Get brand by ID for a stock item
[**ItemsAPI_getStockItemBrandsByItemId**](ItemsAPI.md#ItemsAPI_getStockItemBrandsByItemId) | **GET** /api/v2/CatalogService/Items/{itemId}/Brands | Get brands for a stock item
[**ItemsAPI_getStockItemById**](ItemsAPI.md#ItemsAPI_getStockItemById) | **GET** /api/v2/CatalogService/Items/{itemId} | Get stock item by ID
[**ItemsAPI_getStockItemCategoriesByItemId**](ItemsAPI.md#ItemsAPI_getStockItemCategoriesByItemId) | **GET** /api/v2/CatalogService/Items/{itemId}/Categories | Get categories for a stock item
[**ItemsAPI_getStockItemCategoryById**](ItemsAPI.md#ItemsAPI_getStockItemCategoryById) | **GET** /api/v2/CatalogService/Items/{itemId}/Categories/{itemCategoryId} | Get category by ID for a stock item
[**ItemsAPI_getStockItemGoogleCategoriesByItemId**](ItemsAPI.md#ItemsAPI_getStockItemGoogleCategoriesByItemId) | **GET** /api/v2/CatalogService/Items/{itemId}/GoogleCategories | Get Google categories for a stock item
[**ItemsAPI_getStockItemGoogleCategoryById**](ItemsAPI.md#ItemsAPI_getStockItemGoogleCategoryById) | **GET** /api/v2/CatalogService/Items/{itemId}/GoogleCategories/{itemGoogleCategoryId} | Get Google category by ID for a stock item
[**ItemsAPI_getStockItemImageById**](ItemsAPI.md#ItemsAPI_getStockItemImageById) | **GET** /api/v2/CatalogService/Items/{itemId}/Images/{itemImageId} | Get image by ID for a stock item
[**ItemsAPI_getStockItemImagesByItemId**](ItemsAPI.md#ItemsAPI_getStockItemImagesByItemId) | **GET** /api/v2/CatalogService/Items/{itemId}/Images | Get images for a stock item
[**ItemsAPI_getStockItemPriceRuleById**](ItemsAPI.md#ItemsAPI_getStockItemPriceRuleById) | **GET** /api/v2/CatalogService/Items/{itemId}/PriceRules/{itemPriceRuleId} | Get price rule by ID for a stock item
[**ItemsAPI_getStockItemPriceRulesByItemId**](ItemsAPI.md#ItemsAPI_getStockItemPriceRulesByItemId) | **GET** /api/v2/CatalogService/Items/{itemId}/PriceRules | Get price rules for a stock item
[**ItemsAPI_getStockItemQuestionById**](ItemsAPI.md#ItemsAPI_getStockItemQuestionById) | **GET** /api/v2/CatalogService/Items/{itemId}/Questions/{itemQuestionId} | Get question by ID for a stock item
[**ItemsAPI_getStockItemQuestionsByItemId**](ItemsAPI.md#ItemsAPI_getStockItemQuestionsByItemId) | **GET** /api/v2/CatalogService/Items/{itemId}/Questions | Get questions for a stock item
[**ItemsAPI_getStockItemRefundPoliciesByItemId**](ItemsAPI.md#ItemsAPI_getStockItemRefundPoliciesByItemId) | **GET** /api/v2/CatalogService/Items/{itemId}/RefundPolicies | Get refund policies for a stock item
[**ItemsAPI_getStockItemRefundPolicyById**](ItemsAPI.md#ItemsAPI_getStockItemRefundPolicyById) | **GET** /api/v2/CatalogService/Items/{itemId}/RefundPolicies/{itemRefundPolicyId} | Get refund policy by ID for a stock item
[**ItemsAPI_getStockItemReturnPoliciesByItemId**](ItemsAPI.md#ItemsAPI_getStockItemReturnPoliciesByItemId) | **GET** /api/v2/CatalogService/Items/{itemId}/ReturnPolicies | Get return policies for a stock item
[**ItemsAPI_getStockItemReturnPolicyById**](ItemsAPI.md#ItemsAPI_getStockItemReturnPolicyById) | **GET** /api/v2/CatalogService/Items/{itemId}/ReturnPolicies/{itemReturnPolicyId} | Get return policy by ID for a stock item
[**ItemsAPI_getStockItemReviewById**](ItemsAPI.md#ItemsAPI_getStockItemReviewById) | **GET** /api/v2/CatalogService/Items/{itemId}/Reviews/{itemReviewId} | Get review by ID for a stock item
[**ItemsAPI_getStockItemReviewsByItemId**](ItemsAPI.md#ItemsAPI_getStockItemReviewsByItemId) | **GET** /api/v2/CatalogService/Items/{itemId}/Reviews | Get reviews for a stock item
[**ItemsAPI_getStockItemShippingPoliciesByItemId**](ItemsAPI.md#ItemsAPI_getStockItemShippingPoliciesByItemId) | **GET** /api/v2/CatalogService/Items/{itemId}/ShippingPolicies | Get shipping policies for a stock item
[**ItemsAPI_getStockItemShippingPolicyById**](ItemsAPI.md#ItemsAPI_getStockItemShippingPolicyById) | **GET** /api/v2/CatalogService/Items/{itemId}/ShippingPolicies/{itemShippingPolicyId} | Get shipping policy by ID for a stock item
[**ItemsAPI_getStockItemTagById**](ItemsAPI.md#ItemsAPI_getStockItemTagById) | **GET** /api/v2/CatalogService/Items/{itemId}/Tags/{itemTagId} | Get tag by ID for a stock item
[**ItemsAPI_getStockItemTagsByItemId**](ItemsAPI.md#ItemsAPI_getStockItemTagsByItemId) | **GET** /api/v2/CatalogService/Items/{itemId}/Tags | Get tags for a stock item
[**ItemsAPI_getStockItemTaxPoliciesByItemId**](ItemsAPI.md#ItemsAPI_getStockItemTaxPoliciesByItemId) | **GET** /api/v2/CatalogService/Items/{itemId}/TaxPolicies | Get tax policies for a stock item
[**ItemsAPI_getStockItemTaxPolicyById**](ItemsAPI.md#ItemsAPI_getStockItemTaxPolicyById) | **GET** /api/v2/CatalogService/Items/{itemId}/TaxPolicies/{itemTaxPolicyId} | Get tax policy by ID for a stock item
[**ItemsAPI_getStockItemTypeById**](ItemsAPI.md#ItemsAPI_getStockItemTypeById) | **GET** /api/v2/CatalogService/Items/{itemId}/Types/{itemTypeId} | Get type by ID for a stock item
[**ItemsAPI_getStockItemTypesByItemId**](ItemsAPI.md#ItemsAPI_getStockItemTypesByItemId) | **GET** /api/v2/CatalogService/Items/{itemId}/Types | Get types for a stock item
[**ItemsAPI_getStockItemWarrantyPoliciesByItemId**](ItemsAPI.md#ItemsAPI_getStockItemWarrantyPoliciesByItemId) | **GET** /api/v2/CatalogService/Items/{itemId}/WarrantyPolicies | Get warranty policies for a stock item
[**ItemsAPI_getStockItemWarrantyPolicyById**](ItemsAPI.md#ItemsAPI_getStockItemWarrantyPolicyById) | **GET** /api/v2/CatalogService/Items/{itemId}/WarrantyPolicies/{itemWarrantyPolicyId} | Get warranty policy by ID for a stock item
[**ItemsAPI_getStockItemsOdataMaxPrice**](ItemsAPI.md#ItemsAPI_getStockItemsOdataMaxPrice) | **GET** /api/v2/CatalogService/Items/MaxPrice | Get max price of stock items
[**ItemsAPI_getStockItemsOdataMinPrice**](ItemsAPI.md#ItemsAPI_getStockItemsOdataMinPrice) | **GET** /api/v2/CatalogService/Items/MinPrice | Get min price of stock items
[**ItemsAPI_getStockItemsQuery**](ItemsAPI.md#ItemsAPI_getStockItemsQuery) | **GET** /api/v2/CatalogService/Items | Get all stock items
[**ItemsAPI_relateAttachmentToStockItem**](ItemsAPI.md#ItemsAPI_relateAttachmentToStockItem) | **POST** /api/v2/CatalogService/Items/{itemId}/Attachments/{itemAttachmentId} | Relate attachment to stock item
[**ItemsAPI_relateAttributeOptionToStockItem**](ItemsAPI.md#ItemsAPI_relateAttributeOptionToStockItem) | **POST** /api/v2/CatalogService/Items/{itemId}/AttributeOptions/{itemAttributeOptionId} | Relate attribute option to stock item
[**ItemsAPI_relateBrandToStockItem**](ItemsAPI.md#ItemsAPI_relateBrandToStockItem) | **POST** /api/v2/CatalogService/Items/{itemId}/Brands/{itemBrandId} | Relate brand to stock item
[**ItemsAPI_relateCategoryToStockItem**](ItemsAPI.md#ItemsAPI_relateCategoryToStockItem) | **POST** /api/v2/CatalogService/Items/{itemId}/Categories/{itemCategoryId} | Relate category to stock item
[**ItemsAPI_relateGoogleCategoryToStockItem**](ItemsAPI.md#ItemsAPI_relateGoogleCategoryToStockItem) | **POST** /api/v2/CatalogService/Items/{itemId}/GoogleCategories/{itemGoogleCategoryId} | Relate Google category to stock item
[**ItemsAPI_relateImageToStockItem**](ItemsAPI.md#ItemsAPI_relateImageToStockItem) | **POST** /api/v2/CatalogService/Items/{itemId}/Images/{itemImageId} | Relate image to stock item
[**ItemsAPI_relatePriceRuleToStockItem**](ItemsAPI.md#ItemsAPI_relatePriceRuleToStockItem) | **POST** /api/v2/CatalogService/Items/{itemId}/PriceRules/{itemPriceRuleId} | Relate price rule to stock item
[**ItemsAPI_relateQuestionToStockItem**](ItemsAPI.md#ItemsAPI_relateQuestionToStockItem) | **POST** /api/v2/CatalogService/Items/{itemId}/Questions | Create question for stock item
[**ItemsAPI_relateRefundPolicyToStockItem**](ItemsAPI.md#ItemsAPI_relateRefundPolicyToStockItem) | **POST** /api/v2/CatalogService/Items/{itemId}/RefundPolicies/{itemRefundPolicyId} | Relate refund policy to stock item
[**ItemsAPI_relateReturnPolicyToStockItem**](ItemsAPI.md#ItemsAPI_relateReturnPolicyToStockItem) | **POST** /api/v2/CatalogService/Items/{itemId}/ReturnPolicies/{itemReturnPolicyId} | Relate return policy to stock item
[**ItemsAPI_relateReviewToStockItem**](ItemsAPI.md#ItemsAPI_relateReviewToStockItem) | **POST** /api/v2/CatalogService/Items/{itemId}/Reviews | Create review for stock item
[**ItemsAPI_relateShippingPolicyToStockItem**](ItemsAPI.md#ItemsAPI_relateShippingPolicyToStockItem) | **POST** /api/v2/CatalogService/Items/{itemId}/ShippingPolicies/{itemShippingPolicyId} | Relate shipping policy to stock item
[**ItemsAPI_relateTagToStockItem**](ItemsAPI.md#ItemsAPI_relateTagToStockItem) | **POST** /api/v2/CatalogService/Items/{itemId}/Tags/{itemTagId} | Relate tag to stock item
[**ItemsAPI_relateTaxPolicyToStockItem**](ItemsAPI.md#ItemsAPI_relateTaxPolicyToStockItem) | **POST** /api/v2/CatalogService/Items/{itemId}/TaxPolicies/{itemTaxPolicyId} | Relate tax policy to stock item
[**ItemsAPI_relateTypeToStockItem**](ItemsAPI.md#ItemsAPI_relateTypeToStockItem) | **POST** /api/v2/CatalogService/Items/{itemId}/Types/{itemTypeId} | Relate type to stock item
[**ItemsAPI_relateWarrantyPolicyToStockItem**](ItemsAPI.md#ItemsAPI_relateWarrantyPolicyToStockItem) | **POST** /api/v2/CatalogService/Items/{itemId}/WarrantyPolicies/{itemWarrantyPolicyId} | Relate warranty policy to stock item
[**ItemsAPI_removeAttachmentFromStockItem**](ItemsAPI.md#ItemsAPI_removeAttachmentFromStockItem) | **DELETE** /api/v2/CatalogService/Items/{itemId}/Attachments/{itemAttachmentId} | Remove attachment from stock item
[**ItemsAPI_removeAttributeOptionFromStockItem**](ItemsAPI.md#ItemsAPI_removeAttributeOptionFromStockItem) | **DELETE** /api/v2/CatalogService/Items/{itemId}/AttributeOptions/{itemAttributeOptionId} | Remove attribute option from stock item
[**ItemsAPI_removeBrandFromStockItem**](ItemsAPI.md#ItemsAPI_removeBrandFromStockItem) | **DELETE** /api/v2/CatalogService/Items/{itemId}/Brands/{itemBrandId} | Remove brand from stock item
[**ItemsAPI_removeCategoryFromStockItem**](ItemsAPI.md#ItemsAPI_removeCategoryFromStockItem) | **DELETE** /api/v2/CatalogService/Items/{itemId}/Categories/{itemCategoryId} | Remove category from stock item
[**ItemsAPI_removeGoogleCategoryFromStockItem**](ItemsAPI.md#ItemsAPI_removeGoogleCategoryFromStockItem) | **DELETE** /api/v2/CatalogService/Items/{itemId}/GoogleCategories/{itemGoogleCategoryId} | Remove Google category from stock item
[**ItemsAPI_removeImageFromStockItem**](ItemsAPI.md#ItemsAPI_removeImageFromStockItem) | **DELETE** /api/v2/CatalogService/Items/{itemId}/Images/{itemImageId} | Remove image from stock item
[**ItemsAPI_removePriceRuleFromStockItem**](ItemsAPI.md#ItemsAPI_removePriceRuleFromStockItem) | **DELETE** /api/v2/CatalogService/Items/{itemId}/PriceRules/{itemPriceRuleId} | Remove price rule from stock item
[**ItemsAPI_removeQuestionFromStockItem**](ItemsAPI.md#ItemsAPI_removeQuestionFromStockItem) | **DELETE** /api/v2/CatalogService/Items/{itemId}/Questions/{itemQuestionId} | Remove question from stock item
[**ItemsAPI_removeRefundPolicyFromStockItem**](ItemsAPI.md#ItemsAPI_removeRefundPolicyFromStockItem) | **DELETE** /api/v2/CatalogService/Items/{itemId}/RefundPolicies/{itemRefundPolicyId} | Remove refund policy from stock item
[**ItemsAPI_removeReturnPolicyFromStockItem**](ItemsAPI.md#ItemsAPI_removeReturnPolicyFromStockItem) | **DELETE** /api/v2/CatalogService/Items/{itemId}/ReturnPolicies/{itemReturnPolicyId} | Remove return policy from stock item
[**ItemsAPI_removeReviewFromStockItem**](ItemsAPI.md#ItemsAPI_removeReviewFromStockItem) | **DELETE** /api/v2/CatalogService/Items/{itemId}/Reviews/{itemReviewId} | Remove review from stock item
[**ItemsAPI_removeShippingPolicyFromStockItem**](ItemsAPI.md#ItemsAPI_removeShippingPolicyFromStockItem) | **DELETE** /api/v2/CatalogService/Items/{itemId}/ShippingPolicies/{itemShippingPolicyId} | Remove shipping policy from stock item
[**ItemsAPI_removeTagFromStockItem**](ItemsAPI.md#ItemsAPI_removeTagFromStockItem) | **DELETE** /api/v2/CatalogService/Items/{itemId}/Tags/{itemTagId} | Remove tag from stock item
[**ItemsAPI_removeTaxPolicyFromStockItem**](ItemsAPI.md#ItemsAPI_removeTaxPolicyFromStockItem) | **DELETE** /api/v2/CatalogService/Items/{itemId}/TaxPolicies/{itemTaxPolicyId} | Remove tax policy from stock item
[**ItemsAPI_removeTypeFromStockItem**](ItemsAPI.md#ItemsAPI_removeTypeFromStockItem) | **DELETE** /api/v2/CatalogService/Items/{itemId}/Types/{itemTypeId} | Remove type from stock item
[**ItemsAPI_removeWarrantyPolicyFromStockItem**](ItemsAPI.md#ItemsAPI_removeWarrantyPolicyFromStockItem) | **DELETE** /api/v2/CatalogService/Items/{itemId}/WarrantyPolicies/{itemWarrantyPolicyId} | Remove warranty policy from stock item
[**ItemsAPI_updateProductPrimaryImageAsync**](ItemsAPI.md#ItemsAPI_updateProductPrimaryImageAsync) | **POST** /api/v2/CatalogService/Items/{itemId}/Images/Primary | Update item primary image
[**ItemsAPI_updateStockItem**](ItemsAPI.md#ItemsAPI_updateStockItem) | **PUT** /api/v2/CatalogService/Items/{itemId} | Update a stock item


# **ItemsAPI_countStockItemTagsByItemId**
```c
// Count tags for a stock item
//
// Counts the number of tags associated with a specific stock item.
//
int32_envelope_t* ItemsAPI_countStockItemTagsByItemId(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**itemId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemsAPI_countStockItemsByBusiness**
```c
// Count stock items by business
//
// Counts the number of stock items for a business, optionally filtered by tenant and OData query options.
//
int32_envelope_t* ItemsAPI_countStockItemsByBusiness(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemsAPI_createStockItem**
```c
// Create a new stock item
//
// Creates a new stock item for the specified tenant.
//
void ItemsAPI_createStockItem(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, catalog_item_create_dto_t *catalog_item_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**catalog_item_create_dto** | **[catalog_item_create_dto_t](catalog_item_create_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemsAPI_deleteStockItem**
```c
// Delete a stock item
//
// Deletes a stock item for the specified tenant and item ID.
//
void ItemsAPI_deleteStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**itemId** | **char \*** |  | 
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

# **ItemsAPI_getExtendedStockItemById**
```c
// Get extended stock item by ID
//
// Retrieves extended information for a stock item by its unique identifier.
//
catalog_item_dto_envelope_t* ItemsAPI_getExtendedStockItemById(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**itemId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[catalog_item_dto_envelope_t](catalog_item_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemsAPI_getProductPrimaryImageAsync**
```c
// Get item primary image
//
// Retrieves the primary image for a specific catalog item.
//
empty_envelope_t* ItemsAPI_getProductPrimaryImageAsync(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**itemId** | **char \*** |  | 
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

# **ItemsAPI_getStockItemAttachmentById**
```c
// Get attachment by ID for a stock item
//
// Retrieves a specific attachment by ID for a stock item.
//
item_attachment_dto_envelope_t* ItemsAPI_getStockItemAttachmentById(apiClient_t *apiClient, char *itemId, char *itemAttachmentId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**itemId** | **char \*** |  | 
**itemAttachmentId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_attachment_dto_envelope_t](item_attachment_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemsAPI_getStockItemAttachmentsByItemId**
```c
// Get attachments for a stock item
//
// Retrieves all attachments associated with a specific stock item.
//
item_attachment_dto_list_envelope_t* ItemsAPI_getStockItemAttachmentsByItemId(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**itemId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_attachment_dto_list_envelope_t](item_attachment_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemsAPI_getStockItemAttributeOptionById**
```c
// Get attribute option by ID for a stock item
//
// Retrieves a specific attribute option by ID for a stock item.
//
item_attribute_option_dto_envelope_t* ItemsAPI_getStockItemAttributeOptionById(apiClient_t *apiClient, char *itemId, char *itemAttributeOptionId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**itemId** | **char \*** |  | 
**itemAttributeOptionId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_attribute_option_dto_envelope_t](item_attribute_option_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemsAPI_getStockItemAttributeOptionsByItemId**
```c
// Get attribute options for a stock item
//
// Retrieves all attribute options associated with a specific stock item.
//
item_attribute_option_dto_list_envelope_t* ItemsAPI_getStockItemAttributeOptionsByItemId(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**itemId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_attribute_option_dto_list_envelope_t](item_attribute_option_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemsAPI_getStockItemBrandById**
```c
// Get brand by ID for a stock item
//
// Retrieves a specific brand by ID for a stock item.
//
item_brand_dto_envelope_t* ItemsAPI_getStockItemBrandById(apiClient_t *apiClient, char *itemId, char *itemBrandId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**itemId** | **char \*** |  | 
**itemBrandId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_brand_dto_envelope_t](item_brand_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemsAPI_getStockItemBrandsByItemId**
```c
// Get brands for a stock item
//
// Retrieves all brands associated with a specific stock item.
//
item_brand_dto_list_envelope_t* ItemsAPI_getStockItemBrandsByItemId(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**itemId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_brand_dto_list_envelope_t](item_brand_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemsAPI_getStockItemById**
```c
// Get stock item by ID
//
// Retrieves a stock item by its unique identifier.
//
catalog_item_dto_envelope_t* ItemsAPI_getStockItemById(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**itemId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[catalog_item_dto_envelope_t](catalog_item_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemsAPI_getStockItemCategoriesByItemId**
```c
// Get categories for a stock item
//
// Retrieves all categories associated with a specific stock item.
//
item_category_dto_list_envelope_t* ItemsAPI_getStockItemCategoriesByItemId(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**itemId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_category_dto_list_envelope_t](item_category_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemsAPI_getStockItemCategoryById**
```c
// Get category by ID for a stock item
//
// Retrieves a specific category by ID for a stock item.
//
item_category_dto_envelope_t* ItemsAPI_getStockItemCategoryById(apiClient_t *apiClient, char *itemId, char *itemCategoryId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**itemId** | **char \*** |  | 
**itemCategoryId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_category_dto_envelope_t](item_category_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemsAPI_getStockItemGoogleCategoriesByItemId**
```c
// Get Google categories for a stock item
//
// Retrieves all Google categories associated with a specific stock item.
//
item_google_category_dto_list_envelope_t* ItemsAPI_getStockItemGoogleCategoriesByItemId(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**itemId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_google_category_dto_list_envelope_t](item_google_category_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemsAPI_getStockItemGoogleCategoryById**
```c
// Get Google category by ID for a stock item
//
// Retrieves a specific Google category by ID for a stock item.
//
item_google_category_dto_envelope_t* ItemsAPI_getStockItemGoogleCategoryById(apiClient_t *apiClient, char *itemId, char *itemGoogleCategoryId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**itemId** | **char \*** |  | 
**itemGoogleCategoryId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_google_category_dto_envelope_t](item_google_category_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemsAPI_getStockItemImageById**
```c
// Get image by ID for a stock item
//
// Retrieves a specific image by ID for a stock item.
//
item_image_dto_envelope_t* ItemsAPI_getStockItemImageById(apiClient_t *apiClient, char *itemId, char *itemImageId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**itemId** | **char \*** |  | 
**itemImageId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_image_dto_envelope_t](item_image_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemsAPI_getStockItemImagesByItemId**
```c
// Get images for a stock item
//
// Retrieves all images associated with a specific stock item.
//
item_image_dto_list_envelope_t* ItemsAPI_getStockItemImagesByItemId(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**itemId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_image_dto_list_envelope_t](item_image_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemsAPI_getStockItemPriceRuleById**
```c
// Get price rule by ID for a stock item
//
// Retrieves a specific pricing rule by ID for a stock item.
//
pricing_rule_dto_envelope_t* ItemsAPI_getStockItemPriceRuleById(apiClient_t *apiClient, char *itemId, char *itemPriceRuleId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**itemId** | **char \*** |  | 
**itemPriceRuleId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[pricing_rule_dto_envelope_t](pricing_rule_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemsAPI_getStockItemPriceRulesByItemId**
```c
// Get price rules for a stock item
//
// Retrieves all pricing rules associated with a specific stock item.
//
pricing_rule_dto_list_envelope_t* ItemsAPI_getStockItemPriceRulesByItemId(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**itemId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[pricing_rule_dto_list_envelope_t](pricing_rule_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemsAPI_getStockItemQuestionById**
```c
// Get question by ID for a stock item
//
// Retrieves a specific question by ID for a stock item.
//
item_question_dto_envelope_t* ItemsAPI_getStockItemQuestionById(apiClient_t *apiClient, char *itemId, char *itemQuestionId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**itemId** | **char \*** |  | 
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

# **ItemsAPI_getStockItemQuestionsByItemId**
```c
// Get questions for a stock item
//
// Retrieves all questions associated with a specific stock item.
//
item_question_dto_list_envelope_t* ItemsAPI_getStockItemQuestionsByItemId(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**itemId** | **char \*** |  | 
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

# **ItemsAPI_getStockItemRefundPoliciesByItemId**
```c
// Get refund policies for a stock item
//
// Retrieves all refund policies associated with a specific stock item.
//
item_refund_policy_dto_list_envelope_t* ItemsAPI_getStockItemRefundPoliciesByItemId(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**itemId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_refund_policy_dto_list_envelope_t](item_refund_policy_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemsAPI_getStockItemRefundPolicyById**
```c
// Get refund policy by ID for a stock item
//
// Retrieves a specific refund policy by ID for a stock item.
//
item_refund_policy_dto_envelope_t* ItemsAPI_getStockItemRefundPolicyById(apiClient_t *apiClient, char *itemId, char *itemRefundPolicyId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**itemId** | **char \*** |  | 
**itemRefundPolicyId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_refund_policy_dto_envelope_t](item_refund_policy_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemsAPI_getStockItemReturnPoliciesByItemId**
```c
// Get return policies for a stock item
//
// Retrieves all return policies associated with a specific stock item.
//
item_return_policy_dto_list_envelope_t* ItemsAPI_getStockItemReturnPoliciesByItemId(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**itemId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_return_policy_dto_list_envelope_t](item_return_policy_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemsAPI_getStockItemReturnPolicyById**
```c
// Get return policy by ID for a stock item
//
// Retrieves a specific return policy by ID for a stock item.
//
item_return_policy_dto_envelope_t* ItemsAPI_getStockItemReturnPolicyById(apiClient_t *apiClient, char *itemId, char *itemReturnPolicyId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**itemId** | **char \*** |  | 
**itemReturnPolicyId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_return_policy_dto_envelope_t](item_return_policy_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemsAPI_getStockItemReviewById**
```c
// Get review by ID for a stock item
//
// Retrieves a specific review by ID for a stock item.
//
item_review_dto_envelope_t* ItemsAPI_getStockItemReviewById(apiClient_t *apiClient, char *itemId, char *itemReviewId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**itemId** | **char \*** |  | 
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

# **ItemsAPI_getStockItemReviewsByItemId**
```c
// Get reviews for a stock item
//
// Retrieves all reviews associated with a specific stock item.
//
item_review_dto_list_envelope_t* ItemsAPI_getStockItemReviewsByItemId(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version);
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

# **ItemsAPI_getStockItemShippingPoliciesByItemId**
```c
// Get shipping policies for a stock item
//
// Retrieves all shipping policies associated with a specific stock item.
//
item_shipping_policy_dto_list_envelope_t* ItemsAPI_getStockItemShippingPoliciesByItemId(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**itemId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_shipping_policy_dto_list_envelope_t](item_shipping_policy_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemsAPI_getStockItemShippingPolicyById**
```c
// Get shipping policy by ID for a stock item
//
// Retrieves a specific shipping policy by ID for a stock item.
//
item_shipping_policy_dto_envelope_t* ItemsAPI_getStockItemShippingPolicyById(apiClient_t *apiClient, char *itemId, char *itemShippingPolicyId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**itemId** | **char \*** |  | 
**itemShippingPolicyId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_shipping_policy_dto_envelope_t](item_shipping_policy_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemsAPI_getStockItemTagById**
```c
// Get tag by ID for a stock item
//
// Retrieves a specific tag by ID for a stock item.
//
item_tag_dto_envelope_t* ItemsAPI_getStockItemTagById(apiClient_t *apiClient, char *itemId, char *itemTagId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**itemId** | **char \*** |  | 
**itemTagId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_tag_dto_envelope_t](item_tag_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemsAPI_getStockItemTagsByItemId**
```c
// Get tags for a stock item
//
// Retrieves all tags associated with a specific stock item.
//
item_tag_dto_list_envelope_t* ItemsAPI_getStockItemTagsByItemId(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**itemId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_tag_dto_list_envelope_t](item_tag_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemsAPI_getStockItemTaxPoliciesByItemId**
```c
// Get tax policies for a stock item
//
// Retrieves all tax policies associated with a specific stock item.
//
item_tax_policy_dto_list_envelope_t* ItemsAPI_getStockItemTaxPoliciesByItemId(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**itemId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_tax_policy_dto_list_envelope_t](item_tax_policy_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemsAPI_getStockItemTaxPolicyById**
```c
// Get tax policy by ID for a stock item
//
// Retrieves a specific tax policy by ID for a stock item.
//
item_tax_policy_dto_envelope_t* ItemsAPI_getStockItemTaxPolicyById(apiClient_t *apiClient, char *itemId, char *itemTaxPolicyId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**itemId** | **char \*** |  | 
**itemTaxPolicyId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_tax_policy_dto_envelope_t](item_tax_policy_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemsAPI_getStockItemTypeById**
```c
// Get type by ID for a stock item
//
// Retrieves a specific type by ID for a stock item.
//
item_type_dto_envelope_t* ItemsAPI_getStockItemTypeById(apiClient_t *apiClient, char *itemId, char *itemTypeId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**itemId** | **char \*** |  | 
**itemTypeId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_type_dto_envelope_t](item_type_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemsAPI_getStockItemTypesByItemId**
```c
// Get types for a stock item
//
// Retrieves all types associated with a specific stock item.
//
item_type_dto_list_envelope_t* ItemsAPI_getStockItemTypesByItemId(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**itemId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_type_dto_list_envelope_t](item_type_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemsAPI_getStockItemWarrantyPoliciesByItemId**
```c
// Get warranty policies for a stock item
//
// Retrieves all warranty policies associated with a specific stock item.
//
item_warranty_policy_dto_list_envelope_t* ItemsAPI_getStockItemWarrantyPoliciesByItemId(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**itemId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_warranty_policy_dto_list_envelope_t](item_warranty_policy_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemsAPI_getStockItemWarrantyPolicyById**
```c
// Get warranty policy by ID for a stock item
//
// Retrieves a specific warranty policy by ID for a stock item.
//
item_warranty_policy_dto_envelope_t* ItemsAPI_getStockItemWarrantyPolicyById(apiClient_t *apiClient, char *itemId, char *itemWarrantyPolicyId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**itemId** | **char \*** |  | 
**itemWarrantyPolicyId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_warranty_policy_dto_envelope_t](item_warranty_policy_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemsAPI_getStockItemsOdataMaxPrice**
```c
// Get max price of stock items
//
// Retrieves the maximum price among all stock items, optionally filtered by tenant and OData query options.
//
money_envelope_t* ItemsAPI_getStockItemsOdataMaxPrice(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[money_envelope_t](money_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemsAPI_getStockItemsOdataMinPrice**
```c
// Get min price of stock items
//
// Retrieves the minimum price among all stock items, optionally filtered by tenant and OData query options.
//
money_envelope_t* ItemsAPI_getStockItemsOdataMinPrice(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[money_envelope_t](money_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemsAPI_getStockItemsQuery**
```c
// Get all stock items
//
// Retrieves all stock items, optionally filtered by tenant and OData query options.
//
catalog_item_dto_list_envelope_t* ItemsAPI_getStockItemsQuery(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[catalog_item_dto_list_envelope_t](catalog_item_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemsAPI_relateAttachmentToStockItem**
```c
// Relate attachment to stock item
//
// Associates an attachment with a stock item.
//
item_attachment_dto_envelope_t* ItemsAPI_relateAttachmentToStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemAttachmentId, char *api_version, char *x_api_version, item_attachment_create_dto_t *item_attachment_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**itemId** | **char \*** |  | 
**itemAttachmentId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**item_attachment_create_dto** | **[item_attachment_create_dto_t](item_attachment_create_dto.md) \*** |  | [optional] 

### Return type

[item_attachment_dto_envelope_t](item_attachment_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemsAPI_relateAttributeOptionToStockItem**
```c
// Relate attribute option to stock item
//
// Associates an attribute option with a stock item.
//
item_attribute_option_dto_envelope_t* ItemsAPI_relateAttributeOptionToStockItem(apiClient_t *apiClient, char *itemId, char *itemAttributeOptionId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**itemId** | **char \*** |  | 
**itemAttributeOptionId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_attribute_option_dto_envelope_t](item_attribute_option_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemsAPI_relateBrandToStockItem**
```c
// Relate brand to stock item
//
// Associates a brand with a stock item.
//
item_brand_dto_envelope_t* ItemsAPI_relateBrandToStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemBrandId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**itemId** | **char \*** |  | 
**itemBrandId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_brand_dto_envelope_t](item_brand_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemsAPI_relateCategoryToStockItem**
```c
// Relate category to stock item
//
// Associates a category with a stock item.
//
item_category_dto_envelope_t* ItemsAPI_relateCategoryToStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemCategoryId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**itemId** | **char \*** |  | 
**itemCategoryId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_category_dto_envelope_t](item_category_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemsAPI_relateGoogleCategoryToStockItem**
```c
// Relate Google category to stock item
//
// Associates a Google category with a stock item.
//
item_google_category_dto_envelope_t* ItemsAPI_relateGoogleCategoryToStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemGoogleCategoryId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**itemId** | **char \*** |  | 
**itemGoogleCategoryId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_google_category_dto_envelope_t](item_google_category_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemsAPI_relateImageToStockItem**
```c
// Relate image to stock item
//
// Associates an image with a stock item.
//
item_image_dto_envelope_t* ItemsAPI_relateImageToStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemImageId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**itemId** | **char \*** |  | 
**itemImageId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_image_dto_envelope_t](item_image_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemsAPI_relatePriceRuleToStockItem**
```c
// Relate price rule to stock item
//
// Associates a pricing rule with a stock item.
//
pricing_rule_dto_envelope_t* ItemsAPI_relatePriceRuleToStockItem(apiClient_t *apiClient, char *itemId, char *itemPriceRuleId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**itemId** | **char \*** |  | 
**itemPriceRuleId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[pricing_rule_dto_envelope_t](pricing_rule_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemsAPI_relateQuestionToStockItem**
```c
// Create question for stock item
//
// Creates a new question for a stock item.
//
item_question_dto_envelope_t* ItemsAPI_relateQuestionToStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *api_version, char *x_api_version, item_question_record_create_dto_t *item_question_record_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**itemId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**item_question_record_create_dto** | **[item_question_record_create_dto_t](item_question_record_create_dto.md) \*** |  | [optional] 

### Return type

[item_question_dto_envelope_t](item_question_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemsAPI_relateRefundPolicyToStockItem**
```c
// Relate refund policy to stock item
//
// Associates a refund policy with a stock item.
//
item_refund_policy_dto_envelope_t* ItemsAPI_relateRefundPolicyToStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemRefundPolicyId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**itemId** | **char \*** |  | 
**itemRefundPolicyId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_refund_policy_dto_envelope_t](item_refund_policy_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemsAPI_relateReturnPolicyToStockItem**
```c
// Relate return policy to stock item
//
// Associates a return policy with a stock item.
//
item_return_policy_dto_envelope_t* ItemsAPI_relateReturnPolicyToStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemReturnPolicyId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**itemId** | **char \*** |  | 
**itemReturnPolicyId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_return_policy_dto_envelope_t](item_return_policy_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemsAPI_relateReviewToStockItem**
```c
// Create review for stock item
//
// Creates a new review for a stock item.
//
item_review_dto_envelope_t* ItemsAPI_relateReviewToStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *api_version, char *x_api_version, item_review_record_create_dto_t *item_review_record_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**itemId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**item_review_record_create_dto** | **[item_review_record_create_dto_t](item_review_record_create_dto.md) \*** |  | [optional] 

### Return type

[item_review_dto_envelope_t](item_review_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemsAPI_relateShippingPolicyToStockItem**
```c
// Relate shipping policy to stock item
//
// Associates a shipping policy with a stock item.
//
item_shipping_policy_dto_envelope_t* ItemsAPI_relateShippingPolicyToStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemShippingPolicyId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**itemId** | **char \*** |  | 
**itemShippingPolicyId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_shipping_policy_dto_envelope_t](item_shipping_policy_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemsAPI_relateTagToStockItem**
```c
// Relate tag to stock item
//
// Associates a tag with a stock item.
//
item_tag_dto_envelope_t* ItemsAPI_relateTagToStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemTagId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**itemId** | **char \*** |  | 
**itemTagId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_tag_dto_envelope_t](item_tag_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemsAPI_relateTaxPolicyToStockItem**
```c
// Relate tax policy to stock item
//
// Associates a tax policy with a stock item.
//
item_tax_policy_dto_envelope_t* ItemsAPI_relateTaxPolicyToStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemTaxPolicyId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**itemId** | **char \*** |  | 
**itemTaxPolicyId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_tax_policy_dto_envelope_t](item_tax_policy_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemsAPI_relateTypeToStockItem**
```c
// Relate type to stock item
//
// Associates a type with a stock item.
//
item_type_dto_envelope_t* ItemsAPI_relateTypeToStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemTypeId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**itemId** | **char \*** |  | 
**itemTypeId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_type_dto_envelope_t](item_type_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemsAPI_relateWarrantyPolicyToStockItem**
```c
// Relate warranty policy to stock item
//
// Associates a warranty policy with a stock item.
//
item_warranty_policy_dto_envelope_t* ItemsAPI_relateWarrantyPolicyToStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemWarrantyPolicyId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**itemId** | **char \*** |  | 
**itemWarrantyPolicyId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_warranty_policy_dto_envelope_t](item_warranty_policy_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemsAPI_removeAttachmentFromStockItem**
```c
// Remove attachment from stock item
//
// Removes an attachment from a stock item.
//
item_attachment_dto_envelope_t* ItemsAPI_removeAttachmentFromStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemAttachmentId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**itemId** | **char \*** |  | 
**itemAttachmentId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_attachment_dto_envelope_t](item_attachment_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemsAPI_removeAttributeOptionFromStockItem**
```c
// Remove attribute option from stock item
//
// Removes an attribute option from a stock item.
//
item_attribute_option_dto_envelope_t* ItemsAPI_removeAttributeOptionFromStockItem(apiClient_t *apiClient, char *itemId, char *itemAttributeOptionId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**itemId** | **char \*** |  | 
**itemAttributeOptionId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_attribute_option_dto_envelope_t](item_attribute_option_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemsAPI_removeBrandFromStockItem**
```c
// Remove brand from stock item
//
// Removes a brand association from a stock item.
//
item_brand_dto_envelope_t* ItemsAPI_removeBrandFromStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemBrandId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**itemId** | **char \*** |  | 
**itemBrandId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_brand_dto_envelope_t](item_brand_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemsAPI_removeCategoryFromStockItem**
```c
// Remove category from stock item
//
// Removes a category association from a stock item.
//
item_category_dto_envelope_t* ItemsAPI_removeCategoryFromStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemCategoryId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**itemId** | **char \*** |  | 
**itemCategoryId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_category_dto_envelope_t](item_category_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemsAPI_removeGoogleCategoryFromStockItem**
```c
// Remove Google category from stock item
//
// Removes a Google category from a stock item.
//
item_google_category_dto_envelope_t* ItemsAPI_removeGoogleCategoryFromStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemGoogleCategoryId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**itemId** | **char \*** |  | 
**itemGoogleCategoryId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_google_category_dto_envelope_t](item_google_category_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemsAPI_removeImageFromStockItem**
```c
// Remove image from stock item
//
// Removes an image association from a stock item.
//
item_image_dto_envelope_t* ItemsAPI_removeImageFromStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemImageId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**itemId** | **char \*** |  | 
**itemImageId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_image_dto_envelope_t](item_image_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemsAPI_removePriceRuleFromStockItem**
```c
// Remove price rule from stock item
//
// Removes a pricing rule from a stock item.
//
pricing_rule_dto_envelope_t* ItemsAPI_removePriceRuleFromStockItem(apiClient_t *apiClient, char *itemId, char *itemPriceRuleId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**itemId** | **char \*** |  | 
**itemPriceRuleId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[pricing_rule_dto_envelope_t](pricing_rule_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemsAPI_removeQuestionFromStockItem**
```c
// Remove question from stock item
//
// Removes a question from a stock item.
//
item_question_dto_envelope_t* ItemsAPI_removeQuestionFromStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemQuestionId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**itemId** | **char \*** |  | 
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

# **ItemsAPI_removeRefundPolicyFromStockItem**
```c
// Remove refund policy from stock item
//
// Removes a refund policy from a stock item.
//
item_refund_policy_dto_envelope_t* ItemsAPI_removeRefundPolicyFromStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemRefundPolicyId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**itemId** | **char \*** |  | 
**itemRefundPolicyId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_refund_policy_dto_envelope_t](item_refund_policy_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemsAPI_removeReturnPolicyFromStockItem**
```c
// Remove return policy from stock item
//
// Removes a return policy from a stock item.
//
item_return_policy_dto_envelope_t* ItemsAPI_removeReturnPolicyFromStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemReturnPolicyId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**itemId** | **char \*** |  | 
**itemReturnPolicyId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_return_policy_dto_envelope_t](item_return_policy_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemsAPI_removeReviewFromStockItem**
```c
// Remove review from stock item
//
// Removes a review from a stock item.
//
item_review_dto_envelope_t* ItemsAPI_removeReviewFromStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemReviewId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**itemId** | **char \*** |  | 
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

# **ItemsAPI_removeShippingPolicyFromStockItem**
```c
// Remove shipping policy from stock item
//
// Removes a shipping policy from a stock item.
//
item_shipping_policy_dto_envelope_t* ItemsAPI_removeShippingPolicyFromStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemShippingPolicyId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**itemId** | **char \*** |  | 
**itemShippingPolicyId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_shipping_policy_dto_envelope_t](item_shipping_policy_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemsAPI_removeTagFromStockItem**
```c
// Remove tag from stock item
//
// Removes a tag association from a stock item.
//
item_tag_dto_envelope_t* ItemsAPI_removeTagFromStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemTagId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**itemId** | **char \*** |  | 
**itemTagId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_tag_dto_envelope_t](item_tag_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemsAPI_removeTaxPolicyFromStockItem**
```c
// Remove tax policy from stock item
//
// Removes a tax policy from a stock item.
//
item_tax_policy_dto_envelope_t* ItemsAPI_removeTaxPolicyFromStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemTaxPolicyId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**itemId** | **char \*** |  | 
**itemTaxPolicyId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_tax_policy_dto_envelope_t](item_tax_policy_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemsAPI_removeTypeFromStockItem**
```c
// Remove type from stock item
//
// Removes a type association from a stock item.
//
item_type_dto_envelope_t* ItemsAPI_removeTypeFromStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemTypeId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**itemId** | **char \*** |  | 
**itemTypeId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_type_dto_envelope_t](item_type_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemsAPI_removeWarrantyPolicyFromStockItem**
```c
// Remove warranty policy from stock item
//
// Removes a warranty policy from a stock item.
//
item_warranty_policy_dto_envelope_t* ItemsAPI_removeWarrantyPolicyFromStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemWarrantyPolicyId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**itemId** | **char \*** |  | 
**itemWarrantyPolicyId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[item_warranty_policy_dto_envelope_t](item_warranty_policy_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemsAPI_updateProductPrimaryImageAsync**
```c
// Update item primary image
//
// Updates the primary image for a specific catalog item.
//
empty_envelope_t* ItemsAPI_updateProductPrimaryImageAsync(apiClient_t *apiClient, char *itemId, char *tenantId, char *api_version, char *x_api_version, binary_t* data);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**itemId** | **char \*** |  | 
**tenantId** | **char \*** |  | [optional] 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**data** | **binary_t*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: multipart/form-data, application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ItemsAPI_updateStockItem**
```c
// Update a stock item
//
// Updates an existing stock item for the specified tenant and item ID.
//
void ItemsAPI_updateStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *api_version, char *x_api_version, catalog_item_update_dto_t *catalog_item_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**itemId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**catalog_item_update_dto** | **[catalog_item_update_dto_t](catalog_item_update_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

