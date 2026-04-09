#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/cart_dto_envelope.h"
#include "../model/contact_create_dto.h"
#include "../model/contact_dto.h"
#include "../model/contact_dto_envelope.h"
#include "../model/contact_dto_list_envelope.h"
#include "../model/contact_profile_dto_list_envelope.h"
#include "../model/contact_update_dto.h"
#include "../model/email_dispatch_request.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/extended_contact_dto_envelope.h"
#include "../model/extended_contact_dto_list_envelope.h"
#include "../model/operation.h"
#include "../model/social_profile_dto_envelope.h"
#include "../model/wallet_dto_envelope.h"


// Create a new contact
//
// Create a new contact
//
empty_envelope_t*
ContactsAPI_createContactAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, contact_create_dto_t *contact_create_dto);


// Delete a contact
//
// Delete a contact
//
empty_envelope_t*
ContactsAPI_deleteContactAsync(apiClient_t *apiClient, char *tenantId, char *contactId, char *api_version, char *x_api_version);


// Get a Contact of type Individual by ID
//
// Get a Contact of type Individual by ID
//
contact_dto_envelope_t*
ContactsAPI_getBusinessOwnedIndividualAsync(apiClient_t *apiClient, char *tenantId, char *contactId, char *api_version, char *x_api_version);


// Get all contacts of type individual
//
// Get all contacts of type individual
//
contact_dto_list_envelope_t*
ContactsAPI_getBusinessOwnedIndividualsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get all contacts of type individual count
//
// Get all contacts of type individual count
//
contact_dto_list_envelope_t*
ContactsAPI_getBusinessOwnedIndividualsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get a Contact of type Organization by ID
//
// Get a Contact of type Organization by ID
//
contact_dto_envelope_t*
ContactsAPI_getBusinessOwnedOrganizationAsync(apiClient_t *apiClient, char *tenantId, char *contactId, char *api_version, char *x_api_version);


// Get all contacts of type organization
//
// Get all contacts of type organization
//
list_t*
ContactsAPI_getBusinessOwnedOrganizationsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get all contacts of type organization count
//
// Get all contacts of type organization count
//
contact_dto_list_envelope_t*
ContactsAPI_getBusinessOwnedOrganizationsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get a contact by ID
//
// Get a contact by ID
//
contact_dto_envelope_t*
ContactsAPI_getContactAsync(apiClient_t *apiClient, char *tenantId, char *contactId, char *api_version, char *x_api_version);


// Get a contact's avatar
//
// Get a contact's avatar
//
empty_envelope_t*
ContactsAPI_getContactAvatarAsync(apiClient_t *apiClient, char *tenantId, char *contactId, char *api_version, char *x_api_version);


// Get a contact's cart
//
// Get a contact's cart
//
cart_dto_envelope_t*
ContactsAPI_getContactCartAsync(apiClient_t *apiClient, char *tenantId, char *contactId, char *api_version, char *x_api_version);


// Get a contact's social profiles
//
// Get a contact's social profiles
//
contact_profile_dto_list_envelope_t*
ContactsAPI_getContactProfilesAsync(apiClient_t *apiClient, char *tenantId, char *contactId, char *api_version, char *x_api_version);


// Get a contact's social profile
//
// Get a contact's social profile
//
social_profile_dto_envelope_t*
ContactsAPI_getContactSocialProfileAsync(apiClient_t *apiClient, char *tenantId, char *contactId, char *api_version, char *x_api_version);


// Get a contact's wallet
//
// Get a contact's wallet
//
wallet_dto_envelope_t*
ContactsAPI_getContactWalletAsync(apiClient_t *apiClient, char *tenantId, char *contactId, char *api_version, char *x_api_version);


