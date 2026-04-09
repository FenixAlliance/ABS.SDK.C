#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/course_article_dto.h"
#include "../model/course_assignment_dto.h"
#include "../model/course_category_dto.h"
#include "../model/course_cohort_dto.h"
#include "../model/course_create_dto.h"
#include "../model/course_dto.h"
#include "../model/course_enrollment_dto.h"
#include "../model/course_file_dto.h"
#include "../model/course_forum_dto.h"
#include "../model/course_handout_dto.h"
#include "../model/course_library_dto.h"
#include "../model/course_news_dto.h"
#include "../model/course_page_dto.h"
#include "../model/course_problem_set_dto.h"
#include "../model/course_section_dto.h"
#include "../model/course_unit_component_dto.h"
#include "../model/course_unit_dto.h"
#include "../model/course_update_dto.h"
#include "../model/course_wiki_dto.h"
#include "../model/error_envelope.h"
#include "../model/instructor_profile_dto.h"
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
CoursesAPI_getCourseArticlesByCourseWikiAsync(apiClient_t *apiClient, char *courseId, char *wikiId, char *api_version, char *x_api_version);


// Get course articles by course wiki count
//
// Returns the count of course articles for a specific course wiki.
//
int*
CoursesAPI_getCourseArticlesByCourseWikiCountAsync(apiClient_t *apiClient, char *courseId, char *wikiId, char *api_version, char *x_api_version);


// Get course assignments by course
//
// Retrieves all course assignments for a specific course.
//
list_t*
CoursesAPI_getCourseAssignmentsByCourseAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version);


// Get course assignments by course count
//
// Returns the count of course assignments for a specific course.
//
int*
CoursesAPI_getCourseAssignmentsByCourseCountAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version);


// Get course by ID
//
// Retrieves a specific course by its ID.
//
course_dto_t*
CoursesAPI_getCourseByIdAsync(apiClient_t *apiClient, char *tenantId, char *courseId, char *api_version, char *x_api_version);


// Get course categories by course
//
// Retrieves all course categories for a specific course.
//
list_t*
CoursesAPI_getCourseCategoriesByCourseAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version);


// Get course categories by course count
//
// Returns the count of course categories for a specific course.
//
int*
CoursesAPI_getCourseCategoriesByCourseCountAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version);


// Get course cohorts by course
//
// Retrieves all course cohorts for a specific course.
//
list_t*
CoursesAPI_getCourseCohortsByCourseAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version);


// Get course cohorts by course count
//
// Returns the count of course cohorts for a specific course.
//
int*
CoursesAPI_getCourseCohortsByCourseCountAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version);


// Get enrollments by course
//
// Retrieves all enrollments for a specific course.
//
list_t*
CoursesAPI_getCourseEnrollmentsByCourseAsync(apiClient_t *apiClient, char *tenantId, char *courseId, char *api_version, char *x_api_version);


// Get course files by course
//
// Retrieves all course files for a specific course.
//
list_t*
CoursesAPI_getCourseFilesByCourseAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version);


// Get course files by course count
//
// Returns the count of course files for a specific course.
//
int*
CoursesAPI_getCourseFilesByCourseCountAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version);


// Get course forums by course
//
// Retrieves all course forums for a specific course.
//
list_t*
CoursesAPI_getCourseForumsByCourseAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version);


// Get course forums by course count
//
// Returns the count of course forums for a specific course.
//
int*
CoursesAPI_getCourseForumsByCourseCountAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version);


// Get course handouts by course
//
// Retrieves all course handouts for a specific course.
//
list_t*
CoursesAPI_getCourseHandoutsByCourseAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version);


// Get course handouts by course count
//
// Returns the count of course handouts for a specific course.
//
int*
CoursesAPI_getCourseHandoutsByCourseCountAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version);


// Get course libraries by course
//
// Retrieves all course libraries for a specific course.
//
list_t*
CoursesAPI_getCourseLibrariesByCourseAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version);


// Get course libraries by course count
//
// Returns the count of course libraries for a specific course.
//
int*
CoursesAPI_getCourseLibrariesByCourseCountAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version);


// Get course pages by course
//
// Retrieves all course pages for a specific course.
//
list_t*
CoursesAPI_getCoursePagesByCourseAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version);


// Get course pages by course count
//
// Returns the count of course pages for a specific course.
//
int*
CoursesAPI_getCoursePagesByCourseCountAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version);


// Get course problem sets by course
//
// Retrieves all course problem sets for a specific course.
//
list_t*
CoursesAPI_getCourseProblemSetsByCourseAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version);


// Get course problem sets by course count
//
// Returns the count of course problem sets for a specific course.
//
int*
CoursesAPI_getCourseProblemSetsByCourseCountAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version);


// Get course sections by course
//
// Retrieves all course sections for a specific course.
//
list_t*
CoursesAPI_getCourseSectionsByCourseAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version);


// Get course sections by course count
//
// Returns the count of course sections for a specific course.
//
int*
CoursesAPI_getCourseSectionsByCourseCountAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version);


// Get course unit components by course
//
// Retrieves all course unit components for a specific course.
//
list_t*
CoursesAPI_getCourseUnitComponentsByCourseAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version);


// Get course unit components by course count
//
// Returns the count of course unit components for a specific course.
//
int*
CoursesAPI_getCourseUnitComponentsByCourseCountAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version);


// Get course units by section
//
// Retrieves all course units for a specific course section.
//
list_t*
CoursesAPI_getCourseUnitsBySectionAsync(apiClient_t *apiClient, char *courseId, char *sectionId, char *api_version, char *x_api_version);


// Get course units by section count
//
// Returns the count of course units for a specific course section.
//
int*
CoursesAPI_getCourseUnitsBySectionCountAsync(apiClient_t *apiClient, char *courseId, char *sectionId, char *api_version, char *x_api_version);


// Get course updates by course
//
// Retrieves all course updates for a specific course.
//
list_t*
CoursesAPI_getCourseUpdatesByCourseAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version);


// Get course updates by course count
//
// Returns the count of course updates for a specific course.
//
int*
CoursesAPI_getCourseUpdatesByCourseCountAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version);


// Get course wikis by course
//
// Retrieves all course wikis for a specific course.
//
list_t*
CoursesAPI_getCourseWikisByCourseAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version);


// Get course wikis by course count
//
// Returns the count of course wikis for a specific course.
//
int*
CoursesAPI_getCourseWikisByCourseCountAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version);


// Get courses
//
// Retrieves courses. When tenantId is provided, returns tenant-scoped courses; otherwise returns all courses.
//
list_t*
CoursesAPI_getCoursesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get courses count
//
// Returns the count of courses. When tenantId is provided, returns tenant-scoped count; otherwise returns global count.
//
int*
CoursesAPI_getCoursesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


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


// Update a course
//
// Updates an existing course for the specified tenant.
//
void
CoursesAPI_updateCourseAsync(apiClient_t *apiClient, char *tenantId, char *courseId, char *api_version, char *x_api_version, course_update_dto_t *course_update_dto);


