#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "BlogPostsAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Create a new blog post
//
// Creates a new blog post for the specified tenant.
//
empty_envelope_t*
BlogPostsAPI_createBlogPostAsync(apiClient_t *apiClient, char *tenantId, blog_post_create_dto_t *blog_post_create_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/ContentService/BlogPosts")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/ContentService/BlogPosts");




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

    // Body Param
    cJSON *localVarSingleItemJSON_blog_post_create_dto = NULL;
    if (blog_post_create_dto != NULL)
    {
        //string
        localVarSingleItemJSON_blog_post_create_dto = blog_post_create_dto_convertToJSON(blog_post_create_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_blog_post_create_dto);
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
    cJSON *BlogPostsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(BlogPostsAPIlocalVarJSON);
    cJSON_Delete(BlogPostsAPIlocalVarJSON);
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
    
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    if (localVarSingleItemJSON_blog_post_create_dto) {
        cJSON_Delete(localVarSingleItemJSON_blog_post_create_dto);
        localVarSingleItemJSON_blog_post_create_dto = NULL;
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Create a category for a blog post
//
// Creates a new category and relates it to a specific blog post.
//
empty_envelope_t*
BlogPostsAPI_createCategoryForBlogPostAsync(apiClient_t *apiClient, char *tenantId, char *blogPostId, blog_post_category_create_dto_t *blog_post_category_create_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/ContentService/BlogPosts/{blogPostId}/Categories")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/ContentService/BlogPosts/{blogPostId}/Categories");


    // Path Params
    long sizeOfPathParams_blogPostId = strlen(blogPostId)+3 + strlen("{ blogPostId }");
    if(blogPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_blogPostId = malloc(sizeOfPathParams_blogPostId);
    sprintf(localVarToReplace_blogPostId, "{%s}", "blogPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_blogPostId, blogPostId);
    if(blogPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_blogPostId = malloc(sizeOfPathParams_blogPostId);
    sprintf(localVarToReplace_blogPostId, "{%s}", "blogPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_blogPostId, blogPostId);



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

    // Body Param
    cJSON *localVarSingleItemJSON_blog_post_category_create_dto = NULL;
    if (blog_post_category_create_dto != NULL)
    {
        //string
        localVarSingleItemJSON_blog_post_category_create_dto = blog_post_category_create_dto_convertToJSON(blog_post_category_create_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_blog_post_category_create_dto);
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
    cJSON *BlogPostsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(BlogPostsAPIlocalVarJSON);
    cJSON_Delete(BlogPostsAPIlocalVarJSON);
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
    
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_blogPostId);
    if (localVarSingleItemJSON_blog_post_category_create_dto) {
        cJSON_Delete(localVarSingleItemJSON_blog_post_category_create_dto);
        localVarSingleItemJSON_blog_post_category_create_dto = NULL;
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Create a comment for a blog post
//
// Creates a new comment on a specific blog post.
//
empty_envelope_t*
BlogPostsAPI_createCommentForBlogPostAsync(apiClient_t *apiClient, char *tenantId, char *blogPostId, blog_post_comment_create_dto_t *blog_post_comment_create_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/ContentService/BlogPosts/{blogPostId}/Comments")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/ContentService/BlogPosts/{blogPostId}/Comments");


    // Path Params
    long sizeOfPathParams_blogPostId = strlen(blogPostId)+3 + strlen("{ blogPostId }");
    if(blogPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_blogPostId = malloc(sizeOfPathParams_blogPostId);
    sprintf(localVarToReplace_blogPostId, "{%s}", "blogPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_blogPostId, blogPostId);
    if(blogPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_blogPostId = malloc(sizeOfPathParams_blogPostId);
    sprintf(localVarToReplace_blogPostId, "{%s}", "blogPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_blogPostId, blogPostId);



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

    // Body Param
    cJSON *localVarSingleItemJSON_blog_post_comment_create_dto = NULL;
    if (blog_post_comment_create_dto != NULL)
    {
        //string
        localVarSingleItemJSON_blog_post_comment_create_dto = blog_post_comment_create_dto_convertToJSON(blog_post_comment_create_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_blog_post_comment_create_dto);
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
    cJSON *BlogPostsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(BlogPostsAPIlocalVarJSON);
    cJSON_Delete(BlogPostsAPIlocalVarJSON);
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
    
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_blogPostId);
    if (localVarSingleItemJSON_blog_post_comment_create_dto) {
        cJSON_Delete(localVarSingleItemJSON_blog_post_comment_create_dto);
        localVarSingleItemJSON_blog_post_comment_create_dto = NULL;
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Create a tag for a blog post
//
// Creates a new tag and relates it to a specific blog post.
//
empty_envelope_t*
BlogPostsAPI_createTagForBlogPostAsync(apiClient_t *apiClient, char *tenantId, char *blogPostId, blog_post_tag_create_dto_t *blog_post_tag_create_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/ContentService/BlogPosts/{blogPostId}/Tags")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/ContentService/BlogPosts/{blogPostId}/Tags");


    // Path Params
    long sizeOfPathParams_blogPostId = strlen(blogPostId)+3 + strlen("{ blogPostId }");
    if(blogPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_blogPostId = malloc(sizeOfPathParams_blogPostId);
    sprintf(localVarToReplace_blogPostId, "{%s}", "blogPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_blogPostId, blogPostId);
    if(blogPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_blogPostId = malloc(sizeOfPathParams_blogPostId);
    sprintf(localVarToReplace_blogPostId, "{%s}", "blogPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_blogPostId, blogPostId);



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

    // Body Param
    cJSON *localVarSingleItemJSON_blog_post_tag_create_dto = NULL;
    if (blog_post_tag_create_dto != NULL)
    {
        //string
        localVarSingleItemJSON_blog_post_tag_create_dto = blog_post_tag_create_dto_convertToJSON(blog_post_tag_create_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_blog_post_tag_create_dto);
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
    cJSON *BlogPostsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(BlogPostsAPIlocalVarJSON);
    cJSON_Delete(BlogPostsAPIlocalVarJSON);
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
    
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_blogPostId);
    if (localVarSingleItemJSON_blog_post_tag_create_dto) {
        cJSON_Delete(localVarSingleItemJSON_blog_post_tag_create_dto);
        localVarSingleItemJSON_blog_post_tag_create_dto = NULL;
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Delete a blog post
//
// Deletes a blog post for the specified tenant.
//
empty_envelope_t*
BlogPostsAPI_deleteBlogPostAsync(apiClient_t *apiClient, char *tenantId, char *blogPostId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/ContentService/BlogPosts/{blogPostId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/ContentService/BlogPosts/{blogPostId}");


    // Path Params
    long sizeOfPathParams_blogPostId = strlen(blogPostId)+3 + strlen("{ blogPostId }");
    if(blogPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_blogPostId = malloc(sizeOfPathParams_blogPostId);
    sprintf(localVarToReplace_blogPostId, "{%s}", "blogPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_blogPostId, blogPostId);
    if(blogPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_blogPostId = malloc(sizeOfPathParams_blogPostId);
    sprintf(localVarToReplace_blogPostId, "{%s}", "blogPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_blogPostId, blogPostId);



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
    cJSON *BlogPostsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(BlogPostsAPIlocalVarJSON);
    cJSON_Delete(BlogPostsAPIlocalVarJSON);
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
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_blogPostId);
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Delete a blog post comment
//
// Deletes a comment from a specific blog post.
//
empty_envelope_t*
BlogPostsAPI_deleteCommentFromBlogPostAsync(apiClient_t *apiClient, char *tenantId, char *blogPostId, char *commentId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/ContentService/BlogPosts/{blogPostId}/Comments/{commentId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/ContentService/BlogPosts/{blogPostId}/Comments/{commentId}");


    // Path Params
    long sizeOfPathParams_blogPostId = strlen(blogPostId)+3 + strlen(commentId)+3 + strlen("{ blogPostId }");
    if(blogPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_blogPostId = malloc(sizeOfPathParams_blogPostId);
    sprintf(localVarToReplace_blogPostId, "{%s}", "blogPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_blogPostId, blogPostId);
    if(blogPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_blogPostId = malloc(sizeOfPathParams_blogPostId);
    sprintf(localVarToReplace_blogPostId, "{%s}", "blogPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_blogPostId, blogPostId);

    // Path Params
    long sizeOfPathParams_commentId = strlen(blogPostId)+3 + strlen(commentId)+3 + strlen("{ commentId }");
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
    cJSON *BlogPostsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(BlogPostsAPIlocalVarJSON);
    cJSON_Delete(BlogPostsAPIlocalVarJSON);
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
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_blogPostId);
    free(localVarToReplace_commentId);
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get a blog post by ID
//
// Retrieves a single blog post by its unique identifier.
//
blog_post_dto_envelope_t*
BlogPostsAPI_getBlogPostByIdAsync(apiClient_t *apiClient, char *blogPostId)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/ContentService/BlogPosts/{blogPostId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/ContentService/BlogPosts/{blogPostId}");


    // Path Params
    long sizeOfPathParams_blogPostId = strlen(blogPostId)+3 + strlen("{ blogPostId }");
    if(blogPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_blogPostId = malloc(sizeOfPathParams_blogPostId);
    sprintf(localVarToReplace_blogPostId, "{%s}", "blogPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_blogPostId, blogPostId);
    if(blogPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_blogPostId = malloc(sizeOfPathParams_blogPostId);
    sprintf(localVarToReplace_blogPostId, "{%s}", "blogPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_blogPostId, blogPostId);


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
    cJSON *BlogPostsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    blog_post_dto_envelope_t *elementToReturn = blog_post_dto_envelope_parseFromJSON(BlogPostsAPIlocalVarJSON);
    cJSON_Delete(BlogPostsAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_blogPostId);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve a list of blog posts
//
// Retrieves all blog posts, optionally filtered by tenant using OData query options.
//
blog_post_dto_list_envelope_t*
BlogPostsAPI_getBlogPostsAsync(apiClient_t *apiClient, char *tenantId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/ContentService/BlogPosts")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/ContentService/BlogPosts");




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
    cJSON *BlogPostsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    blog_post_dto_list_envelope_t *elementToReturn = blog_post_dto_list_envelope_parseFromJSON(BlogPostsAPIlocalVarJSON);
    cJSON_Delete(BlogPostsAPIlocalVarJSON);
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
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get the count of blog posts
//
// Returns the total count of blog posts, optionally filtered by tenant using OData query options.
//
int32_envelope_t*
BlogPostsAPI_getBlogPostsCountAsync(apiClient_t *apiClient, char *tenantId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/ContentService/BlogPosts/Count")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/ContentService/BlogPosts/Count");




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
    cJSON *BlogPostsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    int32_envelope_t *elementToReturn = int32_envelope_parseFromJSON(BlogPostsAPIlocalVarJSON);
    cJSON_Delete(BlogPostsAPIlocalVarJSON);
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
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get categories for a blog post
//
// Retrieves all categories related to a specific blog post.
//
blog_post_category_dto_list_envelope_t*
BlogPostsAPI_getCategoriesForBlogPostAsync(apiClient_t *apiClient, char *blogPostId)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/ContentService/BlogPosts/{blogPostId}/Categories")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/ContentService/BlogPosts/{blogPostId}/Categories");


    // Path Params
    long sizeOfPathParams_blogPostId = strlen(blogPostId)+3 + strlen("{ blogPostId }");
    if(blogPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_blogPostId = malloc(sizeOfPathParams_blogPostId);
    sprintf(localVarToReplace_blogPostId, "{%s}", "blogPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_blogPostId, blogPostId);
    if(blogPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_blogPostId = malloc(sizeOfPathParams_blogPostId);
    sprintf(localVarToReplace_blogPostId, "{%s}", "blogPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_blogPostId, blogPostId);


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
    cJSON *BlogPostsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    blog_post_category_dto_list_envelope_t *elementToReturn = blog_post_category_dto_list_envelope_parseFromJSON(BlogPostsAPIlocalVarJSON);
    cJSON_Delete(BlogPostsAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_blogPostId);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get comments for a blog post
//
// Retrieves all comments for a specific blog post.
//
blog_post_comment_dto_list_envelope_t*
BlogPostsAPI_getCommentsForBlogPostAsync(apiClient_t *apiClient, char *blogPostId)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/ContentService/BlogPosts/{blogPostId}/Comments")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/ContentService/BlogPosts/{blogPostId}/Comments");


    // Path Params
    long sizeOfPathParams_blogPostId = strlen(blogPostId)+3 + strlen("{ blogPostId }");
    if(blogPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_blogPostId = malloc(sizeOfPathParams_blogPostId);
    sprintf(localVarToReplace_blogPostId, "{%s}", "blogPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_blogPostId, blogPostId);
    if(blogPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_blogPostId = malloc(sizeOfPathParams_blogPostId);
    sprintf(localVarToReplace_blogPostId, "{%s}", "blogPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_blogPostId, blogPostId);


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
    cJSON *BlogPostsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    blog_post_comment_dto_list_envelope_t *elementToReturn = blog_post_comment_dto_list_envelope_parseFromJSON(BlogPostsAPIlocalVarJSON);
    cJSON_Delete(BlogPostsAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_blogPostId);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get replies for a comment
//
// Retrieves all replies for a specific blog post comment.
//
blog_post_comment_dto_list_envelope_t*
BlogPostsAPI_getRepliesForCommentAsync(apiClient_t *apiClient, char *commentId, char *blogPostId)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/ContentService/BlogPosts/{blogPostId}/Comments/{commentId}/Replies")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/ContentService/BlogPosts/{blogPostId}/Comments/{commentId}/Replies");


    // Path Params
    long sizeOfPathParams_commentId = strlen(commentId)+3 + strlen(blogPostId)+3 + strlen("{ commentId }");
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

    // Path Params
    long sizeOfPathParams_blogPostId = strlen(commentId)+3 + strlen(blogPostId)+3 + strlen("{ blogPostId }");
    if(blogPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_blogPostId = malloc(sizeOfPathParams_blogPostId);
    sprintf(localVarToReplace_blogPostId, "{%s}", "blogPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_blogPostId, blogPostId);


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
    cJSON *BlogPostsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    blog_post_comment_dto_list_envelope_t *elementToReturn = blog_post_comment_dto_list_envelope_parseFromJSON(BlogPostsAPIlocalVarJSON);
    cJSON_Delete(BlogPostsAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_commentId);
    free(localVarToReplace_blogPostId);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get tags for a blog post
//
// Retrieves all tags related to a specific blog post.
//
blog_post_tag_dto_list_envelope_t*
BlogPostsAPI_getTagsForBlogPostAsync(apiClient_t *apiClient, char *blogPostId)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/ContentService/BlogPosts/{blogPostId}/Tags")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/ContentService/BlogPosts/{blogPostId}/Tags");


    // Path Params
    long sizeOfPathParams_blogPostId = strlen(blogPostId)+3 + strlen("{ blogPostId }");
    if(blogPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_blogPostId = malloc(sizeOfPathParams_blogPostId);
    sprintf(localVarToReplace_blogPostId, "{%s}", "blogPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_blogPostId, blogPostId);
    if(blogPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_blogPostId = malloc(sizeOfPathParams_blogPostId);
    sprintf(localVarToReplace_blogPostId, "{%s}", "blogPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_blogPostId, blogPostId);


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
    cJSON *BlogPostsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    blog_post_tag_dto_list_envelope_t *elementToReturn = blog_post_tag_dto_list_envelope_parseFromJSON(BlogPostsAPIlocalVarJSON);
    cJSON_Delete(BlogPostsAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_blogPostId);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Relate an existing category to a blog post
//
// Creates a relationship between an existing category and a blog post.
//
empty_envelope_t*
BlogPostsAPI_relateCategoryToBlogPostAsync(apiClient_t *apiClient, char *tenantId, char *blogPostId, char *categoryId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/ContentService/BlogPosts/{blogPostId}/Categories/{categoryId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/ContentService/BlogPosts/{blogPostId}/Categories/{categoryId}");


    // Path Params
    long sizeOfPathParams_blogPostId = strlen(blogPostId)+3 + strlen(categoryId)+3 + strlen("{ blogPostId }");
    if(blogPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_blogPostId = malloc(sizeOfPathParams_blogPostId);
    sprintf(localVarToReplace_blogPostId, "{%s}", "blogPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_blogPostId, blogPostId);
    if(blogPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_blogPostId = malloc(sizeOfPathParams_blogPostId);
    sprintf(localVarToReplace_blogPostId, "{%s}", "blogPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_blogPostId, blogPostId);

    // Path Params
    long sizeOfPathParams_categoryId = strlen(blogPostId)+3 + strlen(categoryId)+3 + strlen("{ categoryId }");
    if(categoryId == NULL) {
        goto end;
    }
    char* localVarToReplace_categoryId = malloc(sizeOfPathParams_categoryId);
    sprintf(localVarToReplace_categoryId, "{%s}", "categoryId");

    localVarPath = strReplace(localVarPath, localVarToReplace_categoryId, categoryId);
    if(categoryId == NULL) {
        goto end;
    }
    char* localVarToReplace_categoryId = malloc(sizeOfPathParams_categoryId);
    sprintf(localVarToReplace_categoryId, "{%s}", "categoryId");

    localVarPath = strReplace(localVarPath, localVarToReplace_categoryId, categoryId);



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
    //if (apiClient->response_code == 201) {
    //    printf("%s\n","Created");
    //}
    //nonprimitive not container
    cJSON *BlogPostsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(BlogPostsAPIlocalVarJSON);
    cJSON_Delete(BlogPostsAPIlocalVarJSON);
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
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_blogPostId);
    free(localVarToReplace_categoryId);
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Relate an existing tag to a blog post
//
// Creates a relationship between an existing tag and a blog post.
//
empty_envelope_t*
BlogPostsAPI_relateTagToBlogPostAsync(apiClient_t *apiClient, char *tenantId, char *blogPostId, char *tagId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/ContentService/BlogPosts/{blogPostId}/Tags/{tagId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/ContentService/BlogPosts/{blogPostId}/Tags/{tagId}");


    // Path Params
    long sizeOfPathParams_blogPostId = strlen(blogPostId)+3 + strlen(tagId)+3 + strlen("{ blogPostId }");
    if(blogPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_blogPostId = malloc(sizeOfPathParams_blogPostId);
    sprintf(localVarToReplace_blogPostId, "{%s}", "blogPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_blogPostId, blogPostId);
    if(blogPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_blogPostId = malloc(sizeOfPathParams_blogPostId);
    sprintf(localVarToReplace_blogPostId, "{%s}", "blogPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_blogPostId, blogPostId);

    // Path Params
    long sizeOfPathParams_tagId = strlen(blogPostId)+3 + strlen(tagId)+3 + strlen("{ tagId }");
    if(tagId == NULL) {
        goto end;
    }
    char* localVarToReplace_tagId = malloc(sizeOfPathParams_tagId);
    sprintf(localVarToReplace_tagId, "{%s}", "tagId");

    localVarPath = strReplace(localVarPath, localVarToReplace_tagId, tagId);
    if(tagId == NULL) {
        goto end;
    }
    char* localVarToReplace_tagId = malloc(sizeOfPathParams_tagId);
    sprintf(localVarToReplace_tagId, "{%s}", "tagId");

    localVarPath = strReplace(localVarPath, localVarToReplace_tagId, tagId);



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
    //if (apiClient->response_code == 201) {
    //    printf("%s\n","Created");
    //}
    //nonprimitive not container
    cJSON *BlogPostsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(BlogPostsAPIlocalVarJSON);
    cJSON_Delete(BlogPostsAPIlocalVarJSON);
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
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_blogPostId);
    free(localVarToReplace_tagId);
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Reply to a blog post comment
//
// Creates a reply to an existing comment on a blog post.
//
empty_envelope_t*
BlogPostsAPI_replyToCommentAsync(apiClient_t *apiClient, char *tenantId, char *blogPostId, char *commentId, blog_post_comment_create_dto_t *blog_post_comment_create_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/ContentService/BlogPosts/{blogPostId}/Comments/{commentId}/Reply")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/ContentService/BlogPosts/{blogPostId}/Comments/{commentId}/Reply");


    // Path Params
    long sizeOfPathParams_blogPostId = strlen(blogPostId)+3 + strlen(commentId)+3 + strlen("{ blogPostId }");
    if(blogPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_blogPostId = malloc(sizeOfPathParams_blogPostId);
    sprintf(localVarToReplace_blogPostId, "{%s}", "blogPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_blogPostId, blogPostId);
    if(blogPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_blogPostId = malloc(sizeOfPathParams_blogPostId);
    sprintf(localVarToReplace_blogPostId, "{%s}", "blogPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_blogPostId, blogPostId);

    // Path Params
    long sizeOfPathParams_commentId = strlen(blogPostId)+3 + strlen(commentId)+3 + strlen("{ commentId }");
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

    // Body Param
    cJSON *localVarSingleItemJSON_blog_post_comment_create_dto = NULL;
    if (blog_post_comment_create_dto != NULL)
    {
        //string
        localVarSingleItemJSON_blog_post_comment_create_dto = blog_post_comment_create_dto_convertToJSON(blog_post_comment_create_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_blog_post_comment_create_dto);
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
    cJSON *BlogPostsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(BlogPostsAPIlocalVarJSON);
    cJSON_Delete(BlogPostsAPIlocalVarJSON);
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
    
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_blogPostId);
    free(localVarToReplace_commentId);
    if (localVarSingleItemJSON_blog_post_comment_create_dto) {
        cJSON_Delete(localVarSingleItemJSON_blog_post_comment_create_dto);
        localVarSingleItemJSON_blog_post_comment_create_dto = NULL;
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Remove a category from a blog post
//
// Removes the relationship between a category and a blog post.
//
empty_envelope_t*
BlogPostsAPI_unrelateCategoryFromBlogPostAsync(apiClient_t *apiClient, char *tenantId, char *blogPostId, char *categoryId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/ContentService/BlogPosts/{blogPostId}/Categories/{categoryId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/ContentService/BlogPosts/{blogPostId}/Categories/{categoryId}");


    // Path Params
    long sizeOfPathParams_blogPostId = strlen(blogPostId)+3 + strlen(categoryId)+3 + strlen("{ blogPostId }");
    if(blogPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_blogPostId = malloc(sizeOfPathParams_blogPostId);
    sprintf(localVarToReplace_blogPostId, "{%s}", "blogPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_blogPostId, blogPostId);
    if(blogPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_blogPostId = malloc(sizeOfPathParams_blogPostId);
    sprintf(localVarToReplace_blogPostId, "{%s}", "blogPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_blogPostId, blogPostId);

    // Path Params
    long sizeOfPathParams_categoryId = strlen(blogPostId)+3 + strlen(categoryId)+3 + strlen("{ categoryId }");
    if(categoryId == NULL) {
        goto end;
    }
    char* localVarToReplace_categoryId = malloc(sizeOfPathParams_categoryId);
    sprintf(localVarToReplace_categoryId, "{%s}", "categoryId");

    localVarPath = strReplace(localVarPath, localVarToReplace_categoryId, categoryId);
    if(categoryId == NULL) {
        goto end;
    }
    char* localVarToReplace_categoryId = malloc(sizeOfPathParams_categoryId);
    sprintf(localVarToReplace_categoryId, "{%s}", "categoryId");

    localVarPath = strReplace(localVarPath, localVarToReplace_categoryId, categoryId);



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
    cJSON *BlogPostsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(BlogPostsAPIlocalVarJSON);
    cJSON_Delete(BlogPostsAPIlocalVarJSON);
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
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_blogPostId);
    free(localVarToReplace_categoryId);
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Remove a tag from a blog post
//
// Removes the relationship between a tag and a blog post.
//
empty_envelope_t*
BlogPostsAPI_unrelateTagFromBlogPostAsync(apiClient_t *apiClient, char *tenantId, char *blogPostId, char *tagId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/ContentService/BlogPosts/{blogPostId}/Tags/{tagId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/ContentService/BlogPosts/{blogPostId}/Tags/{tagId}");


    // Path Params
    long sizeOfPathParams_blogPostId = strlen(blogPostId)+3 + strlen(tagId)+3 + strlen("{ blogPostId }");
    if(blogPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_blogPostId = malloc(sizeOfPathParams_blogPostId);
    sprintf(localVarToReplace_blogPostId, "{%s}", "blogPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_blogPostId, blogPostId);
    if(blogPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_blogPostId = malloc(sizeOfPathParams_blogPostId);
    sprintf(localVarToReplace_blogPostId, "{%s}", "blogPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_blogPostId, blogPostId);

    // Path Params
    long sizeOfPathParams_tagId = strlen(blogPostId)+3 + strlen(tagId)+3 + strlen("{ tagId }");
    if(tagId == NULL) {
        goto end;
    }
    char* localVarToReplace_tagId = malloc(sizeOfPathParams_tagId);
    sprintf(localVarToReplace_tagId, "{%s}", "tagId");

    localVarPath = strReplace(localVarPath, localVarToReplace_tagId, tagId);
    if(tagId == NULL) {
        goto end;
    }
    char* localVarToReplace_tagId = malloc(sizeOfPathParams_tagId);
    sprintf(localVarToReplace_tagId, "{%s}", "tagId");

    localVarPath = strReplace(localVarPath, localVarToReplace_tagId, tagId);



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
    cJSON *BlogPostsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(BlogPostsAPIlocalVarJSON);
    cJSON_Delete(BlogPostsAPIlocalVarJSON);
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
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_blogPostId);
    free(localVarToReplace_tagId);
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Update a blog post
//
// Updates an existing blog post for the specified tenant.
//
empty_envelope_t*
BlogPostsAPI_updateBlogPostAsync(apiClient_t *apiClient, char *tenantId, char *blogPostId, blog_post_update_dto_t *blog_post_update_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/ContentService/BlogPosts/{blogPostId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/ContentService/BlogPosts/{blogPostId}");


    // Path Params
    long sizeOfPathParams_blogPostId = strlen(blogPostId)+3 + strlen("{ blogPostId }");
    if(blogPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_blogPostId = malloc(sizeOfPathParams_blogPostId);
    sprintf(localVarToReplace_blogPostId, "{%s}", "blogPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_blogPostId, blogPostId);
    if(blogPostId == NULL) {
        goto end;
    }
    char* localVarToReplace_blogPostId = malloc(sizeOfPathParams_blogPostId);
    sprintf(localVarToReplace_blogPostId, "{%s}", "blogPostId");

    localVarPath = strReplace(localVarPath, localVarToReplace_blogPostId, blogPostId);



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

    // Body Param
    cJSON *localVarSingleItemJSON_blog_post_update_dto = NULL;
    if (blog_post_update_dto != NULL)
    {
        //string
        localVarSingleItemJSON_blog_post_update_dto = blog_post_update_dto_convertToJSON(blog_post_update_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_blog_post_update_dto);
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
    cJSON *BlogPostsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(BlogPostsAPIlocalVarJSON);
    cJSON_Delete(BlogPostsAPIlocalVarJSON);
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
    
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_blogPostId);
    if (localVarSingleItemJSON_blog_post_update_dto) {
        cJSON_Delete(localVarSingleItemJSON_blog_post_update_dto);
        localVarSingleItemJSON_blog_post_update_dto = NULL;
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

