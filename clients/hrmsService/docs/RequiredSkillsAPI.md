# RequiredSkillsAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**RequiredSkillsAPI_createRequiredSkillAsync**](RequiredSkillsAPI.md#RequiredSkillsAPI_createRequiredSkillAsync) | **POST** /api/v2/HrmsService/RequiredSkills | Create a required skill
[**RequiredSkillsAPI_deleteRequiredSkillAsync**](RequiredSkillsAPI.md#RequiredSkillsAPI_deleteRequiredSkillAsync) | **DELETE** /api/v2/HrmsService/RequiredSkills/{requiredSkillId} | Delete a required skill
[**RequiredSkillsAPI_getRequiredSkillByIdAsync**](RequiredSkillsAPI.md#RequiredSkillsAPI_getRequiredSkillByIdAsync) | **GET** /api/v2/HrmsService/RequiredSkills/{requiredSkillId} | Get required skill by ID
[**RequiredSkillsAPI_getRequiredSkillsAsync**](RequiredSkillsAPI.md#RequiredSkillsAPI_getRequiredSkillsAsync) | **GET** /api/v2/HrmsService/RequiredSkills | Get required skills
[**RequiredSkillsAPI_getRequiredSkillsCountAsync**](RequiredSkillsAPI.md#RequiredSkillsAPI_getRequiredSkillsCountAsync) | **GET** /api/v2/HrmsService/RequiredSkills/Count | Count required skills
[**RequiredSkillsAPI_patchRequiredSkillAsync**](RequiredSkillsAPI.md#RequiredSkillsAPI_patchRequiredSkillAsync) | **PATCH** /api/v2/HrmsService/RequiredSkills/{requiredSkillId} | Patch a required skill
[**RequiredSkillsAPI_updateRequiredSkillAsync**](RequiredSkillsAPI.md#RequiredSkillsAPI_updateRequiredSkillAsync) | **PUT** /api/v2/HrmsService/RequiredSkills/{requiredSkillId} | Update a required skill


# **RequiredSkillsAPI_createRequiredSkillAsync**
```c
// Create a required skill
//
// Creates a new required-skill record for the specified tenant.
//
empty_envelope_t* RequiredSkillsAPI_createRequiredSkillAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, required_skill_record_create_dto_t *required_skill_record_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**required_skill_record_create_dto** | **[required_skill_record_create_dto_t](required_skill_record_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **RequiredSkillsAPI_deleteRequiredSkillAsync**
```c
// Delete a required skill
//
// Deletes a required-skill record for the specified tenant.
//
empty_envelope_t* RequiredSkillsAPI_deleteRequiredSkillAsync(apiClient_t *apiClient, char *tenantId, char *requiredSkillId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**requiredSkillId** | **char \*** |  | 
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

# **RequiredSkillsAPI_getRequiredSkillByIdAsync**
```c
// Get required skill by ID
//
// Retrieves a specific required-skill record by its identifier.
//
required_skill_record_dto_envelope_t* RequiredSkillsAPI_getRequiredSkillByIdAsync(apiClient_t *apiClient, char *tenantId, char *requiredSkillId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**requiredSkillId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[required_skill_record_dto_envelope_t](required_skill_record_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **RequiredSkillsAPI_getRequiredSkillsAsync**
```c
// Get required skills
//
// Retrieves required-skill records for the specified tenant. Filter by `$filter=JobOfferId eq '...'` or `EmployerProfileId eq '...'`.
//
required_skill_record_dto_list_envelope_t* RequiredSkillsAPI_getRequiredSkillsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[required_skill_record_dto_list_envelope_t](required_skill_record_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **RequiredSkillsAPI_getRequiredSkillsCountAsync**
```c
// Count required skills
//
// Counts required-skill records for the specified tenant.
//
int32_envelope_t* RequiredSkillsAPI_getRequiredSkillsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **RequiredSkillsAPI_patchRequiredSkillAsync**
```c
// Patch a required skill
//
// Partially updates an existing required-skill record for the specified tenant.
//
empty_envelope_t* RequiredSkillsAPI_patchRequiredSkillAsync(apiClient_t *apiClient, char *tenantId, char *requiredSkillId, char *api_version, char *x_api_version, list_t *operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**requiredSkillId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**operation** | **[list_t](operation.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **RequiredSkillsAPI_updateRequiredSkillAsync**
```c
// Update a required skill
//
// Updates an existing required-skill record for the specified tenant.
//
empty_envelope_t* RequiredSkillsAPI_updateRequiredSkillAsync(apiClient_t *apiClient, char *tenantId, char *requiredSkillId, char *api_version, char *x_api_version, required_skill_record_update_dto_t *required_skill_record_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**requiredSkillId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**required_skill_record_update_dto** | **[required_skill_record_update_dto_t](required_skill_record_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

