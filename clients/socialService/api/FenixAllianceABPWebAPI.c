#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "FenixAllianceABPWebAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


void
FenixAllianceABPWebAPI_forgotPasswordPost(apiClient_t *apiClient, forgot_password_request_t *forgot_password_request)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/forgotPassword")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/forgotPassword");




    // Body Param
    cJSON *localVarSingleItemJSON_forgot_password_request = NULL;
    if (forgot_password_request != NULL)
    {
        //string
        localVarSingleItemJSON_forgot_password_request = forgot_password_request_convertToJSON(forgot_password_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_forgot_password_request);
    }
    list_addElement(localVarHeaderType,"application/problem+json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad Request");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    if (localVarSingleItemJSON_forgot_password_request) {
        cJSON_Delete(localVarSingleItemJSON_forgot_password_request);
        localVarSingleItemJSON_forgot_password_request = NULL;
    }
    free(localVarBodyParameters);

}

void
FenixAllianceABPWebAPI_healthGet(apiClient_t *apiClient)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = NULL;
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/health")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/health");



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
    
    
    
    
    
    free(localVarPath);

}

void
FenixAllianceABPWebAPI_helloGet(apiClient_t *apiClient)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = NULL;
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/hello")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/hello");



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
    
    
    
    
    
    free(localVarPath);

}

