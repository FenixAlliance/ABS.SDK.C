#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"


// Get the avatar for a given social profile.
//
empty_envelope_t*
AvatarsAPI_getAvatar(apiClient_t *apiClient, char *socialProfileId, char *api_version, char *x_api_version);


// Get the avatar for a given contact.
//
empty_envelope_t*
AvatarsAPI_getContactAvatar(apiClient_t *apiClient, char *contactId, char *api_version, char *x_api_version);


// Get the avatar for the current user.
//
empty_envelope_t*
AvatarsAPI_getCurrentUserAvatar(apiClient_t *apiClient, char *api_version, char *x_api_version);


// Get the avatar for a given tenant.
//
empty_envelope_t*
AvatarsAPI_getTenantAvatar(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get the avatar for a given user.
//
empty_envelope_t*
AvatarsAPI_getUserAvatar(apiClient_t *apiClient, char *userId, char *api_version, char *x_api_version);


// Update the avatar for a given contact.
//
empty_envelope_t*
AvatarsAPI_updateContactAvatar(apiClient_t *apiClient, char *contactId, char *tenantId, char *api_version, char *x_api_version, binary_t* avatar);


// Update the avatar for a given tenant.
//
empty_envelope_t*
AvatarsAPI_updateTenantAvatar(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, binary_t* avatar);


// Update the avatar for the current user.
//
empty_envelope_t*
AvatarsAPI_updateUserAvatar(apiClient_t *apiClient, char *api_version, char *x_api_version, binary_t* avatar);


