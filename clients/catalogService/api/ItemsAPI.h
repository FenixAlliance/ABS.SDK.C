#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/catalog_item_create_dto.h"
#include "../model/catalog_item_dto_envelope.h"
#include "../model/catalog_item_dto_list_envelope.h"
#include "../model/catalog_item_update_dto.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/item_attachment_create_dto.h"
#include "../model/item_attachment_dto_envelope.h"
#include "../model/item_attachment_dto_list_envelope.h"
#include "../model/item_attribute_option_dto_envelope.h"
#include "../model/item_attribute_option_dto_list_envelope.h"
#include "../model/item_brand_dto_envelope.h"
#include "../model/item_brand_dto_list_envelope.h"
#include "../model/item_category_dto_envelope.h"
#include "../model/item_category_dto_list_envelope.h"
#include "../model/item_google_category_dto_envelope.h"
#include "../model/item_google_category_dto_list_envelope.h"
#include "../model/item_image_dto_envelope.h"
#include "../model/item_image_dto_list_envelope.h"
#include "../model/item_question_dto_envelope.h"
#include "../model/item_question_dto_list_envelope.h"
#include "../model/item_question_record_create_dto.h"
#include "../model/item_refund_policy_dto_envelope.h"
#include "../model/item_refund_policy_dto_list_envelope.h"
#include "../model/item_return_policy_dto_envelope.h"
#include "../model/item_return_policy_dto_list_envelope.h"
#include "../model/item_review_dto_envelope.h"
#include "../model/item_review_dto_list_envelope.h"
#include "../model/item_review_record_create_dto.h"
#include "../model/item_shipping_policy_dto_envelope.h"
#include "../model/item_shipping_policy_dto_list_envelope.h"
#include "../model/item_tag_dto_envelope.h"
#include "../model/item_tag_dto_list_envelope.h"
#include "../model/item_tax_policy_dto_envelope.h"
#include "../model/item_tax_policy_dto_list_envelope.h"
#include "../model/item_type_dto_envelope.h"
#include "../model/item_type_dto_list_envelope.h"
#include "../model/item_warranty_policy_dto_envelope.h"
#include "../model/item_warranty_policy_dto_list_envelope.h"
#include "../model/money_envelope.h"
#include "../model/pricing_rule_dto_envelope.h"
#include "../model/pricing_rule_dto_list_envelope.h"


// Count tags for a stock item
//
// Counts the number of tags associated with a specific stock item.
//
int32_envelope_t*
ItemsAPI_countStockItemTagsByItemId(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version);


// Count stock items by business
//
// Counts the number of stock items for a business, optionally filtered by tenant and OData query options.
//
int32_envelope_t*
ItemsAPI_countStockItemsByBusiness(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Create a new stock item
//
// Creates a new stock item for the specified tenant.
//
void
ItemsAPI_createStockItem(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, catalog_item_create_dto_t *catalog_item_create_dto);


// Delete a stock item
//
// Deletes a stock item for the specified tenant and item ID.
//
void
ItemsAPI_deleteStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *api_version, char *x_api_version);


// Get extended stock item by ID
//
// Retrieves extended information for a stock item by its unique identifier.
//
catalog_item_dto_envelope_t*
ItemsAPI_getExtendedStockItemById(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version);


// Get item primary image
//
// Retrieves the primary image for a specific catalog item.
//
empty_envelope_t*
ItemsAPI_getProductPrimaryImageAsync(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version);


// Get attachment by ID for a stock item
//
// Retrieves a specific attachment by ID for a stock item.
//
item_attachment_dto_envelope_t*
ItemsAPI_getStockItemAttachmentById(apiClient_t *apiClient, char *itemId, char *itemAttachmentId, char *api_version, char *x_api_version);


// Get attachments for a stock item
//
// Retrieves all attachments associated with a specific stock item.
//
item_attachment_dto_list_envelope_t*
ItemsAPI_getStockItemAttachmentsByItemId(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version);


