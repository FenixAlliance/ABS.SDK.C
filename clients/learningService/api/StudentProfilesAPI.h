#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/average_dto.h"
#include "../model/count_dto.h"
#include "../model/error_envelope.h"
#include "../model/student_profile_create_dto.h"
#include "../model/student_profile_dto.h"
#include "../model/student_profile_update_dto.h"


int*
StudentProfilesAPI_apiV2LearningServiceStudentProfilesCountGet(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


list_t*
StudentProfilesAPI_apiV2LearningServiceStudentProfilesGet(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version);


void
StudentProfilesAPI_apiV2LearningServiceStudentProfilesPost(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, student_profile_create_dto_t *student_profile_create_dto);


average_dto_t*
StudentProfilesAPI_apiV2LearningServiceStudentProfilesStudentProfileIdAverageGet(apiClient_t *apiClient, char *tenantId, char *studentProfileId, char *api_version, char *x_api_version);


void
StudentProfilesAPI_apiV2LearningServiceStudentProfilesStudentProfileIdDelete(apiClient_t *apiClient, char *tenantId, char *studentProfileId, char *api_version, char *x_api_version);


student_profile_dto_t*
StudentProfilesAPI_apiV2LearningServiceStudentProfilesStudentProfileIdGet(apiClient_t *apiClient, char *tenantId, char *studentProfileId, char *api_version, char *x_api_version);


count_dto_t*
StudentProfilesAPI_apiV2LearningServiceStudentProfilesStudentProfileIdHoursCompletedGet(apiClient_t *apiClient, char *tenantId, char *studentProfileId, char *api_version, char *x_api_version);


void
StudentProfilesAPI_apiV2LearningServiceStudentProfilesStudentProfileIdPut(apiClient_t *apiClient, char *tenantId, char *studentProfileId, char *api_version, char *x_api_version, student_profile_update_dto_t *student_profile_update_dto);


