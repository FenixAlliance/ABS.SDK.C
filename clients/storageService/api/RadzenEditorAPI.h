#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"


// Upload an image file
//
// Uploads an image file and returns its URL for editor embedding.
//
void
RadzenEditorAPI_image(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, binary_t* file);


// Upload multiple files
//
// Uploads multiple files to tenant or user storage.
//
void
RadzenEditorAPI_multiple(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, list_t *files);


// Upload files by ID
//
// Uploads files associated with a specific resource ID.
//
void
RadzenEditorAPI_post(apiClient_t *apiClient, int *id, char *tenantId, char *api_version, char *x_api_version, list_t *files);


// Upload a single file
//
// Uploads a single file to tenant or user storage.
//
void
RadzenEditorAPI_single(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, binary_t* file);


// Upload a specific file
//
// Uploads a specific file to tenant or user storage.
//
void
RadzenEditorAPI_specific(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, binary_t* file);