// Get attribute option by ID for a stock item
//
// Retrieves a specific attribute option by ID for a stock item.
//
item_attribute_option_dto_envelope_t*
ItemsAPI_getStockItemAttributeOptionById(apiClient_t *apiClient, char *itemId, char *itemAttributeOptionId, char *api_version, char *x_api_version);


// Get attribute options for a stock item
//
// Retrieves all attribute options associated with a specific stock item.
//
item_attribute_option_dto_list_envelope_t*
ItemsAPI_getStockItemAttributeOptionsByItemId(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version);


// Get brand by ID for a stock item
//
// Retrieves a specific brand by ID for a stock item.
//
item_brand_dto_envelope_t*
ItemsAPI_getStockItemBrandById(apiClient_t *apiClient, char *itemId, char *itemBrandId, char *api_version, char *x_api_version);


// Get brands for a stock item
//
// Retrieves all brands associated with a specific stock item.
//
item_brand_dto_list_envelope_t*
ItemsAPI_getStockItemBrandsByItemId(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version);


// Get stock item by ID
//
// Retrieves a stock item by its unique identifier.
//
catalog_item_dto_envelope_t*
ItemsAPI_getStockItemById(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version);


// Get categories for a stock item
//
// Retrieves all categories associated with a specific stock item.
//
item_category_dto_list_envelope_t*
ItemsAPI_getStockItemCategoriesByItemId(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version);


// Get category by ID for a stock item
//
// Retrieves a specific category by ID for a stock item.
//
item_category_dto_envelope_t*
ItemsAPI_getStockItemCategoryById(apiClient_t *apiClient, char *itemId, char *itemCategoryId, char *api_version, char *x_api_version);


// Get Google categories for a stock item
//
// Retrieves all Google categories associated with a specific stock item.
//
item_google_category_dto_list_envelope_t*
ItemsAPI_getStockItemGoogleCategoriesByItemId(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version);


// Get Google category by ID for a stock item
//
// Retrieves a specific Google category by ID for a stock item.
//
item_google_category_dto_envelope_t*
ItemsAPI_getStockItemGoogleCategoryById(apiClient_t *apiClient, char *itemId, char *itemGoogleCategoryId, char *api_version, char *x_api_version);


// Get image by ID for a stock item
//
// Retrieves a specific image by ID for a stock item.
//
item_image_dto_envelope_t*
ItemsAPI_getStockItemImageById(apiClient_t *apiClient, char *itemId, char *itemImageId, char *api_version, char *x_api_version);


// Get images for a stock item
//
// Retrieves all images associated with a specific stock item.
//
item_image_dto_list_envelope_t*
ItemsAPI_getStockItemImagesByItemId(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version);


// Get price rule by ID for a stock item
//
// Retrieves a specific pricing rule by ID for a stock item.
//
pricing_rule_dto_envelope_t*
ItemsAPI_getStockItemPriceRuleById(apiClient_t *apiClient, char *itemId, char *itemPriceRuleId, char *api_version, char *x_api_version);


// Get price rules for a stock item
//
// Retrieves all pricing rules associated with a specific stock item.
//
pricing_rule_dto_list_envelope_t*
ItemsAPI_getStockItemPriceRulesByItemId(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version);


// Get question by ID for a stock item
//
// Retrieves a specific question by ID for a stock item.
//
item_question_dto_envelope_t*
ItemsAPI_getStockItemQuestionById(apiClient_t *apiClient, char *itemId, char *itemQuestionId, char *api_version, char *x_api_version);


// Get questions for a stock item
//
// Retrieves all questions associated with a specific stock item.
//
item_question_dto_list_envelope_t*
ItemsAPI_getStockItemQuestionsByItemId(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version);


// Get refund policies for a stock item
//
// Retrieves all refund policies associated with a specific stock item.
//
item_refund_policy_dto_list_envelope_t*
ItemsAPI_getStockItemRefundPoliciesByItemId(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version);


// Get refund policy by ID for a stock item
//
// Retrieves a specific refund policy by ID for a stock item.
//
item_refund_policy_dto_envelope_t*
ItemsAPI_getStockItemRefundPolicyById(apiClient_t *apiClient, char *itemId, char *itemRefundPolicyId, char *api_version, char *x_api_version);


