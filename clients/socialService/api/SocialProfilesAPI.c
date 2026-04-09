#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "SocialProfilesAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Count Conversations
//
// Count conversations for a social profile.
//
int32_envelope_t*
SocialProfilesAPI_countConversationsAsync(apiClient_t *apiClient, char *socialProfileId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SocialService/SocialProfiles/{socialProfileId}/Conversations/Count")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SocialService/SocialProfiles/{socialProfileId}/Conversations/Count");


    // Path Params
    long sizeOfPathParams_socialProfileId = strlen(socialProfileId)+3 + strlen("{ socialProfileId }");
    if(socialProfileId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialProfileId = malloc(sizeOfPathParams_socialProfileId);
    sprintf(localVarToReplace_socialProfileId, "{%s}", "socialProfileId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialProfileId, socialProfileId);
    if(socialProfileId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialProfileId = malloc(sizeOfPathParams_socialProfileId);
    sprintf(localVarToReplace_socialProfileId, "{%s}", "socialProfileId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialProfileId, socialProfileId);



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
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *SocialProfilesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    int32_envelope_t *elementToReturn = int32_envelope_parseFromJSON(SocialProfilesAPIlocalVarJSON);
    cJSON_Delete(SocialProfilesAPIlocalVarJSON);
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
    free(localVarToReplace_socialProfileId);
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

// Count Followed Profiles
//
// Count followed profiles for a social profile.
//
int32_envelope_t*
SocialProfilesAPI_countFollowedProfilesAsync(apiClient_t *apiClient, char *socialProfileId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SocialService/SocialProfiles/{socialProfileId}/Follows/Profiles/Count")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SocialService/SocialProfiles/{socialProfileId}/Follows/Profiles/Count");


    // Path Params
    long sizeOfPathParams_socialProfileId = strlen(socialProfileId)+3 + strlen("{ socialProfileId }");
    if(socialProfileId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialProfileId = malloc(sizeOfPathParams_socialProfileId);
    sprintf(localVarToReplace_socialProfileId, "{%s}", "socialProfileId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialProfileId, socialProfileId);
    if(socialProfileId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialProfileId = malloc(sizeOfPathParams_socialProfileId);
    sprintf(localVarToReplace_socialProfileId, "{%s}", "socialProfileId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialProfileId, socialProfileId);



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
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *SocialProfilesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    int32_envelope_t *elementToReturn = int32_envelope_parseFromJSON(SocialProfilesAPIlocalVarJSON);
    cJSON_Delete(SocialProfilesAPIlocalVarJSON);
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
    free(localVarToReplace_socialProfileId);
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

// Count Follower Profiles
//
// Count follower profiles for a social profile.
//
int32_envelope_t*
SocialProfilesAPI_countFollowerProfilesAsync(apiClient_t *apiClient, char *socialProfileId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SocialService/SocialProfiles/{socialProfileId}/Followers/Profiles/Count")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SocialService/SocialProfiles/{socialProfileId}/Followers/Profiles/Count");


    // Path Params
    long sizeOfPathParams_socialProfileId = strlen(socialProfileId)+3 + strlen("{ socialProfileId }");
    if(socialProfileId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialProfileId = malloc(sizeOfPathParams_socialProfileId);
    sprintf(localVarToReplace_socialProfileId, "{%s}", "socialProfileId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialProfileId, socialProfileId);
    if(socialProfileId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialProfileId = malloc(sizeOfPathParams_socialProfileId);
    sprintf(localVarToReplace_socialProfileId, "{%s}", "socialProfileId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialProfileId, socialProfileId);



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
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *SocialProfilesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    int32_envelope_t *elementToReturn = int32_envelope_parseFromJSON(SocialProfilesAPIlocalVarJSON);
    cJSON_Delete(SocialProfilesAPIlocalVarJSON);
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
    free(localVarToReplace_socialProfileId);
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

// Count Followers
//
// Count followers for a social profile.
//
int32_envelope_t*
SocialProfilesAPI_countFollowersAsync(apiClient_t *apiClient, char *socialProfileId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SocialService/SocialProfiles/{socialProfileId}/Followers/Count")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SocialService/SocialProfiles/{socialProfileId}/Followers/Count");


    // Path Params
    long sizeOfPathParams_socialProfileId = strlen(socialProfileId)+3 + strlen("{ socialProfileId }");
    if(socialProfileId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialProfileId = malloc(sizeOfPathParams_socialProfileId);
    sprintf(localVarToReplace_socialProfileId, "{%s}", "socialProfileId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialProfileId, socialProfileId);
    if(socialProfileId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialProfileId = malloc(sizeOfPathParams_socialProfileId);
    sprintf(localVarToReplace_socialProfileId, "{%s}", "socialProfileId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialProfileId, socialProfileId);



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
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *SocialProfilesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    int32_envelope_t *elementToReturn = int32_envelope_parseFromJSON(SocialProfilesAPIlocalVarJSON);
    cJSON_Delete(SocialProfilesAPIlocalVarJSON);
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
    free(localVarToReplace_socialProfileId);
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

// Count Follows
//
// Count follows for a social profile.
//
int32_envelope_t*
SocialProfilesAPI_countFollowsAsync(apiClient_t *apiClient, char *socialProfileId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SocialService/SocialProfiles/{socialProfileId}/Follows/Count")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SocialService/SocialProfiles/{socialProfileId}/Follows/Count");


    // Path Params
    long sizeOfPathParams_socialProfileId = strlen(socialProfileId)+3 + strlen("{ socialProfileId }");
    if(socialProfileId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialProfileId = malloc(sizeOfPathParams_socialProfileId);
    sprintf(localVarToReplace_socialProfileId, "{%s}", "socialProfileId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialProfileId, socialProfileId);
    if(socialProfileId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialProfileId = malloc(sizeOfPathParams_socialProfileId);
    sprintf(localVarToReplace_socialProfileId, "{%s}", "socialProfileId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialProfileId, socialProfileId);



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
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *SocialProfilesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    int32_envelope_t *elementToReturn = int32_envelope_parseFromJSON(SocialProfilesAPIlocalVarJSON);
    cJSON_Delete(SocialProfilesAPIlocalVarJSON);
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
    free(localVarToReplace_socialProfileId);
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

// Count Messages
//
// Count messages for a conversation.
//
int32_envelope_t*
SocialProfilesAPI_countMessagesAsync(apiClient_t *apiClient, char *conversationId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SocialService/SocialProfiles/{conversationId}/Messages/Count")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SocialService/SocialProfiles/{conversationId}/Messages/Count");


    // Path Params
    long sizeOfPathParams_conversationId = strlen(conversationId)+3 + strlen("{ conversationId }");
    if(conversationId == NULL) {
        goto end;
    }
    char* localVarToReplace_conversationId = malloc(sizeOfPathParams_conversationId);
    sprintf(localVarToReplace_conversationId, "{%s}", "conversationId");

    localVarPath = strReplace(localVarPath, localVarToReplace_conversationId, conversationId);
    if(conversationId == NULL) {
        goto end;
    }
    char* localVarToReplace_conversationId = malloc(sizeOfPathParams_conversationId);
    sprintf(localVarToReplace_conversationId, "{%s}", "conversationId");

    localVarPath = strReplace(localVarPath, localVarToReplace_conversationId, conversationId);



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
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *SocialProfilesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    int32_envelope_t *elementToReturn = int32_envelope_parseFromJSON(SocialProfilesAPIlocalVarJSON);
    cJSON_Delete(SocialProfilesAPIlocalVarJSON);
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
    free(localVarToReplace_conversationId);
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

// Count Notifications
//
// Count notifications for a social profile.
//
int32_envelope_t*
SocialProfilesAPI_countNotificationsAsync(apiClient_t *apiClient, char *socialProfileId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SocialService/SocialProfiles/{socialProfileId}/Notifications/Count")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SocialService/SocialProfiles/{socialProfileId}/Notifications/Count");


    // Path Params
    long sizeOfPathParams_socialProfileId = strlen(socialProfileId)+3 + strlen("{ socialProfileId }");
    if(socialProfileId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialProfileId = malloc(sizeOfPathParams_socialProfileId);
    sprintf(localVarToReplace_socialProfileId, "{%s}", "socialProfileId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialProfileId, socialProfileId);
    if(socialProfileId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialProfileId = malloc(sizeOfPathParams_socialProfileId);
    sprintf(localVarToReplace_socialProfileId, "{%s}", "socialProfileId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialProfileId, socialProfileId);



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
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *SocialProfilesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    int32_envelope_t *elementToReturn = int32_envelope_parseFromJSON(SocialProfilesAPIlocalVarJSON);
    cJSON_Delete(SocialProfilesAPIlocalVarJSON);
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
    free(localVarToReplace_socialProfileId);
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

// Count Social Profiles
//
// Count social profiles.
//
int32_envelope_t*
SocialProfilesAPI_countSocialProfilesAsync(apiClient_t *apiClient, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SocialService/SocialProfiles/Count")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SocialService/SocialProfiles/Count");




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
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *SocialProfilesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    int32_envelope_t *elementToReturn = int32_envelope_parseFromJSON(SocialProfilesAPIlocalVarJSON);
    cJSON_Delete(SocialProfilesAPIlocalVarJSON);
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

// Create Conversation
//
// Create a new conversation.
//
empty_envelope_t*
SocialProfilesAPI_createConversationAsync(apiClient_t *apiClient, char *socialProfileId, char *api_version, char *x_api_version, conversation_create_dto_t *conversation_create_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SocialService/SocialProfiles/{socialProfileId}/Conversations")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SocialService/SocialProfiles/{socialProfileId}/Conversations");


    // Path Params
    long sizeOfPathParams_socialProfileId = strlen(socialProfileId)+3 + strlen("{ socialProfileId }");
    if(socialProfileId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialProfileId = malloc(sizeOfPathParams_socialProfileId);
    sprintf(localVarToReplace_socialProfileId, "{%s}", "socialProfileId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialProfileId, socialProfileId);
    if(socialProfileId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialProfileId = malloc(sizeOfPathParams_socialProfileId);
    sprintf(localVarToReplace_socialProfileId, "{%s}", "socialProfileId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialProfileId, socialProfileId);



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

    // Body Param
    cJSON *localVarSingleItemJSON_conversation_create_dto = NULL;
    if (conversation_create_dto != NULL)
    {
        //string
        localVarSingleItemJSON_conversation_create_dto = conversation_create_dto_convertToJSON(conversation_create_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_conversation_create_dto);
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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *SocialProfilesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(SocialProfilesAPIlocalVarJSON);
    cJSON_Delete(SocialProfilesAPIlocalVarJSON);
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
    free(localVarToReplace_socialProfileId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
    if (localVarSingleItemJSON_conversation_create_dto) {
        cJSON_Delete(localVarSingleItemJSON_conversation_create_dto);
        localVarSingleItemJSON_conversation_create_dto = NULL;
    }
    free(localVarBodyParameters);
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

// Create Message
//
// Create a new message.
//
empty_envelope_t*
SocialProfilesAPI_createMessageAsync(apiClient_t *apiClient, char *socialProfileId, char *conversationId, char *api_version, char *x_api_version, private_message_create_dto_t *private_message_create_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SocialService/SocialProfiles/{conversationId}/Messages")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SocialService/SocialProfiles/{conversationId}/Messages");


    // Path Params
    long sizeOfPathParams_conversationId = strlen(conversationId)+3 + strlen("{ conversationId }");
    if(conversationId == NULL) {
        goto end;
    }
    char* localVarToReplace_conversationId = malloc(sizeOfPathParams_conversationId);
    sprintf(localVarToReplace_conversationId, "{%s}", "conversationId");

    localVarPath = strReplace(localVarPath, localVarToReplace_conversationId, conversationId);
    if(conversationId == NULL) {
        goto end;
    }
    char* localVarToReplace_conversationId = malloc(sizeOfPathParams_conversationId);
    sprintf(localVarToReplace_conversationId, "{%s}", "conversationId");

    localVarPath = strReplace(localVarPath, localVarToReplace_conversationId, conversationId);



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
    cJSON *localVarSingleItemJSON_private_message_create_dto = NULL;
    if (private_message_create_dto != NULL)
    {
        //string
        localVarSingleItemJSON_private_message_create_dto = private_message_create_dto_convertToJSON(private_message_create_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_private_message_create_dto);
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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *SocialProfilesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(SocialProfilesAPIlocalVarJSON);
    cJSON_Delete(SocialProfilesAPIlocalVarJSON);
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
    free(localVarToReplace_conversationId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
    if (localVarSingleItemJSON_private_message_create_dto) {
        cJSON_Delete(localVarSingleItemJSON_private_message_create_dto);
        localVarSingleItemJSON_private_message_create_dto = NULL;
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

// Delete Message
//
// Delete a message.
//
empty_envelope_t*
SocialProfilesAPI_deleteMessageAsync(apiClient_t *apiClient, char *socialProfileId, char *conversationId, char *messageId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SocialService/SocialProfiles/{conversationId}/Messages/{messageId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SocialService/SocialProfiles/{conversationId}/Messages/{messageId}");


    // Path Params
    long sizeOfPathParams_conversationId = strlen(conversationId)+3 + strlen(messageId)+3 + strlen("{ conversationId }");
    if(conversationId == NULL) {
        goto end;
    }
    char* localVarToReplace_conversationId = malloc(sizeOfPathParams_conversationId);
    sprintf(localVarToReplace_conversationId, "{%s}", "conversationId");

    localVarPath = strReplace(localVarPath, localVarToReplace_conversationId, conversationId);
    if(conversationId == NULL) {
        goto end;
    }
    char* localVarToReplace_conversationId = malloc(sizeOfPathParams_conversationId);
    sprintf(localVarToReplace_conversationId, "{%s}", "conversationId");

    localVarPath = strReplace(localVarPath, localVarToReplace_conversationId, conversationId);

    // Path Params
    long sizeOfPathParams_messageId = strlen(conversationId)+3 + strlen(messageId)+3 + strlen("{ messageId }");
    if(messageId == NULL) {
        goto end;
    }
    char* localVarToReplace_messageId = malloc(sizeOfPathParams_messageId);
    sprintf(localVarToReplace_messageId, "{%s}", "messageId");

    localVarPath = strReplace(localVarPath, localVarToReplace_messageId, messageId);
    if(messageId == NULL) {
        goto end;
    }
    char* localVarToReplace_messageId = malloc(sizeOfPathParams_messageId);
    sprintf(localVarToReplace_messageId, "{%s}", "messageId");

    localVarPath = strReplace(localVarPath, localVarToReplace_messageId, messageId);



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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *SocialProfilesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(SocialProfilesAPIlocalVarJSON);
    cJSON_Delete(SocialProfilesAPIlocalVarJSON);
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
    free(localVarToReplace_conversationId);
    free(localVarToReplace_messageId);
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

// Follow
//
// Follow a social profile.
//
empty_envelope_t*
SocialProfilesAPI_followAsync(apiClient_t *apiClient, char *socialProfileId, char *followedSocialProfileId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SocialService/SocialProfiles/{socialProfileId}/Follows/{followedSocialProfileId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SocialService/SocialProfiles/{socialProfileId}/Follows/{followedSocialProfileId}");


    // Path Params
    long sizeOfPathParams_socialProfileId = strlen(socialProfileId)+3 + strlen(followedSocialProfileId)+3 + strlen("{ socialProfileId }");
    if(socialProfileId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialProfileId = malloc(sizeOfPathParams_socialProfileId);
    sprintf(localVarToReplace_socialProfileId, "{%s}", "socialProfileId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialProfileId, socialProfileId);
    if(socialProfileId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialProfileId = malloc(sizeOfPathParams_socialProfileId);
    sprintf(localVarToReplace_socialProfileId, "{%s}", "socialProfileId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialProfileId, socialProfileId);

    // Path Params
    long sizeOfPathParams_followedSocialProfileId = strlen(socialProfileId)+3 + strlen(followedSocialProfileId)+3 + strlen("{ followedSocialProfileId }");
    if(followedSocialProfileId == NULL) {
        goto end;
    }
    char* localVarToReplace_followedSocialProfileId = malloc(sizeOfPathParams_followedSocialProfileId);
    sprintf(localVarToReplace_followedSocialProfileId, "{%s}", "followedSocialProfileId");

    localVarPath = strReplace(localVarPath, localVarToReplace_followedSocialProfileId, followedSocialProfileId);
    if(followedSocialProfileId == NULL) {
        goto end;
    }
    char* localVarToReplace_followedSocialProfileId = malloc(sizeOfPathParams_followedSocialProfileId);
    sprintf(localVarToReplace_followedSocialProfileId, "{%s}", "followedSocialProfileId");

    localVarPath = strReplace(localVarPath, localVarToReplace_followedSocialProfileId, followedSocialProfileId);



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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *SocialProfilesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(SocialProfilesAPIlocalVarJSON);
    cJSON_Delete(SocialProfilesAPIlocalVarJSON);
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
    free(localVarToReplace_socialProfileId);
    free(localVarToReplace_followedSocialProfileId);
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

// Check if Follow Exists
//
// Check if a follow record exists between two social profiles.
//
boolean_envelope_t*
SocialProfilesAPI_followExistsAsync(apiClient_t *apiClient, char *socialProfileId, char *followedSocialProfileId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SocialService/SocialProfiles/{socialProfileId}/Follows/{followedSocialProfileId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SocialService/SocialProfiles/{socialProfileId}/Follows/{followedSocialProfileId}");


    // Path Params
    long sizeOfPathParams_socialProfileId = strlen(socialProfileId)+3 + strlen(followedSocialProfileId)+3 + strlen("{ socialProfileId }");
    if(socialProfileId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialProfileId = malloc(sizeOfPathParams_socialProfileId);
    sprintf(localVarToReplace_socialProfileId, "{%s}", "socialProfileId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialProfileId, socialProfileId);
    if(socialProfileId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialProfileId = malloc(sizeOfPathParams_socialProfileId);
    sprintf(localVarToReplace_socialProfileId, "{%s}", "socialProfileId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialProfileId, socialProfileId);

    // Path Params
    long sizeOfPathParams_followedSocialProfileId = strlen(socialProfileId)+3 + strlen(followedSocialProfileId)+3 + strlen("{ followedSocialProfileId }");
    if(followedSocialProfileId == NULL) {
        goto end;
    }
    char* localVarToReplace_followedSocialProfileId = malloc(sizeOfPathParams_followedSocialProfileId);
    sprintf(localVarToReplace_followedSocialProfileId, "{%s}", "followedSocialProfileId");

    localVarPath = strReplace(localVarPath, localVarToReplace_followedSocialProfileId, followedSocialProfileId);
    if(followedSocialProfileId == NULL) {
        goto end;
    }
    char* localVarToReplace_followedSocialProfileId = malloc(sizeOfPathParams_followedSocialProfileId);
    sprintf(localVarToReplace_followedSocialProfileId, "{%s}", "followedSocialProfileId");

    localVarPath = strReplace(localVarPath, localVarToReplace_followedSocialProfileId, followedSocialProfileId);



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
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *SocialProfilesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    boolean_envelope_t *elementToReturn = boolean_envelope_parseFromJSON(SocialProfilesAPIlocalVarJSON);
    cJSON_Delete(SocialProfilesAPIlocalVarJSON);
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
    free(localVarToReplace_socialProfileId);
    free(localVarToReplace_followedSocialProfileId);
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

// Get Conversations
//
// Get a list of conversations for a social profile.
//
conversation_dto_list_envelope_t*
SocialProfilesAPI_getConversationsAsync(apiClient_t *apiClient, char *socialProfileId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SocialService/SocialProfiles/{socialProfileId}/Conversations")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SocialService/SocialProfiles/{socialProfileId}/Conversations");


    // Path Params
    long sizeOfPathParams_socialProfileId = strlen(socialProfileId)+3 + strlen("{ socialProfileId }");
    if(socialProfileId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialProfileId = malloc(sizeOfPathParams_socialProfileId);
    sprintf(localVarToReplace_socialProfileId, "{%s}", "socialProfileId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialProfileId, socialProfileId);
    if(socialProfileId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialProfileId = malloc(sizeOfPathParams_socialProfileId);
    sprintf(localVarToReplace_socialProfileId, "{%s}", "socialProfileId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialProfileId, socialProfileId);



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
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *SocialProfilesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    conversation_dto_list_envelope_t *elementToReturn = conversation_dto_list_envelope_parseFromJSON(SocialProfilesAPIlocalVarJSON);
    cJSON_Delete(SocialProfilesAPIlocalVarJSON);
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
    free(localVarToReplace_socialProfileId);
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

// Get Followed Profiles
//
// Get a list of followed profiles for a social profile.
//
social_profile_dto_list_envelope_t*
SocialProfilesAPI_getFollowedProfilesAsync(apiClient_t *apiClient, char *socialProfileId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SocialService/SocialProfiles/{socialProfileId}/Follows/Profiles")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SocialService/SocialProfiles/{socialProfileId}/Follows/Profiles");


    // Path Params
    long sizeOfPathParams_socialProfileId = strlen(socialProfileId)+3 + strlen("{ socialProfileId }");
    if(socialProfileId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialProfileId = malloc(sizeOfPathParams_socialProfileId);
    sprintf(localVarToReplace_socialProfileId, "{%s}", "socialProfileId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialProfileId, socialProfileId);
    if(socialProfileId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialProfileId = malloc(sizeOfPathParams_socialProfileId);
    sprintf(localVarToReplace_socialProfileId, "{%s}", "socialProfileId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialProfileId, socialProfileId);



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
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *SocialProfilesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    social_profile_dto_list_envelope_t *elementToReturn = social_profile_dto_list_envelope_parseFromJSON(SocialProfilesAPIlocalVarJSON);
    cJSON_Delete(SocialProfilesAPIlocalVarJSON);
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
    free(localVarToReplace_socialProfileId);
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

// Get Follower Profiles
//
// Get a list of follower profiles for a social profile.
//
social_profile_dto_list_envelope_t*
SocialProfilesAPI_getFollowerProfilesAsync(apiClient_t *apiClient, char *socialProfileId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SocialService/SocialProfiles/{socialProfileId}/Followers/Profiles")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SocialService/SocialProfiles/{socialProfileId}/Followers/Profiles");


    // Path Params
    long sizeOfPathParams_socialProfileId = strlen(socialProfileId)+3 + strlen("{ socialProfileId }");
    if(socialProfileId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialProfileId = malloc(sizeOfPathParams_socialProfileId);
    sprintf(localVarToReplace_socialProfileId, "{%s}", "socialProfileId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialProfileId, socialProfileId);
    if(socialProfileId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialProfileId = malloc(sizeOfPathParams_socialProfileId);
    sprintf(localVarToReplace_socialProfileId, "{%s}", "socialProfileId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialProfileId, socialProfileId);



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
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *SocialProfilesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    social_profile_dto_list_envelope_t *elementToReturn = social_profile_dto_list_envelope_parseFromJSON(SocialProfilesAPIlocalVarJSON);
    cJSON_Delete(SocialProfilesAPIlocalVarJSON);
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
    free(localVarToReplace_socialProfileId);
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

// Get Followers
//
// Get a list of followers for a social profile.
//
follow_record_dto_list_envelope_t*
SocialProfilesAPI_getFollowersAsync(apiClient_t *apiClient, char *socialProfileId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SocialService/SocialProfiles/{socialProfileId}/Followers")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SocialService/SocialProfiles/{socialProfileId}/Followers");


    // Path Params
    long sizeOfPathParams_socialProfileId = strlen(socialProfileId)+3 + strlen("{ socialProfileId }");
    if(socialProfileId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialProfileId = malloc(sizeOfPathParams_socialProfileId);
    sprintf(localVarToReplace_socialProfileId, "{%s}", "socialProfileId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialProfileId, socialProfileId);
    if(socialProfileId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialProfileId = malloc(sizeOfPathParams_socialProfileId);
    sprintf(localVarToReplace_socialProfileId, "{%s}", "socialProfileId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialProfileId, socialProfileId);



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
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *SocialProfilesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    follow_record_dto_list_envelope_t *elementToReturn = follow_record_dto_list_envelope_parseFromJSON(SocialProfilesAPIlocalVarJSON);
    cJSON_Delete(SocialProfilesAPIlocalVarJSON);
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
    free(localVarToReplace_socialProfileId);
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

// Get Follows
//
// Get a list of follows for a social profile.
//
follow_record_dto_list_envelope_t*
SocialProfilesAPI_getFollowsAsync(apiClient_t *apiClient, char *socialProfileId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SocialService/SocialProfiles/{socialProfileId}/Follows")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SocialService/SocialProfiles/{socialProfileId}/Follows");


    // Path Params
    long sizeOfPathParams_socialProfileId = strlen(socialProfileId)+3 + strlen("{ socialProfileId }");
    if(socialProfileId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialProfileId = malloc(sizeOfPathParams_socialProfileId);
    sprintf(localVarToReplace_socialProfileId, "{%s}", "socialProfileId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialProfileId, socialProfileId);
    if(socialProfileId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialProfileId = malloc(sizeOfPathParams_socialProfileId);
    sprintf(localVarToReplace_socialProfileId, "{%s}", "socialProfileId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialProfileId, socialProfileId);



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
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *SocialProfilesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    follow_record_dto_list_envelope_t *elementToReturn = follow_record_dto_list_envelope_parseFromJSON(SocialProfilesAPIlocalVarJSON);
    cJSON_Delete(SocialProfilesAPIlocalVarJSON);
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
    free(localVarToReplace_socialProfileId);
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

// Get Messages
//
// Get a list of messages for a conversation.
//
private_message_dto_list_envelope_t*
SocialProfilesAPI_getMessagesAsync(apiClient_t *apiClient, char *conversationId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SocialService/SocialProfiles/{conversationId}/Messages")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SocialService/SocialProfiles/{conversationId}/Messages");


    // Path Params
    long sizeOfPathParams_conversationId = strlen(conversationId)+3 + strlen("{ conversationId }");
    if(conversationId == NULL) {
        goto end;
    }
    char* localVarToReplace_conversationId = malloc(sizeOfPathParams_conversationId);
    sprintf(localVarToReplace_conversationId, "{%s}", "conversationId");

    localVarPath = strReplace(localVarPath, localVarToReplace_conversationId, conversationId);
    if(conversationId == NULL) {
        goto end;
    }
    char* localVarToReplace_conversationId = malloc(sizeOfPathParams_conversationId);
    sprintf(localVarToReplace_conversationId, "{%s}", "conversationId");

    localVarPath = strReplace(localVarPath, localVarToReplace_conversationId, conversationId);



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
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *SocialProfilesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    private_message_dto_list_envelope_t *elementToReturn = private_message_dto_list_envelope_parseFromJSON(SocialProfilesAPIlocalVarJSON);
    cJSON_Delete(SocialProfilesAPIlocalVarJSON);
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
    free(localVarToReplace_conversationId);
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

// Get Notifications
//
// Get a list of notifications for a social profile.
//
notification_dto_list_envelope_t*
SocialProfilesAPI_getNotificationsAsync(apiClient_t *apiClient, char *socialProfileId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SocialService/SocialProfiles/{socialProfileId}/Notifications")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SocialService/SocialProfiles/{socialProfileId}/Notifications");


    // Path Params
    long sizeOfPathParams_socialProfileId = strlen(socialProfileId)+3 + strlen("{ socialProfileId }");
    if(socialProfileId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialProfileId = malloc(sizeOfPathParams_socialProfileId);
    sprintf(localVarToReplace_socialProfileId, "{%s}", "socialProfileId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialProfileId, socialProfileId);
    if(socialProfileId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialProfileId = malloc(sizeOfPathParams_socialProfileId);
    sprintf(localVarToReplace_socialProfileId, "{%s}", "socialProfileId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialProfileId, socialProfileId);



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
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *SocialProfilesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    notification_dto_list_envelope_t *elementToReturn = notification_dto_list_envelope_parseFromJSON(SocialProfilesAPIlocalVarJSON);
    cJSON_Delete(SocialProfilesAPIlocalVarJSON);
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
    free(localVarToReplace_socialProfileId);
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

// Get Social Profile
//
// Get a social profile by ID.
//
social_profile_dto_envelope_t*
SocialProfilesAPI_getSocialProfileAsync(apiClient_t *apiClient, char *socialProfileId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SocialService/SocialProfiles/{socialProfileId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SocialService/SocialProfiles/{socialProfileId}");


    // Path Params
    long sizeOfPathParams_socialProfileId = strlen(socialProfileId)+3 + strlen("{ socialProfileId }");
    if(socialProfileId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialProfileId = malloc(sizeOfPathParams_socialProfileId);
    sprintf(localVarToReplace_socialProfileId, "{%s}", "socialProfileId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialProfileId, socialProfileId);
    if(socialProfileId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialProfileId = malloc(sizeOfPathParams_socialProfileId);
    sprintf(localVarToReplace_socialProfileId, "{%s}", "socialProfileId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialProfileId, socialProfileId);



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
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *SocialProfilesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    social_profile_dto_envelope_t *elementToReturn = social_profile_dto_envelope_parseFromJSON(SocialProfilesAPIlocalVarJSON);
    cJSON_Delete(SocialProfilesAPIlocalVarJSON);
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
    free(localVarToReplace_socialProfileId);
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

// Get Social Profiles
//
// Get a list of social profiles.
//
social_profile_dto_list_envelope_t*
SocialProfilesAPI_getSocialProfilesAsync(apiClient_t *apiClient, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SocialService/SocialProfiles")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SocialService/SocialProfiles");




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
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *SocialProfilesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    social_profile_dto_list_envelope_t *elementToReturn = social_profile_dto_list_envelope_parseFromJSON(SocialProfilesAPIlocalVarJSON);
    cJSON_Delete(SocialProfilesAPIlocalVarJSON);
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

// Unfollow
//
// Unfollow a social profile.
//
empty_envelope_t*
SocialProfilesAPI_unfollowAsync(apiClient_t *apiClient, char *socialProfileId, char *followedSocialProfileId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SocialService/SocialProfiles/{socialProfileId}/Follows/{followedSocialProfileId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SocialService/SocialProfiles/{socialProfileId}/Follows/{followedSocialProfileId}");


    // Path Params
    long sizeOfPathParams_socialProfileId = strlen(socialProfileId)+3 + strlen(followedSocialProfileId)+3 + strlen("{ socialProfileId }");
    if(socialProfileId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialProfileId = malloc(sizeOfPathParams_socialProfileId);
    sprintf(localVarToReplace_socialProfileId, "{%s}", "socialProfileId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialProfileId, socialProfileId);
    if(socialProfileId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialProfileId = malloc(sizeOfPathParams_socialProfileId);
    sprintf(localVarToReplace_socialProfileId, "{%s}", "socialProfileId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialProfileId, socialProfileId);

    // Path Params
    long sizeOfPathParams_followedSocialProfileId = strlen(socialProfileId)+3 + strlen(followedSocialProfileId)+3 + strlen("{ followedSocialProfileId }");
    if(followedSocialProfileId == NULL) {
        goto end;
    }
    char* localVarToReplace_followedSocialProfileId = malloc(sizeOfPathParams_followedSocialProfileId);
    sprintf(localVarToReplace_followedSocialProfileId, "{%s}", "followedSocialProfileId");

    localVarPath = strReplace(localVarPath, localVarToReplace_followedSocialProfileId, followedSocialProfileId);
    if(followedSocialProfileId == NULL) {
        goto end;
    }
    char* localVarToReplace_followedSocialProfileId = malloc(sizeOfPathParams_followedSocialProfileId);
    sprintf(localVarToReplace_followedSocialProfileId, "{%s}", "followedSocialProfileId");

    localVarPath = strReplace(localVarPath, localVarToReplace_followedSocialProfileId, followedSocialProfileId);



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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *SocialProfilesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(SocialProfilesAPIlocalVarJSON);
    cJSON_Delete(SocialProfilesAPIlocalVarJSON);
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
    free(localVarToReplace_socialProfileId);
    free(localVarToReplace_followedSocialProfileId);
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

// Update Message
//
// Update a message.
//
empty_envelope_t*
SocialProfilesAPI_updateMessageAsync(apiClient_t *apiClient, char *socialProfileId, char *conversationId, char *messageId, char *api_version, char *x_api_version, private_message_update_dto_t *private_message_update_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SocialService/SocialProfiles/{conversationId}/Messages/{messageId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SocialService/SocialProfiles/{conversationId}/Messages/{messageId}");


    // Path Params
    long sizeOfPathParams_conversationId = strlen(conversationId)+3 + strlen(messageId)+3 + strlen("{ conversationId }");
    if(conversationId == NULL) {
        goto end;
    }
    char* localVarToReplace_conversationId = malloc(sizeOfPathParams_conversationId);
    sprintf(localVarToReplace_conversationId, "{%s}", "conversationId");

    localVarPath = strReplace(localVarPath, localVarToReplace_conversationId, conversationId);
    if(conversationId == NULL) {
        goto end;
    }
    char* localVarToReplace_conversationId = malloc(sizeOfPathParams_conversationId);
    sprintf(localVarToReplace_conversationId, "{%s}", "conversationId");

    localVarPath = strReplace(localVarPath, localVarToReplace_conversationId, conversationId);

    // Path Params
    long sizeOfPathParams_messageId = strlen(conversationId)+3 + strlen(messageId)+3 + strlen("{ messageId }");
    if(messageId == NULL) {
        goto end;
    }
    char* localVarToReplace_messageId = malloc(sizeOfPathParams_messageId);
    sprintf(localVarToReplace_messageId, "{%s}", "messageId");

    localVarPath = strReplace(localVarPath, localVarToReplace_messageId, messageId);
    if(messageId == NULL) {
        goto end;
    }
    char* localVarToReplace_messageId = malloc(sizeOfPathParams_messageId);
    sprintf(localVarToReplace_messageId, "{%s}", "messageId");

    localVarPath = strReplace(localVarPath, localVarToReplace_messageId, messageId);



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
    cJSON *localVarSingleItemJSON_private_message_update_dto = NULL;
    if (private_message_update_dto != NULL)
    {
        //string
        localVarSingleItemJSON_private_message_update_dto = private_message_update_dto_convertToJSON(private_message_update_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_private_message_update_dto);
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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *SocialProfilesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(SocialProfilesAPIlocalVarJSON);
    cJSON_Delete(SocialProfilesAPIlocalVarJSON);
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
    free(localVarToReplace_conversationId);
    free(localVarToReplace_messageId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
    if (localVarSingleItemJSON_private_message_update_dto) {
        cJSON_Delete(localVarSingleItemJSON_private_message_update_dto);
        localVarSingleItemJSON_private_message_update_dto = NULL;
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

