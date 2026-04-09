#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/course_news_create_dto.h"
#include "../model/course_news_dto.h"
#include "../model/course_news_update_dto.h"
#include "../model/error_envelope.h"


// Create a new course update
//
// Creates a new course update for the specified tenant.
//
void
CourseUpdatesAPI_createCourseUpdateAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, course_news_create_dto_t *course_news_create_dto);


// Delete a course update
//
// Deletes a course update for the specified tenant.
//
void
CourseUpdatesAPI_deleteCourseUpdateAsync(apiClient_t *apiClient, char *tenantId, char *updateId, char *api_version, char *x_api_version);


// Get course update by ID
//
// Retrieves a specific course update by its ID.
//
course_news_dto_t*
CourseUpdatesAPI_getCourseUpdateByIdAsync(apiClient_t *apiClient, char *updateId, char *api_version, char *x_api_version);


// Get all course updates
//
// Retrieves all course updates for the specified tenant.
//
list_t*
CourseUpdatesAPI_getCourseUpdatesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get course updates count
//
// Returns the count of course updates for the specified tenant.
//
int*
CourseUpdatesAPI_getCourseUpdatesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update a course update
//
// Updates an existing course update for the specified tenant.
//
void
CourseUpdatesAPI_updateCourseUpdateAsync(apiClient_t *apiClient, char *tenantId, char *updateId, char *api_version, char *x_api_version, course_news_update_dto_t *course_news_update_dto);