access_token_response_t*
FenixAllianceABPWebAPI_loginPost(apiClient_t *apiClient, login_request_t *login_request, int *useCookies, int *useSessionCookies)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/login")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/login");




    // query parameters
    char *keyQuery_useCookies = NULL;
    char * valueQuery_useCookies = NULL;
    keyValuePair_t *keyPairQuery_useCookies = 0;
    if (useCookies)
    {
        keyQuery_useCookies = strdup("useCookies");
        valueQuery_useCookies = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_useCookies, MAX_NUMBER_LENGTH, "%d", *useCookies);
        keyPairQuery_useCookies = keyValuePair_create(keyQuery_useCookies, valueQuery_useCookies);
        list_addElement(localVarQueryParameters,keyPairQuery_useCookies);
    }

    // query parameters
    char *keyQuery_useSessionCookies = NULL;
    char * valueQuery_useSessionCookies = NULL;
    keyValuePair_t *keyPairQuery_useSessionCookies = 0;
    if (useSessionCookies)
    {
        keyQuery_useSessionCookies = strdup("useSessionCookies");
        valueQuery_useSessionCookies = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_useSessionCookies, MAX_NUMBER_LENGTH, "%d", *useSessionCookies);
        keyPairQuery_useSessionCookies = keyValuePair_create(keyQuery_useSessionCookies, valueQuery_useSessionCookies);
        list_addElement(localVarQueryParameters,keyPairQuery_useSessionCookies);
    }

    // Body Param
    cJSON *localVarSingleItemJSON_login_request = NULL;
    if (login_request != NULL)
    {
        //string
        localVarSingleItemJSON_login_request = login_request_convertToJSON(login_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_login_request);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *FenixAllianceABPWebAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    access_token_response_t *elementToReturn = access_token_response_parseFromJSON(FenixAllianceABPWebAPIlocalVarJSON);
    cJSON_Delete(FenixAllianceABPWebAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_login_request) {
        cJSON_Delete(localVarSingleItemJSON_login_request);
        localVarSingleItemJSON_login_request = NULL;
    }
    free(localVarBodyParameters);
    if(keyQuery_useCookies){
        free(keyQuery_useCookies);
        keyQuery_useCookies = NULL;
    }
    if(valueQuery_useCookies){
        free(valueQuery_useCookies);
        valueQuery_useCookies = NULL;
    }
    if(keyPairQuery_useCookies){
        keyValuePair_free(keyPairQuery_useCookies);
        keyPairQuery_useCookies = NULL;
    }
    if(keyQuery_useSessionCookies){
        free(keyQuery_useSessionCookies);
        keyQuery_useSessionCookies = NULL;
    }
    if(valueQuery_useSessionCookies){
        free(valueQuery_useSessionCookies);
        valueQuery_useSessionCookies = NULL;
    }
    if(keyPairQuery_useSessionCookies){
        keyValuePair_free(keyPairQuery_useSessionCookies);
        keyPairQuery_useSessionCookies = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

two_factor_response_t*
FenixAllianceABPWebAPI_manage2faPost(apiClient_t *apiClient, two_factor_request_t *two_factor_request)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/manage/2fa")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/manage/2fa");




    // Body Param
    cJSON *localVarSingleItemJSON_two_factor_request = NULL;
    if (two_factor_request != NULL)
    {
        //string
        localVarSingleItemJSON_two_factor_request = two_factor_request_convertToJSON(two_factor_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_two_factor_request);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/problem+json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad Request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    //nonprimitive not container
    cJSON *FenixAllianceABPWebAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    two_factor_response_t *elementToReturn = two_factor_response_parseFromJSON(FenixAllianceABPWebAPIlocalVarJSON);
    cJSON_Delete(FenixAllianceABPWebAPIlocalVarJSON);
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
    list_freeList(localVarContentType);
    free(localVarPath);
    if (localVarSingleItemJSON_two_factor_request) {
        cJSON_Delete(localVarSingleItemJSON_two_factor_request);
        localVarSingleItemJSON_two_factor_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

info_response_t*
FenixAllianceABPWebAPI_manageInfoGet(apiClient_t *apiClient)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/manage/info")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/manage/info");



    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/problem+json"); //produces
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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad Request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    //nonprimitive not container
    cJSON *FenixAllianceABPWebAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    info_response_t *elementToReturn = info_response_parseFromJSON(FenixAllianceABPWebAPIlocalVarJSON);
    cJSON_Delete(FenixAllianceABPWebAPIlocalVarJSON);
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

info_response_t*
FenixAllianceABPWebAPI_manageInfoPost(apiClient_t *apiClient, info_request_t *info_request)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/manage/info")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/manage/info");




    // Body Param
    cJSON *localVarSingleItemJSON_info_request = NULL;
    if (info_request != NULL)
    {
        //string
        localVarSingleItemJSON_info_request = info_request_convertToJSON(info_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_info_request);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/problem+json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad Request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    //nonprimitive not container
    cJSON *FenixAllianceABPWebAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    info_response_t *elementToReturn = info_response_parseFromJSON(FenixAllianceABPWebAPIlocalVarJSON);
    cJSON_Delete(FenixAllianceABPWebAPIlocalVarJSON);
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
    list_freeList(localVarContentType);
    free(localVarPath);
    if (localVarSingleItemJSON_info_request) {
        cJSON_Delete(localVarSingleItemJSON_info_request);
        localVarSingleItemJSON_info_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

void
FenixAllianceABPWebAPI_mapIdentityApiConfirmEmail(apiClient_t *apiClient, char *userId, char *code, char *changedEmail)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = NULL;
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/confirmEmail")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/confirmEmail");




    // query parameters
    char *keyQuery_userId = NULL;
    char * valueQuery_userId = NULL;
    keyValuePair_t *keyPairQuery_userId = 0;
    if (userId)
    {
        keyQuery_userId = strdup("userId");
        valueQuery_userId = strdup((userId));
        keyPairQuery_userId = keyValuePair_create(keyQuery_userId, valueQuery_userId);
        list_addElement(localVarQueryParameters,keyPairQuery_userId);
    }

    // query parameters
    char *keyQuery_code = NULL;
    char * valueQuery_code = NULL;
    keyValuePair_t *keyPairQuery_code = 0;
    if (code)
    {
        keyQuery_code = strdup("code");
        valueQuery_code = strdup((code));
        keyPairQuery_code = keyValuePair_create(keyQuery_code, valueQuery_code);
        list_addElement(localVarQueryParameters,keyPairQuery_code);
    }

    // query parameters
    char *keyQuery_changedEmail = NULL;
    char * valueQuery_changedEmail = NULL;
    keyValuePair_t *keyPairQuery_changedEmail = 0;
    if (changedEmail)
    {
        keyQuery_changedEmail = strdup("changedEmail");
        valueQuery_changedEmail = strdup((changedEmail));
        keyPairQuery_changedEmail = keyValuePair_create(keyQuery_changedEmail, valueQuery_changedEmail);
        list_addElement(localVarQueryParameters,keyPairQuery_changedEmail);
    }
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
    
    
    
    
    free(localVarPath);
    if(keyQuery_userId){
        free(keyQuery_userId);
        keyQuery_userId = NULL;
    }
    if(valueQuery_userId){
        free(valueQuery_userId);
        valueQuery_userId = NULL;
    }
    if(keyPairQuery_userId){
        keyValuePair_free(keyPairQuery_userId);
        keyPairQuery_userId = NULL;
    }
    if(keyQuery_userId){
        free(keyQuery_userId);
        keyQuery_userId = NULL;
    }
    if(keyPairQuery_userId){
        keyValuePair_free(keyPairQuery_userId);
        keyPairQuery_userId = NULL;
    }
    if(keyQuery_code){
        free(keyQuery_code);
        keyQuery_code = NULL;
    }
    if(valueQuery_code){
        free(valueQuery_code);
        valueQuery_code = NULL;
    }
    if(keyPairQuery_code){
        keyValuePair_free(keyPairQuery_code);
        keyPairQuery_code = NULL;
    }
    if(keyQuery_code){
        free(keyQuery_code);
        keyQuery_code = NULL;
    }
    if(keyPairQuery_code){
        keyValuePair_free(keyPairQuery_code);
        keyPairQuery_code = NULL;
    }
    if(keyQuery_changedEmail){
        free(keyQuery_changedEmail);
        keyQuery_changedEmail = NULL;
    }
    if(valueQuery_changedEmail){
        free(valueQuery_changedEmail);
        valueQuery_changedEmail = NULL;
    }
    if(keyPairQuery_changedEmail){
        keyValuePair_free(keyPairQuery_changedEmail);
        keyPairQuery_changedEmail = NULL;
    }
    if(keyQuery_changedEmail){
        free(keyQuery_changedEmail);
        keyQuery_changedEmail = NULL;
    }
    if(keyPairQuery_changedEmail){
        keyValuePair_free(keyPairQuery_changedEmail);
        keyPairQuery_changedEmail = NULL;
    }

}

access_token_response_t*
FenixAllianceABPWebAPI_refreshPost(apiClient_t *apiClient, refresh_request_t *refresh_request)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/refresh")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/refresh");




    // Body Param
    cJSON *localVarSingleItemJSON_refresh_request = NULL;
    if (refresh_request != NULL)
    {
        //string
        localVarSingleItemJSON_refresh_request = refresh_request_convertToJSON(refresh_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_refresh_request);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *FenixAllianceABPWebAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    access_token_response_t *elementToReturn = access_token_response_parseFromJSON(FenixAllianceABPWebAPIlocalVarJSON);
    cJSON_Delete(FenixAllianceABPWebAPIlocalVarJSON);
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
    list_freeList(localVarContentType);
    free(localVarPath);
    if (localVarSingleItemJSON_refresh_request) {
        cJSON_Delete(localVarSingleItemJSON_refresh_request);
        localVarSingleItemJSON_refresh_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

void
FenixAllianceABPWebAPI_registerPost(apiClient_t *apiClient, register_request_t *register_request)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/register")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/register");




    // Body Param
    cJSON *localVarSingleItemJSON_register_request = NULL;
    if (register_request != NULL)
    {
        //string
        localVarSingleItemJSON_register_request = register_request_convertToJSON(register_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_register_request);
    }
    list_addElement(localVarHeaderType,"application/problem+json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad Request");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    if (localVarSingleItemJSON_register_request) {
        cJSON_Delete(localVarSingleItemJSON_register_request);
        localVarSingleItemJSON_register_request = NULL;
    }
    free(localVarBodyParameters);

}

