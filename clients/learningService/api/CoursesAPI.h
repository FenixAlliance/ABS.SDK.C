#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/course_article_dto.h"
#include "../model/course_article_dto_collection_query_parameters.h"
#include "../model/course_assignment_dto.h"
#include "../model/course_assignment_dto_collection_query_parameters.h"
#include "../model/course_category_dto.h"
#include "../model/course_category_dto_collection_query_parameters.h"
#include "../model/course_cohort_dto.h"
#include "../model/course_cohort_dto_collection_query_parameters.h"
#include "../model/course_create_dto.h"
#include "../model/course_dto.h"
#include "../model/course_dto_collection_query_parameters.h"
#include "../model/course_enrollment_dto.h"
#include "../model/course_enrollment_dto_collection_query_parameters.h"
#include "../model/course_file_dto.h"
#include "../model/course_file_dto_collection_query_parameters.h"
#include "../model/course_forum_dto.h"
#include "../model/course_forum_dto_collection_query_parameters.h"
#include "../model/course_handout_dto.h"
#include "../model/course_handout_dto_collection_query_parameters.h"
#include "../model/course_library_dto.h"
#include "../model/course_library_dto_collection_query_parameters.h"
#include "../model/course_news_dto.h"
#include "../model/course_news_dto_collection_query_parameters.h"
#include "../model/course_page_dto.h"
#include "../model/course_page_dto_collection_query_parameters.h"
#include "../model/course_problem_set_dto.h"
#include "../model/course_problem_set_dto_collection_query_parameters.h"
#include "../model/course_section_dto.h"
#include "../model/course_section_dto_collection_query_parameters.h"
#include "../model/course_unit_component_dto.h"
#include "../model/course_unit_component_dto_collection_query_parameters.h"
#include "../model/course_unit_dto.h"
#include "../model/course_unit_dto_collection_query_parameters.h"
#include "../model/course_update_dto.h"
#include "../model/course_wiki_dto.h"
#include "../model/course_wiki_dto_collection_query_parameters.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/instructor_profile_dto.h"
#include "../model/patch_operation.h"
#include "../model/student_profile_dto.h"


// Create a new course
//
// Creates a new course for the specified tenant.
//
void
CoursesAPI_createCourseAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, course_create_dto_t *course_create_dto);


// Delete a course
//
// Deletes a course for the specified tenant.
//
void
CoursesAPI_deleteCourseAsync(apiClient_t *apiClient, char *tenantId, char *courseId, char *api_version, char *x_api_version);


// Get course articles by course wiki
//
// Retrieves all course articles for a specific course wiki.
//
list_t*
CoursesAPI_getCourseArticlesByCourseWikiAsync(apiClient_t *apiClient, char *courseId, char *wikiId, char *api_version, char *x_api_version, course_article_dto_collection_query_parameters_t *course_article_dto_collection_query_parameters);


// Get course articles by course wiki count
//
// Returns the count of course articles for a specific course wiki.
//
int*
CoursesAPI_getCourseArticlesByCourseWikiCountAsync(apiClient_t *apiClient, char *courseId, char *wikiId, char *api_version, char *x_api_version, course_article_dto_collection_query_parameters_t *course_article_dto_collection_query_parameters);


// Get course assignments by course
//
// Retrieves all course assignments for a specific course.
//
list_t*
CoursesAPI_getCourseAssignmentsByCourseAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version, course_assignment_dto_collection_query_parameters_t *course_assignment_dto_collection_query_parameters);


// Get course assignments by course count
//
// Returns the count of course assignments for a specific course.
//
int*
CoursesAPI_getCourseAssignmentsByCourseCountAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version, course_assignment_dto_collection_query_parameters_t *course_assignment_dto_collection_query_parameters);


// Get course by ID
//
// Retrieves a specific course by its ID.
//
course_dto_t*
CoursesAPI_getCourseByIdAsync(apiClient_t *apiClient, char *courseId, char *tenantId, char *api_version, char *x_api_version);


// Get course categories by course
//
// Retrieves all course categories for a specific course.
//
list_t*
CoursesAPI_getCourseCategoriesByCourseAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version, course_category_dto_collection_query_parameters_t *course_category_dto_collection_query_parameters);


