# LeaveTypesAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**LeaveTypesAPI_createLeaveTypeAsync**](LeaveTypesAPI.md#LeaveTypesAPI_createLeaveTypeAsync) | **POST** /api/v2/HrmsService/LeaveTypes | Create a leave type
[**LeaveTypesAPI_deleteLeaveTypeAsync**](LeaveTypesAPI.md#LeaveTypesAPI_deleteLeaveTypeAsync) | **DELETE** /api/v2/HrmsService/LeaveTypes/{leaveTypeId} | Delete a leave type
[**LeaveTypesAPI_getLeaveTypeByIdAsync**](LeaveTypesAPI.md#LeaveTypesAPI_getLeaveTypeByIdAsync) | **GET** /api/v2/HrmsService/LeaveTypes/{leaveTypeId} | Get leave type by ID
[**LeaveTypesAPI_getLeaveTypesAsync**](LeaveTypesAPI.md#LeaveTypesAPI_getLeaveTypesAsync) | **GET** /api/v2/HrmsService/LeaveTypes | Get leave types
[**LeaveTypesAPI_getLeaveTypesCountAsync**](LeaveTypesAPI.md#LeaveTypesAPI_getLeaveTypesCountAsync) | **GET** /api/v2/HrmsService/LeaveTypes/Count | Count leave types
[**LeaveTypesAPI_updateLeaveTypeAsync**](LeaveTypesAPI.md#LeaveTypesAPI_updateLeaveTypeAsync) | **PUT** /api/v2/HrmsService/LeaveTypes/{leaveTypeId} | Update a leave type


# **LeaveTypesAPI_createLeaveTypeAsync**
```c
// Create a leave type
//
// Creates a new leave type for the specified tenant.
//
empty_envelope_t* LeaveTypesAPI_createLeaveTypeAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, leave_type_create_dto_t *leave_type_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**leave_type_create_dto** | **[leave_type_create_dto_t](leave_type_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **LeaveTypesAPI_deleteLeaveTypeAsync**
```c
// Delete a leave type
//
// Deletes a leave type for the specified tenant.
//
empty_envelope_t* LeaveTypesAPI_deleteLeaveTypeAsync(apiClient_t *apiClient, char *tenantId, char *leaveTypeId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**leaveTypeId** | **char \*** |  | 
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

# **LeaveTypesAPI_getLeaveTypeByIdAsync**
```c
// Get leave type by ID
//
// Retrieves a specific leave type by its identifier.
//
leave_type_dto_envelope_t* LeaveTypesAPI_getLeaveTypeByIdAsync(apiClient_t *apiClient, char *tenantId, char *leaveTypeId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**leaveTypeId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[leave_type_dto_envelope_t](leave_type_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **LeaveTypesAPI_getLeaveTypesAsync**
```c
// Get leave types
//
// Retrieves leave types for the specified tenant.
//
leave_type_dto_list_envelope_t* LeaveTypesAPI_getLeaveTypesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, leave_type_dto_collection_query_parameters_t *leave_type_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**leave_type_dto_collection_query_parameters** | **[leave_type_dto_collection_query_parameters_t](leave_type_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[leave_type_dto_list_envelope_t](leave_type_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **LeaveTypesAPI_getLeaveTypesCountAsync**
```c
// Count leave types
//
// Counts leave types for the specified tenant.
//
int32_envelope_t* LeaveTypesAPI_getLeaveTypesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, leave_type_dto_collection_query_parameters_t *leave_type_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**leave_type_dto_collection_query_parameters** | **[leave_type_dto_collection_query_parameters_t](leave_type_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **LeaveTypesAPI_updateLeaveTypeAsync**
```c
// Update a leave type
//
// Updates an existing leave type for the specified tenant.
//
empty_envelope_t* LeaveTypesAPI_updateLeaveTypeAsync(apiClient_t *apiClient, char *tenantId, char *leaveTypeId, char *api_version, char *x_api_version, leave_type_update_dto_t *leave_type_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**leaveTypeId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**leave_type_update_dto** | **[leave_type_update_dto_t](leave_type_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

