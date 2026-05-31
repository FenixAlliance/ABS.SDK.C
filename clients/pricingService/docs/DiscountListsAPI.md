# DiscountListsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**DiscountListsAPI_createDiscountList**](DiscountListsAPI.md#DiscountListsAPI_createDiscountList) | **POST** /api/v2/PricingService/DiscountLists | Creates a new discount list
[**DiscountListsAPI_createDiscountListEntry**](DiscountListsAPI.md#DiscountListsAPI_createDiscountListEntry) | **POST** /api/v2/PricingService/DiscountLists/{discountListId}/Discounts | Creates a discount list entry
[**DiscountListsAPI_deleteDiscountList**](DiscountListsAPI.md#DiscountListsAPI_deleteDiscountList) | **DELETE** /api/v2/PricingService/DiscountLists/{discountListId} | Deletes a discount list
[**DiscountListsAPI_deleteDiscountListEntry**](DiscountListsAPI.md#DiscountListsAPI_deleteDiscountListEntry) | **DELETE** /api/v2/PricingService/DiscountLists/{discountListId}/Discounts/{discountListEntryId} | Deletes a discount list entry
[**DiscountListsAPI_getDiscountList**](DiscountListsAPI.md#DiscountListsAPI_getDiscountList) | **GET** /api/v2/PricingService/DiscountLists/{discountListId} | Gets a discount list by ID
[**DiscountListsAPI_getDiscountListEntries**](DiscountListsAPI.md#DiscountListsAPI_getDiscountListEntries) | **GET** /api/v2/PricingService/DiscountLists/{discountListId}/Discounts | Retrieves discounts in a discount list
[**DiscountListsAPI_getDiscountListEntriesCount**](DiscountListsAPI.md#DiscountListsAPI_getDiscountListEntriesCount) | **GET** /api/v2/PricingService/DiscountLists/{discountListId}/Discounts/Count | Counts discounts in a discount list
[**DiscountListsAPI_getDiscountListEntry**](DiscountListsAPI.md#DiscountListsAPI_getDiscountListEntry) | **GET** /api/v2/PricingService/DiscountLists/{discountListId}/Discounts/{discountListEntryId} | Gets a discount list entry by ID
[**DiscountListsAPI_getDiscountLists**](DiscountListsAPI.md#DiscountListsAPI_getDiscountLists) | **GET** /api/v2/PricingService/DiscountLists | Retrieves all discount lists
[**DiscountListsAPI_getDiscountListsCount**](DiscountListsAPI.md#DiscountListsAPI_getDiscountListsCount) | **GET** /api/v2/PricingService/DiscountLists/Count | Counts discount lists
[**DiscountListsAPI_updateDiscountList**](DiscountListsAPI.md#DiscountListsAPI_updateDiscountList) | **PUT** /api/v2/PricingService/DiscountLists/{discountListId} | Updates a discount list
[**DiscountListsAPI_updateDiscountListEntry**](DiscountListsAPI.md#DiscountListsAPI_updateDiscountListEntry) | **PUT** /api/v2/PricingService/DiscountLists/{discountListId}/Discounts/{discountListEntryId} | Updates a discount list entry


# **DiscountListsAPI_createDiscountList**
```c
// Creates a new discount list
//
// Creates a new discount list for the current tenant.
//
empty_envelope_t* DiscountListsAPI_createDiscountList(apiClient_t *apiClient, char *tenantId, discount_list_create_dto_t *discount_list_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**discount_list_create_dto** | **[discount_list_create_dto_t](discount_list_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DiscountListsAPI_createDiscountListEntry**
```c
// Creates a discount list entry
//
// Creates a new discount entry in the specified discount list.
//
empty_envelope_t* DiscountListsAPI_createDiscountListEntry(apiClient_t *apiClient, char *tenantId, char *discountListId, discount_create_dto_t *discount_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**discountListId** | **char \*** |  | 
**discount_create_dto** | **[discount_create_dto_t](discount_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DiscountListsAPI_deleteDiscountList**
```c
// Deletes a discount list
//
// Deletes the specified discount list.
//
empty_envelope_t* DiscountListsAPI_deleteDiscountList(apiClient_t *apiClient, char *tenantId, char *discountListId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**discountListId** | **char \*** |  | 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DiscountListsAPI_deleteDiscountListEntry**
```c
// Deletes a discount list entry
//
// Deletes the specified discount entry from a discount list.
//
empty_envelope_t* DiscountListsAPI_deleteDiscountListEntry(apiClient_t *apiClient, char *tenantId, char *discountListId, char *discountListEntryId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**discountListId** | **char \*** |  | 
**discountListEntryId** | **char \*** |  | 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DiscountListsAPI_getDiscountList**
```c
// Gets a discount list by ID
//
// Retrieves the details of a discount list using its unique identifier.
//
discount_list_dto_envelope_t* DiscountListsAPI_getDiscountList(apiClient_t *apiClient, char *tenantId, char *discountListId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**discountListId** | **char \*** |  | 

### Return type

[discount_list_dto_envelope_t](discount_list_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DiscountListsAPI_getDiscountListEntries**
```c
// Retrieves discounts in a discount list
//
// Gets all discount entries for a specific discount list with OData support.
//
discount_dto_list_envelope_t* DiscountListsAPI_getDiscountListEntries(apiClient_t *apiClient, char *tenantId, char *discountListId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**discountListId** | **char \*** |  | 

### Return type

[discount_dto_list_envelope_t](discount_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DiscountListsAPI_getDiscountListEntriesCount**
```c
// Counts discounts in a discount list
//
// Gets the count of discount entries for a specific discount list.
//
int32_envelope_t* DiscountListsAPI_getDiscountListEntriesCount(apiClient_t *apiClient, char *tenantId, char *discountListId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**discountListId** | **char \*** |  | 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DiscountListsAPI_getDiscountListEntry**
```c
// Gets a discount list entry by ID
//
// Retrieves a specific discount entry from a discount list.
//
discount_dto_envelope_t* DiscountListsAPI_getDiscountListEntry(apiClient_t *apiClient, char *tenantId, char *discountListId, char *discountListEntryId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**discountListId** | **char \*** |  | 
**discountListEntryId** | **char \*** |  | 

### Return type

[discount_dto_envelope_t](discount_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DiscountListsAPI_getDiscountLists**
```c
// Retrieves all discount lists
//
// Gets all discount lists for the current tenant with OData support.
//
discount_list_dto_list_envelope_t* DiscountListsAPI_getDiscountLists(apiClient_t *apiClient, char *tenantId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 

### Return type

[discount_list_dto_list_envelope_t](discount_list_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DiscountListsAPI_getDiscountListsCount**
```c
// Counts discount lists
//
// Gets the count of discount lists for the current tenant.
//
int32_envelope_t* DiscountListsAPI_getDiscountListsCount(apiClient_t *apiClient, char *tenantId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DiscountListsAPI_updateDiscountList**
```c
// Updates a discount list
//
// Updates the specified discount list.
//
empty_envelope_t* DiscountListsAPI_updateDiscountList(apiClient_t *apiClient, char *tenantId, char *discountListId, discount_list_update_dto_t *discount_list_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**discountListId** | **char \*** |  | 
**discount_list_update_dto** | **[discount_list_update_dto_t](discount_list_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DiscountListsAPI_updateDiscountListEntry**
```c
// Updates a discount list entry
//
// Updates the specified discount entry in a discount list.
//
empty_envelope_t* DiscountListsAPI_updateDiscountListEntry(apiClient_t *apiClient, char *tenantId, char *discountListId, char *discountListEntryId, discount_update_dto_t *discount_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**discountListId** | **char \*** |  | 
**discountListEntryId** | **char \*** |  | 
**discount_update_dto** | **[discount_update_dto_t](discount_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

