#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "FiscalResponsibilitiesAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Create a fiscal responsibility
//
// Creates a new fiscal responsibility for a fiscal authority.
//
empty_envelope_t*
FiscalResponsibilitiesAPI_createFiscalResponsibility(apiClient_t *apiClient, tenantId, char *api_version, char *x_api_version, fiscal_responsibility_create_dto_t *fiscal_responsibility_create_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/AccountingService/Fiscals/Authorities/FiscalResponsibilities")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/AccountingService/Fiscals/Authorities/FiscalResponsibilities");




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
     valueQuery_tenantId ;
    keyValuePair_t *keyPairQuery_tenantId = 0;
    if (tenantId)
    {
        keyQuery_tenantId = strdup("tenantId");
        valueQuery_tenantId = (tenantId);
        keyPairQuery_tenantId = keyValuePair_create(keyQuery_tenantId, &valueQuery_tenantId);
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
    cJSON *localVarSingleItemJSON_fiscal_responsibility_create_dto = NULL;
    if (fiscal_responsibility_create_dto != NULL)
    {
        //string
        localVarSingleItemJSON_fiscal_responsibility_create_dto = fiscal_responsibility_create_dto_convertToJSON(fiscal_responsibility_create_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_fiscal_responsibility_create_dto);
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
    cJSON *FiscalResponsibilitiesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(FiscalResponsibilitiesAPIlocalVarJSON);
    cJSON_Delete(FiscalResponsibilitiesAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_fiscal_responsibility_create_dto) {
        cJSON_Delete(localVarSingleItemJSON_fiscal_responsibility_create_dto);
        localVarSingleItemJSON_fiscal_responsibility_create_dto = NULL;
    }
    free(localVarBodyParameters);
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Delete a fiscal responsibility
//
// Deletes a fiscal responsibility identified by its unique identifier.
//
empty_envelope_t*
FiscalResponsibilitiesAPI_deleteFiscalResponsibility(apiClient_t *apiClient, tenantId, char *fiscalResponsibilityId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/AccountingService/Fiscals/Authorities/FiscalResponsibilities/{fiscalResponsibilityId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/AccountingService/Fiscals/Authorities/FiscalResponsibilities/{fiscalResponsibilityId}");


    // Path Params
    long sizeOfPathParams_fiscalResponsibilityId = strlen(fiscalResponsibilityId)+3 + strlen("{ fiscalResponsibilityId }");
    if(fiscalResponsibilityId == NULL) {
        goto end;
    }
    char* localVarToReplace_fiscalResponsibilityId = malloc(sizeOfPathParams_fiscalResponsibilityId);
    sprintf(localVarToReplace_fiscalResponsibilityId, "{%s}", "fiscalResponsibilityId");

    localVarPath = strReplace(localVarPath, localVarToReplace_fiscalResponsibilityId, fiscalResponsibilityId);
    if(fiscalResponsibilityId == NULL) {
        goto end;
    }
    char* localVarToReplace_fiscalResponsibilityId = malloc(sizeOfPathParams_fiscalResponsibilityId);
    sprintf(localVarToReplace_fiscalResponsibilityId, "{%s}", "fiscalResponsibilityId");

    localVarPath = strReplace(localVarPath, localVarToReplace_fiscalResponsibilityId, fiscalResponsibilityId);



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
     valueQuery_tenantId ;
    keyValuePair_t *keyPairQuery_tenantId = 0;
    if (tenantId)
    {
        keyQuery_tenantId = strdup("tenantId");
        valueQuery_tenantId = (tenantId);
        keyPairQuery_tenantId = keyValuePair_create(keyQuery_tenantId, &valueQuery_tenantId);
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
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","No Content");
    //}
    //nonprimitive not container
    cJSON *FiscalResponsibilitiesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(FiscalResponsibilitiesAPIlocalVarJSON);
    cJSON_Delete(FiscalResponsibilitiesAPIlocalVarJSON);
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
    free(localVarToReplace_fiscalResponsibilityId);
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

// Get fiscal responsibilities for an authority
//
// Retrieves all fiscal responsibilities for the specified fiscal authority.
//
fiscal_responsibility_dto_list_envelope_t*
FiscalResponsibilitiesAPI_getFiscalResponsibilities(apiClient_t *apiClient, char *fiscalAuthorityId, char *authorityId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/AccountingService/Fiscals/Authorities/{authorityId}/FiscalResponsibilities")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/AccountingService/Fiscals/Authorities/{authorityId}/FiscalResponsibilities");


    // Path Params
    long sizeOfPathParams_authorityId = strlen(authorityId)+3 + strlen("{ authorityId }");
    if(authorityId == NULL) {
        goto end;
    }
    char* localVarToReplace_authorityId = malloc(sizeOfPathParams_authorityId);
    sprintf(localVarToReplace_authorityId, "{%s}", "authorityId");

    localVarPath = strReplace(localVarPath, localVarToReplace_authorityId, authorityId);



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
    char *keyQuery_fiscalAuthorityId = NULL;
    char * valueQuery_fiscalAuthorityId = NULL;
    keyValuePair_t *keyPairQuery_fiscalAuthorityId = 0;
    if (fiscalAuthorityId)
    {
        keyQuery_fiscalAuthorityId = strdup("fiscalAuthorityId");
        valueQuery_fiscalAuthorityId = strdup((fiscalAuthorityId));
        keyPairQuery_fiscalAuthorityId = keyValuePair_create(keyQuery_fiscalAuthorityId, valueQuery_fiscalAuthorityId);
        list_addElement(localVarQueryParameters,keyPairQuery_fiscalAuthorityId);
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
    cJSON *FiscalResponsibilitiesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    fiscal_responsibility_dto_list_envelope_t *elementToReturn = fiscal_responsibility_dto_list_envelope_parseFromJSON(FiscalResponsibilitiesAPIlocalVarJSON);
    cJSON_Delete(FiscalResponsibilitiesAPIlocalVarJSON);
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
    free(localVarToReplace_authorityId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
    if(keyQuery_fiscalAuthorityId){
        free(keyQuery_fiscalAuthorityId);
        keyQuery_fiscalAuthorityId = NULL;
    }
    if(valueQuery_fiscalAuthorityId){
        free(valueQuery_fiscalAuthorityId);
        valueQuery_fiscalAuthorityId = NULL;
    }
    if(keyPairQuery_fiscalAuthorityId){
        keyValuePair_free(keyPairQuery_fiscalAuthorityId);
        keyPairQuery_fiscalAuthorityId = NULL;
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

// Get fiscal responsibilities count
//
// Returns the total count of fiscal responsibilities for the specified fiscal authority.
//
int32_envelope_t*
FiscalResponsibilitiesAPI_getFiscalResponsibilitiesCount(apiClient_t *apiClient, char *fiscalAuthorityId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/AccountingService/Fiscals/Authorities/{fiscalAuthorityId}/FiscalResponsibilities/Count")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/AccountingService/Fiscals/Authorities/{fiscalAuthorityId}/FiscalResponsibilities/Count");


    // Path Params
    long sizeOfPathParams_fiscalAuthorityId = strlen(fiscalAuthorityId)+3 + strlen("{ fiscalAuthorityId }");
    if(fiscalAuthorityId == NULL) {
        goto end;
    }
    char* localVarToReplace_fiscalAuthorityId = malloc(sizeOfPathParams_fiscalAuthorityId);
    sprintf(localVarToReplace_fiscalAuthorityId, "{%s}", "fiscalAuthorityId");

    localVarPath = strReplace(localVarPath, localVarToReplace_fiscalAuthorityId, fiscalAuthorityId);
    if(fiscalAuthorityId == NULL) {
        goto end;
    }
    char* localVarToReplace_fiscalAuthorityId = malloc(sizeOfPathParams_fiscalAuthorityId);
    sprintf(localVarToReplace_fiscalAuthorityId, "{%s}", "fiscalAuthorityId");

    localVarPath = strReplace(localVarPath, localVarToReplace_fiscalAuthorityId, fiscalAuthorityId);



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
    cJSON *FiscalResponsibilitiesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    int32_envelope_t *elementToReturn = int32_envelope_parseFromJSON(FiscalResponsibilitiesAPIlocalVarJSON);
    cJSON_Delete(FiscalResponsibilitiesAPIlocalVarJSON);
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
    free(localVarToReplace_fiscalAuthorityId);
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

// Get fiscal responsibility by ID
//
// Retrieves a specific fiscal responsibility by its unique identifier.
//
fiscal_responsibility_dto_envelope_t*
FiscalResponsibilitiesAPI_getFiscalResponsibility(apiClient_t *apiClient, tenantId, char *fiscalAuthorityId, char *fiscalResponsibilityId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/AccountingService/Fiscals/Authorities/{fiscalAuthorityId}/FiscalResponsibilities/{fiscalResponsibilityId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/AccountingService/Fiscals/Authorities/{fiscalAuthorityId}/FiscalResponsibilities/{fiscalResponsibilityId}");


    // Path Params
    long sizeOfPathParams_fiscalAuthorityId = strlen(fiscalAuthorityId)+3 + strlen(fiscalResponsibilityId)+3 + strlen("{ fiscalAuthorityId }");
    if(fiscalAuthorityId == NULL) {
        goto end;
    }
    char* localVarToReplace_fiscalAuthorityId = malloc(sizeOfPathParams_fiscalAuthorityId);
    sprintf(localVarToReplace_fiscalAuthorityId, "{%s}", "fiscalAuthorityId");

    localVarPath = strReplace(localVarPath, localVarToReplace_fiscalAuthorityId, fiscalAuthorityId);
    if(fiscalAuthorityId == NULL) {
        goto end;
    }
    char* localVarToReplace_fiscalAuthorityId = malloc(sizeOfPathParams_fiscalAuthorityId);
    sprintf(localVarToReplace_fiscalAuthorityId, "{%s}", "fiscalAuthorityId");

    localVarPath = strReplace(localVarPath, localVarToReplace_fiscalAuthorityId, fiscalAuthorityId);

    // Path Params
    long sizeOfPathParams_fiscalResponsibilityId = strlen(fiscalAuthorityId)+3 + strlen(fiscalResponsibilityId)+3 + strlen("{ fiscalResponsibilityId }");
    if(fiscalResponsibilityId == NULL) {
        goto end;
    }
    char* localVarToReplace_fiscalResponsibilityId = malloc(sizeOfPathParams_fiscalResponsibilityId);
    sprintf(localVarToReplace_fiscalResponsibilityId, "{%s}", "fiscalResponsibilityId");

    localVarPath = strReplace(localVarPath, localVarToReplace_fiscalResponsibilityId, fiscalResponsibilityId);
    if(fiscalResponsibilityId == NULL) {
        goto end;
    }
    char* localVarToReplace_fiscalResponsibilityId = malloc(sizeOfPathParams_fiscalResponsibilityId);
    sprintf(localVarToReplace_fiscalResponsibilityId, "{%s}", "fiscalResponsibilityId");

    localVarPath = strReplace(localVarPath, localVarToReplace_fiscalResponsibilityId, fiscalResponsibilityId);



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
     valueQuery_tenantId ;
    keyValuePair_t *keyPairQuery_tenantId = 0;
    if (tenantId)
    {
        keyQuery_tenantId = strdup("tenantId");
        valueQuery_tenantId = (tenantId);
        keyPairQuery_tenantId = keyValuePair_create(keyQuery_tenantId, &valueQuery_tenantId);
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
    cJSON *FiscalResponsibilitiesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    fiscal_responsibility_dto_envelope_t *elementToReturn = fiscal_responsibility_dto_envelope_parseFromJSON(FiscalResponsibilitiesAPIlocalVarJSON);
    cJSON_Delete(FiscalResponsibilitiesAPIlocalVarJSON);
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
    free(localVarToReplace_fiscalAuthorityId);
    free(localVarToReplace_fiscalResponsibilityId);
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

// Update a fiscal responsibility
//
// Updates an existing fiscal responsibility identified by its unique identifier.
//
empty_envelope_t*
FiscalResponsibilitiesAPI_updateFiscalResponsibility(apiClient_t *apiClient, tenantId, char *fiscalResponsibilityId, char *api_version, char *x_api_version, fiscal_responsibility_update_dto_t *fiscal_responsibility_update_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/AccountingService/Fiscals/Authorities/FiscalResponsibilities/{fiscalResponsibilityId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/AccountingService/Fiscals/Authorities/FiscalResponsibilities/{fiscalResponsibilityId}");


    // Path Params
    long sizeOfPathParams_fiscalResponsibilityId = strlen(fiscalResponsibilityId)+3 + strlen("{ fiscalResponsibilityId }");
    if(fiscalResponsibilityId == NULL) {
        goto end;
    }
    char* localVarToReplace_fiscalResponsibilityId = malloc(sizeOfPathParams_fiscalResponsibilityId);
    sprintf(localVarToReplace_fiscalResponsibilityId, "{%s}", "fiscalResponsibilityId");

    localVarPath = strReplace(localVarPath, localVarToReplace_fiscalResponsibilityId, fiscalResponsibilityId);
    if(fiscalResponsibilityId == NULL) {
        goto end;
    }
    char* localVarToReplace_fiscalResponsibilityId = malloc(sizeOfPathParams_fiscalResponsibilityId);
    sprintf(localVarToReplace_fiscalResponsibilityId, "{%s}", "fiscalResponsibilityId");

    localVarPath = strReplace(localVarPath, localVarToReplace_fiscalResponsibilityId, fiscalResponsibilityId);



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
     valueQuery_tenantId ;
    keyValuePair_t *keyPairQuery_tenantId = 0;
    if (tenantId)
    {
        keyQuery_tenantId = strdup("tenantId");
        valueQuery_tenantId = (tenantId);
        keyPairQuery_tenantId = keyValuePair_create(keyQuery_tenantId, &valueQuery_tenantId);
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
    cJSON *localVarSingleItemJSON_fiscal_responsibility_update_dto = NULL;
    if (fiscal_responsibility_update_dto != NULL)
    {
        //string
        localVarSingleItemJSON_fiscal_responsibility_update_dto = fiscal_responsibility_update_dto_convertToJSON(fiscal_responsibility_update_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_fiscal_responsibility_update_dto);
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
    cJSON *FiscalResponsibilitiesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(FiscalResponsibilitiesAPIlocalVarJSON);
    cJSON_Delete(FiscalResponsibilitiesAPIlocalVarJSON);
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
    free(localVarToReplace_fiscalResponsibilityId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
    if (localVarSingleItemJSON_fiscal_responsibility_update_dto) {
        cJSON_Delete(localVarSingleItemJSON_fiscal_responsibility_update_dto);
        localVarSingleItemJSON_fiscal_responsibility_update_dto = NULL;
    }
    free(localVarBodyParameters);
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

