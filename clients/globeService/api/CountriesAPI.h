#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/city_dto_list_envelope.h"
#include "../model/country_calling_code_dto_list_envelope.h"
#include "../model/country_dto_envelope.h"
#include "../model/country_dto_list_envelope.h"
#include "../model/country_state_dto_envelope.h"
#include "../model/country_state_dto_list_envelope.h"
#include "../model/country_top_level_domain_dto_list_envelope.h"
#include "../model/currency_dto_list_envelope.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/timezone_dto_list_envelope.h"


// Count countries
//
// Returns the total number of countries, with optional OData filtering.
//
int32_envelope_t*
CountriesAPI_countCountries(apiClient_t *apiClient, char *api_version, char *x_api_version);


// Get all countries
//
// Retrieves a list of all countries with optional OData pagination and filtering.
//
country_dto_list_envelope_t*
CountriesAPI_getAllCountries(apiClient_t *apiClient, char *api_version, char *x_api_version);


// Get calling codes for a country
//
// Retrieves the list of international telephone calling codes associated with the specified country.
//
country_calling_code_dto_list_envelope_t*
CountriesAPI_getCallingCodesByCountryIdAsync(apiClient_t *apiClient, char *countryId, char *api_version, char *x_api_version);


// Get cities for a state
//
// Retrieves the list of cities belonging to the specified state or province.
//
city_dto_list_envelope_t*
CountriesAPI_getCitiesByCountryStateIdAsync(apiClient_t *apiClient, char *countryStateId, char *countryId, char *api_version, char *x_api_version);


// Get country by ID
//
// Retrieves a single country by its unique identifier.
//
country_dto_envelope_t*
CountriesAPI_getCountryById(apiClient_t *apiClient, char *countryId, char *api_version, char *x_api_version);


// Get state by ID
//
// Retrieves a single state or province by its unique identifier within a country.
//
country_state_dto_envelope_t*
CountriesAPI_getCountryStateByIdAsync(apiClient_t *apiClient, char *countryStateId, char *countryId, char *api_version, char *x_api_version);


// Get states for a country
//
// Retrieves the list of states or provinces belonging to the specified country.
//
country_state_dto_list_envelope_t*
CountriesAPI_getCountryStatesAsync(apiClient_t *apiClient, char *countryId, char *api_version, char *x_api_version);


// Get currencies for a country
//
// Retrieves the list of enabled currencies for the specified country.
//
currency_dto_list_envelope_t*
CountriesAPI_getEnabledCurrenciesByCountryIdAsync(apiClient_t *apiClient, char *countryId, char *api_version, char *x_api_version);


// Get timezones for a country
//
// Retrieves the list of timezones associated with the specified country.
//
timezone_dto_list_envelope_t*
CountriesAPI_getTimeZonesByCountryIdAsync(apiClient_t *apiClient, char *countryId, char *api_version, char *x_api_version);


// Get top-level domains for a country
//
// Retrieves the list of internet top-level domains (TLDs) associated with the specified country.
//
country_top_level_domain_dto_list_envelope_t*
CountriesAPI_getTopLevelDomainsByCountryIdAsync(apiClient_t *apiClient, char *countryId, char *api_version, char *x_api_version);


// Search countries by name
//
// Searches for countries whose name matches the specified search term.
//
country_dto_list_envelope_t*
CountriesAPI_searchCountriesByNameAsync(apiClient_t *apiClient, char *countryName, char *api_version, char *x_api_version);


