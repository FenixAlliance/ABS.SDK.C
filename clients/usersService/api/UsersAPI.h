#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/address_dto_list_envelope.h"
#include "../model/cart_dto_envelope.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/extended_tenant_dto_list_envelope.h"
#include "../model/extended_tenant_enrollment_dto_list_envelope.h"
#include "../model/extended_user_dto_envelope.h"
#include "../model/follow_record_dto_list_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/notification_dto_list_envelope.h"
#include "../model/operation.h"
#include "../model/social_profile_dto_envelope.h"
#include "../model/tenant_dto_list_envelope.h"
#include "../model/tenant_enrollment_dto_envelope.h"
#include "../model/tenant_enrollment_dto_list_envelope.h"
#include "../model/tenant_invitation_dto_list_envelope.h"
#include "../model/user_dto_envelope.h"
#include "../model/user_settings_dto_envelope.h"
#include "../model/user_settings_update_dto.h"
#include "../model/user_update_dto.h"
#include "../model/wallet_dto_envelope.h"


// Count the social profiles that follow the current user
//
// Count the social profiles that follow the current user
//
int32_envelope_t*
UsersAPI_countCurrentUserFollowersAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);


// Count the social profiles that the current user follows
//
// Count the social profiles that the current user follows
//
int32_envelope_t*
UsersAPI_countCurrentUserFollowsAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);


// Count the notifications for the current user
//
// Count the notifications for the current user
//
int32_envelope_t*
UsersAPI_countCurrentUserNotificationsAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);


// Count the tenants that the current user is enrolled in
//
// Count the tenants that the current user is enrolled in
//
int32_envelope_t*
UsersAPI_countCurrentUserTenantsAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);


// Get the list of addresses for the current user
//
// Get the list of addresses for the current user
//
address_dto_list_envelope_t*
UsersAPI_getCurrentUserAddressesAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);


// Gets the current user
//
// Get the currently acting user.
//
user_dto_envelope_t*
UsersAPI_getCurrentUserAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);


// Get the current user's avatar
//
// Get the current user's avatar
//
binary_t**
UsersAPI_getCurrentUserAvatarAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);


// Get the current user's cart
//
// Get the current user's cart
//
cart_dto_envelope_t*
UsersAPI_getCurrentUserCartAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);


// Get the list of enrollments for the current user
//
// Get the list of enrollments for the current user
//
tenant_enrollment_dto_list_envelope_t*
UsersAPI_getCurrentUserEnrollmentsAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);


// Get the list of enrollments for the current user
//
// Get the list of enrollments for the current user
//
extended_tenant_enrollment_dto_list_envelope_t*
UsersAPI_getCurrentUserEnrollmentsExtendedAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);


// Get the social profiles that follow the current user
//
// Get the social profiles that follow the current user
//
follow_record_dto_list_envelope_t*
UsersAPI_getCurrentUserFollowersAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);


// Get the social profiles that the current user follows
//
// Get the social profiles that the current user follows
//
follow_record_dto_list_envelope_t*
UsersAPI_getCurrentUserFollowsAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);


// Get the list of tenant enrollment invitations for the current user
//
// Get the list of tenant enrollment invitations for the current user
//
tenant_invitation_dto_list_envelope_t*
UsersAPI_getCurrentUserInvitationAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);


// Get the list of notifications for the current user
//
// Get the list of notifications for the current user
//
notification_dto_list_envelope_t*
UsersAPI_getCurrentUserNotificationsAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);


// Get the settings for the current user
//
// Get the settings for the current user
//
user_settings_dto_envelope_t*
UsersAPI_getCurrentUserSettingsAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);


// Get the current user's social profile
//
// Get the current user's social profile
//
social_profile_dto_envelope_t*
UsersAPI_getCurrentUserSocialProfileAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);


// Get the tenants that the current user is enrolled in
//
// Get the tenants that the current user is enrolled in
//
tenant_dto_list_envelope_t*
UsersAPI_getCurrentUserTenantsAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);


// Get the tenants that the current user is enrolled in
//
// Get the tenants that the current user is enrolled in
//
extended_tenant_dto_list_envelope_t*
UsersAPI_getCurrentUserTenantsExtendedAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);


// Get the current user's billing profile
//
// Get the current user's billing profile
//
wallet_dto_envelope_t*
UsersAPI_getCurrentUserWalletAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);


// Get a single TenantEnrollment by its ID
//
// Get a single TenantEnrollment by its ID
//
tenant_enrollment_dto_envelope_t*
UsersAPI_getEnrollmentAsync(apiClient_t *apiClient, char *enrollmentId, char *api_version, char *x_api_version);


// Get the current user's extended profile
//
// Get the current user's extended profile
//
extended_user_dto_envelope_t*
UsersAPI_getExtendedCurrentUserAsync(apiClient_t *apiClient, char *api_version, char *x_api_version);


// Partially update the current user's profile
//
// Partially update the current user's profile
//
empty_envelope_t*
UsersAPI_patchCurrentUserAsync(apiClient_t *apiClient, char *api_version, char *x_api_version, list_t *operation);


// Update the current user's avatar
//
// Update the current user's avatar
//
empty_envelope_t*
UsersAPI_updateAvatarAsync(apiClient_t *apiClient, char *api_version, char *x_api_version, binary_t* avatar);


// Update the current user's profile
//
// Update the current user's profile
//
empty_envelope_t*
UsersAPI_updateCurrentUserAsync(apiClient_t *apiClient, char *api_version, char *x_api_version, user_update_dto_t *user_update_dto);


// Update the settings for the current user
//
// Update the settings for the current user
//
user_settings_dto_envelope_t*
UsersAPI_updateCurrentUserSettingsAsync(apiClient_t *apiClient, char *api_version, char *x_api_version, user_settings_update_dto_t *user_settings_update_dto);


