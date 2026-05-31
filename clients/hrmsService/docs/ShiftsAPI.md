# ShiftsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ShiftsAPI_createShiftAsync**](ShiftsAPI.md#ShiftsAPI_createShiftAsync) | **POST** /api/v2/HrmsService/Shifts | Create a shift
[**ShiftsAPI_deleteShiftAsync**](ShiftsAPI.md#ShiftsAPI_deleteShiftAsync) | **DELETE** /api/v2/HrmsService/Shifts/{shiftId} | Delete a shift
[**ShiftsAPI_getShiftByIdAsync**](ShiftsAPI.md#ShiftsAPI_getShiftByIdAsync) | **GET** /api/v2/HrmsService/Shifts/{shiftId} | Get shift by ID
[**ShiftsAPI_getShiftsAsync**](ShiftsAPI.md#ShiftsAPI_getShiftsAsync) | **GET** /api/v2/HrmsService/Shifts | Get shifts
[**ShiftsAPI_getShiftsCountAsync**](ShiftsAPI.md#ShiftsAPI_getShiftsCountAsync) | **GET** /api/v2/HrmsService/Shifts/Count | Count shifts
[**ShiftsAPI_updateShiftAsync**](ShiftsAPI.md#ShiftsAPI_updateShiftAsync) | **PUT** /api/v2/HrmsService/Shifts/{shiftId} | Update a shift


# **ShiftsAPI_createShiftAsync**
```c
// Create a shift
//
// Creates a new shift for the specified tenant.
//
empty_envelope_t* ShiftsAPI_createShiftAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, shift_create_dto_t *shift_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**shift_create_dto** | **[shift_create_dto_t](shift_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ShiftsAPI_deleteShiftAsync**
```c
// Delete a shift
//
// Deletes a shift for the specified tenant.
//
empty_envelope_t* ShiftsAPI_deleteShiftAsync(apiClient_t *apiClient, char *tenantId, char *shiftId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**shiftId** | **char \*** |  | 
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

# **ShiftsAPI_getShiftByIdAsync**
```c
// Get shift by ID
//
// Retrieves a specific shift by its identifier.
//
shift_dto_envelope_t* ShiftsAPI_getShiftByIdAsync(apiClient_t *apiClient, char *tenantId, char *shiftId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**shiftId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[shift_dto_envelope_t](shift_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ShiftsAPI_getShiftsAsync**
```c
// Get shifts
//
// Retrieves shifts for the specified tenant.
//
shift_dto_list_envelope_t* ShiftsAPI_getShiftsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[shift_dto_list_envelope_t](shift_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ShiftsAPI_getShiftsCountAsync**
```c
// Count shifts
//
// Counts shifts for the specified tenant.
//
int32_envelope_t* ShiftsAPI_getShiftsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **ShiftsAPI_updateShiftAsync**
```c
// Update a shift
//
// Updates an existing shift for the specified tenant.
//
empty_envelope_t* ShiftsAPI_updateShiftAsync(apiClient_t *apiClient, char *tenantId, char *shiftId, char *api_version, char *x_api_version, shift_update_dto_t *shift_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**shiftId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**shift_update_dto** | **[shift_update_dto_t](shift_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