// Get return policies for a stock item
//
// Retrieves all return policies associated with a specific stock item.
//
item_return_policy_dto_list_envelope_t*
ItemsAPI_getStockItemReturnPoliciesByItemId(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version);


// Get return policy by ID for a stock item
//
// Retrieves a specific return policy by ID for a stock item.
//
item_return_policy_dto_envelope_t*
ItemsAPI_getStockItemReturnPolicyById(apiClient_t *apiClient, char *itemId, char *itemReturnPolicyId, char *api_version, char *x_api_version);


// Get review by ID for a stock item
//
// Retrieves a specific review by ID for a stock item.
//
item_review_dto_envelope_t*
ItemsAPI_getStockItemReviewById(apiClient_t *apiClient, char *itemId, char *itemReviewId, char *api_version, char *x_api_version);


// Get reviews for a stock item
//
// Retrieves all reviews associated with a specific stock item.
//
item_review_dto_list_envelope_t*
ItemsAPI_getStockItemReviewsByItemId(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version);


// Get shipping policies for a stock item
//
// Retrieves all shipping policies associated with a specific stock item.
//
item_shipping_policy_dto_list_envelope_t*
ItemsAPI_getStockItemShippingPoliciesByItemId(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version);


// Get shipping policy by ID for a stock item
//
// Retrieves a specific shipping policy by ID for a stock item.
//
item_shipping_policy_dto_envelope_t*
ItemsAPI_getStockItemShippingPolicyById(apiClient_t *apiClient, char *itemId, char *itemShippingPolicyId, char *api_version, char *x_api_version);


// Get tag by ID for a stock item
//
// Retrieves a specific tag by ID for a stock item.
//
item_tag_dto_envelope_t*
ItemsAPI_getStockItemTagById(apiClient_t *apiClient, char *itemId, char *itemTagId, char *api_version, char *x_api_version);


// Get tags for a stock item
//
// Retrieves all tags associated with a specific stock item.
//
item_tag_dto_list_envelope_t*
ItemsAPI_getStockItemTagsByItemId(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version);


// Get tax policies for a stock item
//
// Retrieves all tax policies associated with a specific stock item.
//
item_tax_policy_dto_list_envelope_t*
ItemsAPI_getStockItemTaxPoliciesByItemId(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version);


// Get tax policy by ID for a stock item
//
// Retrieves a specific tax policy by ID for a stock item.
//
item_tax_policy_dto_envelope_t*
ItemsAPI_getStockItemTaxPolicyById(apiClient_t *apiClient, char *itemId, char *itemTaxPolicyId, char *api_version, char *x_api_version);


// Get type by ID for a stock item
//
// Retrieves a specific type by ID for a stock item.
//
item_type_dto_envelope_t*
ItemsAPI_getStockItemTypeById(apiClient_t *apiClient, char *itemId, char *itemTypeId, char *api_version, char *x_api_version);


// Get types for a stock item
//
// Retrieves all types associated with a specific stock item.
//
item_type_dto_list_envelope_t*
ItemsAPI_getStockItemTypesByItemId(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version);


// Get warranty policies for a stock item
//
// Retrieves all warranty policies associated with a specific stock item.
//
item_warranty_policy_dto_list_envelope_t*
ItemsAPI_getStockItemWarrantyPoliciesByItemId(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version);


// Get warranty policy by ID for a stock item
//
// Retrieves a specific warranty policy by ID for a stock item.
//
item_warranty_policy_dto_envelope_t*
ItemsAPI_getStockItemWarrantyPolicyById(apiClient_t *apiClient, char *itemId, char *itemWarrantyPolicyId, char *api_version, char *x_api_version);


