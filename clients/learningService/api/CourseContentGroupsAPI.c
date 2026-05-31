#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "CourseContentGroupsAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Create a new course content group
//
// Creates a new course content group for the specified tenant.
//
void
CourseContentGroupsAPI_createCourseContentGroupAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, course_content_group_create_dto_t *course_content_group_create_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/LearningService/CourseContentGroups")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/LearningService/CourseContentGroups");




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
    cJSON *localVarSingleItemJSON_course_content_group_create_dto = NULL;
    if (course_content_group_create_dto != NULL)
    {
        //string
        localVarSingleItemJSON_course_content_group_create_dto = course_content_group_create_dto_convertToJSON(course_content_group_create_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_course_content_group_create_dto);
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
    //if (apiClient->response_code == 201) {
    //    printf("%s\n","Created");
    //}
    //No return type
end:
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
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
    if (localVarSingleItemJSON_course_content_group_create_dto) {
        cJSON_Delete(localVarSingleItemJSON_course_content_group_create_dto);
        localVarSingleItemJSON_course_content_group_create_dto = NULL;
    }
    free(localVarBodyParameters);
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
    if(keyQuery_tenantId){
        free(keyQuery_tenantId);
        keyQuery_tenantId = NULL;
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
    if(keyQuery_api_version){
        free(keyQuery_api_version);
        keyQuery_api_version = NULL;
    }
    if(keyPairQuery_api_version){
        keyValuePair_free(keyPairQuery_api_version);
        keyPairQuery_api_version = NULL;
    }

}

// Delete a course content group
//
// Deletes a course content group for the specified tenant.
//
void
CourseContentGroupsAPI_deleteCourseContentGroupAsync(apiClient_t *apiClient, char *tenantId, char *groupId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/LearningService/CourseContentGroups/{groupId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/LearningService/CourseContentGroups/{groupId}");


    // Path Params
    long sizeOfPathParams_groupId = strlen(groupId)+3 + strlen("{ groupId }");
    if(groupId == NULL) {
        goto end;
    }
    char* localVarToReplace_groupId = malloc(sizeOfPathParams_groupId);
    sprintf(localVarToReplace_groupId, "{%s}", "groupId");

    localVarPath = strReplace(localVarPath, localVarToReplace_groupId, groupId);



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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    list_freeList(localVarHeaderParameters);
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_groupId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
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
    if(keyQuery_tenantId){
        free(keyQuery_tenantId);
        keyQuery_tenantId = NULL;
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
    if(keyQuery_api_version){
        free(keyQuery_api_version);
        keyQuery_api_version = NULL;
    }
    if(keyPairQuery_api_version){
        keyValuePair_free(keyPairQuery_api_version);
        keyPairQuery_api_version = NULL;
    }

}

// Get course content group by ID
//
// Retrieves a specific course content group by its ID.
//
course_content_group_dto_t*
CourseContentGroupsAPI_getCourseContentGroupByIdAsync(apiClient_t *apiClient, char *groupId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/LearningService/CourseContentGroups/{groupId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/LearningService/CourseContentGroups/{groupId}");


    // Path Params
    long sizeOfPathParams_groupId = strlen(groupId)+3 + strlen("{ groupId }");
    if(groupId == NULL) {
        goto end;
    }
    char* localVarToReplace_groupId = malloc(sizeOfPathParams_groupId);
    sprintf(localVarToReplace_groupId, "{%s}", "groupId");

    localVarPath = strReplace(localVarPath, localVarToReplace_groupId, groupId);



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
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *CourseContentGroupsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    course_content_group_dto_t *elementToReturn = course_content_group_dto_parseFromJSON(CourseContentGroupsAPIlocalVarJSON);
    cJSON_Delete(CourseContentGroupsAPIlocalVarJSON);
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
    free(localVarToReplace_groupId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
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

// Get all course content groups
//
// Retrieves all course content groups for the specified tenant.
//
list_t*
CourseContentGroupsAPI_getCourseContentGroupsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/LearningService/CourseContentGroups")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/LearningService/CourseContentGroups");




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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    cJSON *CourseContentGroupsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    if(!cJSON_IsArray(CourseContentGroupsAPIlocalVarJSON)) {
        return 0;//nonprimitive container
    }
    list_t *elementToReturn = list_createList();
    cJSON *VarJSON;
    cJSON_ArrayForEach(VarJSON, CourseContentGroupsAPIlocalVarJSON)
    {
        if(!cJSON_IsObject(VarJSON))
        {
           // return 0;
        }
        char *localVarJSONToChar = cJSON_Print(VarJSON);
        list_addElement(elementToReturn , localVarJSONToChar);
    }

    cJSON_Delete( CourseContentGroupsAPIlocalVarJSON);
    cJSON_Delete( VarJSON);
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
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
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

// Get course content groups by course
//
// Retrieves all course content groups for a specific course.
//
list_t*
CourseContentGroupsAPI_getCourseContentGroupsByCourseAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/LearningService/Courses/{courseId}/ContentGroups")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/LearningService/Courses/{courseId}/ContentGroups");


    // Path Params
    long sizeOfPathParams_courseId = strlen(courseId)+3 + strlen("{ courseId }");
    if(courseId == NULL) {
        goto end;
    }
    char* localVarToReplace_courseId = malloc(sizeOfPathParams_courseId);
    sprintf(localVarToReplace_courseId, "{%s}", "courseId");

    localVarPath = strReplace(localVarPath, localVarToReplace_courseId, courseId);



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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    cJSON *CourseContentGroupsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    if(!cJSON_IsArray(CourseContentGroupsAPIlocalVarJSON)) {
        return 0;//nonprimitive container
    }
    list_t *elementToReturn = list_createList();
    cJSON *VarJSON;
    cJSON_ArrayForEach(VarJSON, CourseContentGroupsAPIlocalVarJSON)
    {
        if(!cJSON_IsObject(VarJSON))
        {
           // return 0;
        }
        char *localVarJSONToChar = cJSON_Print(VarJSON);
        list_addElement(elementToReturn , localVarJSONToChar);
    }

    cJSON_Delete( CourseContentGroupsAPIlocalVarJSON);
    cJSON_Delete( VarJSON);
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
    free(localVarToReplace_courseId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
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

// Get course content groups count by course
//
// Returns the count of course content groups for a specific course.
//
int*
CourseContentGroupsAPI_getCourseContentGroupsByCourseCountAsync(apiClient_t *apiClient, char *courseId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/LearningService/Courses/{courseId}/ContentGroups/Count")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/LearningService/Courses/{courseId}/ContentGroups/Count");


    // Path Params
    long sizeOfPathParams_courseId = strlen(courseId)+3 + strlen("{ courseId }");
    if(courseId == NULL) {
        goto end;
    }
    char* localVarToReplace_courseId = malloc(sizeOfPathParams_courseId);
    sprintf(localVarToReplace_courseId, "{%s}", "courseId");

    localVarPath = strReplace(localVarPath, localVarToReplace_courseId, courseId);



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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //primitive return type simple
    int* elementToReturn =  strdup((int*)apiClient->dataReceived);

    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    list_freeList(localVarHeaderParameters);
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_courseId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
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

// Get course content groups count
//
// Returns the count of course content groups for the specified tenant.
//
int*
CourseContentGroupsAPI_getCourseContentGroupsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/LearningService/CourseContentGroups/Count")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/LearningService/CourseContentGroups/Count");




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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //primitive return type simple
    int* elementToReturn =  strdup((int*)apiClient->dataReceived);

    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    list_freeList(localVarHeaderParameters);
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
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

// Update a course content group
//
// Updates an existing course content group for the specified tenant.
//
void
CourseContentGroupsAPI_updateCourseContentGroupAsync(apiClient_t *apiClient, char *tenantId, char *groupId, char *api_version, char *x_api_version, course_content_group_update_dto_t *course_content_group_update_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/LearningService/CourseContentGroups/{groupId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/LearningService/CourseContentGroups/{groupId}");


    // Path Params
    long sizeOfPathParams_groupId = strlen(groupId)+3 + strlen("{ groupId }");
    if(groupId == NULL) {
        goto end;
    }
    char* localVarToReplace_groupId = malloc(sizeOfPathParams_groupId);
    sprintf(localVarToReplace_groupId, "{%s}", "groupId");

    localVarPath = strReplace(localVarPath, localVarToReplace_groupId, groupId);



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
    cJSON *localVarSingleItemJSON_course_content_group_update_dto = NULL;
    if (course_content_group_update_dto != NULL)
    {
        //string
        localVarSingleItemJSON_course_content_group_update_dto = course_content_group_update_dto_convertToJSON(course_content_group_update_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_course_content_group_update_dto);
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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //No return type
end:
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
    free(localVarToReplace_groupId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
    if (localVarSingleItemJSON_course_content_group_update_dto) {
        cJSON_Delete(localVarSingleItemJSON_course_content_group_update_dto);
        localVarSingleItemJSON_course_content_group_update_dto = NULL;
    }
    free(localVarBodyParameters);
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
    if(keyQuery_tenantId){
        free(keyQuery_tenantId);
        keyQuery_tenantId = NULL;
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
    if(keyQuery_api_version){
        free(keyQuery_api_version);
        keyQuery_api_version = NULL;
    }
    if(keyPairQuery_api_version){
        keyValuePair_free(keyPairQuery_api_version);
        keyPairQuery_api_version = NULL;
    }

}

