# DeliveryNotesAPI

All URIs are relative to *https://absuite.net*

Method | HTTP request | Description
------------- | ------------- | -------------
[**DeliveryNotesAPI_createDeliveryNoteAsync**](DeliveryNotesAPI.md#DeliveryNotesAPI_createDeliveryNoteAsync) | **POST** /api/v2/LogisticsService/DeliveryNotes | Create a delivery note
[**DeliveryNotesAPI_deleteDeliveryNoteAsync**](DeliveryNotesAPI.md#DeliveryNotesAPI_deleteDeliveryNoteAsync) | **DELETE** /api/v2/LogisticsService/DeliveryNotes/{deliveryNoteId} | Delete a delivery note
[**DeliveryNotesAPI_getDeliveryNoteByIdAsync**](DeliveryNotesAPI.md#DeliveryNotesAPI_getDeliveryNoteByIdAsync) | **GET** /api/v2/LogisticsService/DeliveryNotes/{deliveryNoteId} | Get delivery note by ID
[**DeliveryNotesAPI_getDeliveryNotesAsync**](DeliveryNotesAPI.md#DeliveryNotesAPI_getDeliveryNotesAsync) | **GET** /api/v2/LogisticsService/DeliveryNotes | Get all delivery notes
[**DeliveryNotesAPI_getDeliveryNotesCountAsync**](DeliveryNotesAPI.md#DeliveryNotesAPI_getDeliveryNotesCountAsync) | **GET** /api/v2/LogisticsService/DeliveryNotes/Count | Get delivery notes count
[**DeliveryNotesAPI_updateDeliveryNoteAsync**](DeliveryNotesAPI.md#DeliveryNotesAPI_updateDeliveryNoteAsync) | **PUT** /api/v2/LogisticsService/DeliveryNotes/{deliveryNoteId} | Update a delivery note


# **DeliveryNotesAPI_createDeliveryNoteAsync**
```c
// Create a delivery note
//
// Creates a new delivery note.
//
empty_envelope_t* DeliveryNotesAPI_createDeliveryNoteAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, delivery_note_create_dto_t *delivery_note_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**delivery_note_create_dto** | **[delivery_note_create_dto_t](delivery_note_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DeliveryNotesAPI_deleteDeliveryNoteAsync**
```c
// Delete a delivery note
//
// Deletes a delivery note.
//
empty_envelope_t* DeliveryNotesAPI_deleteDeliveryNoteAsync(apiClient_t *apiClient, char *tenantId, char *deliveryNoteId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**deliveryNoteId** | **char \*** |  | 
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

# **DeliveryNotesAPI_getDeliveryNoteByIdAsync**
```c
// Get delivery note by ID
//
// Retrieves a specific delivery note.
//
delivery_note_dto_envelope_t* DeliveryNotesAPI_getDeliveryNoteByIdAsync(apiClient_t *apiClient, char *tenantId, char *deliveryNoteId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**deliveryNoteId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[delivery_note_dto_envelope_t](delivery_note_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DeliveryNotesAPI_getDeliveryNotesAsync**
```c
// Get all delivery notes
//
// Retrieves all delivery notes for the specified tenant.
//
delivery_note_dto_list_envelope_t* DeliveryNotesAPI_getDeliveryNotesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, delivery_note_dto_collection_query_parameters_t *delivery_note_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**delivery_note_dto_collection_query_parameters** | **[delivery_note_dto_collection_query_parameters_t](delivery_note_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[delivery_note_dto_list_envelope_t](delivery_note_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DeliveryNotesAPI_getDeliveryNotesCountAsync**
```c
// Get delivery notes count
//
// Returns the count of delivery notes.
//
int32_envelope_t* DeliveryNotesAPI_getDeliveryNotesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, delivery_note_dto_collection_query_parameters_t *delivery_note_dto_collection_query_parameters);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**delivery_note_dto_collection_query_parameters** | **[delivery_note_dto_collection_query_parameters_t](delivery_note_dto_collection_query_parameters.md) \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DeliveryNotesAPI_updateDeliveryNoteAsync**
```c
// Update a delivery note
//
// Updates an existing delivery note.
//
empty_envelope_t* DeliveryNotesAPI_updateDeliveryNoteAsync(apiClient_t *apiClient, char *tenantId, char *deliveryNoteId, char *api_version, char *x_api_version, delivery_note_update_dto_t *delivery_note_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**deliveryNoteId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**delivery_note_update_dto** | **[delivery_note_update_dto_t](delivery_note_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

