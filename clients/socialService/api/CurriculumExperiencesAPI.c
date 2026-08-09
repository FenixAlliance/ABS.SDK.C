#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "CurriculumExperiencesAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Create a curriculum experience
//
// Adds a work-experience record to a curriculum authored on the specified social profile.
//
empty_envelope_t*
CurriculumExperiencesAPI_createCurriculumExperienceAsync(apiClient_t *apiClient, char *curriculumId, char *socialProfileId, char *tenantId, char *api_version, char *x_api_version, curriculum_experience_create_dto_t *curriculum_experience_create_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SocialService/Curriculums/{curriculumId}/Experiences")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SocialService/Curriculums/{curriculumId}/Experiences");


    // Path Params
    long sizeOfPathParams_curriculumId = strlen(curriculumId)+3 + strlen("{ curriculumId }");
    if(curriculumId == NULL) {
        goto end;
    }
    char* localVarToReplace_curriculumId = malloc(sizeOfPathParams_curriculumId);
    sprintf(localVarToReplace_curriculumId, "{%s}", "curriculumId");

    localVarPath = strReplace(localVarPath, localVarToReplace_curriculumId, curriculumId);
    if(curriculumId == NULL) {
        goto end;
    }
    char* localVarToReplace_curriculumId = malloc(sizeOfPathParams_curriculumId);
    sprintf(localVarToReplace_curriculumId, "{%s}", "curriculumId");

    localVarPath = strReplace(localVarPath, localVarToReplace_curriculumId, curriculumId);



    // header parameters
    char *keyHeader_x_api_version = NULL;
    char * valueHeader_x_api_version = 0;
    keyValuePair_t *keyPairHeader_x_api_version = 0;
    if (x_api_version) {
        keyHeader_x_api_version = strdup("x-api-version");
        valueHeader_x_api_version = strdup((x_api_version));
        keyPairHeader_x_api_version = keyValuePair_create(keyHeader_x_api_version, valueHeader_x_api_version);
        list_addElement(localVarHeaderParameters,keyPairHeader_x_api_version);
    }


    // query parameters
    char *keyQuery_socialProfileId = NULL;
    char * valueQuery_socialProfileId = NULL;
    keyValuePair_t *keyPairQuery_socialProfileId = 0;
    if (socialProfileId)
    {
        keyQuery_socialProfileId = strdup("socialProfileId");
        valueQuery_socialProfileId = strdup((socialProfileId));
        keyPairQuery_socialProfileId = keyValuePair_create(keyQuery_socialProfileId, valueQuery_socialProfileId);
        list_addElement(localVarQueryParameters,keyPairQuery_socialProfileId);
    }

    // query parameters
    char *keyQuery_tenantId = NULL;
    char * valueQuery_tenantId = NULL;
    keyValuePair_t *keyPairQuery_tenantId = 0;
    if (tenantId)
    {
        keyQuery_tenantId = strdup("tenantId");
        valueQuery_tenantId = strdup((tenantId));
        keyPairQuery_tenantId = keyValuePair_create(keyQuery_tenantId, valueQuery_tenantId);
        list_addElement(localVarQueryParameters,keyPairQuery_tenantId);
    }

    // query parameters
    char *keyQuery_api_version = NULL;
    char * valueQuery_api_version = NULL;
    keyValuePair_t *keyPairQuery_api_version = 0;
    if (api_version)
    {
        keyQuery_api_version = strdup("api-version");
        valueQuery_api_version = strdup((api_version));
        keyPairQuery_api_version = keyValuePair_create(keyQuery_api_version, valueQuery_api_version);
        list_addElement(localVarQueryParameters,keyPairQuery_api_version);
    }

    // Body Param
    cJSON *localVarSingleItemJSON_curriculum_experience_create_dto = NULL;
    if (curriculum_experience_create_dto != NULL)
    {
        //string
        localVarSingleItemJSON_curriculum_experience_create_dto = curriculum_experience_create_dto_convertToJSON(curriculum_experience_create_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_curriculum_experience_create_dto);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/xml"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    list_addElement(localVarContentType,"application/xml"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad Request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 201) {
    //    printf("%s\n","Created");
    //}
    //nonprimitive not container
    cJSON *CurriculumExperiencesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(CurriculumExperiencesAPIlocalVarJSON);
    cJSON_Delete(CurriculumExperiencesAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    list_freeList(localVarHeaderParameters);
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_curriculumId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
    if (localVarSingleItemJSON_curriculum_experience_create_dto) {
        cJSON_Delete(localVarSingleItemJSON_curriculum_experience_create_dto);
        localVarSingleItemJSON_curriculum_experience_create_dto = NULL;
    }
    free(localVarBodyParameters);
    if(keyQuery_socialProfileId){
        free(keyQuery_socialProfileId);
        keyQuery_socialProfileId = NULL;
    }
    if(valueQuery_socialProfileId){
        free(valueQuery_socialProfileId);
        valueQuery_socialProfileId = NULL;
    }
    if(keyPairQuery_socialProfileId){
        keyValuePair_free(keyPairQuery_socialProfileId);
        keyPairQuery_socialProfileId = NULL;
    }
    if(keyQuery_tenantId){
        free(keyQuery_tenantId);
        keyQuery_tenantId = NULL;
    }
    if(valueQuery_tenantId){
        free(valueQuery_tenantId);
        valueQuery_tenantId = NULL;
    }
    if(keyPairQuery_tenantId){
        keyValuePair_free(keyPairQuery_tenantId);
        keyPairQuery_tenantId = NULL;
    }
    if(keyQuery_api_version){
        free(keyQuery_api_version);
        keyQuery_api_version = NULL;
    }
    if(valueQuery_api_version){
        free(valueQuery_api_version);
        valueQuery_api_version = NULL;
    }
    if(keyPairQuery_api_version){
        keyValuePair_free(keyPairQuery_api_version);
        keyPairQuery_api_version = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Delete a curriculum experience
//
// Removes a work-experience record from a curriculum.
//
empty_envelope_t*
CurriculumExperiencesAPI_deleteCurriculumExperienceAsync(apiClient_t *apiClient, char *curriculumId, char *experienceId, char *socialProfileId, char *tenantId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SocialService/Curriculums/{curriculumId}/Experiences/{experienceId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SocialService/Curriculums/{curriculumId}/Experiences/{experienceId}");


    // Path Params
    long sizeOfPathParams_curriculumId = strlen(curriculumId)+3 + strlen(experienceId)+3 + strlen("{ curriculumId }");
    if(curriculumId == NULL) {
        goto end;
    }
    char* localVarToReplace_curriculumId = malloc(sizeOfPathParams_curriculumId);
    sprintf(localVarToReplace_curriculumId, "{%s}", "curriculumId");

    localVarPath = strReplace(localVarPath, localVarToReplace_curriculumId, curriculumId);
    if(curriculumId == NULL) {
        goto end;
    }
    char* localVarToReplace_curriculumId = malloc(sizeOfPathParams_curriculumId);
    sprintf(localVarToReplace_curriculumId, "{%s}", "curriculumId");

    localVarPath = strReplace(localVarPath, localVarToReplace_curriculumId, curriculumId);

    // Path Params
    long sizeOfPathParams_experienceId = strlen(curriculumId)+3 + strlen(experienceId)+3 + strlen("{ experienceId }");
    if(experienceId == NULL) {
        goto end;
    }
    char* localVarToReplace_experienceId = malloc(sizeOfPathParams_experienceId);
    sprintf(localVarToReplace_experienceId, "{%s}", "experienceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_experienceId, experienceId);
    if(experienceId == NULL) {
        goto end;
    }
    char* localVarToReplace_experienceId = malloc(sizeOfPathParams_experienceId);
    sprintf(localVarToReplace_experienceId, "{%s}", "experienceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_experienceId, experienceId);



    // header parameters
    char *keyHeader_x_api_version = NULL;
    char * valueHeader_x_api_version = 0;
    keyValuePair_t *keyPairHeader_x_api_version = 0;
    if (x_api_version) {
        keyHeader_x_api_version = strdup("x-api-version");
        valueHeader_x_api_version = strdup((x_api_version));
        keyPairHeader_x_api_version = keyValuePair_create(keyHeader_x_api_version, valueHeader_x_api_version);
        list_addElement(localVarHeaderParameters,keyPairHeader_x_api_version);
    }


    // query parameters
    char *keyQuery_socialProfileId = NULL;
    char * valueQuery_socialProfileId = NULL;
    keyValuePair_t *keyPairQuery_socialProfileId = 0;
    if (socialProfileId)
    {
        keyQuery_socialProfileId = strdup("socialProfileId");
        valueQuery_socialProfileId = strdup((socialProfileId));
        keyPairQuery_socialProfileId = keyValuePair_create(keyQuery_socialProfileId, valueQuery_socialProfileId);
        list_addElement(localVarQueryParameters,keyPairQuery_socialProfileId);
    }

    // query parameters
    char *keyQuery_tenantId = NULL;
    char * valueQuery_tenantId = NULL;
    keyValuePair_t *keyPairQuery_tenantId = 0;
    if (tenantId)
    {
        keyQuery_tenantId = strdup("tenantId");
        valueQuery_tenantId = strdup((tenantId));
        keyPairQuery_tenantId = keyValuePair_create(keyQuery_tenantId, valueQuery_tenantId);
        list_addElement(localVarQueryParameters,keyPairQuery_tenantId);
    }

    // query parameters
    char *keyQuery_api_version = NULL;
    char * valueQuery_api_version = NULL;
    keyValuePair_t *keyPairQuery_api_version = 0;
    if (api_version)
    {
        keyQuery_api_version = strdup("api-version");
        valueQuery_api_version = strdup((api_version));
        keyPairQuery_api_version = keyValuePair_create(keyQuery_api_version, valueQuery_api_version);
        list_addElement(localVarQueryParameters,keyPairQuery_api_version);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/xml"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "DELETE");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad Request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *CurriculumExperiencesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(CurriculumExperiencesAPIlocalVarJSON);
    cJSON_Delete(CurriculumExperiencesAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    list_freeList(localVarHeaderParameters);
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_curriculumId);
    free(localVarToReplace_experienceId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
    if(keyQuery_socialProfileId){
        free(keyQuery_socialProfileId);
        keyQuery_socialProfileId = NULL;
    }
    if(valueQuery_socialProfileId){
        free(valueQuery_socialProfileId);
        valueQuery_socialProfileId = NULL;
    }
    if(keyPairQuery_socialProfileId){
        keyValuePair_free(keyPairQuery_socialProfileId);
        keyPairQuery_socialProfileId = NULL;
    }
    if(keyQuery_tenantId){
        free(keyQuery_tenantId);
        keyQuery_tenantId = NULL;
    }
    if(valueQuery_tenantId){
        free(valueQuery_tenantId);
        valueQuery_tenantId = NULL;
    }
    if(keyPairQuery_tenantId){
        keyValuePair_free(keyPairQuery_tenantId);
        keyPairQuery_tenantId = NULL;
    }
    if(keyQuery_api_version){
        free(keyQuery_api_version);
        keyQuery_api_version = NULL;
    }
    if(valueQuery_api_version){
        free(valueQuery_api_version);
        valueQuery_api_version = NULL;
    }
    if(keyPairQuery_api_version){
        keyValuePair_free(keyPairQuery_api_version);
        keyPairQuery_api_version = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get curriculum experience by ID
//
// Retrieves a specific work-experience record of a curriculum.
//
curriculum_experience_dto_envelope_t*
CurriculumExperiencesAPI_getCurriculumExperienceAsync(apiClient_t *apiClient, char *curriculumId, char *experienceId, char *socialProfileId, char *tenantId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SocialService/Curriculums/{curriculumId}/Experiences/{experienceId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SocialService/Curriculums/{curriculumId}/Experiences/{experienceId}");


    // Path Params
    long sizeOfPathParams_curriculumId = strlen(curriculumId)+3 + strlen(experienceId)+3 + strlen("{ curriculumId }");
    if(curriculumId == NULL) {
        goto end;
    }
    char* localVarToReplace_curriculumId = malloc(sizeOfPathParams_curriculumId);
    sprintf(localVarToReplace_curriculumId, "{%s}", "curriculumId");

    localVarPath = strReplace(localVarPath, localVarToReplace_curriculumId, curriculumId);
    if(curriculumId == NULL) {
        goto end;
    }
    char* localVarToReplace_curriculumId = malloc(sizeOfPathParams_curriculumId);
    sprintf(localVarToReplace_curriculumId, "{%s}", "curriculumId");

    localVarPath = strReplace(localVarPath, localVarToReplace_curriculumId, curriculumId);

    // Path Params
    long sizeOfPathParams_experienceId = strlen(curriculumId)+3 + strlen(experienceId)+3 + strlen("{ experienceId }");
    if(experienceId == NULL) {
        goto end;
    }
    char* localVarToReplace_experienceId = malloc(sizeOfPathParams_experienceId);
    sprintf(localVarToReplace_experienceId, "{%s}", "experienceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_experienceId, experienceId);
    if(experienceId == NULL) {
        goto end;
    }
    char* localVarToReplace_experienceId = malloc(sizeOfPathParams_experienceId);
    sprintf(localVarToReplace_experienceId, "{%s}", "experienceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_experienceId, experienceId);



    // header parameters
    char *keyHeader_x_api_version = NULL;
    char * valueHeader_x_api_version = 0;
    keyValuePair_t *keyPairHeader_x_api_version = 0;
    if (x_api_version) {
        keyHeader_x_api_version = strdup("x-api-version");
        valueHeader_x_api_version = strdup((x_api_version));
        keyPairHeader_x_api_version = keyValuePair_create(keyHeader_x_api_version, valueHeader_x_api_version);
        list_addElement(localVarHeaderParameters,keyPairHeader_x_api_version);
    }


    // query parameters
    char *keyQuery_socialProfileId = NULL;
    char * valueQuery_socialProfileId = NULL;
    keyValuePair_t *keyPairQuery_socialProfileId = 0;
    if (socialProfileId)
    {
        keyQuery_socialProfileId = strdup("socialProfileId");
        valueQuery_socialProfileId = strdup((socialProfileId));
        keyPairQuery_socialProfileId = keyValuePair_create(keyQuery_socialProfileId, valueQuery_socialProfileId);
        list_addElement(localVarQueryParameters,keyPairQuery_socialProfileId);
    }

    // query parameters
    char *keyQuery_tenantId = NULL;
    char * valueQuery_tenantId = NULL;
    keyValuePair_t *keyPairQuery_tenantId = 0;
    if (tenantId)
    {
        keyQuery_tenantId = strdup("tenantId");
        valueQuery_tenantId = strdup((tenantId));
        keyPairQuery_tenantId = keyValuePair_create(keyQuery_tenantId, valueQuery_tenantId);
        list_addElement(localVarQueryParameters,keyPairQuery_tenantId);
    }

    // query parameters
    char *keyQuery_api_version = NULL;
    char * valueQuery_api_version = NULL;
    keyValuePair_t *keyPairQuery_api_version = 0;
    if (api_version)
    {
        keyQuery_api_version = strdup("api-version");
        valueQuery_api_version = strdup((api_version));
        keyPairQuery_api_version = keyValuePair_create(keyQuery_api_version, valueQuery_api_version);
        list_addElement(localVarQueryParameters,keyPairQuery_api_version);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/xml"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *CurriculumExperiencesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    curriculum_experience_dto_envelope_t *elementToReturn = curriculum_experience_dto_envelope_parseFromJSON(CurriculumExperiencesAPIlocalVarJSON);
    cJSON_Delete(CurriculumExperiencesAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    list_freeList(localVarHeaderParameters);
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_curriculumId);
    free(localVarToReplace_experienceId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
    if(keyQuery_socialProfileId){
        free(keyQuery_socialProfileId);
        keyQuery_socialProfileId = NULL;
    }
    if(valueQuery_socialProfileId){
        free(valueQuery_socialProfileId);
        valueQuery_socialProfileId = NULL;
    }
    if(keyPairQuery_socialProfileId){
        keyValuePair_free(keyPairQuery_socialProfileId);
        keyPairQuery_socialProfileId = NULL;
    }
    if(keyQuery_tenantId){
        free(keyQuery_tenantId);
        keyQuery_tenantId = NULL;
    }
    if(valueQuery_tenantId){
        free(valueQuery_tenantId);
        valueQuery_tenantId = NULL;
    }
    if(keyPairQuery_tenantId){
        keyValuePair_free(keyPairQuery_tenantId);
        keyPairQuery_tenantId = NULL;
    }
    if(keyQuery_api_version){
        free(keyQuery_api_version);
        keyQuery_api_version = NULL;
    }
    if(valueQuery_api_version){
        free(valueQuery_api_version);
        valueQuery_api_version = NULL;
    }
    if(keyPairQuery_api_version){
        keyValuePair_free(keyPairQuery_api_version);
        keyPairQuery_api_version = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get curriculum experiences
//
// Retrieves the work-experience records of a curriculum authored on the specified social profile.
//
curriculum_experience_dto_list_envelope_t*
CurriculumExperiencesAPI_getCurriculumExperiencesAsync(apiClient_t *apiClient, char *curriculumId, char *socialProfileId, char *tenantId, char *api_version, char *x_api_version, curriculum_experience_dto_collection_query_parameters_t *curriculum_experience_dto_collection_query_parameters)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SocialService/Curriculums/{curriculumId}/Experiences")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SocialService/Curriculums/{curriculumId}/Experiences");


    // Path Params
    long sizeOfPathParams_curriculumId = strlen(curriculumId)+3 + strlen("{ curriculumId }");
    if(curriculumId == NULL) {
        goto end;
    }
    char* localVarToReplace_curriculumId = malloc(sizeOfPathParams_curriculumId);
    sprintf(localVarToReplace_curriculumId, "{%s}", "curriculumId");

    localVarPath = strReplace(localVarPath, localVarToReplace_curriculumId, curriculumId);
    if(curriculumId == NULL) {
        goto end;
    }
    char* localVarToReplace_curriculumId = malloc(sizeOfPathParams_curriculumId);
    sprintf(localVarToReplace_curriculumId, "{%s}", "curriculumId");

    localVarPath = strReplace(localVarPath, localVarToReplace_curriculumId, curriculumId);



    // header parameters
    char *keyHeader_x_api_version = NULL;
    char * valueHeader_x_api_version = 0;
    keyValuePair_t *keyPairHeader_x_api_version = 0;
    if (x_api_version) {
        keyHeader_x_api_version = strdup("x-api-version");
        valueHeader_x_api_version = strdup((x_api_version));
        keyPairHeader_x_api_version = keyValuePair_create(keyHeader_x_api_version, valueHeader_x_api_version);
        list_addElement(localVarHeaderParameters,keyPairHeader_x_api_version);
    }


    // query parameters
    char *keyQuery_socialProfileId = NULL;
    char * valueQuery_socialProfileId = NULL;
    keyValuePair_t *keyPairQuery_socialProfileId = 0;
    if (socialProfileId)
    {
        keyQuery_socialProfileId = strdup("socialProfileId");
        valueQuery_socialProfileId = strdup((socialProfileId));
        keyPairQuery_socialProfileId = keyValuePair_create(keyQuery_socialProfileId, valueQuery_socialProfileId);
        list_addElement(localVarQueryParameters,keyPairQuery_socialProfileId);
    }

    // query parameters
    char *keyQuery_tenantId = NULL;
    char * valueQuery_tenantId = NULL;
    keyValuePair_t *keyPairQuery_tenantId = 0;
    if (tenantId)
    {
        keyQuery_tenantId = strdup("tenantId");
        valueQuery_tenantId = strdup((tenantId));
        keyPairQuery_tenantId = keyValuePair_create(keyQuery_tenantId, valueQuery_tenantId);
        list_addElement(localVarQueryParameters,keyPairQuery_tenantId);
    }

    // query parameters
    char *keyQuery_api_version = NULL;
    char * valueQuery_api_version = NULL;
    keyValuePair_t *keyPairQuery_api_version = 0;
    if (api_version)
    {
        keyQuery_api_version = strdup("api-version");
        valueQuery_api_version = strdup((api_version));
        keyPairQuery_api_version = keyValuePair_create(keyQuery_api_version, valueQuery_api_version);
        list_addElement(localVarQueryParameters,keyPairQuery_api_version);
    }

    // Body Param
    cJSON *localVarSingleItemJSON_curriculum_experience_dto_collection_query_parameters = NULL;
    if (curriculum_experience_dto_collection_query_parameters != NULL)
    {
        //string
        localVarSingleItemJSON_curriculum_experience_dto_collection_query_parameters = curriculum_experience_dto_collection_query_parameters_convertToJSON(curriculum_experience_dto_collection_query_parameters);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_curriculum_experience_dto_collection_query_parameters);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/xml"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    list_addElement(localVarContentType,"application/xml"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *CurriculumExperiencesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    curriculum_experience_dto_list_envelope_t *elementToReturn = curriculum_experience_dto_list_envelope_parseFromJSON(CurriculumExperiencesAPIlocalVarJSON);
    cJSON_Delete(CurriculumExperiencesAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    list_freeList(localVarHeaderParameters);
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_curriculumId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
    if (localVarSingleItemJSON_curriculum_experience_dto_collection_query_parameters) {
        cJSON_Delete(localVarSingleItemJSON_curriculum_experience_dto_collection_query_parameters);
        localVarSingleItemJSON_curriculum_experience_dto_collection_query_parameters = NULL;
    }
    free(localVarBodyParameters);
    if(keyQuery_socialProfileId){
        free(keyQuery_socialProfileId);
        keyQuery_socialProfileId = NULL;
    }
    if(valueQuery_socialProfileId){
        free(valueQuery_socialProfileId);
        valueQuery_socialProfileId = NULL;
    }
    if(keyPairQuery_socialProfileId){
        keyValuePair_free(keyPairQuery_socialProfileId);
        keyPairQuery_socialProfileId = NULL;
    }
    if(keyQuery_tenantId){
        free(keyQuery_tenantId);
        keyQuery_tenantId = NULL;
    }
    if(valueQuery_tenantId){
        free(valueQuery_tenantId);
        valueQuery_tenantId = NULL;
    }
    if(keyPairQuery_tenantId){
        keyValuePair_free(keyPairQuery_tenantId);
        keyPairQuery_tenantId = NULL;
    }
    if(keyQuery_api_version){
        free(keyQuery_api_version);
        keyQuery_api_version = NULL;
    }
    if(valueQuery_api_version){
        free(valueQuery_api_version);
        valueQuery_api_version = NULL;
    }
    if(keyPairQuery_api_version){
        keyValuePair_free(keyPairQuery_api_version);
        keyPairQuery_api_version = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Count curriculum experiences
//
// Returns the count of work-experience records of a curriculum.
//
int32_envelope_t*
CurriculumExperiencesAPI_getCurriculumExperiencesCountAsync(apiClient_t *apiClient, char *curriculumId, char *socialProfileId, char *tenantId, char *api_version, char *x_api_version, curriculum_experience_dto_collection_query_parameters_t *curriculum_experience_dto_collection_query_parameters)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SocialService/Curriculums/{curriculumId}/Experiences/Count")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SocialService/Curriculums/{curriculumId}/Experiences/Count");


    // Path Params
    long sizeOfPathParams_curriculumId = strlen(curriculumId)+3 + strlen("{ curriculumId }");
    if(curriculumId == NULL) {
        goto end;
    }
    char* localVarToReplace_curriculumId = malloc(sizeOfPathParams_curriculumId);
    sprintf(localVarToReplace_curriculumId, "{%s}", "curriculumId");

    localVarPath = strReplace(localVarPath, localVarToReplace_curriculumId, curriculumId);
    if(curriculumId == NULL) {
        goto end;
    }
    char* localVarToReplace_curriculumId = malloc(sizeOfPathParams_curriculumId);
    sprintf(localVarToReplace_curriculumId, "{%s}", "curriculumId");

    localVarPath = strReplace(localVarPath, localVarToReplace_curriculumId, curriculumId);



    // header parameters
    char *keyHeader_x_api_version = NULL;
    char * valueHeader_x_api_version = 0;
    keyValuePair_t *keyPairHeader_x_api_version = 0;
    if (x_api_version) {
        keyHeader_x_api_version = strdup("x-api-version");
        valueHeader_x_api_version = strdup((x_api_version));
        keyPairHeader_x_api_version = keyValuePair_create(keyHeader_x_api_version, valueHeader_x_api_version);
        list_addElement(localVarHeaderParameters,keyPairHeader_x_api_version);
    }


    // query parameters
    char *keyQuery_socialProfileId = NULL;
    char * valueQuery_socialProfileId = NULL;
    keyValuePair_t *keyPairQuery_socialProfileId = 0;
    if (socialProfileId)
    {
        keyQuery_socialProfileId = strdup("socialProfileId");
        valueQuery_socialProfileId = strdup((socialProfileId));
        keyPairQuery_socialProfileId = keyValuePair_create(keyQuery_socialProfileId, valueQuery_socialProfileId);
        list_addElement(localVarQueryParameters,keyPairQuery_socialProfileId);
    }

    // query parameters
    char *keyQuery_tenantId = NULL;
    char * valueQuery_tenantId = NULL;
    keyValuePair_t *keyPairQuery_tenantId = 0;
    if (tenantId)
    {
        keyQuery_tenantId = strdup("tenantId");
        valueQuery_tenantId = strdup((tenantId));
        keyPairQuery_tenantId = keyValuePair_create(keyQuery_tenantId, valueQuery_tenantId);
        list_addElement(localVarQueryParameters,keyPairQuery_tenantId);
    }

    // query parameters
    char *keyQuery_api_version = NULL;
    char * valueQuery_api_version = NULL;
    keyValuePair_t *keyPairQuery_api_version = 0;
    if (api_version)
    {
        keyQuery_api_version = strdup("api-version");
        valueQuery_api_version = strdup((api_version));
        keyPairQuery_api_version = keyValuePair_create(keyQuery_api_version, valueQuery_api_version);
        list_addElement(localVarQueryParameters,keyPairQuery_api_version);
    }

    // Body Param
    cJSON *localVarSingleItemJSON_curriculum_experience_dto_collection_query_parameters = NULL;
    if (curriculum_experience_dto_collection_query_parameters != NULL)
    {
        //string
        localVarSingleItemJSON_curriculum_experience_dto_collection_query_parameters = curriculum_experience_dto_collection_query_parameters_convertToJSON(curriculum_experience_dto_collection_query_parameters);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_curriculum_experience_dto_collection_query_parameters);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/xml"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    list_addElement(localVarContentType,"application/xml"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *CurriculumExperiencesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    int32_envelope_t *elementToReturn = int32_envelope_parseFromJSON(CurriculumExperiencesAPIlocalVarJSON);
    cJSON_Delete(CurriculumExperiencesAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    list_freeList(localVarHeaderParameters);
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_curriculumId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
    if (localVarSingleItemJSON_curriculum_experience_dto_collection_query_parameters) {
        cJSON_Delete(localVarSingleItemJSON_curriculum_experience_dto_collection_query_parameters);
        localVarSingleItemJSON_curriculum_experience_dto_collection_query_parameters = NULL;
    }
    free(localVarBodyParameters);
    if(keyQuery_socialProfileId){
        free(keyQuery_socialProfileId);
        keyQuery_socialProfileId = NULL;
    }
    if(valueQuery_socialProfileId){
        free(valueQuery_socialProfileId);
        valueQuery_socialProfileId = NULL;
    }
    if(keyPairQuery_socialProfileId){
        keyValuePair_free(keyPairQuery_socialProfileId);
        keyPairQuery_socialProfileId = NULL;
    }
    if(keyQuery_tenantId){
        free(keyQuery_tenantId);
        keyQuery_tenantId = NULL;
    }
    if(valueQuery_tenantId){
        free(valueQuery_tenantId);
        valueQuery_tenantId = NULL;
    }
    if(keyPairQuery_tenantId){
        keyValuePair_free(keyPairQuery_tenantId);
        keyPairQuery_tenantId = NULL;
    }
    if(keyQuery_api_version){
        free(keyQuery_api_version);
        keyQuery_api_version = NULL;
    }
    if(valueQuery_api_version){
        free(valueQuery_api_version);
        valueQuery_api_version = NULL;
    }
    if(keyPairQuery_api_version){
        keyValuePair_free(keyPairQuery_api_version);
        keyPairQuery_api_version = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Patch a curriculum experience
//
// Partially updates an existing work-experience record of a curriculum.
//
empty_envelope_t*
CurriculumExperiencesAPI_patchCurriculumExperienceAsync(apiClient_t *apiClient, char *curriculumId, char *experienceId, char *socialProfileId, char *tenantId, char *api_version, char *x_api_version, list_t *patch_operation)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SocialService/Curriculums/{curriculumId}/Experiences/{experienceId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SocialService/Curriculums/{curriculumId}/Experiences/{experienceId}");


    // Path Params
    long sizeOfPathParams_curriculumId = strlen(curriculumId)+3 + strlen(experienceId)+3 + strlen("{ curriculumId }");
    if(curriculumId == NULL) {
        goto end;
    }
    char* localVarToReplace_curriculumId = malloc(sizeOfPathParams_curriculumId);
    sprintf(localVarToReplace_curriculumId, "{%s}", "curriculumId");

    localVarPath = strReplace(localVarPath, localVarToReplace_curriculumId, curriculumId);
    if(curriculumId == NULL) {
        goto end;
    }
    char* localVarToReplace_curriculumId = malloc(sizeOfPathParams_curriculumId);
    sprintf(localVarToReplace_curriculumId, "{%s}", "curriculumId");

    localVarPath = strReplace(localVarPath, localVarToReplace_curriculumId, curriculumId);

    // Path Params
    long sizeOfPathParams_experienceId = strlen(curriculumId)+3 + strlen(experienceId)+3 + strlen("{ experienceId }");
    if(experienceId == NULL) {
        goto end;
    }
    char* localVarToReplace_experienceId = malloc(sizeOfPathParams_experienceId);
    sprintf(localVarToReplace_experienceId, "{%s}", "experienceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_experienceId, experienceId);
    if(experienceId == NULL) {
        goto end;
    }
    char* localVarToReplace_experienceId = malloc(sizeOfPathParams_experienceId);
    sprintf(localVarToReplace_experienceId, "{%s}", "experienceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_experienceId, experienceId);



    // header parameters
    char *keyHeader_x_api_version = NULL;
    char * valueHeader_x_api_version = 0;
    keyValuePair_t *keyPairHeader_x_api_version = 0;
    if (x_api_version) {
        keyHeader_x_api_version = strdup("x-api-version");
        valueHeader_x_api_version = strdup((x_api_version));
        keyPairHeader_x_api_version = keyValuePair_create(keyHeader_x_api_version, valueHeader_x_api_version);
        list_addElement(localVarHeaderParameters,keyPairHeader_x_api_version);
    }


    // query parameters
    char *keyQuery_socialProfileId = NULL;
    char * valueQuery_socialProfileId = NULL;
    keyValuePair_t *keyPairQuery_socialProfileId = 0;
    if (socialProfileId)
    {
        keyQuery_socialProfileId = strdup("socialProfileId");
        valueQuery_socialProfileId = strdup((socialProfileId));
        keyPairQuery_socialProfileId = keyValuePair_create(keyQuery_socialProfileId, valueQuery_socialProfileId);
        list_addElement(localVarQueryParameters,keyPairQuery_socialProfileId);
    }

    // query parameters
    char *keyQuery_tenantId = NULL;
    char * valueQuery_tenantId = NULL;
    keyValuePair_t *keyPairQuery_tenantId = 0;
    if (tenantId)
    {
        keyQuery_tenantId = strdup("tenantId");
        valueQuery_tenantId = strdup((tenantId));
        keyPairQuery_tenantId = keyValuePair_create(keyQuery_tenantId, valueQuery_tenantId);
        list_addElement(localVarQueryParameters,keyPairQuery_tenantId);
    }

    // query parameters
    char *keyQuery_api_version = NULL;
    char * valueQuery_api_version = NULL;
    keyValuePair_t *keyPairQuery_api_version = 0;
    if (api_version)
    {
        keyQuery_api_version = strdup("api-version");
        valueQuery_api_version = strdup((api_version));
        keyPairQuery_api_version = keyValuePair_create(keyQuery_api_version, valueQuery_api_version);
        list_addElement(localVarQueryParameters,keyPairQuery_api_version);
    }

    // Body Param
    //notstring
    cJSON *localVar_patch_operation = NULL;
    cJSON *localVarItemJSON_patch_operation = NULL;
    cJSON *localVarSingleItemJSON_patch_operation = NULL;
    if (patch_operation != NULL)
    {
        localVarItemJSON_patch_operation = cJSON_CreateObject();
        localVarSingleItemJSON_patch_operation = cJSON_AddArrayToObject(localVarItemJSON_patch_operation, "patch_operation");
        if (localVarSingleItemJSON_patch_operation == NULL)
        {
            // nonprimitive container

            goto end;
        }
    }

    listEntry_t *patch_operationBodyListEntry;
    list_ForEach(patch_operationBodyListEntry, patch_operation)
    {
        localVar_patch_operation = patch_operation_convertToJSON(patch_operationBodyListEntry->data);
        if(localVar_patch_operation == NULL)
        {
            goto end;
        }
        cJSON_AddItemToArray(localVarSingleItemJSON_patch_operation, localVar_patch_operation);
        localVarBodyParameters = cJSON_Print(localVarItemJSON_patch_operation);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/xml"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    list_addElement(localVarContentType,"application/xml"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "PATCH");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad Request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *CurriculumExperiencesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(CurriculumExperiencesAPIlocalVarJSON);
    cJSON_Delete(CurriculumExperiencesAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    list_freeList(localVarHeaderParameters);
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_curriculumId);
    free(localVarToReplace_experienceId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
    if (localVarItemJSON_patch_operation) {
        cJSON_Delete(localVarItemJSON_patch_operation);
        localVarItemJSON_patch_operation = NULL;
    }
    if (localVarSingleItemJSON_patch_operation) {
        cJSON_Delete(localVarSingleItemJSON_patch_operation);
        localVarSingleItemJSON_patch_operation = NULL;
    }
    if (localVar_patch_operation) {
        cJSON_Delete(localVar_patch_operation);
        localVar_patch_operation = NULL;
    }
    free(localVarBodyParameters);
    if(keyQuery_socialProfileId){
        free(keyQuery_socialProfileId);
        keyQuery_socialProfileId = NULL;
    }
    if(valueQuery_socialProfileId){
        free(valueQuery_socialProfileId);
        valueQuery_socialProfileId = NULL;
    }
    if(keyPairQuery_socialProfileId){
        keyValuePair_free(keyPairQuery_socialProfileId);
        keyPairQuery_socialProfileId = NULL;
    }
    if(keyQuery_tenantId){
        free(keyQuery_tenantId);
        keyQuery_tenantId = NULL;
    }
    if(valueQuery_tenantId){
        free(valueQuery_tenantId);
        valueQuery_tenantId = NULL;
    }
    if(keyPairQuery_tenantId){
        keyValuePair_free(keyPairQuery_tenantId);
        keyPairQuery_tenantId = NULL;
    }
    if(keyQuery_api_version){
        free(keyQuery_api_version);
        keyQuery_api_version = NULL;
    }
    if(valueQuery_api_version){
        free(valueQuery_api_version);
        valueQuery_api_version = NULL;
    }
    if(keyPairQuery_api_version){
        keyValuePair_free(keyPairQuery_api_version);
        keyPairQuery_api_version = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Update a curriculum experience
//
// Updates an existing work-experience record of a curriculum.
//
empty_envelope_t*
CurriculumExperiencesAPI_updateCurriculumExperienceAsync(apiClient_t *apiClient, char *curriculumId, char *experienceId, char *socialProfileId, char *tenantId, char *api_version, char *x_api_version, curriculum_experience_update_dto_t *curriculum_experience_update_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SocialService/Curriculums/{curriculumId}/Experiences/{experienceId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SocialService/Curriculums/{curriculumId}/Experiences/{experienceId}");


    // Path Params
    long sizeOfPathParams_curriculumId = strlen(curriculumId)+3 + strlen(experienceId)+3 + strlen("{ curriculumId }");
    if(curriculumId == NULL) {
        goto end;
    }
    char* localVarToReplace_curriculumId = malloc(sizeOfPathParams_curriculumId);
    sprintf(localVarToReplace_curriculumId, "{%s}", "curriculumId");

    localVarPath = strReplace(localVarPath, localVarToReplace_curriculumId, curriculumId);
    if(curriculumId == NULL) {
        goto end;
    }
    char* localVarToReplace_curriculumId = malloc(sizeOfPathParams_curriculumId);
    sprintf(localVarToReplace_curriculumId, "{%s}", "curriculumId");

    localVarPath = strReplace(localVarPath, localVarToReplace_curriculumId, curriculumId);

    // Path Params
    long sizeOfPathParams_experienceId = strlen(curriculumId)+3 + strlen(experienceId)+3 + strlen("{ experienceId }");
    if(experienceId == NULL) {
        goto end;
    }
    char* localVarToReplace_experienceId = malloc(sizeOfPathParams_experienceId);
    sprintf(localVarToReplace_experienceId, "{%s}", "experienceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_experienceId, experienceId);
    if(experienceId == NULL) {
        goto end;
    }
    char* localVarToReplace_experienceId = malloc(sizeOfPathParams_experienceId);
    sprintf(localVarToReplace_experienceId, "{%s}", "experienceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_experienceId, experienceId);



    // header parameters
    char *keyHeader_x_api_version = NULL;
    char * valueHeader_x_api_version = 0;
    keyValuePair_t *keyPairHeader_x_api_version = 0;
    if (x_api_version) {
        keyHeader_x_api_version = strdup("x-api-version");
        valueHeader_x_api_version = strdup((x_api_version));
        keyPairHeader_x_api_version = keyValuePair_create(keyHeader_x_api_version, valueHeader_x_api_version);
        list_addElement(localVarHeaderParameters,keyPairHeader_x_api_version);
    }


    // query parameters
    char *keyQuery_socialProfileId = NULL;
    char * valueQuery_socialProfileId = NULL;
    keyValuePair_t *keyPairQuery_socialProfileId = 0;
    if (socialProfileId)
    {
        keyQuery_socialProfileId = strdup("socialProfileId");
        valueQuery_socialProfileId = strdup((socialProfileId));
        keyPairQuery_socialProfileId = keyValuePair_create(keyQuery_socialProfileId, valueQuery_socialProfileId);
        list_addElement(localVarQueryParameters,keyPairQuery_socialProfileId);
    }

    // query parameters
    char *keyQuery_tenantId = NULL;
    char * valueQuery_tenantId = NULL;
    keyValuePair_t *keyPairQuery_tenantId = 0;
    if (tenantId)
    {
        keyQuery_tenantId = strdup("tenantId");
        valueQuery_tenantId = strdup((tenantId));
        keyPairQuery_tenantId = keyValuePair_create(keyQuery_tenantId, valueQuery_tenantId);
        list_addElement(localVarQueryParameters,keyPairQuery_tenantId);
    }

    // query parameters
    char *keyQuery_api_version = NULL;
    char * valueQuery_api_version = NULL;
    keyValuePair_t *keyPairQuery_api_version = 0;
    if (api_version)
    {
        keyQuery_api_version = strdup("api-version");
        valueQuery_api_version = strdup((api_version));
        keyPairQuery_api_version = keyValuePair_create(keyQuery_api_version, valueQuery_api_version);
        list_addElement(localVarQueryParameters,keyPairQuery_api_version);
    }

    // Body Param
    cJSON *localVarSingleItemJSON_curriculum_experience_update_dto = NULL;
    if (curriculum_experience_update_dto != NULL)
    {
        //string
        localVarSingleItemJSON_curriculum_experience_update_dto = curriculum_experience_update_dto_convertToJSON(curriculum_experience_update_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_curriculum_experience_update_dto);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/xml"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    list_addElement(localVarContentType,"application/xml"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "PUT");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad Request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *CurriculumExperiencesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(CurriculumExperiencesAPIlocalVarJSON);
    cJSON_Delete(CurriculumExperiencesAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    list_freeList(localVarHeaderParameters);
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_curriculumId);
    free(localVarToReplace_experienceId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
    if (localVarSingleItemJSON_curriculum_experience_update_dto) {
        cJSON_Delete(localVarSingleItemJSON_curriculum_experience_update_dto);
        localVarSingleItemJSON_curriculum_experience_update_dto = NULL;
    }
    free(localVarBodyParameters);
    if(keyQuery_socialProfileId){
        free(keyQuery_socialProfileId);
        keyQuery_socialProfileId = NULL;
    }
    if(valueQuery_socialProfileId){
        free(valueQuery_socialProfileId);
        valueQuery_socialProfileId = NULL;
    }
    if(keyPairQuery_socialProfileId){
        keyValuePair_free(keyPairQuery_socialProfileId);
        keyPairQuery_socialProfileId = NULL;
    }
    if(keyQuery_tenantId){
        free(keyQuery_tenantId);
        keyQuery_tenantId = NULL;
    }
    if(valueQuery_tenantId){
        free(valueQuery_tenantId);
        valueQuery_tenantId = NULL;
    }
    if(keyPairQuery_tenantId){
        keyValuePair_free(keyPairQuery_tenantId);
        keyPairQuery_tenantId = NULL;
    }
    if(keyQuery_api_version){
        free(keyQuery_api_version);
        keyQuery_api_version = NULL;
    }
    if(valueQuery_api_version){
        free(valueQuery_api_version);
        valueQuery_api_version = NULL;
    }
    if(keyPairQuery_api_version){
        keyValuePair_free(keyPairQuery_api_version);
        keyPairQuery_api_version = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

