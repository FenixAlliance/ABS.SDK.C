#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "SocialPostsAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Create a social post
//
// Creates a new social post for the specified social profile.
//
social_post_dto_envelope_t*
SocialPostsAPI_createSocialPostAsync(apiClient_t *apiClient, char *socialProfileId, char *api_version, char *x_api_version, social_post_create_dto_t *social_post_create_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SocialService/SocialPosts")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SocialService/SocialPosts");




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
    cJSON *localVarSingleItemJSON_social_post_create_dto = NULL;
    if (social_post_create_dto != NULL)
    {
        //string
        localVarSingleItemJSON_social_post_create_dto = social_post_create_dto_convertToJSON(social_post_create_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_social_post_create_dto);
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
    cJSON *SocialPostsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    social_post_dto_envelope_t *elementToReturn = social_post_dto_envelope_parseFromJSON(SocialPostsAPIlocalVarJSON);
    cJSON_Delete(SocialPostsAPIlocalVarJSON);
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
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
    if (localVarSingleItemJSON_social_post_create_dto) {
        cJSON_Delete(localVarSingleItemJSON_social_post_create_dto);
        localVarSingleItemJSON_social_post_create_dto = NULL;
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

// Create a social post attachment
//
// Creates a new attachment for a specific social post.
//
social_post_attachment_dto_envelope_t*
SocialPostsAPI_createSocialPostAttachmentAsync(apiClient_t *apiClient, char *socialPostId, char *socialProfileId, char *api_version, char *x_api_version, social_post_attachment_create_dto_t *social_post_attachment_create_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SocialService/SocialPosts/{socialPostId}/Attachments")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SocialService/SocialPosts/{socialPostId}/Attachments");


    // Path Params
    long sizeOfPathParams_socialPostId = strlen(socialPostId)+3 + strlen("{ socialPostId }");
    if(socialPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialPostId = malloc(sizeOfPathParams_socialPostId);
    sprintf(localVarToReplace_socialPostId, "{%s}", "socialPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialPostId, socialPostId);
    if(socialPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialPostId = malloc(sizeOfPathParams_socialPostId);
    sprintf(localVarToReplace_socialPostId, "{%s}", "socialPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialPostId, socialPostId);



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
    cJSON *localVarSingleItemJSON_social_post_attachment_create_dto = NULL;
    if (social_post_attachment_create_dto != NULL)
    {
        //string
        localVarSingleItemJSON_social_post_attachment_create_dto = social_post_attachment_create_dto_convertToJSON(social_post_attachment_create_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_social_post_attachment_create_dto);
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
    cJSON *SocialPostsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    social_post_attachment_dto_envelope_t *elementToReturn = social_post_attachment_dto_envelope_parseFromJSON(SocialPostsAPIlocalVarJSON);
    cJSON_Delete(SocialPostsAPIlocalVarJSON);
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
    free(localVarToReplace_socialPostId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
    if (localVarSingleItemJSON_social_post_attachment_create_dto) {
        cJSON_Delete(localVarSingleItemJSON_social_post_attachment_create_dto);
        localVarSingleItemJSON_social_post_attachment_create_dto = NULL;
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

// Create a social post comment
//
// Creates a new comment on a specific social post.
//
empty_envelope_t*
SocialPostsAPI_createSocialPostCommentAsync(apiClient_t *apiClient, char *socialProfileId, char *socialPostId, char *api_version, char *x_api_version, social_post_comment_create_dto_t *social_post_comment_create_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SocialService/SocialPosts/{socialPostId}/Comments")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SocialService/SocialPosts/{socialPostId}/Comments");


    // Path Params
    long sizeOfPathParams_socialPostId = strlen(socialPostId)+3 + strlen("{ socialPostId }");
    if(socialPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialPostId = malloc(sizeOfPathParams_socialPostId);
    sprintf(localVarToReplace_socialPostId, "{%s}", "socialPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialPostId, socialPostId);
    if(socialPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialPostId = malloc(sizeOfPathParams_socialPostId);
    sprintf(localVarToReplace_socialPostId, "{%s}", "socialPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialPostId, socialPostId);



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
    cJSON *localVarSingleItemJSON_social_post_comment_create_dto = NULL;
    if (social_post_comment_create_dto != NULL)
    {
        //string
        localVarSingleItemJSON_social_post_comment_create_dto = social_post_comment_create_dto_convertToJSON(social_post_comment_create_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_social_post_comment_create_dto);
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
    cJSON *SocialPostsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(SocialPostsAPIlocalVarJSON);
    cJSON_Delete(SocialPostsAPIlocalVarJSON);
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
    free(localVarToReplace_socialPostId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
    if (localVarSingleItemJSON_social_post_comment_create_dto) {
        cJSON_Delete(localVarSingleItemJSON_social_post_comment_create_dto);
        localVarSingleItemJSON_social_post_comment_create_dto = NULL;
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

// Create a social post reaction
//
// Creates a new reaction on a specific social post.
//
social_reaction_dto_envelope_t*
SocialPostsAPI_createSocialPostReactionAsync(apiClient_t *apiClient, char *socialPostId, char *socialProfileId, char *api_version, char *x_api_version, social_reaction_create_dto_t *social_reaction_create_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SocialService/SocialPosts/{socialPostId}/Reactions")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SocialService/SocialPosts/{socialPostId}/Reactions");


    // Path Params
    long sizeOfPathParams_socialPostId = strlen(socialPostId)+3 + strlen("{ socialPostId }");
    if(socialPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialPostId = malloc(sizeOfPathParams_socialPostId);
    sprintf(localVarToReplace_socialPostId, "{%s}", "socialPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialPostId, socialPostId);
    if(socialPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialPostId = malloc(sizeOfPathParams_socialPostId);
    sprintf(localVarToReplace_socialPostId, "{%s}", "socialPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialPostId, socialPostId);



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
    cJSON *localVarSingleItemJSON_social_reaction_create_dto = NULL;
    if (social_reaction_create_dto != NULL)
    {
        //string
        localVarSingleItemJSON_social_reaction_create_dto = social_reaction_create_dto_convertToJSON(social_reaction_create_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_social_reaction_create_dto);
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
    cJSON *SocialPostsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    social_reaction_dto_envelope_t *elementToReturn = social_reaction_dto_envelope_parseFromJSON(SocialPostsAPIlocalVarJSON);
    cJSON_Delete(SocialPostsAPIlocalVarJSON);
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
    free(localVarToReplace_socialPostId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
    if (localVarSingleItemJSON_social_reaction_create_dto) {
        cJSON_Delete(localVarSingleItemJSON_social_reaction_create_dto);
        localVarSingleItemJSON_social_reaction_create_dto = NULL;
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

// Delete a social post
//
// Deletes a social post by its ID.
//
empty_envelope_t*
SocialPostsAPI_deleteSocialPostAsync(apiClient_t *apiClient, char *socialProfileId, char *socialPostId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SocialService/SocialPosts/{socialPostId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SocialService/SocialPosts/{socialPostId}");


    // Path Params
    long sizeOfPathParams_socialPostId = strlen(socialPostId)+3 + strlen("{ socialPostId }");
    if(socialPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialPostId = malloc(sizeOfPathParams_socialPostId);
    sprintf(localVarToReplace_socialPostId, "{%s}", "socialPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialPostId, socialPostId);
    if(socialPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialPostId = malloc(sizeOfPathParams_socialPostId);
    sprintf(localVarToReplace_socialPostId, "{%s}", "socialPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialPostId, socialPostId);



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
    cJSON *SocialPostsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(SocialPostsAPIlocalVarJSON);
    cJSON_Delete(SocialPostsAPIlocalVarJSON);
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
    free(localVarToReplace_socialPostId);
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

// Delete a social post attachment
//
// Deletes an attachment from a specific social post.
//
empty_envelope_t*
SocialPostsAPI_deleteSocialPostAttachmentAsync(apiClient_t *apiClient, char *socialProfileId, char *socialPostId, char *attachmentId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SocialService/SocialPosts/{socialPostId}/Attachments/{attachmentId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SocialService/SocialPosts/{socialPostId}/Attachments/{attachmentId}");


    // Path Params
    long sizeOfPathParams_socialPostId = strlen(socialPostId)+3 + strlen(attachmentId)+3 + strlen("{ socialPostId }");
    if(socialPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialPostId = malloc(sizeOfPathParams_socialPostId);
    sprintf(localVarToReplace_socialPostId, "{%s}", "socialPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialPostId, socialPostId);
    if(socialPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialPostId = malloc(sizeOfPathParams_socialPostId);
    sprintf(localVarToReplace_socialPostId, "{%s}", "socialPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialPostId, socialPostId);

    // Path Params
    long sizeOfPathParams_attachmentId = strlen(socialPostId)+3 + strlen(attachmentId)+3 + strlen("{ attachmentId }");
    if(attachmentId == NULL) {
        goto end;
    }
    char* localVarToReplace_attachmentId = malloc(sizeOfPathParams_attachmentId);
    sprintf(localVarToReplace_attachmentId, "{%s}", "attachmentId");

    localVarPath = strReplace(localVarPath, localVarToReplace_attachmentId, attachmentId);
    if(attachmentId == NULL) {
        goto end;
    }
    char* localVarToReplace_attachmentId = malloc(sizeOfPathParams_attachmentId);
    sprintf(localVarToReplace_attachmentId, "{%s}", "attachmentId");

    localVarPath = strReplace(localVarPath, localVarToReplace_attachmentId, attachmentId);



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
    cJSON *SocialPostsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(SocialPostsAPIlocalVarJSON);
    cJSON_Delete(SocialPostsAPIlocalVarJSON);
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
    free(localVarToReplace_socialPostId);
    free(localVarToReplace_attachmentId);
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

// Delete a social post comment
//
// Deletes a comment from a specific social post.
//
empty_envelope_t*
SocialPostsAPI_deleteSocialPostCommentAsync(apiClient_t *apiClient, char *socialProfileId, char *socialPostId, char *commentId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SocialService/SocialPosts/{socialPostId}/Comments/{commentId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SocialService/SocialPosts/{socialPostId}/Comments/{commentId}");


    // Path Params
    long sizeOfPathParams_socialPostId = strlen(socialPostId)+3 + strlen(commentId)+3 + strlen("{ socialPostId }");
    if(socialPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialPostId = malloc(sizeOfPathParams_socialPostId);
    sprintf(localVarToReplace_socialPostId, "{%s}", "socialPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialPostId, socialPostId);
    if(socialPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialPostId = malloc(sizeOfPathParams_socialPostId);
    sprintf(localVarToReplace_socialPostId, "{%s}", "socialPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialPostId, socialPostId);

    // Path Params
    long sizeOfPathParams_commentId = strlen(socialPostId)+3 + strlen(commentId)+3 + strlen("{ commentId }");
    if(commentId == NULL) {
        goto end;
    }
    char* localVarToReplace_commentId = malloc(sizeOfPathParams_commentId);
    sprintf(localVarToReplace_commentId, "{%s}", "commentId");

    localVarPath = strReplace(localVarPath, localVarToReplace_commentId, commentId);
    if(commentId == NULL) {
        goto end;
    }
    char* localVarToReplace_commentId = malloc(sizeOfPathParams_commentId);
    sprintf(localVarToReplace_commentId, "{%s}", "commentId");

    localVarPath = strReplace(localVarPath, localVarToReplace_commentId, commentId);



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
    cJSON *SocialPostsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(SocialPostsAPIlocalVarJSON);
    cJSON_Delete(SocialPostsAPIlocalVarJSON);
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
    free(localVarToReplace_socialPostId);
    free(localVarToReplace_commentId);
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

// Delete a social post reaction
//
// Deletes a reaction from a specific social post.
//
empty_envelope_t*
SocialPostsAPI_deleteSocialPostReactionAsync(apiClient_t *apiClient, char *socialProfileId, char *socialPostId, char *reactionId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SocialService/SocialPosts/{socialPostId}/Reactions/{reactionId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SocialService/SocialPosts/{socialPostId}/Reactions/{reactionId}");


    // Path Params
    long sizeOfPathParams_socialPostId = strlen(socialPostId)+3 + strlen(reactionId)+3 + strlen("{ socialPostId }");
    if(socialPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialPostId = malloc(sizeOfPathParams_socialPostId);
    sprintf(localVarToReplace_socialPostId, "{%s}", "socialPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialPostId, socialPostId);
    if(socialPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialPostId = malloc(sizeOfPathParams_socialPostId);
    sprintf(localVarToReplace_socialPostId, "{%s}", "socialPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialPostId, socialPostId);

    // Path Params
    long sizeOfPathParams_reactionId = strlen(socialPostId)+3 + strlen(reactionId)+3 + strlen("{ reactionId }");
    if(reactionId == NULL) {
        goto end;
    }
    char* localVarToReplace_reactionId = malloc(sizeOfPathParams_reactionId);
    sprintf(localVarToReplace_reactionId, "{%s}", "reactionId");

    localVarPath = strReplace(localVarPath, localVarToReplace_reactionId, reactionId);
    if(reactionId == NULL) {
        goto end;
    }
    char* localVarToReplace_reactionId = malloc(sizeOfPathParams_reactionId);
    sprintf(localVarToReplace_reactionId, "{%s}", "reactionId");

    localVarPath = strReplace(localVarPath, localVarToReplace_reactionId, reactionId);



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
    cJSON *SocialPostsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(SocialPostsAPIlocalVarJSON);
    cJSON_Delete(SocialPostsAPIlocalVarJSON);
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
    free(localVarToReplace_socialPostId);
    free(localVarToReplace_reactionId);
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

// Get social post by ID
//
// Retrieves a specific social post by its ID.
//
social_post_dto_envelope_t*
SocialPostsAPI_getSocialPostAsync(apiClient_t *apiClient, char *socialProfileId, char *socialPostId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SocialService/SocialPosts/{socialPostId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SocialService/SocialPosts/{socialPostId}");


    // Path Params
    long sizeOfPathParams_socialPostId = strlen(socialPostId)+3 + strlen("{ socialPostId }");
    if(socialPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialPostId = malloc(sizeOfPathParams_socialPostId);
    sprintf(localVarToReplace_socialPostId, "{%s}", "socialPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialPostId, socialPostId);
    if(socialPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialPostId = malloc(sizeOfPathParams_socialPostId);
    sprintf(localVarToReplace_socialPostId, "{%s}", "socialPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialPostId, socialPostId);



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
    cJSON *SocialPostsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    social_post_dto_envelope_t *elementToReturn = social_post_dto_envelope_parseFromJSON(SocialPostsAPIlocalVarJSON);
    cJSON_Delete(SocialPostsAPIlocalVarJSON);
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
    free(localVarToReplace_socialPostId);
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

// Get social post attachment by ID
//
// Retrieves a specific attachment from a social post by its ID.
//
empty_envelope_t*
SocialPostsAPI_getSocialPostAttachmentAsync(apiClient_t *apiClient, char *socialPostId, char *attachmentId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SocialService/SocialPosts/{socialPostId}/Attachments/{attachmentId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SocialService/SocialPosts/{socialPostId}/Attachments/{attachmentId}");


    // Path Params
    long sizeOfPathParams_socialPostId = strlen(socialPostId)+3 + strlen(attachmentId)+3 + strlen("{ socialPostId }");
    if(socialPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialPostId = malloc(sizeOfPathParams_socialPostId);
    sprintf(localVarToReplace_socialPostId, "{%s}", "socialPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialPostId, socialPostId);
    if(socialPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialPostId = malloc(sizeOfPathParams_socialPostId);
    sprintf(localVarToReplace_socialPostId, "{%s}", "socialPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialPostId, socialPostId);

    // Path Params
    long sizeOfPathParams_attachmentId = strlen(socialPostId)+3 + strlen(attachmentId)+3 + strlen("{ attachmentId }");
    if(attachmentId == NULL) {
        goto end;
    }
    char* localVarToReplace_attachmentId = malloc(sizeOfPathParams_attachmentId);
    sprintf(localVarToReplace_attachmentId, "{%s}", "attachmentId");

    localVarPath = strReplace(localVarPath, localVarToReplace_attachmentId, attachmentId);
    if(attachmentId == NULL) {
        goto end;
    }
    char* localVarToReplace_attachmentId = malloc(sizeOfPathParams_attachmentId);
    sprintf(localVarToReplace_attachmentId, "{%s}", "attachmentId");

    localVarPath = strReplace(localVarPath, localVarToReplace_attachmentId, attachmentId);



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
    cJSON *SocialPostsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(SocialPostsAPIlocalVarJSON);
    cJSON_Delete(SocialPostsAPIlocalVarJSON);
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
    free(localVarToReplace_socialPostId);
    free(localVarToReplace_attachmentId);
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

// Get social post attachments
//
// Retrieves a list of attachments for a specific social post.
//
social_post_attachment_dto_list_envelope_t*
SocialPostsAPI_getSocialPostAttachmentsAsync(apiClient_t *apiClient, char *socialPostId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SocialService/SocialPosts/{socialPostId}/Attachments")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SocialService/SocialPosts/{socialPostId}/Attachments");


    // Path Params
    long sizeOfPathParams_socialPostId = strlen(socialPostId)+3 + strlen("{ socialPostId }");
    if(socialPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialPostId = malloc(sizeOfPathParams_socialPostId);
    sprintf(localVarToReplace_socialPostId, "{%s}", "socialPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialPostId, socialPostId);
    if(socialPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialPostId = malloc(sizeOfPathParams_socialPostId);
    sprintf(localVarToReplace_socialPostId, "{%s}", "socialPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialPostId, socialPostId);



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
    cJSON *SocialPostsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    social_post_attachment_dto_list_envelope_t *elementToReturn = social_post_attachment_dto_list_envelope_parseFromJSON(SocialPostsAPIlocalVarJSON);
    cJSON_Delete(SocialPostsAPIlocalVarJSON);
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
    free(localVarToReplace_socialPostId);
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

// Count social post attachments
//
// Returns the count of attachments for a specific social post.
//
int32_envelope_t*
SocialPostsAPI_getSocialPostAttachmentsCountAsync(apiClient_t *apiClient, char *socialPostId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SocialService/SocialPosts/{socialPostId}/Attachments/Count")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SocialService/SocialPosts/{socialPostId}/Attachments/Count");


    // Path Params
    long sizeOfPathParams_socialPostId = strlen(socialPostId)+3 + strlen("{ socialPostId }");
    if(socialPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialPostId = malloc(sizeOfPathParams_socialPostId);
    sprintf(localVarToReplace_socialPostId, "{%s}", "socialPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialPostId, socialPostId);
    if(socialPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialPostId = malloc(sizeOfPathParams_socialPostId);
    sprintf(localVarToReplace_socialPostId, "{%s}", "socialPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialPostId, socialPostId);



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
    cJSON *SocialPostsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    int32_envelope_t *elementToReturn = int32_envelope_parseFromJSON(SocialPostsAPIlocalVarJSON);
    cJSON_Delete(SocialPostsAPIlocalVarJSON);
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
    free(localVarToReplace_socialPostId);
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

// Get social post comment by ID
//
// Retrieves a specific comment from a social post by its ID.
//
social_post_comment_dto_envelope_t*
SocialPostsAPI_getSocialPostCommentAsync(apiClient_t *apiClient, char *socialProfileId, char *socialPostId, char *commentId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SocialService/SocialPosts/{socialPostId}/Comments/{commentId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SocialService/SocialPosts/{socialPostId}/Comments/{commentId}");


    // Path Params
    long sizeOfPathParams_socialPostId = strlen(socialPostId)+3 + strlen(commentId)+3 + strlen("{ socialPostId }");
    if(socialPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialPostId = malloc(sizeOfPathParams_socialPostId);
    sprintf(localVarToReplace_socialPostId, "{%s}", "socialPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialPostId, socialPostId);
    if(socialPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialPostId = malloc(sizeOfPathParams_socialPostId);
    sprintf(localVarToReplace_socialPostId, "{%s}", "socialPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialPostId, socialPostId);

    // Path Params
    long sizeOfPathParams_commentId = strlen(socialPostId)+3 + strlen(commentId)+3 + strlen("{ commentId }");
    if(commentId == NULL) {
        goto end;
    }
    char* localVarToReplace_commentId = malloc(sizeOfPathParams_commentId);
    sprintf(localVarToReplace_commentId, "{%s}", "commentId");

    localVarPath = strReplace(localVarPath, localVarToReplace_commentId, commentId);
    if(commentId == NULL) {
        goto end;
    }
    char* localVarToReplace_commentId = malloc(sizeOfPathParams_commentId);
    sprintf(localVarToReplace_commentId, "{%s}", "commentId");

    localVarPath = strReplace(localVarPath, localVarToReplace_commentId, commentId);



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
    cJSON *SocialPostsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    social_post_comment_dto_envelope_t *elementToReturn = social_post_comment_dto_envelope_parseFromJSON(SocialPostsAPIlocalVarJSON);
    cJSON_Delete(SocialPostsAPIlocalVarJSON);
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
    free(localVarToReplace_socialPostId);
    free(localVarToReplace_commentId);
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

// Get social post comments
//
// Retrieves a list of comments for a specific social post.
//
social_post_comment_dto_list_envelope_t*
SocialPostsAPI_getSocialPostCommentsAsync(apiClient_t *apiClient, char *socialProfileId, char *socialPostId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SocialService/SocialPosts/{socialPostId}/Comments")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SocialService/SocialPosts/{socialPostId}/Comments");


    // Path Params
    long sizeOfPathParams_socialPostId = strlen(socialPostId)+3 + strlen("{ socialPostId }");
    if(socialPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialPostId = malloc(sizeOfPathParams_socialPostId);
    sprintf(localVarToReplace_socialPostId, "{%s}", "socialPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialPostId, socialPostId);
    if(socialPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialPostId = malloc(sizeOfPathParams_socialPostId);
    sprintf(localVarToReplace_socialPostId, "{%s}", "socialPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialPostId, socialPostId);



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
    cJSON *SocialPostsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    social_post_comment_dto_list_envelope_t *elementToReturn = social_post_comment_dto_list_envelope_parseFromJSON(SocialPostsAPIlocalVarJSON);
    cJSON_Delete(SocialPostsAPIlocalVarJSON);
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
    free(localVarToReplace_socialPostId);
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

// Count social post comments
//
// Returns the count of comments for a specific social post.
//
int32_envelope_t*
SocialPostsAPI_getSocialPostCommentsCountAsync(apiClient_t *apiClient, char *socialProfileId, char *socialPostId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SocialService/SocialPosts/{socialPostId}/Comments/Count")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SocialService/SocialPosts/{socialPostId}/Comments/Count");


    // Path Params
    long sizeOfPathParams_socialPostId = strlen(socialPostId)+3 + strlen("{ socialPostId }");
    if(socialPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialPostId = malloc(sizeOfPathParams_socialPostId);
    sprintf(localVarToReplace_socialPostId, "{%s}", "socialPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialPostId, socialPostId);
    if(socialPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialPostId = malloc(sizeOfPathParams_socialPostId);
    sprintf(localVarToReplace_socialPostId, "{%s}", "socialPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialPostId, socialPostId);



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
    cJSON *SocialPostsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    int32_envelope_t *elementToReturn = int32_envelope_parseFromJSON(SocialPostsAPIlocalVarJSON);
    cJSON_Delete(SocialPostsAPIlocalVarJSON);
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
    free(localVarToReplace_socialPostId);
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

// Get social post reaction by ID
//
// Retrieves a specific reaction from a social post by its ID.
//
social_reaction_dto_envelope_t*
SocialPostsAPI_getSocialPostReactionAsync(apiClient_t *apiClient, char *socialPostId, char *reactionId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SocialService/SocialPosts/{socialPostId}/Reactions/{reactionId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SocialService/SocialPosts/{socialPostId}/Reactions/{reactionId}");


    // Path Params
    long sizeOfPathParams_socialPostId = strlen(socialPostId)+3 + strlen(reactionId)+3 + strlen("{ socialPostId }");
    if(socialPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialPostId = malloc(sizeOfPathParams_socialPostId);
    sprintf(localVarToReplace_socialPostId, "{%s}", "socialPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialPostId, socialPostId);
    if(socialPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialPostId = malloc(sizeOfPathParams_socialPostId);
    sprintf(localVarToReplace_socialPostId, "{%s}", "socialPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialPostId, socialPostId);

    // Path Params
    long sizeOfPathParams_reactionId = strlen(socialPostId)+3 + strlen(reactionId)+3 + strlen("{ reactionId }");
    if(reactionId == NULL) {
        goto end;
    }
    char* localVarToReplace_reactionId = malloc(sizeOfPathParams_reactionId);
    sprintf(localVarToReplace_reactionId, "{%s}", "reactionId");

    localVarPath = strReplace(localVarPath, localVarToReplace_reactionId, reactionId);
    if(reactionId == NULL) {
        goto end;
    }
    char* localVarToReplace_reactionId = malloc(sizeOfPathParams_reactionId);
    sprintf(localVarToReplace_reactionId, "{%s}", "reactionId");

    localVarPath = strReplace(localVarPath, localVarToReplace_reactionId, reactionId);



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
    cJSON *SocialPostsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    social_reaction_dto_envelope_t *elementToReturn = social_reaction_dto_envelope_parseFromJSON(SocialPostsAPIlocalVarJSON);
    cJSON_Delete(SocialPostsAPIlocalVarJSON);
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
    free(localVarToReplace_socialPostId);
    free(localVarToReplace_reactionId);
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

// Get social post reactions
//
// Retrieves a list of reactions for a specific social post.
//
social_reaction_dto_list_envelope_t*
SocialPostsAPI_getSocialPostReactionsAsync(apiClient_t *apiClient, char *socialPostId, char *socialProfileId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SocialService/SocialPosts/{socialPostId}/Reactions")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SocialService/SocialPosts/{socialPostId}/Reactions");


    // Path Params
    long sizeOfPathParams_socialPostId = strlen(socialPostId)+3 + strlen("{ socialPostId }");
    if(socialPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialPostId = malloc(sizeOfPathParams_socialPostId);
    sprintf(localVarToReplace_socialPostId, "{%s}", "socialPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialPostId, socialPostId);
    if(socialPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialPostId = malloc(sizeOfPathParams_socialPostId);
    sprintf(localVarToReplace_socialPostId, "{%s}", "socialPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialPostId, socialPostId);



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
    cJSON *SocialPostsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    social_reaction_dto_list_envelope_t *elementToReturn = social_reaction_dto_list_envelope_parseFromJSON(SocialPostsAPIlocalVarJSON);
    cJSON_Delete(SocialPostsAPIlocalVarJSON);
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
    free(localVarToReplace_socialPostId);
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

// Count social post reactions
//
// Returns the count of reactions for a specific social post.
//
int32_envelope_t*
SocialPostsAPI_getSocialPostReactionsCountAsync(apiClient_t *apiClient, char *socialPostId, char *socialProfileId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SocialService/SocialPosts/{socialPostId}/Reactions/Count")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SocialService/SocialPosts/{socialPostId}/Reactions/Count");


    // Path Params
    long sizeOfPathParams_socialPostId = strlen(socialPostId)+3 + strlen("{ socialPostId }");
    if(socialPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialPostId = malloc(sizeOfPathParams_socialPostId);
    sprintf(localVarToReplace_socialPostId, "{%s}", "socialPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialPostId, socialPostId);
    if(socialPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialPostId = malloc(sizeOfPathParams_socialPostId);
    sprintf(localVarToReplace_socialPostId, "{%s}", "socialPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialPostId, socialPostId);



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
    cJSON *SocialPostsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    int32_envelope_t *elementToReturn = int32_envelope_parseFromJSON(SocialPostsAPIlocalVarJSON);
    cJSON_Delete(SocialPostsAPIlocalVarJSON);
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
    free(localVarToReplace_socialPostId);
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

// Get social posts
//
// Retrieves a list of social posts for the specified social profile.
//
social_post_dto_list_envelope_t*
SocialPostsAPI_getSocialPostsAsync(apiClient_t *apiClient, char *socialProfileId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SocialService/SocialPosts")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SocialService/SocialPosts");




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
    cJSON *SocialPostsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    social_post_dto_list_envelope_t *elementToReturn = social_post_dto_list_envelope_parseFromJSON(SocialPostsAPIlocalVarJSON);
    cJSON_Delete(SocialPostsAPIlocalVarJSON);
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

// Count social posts
//
// Returns the count of social posts for the specified social profile.
//
int32_envelope_t*
SocialPostsAPI_getSocialPostsCountAsync(apiClient_t *apiClient, char *socialProfileId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SocialService/SocialPosts/Count")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SocialService/SocialPosts/Count");




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
    cJSON *SocialPostsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    int32_envelope_t *elementToReturn = int32_envelope_parseFromJSON(SocialPostsAPIlocalVarJSON);
    cJSON_Delete(SocialPostsAPIlocalVarJSON);
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

// Update a social post
//
// Updates an existing social post by its ID.
//
empty_envelope_t*
SocialPostsAPI_updateSocialPostAsync(apiClient_t *apiClient, char *socialProfileId, char *socialPostId, char *api_version, char *x_api_version, social_post_update_dto_t *social_post_update_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SocialService/SocialPosts/{socialPostId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SocialService/SocialPosts/{socialPostId}");


    // Path Params
    long sizeOfPathParams_socialPostId = strlen(socialPostId)+3 + strlen("{ socialPostId }");
    if(socialPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialPostId = malloc(sizeOfPathParams_socialPostId);
    sprintf(localVarToReplace_socialPostId, "{%s}", "socialPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialPostId, socialPostId);
    if(socialPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialPostId = malloc(sizeOfPathParams_socialPostId);
    sprintf(localVarToReplace_socialPostId, "{%s}", "socialPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialPostId, socialPostId);



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
    cJSON *localVarSingleItemJSON_social_post_update_dto = NULL;
    if (social_post_update_dto != NULL)
    {
        //string
        localVarSingleItemJSON_social_post_update_dto = social_post_update_dto_convertToJSON(social_post_update_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_social_post_update_dto);
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
    cJSON *SocialPostsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(SocialPostsAPIlocalVarJSON);
    cJSON_Delete(SocialPostsAPIlocalVarJSON);
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
    free(localVarToReplace_socialPostId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
    if (localVarSingleItemJSON_social_post_update_dto) {
        cJSON_Delete(localVarSingleItemJSON_social_post_update_dto);
        localVarSingleItemJSON_social_post_update_dto = NULL;
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

// Update a social post attachment
//
// Updates an existing attachment on a specific social post.
//
empty_envelope_t*
SocialPostsAPI_updateSocialPostAttachmentAsync(apiClient_t *apiClient, char *socialProfileId, char *socialPostId, char *attachmentId, char *api_version, char *x_api_version, social_post_attachment_update_dto_t *social_post_attachment_update_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SocialService/SocialPosts/{socialPostId}/Attachments/{attachmentId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SocialService/SocialPosts/{socialPostId}/Attachments/{attachmentId}");


    // Path Params
    long sizeOfPathParams_socialPostId = strlen(socialPostId)+3 + strlen(attachmentId)+3 + strlen("{ socialPostId }");
    if(socialPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialPostId = malloc(sizeOfPathParams_socialPostId);
    sprintf(localVarToReplace_socialPostId, "{%s}", "socialPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialPostId, socialPostId);
    if(socialPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialPostId = malloc(sizeOfPathParams_socialPostId);
    sprintf(localVarToReplace_socialPostId, "{%s}", "socialPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialPostId, socialPostId);

    // Path Params
    long sizeOfPathParams_attachmentId = strlen(socialPostId)+3 + strlen(attachmentId)+3 + strlen("{ attachmentId }");
    if(attachmentId == NULL) {
        goto end;
    }
    char* localVarToReplace_attachmentId = malloc(sizeOfPathParams_attachmentId);
    sprintf(localVarToReplace_attachmentId, "{%s}", "attachmentId");

    localVarPath = strReplace(localVarPath, localVarToReplace_attachmentId, attachmentId);
    if(attachmentId == NULL) {
        goto end;
    }
    char* localVarToReplace_attachmentId = malloc(sizeOfPathParams_attachmentId);
    sprintf(localVarToReplace_attachmentId, "{%s}", "attachmentId");

    localVarPath = strReplace(localVarPath, localVarToReplace_attachmentId, attachmentId);



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
    cJSON *localVarSingleItemJSON_social_post_attachment_update_dto = NULL;
    if (social_post_attachment_update_dto != NULL)
    {
        //string
        localVarSingleItemJSON_social_post_attachment_update_dto = social_post_attachment_update_dto_convertToJSON(social_post_attachment_update_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_social_post_attachment_update_dto);
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
    cJSON *SocialPostsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(SocialPostsAPIlocalVarJSON);
    cJSON_Delete(SocialPostsAPIlocalVarJSON);
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
    free(localVarToReplace_socialPostId);
    free(localVarToReplace_attachmentId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
    if (localVarSingleItemJSON_social_post_attachment_update_dto) {
        cJSON_Delete(localVarSingleItemJSON_social_post_attachment_update_dto);
        localVarSingleItemJSON_social_post_attachment_update_dto = NULL;
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

// Update a social post comment
//
// Updates an existing comment on a specific social post.
//
empty_envelope_t*
SocialPostsAPI_updateSocialPostCommentAsync(apiClient_t *apiClient, char *socialProfileId, char *socialPostId, char *commentId, char *api_version, char *x_api_version, social_post_comment_update_dto_t *social_post_comment_update_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SocialService/SocialPosts/{socialPostId}/Comments/{commentId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SocialService/SocialPosts/{socialPostId}/Comments/{commentId}");


    // Path Params
    long sizeOfPathParams_socialPostId = strlen(socialPostId)+3 + strlen(commentId)+3 + strlen("{ socialPostId }");
    if(socialPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialPostId = malloc(sizeOfPathParams_socialPostId);
    sprintf(localVarToReplace_socialPostId, "{%s}", "socialPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialPostId, socialPostId);
    if(socialPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialPostId = malloc(sizeOfPathParams_socialPostId);
    sprintf(localVarToReplace_socialPostId, "{%s}", "socialPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialPostId, socialPostId);

    // Path Params
    long sizeOfPathParams_commentId = strlen(socialPostId)+3 + strlen(commentId)+3 + strlen("{ commentId }");
    if(commentId == NULL) {
        goto end;
    }
    char* localVarToReplace_commentId = malloc(sizeOfPathParams_commentId);
    sprintf(localVarToReplace_commentId, "{%s}", "commentId");

    localVarPath = strReplace(localVarPath, localVarToReplace_commentId, commentId);
    if(commentId == NULL) {
        goto end;
    }
    char* localVarToReplace_commentId = malloc(sizeOfPathParams_commentId);
    sprintf(localVarToReplace_commentId, "{%s}", "commentId");

    localVarPath = strReplace(localVarPath, localVarToReplace_commentId, commentId);



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
    cJSON *localVarSingleItemJSON_social_post_comment_update_dto = NULL;
    if (social_post_comment_update_dto != NULL)
    {
        //string
        localVarSingleItemJSON_social_post_comment_update_dto = social_post_comment_update_dto_convertToJSON(social_post_comment_update_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_social_post_comment_update_dto);
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
    cJSON *SocialPostsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(SocialPostsAPIlocalVarJSON);
    cJSON_Delete(SocialPostsAPIlocalVarJSON);
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
    free(localVarToReplace_socialPostId);
    free(localVarToReplace_commentId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
    if (localVarSingleItemJSON_social_post_comment_update_dto) {
        cJSON_Delete(localVarSingleItemJSON_social_post_comment_update_dto);
        localVarSingleItemJSON_social_post_comment_update_dto = NULL;
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

// Update a social post reaction
//
// Updates an existing reaction on a specific social post.
//
empty_envelope_t*
SocialPostsAPI_updateSocialPostReactionAsync(apiClient_t *apiClient, char *socialProfileId, char *socialPostId, char *reactionId, char *api_version, char *x_api_version, social_reaction_update_dto_t *social_reaction_update_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SocialService/SocialPosts/{socialPostId}/Reactions/{reactionId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SocialService/SocialPosts/{socialPostId}/Reactions/{reactionId}");


    // Path Params
    long sizeOfPathParams_socialPostId = strlen(socialPostId)+3 + strlen(reactionId)+3 + strlen("{ socialPostId }");
    if(socialPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialPostId = malloc(sizeOfPathParams_socialPostId);
    sprintf(localVarToReplace_socialPostId, "{%s}", "socialPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialPostId, socialPostId);
    if(socialPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_socialPostId = malloc(sizeOfPathParams_socialPostId);
    sprintf(localVarToReplace_socialPostId, "{%s}", "socialPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_socialPostId, socialPostId);

    // Path Params
    long sizeOfPathParams_reactionId = strlen(socialPostId)+3 + strlen(reactionId)+3 + strlen("{ reactionId }");
    if(reactionId == NULL) {
        goto end;
    }
    char* localVarToReplace_reactionId = malloc(sizeOfPathParams_reactionId);
    sprintf(localVarToReplace_reactionId, "{%s}", "reactionId");

    localVarPath = strReplace(localVarPath, localVarToReplace_reactionId, reactionId);
    if(reactionId == NULL) {
        goto end;
    }
    char* localVarToReplace_reactionId = malloc(sizeOfPathParams_reactionId);
    sprintf(localVarToReplace_reactionId, "{%s}", "reactionId");

    localVarPath = strReplace(localVarPath, localVarToReplace_reactionId, reactionId);



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
    cJSON *localVarSingleItemJSON_social_reaction_update_dto = NULL;
    if (social_reaction_update_dto != NULL)
    {
        //string
        localVarSingleItemJSON_social_reaction_update_dto = social_reaction_update_dto_convertToJSON(social_reaction_update_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_social_reaction_update_dto);
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
    cJSON *SocialPostsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(SocialPostsAPIlocalVarJSON);
    cJSON_Delete(SocialPostsAPIlocalVarJSON);
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
    free(localVarToReplace_socialPostId);
    free(localVarToReplace_reactionId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
    if (localVarSingleItemJSON_social_reaction_update_dto) {
        cJSON_Delete(localVarSingleItemJSON_social_reaction_update_dto);
        localVarSingleItemJSON_social_reaction_update_dto = NULL;
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

