#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "LicensingAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Retrieve license assignments
//
// Retrieves all license assignments for a given license.
//
suite_license_assignment_dto_list_envelope_t*
LicensingAPI_getLicenseAssignmentsAsync(apiClient_t *apiClient, char *licenseId, char *tenantId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SystemService/Licensing/Licenses/{licenseId}/Assignments")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SystemService/Licensing/Licenses/{licenseId}/Assignments");


    // Path Params
    long sizeOfPathParams_licenseId = strlen(licenseId)+3 + strlen("{ licenseId }");
    if(licenseId == NULL) {
        goto end;
    }
    char* localVarToReplace_licenseId = malloc(sizeOfPathParams_licenseId);
    sprintf(localVarToReplace_licenseId, "{%s}", "licenseId");

    localVarPath = strReplace(localVarPath, localVarToReplace_licenseId, licenseId);
    if(licenseId == NULL) {
        goto end;
    }
    char* localVarToReplace_licenseId = malloc(sizeOfPathParams_licenseId);
    sprintf(localVarToReplace_licenseId, "{%s}", "licenseId");

    localVarPath = strReplace(localVarPath, localVarToReplace_licenseId, licenseId);



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
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal;odata.streaming=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal;odata.streaming=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full;odata.streaming=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full;odata.streaming=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none;odata.streaming=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none;odata.streaming=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.streaming=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.streaming=false"); //produces
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal;odata.streaming=true;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal;odata.streaming=true;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal;odata.streaming=false;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal;odata.streaming=false;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full;odata.streaming=true;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full;odata.streaming=true;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full;odata.streaming=false;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full;odata.streaming=false;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none;odata.streaming=true;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none;odata.streaming=true;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none;odata.streaming=false;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none;odata.streaming=false;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.streaming=true;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.streaming=true;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.streaming=false;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.streaming=false;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/xml"); //produces
    list_addElement(localVarHeaderType,"text/plain"); //produces
    list_addElement(localVarHeaderType,"application/octet-stream"); //produces
    list_addElement(localVarHeaderType,"text/json"); //produces
    list_addElement(localVarHeaderType,"text/xml"); //produces
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
    //nonprimitive not container
    cJSON *LicensingAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    suite_license_assignment_dto_list_envelope_t *elementToReturn = suite_license_assignment_dto_list_envelope_parseFromJSON(LicensingAPIlocalVarJSON);
    cJSON_Delete(LicensingAPIlocalVarJSON);
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
    free(localVarToReplace_licenseId);
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

// Retrieve license attributes
//
// Retrieves all additional attributes for a given license.
//
suite_license_assignment_dto_list_envelope_t*
LicensingAPI_getLicenseAttributesAsync(apiClient_t *apiClient, char *licenseId, char *tenantId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SystemService/Licensing/Licenses/{licenseId}/Attributes")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SystemService/Licensing/Licenses/{licenseId}/Attributes");


    // Path Params
    long sizeOfPathParams_licenseId = strlen(licenseId)+3 + strlen("{ licenseId }");
    if(licenseId == NULL) {
        goto end;
    }
    char* localVarToReplace_licenseId = malloc(sizeOfPathParams_licenseId);
    sprintf(localVarToReplace_licenseId, "{%s}", "licenseId");

    localVarPath = strReplace(localVarPath, localVarToReplace_licenseId, licenseId);
    if(licenseId == NULL) {
        goto end;
    }
    char* localVarToReplace_licenseId = malloc(sizeOfPathParams_licenseId);
    sprintf(localVarToReplace_licenseId, "{%s}", "licenseId");

    localVarPath = strReplace(localVarPath, localVarToReplace_licenseId, licenseId);



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
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal;odata.streaming=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal;odata.streaming=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full;odata.streaming=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full;odata.streaming=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none;odata.streaming=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none;odata.streaming=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.streaming=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.streaming=false"); //produces
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal;odata.streaming=true;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal;odata.streaming=true;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal;odata.streaming=false;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal;odata.streaming=false;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full;odata.streaming=true;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full;odata.streaming=true;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full;odata.streaming=false;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full;odata.streaming=false;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none;odata.streaming=true;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none;odata.streaming=true;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none;odata.streaming=false;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none;odata.streaming=false;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.streaming=true;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.streaming=true;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.streaming=false;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.streaming=false;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/xml"); //produces
    list_addElement(localVarHeaderType,"text/plain"); //produces
    list_addElement(localVarHeaderType,"application/octet-stream"); //produces
    list_addElement(localVarHeaderType,"text/json"); //produces
    list_addElement(localVarHeaderType,"text/xml"); //produces
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
    //nonprimitive not container
    cJSON *LicensingAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    suite_license_assignment_dto_list_envelope_t *elementToReturn = suite_license_assignment_dto_list_envelope_parseFromJSON(LicensingAPIlocalVarJSON);
    cJSON_Delete(LicensingAPIlocalVarJSON);
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
    free(localVarToReplace_licenseId);
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

