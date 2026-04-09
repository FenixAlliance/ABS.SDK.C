#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/boolean_envelope.h"
#include "../model/cart_dto_envelope.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/extended_tenant_dto_envelope.h"
#include "../model/extended_tenant_enrollment_dto_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/notification_dto_list_envelope.h"
#include "../model/operation.h"
#include "../model/social_profile_dto_envelope.h"
#include "../model/string_list_envelope.h"
#include "../model/suite_license_assignment_dto_list_envelope.h"
#include "../model/suite_license_dto_list_envelope.h"
#include "../model/suite_license_feature_dto_list_envelope.h"
#include "../model/tenant_create_dto.h"
#include "../model/tenant_dto_envelope.h"
#include "../model/tenant_enrollment_dto_envelope.h"
#include "../model/tenant_enrollment_dto_list_envelope.h"
#include "../model/tenant_invitation_dto_list_envelope.h"
#include "../model/tenant_update_dto.h"
#include "../model/user_dto_list_envelope.h"
#include "../model/wallet_dto_envelope.h"
#include "../model/web_portal_dto_list_envelope.h"


// Assign a license to a specific enrollment
//
// Assign a license to a specific enrollment
//
suite_license_dto_list_envelope_t*
TenantsAPI_assignLicenseAsync(apiClient_t *apiClient, char *tenantId, char *enrollmentId, char *licenseId, char *api_version, char *x_api_version);


// Create a new business tenant
//
// Create a new business tenant
//
empty_envelope_t*
TenantsAPI_createTenantAsync(apiClient_t *apiClient, char *api_version, char *x_api_version, tenant_create_dto_t *tenant_create_dto);


// Deselect the user's default tenant
//
// Deselect the user's default tenant
//
empty_envelope_t*
TenantsAPI_deSelectTenantAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);


// Delete a tenant
//
// Delete a business tenant
//
empty_envelope_t*
TenantsAPI_deleteTenantAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get the list of features accessible to a specific enrollment
//
// Get the list of features accessible to a specific enrollment
//
suite_license_feature_dto_list_envelope_t*
TenantsAPI_getAccessibleFeaturesAsync(apiClient_t *apiClient, char *tenantId, char *enrollmentId, char *api_version, char *x_api_version);


// Get the user's current default tenant
//
// Get the user's current default tenant
//
tenant_dto_envelope_t*
TenantsAPI_getCurrentTenantAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get a specific license for an enrollment
//
// Get a specific license for an enrollment
//
suite_license_dto_list_envelope_t*
TenantsAPI_getEnrollmentLicenseByIdAsync(apiClient_t *apiClient, char *tenantId, char *enrollmentId, char *licenseId, char *api_version, char *x_api_version);


// Get the list of licenses available to a specific enrollment
//
// Get the list of licenses available to a specific enrollment
//
suite_license_assignment_dto_list_envelope_t*
TenantsAPI_getEnrollmentLicensesAsync(apiClient_t *apiClient, char *tenantId, char *enrollmentId, char *api_version, char *x_api_version);


// Get a specific tenant enrollment's permissions list
//
// Get a specific tenant enrollment's permissions list
//
string_list_envelope_t*
TenantsAPI_getEnrollmentPermissionsAsync(apiClient_t *apiClient, char *tenantId, char *enrollmentId, char *api_version, char *x_api_version);


// Get an extended tenant's business profile
//
// Get an extended tenant's business profile
//
extended_tenant_dto_envelope_t*
TenantsAPI_getExtendedTenantAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get a specific tenant enrollment
//
// Get a specific tenant enrollment
//
extended_tenant_enrollment_dto_envelope_t*
TenantsAPI_getExtendedTenantEnrollmentAsync(apiClient_t *apiClient, char *tenantId, char *enrollmentId, char *api_version, char *x_api_version);


// Get the root tenant of the platform
//
// Get the root tenant of the platform
//
tenant_dto_envelope_t*
TenantsAPI_getRootTenantAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);


