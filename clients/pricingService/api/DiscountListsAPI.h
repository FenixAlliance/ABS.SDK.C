#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/discount_create_dto.h"
#include "../model/discount_dto_envelope.h"
#include "../model/discount_dto_list_envelope.h"
#include "../model/discount_list_create_dto.h"
#include "../model/discount_list_dto_envelope.h"
#include "../model/discount_list_dto_list_envelope.h"
#include "../model/discount_list_update_dto.h"
#include "../model/discount_update_dto.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"


// Creates a new discount list
//
// Creates a new discount list for the current tenant.
//
empty_envelope_t*
DiscountListsAPI_createDiscountList(apiClient_t *apiClient, char *tenantId, discount_list_create_dto_t *discount_list_create_dto);


// Creates a discount list entry
//
// Creates a new discount entry in the specified discount list.
//
empty_envelope_t*
DiscountListsAPI_createDiscountListEntry(apiClient_t *apiClient, char *tenantId, char *discountListId, discount_create_dto_t *discount_create_dto);


// Deletes a discount list
//
// Deletes the specified discount list.
//
empty_envelope_t*
DiscountListsAPI_deleteDiscountList(apiClient_t *apiClient, char *tenantId, char *discountListId);


// Deletes a discount list entry
//
// Deletes the specified discount entry from a discount list.
//
empty_envelope_t*
DiscountListsAPI_deleteDiscountListEntry(apiClient_t *apiClient, char *tenantId, char *discountListId, char *discountListEntryId);


// Gets a discount list by ID
//
// Retrieves the details of a discount list using its unique identifier.
//
discount_list_dto_envelope_t*
DiscountListsAPI_getDiscountList(apiClient_t *apiClient, char *tenantId, char *discountListId);


// Retrieves discounts in a discount list
//
// Gets all discount entries for a specific discount list with OData support.
//
discount_dto_list_envelope_t*
DiscountListsAPI_getDiscountListEntries(apiClient_t *apiClient, char *tenantId, char *discountListId);


// Counts discounts in a discount list
//
// Gets the count of discount entries for a specific discount list.
//
int32_envelope_t*
DiscountListsAPI_getDiscountListEntriesCount(apiClient_t *apiClient, char *tenantId, char *discountListId);


// Gets a discount list entry by ID
//
// Retrieves a specific discount entry from a discount list.
//
discount_dto_envelope_t*
DiscountListsAPI_getDiscountListEntry(apiClient_t *apiClient, char *tenantId, char *discountListId, char *discountListEntryId);


// Retrieves all discount lists
//
// Gets all discount lists for the current tenant with OData support.
//
discount_list_dto_list_envelope_t*
DiscountListsAPI_getDiscountLists(apiClient_t *apiClient, char *tenantId);


// Counts discount lists
//
// Gets the count of discount lists for the current tenant.
//
int32_envelope_t*
DiscountListsAPI_getDiscountListsCount(apiClient_t *apiClient, char *tenantId);


// Updates a discount list
//
// Updates the specified discount list.
//
empty_envelope_t*
DiscountListsAPI_updateDiscountList(apiClient_t *apiClient, char *tenantId, char *discountListId, discount_list_update_dto_t *discount_list_update_dto);


// Updates a discount list entry
//
// Updates the specified discount entry in a discount list.
//
empty_envelope_t*
DiscountListsAPI_updateDiscountListEntry(apiClient_t *apiClient, char *tenantId, char *discountListId, char *discountListEntryId, discount_update_dto_t *discount_update_dto);


