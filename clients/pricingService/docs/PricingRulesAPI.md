# PricingRulesAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**PricingRulesAPI_createPricingRule**](PricingRulesAPI.md#PricingRulesAPI_createPricingRule) | **POST** /api/v2/PricingService/PricingRules | Create a new pricing rule
[**PricingRulesAPI_deletePricingRule**](PricingRulesAPI.md#PricingRulesAPI_deletePricingRule) | **DELETE** /api/v2/PricingService/PricingRules/{pricingRuleId} | Delete a pricing rule
[**PricingRulesAPI_getPricingRuleById**](PricingRulesAPI.md#PricingRulesAPI_getPricingRuleById) | **GET** /api/v2/PricingService/PricingRules/{pricingRuleId} | Get pricing rule by ID
[**PricingRulesAPI_getPricingRules**](PricingRulesAPI.md#PricingRulesAPI_getPricingRules) | **GET** /api/v2/PricingService/PricingRules | Get all pricing rules
[**PricingRulesAPI_getPricingRulesCountAsync**](PricingRulesAPI.md#PricingRulesAPI_getPricingRulesCountAsync) | **GET** /api/v2/PricingService/PricingRules/Count | Counts pricing rules
[**PricingRulesAPI_patchPricingRule**](PricingRulesAPI.md#PricingRulesAPI_patchPricingRule) | **PATCH** /api/v2/PricingService/PricingRules/{pricingRuleId} | Patch a pricing rule
[**PricingRulesAPI_updatePricingRule**](PricingRulesAPI.md#PricingRulesAPI_updatePricingRule) | **PUT** /api/v2/PricingService/PricingRules/Update | Update a pricing rule


# **PricingRulesAPI_createPricingRule**
```c
// Create a new pricing rule
//
// Creates a new pricing rule for the specified tenant.
//
pricing_rule_dto_envelope_t* PricingRulesAPI_createPricingRule(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, pricing_rule_create_dto_t *pricing_rule_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**pricing_rule_create_dto** | **[pricing_rule_create_dto_t](pricing_rule_create_dto.md) \*** |  | [optional] 

### Return type

[pricing_rule_dto_envelope_t](pricing_rule_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PricingRulesAPI_deletePricingRule**
```c
// Delete a pricing rule
//
// Deletes a pricing rule for the specified tenant and rule ID.
//
void PricingRulesAPI_deletePricingRule(apiClient_t *apiClient, char *tenantId, char *pricingRuleId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**pricingRuleId** | **char \*** |  | 
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

# **PricingRulesAPI_getPricingRuleById**
```c
// Get pricing rule by ID
//
// Retrieves a pricing rule by its unique identifier.
//
pricing_rule_dto_envelope_t* PricingRulesAPI_getPricingRuleById(apiClient_t *apiClient, char *tenantId, char *pricingRuleId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**pricingRuleId** | **char \*** |  | 
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

# **PricingRulesAPI_getPricingRules**
```c
// Get all pricing rules
//
// Retrieves all pricing rules for the specified tenant, with optional OData query options.
//
pricing_rule_dto_list_envelope_t* PricingRulesAPI_getPricingRules(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, pricing_rule_dto_collection_query_parameters_t *pricing_rule_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**pricing_rule_dto_collection_query_parameters** | **[pricing_rule_dto_collection_query_parameters_t](pricing_rule_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[pricing_rule_dto_list_envelope_t](pricing_rule_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PricingRulesAPI_getPricingRulesCountAsync**
```c
// Counts pricing rules
//
// Gets the count of pricing rules for the current tenant.
//
int32_envelope_t* PricingRulesAPI_getPricingRulesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, pricing_rule_dto_collection_query_parameters_t *pricing_rule_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**pricing_rule_dto_collection_query_parameters** | **[pricing_rule_dto_collection_query_parameters_t](pricing_rule_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PricingRulesAPI_patchPricingRule**
```c
// Patch a pricing rule
//
// Partially updates a pricing rule using a JSON Patch document.
//
void PricingRulesAPI_patchPricingRule(apiClient_t *apiClient, char *tenantId, char *pricingRuleId, char *api_version, char *x_api_version, list_t *patch_operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**pricingRuleId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**patch_operation** | **[list_t](patch_operation.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PricingRulesAPI_updatePricingRule**
```c
// Update a pricing rule
//
// Updates an existing pricing rule for the specified tenant and rule ID.
//
void PricingRulesAPI_updatePricingRule(apiClient_t *apiClient, char *tenantId, char *pricingRuleId, char *api_version, char *x_api_version, pricing_rule_update_dto_t *pricing_rule_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**pricingRuleId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**pricing_rule_update_dto** | **[pricing_rule_update_dto_t](pricing_rule_update_dto.md) \*** |  | [optional] 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

