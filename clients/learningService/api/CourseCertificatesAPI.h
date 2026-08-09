#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/course_certificate_template_create_dto.h"
#include "../model/course_certificate_template_dto.h"
#include "../model/course_certificate_template_update_dto.h"
#include "../model/course_completion_certificate_create_dto.h"
#include "../model/course_completion_certificate_dto.h"
#include "../model/course_completion_certificate_update_dto.h"
#include "../model/empty_envelope.h"
#include "../model/error_envelope.h"
#include "../model/patch_operation.h"


// Create a course certificate
//
// Creates a new course certificate for the specified tenant.
//
void
CourseCertificatesAPI_createCourseCertificateAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, course_completion_certificate_create_dto_t *course_completion_certificate_create_dto);


// Create a certificate template
//
// Creates a new course certificate template for the specified tenant.
//
void
CourseCertificatesAPI_createCourseCertificateTemplateAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, course_certificate_template_create_dto_t *course_certificate_template_create_dto);


// Delete a course certificate
//
// Deletes a course certificate for the specified tenant.
//
void
CourseCertificatesAPI_deleteCourseCertificateAsync(apiClient_t *apiClient, char *tenantId, char *courseCertificateId, char *api_version, char *x_api_version);


// Delete a certificate template
//
// Deletes a course certificate template for the specified tenant.
//
void
CourseCertificatesAPI_deleteCourseCertificateTemplateAsync(apiClient_t *apiClient, char *tenantId, char *courseCertificateTemplateId, char *api_version, char *x_api_version);


// Get course certificate by ID
//
// Retrieves a specific course certificate by its ID.
//
course_completion_certificate_dto_t*
CourseCertificatesAPI_getCourseCertificateAsync(apiClient_t *apiClient, char *tenantId, char *courseCertificateId, char *api_version, char *x_api_version);


// Get certificate template by ID
//
// Retrieves a specific course certificate template by its ID.
//
course_certificate_template_dto_t*
CourseCertificatesAPI_getCourseCertificateTemplateAsync(apiClient_t *apiClient, char *tenantId, char *courseCertificateTemplateId, char *api_version, char *x_api_version);


// Get all certificate templates
//
// Retrieves all course certificate templates for the specified tenant.
//
list_t*
CourseCertificatesAPI_getCourseCertificateTemplatesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get certificate templates count
//
// Returns the count of course certificate templates for the specified tenant.
//
int*
CourseCertificatesAPI_getCourseCertificateTemplatesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get all course certificates
//
// Retrieves all course certificates for the specified tenant.
//
list_t*
CourseCertificatesAPI_getCourseCertificatesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Get course certificates count
//
// Returns the count of course certificates for the specified tenant.
//
int*
CourseCertificatesAPI_getCourseCertificatesCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


// Patch a course certificate
//
// Partially updates a course certificate for the specified tenant.
//
empty_envelope_t*
CourseCertificatesAPI_patchCourseCertificateAsync(apiClient_t *apiClient, char *tenantId, char *courseCertificateId, char *api_version, char *x_api_version, list_t *patch_operation);


// Patch a certificate template
//
// Partially updates a course certificate template for the specified tenant.
//
empty_envelope_t*
CourseCertificatesAPI_patchCourseCertificateTemplateAsync(apiClient_t *apiClient, char *tenantId, char *courseCertificateTemplateId, char *api_version, char *x_api_version, list_t *patch_operation);


// Update a course certificate
//
// Updates an existing course certificate for the specified tenant.
//
void
CourseCertificatesAPI_updateCourseCertificateAsync(apiClient_t *apiClient, char *tenantId, char *courseCertificateId, char *api_version, char *x_api_version, course_completion_certificate_update_dto_t *course_completion_certificate_update_dto);


// Update a certificate template
//
// Updates an existing course certificate template for the specified tenant.
//
void
CourseCertificatesAPI_updateCourseCertificateTemplateAsync(apiClient_t *apiClient, char *tenantId, char *courseCertificateTemplateId, char *api_version, char *x_api_version, course_certificate_template_update_dto_t *course_certificate_template_update_dto);


