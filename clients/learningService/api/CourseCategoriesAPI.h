#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/course_category_create_dto.h"
#include "../model/course_category_dto.h"
#include "../model/course_category_update_dto.h"
#include "../model/error_envelope.h"


// Create a new course category
//
// Creates a new course category for the specified tenant.
//
void
CourseCategoriesAPI_createCourseCategoryAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, course_category_create_dto_t *course_category_create_dto);


// Delete a course category
//
// Deletes a course category for the specified tenant.
//
void
CourseCategoriesAPI_deleteCourseCategoryAsync(apiClient_t *apiClient, char *tenantId, char *categoryId, char *api_version, char *x_api_version);


// Get all course categories
//
// Retrieves all course categories for the specified tenant.
//
list_t*
CourseCategoriesAPI_getCourseCategoriesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get course categories count
//
// Returns the count of course categories for the specified tenant.
//
int*
CourseCategoriesAPI_getCourseCategoriesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get course category by ID
//
// Retrieves a specific course category by its ID.
//
course_category_dto_t*
CourseCategoriesAPI_getCourseCategoryByIdAsync(apiClient_t *apiClient, char *categoryId, char *api_version, char *x_api_version);


// Update a course category
//
// Updates an existing course category for the specified tenant.
//
void
CourseCategoriesAPI_updateCourseCategoryAsync(apiClient_t *apiClient, char *tenantId, char *categoryId, char *api_version, char *x_api_version, course_category_update_dto_t *course_category_update_dto);


