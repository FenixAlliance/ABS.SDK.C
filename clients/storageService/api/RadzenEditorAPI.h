#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"


// Upload an editor image to tenant storage.
//
void
RadzenEditorAPI_radzenUploadImage(apiClient_t *apiClient, char *tenantId, char *visibility, char *socialProfileId, char *purpose, char *api_version, char *x_api_version, binary_t* file);


// Upload an editor image scoped to a record.
//
void
RadzenEditorAPI_radzenUploadImageScoped(apiClient_t *apiClient, char *tenantId, char *recordType, char *recordId, char *visibility, char *socialProfileId, char *purpose, char *api_version, char *x_api_version, binary_t* file);


// Upload a single editor file to tenant storage.
//
void
RadzenEditorAPI_radzenUploadSingle(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, binary_t* file);


// Upload a single editor file scoped to a record.
//
void
RadzenEditorAPI_radzenUploadSingleScoped(apiClient_t *apiClient, char *tenantId, char *recordType, char *recordId, char *api_version, char *x_api_version, binary_t* file);


// Chunked editor upload (not implemented).
//
void
RadzenEditorAPI_radzenUploadStream(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Chunked editor upload scoped to a record (not implemented).
//
void
RadzenEditorAPI_radzenUploadStreamScoped(apiClient_t *apiClient, char *tenantId, char *recordType, char *recordId, char *api_version, char *x_api_version);


// Upload an editor image to user storage.
//
void
RadzenEditorAPI_radzenUploadUserImage(apiClient_t *apiClient, char *visibility, char *socialProfileId, char *purpose, char *api_version, char *x_api_version, binary_t* file);


// Upload a user editor image scoped to a record.
//
void
RadzenEditorAPI_radzenUploadUserImageScoped(apiClient_t *apiClient, char *recordType, char *recordId, char *visibility, char *socialProfileId, char *purpose, char *api_version, char *x_api_version, binary_t* file);


