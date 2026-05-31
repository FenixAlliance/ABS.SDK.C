#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/course_content_group_create_dto.h"
#include "../model/course_content_group_dto.h"
#include "../model/course_content_group_update_dto.h"
#include "../model/error_envelope.h"


// Create a new course content group
//
// Creates a new course content group for the specified tenant.
//
void
CourseContentGroupsAPI_createCourseContentGroupAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, course_content_group_create_dto_t *course_content_group_create_dto);


// Delete a course content group
//
// Deletes a course content group for the specified tenant.
//
void
CourseContentGroupsAPI_deleteCourseContentGroupAsync(apiClient_t *apiClient, char *tenantId, char *groupId, char *api_version, char *x_api_version);


// Get course content group by ID
//
// Retrieves a specific course content group by its ID.
//
course_content_group_dto_t*
CourseContentGroupsAPI_getCourseContentGroupByIdAsync(apiClient_t *apiClient, char *groupId, char *api_version, char *x_api_version);


// Get all course content groups
//
// Retrieves all course content groups for the specified tenant.
//
list_t*
CourseContentGroupsAPI_getCourseContentGroupsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get course content groups by course
//
// Retrieves all course content groups for a specific course.
//
list_t*
CourseContentGroupsAPI_getCourseContentGroupsByCourseAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version);


// Get course content groups count by course
//
// Returns the count of course content groups for a specific course.
//
int*
CourseContentGroupsAPI_getCourseContentGroupsByCourseCountAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version);


// Get course content groups count
//
// Returns the count of course content groups for the specified tenant.
//
int*
CourseContentGroupsAPI_getCourseContentGroupsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update a course content group
//
// Updates an existing course content group for the specified tenant.
//
void
CourseContentGroupsAPI_updateCourseContentGroupAsync(apiClient_t *apiClient, char *tenantId, char *groupId, char *api_version, char *x_api_version, course_content_group_update_dto_t *course_content_group_update_dto);


