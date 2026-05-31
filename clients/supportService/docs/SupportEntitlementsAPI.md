# SupportEntitlementsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SupportEntitlementsAPI_createSupportEntitlementAsync**](SupportEntitlementsAPI.md#SupportEntitlementsAPI_createSupportEntitlementAsync) | **POST** /api/v2/SupportService/SupportEntitlements | Create a new support entitlement
[**SupportEntitlementsAPI_deleteSupportEntitlementAsync**](SupportEntitlementsAPI.md#SupportEntitlementsAPI_deleteSupportEntitlementAsync) | **DELETE** /api/v2/SupportService/SupportEntitlements/{supportEntitlementId} | Delete a support entitlement
[**SupportEntitlementsAPI_getSupportEntitlementAsync**](SupportEntitlementsAPI.md#SupportEntitlementsAPI_getSupportEntitlementAsync) | **GET** /api/v2/SupportService/SupportEntitlements/{supportEntitlementId} | Retrieve a support entitlement by ID
[**SupportEntitlementsAPI_getSupportEntitlementsAsync**](SupportEntitlementsAPI.md#SupportEntitlementsAPI_getSupportEntitlementsAsync) | **GET** /api/v2/SupportService/SupportEntitlements | Retrieve a list of support entitlements
[**SupportEntitlementsAPI_getSupportEntitlementsCountAsync**](SupportEntitlementsAPI.md#SupportEntitlementsAPI_getSupportEntitlementsCountAsync) | **GET** /api/v2/SupportService/SupportEntitlements/Count | Get the count of support entitlements
[**SupportEntitlementsAPI_updateSupportEntitlementAsync**](SupportEntitlementsAPI.md#SupportEntitlementsAPI_updateSupportEntitlementAsync) | **PUT** /api/v2/SupportService/SupportEntitlements/{supportEntitlementId} | Update a support entitlement


# **SupportEntitlementsAPI_createSupportEntitlementAsync**
```c
// Create a new support entitlement
//
// Creates a new support entitlement for the specified tenant.
//
empty_envelope_t* SupportEntitlementsAPI_createSupportEntitlementAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, support_entitlement_create_dto_t *support_entitlement_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**support_entitlement_create_dto** | **[support_entitlement_create_dto_t](support_entitlement_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SupportEntitlementsAPI_deleteSupportEntitlementAsync**
```c
// Delete a support entitlement
//
// Deletes a support entitlement by its unique identifier.
//
empty_envelope_t* SupportEntitlementsAPI_deleteSupportEntitlementAsync(apiClient_t *apiClient, char *tenantId, char *supportEntitlementId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**supportEntitlementId** | **char \*** |  | 
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

# **SupportEntitlementsAPI_getSupportEntitlementAsync**
```c
// Retrieve a support entitlement by ID
//
// Retrieves a single support entitlement by its unique identifier.
//
support_entitlement_dto_envelope_t* SupportEntitlementsAPI_getSupportEntitlementAsync(apiClient_t *apiClient, char *tenantId, char *supportEntitlementId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**supportEntitlementId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[support_entitlement_dto_envelope_t](support_entitlement_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SupportEntitlementsAPI_getSupportEntitlementsAsync**
```c
// Retrieve a list of support entitlements
//
// Retrieves a list of support entitlements for the specified tenant with OData query support.
//
support_entitlement_dto_list_envelope_t* SupportEntitlementsAPI_getSupportEntitlementsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[support_entitlement_dto_list_envelope_t](support_entitlement_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SupportEntitlementsAPI_getSupportEntitlementsCountAsync**
```c
// Get the count of support entitlements
//
// Returns the total count of support entitlements for the specified tenant with OData query support.
//
int32_envelope_t* SupportEntitlementsAPI_getSupportEntitlementsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
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

# **SupportEntitlementsAPI_updateSupportEntitlementAsync**
```c
// Update a support entitlement
//
// Updates an existing support entitlement by its unique identifier.
//
empty_envelope_t* SupportEntitlementsAPI_updateSupportEntitlementAsync(apiClient_t *apiClient, char *tenantId, char *supportEntitlementId, char *api_version, char *x_api_version, support_entitlement_update_dto_t *support_entitlement_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**supportEntitlementId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**support_entitlement_update_dto** | **[support_entitlement_update_dto_t](support_entitlement_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

