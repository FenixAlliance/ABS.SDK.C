#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/course_section_create_dto.h"
#include "../model/course_section_dto.h"
#include "../model/course_section_update_dto.h"
#include "../model/error_envelope.h"


// Create a new course section
//
// Creates a new course section for the specified tenant.
//
void
CourseSectionsAPI_createCourseSectionAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, course_section_create_dto_t *course_section_create_dto);


// Delete a course section
//
// Deletes a course section for the specified tenant.
//
void
CourseSectionsAPI_deleteCourseSectionAsync(apiClient_t *apiClient, char *tenantId, char *sectionId, char *api_version, char *x_api_version);


// Get course section by ID
//
// Retrieves a specific course section by its ID.
//
course_section_dto_t*
CourseSectionsAPI_getCourseSectionByIdAsync(apiClient_t *apiClient, char *sectionId, char *api_version, char *x_api_version);


// Get all course sections
//
// Retrieves all course sections for the specified tenant.
//
list_t*
CourseSectionsAPI_getCourseSectionsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get course sections count
//
// Returns the count of course sections for the specified tenant.
//
int*
CourseSectionsAPI_getCourseSectionsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Update a course section
//
// Updates an existing course section for the specified tenant.
//
void
CourseSectionsAPI_updateCourseSectionAsync(apiClient_t *apiClient, char *tenantId, char *sectionId, char *api_version, char *x_api_version, course_section_update_dto_t *course_section_update_dto);