// Get course categories by course count
//
// Returns the count of course categories for a specific course.
//
int*
CoursesAPI_getCourseCategoriesByCourseCountAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version, course_category_dto_collection_query_parameters_t *course_category_dto_collection_query_parameters);


// Get course cohorts by course
//
// Retrieves all course cohorts for a specific course.
//
list_t*
CoursesAPI_getCourseCohortsByCourseAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version, course_cohort_dto_collection_query_parameters_t *course_cohort_dto_collection_query_parameters);


// Get course cohorts by course count
//
// Returns the count of course cohorts for a specific course.
//
int*
CoursesAPI_getCourseCohortsByCourseCountAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version, course_cohort_dto_collection_query_parameters_t *course_cohort_dto_collection_query_parameters);


// Get enrollments by course
//
// Retrieves all enrollments for a specific course.
//
list_t*
CoursesAPI_getCourseEnrollmentsByCourseAsync(apiClient_t *apiClient, char *tenantId, char *courseId, char *api_version, char *x_api_version, course_enrollment_dto_collection_query_parameters_t *course_enrollment_dto_collection_query_parameters);


// Get course files by course
//
// Retrieves all course files for a specific course.
//
list_t*
CoursesAPI_getCourseFilesByCourseAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version, course_file_dto_collection_query_parameters_t *course_file_dto_collection_query_parameters);


// Get course files by course count
//
// Returns the count of course files for a specific course.
//
int*
CoursesAPI_getCourseFilesByCourseCountAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version, course_file_dto_collection_query_parameters_t *course_file_dto_collection_query_parameters);


// Get course forums by course
//
// Retrieves all course forums for a specific course.
//
list_t*
CoursesAPI_getCourseForumsByCourseAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version, course_forum_dto_collection_query_parameters_t *course_forum_dto_collection_query_parameters);


// Get course forums by course count
//
// Returns the count of course forums for a specific course.
//
int*
CoursesAPI_getCourseForumsByCourseCountAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version, course_forum_dto_collection_query_parameters_t *course_forum_dto_collection_query_parameters);


// Get course handouts by course
//
// Retrieves all course handouts for a specific course.
//
list_t*
CoursesAPI_getCourseHandoutsByCourseAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version, course_handout_dto_collection_query_parameters_t *course_handout_dto_collection_query_parameters);


// Get course handouts by course count
//
// Returns the count of course handouts for a specific course.
//
int*
CoursesAPI_getCourseHandoutsByCourseCountAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version, course_handout_dto_collection_query_parameters_t *course_handout_dto_collection_query_parameters);


// Get course libraries by course
//
// Retrieves all course libraries for a specific course.
//
list_t*
CoursesAPI_getCourseLibrariesByCourseAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version, course_library_dto_collection_query_parameters_t *course_library_dto_collection_query_parameters);


// Get course libraries by course count
//
// Returns the count of course libraries for a specific course.
//
int*
CoursesAPI_getCourseLibrariesByCourseCountAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version, course_library_dto_collection_query_parameters_t *course_library_dto_collection_query_parameters);


// Get course pages by course
//
// Retrieves all course pages for a specific course.
//
list_t*
CoursesAPI_getCoursePagesByCourseAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version, course_page_dto_collection_query_parameters_t *course_page_dto_collection_query_parameters);


// Get course pages by course count
//
// Returns the count of course pages for a specific course.
//
int*
CoursesAPI_getCoursePagesByCourseCountAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version, course_page_dto_collection_query_parameters_t *course_page_dto_collection_query_parameters);


// Get course problem sets by course
//
// Retrieves all course problem sets for a specific course.
//
list_t*
CoursesAPI_getCourseProblemSetsByCourseAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version, course_problem_set_dto_collection_query_parameters_t *course_problem_set_dto_collection_query_parameters);


// Get course problem sets by course count
//
// Returns the count of course problem sets for a specific course.
//
int*
CoursesAPI_getCourseProblemSetsByCourseCountAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version, course_problem_set_dto_collection_query_parameters_t *course_problem_set_dto_collection_query_parameters);


// Get course sections by course
//
// Retrieves all course sections for a specific course.
//
list_t*
CoursesAPI_getCourseSectionsByCourseAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version, course_section_dto_collection_query_parameters_t *course_section_dto_collection_query_parameters);


