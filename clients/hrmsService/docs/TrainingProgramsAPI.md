# TrainingProgramsAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**TrainingProgramsAPI_createTrainingProgramAsync**](TrainingProgramsAPI.md#TrainingProgramsAPI_createTrainingProgramAsync) | **POST** /api/v2/HrmsService/TrainingPrograms | Create a training program
[**TrainingProgramsAPI_deleteTrainingProgramAsync**](TrainingProgramsAPI.md#TrainingProgramsAPI_deleteTrainingProgramAsync) | **DELETE** /api/v2/HrmsService/TrainingPrograms/{programId} | Delete a training program
[**TrainingProgramsAPI_getTrainingProgramByIdAsync**](TrainingProgramsAPI.md#TrainingProgramsAPI_getTrainingProgramByIdAsync) | **GET** /api/v2/HrmsService/TrainingPrograms/{programId} | Get training program by ID
[**TrainingProgramsAPI_getTrainingProgramsAsync**](TrainingProgramsAPI.md#TrainingProgramsAPI_getTrainingProgramsAsync) | **GET** /api/v2/HrmsService/TrainingPrograms | Get training programs
[**TrainingProgramsAPI_getTrainingProgramsCountAsync**](TrainingProgramsAPI.md#TrainingProgramsAPI_getTrainingProgramsCountAsync) | **GET** /api/v2/HrmsService/TrainingPrograms/Count | Count training programs
[**TrainingProgramsAPI_updateTrainingProgramAsync**](TrainingProgramsAPI.md#TrainingProgramsAPI_updateTrainingProgramAsync) | **PUT** /api/v2/HrmsService/TrainingPrograms/{programId} | Update a training program


# **TrainingProgramsAPI_createTrainingProgramAsync**
```c
// Create a training program
//
// Creates a new training program for the specified tenant.
//
empty_envelope_t* TrainingProgramsAPI_createTrainingProgramAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, training_program_create_dto_t *training_program_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**training_program_create_dto** | **[training_program_create_dto_t](training_program_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TrainingProgramsAPI_deleteTrainingProgramAsync**
```c
// Delete a training program
//
// Deletes a training program for the specified tenant.
//
empty_envelope_t* TrainingProgramsAPI_deleteTrainingProgramAsync(apiClient_t *apiClient, char *tenantId, char *programId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**programId** | **char \*** |  | 
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

# **TrainingProgramsAPI_getTrainingProgramByIdAsync**
```c
// Get training program by ID
//
// Retrieves a specific training program by its identifier.
//
training_program_dto_envelope_t* TrainingProgramsAPI_getTrainingProgramByIdAsync(apiClient_t *apiClient, char *tenantId, char *programId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**programId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[training_program_dto_envelope_t](training_program_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TrainingProgramsAPI_getTrainingProgramsAsync**
```c
// Get training programs
//
// Retrieves training programs for the specified tenant.
//
training_program_dto_list_envelope_t* TrainingProgramsAPI_getTrainingProgramsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[training_program_dto_list_envelope_t](training_program_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TrainingProgramsAPI_getTrainingProgramsCountAsync**
```c
// Count training programs
//
// Counts training programs for the specified tenant.
//
int32_envelope_t* TrainingProgramsAPI_getTrainingProgramsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **TrainingProgramsAPI_updateTrainingProgramAsync**
```c
// Update a training program
//
// Updates an existing training program for the specified tenant.
//
empty_envelope_t* TrainingProgramsAPI_updateTrainingProgramAsync(apiClient_t *apiClient, char *tenantId, char *programId, char *api_version, char *x_api_version, training_program_update_dto_t *training_program_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**programId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**training_program_update_dto** | **[training_program_update_dto_t](training_program_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

