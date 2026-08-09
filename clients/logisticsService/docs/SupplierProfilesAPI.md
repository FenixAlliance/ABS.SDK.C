# SupplierProfilesAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SupplierProfilesAPI_createSupplierProfileAsync**](SupplierProfilesAPI.md#SupplierProfilesAPI_createSupplierProfileAsync) | **POST** /api/v2/LogisticsService/SupplierProfiles | Create a supplier profile
[**SupplierProfilesAPI_deleteSupplierProfileAsync**](SupplierProfilesAPI.md#SupplierProfilesAPI_deleteSupplierProfileAsync) | **DELETE** /api/v2/LogisticsService/SupplierProfiles/{supplierProfileId} | Delete a supplier profile
[**SupplierProfilesAPI_getSupplierProfileByIdAsync**](SupplierProfilesAPI.md#SupplierProfilesAPI_getSupplierProfileByIdAsync) | **GET** /api/v2/LogisticsService/SupplierProfiles/{supplierProfileId} | Get supplier profile by ID
[**SupplierProfilesAPI_getSupplierProfilesAsync**](SupplierProfilesAPI.md#SupplierProfilesAPI_getSupplierProfilesAsync) | **GET** /api/v2/LogisticsService/SupplierProfiles | Get all supplier profiles
[**SupplierProfilesAPI_getSupplierProfilesCountAsync**](SupplierProfilesAPI.md#SupplierProfilesAPI_getSupplierProfilesCountAsync) | **GET** /api/v2/LogisticsService/SupplierProfiles/Count | Get supplier profiles count
[**SupplierProfilesAPI_patchSupplierProfileAsync**](SupplierProfilesAPI.md#SupplierProfilesAPI_patchSupplierProfileAsync) | **PATCH** /api/v2/LogisticsService/SupplierProfiles/{supplierProfileId} | Patch a supplier profile
[**SupplierProfilesAPI_updateSupplierProfileAsync**](SupplierProfilesAPI.md#SupplierProfilesAPI_updateSupplierProfileAsync) | **PUT** /api/v2/LogisticsService/SupplierProfiles/{supplierProfileId} | Update a supplier profile


# **SupplierProfilesAPI_createSupplierProfileAsync**
```c
// Create a supplier profile
//
// Creates a new supplier profile for the specified tenant.
//
empty_envelope_t* SupplierProfilesAPI_createSupplierProfileAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, supplier_profile_create_dto_t *supplier_profile_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**supplier_profile_create_dto** | **[supplier_profile_create_dto_t](supplier_profile_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SupplierProfilesAPI_deleteSupplierProfileAsync**
```c
// Delete a supplier profile
//
// Deletes a supplier profile.
//
empty_envelope_t* SupplierProfilesAPI_deleteSupplierProfileAsync(apiClient_t *apiClient, char *tenantId, char *supplierProfileId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**supplierProfileId** | **char \*** |  | 
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

# **SupplierProfilesAPI_getSupplierProfileByIdAsync**
```c
// Get supplier profile by ID
//
// Retrieves a specific supplier profile by its identifier.
//
supplier_profile_dto_envelope_t* SupplierProfilesAPI_getSupplierProfileByIdAsync(apiClient_t *apiClient, char *tenantId, char *supplierProfileId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**supplierProfileId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[supplier_profile_dto_envelope_t](supplier_profile_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SupplierProfilesAPI_getSupplierProfilesAsync**
```c
// Get all supplier profiles
//
// Retrieves all supplier profiles for the specified tenant.
//
supplier_profile_dto_list_envelope_t* SupplierProfilesAPI_getSupplierProfilesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, supplier_profile_dto_collection_query_parameters_t *supplier_profile_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**supplier_profile_dto_collection_query_parameters** | **[supplier_profile_dto_collection_query_parameters_t](supplier_profile_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[supplier_profile_dto_list_envelope_t](supplier_profile_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SupplierProfilesAPI_getSupplierProfilesCountAsync**
```c
// Get supplier profiles count
//
// Returns the count of supplier profiles for the specified tenant.
//
int32_envelope_t* SupplierProfilesAPI_getSupplierProfilesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, supplier_profile_dto_collection_query_parameters_t *supplier_profile_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**supplier_profile_dto_collection_query_parameters** | **[supplier_profile_dto_collection_query_parameters_t](supplier_profile_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SupplierProfilesAPI_patchSupplierProfileAsync**
```c
// Patch a supplier profile
//
// Applies a JSON Patch document to a supplier profile.
//
empty_envelope_t* SupplierProfilesAPI_patchSupplierProfileAsync(apiClient_t *apiClient, char *tenantId, char *supplierProfileId, char *api_version, char *x_api_version, list_t *patch_operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**supplierProfileId** | **char \*** |  | 
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

# **SupplierProfilesAPI_updateSupplierProfileAsync**
```c
// Update a supplier profile
//
// Updates an existing supplier profile.
//
empty_envelope_t* SupplierProfilesAPI_updateSupplierProfileAsync(apiClient_t *apiClient, char *tenantId, char *supplierProfileId, char *api_version, char *x_api_version, supplier_profile_update_dto_t *supplier_profile_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**supplierProfileId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**supplier_profile_update_dto** | **[supplier_profile_update_dto_t](supplier_profile_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

