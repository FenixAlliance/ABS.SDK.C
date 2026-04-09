#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/course_library_create_dto.h"
#include "../model/course_library_dto.h"
#include "../model/course_library_update_dto.h"
#include "../model/error_envelope.h"


// Create a course library
//
// Creates a new course library for the specified tenant.
//
course_library_dto_t*
CourseLibrariesAPI_createCourseLibraryAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, course_library_create_dto_t *course_library_create_dto);


// Delete a course library
//
// Deletes a course library by its ID.
//
void
CourseLibrariesAPI_deleteCourseLibraryAsync(apiClient_t *apiClient, char *tenantId, char *libraryId, char *api_version, char *x_api_version);


// Get all course libraries
//
// Retrieves all course libraries for the specified tenant.
//
list_t*
CourseLibrariesAPI_getCourseLibrariesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get course libraries count
//
// Returns the count of course libraries for the specified tenant.
//
int*
CourseLibrariesAPI_getCourseLibrariesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get course library by ID
//
// Retrieves a specific course library by its ID.
//
course_library_dto_t*
CourseLibrariesAPI_getCourseLibraryByIdAsync(apiClient_t *apiClient, char *libraryId, char *api_version, char *x_api_version);


// Update a course library
//
// Updates an existing course library.
//
course_library_dto_t*
CourseLibrariesAPI_updateCourseLibraryAsync(apiClient_t *apiClient, char *tenantId, char *libraryId, char *api_version, char *x_api_version, course_library_update_dto_t *course_library_update_dto);


