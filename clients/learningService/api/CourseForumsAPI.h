#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/course_forum_create_dto.h"
#include "../model/course_forum_dto.h"
#include "../model/course_forum_update_dto.h"
#include "../model/error_envelope.h"


// Create a course forum
//
// Creates a new course forum for the specified tenant.
//
course_forum_dto_t*
CourseForumsAPI_createCourseForumAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, course_forum_create_dto_t *course_forum_create_dto);


// Delete a course forum
//
// Deletes a course forum by its ID.
//
void
CourseForumsAPI_deleteCourseForumAsync(apiClient_t *apiClient, char *tenantId, char *forumId, char *api_version, char *x_api_version);


// Get course forum by ID
//
// Retrieves a specific course forum by its ID.
//
course_forum_dto_t*
CourseForumsAPI_getCourseForumByIdAsync(apiClient_t *apiClient, char *forumId, char *api_version, char *x_api_version);


// Get all course forums
//
// Retrieves all course forums for the specified tenant.
//
list_t*
CourseForumsAPI_getCourseForumsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get course forums count
//
// Returns the count of course forums for the specified tenant.
//
int*
CourseForumsAPI_getCourseForumsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update a course forum
//
// Updates an existing course forum.
//
course_forum_dto_t*
CourseForumsAPI_updateCourseForumAsync(apiClient_t *apiClient, char *tenantId, char *forumId, char *api_version, char *x_api_version, course_forum_update_dto_t *course_forum_update_dto);