void
FenixAllianceABPWebAPI_resendConfirmationEmailPost(apiClient_t *apiClient, resend_confirmation_email_request_t *resend_confirmation_email_request)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = NULL;
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/resendConfirmationEmail")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/resendConfirmationEmail");




    // Body Param
    cJSON *localVarSingleItemJSON_resend_confirmation_email_request = NULL;
    if (resend_confirmation_email_request != NULL)
    {
        //string
        localVarSingleItemJSON_resend_confirmation_email_request = resend_confirmation_email_request_convertToJSON(resend_confirmation_email_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_resend_confirmation_email_request);
    }
    list_addElement(localVarContentType,"application/json"); //consumes
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
    
    
    
    
    list_freeList(localVarContentType);
    free(localVarPath);
    if (localVarSingleItemJSON_resend_confirmation_email_request) {
        cJSON_Delete(localVarSingleItemJSON_resend_confirmation_email_request);
        localVarSingleItemJSON_resend_confirmation_email_request = NULL;
    }
    free(localVarBodyParameters);

}

void
FenixAllianceABPWebAPI_resetPasswordPost(apiClient_t *apiClient, reset_password_request_t *reset_password_request)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/resetPassword")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/resetPassword");




    // Body Param
    cJSON *localVarSingleItemJSON_reset_password_request = NULL;
    if (reset_password_request != NULL)
    {
        //string
        localVarSingleItemJSON_reset_password_request = reset_password_request_convertToJSON(reset_password_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_reset_password_request);
    }
    list_addElement(localVarHeaderType,"application/problem+json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad Request");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    if (localVarSingleItemJSON_reset_password_request) {
        cJSON_Delete(localVarSingleItemJSON_reset_password_request);
        localVarSingleItemJSON_reset_password_request = NULL;
    }
    free(localVarBodyParameters);

}

void
FenixAllianceABPWebAPI_versionGet(apiClient_t *apiClient)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = NULL;
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/version")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/version");



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
    
    
    
    
    
    free(localVarPath);

}

