#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/course_article_create_dto.h"
#include "../model/course_article_dto.h"
#include "../model/course_article_update_dto.h"
#include "../model/error_envelope.h"


// Create a new course article
//
// Creates a new course article for the specified tenant.
//
void
CourseArticlesAPI_createCourseArticleAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, course_article_create_dto_t *course_article_create_dto);


// Delete a course article
//
// Deletes a course article for the specified tenant.
//
void
CourseArticlesAPI_deleteCourseArticleAsync(apiClient_t *apiClient, char *tenantId, char *articleId, char *api_version, char *x_api_version);


// Get course article by ID
//
// Retrieves a specific course article by its ID.
//
course_article_dto_t*
CourseArticlesAPI_getCourseArticleByIdAsync(apiClient_t *apiClient, char *articleId, char *api_version, char *x_api_version);


// Get all course articles
//
// Retrieves all course articles for the specified tenant.
//
list_t*
CourseArticlesAPI_getCourseArticlesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get course articles count
//
// Returns the count of course articles for the specified tenant.
//
int*
CourseArticlesAPI_getCourseArticlesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update a course article
//
// Updates an existing course article for the specified tenant.
//
void
CourseArticlesAPI_updateCourseArticleAsync(apiClient_t *apiClient, char *tenantId, char *articleId, char *api_version, char *x_api_version, course_article_update_dto_t *course_article_update_dto);