// Get max price of stock items
//
// Retrieves the maximum price among all stock items, optionally filtered by tenant and OData query options.
//
money_envelope_t*
ItemsAPI_getStockItemsOdataMaxPrice(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get min price of stock items
//
// Retrieves the minimum price among all stock items, optionally filtered by tenant and OData query options.
//
money_envelope_t*
ItemsAPI_getStockItemsOdataMinPrice(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get all stock items
//
// Retrieves all stock items, optionally filtered by tenant and OData query options.
//
catalog_item_dto_list_envelope_t*
ItemsAPI_getStockItemsQuery(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Relate attachment to stock item
//
// Associates an attachment with a stock item.
//
item_attachment_dto_envelope_t*
ItemsAPI_relateAttachmentToStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemAttachmentId, char *api_version, char *x_api_version, item_attachment_create_dto_t *item_attachment_create_dto);


// Relate attribute option to stock item
//
// Associates an attribute option with a stock item.
//
item_attribute_option_dto_envelope_t*
ItemsAPI_relateAttributeOptionToStockItem(apiClient_t *apiClient, char *itemId, char *itemAttributeOptionId, char *api_version, char *x_api_version);


// Relate brand to stock item
//
// Associates a brand with a stock item.
//
item_brand_dto_envelope_t*
ItemsAPI_relateBrandToStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemBrandId, char *api_version, char *x_api_version);


// Relate category to stock item
//
// Associates a category with a stock item.
//
item_category_dto_envelope_t*
ItemsAPI_relateCategoryToStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemCategoryId, char *api_version, char *x_api_version);


// Relate Google category to stock item
//
// Associates a Google category with a stock item.
//
item_google_category_dto_envelope_t*
ItemsAPI_relateGoogleCategoryToStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemGoogleCategoryId, char *api_version, char *x_api_version);


// Relate image to stock item
//
// Associates an image with a stock item.
//
item_image_dto_envelope_t*
ItemsAPI_relateImageToStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemImageId, char *api_version, char *x_api_version);


// Relate price rule to stock item
//
// Associates a pricing rule with a stock item.
//
pricing_rule_dto_envelope_t*
ItemsAPI_relatePriceRuleToStockItem(apiClient_t *apiClient, char *itemId, char *itemPriceRuleId, char *api_version, char *x_api_version);


// Create question for stock item
//
// Creates a new question for a stock item.
//
item_question_dto_envelope_t*
ItemsAPI_relateQuestionToStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *api_version, char *x_api_version, item_question_record_create_dto_t *item_question_record_create_dto);


// Relate refund policy to stock item
//
// Associates a refund policy with a stock item.
//
item_refund_policy_dto_envelope_t*
ItemsAPI_relateRefundPolicyToStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemRefundPolicyId, char *api_version, char *x_api_version);


// Relate return policy to stock item
//
// Associates a return policy with a stock item.
//
item_return_policy_dto_envelope_t*
ItemsAPI_relateReturnPolicyToStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemReturnPolicyId, char *api_version, char *x_api_version);


// Create review for stock item
//
// Creates a new review for a stock item.
//
item_review_dto_envelope_t*
ItemsAPI_relateReviewToStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *api_version, char *x_api_version, item_review_record_create_dto_t *item_review_record_create_dto);


// Relate shipping policy to stock item
//
// Associates a shipping policy with a stock item.
//
item_shipping_policy_dto_envelope_t*
ItemsAPI_relateShippingPolicyToStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemShippingPolicyId, char *api_version, char *x_api_version);


// Relate tag to stock item
//
// Associates a tag with a stock item.
//
item_tag_dto_envelope_t*
ItemsAPI_relateTagToStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemTagId, char *api_version, char *x_api_version);


// Relate tax policy to stock item
//
// Associates a tax policy with a stock item.
//
item_tax_policy_dto_envelope_t*
ItemsAPI_relateTaxPolicyToStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemTaxPolicyId, char *api_version, char *x_api_version);


// Relate type to stock item
//
// Associates a type with a stock item.
//
item_type_dto_envelope_t*
ItemsAPI_relateTypeToStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemTypeId, char *api_version, char *x_api_version);


// Relate warranty policy to stock item
//
// Associates a warranty policy with a stock item.
//
item_warranty_policy_dto_envelope_t*
ItemsAPI_relateWarrantyPolicyToStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemWarrantyPolicyId, char *api_version, char *x_api_version);


// Remove attachment from stock item
//
// Removes an attachment from a stock item.
//
item_attachment_dto_envelope_t*
ItemsAPI_removeAttachmentFromStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemAttachmentId, char *api_version, char *x_api_version);


