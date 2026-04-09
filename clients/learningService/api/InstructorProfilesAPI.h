#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/error_envelope.h"
#include "../model/instructor_profile_create_dto.h"
#include "../model/instructor_profile_dto.h"
#include "../model/instructor_profile_update_dto.h"


int*
InstructorProfilesAPI_apiV2LearningServiceInstructorProfilesCountGet(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


list_t*
InstructorProfilesAPI_apiV2LearningServiceInstructorProfilesGet(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


void
InstructorProfilesAPI_apiV2LearningServiceInstructorProfilesInstructorProfileIdDelete(apiClient_t *apiClient, char *tenantId, char *instructorProfileId, char *api_version, char *x_api_version);


instructor_profile_dto_t*
InstructorProfilesAPI_apiV2LearningServiceInstructorProfilesInstructorProfileIdGet(apiClient_t *apiClient, char *tenantId, char *instructorProfileId, char *api_version, char *x_api_version);


void
InstructorProfilesAPI_apiV2LearningServiceInstructorProfilesInstructorProfileIdPut(apiClient_t *apiClient, char *tenantId, char *instructorProfileId, char *api_version, char *x_api_version, instructor_profile_update_dto_t *instructor_profile_update_dto);


void
InstructorProfilesAPI_apiV2LearningServiceInstructorProfilesPost(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, instructor_profile_create_dto_t *instructor_profile_create_dto);


