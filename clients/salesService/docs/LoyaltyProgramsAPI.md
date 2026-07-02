# LoyaltyProgramsAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**LoyaltyProgramsAPI_countLoyaltyProgramsAsync**](LoyaltyProgramsAPI.md#LoyaltyProgramsAPI_countLoyaltyProgramsAsync) | **GET** /api/v2/SalesService/LoyaltyPrograms/Count | Get loyalty programs count
[**LoyaltyProgramsAPI_createLoyaltyProgramAsync**](LoyaltyProgramsAPI.md#LoyaltyProgramsAPI_createLoyaltyProgramAsync) | **POST** /api/v2/SalesService/LoyaltyPrograms | Create a loyalty program
[**LoyaltyProgramsAPI_deleteLoyaltyProgramAsync**](LoyaltyProgramsAPI.md#LoyaltyProgramsAPI_deleteLoyaltyProgramAsync) | **DELETE** /api/v2/SalesService/LoyaltyPrograms/{loyaltyProgramId} | Delete a loyalty program
[**LoyaltyProgramsAPI_getLoyaltyProgramAsync**](LoyaltyProgramsAPI.md#LoyaltyProgramsAPI_getLoyaltyProgramAsync) | **GET** /api/v2/SalesService/LoyaltyPrograms/{loyaltyProgramId} | Get loyalty program by ID
[**LoyaltyProgramsAPI_getLoyaltyProgramsAsync**](LoyaltyProgramsAPI.md#LoyaltyProgramsAPI_getLoyaltyProgramsAsync) | **GET** /api/v2/SalesService/LoyaltyPrograms | Get loyalty programs
[**LoyaltyProgramsAPI_patchLoyaltyProgramAsync**](LoyaltyProgramsAPI.md#LoyaltyProgramsAPI_patchLoyaltyProgramAsync) | **PATCH** /api/v2/SalesService/LoyaltyPrograms/{loyaltyProgramId} | Patch a loyalty program
[**LoyaltyProgramsAPI_updateLoyaltyProgramAsync**](LoyaltyProgramsAPI.md#LoyaltyProgramsAPI_updateLoyaltyProgramAsync) | **PUT** /api/v2/SalesService/LoyaltyPrograms/{loyaltyProgramId} | Update a loyalty program


# **LoyaltyProgramsAPI_countLoyaltyProgramsAsync**
```c
// Get loyalty programs count
//
// Returns the total count of loyalty programs for the specified tenant with OData filter support.
//
int32_envelope_t* LoyaltyProgramsAPI_countLoyaltyProgramsAsync(apiClient_t *apiClient, char *tenantId);
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

# **LoyaltyProgramsAPI_createLoyaltyProgramAsync**
```c
// Create a loyalty program
//
// Creates a new loyalty program for the specified tenant.
//
empty_envelope_t* LoyaltyProgramsAPI_createLoyaltyProgramAsync(apiClient_t *apiClient, char *tenantId, loyalty_program_create_dto_t *loyalty_program_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**loyalty_program_create_dto** | **[loyalty_program_create_dto_t](loyalty_program_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **LoyaltyProgramsAPI_deleteLoyaltyProgramAsync**
```c
// Delete a loyalty program
//
// Deletes an existing loyalty program by its unique identifier.
//
empty_envelope_t* LoyaltyProgramsAPI_deleteLoyaltyProgramAsync(apiClient_t *apiClient, char *tenantId, char *loyaltyProgramId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**loyaltyProgramId** | **char \*** |  | 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **LoyaltyProgramsAPI_getLoyaltyProgramAsync**
```c
// Get loyalty program by ID
//
// Retrieves a single loyalty program by its unique identifier.
//
loyalty_program_dto_envelope_t* LoyaltyProgramsAPI_getLoyaltyProgramAsync(apiClient_t *apiClient, char *tenantId, char *loyaltyProgramId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**loyaltyProgramId** | **char \*** |  | 

### Return type

[loyalty_program_dto_envelope_t](loyalty_program_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **LoyaltyProgramsAPI_getLoyaltyProgramsAsync**
```c
// Get loyalty programs
//
// Retrieves a list of loyalty programs for the specified tenant with OData query support.
//
loyalty_program_dto_list_envelope_t* LoyaltyProgramsAPI_getLoyaltyProgramsAsync(apiClient_t *apiClient, char *tenantId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 

### Return type

[loyalty_program_dto_list_envelope_t](loyalty_program_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **LoyaltyProgramsAPI_patchLoyaltyProgramAsync**
```c
// Patch a loyalty program
//
// Partially updates an existing loyalty program using a JSON Patch document.
//
empty_envelope_t* LoyaltyProgramsAPI_patchLoyaltyProgramAsync(apiClient_t *apiClient, char *tenantId, char *loyaltyProgramId, list_t *operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**loyaltyProgramId** | **char \*** |  | 
**operation** | **[list_t](operation.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **LoyaltyProgramsAPI_updateLoyaltyProgramAsync**
```c
// Update a loyalty program
//
// Updates an existing loyalty program by its unique identifier.
//
empty_envelope_t* LoyaltyProgramsAPI_updateLoyaltyProgramAsync(apiClient_t *apiClient, char *tenantId, char *loyaltyProgramId, loyalty_program_update_dto_t *loyalty_program_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**loyaltyProgramId** | **char \*** |  | 
**loyalty_program_update_dto** | **[loyalty_program_update_dto_t](loyalty_program_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