// Remove attribute option from stock item
//
// Removes an attribute option from a stock item.
//
item_attribute_option_dto_envelope_t*
ItemsAPI_removeAttributeOptionFromStockItem(apiClient_t *apiClient, char *itemId, char *itemAttributeOptionId, char *api_version, char *x_api_version);


// Remove brand from stock item
//
// Removes a brand association from a stock item.
//
item_brand_dto_envelope_t*
ItemsAPI_removeBrandFromStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemBrandId, char *api_version, char *x_api_version);


// Remove category from stock item
//
// Removes a category association from a stock item.
//
item_category_dto_envelope_t*
ItemsAPI_removeCategoryFromStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemCategoryId, char *api_version, char *x_api_version);


// Remove Google category from stock item
//
// Removes a Google category from a stock item.
//
item_google_category_dto_envelope_t*
ItemsAPI_removeGoogleCategoryFromStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemGoogleCategoryId, char *api_version, char *x_api_version);


// Remove image from stock item
//
// Removes an image association from a stock item.
//
item_image_dto_envelope_t*
ItemsAPI_removeImageFromStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemImageId, char *api_version, char *x_api_version);


// Remove price rule from stock item
//
// Removes a pricing rule from a stock item.
//
pricing_rule_dto_envelope_t*
ItemsAPI_removePriceRuleFromStockItem(apiClient_t *apiClient, char *itemId, char *itemPriceRuleId, char *api_version, char *x_api_version);


// Remove question from stock item
//
// Removes a question from a stock item.
//
item_question_dto_envelope_t*
ItemsAPI_removeQuestionFromStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemQuestionId, char *api_version, char *x_api_version);


// Remove refund policy from stock item
//
// Removes a refund policy from a stock item.
//
item_refund_policy_dto_envelope_t*
ItemsAPI_removeRefundPolicyFromStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemRefundPolicyId, char *api_version, char *x_api_version);


// Remove return policy from stock item
//
// Removes a return policy from a stock item.
//
item_return_policy_dto_envelope_t*
ItemsAPI_removeReturnPolicyFromStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemReturnPolicyId, char *api_version, char *x_api_version);


// Remove review from stock item
//
// Removes a review from a stock item.
//
item_review_dto_envelope_t*
ItemsAPI_removeReviewFromStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemReviewId, char *api_version, char *x_api_version);


// Remove shipping policy from stock item
//
// Removes a shipping policy from a stock item.
//
item_shipping_policy_dto_envelope_t*
ItemsAPI_removeShippingPolicyFromStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemShippingPolicyId, char *api_version, char *x_api_version);


// Remove tag from stock item
//
// Removes a tag association from a stock item.
//
item_tag_dto_envelope_t*
ItemsAPI_removeTagFromStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemTagId, char *api_version, char *x_api_version);


// Remove tax policy from stock item
//
// Removes a tax policy from a stock item.
//
item_tax_policy_dto_envelope_t*
ItemsAPI_removeTaxPolicyFromStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemTaxPolicyId, char *api_version, char *x_api_version);


// Remove type from stock item
//
// Removes a type association from a stock item.
//
item_type_dto_envelope_t*
ItemsAPI_removeTypeFromStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemTypeId, char *api_version, char *x_api_version);


// Remove warranty policy from stock item
//
// Removes a warranty policy from a stock item.
//
item_warranty_policy_dto_envelope_t*
ItemsAPI_removeWarrantyPolicyFromStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemWarrantyPolicyId, char *api_version, char *x_api_version);


// Update item primary image
//
// Updates the primary image for a specific catalog item.
//
empty_envelope_t*
ItemsAPI_updateProductPrimaryImageAsync(apiClient_t *apiClient, char *itemId, char *tenantId, char *api_version, char *x_api_version, binary_t* data);


// Update a stock item
//
// Updates an existing stock item for the specified tenant and item ID.
//
void
ItemsAPI_updateStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *api_version, char *x_api_version, catalog_item_update_dto_t *catalog_item_update_dto);


