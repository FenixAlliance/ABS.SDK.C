#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/activity_feed_dto_envelope.h"
#include "../model/activity_feed_dto_list_envelope.h"
#include "../model/activity_record_create_dto.h"
#include "../model/activity_record_dto_envelope.h"
#include "../model/activity_record_dto_list_envelope.h"
#include "../model/activity_record_update_dto.h"
#include "../model/activity_type_create_dto.h"
#include "../model/activity_type_dto_envelope.h"
#include "../model/activity_type_dto_list_envelope.h"
#include "../model/activity_type_update_dto.h"
#include "../model/empty_envelope.h"
#include "../model/envelope.h"
#include "../model/error_envelope.h"
#include "../model/int32_envelope.h"
#include "../model/operation.h"


// Count Activity Types
//
// Count activity types for the current tenant.
//
int32_envelope_t*
ActivityFeedsAPI_countActivityTypesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Create an activity
//
// Creates a new activity in a specific activity feed.
//
activity_record_dto_envelope_t*
ActivityFeedsAPI_createActivityAsync(apiClient_t *apiClient, char *tenantId, char *activityFeedId, char *api_version, char *x_api_version, activity_record_create_dto_t *activity_record_create_dto);


// Create Activity Type
//
// Create a new activity type.
//
envelope_t*
ActivityFeedsAPI_createActivityTypeAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, activity_type_create_dto_t *activity_type_create_dto);


// Delete an activity
//
// Deletes an activity from an activity feed.
//
empty_envelope_t*
ActivityFeedsAPI_deleteActivityAsync(apiClient_t *apiClient, char *tenantId, char *activityFeedId, char *activityId, char *api_version, char *x_api_version);


// Delete Activity Type
//
// Delete an activity type.
//
envelope_t*
ActivityFeedsAPI_deleteActivityTypeAsync(apiClient_t *apiClient, char *tenantId, char *activityTypeId, char *api_version, char *x_api_version);


// Get activities
//
// Retrieves activities for a specific activity feed.
//
activity_record_dto_list_envelope_t*
ActivityFeedsAPI_getActivitiesAsync(apiClient_t *apiClient, char *tenantId, char *activityFeedId, char *api_version, char *x_api_version);


// Count activities
//
// Returns the count of activities for a specific activity feed.
//
int32_envelope_t*
ActivityFeedsAPI_getActivitiesCountAsync(apiClient_t *apiClient, char *tenantId, char *activityFeedId, char *api_version, char *x_api_version);


// Get activity by ID
//
// Retrieves a specific activity by its ID.
//
activity_record_dto_envelope_t*
ActivityFeedsAPI_getActivityAsync(apiClient_t *apiClient, char *tenantId, char *activityFeedId, char *activityId, char *api_version, char *x_api_version);


// Get activity feed by ID
//
// Retrieves a specific activity feed by its ID.
//
activity_feed_dto_envelope_t*
ActivityFeedsAPI_getActivityFeedAsync(apiClient_t *apiClient, char *tenantId, char *activityFeedId, char *api_version, char *x_api_version);


// Get activity feeds
//
// Retrieves a list of activity feeds for the specified tenant.
//
activity_feed_dto_list_envelope_t*
ActivityFeedsAPI_getActivityFeedsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Count activity feeds
//
// Returns the count of activity feeds for the specified tenant.
//
int32_envelope_t*
ActivityFeedsAPI_getActivityFeedsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Count activity records
//
// Returns the tenant-wide count of activity records across all feeds owned by the tenant.
//
int32_envelope_t*
ActivityFeedsAPI_getActivityRecordsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get Activity Type
//
// Get an activity type by ID.
//
activity_type_dto_envelope_t*
ActivityFeedsAPI_getActivityTypeByIdAsync(apiClient_t *apiClient, char *tenantId, char *activityTypeId, char *api_version, char *x_api_version);


// Get Activity Types
//
// Get a list of activity types for the current tenant.
//
activity_type_dto_list_envelope_t*
ActivityFeedsAPI_getActivityTypesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Patch an activity
//
// Patch an activity
//
empty_envelope_t*
ActivityFeedsAPI_patchActivityAsync(apiClient_t *apiClient, char *tenantId, char *activityFeedId, char *activityId, char *api_version, char *x_api_version, list_t *operation);


// Patch Activity Type
//
// Patch an activity type
//
empty_envelope_t*
ActivityFeedsAPI_patchActivityTypeAsync(apiClient_t *apiClient, char *tenantId, char *activityTypeId, char *api_version, char *x_api_version, list_t *operation);


// Update an activity
//
// Updates an existing activity.
//
activity_record_dto_envelope_t*
ActivityFeedsAPI_updateActivityAsync(apiClient_t *apiClient, char *tenantId, char *activityFeedId, char *activityId, char *api_version, char *x_api_version, activity_record_update_dto_t *activity_record_update_dto);


// Update Activity Type
//
// Update an existing activity type.
//
envelope_t*
ActivityFeedsAPI_updateActivityTypeAsync(apiClient_t *apiClient, char *tenantId, char *activityTypeId, char *api_version, char *x_api_version, activity_type_update_dto_t *activity_type_update_dto);


