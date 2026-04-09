#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/course_file_create_dto.h"
#include "../model/course_file_dto.h"
#include "../model/course_file_update_dto.h"
#include "../model/error_envelope.h"


// Create a new course file
//
// Creates a new course file for the specified tenant.
//
void
CourseFilesAPI_createCourseFileAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, course_file_create_dto_t *course_file_create_dto);


// Delete a course file
//
// Deletes a course file for the specified tenant.
//
void
CourseFilesAPI_deleteCourseFileAsync(apiClient_t *apiClient, char *tenantId, char *fileId, char *api_version, char *x_api_version);


// Get course file by ID
//
// Retrieves a specific course file by its ID.
//
course_file_dto_t*
CourseFilesAPI_getCourseFileByIdAsync(apiClient_t *apiClient, char *fileId, char *api_version, char *x_api_version);


// Get all course files
//
// Retrieves all course files for the specified tenant.
//
list_t*
CourseFilesAPI_getCourseFilesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get course files count
//
// Returns the count of course files for the specified tenant.
//
int*
CourseFilesAPI_getCourseFilesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update a course file
//
// Updates an existing course file for the specified tenant.
//
void
CourseFilesAPI_updateCourseFileAsync(apiClient_t *apiClient, char *tenantId, char *fileId, char *api_version, char *x_api_version, course_file_update_dto_t *course_file_update_dto);


