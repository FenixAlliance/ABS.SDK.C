#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/course_team_membership_create_dto.h"
#include "../model/course_team_membership_dto.h"
#include "../model/course_team_membership_update_dto.h"
#include "../model/error_envelope.h"


// Create a course team membership
//
// Creates a new course team membership for the specified tenant.
//
void
CourseTeamMembershipsAPI_createCourseTeamMembershipAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, course_team_membership_create_dto_t *course_team_membership_create_dto);


// Delete a course team membership
//
// Deletes a course team membership by its ID.
//
void
CourseTeamMembershipsAPI_deleteCourseTeamMembershipAsync(apiClient_t *apiClient, char *tenantId, char *membershipId, char *api_version, char *x_api_version);


// Get course team membership by ID
//
// Retrieves a specific course team membership by its ID.
//
course_team_membership_dto_t*
CourseTeamMembershipsAPI_getCourseTeamMembershipByIdAsync(apiClient_t *apiClient, char *membershipId, char *api_version, char *x_api_version);


// Get all course team memberships
//
// Retrieves all course team memberships for the specified tenant.
//
list_t*
CourseTeamMembershipsAPI_getCourseTeamMembershipsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get course team memberships count
//
// Returns the count of course team memberships for the specified tenant.
//
int*
CourseTeamMembershipsAPI_getCourseTeamMembershipsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update a course team membership
//
// Updates an existing course team membership.
//
void
CourseTeamMembershipsAPI_updateCourseTeamMembershipAsync(apiClient_t *apiClient, char *tenantId, char *membershipId, char *api_version, char *x_api_version, course_team_membership_update_dto_t *course_team_membership_update_dto);


