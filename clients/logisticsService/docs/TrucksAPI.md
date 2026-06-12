# TrucksAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**TrucksAPI_arriveTripAsync**](TrucksAPI.md#TrucksAPI_arriveTripAsync) | **POST** /api/v2/LogisticsService/Trucks/{truckId}/Trips/{tripId}/Arrive | Arrive a trip
[**TrucksAPI_cancelTripAsync**](TrucksAPI.md#TrucksAPI_cancelTripAsync) | **POST** /api/v2/LogisticsService/Trucks/{truckId}/Trips/{tripId}/Cancel | Cancel a trip
[**TrucksAPI_createTruckAsync**](TrucksAPI.md#TrucksAPI_createTruckAsync) | **POST** /api/v2/LogisticsService/Trucks | Create a truck
[**TrucksAPI_createTruckTripAsync**](TrucksAPI.md#TrucksAPI_createTruckTripAsync) | **POST** /api/v2/LogisticsService/Trucks/{truckId}/Trips | Create a truck trip
[**TrucksAPI_deleteTruckAsync**](TrucksAPI.md#TrucksAPI_deleteTruckAsync) | **DELETE** /api/v2/LogisticsService/Trucks/{truckId} | Delete a truck
[**TrucksAPI_deleteTruckTripAsync**](TrucksAPI.md#TrucksAPI_deleteTruckTripAsync) | **DELETE** /api/v2/LogisticsService/Trucks/{truckId}/Trips/{tripId} | Delete a truck trip
[**TrucksAPI_deliverTripAsync**](TrucksAPI.md#TrucksAPI_deliverTripAsync) | **POST** /api/v2/LogisticsService/Trucks/{truckId}/Trips/{tripId}/Deliver | Deliver a trip
[**TrucksAPI_departTripAsync**](TrucksAPI.md#TrucksAPI_departTripAsync) | **POST** /api/v2/LogisticsService/Trucks/{truckId}/Trips/{tripId}/Depart | Depart a trip
[**TrucksAPI_dispatchTripAsync**](TrucksAPI.md#TrucksAPI_dispatchTripAsync) | **POST** /api/v2/LogisticsService/Trucks/{truckId}/Trips/{tripId}/Dispatch | Dispatch a trip
[**TrucksAPI_getTruckByIdAsync**](TrucksAPI.md#TrucksAPI_getTruckByIdAsync) | **GET** /api/v2/LogisticsService/Trucks/{truckId} | Get truck by ID
[**TrucksAPI_getTruckTripsAsync**](TrucksAPI.md#TrucksAPI_getTruckTripsAsync) | **GET** /api/v2/LogisticsService/Trucks/{truckId}/Trips | Get truck trips
[**TrucksAPI_getTruckTripsCountAsync**](TrucksAPI.md#TrucksAPI_getTruckTripsCountAsync) | **GET** /api/v2/LogisticsService/Trucks/{truckId}/Trips/Count | Get truck trips count
[**TrucksAPI_getTrucksAsync**](TrucksAPI.md#TrucksAPI_getTrucksAsync) | **GET** /api/v2/LogisticsService/Trucks | Get all trucks
[**TrucksAPI_getTrucksCountAsync**](TrucksAPI.md#TrucksAPI_getTrucksCountAsync) | **GET** /api/v2/LogisticsService/Trucks/Count | Get trucks count
[**TrucksAPI_patchTruckAsync**](TrucksAPI.md#TrucksAPI_patchTruckAsync) | **PATCH** /api/v2/LogisticsService/Trucks/{truckId} | Patch a truck
[**TrucksAPI_patchTruckTripAsync**](TrucksAPI.md#TrucksAPI_patchTruckTripAsync) | **PATCH** /api/v2/LogisticsService/Trucks/{truckId}/Trips/{tripId} | Patch a truck trip
[**TrucksAPI_updateTruckAsync**](TrucksAPI.md#TrucksAPI_updateTruckAsync) | **PUT** /api/v2/LogisticsService/Trucks/{truckId} | Update a truck
[**TrucksAPI_updateTruckTripAsync**](TrucksAPI.md#TrucksAPI_updateTruckTripAsync) | **PUT** /api/v2/LogisticsService/Trucks/{truckId}/Trips/{tripId} | Update a truck trip


# **TrucksAPI_arriveTripAsync**
```c
// Arrive a trip
//
// Marks a truck trip as arrived.
//
empty_envelope_t* TrucksAPI_arriveTripAsync(apiClient_t *apiClient, char *tenantId, char *truckId, char *tripId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**truckId** | **char \*** |  | 
**tripId** | **char \*** |  | 
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

# **TrucksAPI_cancelTripAsync**
```c
// Cancel a trip
//
// Cancels a truck trip.
//
empty_envelope_t* TrucksAPI_cancelTripAsync(apiClient_t *apiClient, char *tenantId, char *truckId, char *tripId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**truckId** | **char \*** |  | 
**tripId** | **char \*** |  | 
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

# **TrucksAPI_createTruckAsync**
```c
// Create a truck
//
// Creates a new truck for the specified tenant.
//
empty_envelope_t* TrucksAPI_createTruckAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, truck_create_dto_t *truck_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**truck_create_dto** | **[truck_create_dto_t](truck_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TrucksAPI_createTruckTripAsync**
```c
// Create a truck trip
//
// Creates a new trip for a truck.
//
empty_envelope_t* TrucksAPI_createTruckTripAsync(apiClient_t *apiClient, char *tenantId, char *truckId, char *api_version, char *x_api_version, truck_trip_create_dto_t *truck_trip_create_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**truckId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**truck_trip_create_dto** | **[truck_trip_create_dto_t](truck_trip_create_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TrucksAPI_deleteTruckAsync**
```c
// Delete a truck
//
// Deletes a truck.
//
empty_envelope_t* TrucksAPI_deleteTruckAsync(apiClient_t *apiClient, char *tenantId, char *truckId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**truckId** | **char \*** |  | 
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

# **TrucksAPI_deleteTruckTripAsync**
```c
// Delete a truck trip
//
// Deletes a truck trip.
//
empty_envelope_t* TrucksAPI_deleteTruckTripAsync(apiClient_t *apiClient, char *tenantId, char *truckId, char *tripId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**truckId** | **char \*** |  | 
**tripId** | **char \*** |  | 
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

# **TrucksAPI_deliverTripAsync**
```c
// Deliver a trip
//
// Marks a truck trip as delivered.
//
empty_envelope_t* TrucksAPI_deliverTripAsync(apiClient_t *apiClient, char *tenantId, char *truckId, char *tripId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**truckId** | **char \*** |  | 
**tripId** | **char \*** |  | 
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

# **TrucksAPI_departTripAsync**
```c
// Depart a trip
//
// Marks a truck trip as departed.
//
empty_envelope_t* TrucksAPI_departTripAsync(apiClient_t *apiClient, char *tenantId, char *truckId, char *tripId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**truckId** | **char \*** |  | 
**tripId** | **char \*** |  | 
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

# **TrucksAPI_dispatchTripAsync**
```c
// Dispatch a trip
//
// Dispatches a truck trip.
//
empty_envelope_t* TrucksAPI_dispatchTripAsync(apiClient_t *apiClient, char *tenantId, char *truckId, char *tripId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**truckId** | **char \*** |  | 
**tripId** | **char \*** |  | 
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

# **TrucksAPI_getTruckByIdAsync**
```c
// Get truck by ID
//
// Retrieves a specific truck by its identifier.
//
truck_dto_envelope_t* TrucksAPI_getTruckByIdAsync(apiClient_t *apiClient, char *tenantId, char *truckId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**truckId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[truck_dto_envelope_t](truck_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TrucksAPI_getTruckTripsAsync**
```c
// Get truck trips
//
// Retrieves all trips for a specific truck.
//
truck_trip_dto_list_envelope_t* TrucksAPI_getTruckTripsAsync(apiClient_t *apiClient, char *tenantId, char *truckId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**truckId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[truck_trip_dto_list_envelope_t](truck_trip_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TrucksAPI_getTruckTripsCountAsync**
```c
// Get truck trips count
//
// Returns the count of trips for a specific truck.
//
int32_envelope_t* TrucksAPI_getTruckTripsCountAsync(apiClient_t *apiClient, char *tenantId, char *truckId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**truckId** | **char \*** |  | 
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

# **TrucksAPI_getTrucksAsync**
```c
// Get all trucks
//
// Retrieves all trucks for the specified tenant.
//
truck_dto_list_envelope_t* TrucksAPI_getTrucksAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[truck_dto_list_envelope_t](truck_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TrucksAPI_getTrucksCountAsync**
```c
// Get trucks count
//
// Returns the count of trucks for the specified tenant.
//
int32_envelope_t* TrucksAPI_getTrucksCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);
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

# **TrucksAPI_patchTruckAsync**
```c
// Patch a truck
//
// Partially updates an existing truck using JSON Patch.
//
empty_envelope_t* TrucksAPI_patchTruckAsync(apiClient_t *apiClient, char *tenantId, char *truckId, char *api_version, char *x_api_version, list_t *operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**truckId** | **char \*** |  | 
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

# **TrucksAPI_patchTruckTripAsync**
```c
// Patch a truck trip
//
// Partially updates an existing truck trip using JSON Patch.
//
empty_envelope_t* TrucksAPI_patchTruckTripAsync(apiClient_t *apiClient, char *tenantId, char *truckId, char *tripId, char *api_version, char *x_api_version, list_t *operation);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**truckId** | **char \*** |  | 
**tripId** | **char \*** |  | 
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

# **TrucksAPI_updateTruckAsync**
```c
// Update a truck
//
// Updates an existing truck.
//
empty_envelope_t* TrucksAPI_updateTruckAsync(apiClient_t *apiClient, char *tenantId, char *truckId, char *api_version, char *x_api_version, truck_update_dto_t *truck_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**truckId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**truck_update_dto** | **[truck_update_dto_t](truck_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TrucksAPI_updateTruckTripAsync**
```c
// Update a truck trip
//
// Updates an existing truck trip.
//
empty_envelope_t* TrucksAPI_updateTruckTripAsync(apiClient_t *apiClient, char *tenantId, char *truckId, char *tripId, char *api_version, char *x_api_version, truck_trip_update_dto_t *truck_trip_update_dto);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**tenantId** | **char \*** |  | 
**truckId** | **char \*** |  | 
**tripId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 
**truck_trip_update_dto** | **[truck_trip_update_dto_t](truck_trip_update_dto.md) \*** |  | [optional] 

### Return type

[empty_envelope_t](empty_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json, application/xml
 - **Accept**: application/json, application/xml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

