#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "SocialFeedsAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Create a social feed post
//
// Creates a new post in a specific social feed.
//
social_feed_post_dto_envelope_t*
SocialFeedsAPI_createFeedPostAsync(apiClient_t *apiClient, char *socialProfileId, char *socialFeedId, char *api_version, char *x_api_version, social_feed_post_create_dto_t *social_feed_post_create_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SocialService/SocialFeeds/{socialFeedId}/Posts")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SocialService/SocialFeeds/{socialFeedId}/Posts");


    // Path Params
    long sizeOfPathParams_socialFeedId = strlen(socialFeedId)+3 + strlen("{ socialFeedId }");
    if(socialFeedId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialFeedId = malloc(sizeOfPathParams_socialFeedId);
    sprintf(localVarToReplace_socialFeedId, "{%s}", "socialFeedId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialFeedId, socialFeedId);
    if(socialFeedId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialFeedId = malloc(sizeOfPathParams_socialFeedId);
    sprintf(localVarToReplace_socialFeedId, "{%s}", "socialFeedId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialFeedId, socialFeedId);



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
    cJSON *localVarSingleItemJSON_social_feed_post_create_dto = NULL;
    if (social_feed_post_create_dto != NULL)
    {
        //string
        localVarSingleItemJSON_social_feed_post_create_dto = social_feed_post_create_dto_convertToJSON(social_feed_post_create_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_social_feed_post_create_dto);
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
    //if (apiClient->response_code == 201) {
    //    printf("%s\n","Created");
    //}
    //nonprimitive not container
    cJSON *SocialFeedsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    social_feed_post_dto_envelope_t *elementToReturn = social_feed_post_dto_envelope_parseFromJSON(SocialFeedsAPIlocalVarJSON);
    cJSON_Delete(SocialFeedsAPIlocalVarJSON);
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
    free(localVarToReplace_socialFeedId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
    if (localVarSingleItemJSON_social_feed_post_create_dto) {
        cJSON_Delete(localVarSingleItemJSON_social_feed_post_create_dto);
        localVarSingleItemJSON_social_feed_post_create_dto = NULL;
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

// Delete a social feed post
//
// Deletes a post from a specific social feed.
//
empty_envelope_t*
SocialFeedsAPI_deleteFeedPostAsync(apiClient_t *apiClient, char *socialProfileId, char *socialFeedId, char *feedPostId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SocialService/SocialFeeds/{socialFeedId}/Posts/{feedPostId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SocialService/SocialFeeds/{socialFeedId}/Posts/{feedPostId}");


    // Path Params
    long sizeOfPathParams_socialFeedId = strlen(socialFeedId)+3 + strlen(feedPostId)+3 + strlen("{ socialFeedId }");
    if(socialFeedId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialFeedId = malloc(sizeOfPathParams_socialFeedId);
    sprintf(localVarToReplace_socialFeedId, "{%s}", "socialFeedId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialFeedId, socialFeedId);
    if(socialFeedId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialFeedId = malloc(sizeOfPathParams_socialFeedId);
    sprintf(localVarToReplace_socialFeedId, "{%s}", "socialFeedId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialFeedId, socialFeedId);

    // Path Params
    long sizeOfPathParams_feedPostId = strlen(socialFeedId)+3 + strlen(feedPostId)+3 + strlen("{ feedPostId }");
    if(feedPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_feedPostId = malloc(sizeOfPathParams_feedPostId);
    sprintf(localVarToReplace_feedPostId, "{%s}", "feedPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_feedPostId, feedPostId);
    if(feedPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_feedPostId = malloc(sizeOfPathParams_feedPostId);
    sprintf(localVarToReplace_feedPostId, "{%s}", "feedPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_feedPostId, feedPostId);



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
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","No Content");
    //}
    //nonprimitive not container
    cJSON *SocialFeedsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(SocialFeedsAPIlocalVarJSON);
    cJSON_Delete(SocialFeedsAPIlocalVarJSON);
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
    free(localVarToReplace_socialFeedId);
    free(localVarToReplace_feedPostId);
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

// Get social feeds
//
// Retrieves a list of social feeds for the specified social profile.
//
social_feed_dto_list_envelope_t*
SocialFeedsAPI_getFeedNotifications(apiClient_t *apiClient, char *socialProfileId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SocialService/SocialFeeds")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SocialService/SocialFeeds");




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
    cJSON *SocialFeedsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    social_feed_dto_list_envelope_t *elementToReturn = social_feed_dto_list_envelope_parseFromJSON(SocialFeedsAPIlocalVarJSON);
    cJSON_Delete(SocialFeedsAPIlocalVarJSON);
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

// Get social feed post by ID
//
// Retrieves a specific post from a social feed by its ID.
//
social_feed_post_dto_envelope_t*
SocialFeedsAPI_getFeedPostAsync(apiClient_t *apiClient, char *socialProfileId, char *socialFeedId, char *feedPostId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SocialService/SocialFeeds/{socialFeedId}/Posts/{feedPostId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SocialService/SocialFeeds/{socialFeedId}/Posts/{feedPostId}");


    // Path Params
    long sizeOfPathParams_socialFeedId = strlen(socialFeedId)+3 + strlen(feedPostId)+3 + strlen("{ socialFeedId }");
    if(socialFeedId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialFeedId = malloc(sizeOfPathParams_socialFeedId);
    sprintf(localVarToReplace_socialFeedId, "{%s}", "socialFeedId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialFeedId, socialFeedId);
    if(socialFeedId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialFeedId = malloc(sizeOfPathParams_socialFeedId);
    sprintf(localVarToReplace_socialFeedId, "{%s}", "socialFeedId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialFeedId, socialFeedId);

    // Path Params
    long sizeOfPathParams_feedPostId = strlen(socialFeedId)+3 + strlen(feedPostId)+3 + strlen("{ feedPostId }");
    if(feedPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_feedPostId = malloc(sizeOfPathParams_feedPostId);
    sprintf(localVarToReplace_feedPostId, "{%s}", "feedPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_feedPostId, feedPostId);
    if(feedPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_feedPostId = malloc(sizeOfPathParams_feedPostId);
    sprintf(localVarToReplace_feedPostId, "{%s}", "feedPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_feedPostId, feedPostId);



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
    cJSON *SocialFeedsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    social_feed_post_dto_envelope_t *elementToReturn = social_feed_post_dto_envelope_parseFromJSON(SocialFeedsAPIlocalVarJSON);
    cJSON_Delete(SocialFeedsAPIlocalVarJSON);
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
    free(localVarToReplace_socialFeedId);
    free(localVarToReplace_feedPostId);
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

// Get social feed posts
//
// Retrieves a list of posts for a specific social feed.
//
social_feed_post_dto_list_envelope_t*
SocialFeedsAPI_getFeedPostsAsync(apiClient_t *apiClient, char *socialProfileId, char *socialFeedId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SocialService/SocialFeeds/{socialFeedId}/Posts")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SocialService/SocialFeeds/{socialFeedId}/Posts");


    // Path Params
    long sizeOfPathParams_socialFeedId = strlen(socialFeedId)+3 + strlen("{ socialFeedId }");
    if(socialFeedId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialFeedId = malloc(sizeOfPathParams_socialFeedId);
    sprintf(localVarToReplace_socialFeedId, "{%s}", "socialFeedId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialFeedId, socialFeedId);
    if(socialFeedId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialFeedId = malloc(sizeOfPathParams_socialFeedId);
    sprintf(localVarToReplace_socialFeedId, "{%s}", "socialFeedId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialFeedId, socialFeedId);



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
    cJSON *SocialFeedsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    social_feed_post_dto_list_envelope_t *elementToReturn = social_feed_post_dto_list_envelope_parseFromJSON(SocialFeedsAPIlocalVarJSON);
    cJSON_Delete(SocialFeedsAPIlocalVarJSON);
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
    free(localVarToReplace_socialFeedId);
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

// Count social feed posts
//
// Returns the count of posts for a specific social feed.
//
int32_envelope_t*
SocialFeedsAPI_getFeedPostsCountAsync(apiClient_t *apiClient, char *socialProfileId, char *socialFeedId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SocialService/SocialFeeds/{socialFeedId}/Posts/Count")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SocialService/SocialFeeds/{socialFeedId}/Posts/Count");


    // Path Params
    long sizeOfPathParams_socialFeedId = strlen(socialFeedId)+3 + strlen("{ socialFeedId }");
    if(socialFeedId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialFeedId = malloc(sizeOfPathParams_socialFeedId);
    sprintf(localVarToReplace_socialFeedId, "{%s}", "socialFeedId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialFeedId, socialFeedId);
    if(socialFeedId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialFeedId = malloc(sizeOfPathParams_socialFeedId);
    sprintf(localVarToReplace_socialFeedId, "{%s}", "socialFeedId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialFeedId, socialFeedId);



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
    cJSON *SocialFeedsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    int32_envelope_t *elementToReturn = int32_envelope_parseFromJSON(SocialFeedsAPIlocalVarJSON);
    cJSON_Delete(SocialFeedsAPIlocalVarJSON);
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
    free(localVarToReplace_socialFeedId);
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

// Get social feed by ID
//
// Retrieves a specific social feed by its ID.
//
social_feed_dto_envelope_t*
SocialFeedsAPI_getNotificationAsync(apiClient_t *apiClient, char *socialProfileId, char *socialFeedId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SocialService/SocialFeeds/{socialFeedId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SocialService/SocialFeeds/{socialFeedId}");


    // Path Params
    long sizeOfPathParams_socialFeedId = strlen(socialFeedId)+3 + strlen("{ socialFeedId }");
    if(socialFeedId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialFeedId = malloc(sizeOfPathParams_socialFeedId);
    sprintf(localVarToReplace_socialFeedId, "{%s}", "socialFeedId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialFeedId, socialFeedId);
    if(socialFeedId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialFeedId = malloc(sizeOfPathParams_socialFeedId);
    sprintf(localVarToReplace_socialFeedId, "{%s}", "socialFeedId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialFeedId, socialFeedId);



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
    cJSON *SocialFeedsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    social_feed_dto_envelope_t *elementToReturn = social_feed_dto_envelope_parseFromJSON(SocialFeedsAPIlocalVarJSON);
    cJSON_Delete(SocialFeedsAPIlocalVarJSON);
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
    free(localVarToReplace_socialFeedId);
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

// Count social feeds
//
// Returns the count of social feeds for the specified social profile.
//
int32_envelope_t*
SocialFeedsAPI_getNotificationsCountAsync(apiClient_t *apiClient, char *socialProfileId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SocialService/SocialFeeds/Count")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SocialService/SocialFeeds/Count");




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
    cJSON *SocialFeedsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    int32_envelope_t *elementToReturn = int32_envelope_parseFromJSON(SocialFeedsAPIlocalVarJSON);
    cJSON_Delete(SocialFeedsAPIlocalVarJSON);
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

// Update a social feed post
//
// Updates an existing post in a specific social feed.
//
social_feed_post_dto_envelope_t*
SocialFeedsAPI_updateFeedPostAsync(apiClient_t *apiClient, char *socialProfileId, char *socialFeedId, char *feedPostId, char *api_version, char *x_api_version, social_feed_post_update_dto_t *social_feed_post_update_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SocialService/SocialFeeds/{socialFeedId}/Posts/{feedPostId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SocialService/SocialFeeds/{socialFeedId}/Posts/{feedPostId}");


    // Path Params
    long sizeOfPathParams_socialFeedId = strlen(socialFeedId)+3 + strlen(feedPostId)+3 + strlen("{ socialFeedId }");
    if(socialFeedId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialFeedId = malloc(sizeOfPathParams_socialFeedId);
    sprintf(localVarToReplace_socialFeedId, "{%s}", "socialFeedId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialFeedId, socialFeedId);
    if(socialFeedId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialFeedId = malloc(sizeOfPathParams_socialFeedId);
    sprintf(localVarToReplace_socialFeedId, "{%s}", "socialFeedId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialFeedId, socialFeedId);

    // Path Params
    long sizeOfPathParams_feedPostId = strlen(socialFeedId)+3 + strlen(feedPostId)+3 + strlen("{ feedPostId }");
    if(feedPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_feedPostId = malloc(sizeOfPathParams_feedPostId);
    sprintf(localVarToReplace_feedPostId, "{%s}", "feedPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_feedPostId, feedPostId);
    if(feedPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_feedPostId = malloc(sizeOfPathParams_feedPostId);
    sprintf(localVarToReplace_feedPostId, "{%s}", "feedPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_feedPostId, feedPostId);



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
    cJSON *localVarSingleItemJSON_social_feed_post_update_dto = NULL;
    if (social_feed_post_update_dto != NULL)
    {
        //string
        localVarSingleItemJSON_social_feed_post_update_dto = social_feed_post_update_dto_convertToJSON(social_feed_post_update_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_social_feed_post_update_dto);
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
    cJSON *SocialFeedsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    social_feed_post_dto_envelope_t *elementToReturn = social_feed_post_dto_envelope_parseFromJSON(SocialFeedsAPIlocalVarJSON);
    cJSON_Delete(SocialFeedsAPIlocalVarJSON);
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
    free(localVarToReplace_socialFeedId);
    free(localVarToReplace_feedPostId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
    if (localVarSingleItemJSON_social_feed_post_update_dto) {
        cJSON_Delete(localVarSingleItemJSON_social_feed_post_update_dto);
        localVarSingleItemJSON_social_feed_post_update_dto = NULL;
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

