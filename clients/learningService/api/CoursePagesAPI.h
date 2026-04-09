#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/course_page_create_dto.h"
#include "../model/course_page_dto.h"
#include "../model/course_page_update_dto.h"
#include "../model/error_envelope.h"


// Create a new course page
//
// Creates a new course page for the specified tenant.
//
void
CoursePagesAPI_createCoursePageAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, course_page_create_dto_t *course_page_create_dto);


// Delete a course page
//
// Deletes a course page for the specified tenant.
//
void
CoursePagesAPI_deleteCoursePageAsync(apiClient_t *apiClient, char *tenantId, char *pageId, char *api_version, char *x_api_version);


// Get course page by ID
//
// Retrieves a specific course page by its ID.
//
course_page_dto_t*
CoursePagesAPI_getCoursePageByIdAsync(apiClient_t *apiClient, char *pageId, char *api_version, char *x_api_version);


// Get all course pages
//
// Retrieves all course pages for the specified tenant.
//
list_t*
CoursePagesAPI_getCoursePagesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get course pages count
//
// Returns the count of course pages for the specified tenant.
//
int*
CoursePagesAPI_getCoursePagesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update a course page
//
// Updates an existing course page for the specified tenant.
//
void
CoursePagesAPI_updateCoursePageAsync(apiClient_t *apiClient, char *tenantId, char *pageId, char *api_version, char *x_api_version, course_page_update_dto_t *course_page_update_dto);