// Get a specific tenant by ID
//
// Get a specific tenant by ID
//
tenant_dto_envelope_t*
TenantsAPI_getTenantAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get a tenant's avatar
//
// Get a tenant's avatar
//
empty_envelope_t*
TenantsAPI_getTenantAvatarAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get a tenant's default cart
//
// Get a tenant's default cart
//
cart_dto_envelope_t*
TenantsAPI_getTenantCartAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get a specific tenant enrollment
//
// Get a specific tenant enrollment
//
tenant_enrollment_dto_envelope_t*
TenantsAPI_getTenantEnrollmentAsync(apiClient_t *apiClient, char *tenantId, char *enrollmentId, char *api_version, char *x_api_version);


// Get the list of user enrollments for a tenant
//
// Get the list of user enrollments for a tenant
//
tenant_enrollment_dto_list_envelope_t*
TenantsAPI_getTenantEnrollmentsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get the list of invitations issued by a tenant
//
// Get the list of invitations issued by a tenant
//
tenant_invitation_dto_list_envelope_t*
TenantsAPI_getTenantInvitationsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get the list of licenses available to a tenant
//
// Get the list of licenses available to a tenant
//
suite_license_dto_list_envelope_t*
TenantsAPI_getTenantLicensesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get the list of notifications for a tenant
//
// Get the list of notifications for a tenant
//
notification_dto_list_envelope_t*
TenantsAPI_getTenantNotificationsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get the count of notifications for a tenant
//
// Get the count of notifications for a tenant
//
int32_envelope_t*
TenantsAPI_getTenantNotificationsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get the list of invitations issued by a tenant that are pending
//
// Get the list of invitations issued by a tenant that are pending
//
tenant_invitation_dto_list_envelope_t*
TenantsAPI_getTenantPendingInvitationsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get the list of invitations issued by a tenant that have been redeemed
//
// Get the list of invitations issued by a tenant that have been redeemed
//
tenant_invitation_dto_list_envelope_t*
TenantsAPI_getTenantRedeemedInvitationsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get the list of invitations issued by a tenant that have been revoked
//
// Get the list of invitations issued by a tenant that have been revoked
//
tenant_invitation_dto_list_envelope_t*
TenantsAPI_getTenantRevokedInvitationsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get a tenant's social profile
//
// Get a tenant's social profile
//
social_profile_dto_envelope_t*
TenantsAPI_getTenantSocialProfileAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get the list of users enrolled in a tenant
//
// Get the list of users enrolled in a tenant
//
user_dto_list_envelope_t*
TenantsAPI_getTenantUsersAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get a tenant's billing profile (A.K.A. Wallet Account)
//
// Get a tenant's billing profile (A.K.A. Wallet Account)
//
wallet_dto_envelope_t*
TenantsAPI_getTenantWalletAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get the list of web portals for a tenant
//
// Get the list of web portals for a tenant
//
web_portal_dto_list_envelope_t*
TenantsAPI_getTenantWebPortalsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Patch a tenant's profile
//
// Patch a tenant's profile
//
empty_envelope_t*
TenantsAPI_patchTenantAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, list_t *operation);


// Revoke a license from a specific enrollment
//
// Revoke a license from a specific enrollment
//
suite_license_dto_list_envelope_t*
TenantsAPI_revokeLicenseAsync(apiClient_t *apiClient, char *tenantId, char *enrollmentId, char *licenseId, char *api_version, char *x_api_version);


// Select a business tenant as the user's default tenant
//
// Select a business tenant as the user's default tenant
//
empty_envelope_t*
TenantsAPI_selectTenantAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update a tenant's avatar
//
// Update a tenant's avatar
//
empty_envelope_t*
TenantsAPI_updateAvatarAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, binary_t* avatar);


// Update a tenant's profile
//
// Update a tenant's profile
//
empty_envelope_t*
TenantsAPI_updateTenantAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, tenant_update_dto_t *tenant_update_dto);


// Validate the access to a specific feature for a specific enrollment
//
// Validate the access to a specific feature for a specific enrollment
//
boolean_envelope_t*
TenantsAPI_validateEnrollmentFeatureAccess(apiClient_t *apiClient, char *tenantId, char *enrollmentId, char *feature, char *api_version, char *x_api_version);


// Validate the existence of a list of roles and permissions for a specific enrollment
//
// Validate the existence of a list of roles and permissions for a specific enrollment
//
boolean_envelope_t*
TenantsAPI_validateEnrollmentPermissionsAsync(apiClient_t *apiClient, char *tenantId, char *enrollmentId, list_t *roles, list_t *permissions, char *api_version, char *x_api_version);


