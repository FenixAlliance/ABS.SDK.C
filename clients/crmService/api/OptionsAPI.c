#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "OptionsAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Create a new contact option
//
// Create a new option for a contact
//
empty_envelope_t*
OptionsAPI_createContactOption(apiClient_t *apiClient, char *tenantId, char *contactId, char *key, char *portalId, char *api_version, char *x_api_version, option_create_dto_t *option_create_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CrmService/Contacts/{contactId}/Options")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CrmService/Contacts/{contactId}/Options");


    // Path Params
    long sizeOfPathParams_contactId = strlen(contactId)+3 + strlen("{ contactId }");
    if(contactId == NULL) {
        goto end;
    }
    char* localVarToReplace_contactId = malloc(sizeOfPathParams_contactId);
    sprintf(localVarToReplace_contactId, "{%s}", "contactId");

    localVarPath = strReplace(localVarPath, localVarToReplace_contactId, contactId);
    if(contactId == NULL) {
        goto end;
    }
    char* localVarToReplace_contactId = malloc(sizeOfPathParams_contactId);
    sprintf(localVarToReplace_contactId, "{%s}", "contactId");

    localVarPath = strReplace(localVarPath, localVarToReplace_contactId, contactId);



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
    char *keyQuery_key = NULL;
    char * valueQuery_key = NULL;
    keyValuePair_t *keyPairQuery_key = 0;
    if (key)
    {
        keyQuery_key = strdup("key");
        valueQuery_key = strdup((key));
        keyPairQuery_key = keyValuePair_create(keyQuery_key, valueQuery_key);
        list_addElement(localVarQueryParameters,keyPairQuery_key);
    }

    // query parameters
    char *keyQuery_portalId = NULL;
    char * valueQuery_portalId = NULL;
    keyValuePair_t *keyPairQuery_portalId = 0;
    if (portalId)
    {
        keyQuery_portalId = strdup("portalId");
        valueQuery_portalId = strdup((portalId));
        keyPairQuery_portalId = keyValuePair_create(keyQuery_portalId, valueQuery_portalId);
        list_addElement(localVarQueryParameters,keyPairQuery_portalId);
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
    cJSON *localVarSingleItemJSON_option_create_dto = NULL;
    if (option_create_dto != NULL)
    {
        //string
        localVarSingleItemJSON_option_create_dto = option_create_dto_convertToJSON(option_create_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_option_create_dto);
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
    cJSON *OptionsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(OptionsAPIlocalVarJSON);
    cJSON_Delete(OptionsAPIlocalVarJSON);
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
    free(localVarToReplace_contactId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
    if (localVarSingleItemJSON_option_create_dto) {
        cJSON_Delete(localVarSingleItemJSON_option_create_dto);
        localVarSingleItemJSON_option_create_dto = NULL;
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
    if(keyQuery_key){
        free(keyQuery_key);
        keyQuery_key = NULL;
    }
    if(valueQuery_key){
        free(valueQuery_key);
        valueQuery_key = NULL;
    }
    if(keyPairQuery_key){
        keyValuePair_free(keyPairQuery_key);
        keyPairQuery_key = NULL;
    }
    if(keyQuery_portalId){
        free(keyQuery_portalId);
        keyQuery_portalId = NULL;
    }
    if(valueQuery_portalId){
        free(valueQuery_portalId);
        valueQuery_portalId = NULL;
    }
    if(keyPairQuery_portalId){
        keyValuePair_free(keyPairQuery_portalId);
        keyPairQuery_portalId = NULL;
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

// Delete a contact option
//
// Delete a contact option
//
empty_envelope_t*
OptionsAPI_deleteContactOption(apiClient_t *apiClient, char *tenantId, char *contactId, char *optionId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CrmService/Contacts/{contactId}/Options/{optionId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CrmService/Contacts/{contactId}/Options/{optionId}");


    // Path Params
    long sizeOfPathParams_contactId = strlen(contactId)+3 + strlen(optionId)+3 + strlen("{ contactId }");
    if(contactId == NULL) {
        goto end;
    }
    char* localVarToReplace_contactId = malloc(sizeOfPathParams_contactId);
    sprintf(localVarToReplace_contactId, "{%s}", "contactId");

    localVarPath = strReplace(localVarPath, localVarToReplace_contactId, contactId);
    if(contactId == NULL) {
        goto end;
    }
    char* localVarToReplace_contactId = malloc(sizeOfPathParams_contactId);
    sprintf(localVarToReplace_contactId, "{%s}", "contactId");

    localVarPath = strReplace(localVarPath, localVarToReplace_contactId, contactId);

    // Path Params
    long sizeOfPathParams_optionId = strlen(contactId)+3 + strlen(optionId)+3 + strlen("{ optionId }");
    if(optionId == NULL) {
        goto end;
    }
    char* localVarToReplace_optionId = malloc(sizeOfPathParams_optionId);
    sprintf(localVarToReplace_optionId, "{%s}", "optionId");

    localVarPath = strReplace(localVarPath, localVarToReplace_optionId, optionId);
    if(optionId == NULL) {
        goto end;
    }
    char* localVarToReplace_optionId = malloc(sizeOfPathParams_optionId);
    sprintf(localVarToReplace_optionId, "{%s}", "optionId");

    localVarPath = strReplace(localVarPath, localVarToReplace_optionId, optionId);



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
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *OptionsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(OptionsAPIlocalVarJSON);
    cJSON_Delete(OptionsAPIlocalVarJSON);
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
    free(localVarToReplace_contactId);
    free(localVarToReplace_optionId);
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

// Retrieve a single contact option by its ID
//
// Retrieve a single contact option by its ID
//
option_dto_envelope_t*
OptionsAPI_getContactOptionById(apiClient_t *apiClient, char *tenantId, char *contactId, char *optionId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CrmService/Contacts/{contactId}/Options/{optionId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CrmService/Contacts/{contactId}/Options/{optionId}");


    // Path Params
    long sizeOfPathParams_contactId = strlen(contactId)+3 + strlen(optionId)+3 + strlen("{ contactId }");
    if(contactId == NULL) {
        goto end;
    }
    char* localVarToReplace_contactId = malloc(sizeOfPathParams_contactId);
    sprintf(localVarToReplace_contactId, "{%s}", "contactId");

    localVarPath = strReplace(localVarPath, localVarToReplace_contactId, contactId);
    if(contactId == NULL) {
        goto end;
    }
    char* localVarToReplace_contactId = malloc(sizeOfPathParams_contactId);
    sprintf(localVarToReplace_contactId, "{%s}", "contactId");

    localVarPath = strReplace(localVarPath, localVarToReplace_contactId, contactId);

    // Path Params
    long sizeOfPathParams_optionId = strlen(contactId)+3 + strlen(optionId)+3 + strlen("{ optionId }");
    if(optionId == NULL) {
        goto end;
    }
    char* localVarToReplace_optionId = malloc(sizeOfPathParams_optionId);
    sprintf(localVarToReplace_optionId, "{%s}", "optionId");

    localVarPath = strReplace(localVarPath, localVarToReplace_optionId, optionId);
    if(optionId == NULL) {
        goto end;
    }
    char* localVarToReplace_optionId = malloc(sizeOfPathParams_optionId);
    sprintf(localVarToReplace_optionId, "{%s}", "optionId");

    localVarPath = strReplace(localVarPath, localVarToReplace_optionId, optionId);



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
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *OptionsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    option_dto_envelope_t *elementToReturn = option_dto_envelope_parseFromJSON(OptionsAPIlocalVarJSON);
    cJSON_Delete(OptionsAPIlocalVarJSON);
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
    free(localVarToReplace_contactId);
    free(localVarToReplace_optionId);
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

// Retrieve a single contact option by its key
//
// Retrieve a single contact option by its key
//
option_dto_envelope_t*
OptionsAPI_getContactOptionByKey(apiClient_t *apiClient, char *tenantId, char *contactId, char *key, char *portalId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CrmService/Contacts/{contactId}/Options/Key/{key}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CrmService/Contacts/{contactId}/Options/Key/{key}");


    // Path Params
    long sizeOfPathParams_contactId = strlen(contactId)+3 + strlen(key)+3 + strlen("{ contactId }");
    if(contactId == NULL) {
        goto end;
    }
    char* localVarToReplace_contactId = malloc(sizeOfPathParams_contactId);
    sprintf(localVarToReplace_contactId, "{%s}", "contactId");

    localVarPath = strReplace(localVarPath, localVarToReplace_contactId, contactId);
    if(contactId == NULL) {
        goto end;
    }
    char* localVarToReplace_contactId = malloc(sizeOfPathParams_contactId);
    sprintf(localVarToReplace_contactId, "{%s}", "contactId");

    localVarPath = strReplace(localVarPath, localVarToReplace_contactId, contactId);

    // Path Params
    long sizeOfPathParams_key = strlen(contactId)+3 + strlen(key)+3 + strlen("{ key }");
    if(key == NULL) {
        goto end;
    }
    char* localVarToReplace_key = malloc(sizeOfPathParams_key);
    sprintf(localVarToReplace_key, "{%s}", "key");

    localVarPath = strReplace(localVarPath, localVarToReplace_key, key);



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
    char *keyQuery_portalId = NULL;
    char * valueQuery_portalId = NULL;
    keyValuePair_t *keyPairQuery_portalId = 0;
    if (portalId)
    {
        keyQuery_portalId = strdup("portalId");
        valueQuery_portalId = strdup((portalId));
        keyPairQuery_portalId = keyValuePair_create(keyQuery_portalId, valueQuery_portalId);
        list_addElement(localVarQueryParameters,keyPairQuery_portalId);
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
    cJSON *OptionsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    option_dto_envelope_t *elementToReturn = option_dto_envelope_parseFromJSON(OptionsAPIlocalVarJSON);
    cJSON_Delete(OptionsAPIlocalVarJSON);
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
    free(localVarToReplace_contactId);
    free(localVarToReplace_key);
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
    if(keyQuery_portalId){
        free(keyQuery_portalId);
        keyQuery_portalId = NULL;
    }
    if(valueQuery_portalId){
        free(valueQuery_portalId);
        valueQuery_portalId = NULL;
    }
    if(keyPairQuery_portalId){
        keyValuePair_free(keyPairQuery_portalId);
        keyPairQuery_portalId = NULL;
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

// Retrieve a list of contact options
//
// Retrieve a list of options for a contact
//
option_dto_list_envelope_t*
OptionsAPI_getContactOptions(apiClient_t *apiClient, char *tenantId, char *contactId, char *portalId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CrmService/Contacts/{contactId}/Options")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CrmService/Contacts/{contactId}/Options");


    // Path Params
    long sizeOfPathParams_contactId = strlen(contactId)+3 + strlen("{ contactId }");
    if(contactId == NULL) {
        goto end;
    }
    char* localVarToReplace_contactId = malloc(sizeOfPathParams_contactId);
    sprintf(localVarToReplace_contactId, "{%s}", "contactId");

    localVarPath = strReplace(localVarPath, localVarToReplace_contactId, contactId);
    if(contactId == NULL) {
        goto end;
    }
    char* localVarToReplace_contactId = malloc(sizeOfPathParams_contactId);
    sprintf(localVarToReplace_contactId, "{%s}", "contactId");

    localVarPath = strReplace(localVarPath, localVarToReplace_contactId, contactId);



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
    char *keyQuery_portalId = NULL;
    char * valueQuery_portalId = NULL;
    keyValuePair_t *keyPairQuery_portalId = 0;
    if (portalId)
    {
        keyQuery_portalId = strdup("portalId");
        valueQuery_portalId = strdup((portalId));
        keyPairQuery_portalId = keyValuePair_create(keyQuery_portalId, valueQuery_portalId);
        list_addElement(localVarQueryParameters,keyPairQuery_portalId);
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
    cJSON *OptionsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    option_dto_list_envelope_t *elementToReturn = option_dto_list_envelope_parseFromJSON(OptionsAPIlocalVarJSON);
    cJSON_Delete(OptionsAPIlocalVarJSON);
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
    free(localVarToReplace_contactId);
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
    if(keyQuery_portalId){
        free(keyQuery_portalId);
        keyQuery_portalId = NULL;
    }
    if(valueQuery_portalId){
        free(valueQuery_portalId);
        valueQuery_portalId = NULL;
    }
    if(keyPairQuery_portalId){
        keyValuePair_free(keyPairQuery_portalId);
        keyPairQuery_portalId = NULL;
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

// Get the count of contact options
//
// Get the count of options for a contact
//
int32_envelope_t*
OptionsAPI_getContactOptionsCount(apiClient_t *apiClient, char *tenantId, char *contactId, char *portalId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CrmService/Contacts/{contactId}/Options/Count")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CrmService/Contacts/{contactId}/Options/Count");


    // Path Params
    long sizeOfPathParams_contactId = strlen(contactId)+3 + strlen("{ contactId }");
    if(contactId == NULL) {
        goto end;
    }
    char* localVarToReplace_contactId = malloc(sizeOfPathParams_contactId);
    sprintf(localVarToReplace_contactId, "{%s}", "contactId");

    localVarPath = strReplace(localVarPath, localVarToReplace_contactId, contactId);
    if(contactId == NULL) {
        goto end;
    }
    char* localVarToReplace_contactId = malloc(sizeOfPathParams_contactId);
    sprintf(localVarToReplace_contactId, "{%s}", "contactId");

    localVarPath = strReplace(localVarPath, localVarToReplace_contactId, contactId);



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
    char *keyQuery_portalId = NULL;
    char * valueQuery_portalId = NULL;
    keyValuePair_t *keyPairQuery_portalId = 0;
    if (portalId)
    {
        keyQuery_portalId = strdup("portalId");
        valueQuery_portalId = strdup((portalId));
        keyPairQuery_portalId = keyValuePair_create(keyQuery_portalId, valueQuery_portalId);
        list_addElement(localVarQueryParameters,keyPairQuery_portalId);
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
    cJSON *OptionsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    int32_envelope_t *elementToReturn = int32_envelope_parseFromJSON(OptionsAPIlocalVarJSON);
    cJSON_Delete(OptionsAPIlocalVarJSON);
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
    free(localVarToReplace_contactId);
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
    if(keyQuery_portalId){
        free(keyQuery_portalId);
        keyQuery_portalId = NULL;
    }
    if(valueQuery_portalId){
        free(valueQuery_portalId);
        valueQuery_portalId = NULL;
    }
    if(keyPairQuery_portalId){
        keyValuePair_free(keyPairQuery_portalId);
        keyPairQuery_portalId = NULL;
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

// Update a contact option
//
// Update a contact option
//
empty_envelope_t*
OptionsAPI_updateContactOption(apiClient_t *apiClient, char *tenantId, char *contactId, char *optionId, char *api_version, char *x_api_version, option_update_dto_t *option_update_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CrmService/Contacts/{contactId}/Options/{optionId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CrmService/Contacts/{contactId}/Options/{optionId}");


    // Path Params
    long sizeOfPathParams_contactId = strlen(contactId)+3 + strlen(optionId)+3 + strlen("{ contactId }");
    if(contactId == NULL) {
        goto end;
    }
    char* localVarToReplace_contactId = malloc(sizeOfPathParams_contactId);
    sprintf(localVarToReplace_contactId, "{%s}", "contactId");

    localVarPath = strReplace(localVarPath, localVarToReplace_contactId, contactId);
    if(contactId == NULL) {
        goto end;
    }
    char* localVarToReplace_contactId = malloc(sizeOfPathParams_contactId);
    sprintf(localVarToReplace_contactId, "{%s}", "contactId");

    localVarPath = strReplace(localVarPath, localVarToReplace_contactId, contactId);

    // Path Params
    long sizeOfPathParams_optionId = strlen(contactId)+3 + strlen(optionId)+3 + strlen("{ optionId }");
    if(optionId == NULL) {
        goto end;
    }
    char* localVarToReplace_optionId = malloc(sizeOfPathParams_optionId);
    sprintf(localVarToReplace_optionId, "{%s}", "optionId");

    localVarPath = strReplace(localVarPath, localVarToReplace_optionId, optionId);
    if(optionId == NULL) {
        goto end;
    }
    char* localVarToReplace_optionId = malloc(sizeOfPathParams_optionId);
    sprintf(localVarToReplace_optionId, "{%s}", "optionId");

    localVarPath = strReplace(localVarPath, localVarToReplace_optionId, optionId);



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
    cJSON *localVarSingleItemJSON_option_update_dto = NULL;
    if (option_update_dto != NULL)
    {
        //string
        localVarSingleItemJSON_option_update_dto = option_update_dto_convertToJSON(option_update_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_option_update_dto);
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
    cJSON *OptionsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(OptionsAPIlocalVarJSON);
    cJSON_Delete(OptionsAPIlocalVarJSON);
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
    free(localVarToReplace_contactId);
    free(localVarToReplace_optionId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
    if (localVarSingleItemJSON_option_update_dto) {
        cJSON_Delete(localVarSingleItemJSON_option_update_dto);
        localVarSingleItemJSON_option_update_dto = NULL;
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

// Create or update a contact option by key
//
// Create or update a contact option by key
//
empty_envelope_t*
OptionsAPI_upsertContactOption(apiClient_t *apiClient, char *tenantId, char *contactId, char *key, char *portalId, char *api_version, char *x_api_version, option_update_dto_t *option_update_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CrmService/Contacts/{contactId}/Options/Upsert/{key}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CrmService/Contacts/{contactId}/Options/Upsert/{key}");


    // Path Params
    long sizeOfPathParams_contactId = strlen(contactId)+3 + strlen(key)+3 + strlen("{ contactId }");
    if(contactId == NULL) {
        goto end;
    }
    char* localVarToReplace_contactId = malloc(sizeOfPathParams_contactId);
    sprintf(localVarToReplace_contactId, "{%s}", "contactId");

    localVarPath = strReplace(localVarPath, localVarToReplace_contactId, contactId);
    if(contactId == NULL) {
        goto end;
    }
    char* localVarToReplace_contactId = malloc(sizeOfPathParams_contactId);
    sprintf(localVarToReplace_contactId, "{%s}", "contactId");

    localVarPath = strReplace(localVarPath, localVarToReplace_contactId, contactId);

    // Path Params
    long sizeOfPathParams_key = strlen(contactId)+3 + strlen(key)+3 + strlen("{ key }");
    if(key == NULL) {
        goto end;
    }
    char* localVarToReplace_key = malloc(sizeOfPathParams_key);
    sprintf(localVarToReplace_key, "{%s}", "key");

    localVarPath = strReplace(localVarPath, localVarToReplace_key, key);



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
    char *keyQuery_portalId = NULL;
    char * valueQuery_portalId = NULL;
    keyValuePair_t *keyPairQuery_portalId = 0;
    if (portalId)
    {
        keyQuery_portalId = strdup("portalId");
        valueQuery_portalId = strdup((portalId));
        keyPairQuery_portalId = keyValuePair_create(keyQuery_portalId, valueQuery_portalId);
        list_addElement(localVarQueryParameters,keyPairQuery_portalId);
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
    cJSON *localVarSingleItemJSON_option_update_dto = NULL;
    if (option_update_dto != NULL)
    {
        //string
        localVarSingleItemJSON_option_update_dto = option_update_dto_convertToJSON(option_update_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_option_update_dto);
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
    cJSON *OptionsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(OptionsAPIlocalVarJSON);
    cJSON_Delete(OptionsAPIlocalVarJSON);
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
    free(localVarToReplace_contactId);
    free(localVarToReplace_key);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
    if (localVarSingleItemJSON_option_update_dto) {
        cJSON_Delete(localVarSingleItemJSON_option_update_dto);
        localVarSingleItemJSON_option_update_dto = NULL;
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
    if(keyQuery_portalId){
        free(keyQuery_portalId);
        keyQuery_portalId = NULL;
    }
    if(valueQuery_portalId){
        free(valueQuery_portalId);
        valueQuery_portalId = NULL;
    }
    if(keyPairQuery_portalId){
        keyValuePair_free(keyPairQuery_portalId);
        keyPairQuery_portalId = NULL;
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