// Get all business owned contacts
//
// Get all business owned contacts
//
contact_dto_list_envelope_t*
ContactsAPI_getContactsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get all business owned contacts count
//
// Get all business owned contacts count
//
contact_dto_list_envelope_t*
ContactsAPI_getContactsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get all contacts of type individual
//
// Get all contacts of type individual
//
extended_contact_dto_list_envelope_t*
ContactsAPI_getExtendedBusinessOwnedIndividualsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get all contacts of type organization
//
// Get all contacts of type organization
//
extended_contact_dto_list_envelope_t*
ContactsAPI_getExtendedBusinessOwnedOrganizationsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get a contact by ID
//
// Get a contact by ID
//
extended_contact_dto_envelope_t*
ContactsAPI_getExtendedContactAsync(apiClient_t *apiClient, char *tenantId, char *contactId, char *api_version, char *x_api_version);


// Get all business owned contacts
//
// Get all business owned contacts
//
extended_contact_dto_list_envelope_t*
ContactsAPI_getExtendedContactsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get individual related individuals
//
// Get individual related individuals
//
contact_dto_list_envelope_t*
ContactsAPI_getIndividualRelatedIndividualsAsync(apiClient_t *apiClient, char *tenantId, char *contactId, char *api_version, char *x_api_version);


// Get individual related organizations
//
// Get individual related organizations
//
contact_dto_list_envelope_t*
ContactsAPI_getIndividualRelatedOrganizationsAsync(apiClient_t *apiClient, char *tenantId, char *contactId, char *api_version, char *x_api_version);


// Get organization related individuals
//
// Get organization related individuals
//
contact_dto_list_envelope_t*
ContactsAPI_getOrganizationRelatedIndividualsAsync(apiClient_t *apiClient, char *tenantId, char *contactId, char *api_version, char *x_api_version);


// Get organization related organizations
//
// Get organization related organizations
//
contact_dto_list_envelope_t*
ContactsAPI_getOrganizationRelatedOrganizationsAsync(apiClient_t *apiClient, char *tenantId, char *contactId, char *api_version, char *x_api_version);


// Patch a contact
//
// Patch a contact
//
empty_envelope_t*
ContactsAPI_patchContactAsync(apiClient_t *apiClient, char *tenantId, char *contactId, char *api_version, char *x_api_version, list_t *operation);


// Preview the rendered email for a contact.
//
// This action is only available for global administrators (business_owner role).
//
void
ContactsAPI_previewContactEmailTemplate(apiClient_t *apiClient, char *contactId, char *api_version, char *x_api_version, email_dispatch_request_t *email_dispatch_request);


// Send an email to a contact.
//
// This action is only available for global administrators (business_owner role).
//
void
ContactsAPI_sendContactEmail(apiClient_t *apiClient, char *contactId, char *api_version, char *x_api_version, email_dispatch_request_t *email_dispatch_request);


// Update a contact
//
// Update a contact
//
empty_envelope_t*
ContactsAPI_updateContactAsync(apiClient_t *apiClient, char *tenantId, char *contactId, char *api_version, char *x_api_version, contact_update_dto_t *contact_update_dto);


// Update a contact's avatar
//
// Update a contact's avatar
//
empty_envelope_t*
ContactsAPI_updateContactAvatarAsync(apiClient_t *apiClient, char *contactId, char *tenantId, char *api_version, char *x_api_version, binary_t* avatar);


// Upsert a tenant onto another tenant's contact list
//
// Upsert a tenant onto another tenant's contact list
//
contact_dto_envelope_t*
ContactsAPI_upsertTenantOntoAnotherTenantContactListAsync(apiClient_t *apiClient, char *tenantId, char *relatedTenantId, char *api_version, char *x_api_version);


// Upsert a user onto a tenant's contact list
//
// Upsert a user onto a tenant's contact list
//
contact_dto_envelope_t*
ContactsAPI_upsertUserOntoAnotherTenantContactListAsync(apiClient_t *apiClient, char *tenantId, char *relatedUserId, char *api_version, char *x_api_version);