// Get course sections by course count
//
// Returns the count of course sections for a specific course.
//
int*
CoursesAPI_getCourseSectionsByCourseCountAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version, course_section_dto_collection_query_parameters_t *course_section_dto_collection_query_parameters);


// Get course unit components by course
//
// Retrieves all course unit components for a specific course.
//
list_t*
CoursesAPI_getCourseUnitComponentsByCourseAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version, course_unit_component_dto_collection_query_parameters_t *course_unit_component_dto_collection_query_parameters);


// Get course unit components by course count
//
// Returns the count of course unit components for a specific course.
//
int*
CoursesAPI_getCourseUnitComponentsByCourseCountAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version, course_unit_component_dto_collection_query_parameters_t *course_unit_component_dto_collection_query_parameters);


// Get course units by section
//
// Retrieves all course units for a specific course section.
//
list_t*
CoursesAPI_getCourseUnitsBySectionAsync(apiClient_t *apiClient, char *courseId, char *sectionId, char *api_version, char *x_api_version, course_unit_dto_collection_query_parameters_t *course_unit_dto_collection_query_parameters);


// Get course units by section count
//
// Returns the count of course units for a specific course section.
//
int*
CoursesAPI_getCourseUnitsBySectionCountAsync(apiClient_t *apiClient, char *courseId, char *sectionId, char *api_version, char *x_api_version, course_unit_dto_collection_query_parameters_t *course_unit_dto_collection_query_parameters);


// Get course updates by course
//
// Retrieves all course updates for a specific course.
//
list_t*
CoursesAPI_getCourseUpdatesByCourseAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version, course_news_dto_collection_query_parameters_t *course_news_dto_collection_query_parameters);


// Get course updates by course count
//
// Returns the count of course updates for a specific course.
//
int*
CoursesAPI_getCourseUpdatesByCourseCountAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version, course_news_dto_collection_query_parameters_t *course_news_dto_collection_query_parameters);


// Get course wikis by course
//
// Retrieves all course wikis for a specific course.
//
list_t*
CoursesAPI_getCourseWikisByCourseAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version, course_wiki_dto_collection_query_parameters_t *course_wiki_dto_collection_query_parameters);


// Get course wikis by course count
//
// Returns the count of course wikis for a specific course.
//
int*
CoursesAPI_getCourseWikisByCourseCountAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version, course_wiki_dto_collection_query_parameters_t *course_wiki_dto_collection_query_parameters);


// Get courses
//
// Retrieves courses. When tenantId is provided, returns tenant-scoped courses; otherwise returns all courses.
//
list_t*
CoursesAPI_getCoursesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, course_dto_collection_query_parameters_t *course_dto_collection_query_parameters);


// Get courses count
//
// Returns the count of courses. When tenantId is provided, returns tenant-scoped count; otherwise returns global count.
//
int*
CoursesAPI_getCoursesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, course_dto_collection_query_parameters_t *course_dto_collection_query_parameters);


// Get instructor profiles by course
//
// Retrieves all instructor profiles teaching a specific course.
//
list_t*
CoursesAPI_getInstructorProfilesByCourseAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version);


// Get instructor profiles by course count
//
// Returns the count of instructor profiles teaching a specific course.
//
int*
CoursesAPI_getInstructorProfilesByCourseCountAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version);


// Get student profiles by course
//
// Retrieves all student profiles enrolled in a specific course.
//
list_t*
CoursesAPI_getStudentProfilesByCourseAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version);


// Get student profiles by course count
//
// Returns the count of student profiles enrolled in a specific course.
//
int*
CoursesAPI_getStudentProfilesByCourseCountAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version);


// Patch a course
//
// Partially updates a course for the specified tenant.
//
empty_envelope_t*
CoursesAPI_patchCourseAsync(apiClient_t *apiClient, char *tenantId, char *courseId, char *api_version, char *x_api_version, list_t *patch_operation);


// Update a course
//
// Updates an existing course for the specified tenant.
//
void
CoursesAPI_updateCourseAsync(apiClient_t *apiClient, char *tenantId, char *courseId, char *api_version, char *x_api_version, course_update_dto_t *course_update_dto);


