#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/tenant_invitation_create_dto.h"
#include "../model/tenant_invitation_dto_envelope.h"
#include "../model/tenant_invitation_dto_list_envelope.h"


// Accept an invitation to join a tenant
//
// Accept an invitation to join a tenant
//
empty_envelope_t*
InvitationsAPI_acceptTenantInvitation(apiClient_t *apiClient, char *invitationId, char *api_version, char *x_api_version);


// Decline an invitation to join a tenant
//
// Decline an invitation to join a tenant
//
empty_envelope_t*
InvitationsAPI_declineTenantInvitation(apiClient_t *apiClient, char *invitationId, char *api_version, char *x_api_version);


// Delete a tenant invitation
//
// Delete a tenant invitation
//
empty_envelope_t*
InvitationsAPI_deleteTenantInvitation(apiClient_t *apiClient, char *tenantId, char *invitationId, char *api_version, char *x_api_version);


// Get a tenant invitation by its ID
//
// Get a tenant invitation by its ID
//
tenant_invitation_dto_envelope_t*
InvitationsAPI_getTenantInvitationById(apiClient_t *apiClient, char *tenantId, char *invitationId, char *api_version, char *x_api_version);


// Retrieve a list of tenant invitations
//
// Retrieve a list of tenant invitations
//
tenant_invitation_dto_list_envelope_t*
InvitationsAPI_getTenantInvitations(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get the count of tenant invitations
//
// Get the count of tenant invitations
//
int32_envelope_t*
InvitationsAPI_getTenantInvitationsCount(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Send an invitation to a user to join a tenant
//
// Send an invitation to a user to join a tenant
//
empty_envelope_t*
InvitationsAPI_sendTenantInvitation(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, tenant_invitation_create_dto_t *tenant_invitation_create_dto);


