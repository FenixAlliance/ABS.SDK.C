# TrainingProgramEventsAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**TrainingProgramEventsAPI_createTrainingProgramEventAsync**](TrainingProgramEventsAPI.md#TrainingProgramEventsAPI_createTrainingProgramEventAsync) | **POST** /api/v2/HrmsService/TrainingProgramEvents | Create a training program event
[**TrainingProgramEventsAPI_deleteTrainingProgramEventAsync**](TrainingProgramEventsAPI.md#TrainingProgramEventsAPI_deleteTrainingProgramEventAsync) | **DELETE** /api/v2/HrmsService/TrainingProgramEvents/{eventId} | Delete a training program event
[**TrainingProgramEventsAPI_getTrainingProgramEventByIdAsync**](TrainingProgramEventsAPI.md#TrainingProgramEventsAPI_getTrainingProgramEventByIdAsync) | **GET** /api/v2/HrmsService/TrainingProgramEvents/{eventId} | Get training program event by ID
[**TrainingProgramEventsAPI_getTrainingProgramEventsAsync**](TrainingProgramEventsAPI.md#TrainingProgramEventsAPI_getTrainingProgramEventsAsync) | **GET** /api/v2/HrmsService/TrainingProgramEvents | Get training program events
[**TrainingProgramEventsAPI_getTrainingProgramEventsCountAsync**](TrainingProgramEventsAPI.md#TrainingProgramEventsAPI_getTrainingProgramEventsCountAsync) | **GET** /api/v2/HrmsService/TrainingProgramEvents/Count | Count training program events
[**TrainingProgramEventsAPI_updateTrainingProgramEventAsync**](TrainingProgramEventsAPI.md#TrainingProgramEventsAPI_updateTrainingProgramEventAsync) | **PUT** /api/v2/HrmsService/TrainingProgramEvents/{eventId} | Update a training program event


# **TrainingProgramEventsAPI_createTrainingProgramEventAsync**
```c
// Create a training program event
//
// Creates a new training program event for the specified tenant.
//
empty_envelope_t* TrainingProgramEventsAPI_createTrainingProgramEventAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, training_program_event_create_dto_t *training_program_event_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**training_program_event_create_dto** | **[training_program_event_create_dto_t](training_program_event_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TrainingProgramEventsAPI_deleteTrainingProgramEventAsync**
```c
// Delete a training program event
//
// Deletes a training program event for the specified tenant.
//
empty_envelope_t* TrainingProgramEventsAPI_deleteTrainingProgramEventAsync(apiClient_t *apiClient, char *tenantId, char *eventId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**eventId** | **char \*** |  | 
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

# **TrainingProgramEventsAPI_getTrainingProgramEventByIdAsync**
```c
// Get training program event by ID
//
// Retrieves a specific training program event by its identifier.
//
training_program_event_dto_envelope_t* TrainingProgramEventsAPI_getTrainingProgramEventByIdAsync(apiClient_t *apiClient, char *tenantId, char *eventId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**eventId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[training_program_event_dto_envelope_t](training_program_event_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TrainingProgramEventsAPI_getTrainingProgramEventsAsync**
```c
// Get training program events
//
// Retrieves training program events for the specified tenant.
//
training_program_event_dto_list_envelope_t* TrainingProgramEventsAPI_getTrainingProgramEventsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[training_program_event_dto_list_envelope_t](training_program_event_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TrainingProgramEventsAPI_getTrainingProgramEventsCountAsync**
```c
// Count training program events
//
// Counts training program events for the specified tenant.
//
int32_envelope_t* TrainingProgramEventsAPI_getTrainingProgramEventsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **TrainingProgramEventsAPI_updateTrainingProgramEventAsync**
```c
// Update a training program event
//
// Updates an existing training program event for the specified tenant.
//
empty_envelope_t* TrainingProgramEventsAPI_updateTrainingProgramEventAsync(apiClient_t *apiClient, char *tenantId, char *eventId, char *api_version, char *x_api_version, training_program_event_update_dto_t *training_program_event_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**eventId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**training_program_event_update_dto** | **[training_program_event_update_dto_t](training_program_event_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