// Retrieve a license by ID
//
// Retrieves a single suite license by its unique identifier.
//
suite_license_dto_envelope_t*
LicensingAPI_getLicenseByIdAsync(apiClient_t *apiClient, char *licenseId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SystemService/Licensing/Licenses/{licenseId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SystemService/Licensing/Licenses/{licenseId}");


    // Path Params
    long sizeOfPathParams_licenseId = strlen(licenseId)+3 + strlen("{ licenseId }");
    if(licenseId == NULL) {
        goto end;
    }
    char* localVarToReplace_licenseId = malloc(sizeOfPathParams_licenseId);
    sprintf(localVarToReplace_licenseId, "{%s}", "licenseId");

    localVarPath = strReplace(localVarPath, localVarToReplace_licenseId, licenseId);
    if(licenseId == NULL) {
        goto end;
    }
    char* localVarToReplace_licenseId = malloc(sizeOfPathParams_licenseId);
    sprintf(localVarToReplace_licenseId, "{%s}", "licenseId");

    localVarPath = strReplace(localVarPath, localVarToReplace_licenseId, licenseId);



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
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal;odata.streaming=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal;odata.streaming=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full;odata.streaming=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full;odata.streaming=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none;odata.streaming=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none;odata.streaming=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.streaming=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.streaming=false"); //produces
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal;odata.streaming=true;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal;odata.streaming=true;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal;odata.streaming=false;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal;odata.streaming=false;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full;odata.streaming=true;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full;odata.streaming=true;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full;odata.streaming=false;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full;odata.streaming=false;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none;odata.streaming=true;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none;odata.streaming=true;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none;odata.streaming=false;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none;odata.streaming=false;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.streaming=true;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.streaming=true;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.streaming=false;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.streaming=false;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/xml"); //produces
    list_addElement(localVarHeaderType,"text/plain"); //produces
    list_addElement(localVarHeaderType,"application/octet-stream"); //produces
    list_addElement(localVarHeaderType,"text/json"); //produces
    list_addElement(localVarHeaderType,"text/xml"); //produces
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
    //nonprimitive not container
    cJSON *LicensingAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    suite_license_dto_envelope_t *elementToReturn = suite_license_dto_envelope_parseFromJSON(LicensingAPIlocalVarJSON);
    cJSON_Delete(LicensingAPIlocalVarJSON);
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
    free(localVarToReplace_licenseId);
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

// Retrieve license features
//
// Retrieves all features for a given license.
//
suite_license_assignment_dto_list_envelope_t*
LicensingAPI_getLicenseFeaturesAsync(apiClient_t *apiClient, char *licenseId, char *tenantId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SystemService/Licensing/Licenses/{licenseId}/Features")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SystemService/Licensing/Licenses/{licenseId}/Features");


    // Path Params
    long sizeOfPathParams_licenseId = strlen(licenseId)+3 + strlen("{ licenseId }");
    if(licenseId == NULL) {
        goto end;
    }
    char* localVarToReplace_licenseId = malloc(sizeOfPathParams_licenseId);
    sprintf(localVarToReplace_licenseId, "{%s}", "licenseId");

    localVarPath = strReplace(localVarPath, localVarToReplace_licenseId, licenseId);
    if(licenseId == NULL) {
        goto end;
    }
    char* localVarToReplace_licenseId = malloc(sizeOfPathParams_licenseId);
    sprintf(localVarToReplace_licenseId, "{%s}", "licenseId");

    localVarPath = strReplace(localVarPath, localVarToReplace_licenseId, licenseId);



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
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal;odata.streaming=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal;odata.streaming=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full;odata.streaming=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full;odata.streaming=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none;odata.streaming=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none;odata.streaming=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.streaming=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.streaming=false"); //produces
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal;odata.streaming=true;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal;odata.streaming=true;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal;odata.streaming=false;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal;odata.streaming=false;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full;odata.streaming=true;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full;odata.streaming=true;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full;odata.streaming=false;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full;odata.streaming=false;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none;odata.streaming=true;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none;odata.streaming=true;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none;odata.streaming=false;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none;odata.streaming=false;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.streaming=true;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.streaming=true;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.streaming=false;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.streaming=false;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/xml"); //produces
    list_addElement(localVarHeaderType,"text/plain"); //produces
    list_addElement(localVarHeaderType,"application/octet-stream"); //produces
    list_addElement(localVarHeaderType,"text/json"); //produces
    list_addElement(localVarHeaderType,"text/xml"); //produces
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
    //nonprimitive not container
    cJSON *LicensingAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    suite_license_assignment_dto_list_envelope_t *elementToReturn = suite_license_assignment_dto_list_envelope_parseFromJSON(LicensingAPIlocalVarJSON);
    cJSON_Delete(LicensingAPIlocalVarJSON);
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
    free(localVarToReplace_licenseId);
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

// Retrieve license record quota
//
// Retrieves the record quota for a given license.
//
suite_license_assignment_dto_list_envelope_t*
LicensingAPI_getLicenseRecordsQuotaAsync(apiClient_t *apiClient, char *licenseId, char *tenantId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SystemService/Licensing/Licenses/{licenseId}/Quota")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SystemService/Licensing/Licenses/{licenseId}/Quota");


    // Path Params
    long sizeOfPathParams_licenseId = strlen(licenseId)+3 + strlen("{ licenseId }");
    if(licenseId == NULL) {
        goto end;
    }
    char* localVarToReplace_licenseId = malloc(sizeOfPathParams_licenseId);
    sprintf(localVarToReplace_licenseId, "{%s}", "licenseId");

    localVarPath = strReplace(localVarPath, localVarToReplace_licenseId, licenseId);
    if(licenseId == NULL) {
        goto end;
    }
    char* localVarToReplace_licenseId = malloc(sizeOfPathParams_licenseId);
    sprintf(localVarToReplace_licenseId, "{%s}", "licenseId");

    localVarPath = strReplace(localVarPath, localVarToReplace_licenseId, licenseId);



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
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal;odata.streaming=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal;odata.streaming=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full;odata.streaming=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full;odata.streaming=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none;odata.streaming=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none;odata.streaming=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.streaming=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.streaming=false"); //produces
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal;odata.streaming=true;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal;odata.streaming=true;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal;odata.streaming=false;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal;odata.streaming=false;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full;odata.streaming=true;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full;odata.streaming=true;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full;odata.streaming=false;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full;odata.streaming=false;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none;odata.streaming=true;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none;odata.streaming=true;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none;odata.streaming=false;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none;odata.streaming=false;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.streaming=true;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.streaming=true;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.streaming=false;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.streaming=false;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/xml"); //produces
    list_addElement(localVarHeaderType,"text/plain"); //produces
    list_addElement(localVarHeaderType,"application/octet-stream"); //produces
    list_addElement(localVarHeaderType,"text/json"); //produces
    list_addElement(localVarHeaderType,"text/xml"); //produces
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
    //nonprimitive not container
    cJSON *LicensingAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    suite_license_assignment_dto_list_envelope_t *elementToReturn = suite_license_assignment_dto_list_envelope_parseFromJSON(LicensingAPIlocalVarJSON);
    cJSON_Delete(LicensingAPIlocalVarJSON);
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
    free(localVarToReplace_licenseId);
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

// Retrieve a list of licenses
//
// Retrieves a list of suite licenses, optionally filtered by tenant.
//
suite_license_dto_list_envelope_t*
LicensingAPI_getLicensesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SystemService/Licensing/Licenses")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SystemService/Licensing/Licenses");




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
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal;odata.streaming=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal;odata.streaming=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full;odata.streaming=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full;odata.streaming=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none;odata.streaming=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none;odata.streaming=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.streaming=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.streaming=false"); //produces
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal;odata.streaming=true;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal;odata.streaming=true;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal;odata.streaming=false;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal;odata.streaming=false;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full;odata.streaming=true;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full;odata.streaming=true;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full;odata.streaming=false;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full;odata.streaming=false;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none;odata.streaming=true;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none;odata.streaming=true;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none;odata.streaming=false;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none;odata.streaming=false;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.streaming=true;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.streaming=true;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.streaming=false;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.streaming=false;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/xml"); //produces
    list_addElement(localVarHeaderType,"text/plain"); //produces
    list_addElement(localVarHeaderType,"application/octet-stream"); //produces
    list_addElement(localVarHeaderType,"text/json"); //produces
    list_addElement(localVarHeaderType,"text/xml"); //produces
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
    //nonprimitive not container
    cJSON *LicensingAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    suite_license_dto_list_envelope_t *elementToReturn = suite_license_dto_list_envelope_parseFromJSON(LicensingAPIlocalVarJSON);
    cJSON_Delete(LicensingAPIlocalVarJSON);
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

// Redeem a license
//
// Redeems a license for the current tenant user.
//
boolean_envelope_t*
LicensingAPI_redeemLicenseAsync(apiClient_t *apiClient, char *tenantId, license_validation_request_t *license_validation_request, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SystemService/Licensing/Licenses/Redeem")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SystemService/Licensing/Licenses/Redeem");




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
    cJSON *localVarSingleItemJSON_license_validation_request = NULL;
    if (license_validation_request != NULL)
    {
        //string
        localVarSingleItemJSON_license_validation_request = license_validation_request_convertToJSON(license_validation_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_license_validation_request);
    }
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal;odata.streaming=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal;odata.streaming=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full;odata.streaming=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full;odata.streaming=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none;odata.streaming=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none;odata.streaming=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.streaming=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.streaming=false"); //produces
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal;odata.streaming=true;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal;odata.streaming=true;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal;odata.streaming=false;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal;odata.streaming=false;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full;odata.streaming=true;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full;odata.streaming=true;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full;odata.streaming=false;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full;odata.streaming=false;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none;odata.streaming=true;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none;odata.streaming=true;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none;odata.streaming=false;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none;odata.streaming=false;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.streaming=true;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.streaming=true;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.streaming=false;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.streaming=false;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/xml"); //produces
    list_addElement(localVarHeaderType,"text/plain"); //produces
    list_addElement(localVarHeaderType,"application/octet-stream"); //produces
    list_addElement(localVarHeaderType,"text/json"); //produces
    list_addElement(localVarHeaderType,"text/xml"); //produces
    list_addElement(localVarContentType,"application/json;odata.metadata=minimal;odata.streaming=true"); //consumes
    list_addElement(localVarContentType,"application/json;odata.metadata=minimal;odata.streaming=false"); //consumes
    list_addElement(localVarContentType,"application/json;odata.metadata=minimal"); //consumes
    list_addElement(localVarContentType,"application/json;odata.metadata=full;odata.streaming=true"); //consumes
    list_addElement(localVarContentType,"application/json;odata.metadata=full;odata.streaming=false"); //consumes
    list_addElement(localVarContentType,"application/json;odata.metadata=full"); //consumes
    list_addElement(localVarContentType,"application/json;odata.metadata=none;odata.streaming=true"); //consumes
    list_addElement(localVarContentType,"application/json;odata.metadata=none;odata.streaming=false"); //consumes
    list_addElement(localVarContentType,"application/json;odata.metadata=none"); //consumes
    list_addElement(localVarContentType,"application/json;odata.streaming=true"); //consumes
    list_addElement(localVarContentType,"application/json;odata.streaming=false"); //consumes
    list_addElement(localVarContentType,"application/json"); //consumes
    list_addElement(localVarContentType,"application/json;odata.metadata=minimal;odata.streaming=true;IEEE754Compatible=false"); //consumes
    list_addElement(localVarContentType,"application/json;odata.metadata=minimal;odata.streaming=true;IEEE754Compatible=true"); //consumes
    list_addElement(localVarContentType,"application/json;odata.metadata=minimal;odata.streaming=false;IEEE754Compatible=false"); //consumes
    list_addElement(localVarContentType,"application/json;odata.metadata=minimal;odata.streaming=false;IEEE754Compatible=true"); //consumes
    list_addElement(localVarContentType,"application/json;odata.metadata=minimal;IEEE754Compatible=false"); //consumes
    list_addElement(localVarContentType,"application/json;odata.metadata=minimal;IEEE754Compatible=true"); //consumes
    list_addElement(localVarContentType,"application/json;odata.metadata=full;odata.streaming=true;IEEE754Compatible=false"); //consumes
    list_addElement(localVarContentType,"application/json;odata.metadata=full;odata.streaming=true;IEEE754Compatible=true"); //consumes
    list_addElement(localVarContentType,"application/json;odata.metadata=full;odata.streaming=false;IEEE754Compatible=false"); //consumes
    list_addElement(localVarContentType,"application/json;odata.metadata=full;odata.streaming=false;IEEE754Compatible=true"); //consumes
    list_addElement(localVarContentType,"application/json;odata.metadata=full;IEEE754Compatible=false"); //consumes
    list_addElement(localVarContentType,"application/json;odata.metadata=full;IEEE754Compatible=true"); //consumes
    list_addElement(localVarContentType,"application/json;odata.metadata=none;odata.streaming=true;IEEE754Compatible=false"); //consumes
    list_addElement(localVarContentType,"application/json;odata.metadata=none;odata.streaming=true;IEEE754Compatible=true"); //consumes
    list_addElement(localVarContentType,"application/json;odata.metadata=none;odata.streaming=false;IEEE754Compatible=true"); //consumes
    list_addElement(localVarContentType,"application/json;odata.metadata=none;odata.streaming=false;IEEE754Compatible=false"); //consumes
    list_addElement(localVarContentType,"application/json;odata.metadata=none;IEEE754Compatible=false"); //consumes
    list_addElement(localVarContentType,"application/json;odata.metadata=none;IEEE754Compatible=true"); //consumes
    list_addElement(localVarContentType,"application/json;odata.streaming=true;IEEE754Compatible=false"); //consumes
    list_addElement(localVarContentType,"application/json;odata.streaming=true;IEEE754Compatible=true"); //consumes
    list_addElement(localVarContentType,"application/json;odata.streaming=false;IEEE754Compatible=false"); //consumes
    list_addElement(localVarContentType,"application/json;odata.streaming=false;IEEE754Compatible=true"); //consumes
    list_addElement(localVarContentType,"application/json;IEEE754Compatible=false"); //consumes
    list_addElement(localVarContentType,"application/json;IEEE754Compatible=true"); //consumes
    list_addElement(localVarContentType,"application/xml"); //consumes
    list_addElement(localVarContentType,"text/plain"); //consumes
    list_addElement(localVarContentType,"text/xml"); //consumes
    list_addElement(localVarContentType,"application/*+xml"); //consumes
    list_addElement(localVarContentType,"application/json-patch+json"); //consumes
    list_addElement(localVarContentType,"text/json"); //consumes
    list_addElement(localVarContentType,"application/*+json"); //consumes
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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *LicensingAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    boolean_envelope_t *elementToReturn = boolean_envelope_parseFromJSON(LicensingAPIlocalVarJSON);
    cJSON_Delete(LicensingAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_license_validation_request) {
        cJSON_Delete(localVarSingleItemJSON_license_validation_request);
        localVarSingleItemJSON_license_validation_request = NULL;
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

// Validate a license
//
// Validates a license key and returns validation failures if any.
//
i_validation_failure_list_envelope_t*
LicensingAPI_validateLicenseAsync(apiClient_t *apiClient, license_validation_request_t *license_validation_request, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SystemService/Licensing/Licenses/Validate")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SystemService/Licensing/Licenses/Validate");




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
    cJSON *localVarSingleItemJSON_license_validation_request = NULL;
    if (license_validation_request != NULL)
    {
        //string
        localVarSingleItemJSON_license_validation_request = license_validation_request_convertToJSON(license_validation_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_license_validation_request);
    }
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal;odata.streaming=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal;odata.streaming=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full;odata.streaming=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full;odata.streaming=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none;odata.streaming=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none;odata.streaming=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.streaming=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.streaming=false"); //produces
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal;odata.streaming=true;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal;odata.streaming=true;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal;odata.streaming=false;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal;odata.streaming=false;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full;odata.streaming=true;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full;odata.streaming=true;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full;odata.streaming=false;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full;odata.streaming=false;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none;odata.streaming=true;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none;odata.streaming=true;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none;odata.streaming=false;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none;odata.streaming=false;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.streaming=true;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.streaming=true;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.streaming=false;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.streaming=false;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/xml"); //produces
    list_addElement(localVarHeaderType,"text/plain"); //produces
    list_addElement(localVarHeaderType,"application/octet-stream"); //produces
    list_addElement(localVarHeaderType,"text/json"); //produces
    list_addElement(localVarHeaderType,"text/xml"); //produces
    list_addElement(localVarContentType,"application/json;odata.metadata=minimal;odata.streaming=true"); //consumes
    list_addElement(localVarContentType,"application/json;odata.metadata=minimal;odata.streaming=false"); //consumes
    list_addElement(localVarContentType,"application/json;odata.metadata=minimal"); //consumes
    list_addElement(localVarContentType,"application/json;odata.metadata=full;odata.streaming=true"); //consumes
    list_addElement(localVarContentType,"application/json;odata.metadata=full;odata.streaming=false"); //consumes
    list_addElement(localVarContentType,"application/json;odata.metadata=full"); //consumes
    list_addElement(localVarContentType,"application/json;odata.metadata=none;odata.streaming=true"); //consumes
    list_addElement(localVarContentType,"application/json;odata.metadata=none;odata.streaming=false"); //consumes
    list_addElement(localVarContentType,"application/json;odata.metadata=none"); //consumes
    list_addElement(localVarContentType,"application/json;odata.streaming=true"); //consumes
    list_addElement(localVarContentType,"application/json;odata.streaming=false"); //consumes
    list_addElement(localVarContentType,"application/json"); //consumes
    list_addElement(localVarContentType,"application/json;odata.metadata=minimal;odata.streaming=true;IEEE754Compatible=false"); //consumes
    list_addElement(localVarContentType,"application/json;odata.metadata=minimal;odata.streaming=true;IEEE754Compatible=true"); //consumes
    list_addElement(localVarContentType,"application/json;odata.metadata=minimal;odata.streaming=false;IEEE754Compatible=false"); //consumes
    list_addElement(localVarContentType,"application/json;odata.metadata=minimal;odata.streaming=false;IEEE754Compatible=true"); //consumes
    list_addElement(localVarContentType,"application/json;odata.metadata=minimal;IEEE754Compatible=false"); //consumes
    list_addElement(localVarContentType,"application/json;odata.metadata=minimal;IEEE754Compatible=true"); //consumes
    list_addElement(localVarContentType,"application/json;odata.metadata=full;odata.streaming=true;IEEE754Compatible=false"); //consumes
    list_addElement(localVarContentType,"application/json;odata.metadata=full;odata.streaming=true;IEEE754Compatible=true"); //consumes
    list_addElement(localVarContentType,"application/json;odata.metadata=full;odata.streaming=false;IEEE754Compatible=false"); //consumes
    list_addElement(localVarContentType,"application/json;odata.metadata=full;odata.streaming=false;IEEE754Compatible=true"); //consumes
    list_addElement(localVarContentType,"application/json;odata.metadata=full;IEEE754Compatible=false"); //consumes
    list_addElement(localVarContentType,"application/json;odata.metadata=full;IEEE754Compatible=true"); //consumes
    list_addElement(localVarContentType,"application/json;odata.metadata=none;odata.streaming=true;IEEE754Compatible=false"); //consumes
    list_addElement(localVarContentType,"application/json;odata.metadata=none;odata.streaming=true;IEEE754Compatible=true"); //consumes
    list_addElement(localVarContentType,"application/json;odata.metadata=none;odata.streaming=false;IEEE754Compatible=true"); //consumes
    list_addElement(localVarContentType,"application/json;odata.metadata=none;odata.streaming=false;IEEE754Compatible=false"); //consumes
    list_addElement(localVarContentType,"application/json;odata.metadata=none;IEEE754Compatible=false"); //consumes
    list_addElement(localVarContentType,"application/json;odata.metadata=none;IEEE754Compatible=true"); //consumes
    list_addElement(localVarContentType,"application/json;odata.streaming=true;IEEE754Compatible=false"); //consumes
    list_addElement(localVarContentType,"application/json;odata.streaming=true;IEEE754Compatible=true"); //consumes
    list_addElement(localVarContentType,"application/json;odata.streaming=false;IEEE754Compatible=false"); //consumes
    list_addElement(localVarContentType,"application/json;odata.streaming=false;IEEE754Compatible=true"); //consumes
    list_addElement(localVarContentType,"application/json;IEEE754Compatible=false"); //consumes
    list_addElement(localVarContentType,"application/json;IEEE754Compatible=true"); //consumes
    list_addElement(localVarContentType,"application/xml"); //consumes
    list_addElement(localVarContentType,"text/plain"); //consumes
    list_addElement(localVarContentType,"text/xml"); //consumes
    list_addElement(localVarContentType,"application/*+xml"); //consumes
    list_addElement(localVarContentType,"application/json-patch+json"); //consumes
    list_addElement(localVarContentType,"text/json"); //consumes
    list_addElement(localVarContentType,"application/*+json"); //consumes
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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *LicensingAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    i_validation_failure_list_envelope_t *elementToReturn = i_validation_failure_list_envelope_parseFromJSON(LicensingAPIlocalVarJSON);
    cJSON_Delete(LicensingAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_license_validation_request) {
        cJSON_Delete(localVarSingleItemJSON_license_validation_request);
        localVarSingleItemJSON_license_validation_request = NULL;
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

