# CountriesAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CountriesAPI_countCallingCodesByCountryAsync**](CountriesAPI.md#CountriesAPI_countCallingCodesByCountryAsync) | **GET** /api/v2/GlobeService/Countries/{countryId}/CallingCodes/Count | Count calling codes for a country
[**CountriesAPI_countCitiesByStateAsync**](CountriesAPI.md#CountriesAPI_countCitiesByStateAsync) | **GET** /api/v2/GlobeService/Countries/{countryId}/States/{countryStateId}/Cities/Count | Count cities for a state
[**CountriesAPI_countCountries**](CountriesAPI.md#CountriesAPI_countCountries) | **GET** /api/v2/GlobeService/Countries/Count | Count countries
[**CountriesAPI_countCountryStatesAsync**](CountriesAPI.md#CountriesAPI_countCountryStatesAsync) | **GET** /api/v2/GlobeService/Countries/{countryId}/States/Count | Count states for a country
[**CountriesAPI_countTimezonesByCountryAsync**](CountriesAPI.md#CountriesAPI_countTimezonesByCountryAsync) | **GET** /api/v2/GlobeService/Countries/{countryId}/Timezones/Count | Count timezones for a country
[**CountriesAPI_countTopLevelDomainsByCountryAsync**](CountriesAPI.md#CountriesAPI_countTopLevelDomainsByCountryAsync) | **GET** /api/v2/GlobeService/Countries/{countryId}/TopLevelDomains/Count | Count top-level domains for a country
[**CountriesAPI_getAllCountries**](CountriesAPI.md#CountriesAPI_getAllCountries) | **GET** /api/v2/GlobeService/Countries | Get all countries
[**CountriesAPI_getCallingCodesByCountryIdAsync**](CountriesAPI.md#CountriesAPI_getCallingCodesByCountryIdAsync) | **GET** /api/v2/GlobeService/Countries/{countryId}/CallingCodes | Get calling codes for a country
[**CountriesAPI_getCitiesByCountryStateIdAsync**](CountriesAPI.md#CountriesAPI_getCitiesByCountryStateIdAsync) | **GET** /api/v2/GlobeService/Countries/{countryId}/States/{countryStateId}/Cities | Get cities for a state
[**CountriesAPI_getCountryById**](CountriesAPI.md#CountriesAPI_getCountryById) | **GET** /api/v2/GlobeService/Countries/{countryId} | Get country by ID
[**CountriesAPI_getCountryStateByIdAsync**](CountriesAPI.md#CountriesAPI_getCountryStateByIdAsync) | **GET** /api/v2/GlobeService/Countries/{countryId}/States/{countryStateId} | Get state by ID
[**CountriesAPI_getCountryStatesAsync**](CountriesAPI.md#CountriesAPI_getCountryStatesAsync) | **GET** /api/v2/GlobeService/Countries/{countryId}/States | Get states for a country
[**CountriesAPI_getEnabledCurrenciesByCountryIdAsync**](CountriesAPI.md#CountriesAPI_getEnabledCurrenciesByCountryIdAsync) | **GET** /api/v2/GlobeService/Countries/{countryId}/Currencies | Get currencies for a country
[**CountriesAPI_getTimeZonesByCountryIdAsync**](CountriesAPI.md#CountriesAPI_getTimeZonesByCountryIdAsync) | **GET** /api/v2/GlobeService/Countries/{countryId}/Timezones | Get timezones for a country
[**CountriesAPI_getTopLevelDomainsByCountryIdAsync**](CountriesAPI.md#CountriesAPI_getTopLevelDomainsByCountryIdAsync) | **GET** /api/v2/GlobeService/Countries/{countryId}/TopLevelDomains | Get top-level domains for a country
[**CountriesAPI_searchCountriesByNameAsync**](CountriesAPI.md#CountriesAPI_searchCountriesByNameAsync) | **GET** /api/v2/GlobeService/Countries/Search | Search countries by name


# **CountriesAPI_countCallingCodesByCountryAsync**
```c
// Count calling codes for a country
//
// Returns the total number of calling codes for the specified country, with optional OData filtering.
//
int32_envelope_t* CountriesAPI_countCallingCodesByCountryAsync(apiClient_t *apiClient, char *countryId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**countryId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CountriesAPI_countCitiesByStateAsync**
```c
// Count cities for a state
//
// Returns the total number of cities for the specified state, with optional OData filtering.
//
int32_envelope_t* CountriesAPI_countCitiesByStateAsync(apiClient_t *apiClient, char *countryStateId, char *countryId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**countryStateId** | **char \*** |  | 
**countryId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CountriesAPI_countCountries**
```c
// Count countries
//
// Returns the total number of countries, with optional OData filtering.
//
int32_envelope_t* CountriesAPI_countCountries(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CountriesAPI_countCountryStatesAsync**
```c
// Count states for a country
//
// Returns the total number of states or provinces for the specified country, with optional OData filtering.
//
int32_envelope_t* CountriesAPI_countCountryStatesAsync(apiClient_t *apiClient, char *countryId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**countryId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CountriesAPI_countTimezonesByCountryAsync**
```c
// Count timezones for a country
//
// Returns the total number of timezones for the specified country, with optional OData filtering.
//
int32_envelope_t* CountriesAPI_countTimezonesByCountryAsync(apiClient_t *apiClient, char *countryId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**countryId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CountriesAPI_countTopLevelDomainsByCountryAsync**
```c
// Count top-level domains for a country
//
// Returns the total number of top-level domains for the specified country, with optional OData filtering.
//
int32_envelope_t* CountriesAPI_countTopLevelDomainsByCountryAsync(apiClient_t *apiClient, char *countryId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**countryId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[int32_envelope_t](int32_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CountriesAPI_getAllCountries**
```c
// Get all countries
//
// Retrieves a list of all countries with optional OData pagination and filtering.
//
country_dto_list_envelope_t* CountriesAPI_getAllCountries(apiClient_t *apiClient, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[country_dto_list_envelope_t](country_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CountriesAPI_getCallingCodesByCountryIdAsync**
```c
// Get calling codes for a country
//
// Retrieves the list of international telephone calling codes associated with the specified country.
//
country_calling_code_dto_list_envelope_t* CountriesAPI_getCallingCodesByCountryIdAsync(apiClient_t *apiClient, char *countryId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**countryId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[country_calling_code_dto_list_envelope_t](country_calling_code_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CountriesAPI_getCitiesByCountryStateIdAsync**
```c
// Get cities for a state
//
// Retrieves the list of cities belonging to the specified state or province.
//
city_dto_list_envelope_t* CountriesAPI_getCitiesByCountryStateIdAsync(apiClient_t *apiClient, char *countryStateId, char *countryId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**countryStateId** | **char \*** |  | 
**countryId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[city_dto_list_envelope_t](city_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CountriesAPI_getCountryById**
```c
// Get country by ID
//
// Retrieves a single country by its unique identifier.
//
country_dto_envelope_t* CountriesAPI_getCountryById(apiClient_t *apiClient, char *countryId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**countryId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[country_dto_envelope_t](country_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CountriesAPI_getCountryStateByIdAsync**
```c
// Get state by ID
//
// Retrieves a single state or province by its unique identifier within a country.
//
country_state_dto_envelope_t* CountriesAPI_getCountryStateByIdAsync(apiClient_t *apiClient, char *countryStateId, char *countryId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**countryStateId** | **char \*** |  | 
**countryId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[country_state_dto_envelope_t](country_state_dto_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CountriesAPI_getCountryStatesAsync**
```c
// Get states for a country
//
// Retrieves the list of states or provinces belonging to the specified country.
//
country_state_dto_list_envelope_t* CountriesAPI_getCountryStatesAsync(apiClient_t *apiClient, char *countryId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**countryId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[country_state_dto_list_envelope_t](country_state_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CountriesAPI_getEnabledCurrenciesByCountryIdAsync**
```c
// Get currencies for a country
//
// Retrieves the list of enabled currencies for the specified country.
//
currency_dto_list_envelope_t* CountriesAPI_getEnabledCurrenciesByCountryIdAsync(apiClient_t *apiClient, char *countryId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**countryId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[currency_dto_list_envelope_t](currency_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CountriesAPI_getTimeZonesByCountryIdAsync**
```c
// Get timezones for a country
//
// Retrieves the list of timezones associated with the specified country.
//
timezone_dto_list_envelope_t* CountriesAPI_getTimeZonesByCountryIdAsync(apiClient_t *apiClient, char *countryId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**countryId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[timezone_dto_list_envelope_t](timezone_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CountriesAPI_getTopLevelDomainsByCountryIdAsync**
```c
// Get top-level domains for a country
//
// Retrieves the list of internet top-level domains (TLDs) associated with the specified country.
//
country_top_level_domain_dto_list_envelope_t* CountriesAPI_getTopLevelDomainsByCountryIdAsync(apiClient_t *apiClient, char *countryId, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**countryId** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[country_top_level_domain_dto_list_envelope_t](country_top_level_domain_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CountriesAPI_searchCountriesByNameAsync**
```c
// Search countries by name
//
// Searches for countries whose name matches the specified search term.
//
country_dto_list_envelope_t* CountriesAPI_searchCountriesByNameAsync(apiClient_t *apiClient, char *countryName, char *api_version, char *x_api_version);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**countryName** | **char \*** |  | 
**api_version** | **char \*** |  | [optional] 
**x_api_version** | **char \*** |  | [optional] 

### Return type

[country_dto_list_envelope_t](country_dto_list_envelope.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

