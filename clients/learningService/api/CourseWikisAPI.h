#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/course_wiki_create_dto.h"
#include "../model/course_wiki_dto.h"
#include "../model/course_wiki_update_dto.h"
#include "../model/error_envelope.h"


// Create a new course wiki
//
// Creates a new course wiki for the specified tenant.
//
void
CourseWikisAPI_createCourseWikiAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, course_wiki_create_dto_t *course_wiki_create_dto);


// Delete a course wiki
//
// Deletes a course wiki for the specified tenant.
//
void
CourseWikisAPI_deleteCourseWikiAsync(apiClient_t *apiClient, char *tenantId, char *wikiId, char *api_version, char *x_api_version);


// Get course wiki by ID
//
// Retrieves a specific course wiki by its ID.
//
course_wiki_dto_t*
CourseWikisAPI_getCourseWikiByIdAsync(apiClient_t *apiClient, char *wikiId, char *api_version, char *x_api_version);


// Get all course wikis
//
// Retrieves all course wikis for the specified tenant.
//
list_t*
CourseWikisAPI_getCourseWikisAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get course wikis count
//
// Returns the count of course wikis for the specified tenant.
//
int*
CourseWikisAPI_getCourseWikisCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update a course wiki
//
// Updates an existing course wiki for the specified tenant.
//
void
CourseWikisAPI_updateCourseWikiAsync(apiClient_t *apiClient, char *tenantId, char *wikiId, char *api_version, char *x_api_version, course_wiki_update_dto_t *course_wiki_update_dto);


