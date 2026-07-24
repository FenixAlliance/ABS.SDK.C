#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/operation.h"
#include "../model/website_theme_create_dto.h"
#include "../model/website_theme_dto.h"
#include "../model/website_theme_dto_list_envelope.h"
#include "../model/website_theme_update_dto.h"


// Create a new website theme
//
// Creates a new website theme for the specified tenant.
//
void
WebsiteThemesAPI_createWebsiteThemeAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, website_theme_create_dto_t *website_theme_create_dto);


// Delete a website theme
//
// Deletes a website theme for the specified tenant.
//
void
WebsiteThemesAPI_deleteWebsiteThemeAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);


// Get website theme by ID
//
// Retrieves a specific website theme by its identifier.
//
website_theme_dto_t*
WebsiteThemesAPI_getWebsiteThemeByIdAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version);


// Get all website themes
//
// Retrieves all website themes for the specified tenant.
//
website_theme_dto_list_envelope_t*
WebsiteThemesAPI_getWebsiteThemesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get website themes count
//
// Returns the count of website themes for the specified tenant.
//
int32_envelope_t*
WebsiteThemesAPI_getWebsiteThemesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Patch a website theme
//
// Partially updates an existing website theme for the specified tenant.
//
void
WebsiteThemesAPI_patchWebsiteThemeAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, list_t *operation);


// Update a website theme
//
// Updates an existing website theme for the specified tenant.
//
void
WebsiteThemesAPI_updateWebsiteThemeAsync(apiClient_t *apiClient, char *tenantId, char *id, char *api_version, char *x_api_version, website_theme_update_dto_t *website_theme_update_dto);


