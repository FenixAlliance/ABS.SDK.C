#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "FiscalResponsibilityRecordsAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Create a fiscal responsibility record
//
// Creates a new fiscal responsibility record for a fiscal responsibility.
//
empty_envelope_t*
FiscalResponsibilityRecordsAPI_createFiscalResponsibilityRecord(apiClient_t *apiClient, tenantId, char *api_version, char *x_api_version, fiscal_responsibility_record_create_dto_t *fiscal_responsibility_record_create_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/AccountingService/Fiscals/Authorities/FiscalResponsibilityRecords")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/AccountingService/Fiscals/Authorities/FiscalResponsibilityRecords");




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
    cJSON *localVarSingleItemJSON_fiscal_responsibility_record_create_dto = NULL;
    if (fiscal_responsibility_record_create_dto != NULL)
    {
        //string
        localVarSingleItemJSON_fiscal_responsibility_record_create_dto = fiscal_responsibility_record_create_dto_convertToJSON(fiscal_responsibility_record_create_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_fiscal_responsibility_record_create_dto);
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
    cJSON *FiscalResponsibilityRecordsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(FiscalResponsibilityRecordsAPIlocalVarJSON);
    cJSON_Delete(FiscalResponsibilityRecordsAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_fiscal_responsibility_record_create_dto) {
        cJSON_Delete(localVarSingleItemJSON_fiscal_responsibility_record_create_dto);
        localVarSingleItemJSON_fiscal_responsibility_record_create_dto = NULL;
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

// Delete a fiscal responsibility record
//
// Deletes a fiscal responsibility record identified by its unique identifier.
//
empty_envelope_t*
FiscalResponsibilityRecordsAPI_deleteFiscalResponsibilityRecord(apiClient_t *apiClient, tenantId, char *fiscalResponsibilityRecordId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/AccountingService/Fiscals/Authorities/FiscalResponsibilityRecords/{fiscalResponsibilityRecordId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/AccountingService/Fiscals/Authorities/FiscalResponsibilityRecords/{fiscalResponsibilityRecordId}");


    // Path Params
    long sizeOfPathParams_fiscalResponsibilityRecordId = strlen(fiscalResponsibilityRecordId)+3 + strlen("{ fiscalResponsibilityRecordId }");
    if(fiscalResponsibilityRecordId == NULL) {
        goto end;
    }
    char* localVarToReplace_fiscalResponsibilityRecordId = malloc(sizeOfPathParams_fiscalResponsibilityRecordId);
    sprintf(localVarToReplace_fiscalResponsibilityRecordId, "{%s}", "fiscalResponsibilityRecordId");

    localVarPath = strReplace(localVarPath, localVarToReplace_fiscalResponsibilityRecordId, fiscalResponsibilityRecordId);
    if(fiscalResponsibilityRecordId == NULL) {
        goto end;
    }
    char* localVarToReplace_fiscalResponsibilityRecordId = malloc(sizeOfPathParams_fiscalResponsibilityRecordId);
    sprintf(localVarToReplace_fiscalResponsibilityRecordId, "{%s}", "fiscalResponsibilityRecordId");

    localVarPath = strReplace(localVarPath, localVarToReplace_fiscalResponsibilityRecordId, fiscalResponsibilityRecordId);



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
    cJSON *FiscalResponsibilityRecordsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(FiscalResponsibilityRecordsAPIlocalVarJSON);
    cJSON_Delete(FiscalResponsibilityRecordsAPIlocalVarJSON);
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
    free(localVarToReplace_fiscalResponsibilityRecordId);
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

// Get fiscal responsibility record by ID
//
// Retrieves a specific fiscal responsibility record by its unique identifier.
//
fiscal_responsibility_record_dto_envelope_t*
FiscalResponsibilityRecordsAPI_getFiscalResponsibilityRecord(apiClient_t *apiClient, tenantId, char *fiscalAuthorityId, char *fiscalResponsibilityId, char *fiscalResponsibilityRecordId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/AccountingService/Fiscals/Authorities/{fiscalAuthorityId}/FiscalResponsibilities/{fiscalResponsibilityId}/FiscalResponsibilityRecords/{fiscalResponsibilityRecordId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/AccountingService/Fiscals/Authorities/{fiscalAuthorityId}/FiscalResponsibilities/{fiscalResponsibilityId}/FiscalResponsibilityRecords/{fiscalResponsibilityRecordId}");


    // Path Params
    long sizeOfPathParams_fiscalAuthorityId = strlen(fiscalAuthorityId)+3 + strlen(fiscalResponsibilityId)+3 + strlen(fiscalResponsibilityRecordId)+3 + strlen("{ fiscalAuthorityId }");
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
    long sizeOfPathParams_fiscalResponsibilityId = strlen(fiscalAuthorityId)+3 + strlen(fiscalResponsibilityId)+3 + strlen(fiscalResponsibilityRecordId)+3 + strlen("{ fiscalResponsibilityId }");
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

    // Path Params
    long sizeOfPathParams_fiscalResponsibilityRecordId = strlen(fiscalAuthorityId)+3 + strlen(fiscalResponsibilityId)+3 + strlen(fiscalResponsibilityRecordId)+3 + strlen("{ fiscalResponsibilityRecordId }");
    if(fiscalResponsibilityRecordId == NULL) {
        goto end;
    }
    char* localVarToReplace_fiscalResponsibilityRecordId = malloc(sizeOfPathParams_fiscalResponsibilityRecordId);
    sprintf(localVarToReplace_fiscalResponsibilityRecordId, "{%s}", "fiscalResponsibilityRecordId");

    localVarPath = strReplace(localVarPath, localVarToReplace_fiscalResponsibilityRecordId, fiscalResponsibilityRecordId);
    if(fiscalResponsibilityRecordId == NULL) {
        goto end;
    }
    char* localVarToReplace_fiscalResponsibilityRecordId = malloc(sizeOfPathParams_fiscalResponsibilityRecordId);
    sprintf(localVarToReplace_fiscalResponsibilityRecordId, "{%s}", "fiscalResponsibilityRecordId");

    localVarPath = strReplace(localVarPath, localVarToReplace_fiscalResponsibilityRecordId, fiscalResponsibilityRecordId);



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
    cJSON *FiscalResponsibilityRecordsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    fiscal_responsibility_record_dto_envelope_t *elementToReturn = fiscal_responsibility_record_dto_envelope_parseFromJSON(FiscalResponsibilityRecordsAPIlocalVarJSON);
    cJSON_Delete(FiscalResponsibilityRecordsAPIlocalVarJSON);
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
    free(localVarToReplace_fiscalResponsibilityRecordId);
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

// Get fiscal responsibility records
//
// Retrieves all fiscal responsibility records for the specified fiscal responsibility.
//
fiscal_responsibility_record_dto_list_envelope_t*
FiscalResponsibilityRecordsAPI_getFiscalResponsibilityRecords(apiClient_t *apiClient, tenantId, char *fiscalAuthorityId, char *fiscalResponsibilityId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/AccountingService/Fiscals/Authorities/{fiscalAuthorityId}/FiscalResponsibilities/{fiscalResponsibilityId}/FiscalResponsibilityRecords")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/AccountingService/Fiscals/Authorities/{fiscalAuthorityId}/FiscalResponsibilities/{fiscalResponsibilityId}/FiscalResponsibilityRecords");


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
    cJSON *FiscalResponsibilityRecordsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    fiscal_responsibility_record_dto_list_envelope_t *elementToReturn = fiscal_responsibility_record_dto_list_envelope_parseFromJSON(FiscalResponsibilityRecordsAPIlocalVarJSON);
    cJSON_Delete(FiscalResponsibilityRecordsAPIlocalVarJSON);
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

// Get fiscal responsibility records count
//
// Returns the total count of fiscal responsibility records for the specified fiscal responsibility.
//
int32_envelope_t*
FiscalResponsibilityRecordsAPI_getFiscalResponsibilityRecordsCount(apiClient_t *apiClient, tenantId, char *fiscalAuthorityId, char *fiscalResponsibilityId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/AccountingService/Fiscals/Authorities/{fiscalAuthorityId}/FiscalResponsibilities/{fiscalResponsibilityId}/FiscalResponsibilityRecords/Count")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/AccountingService/Fiscals/Authorities/{fiscalAuthorityId}/FiscalResponsibilities/{fiscalResponsibilityId}/FiscalResponsibilityRecords/Count");


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
    cJSON *FiscalResponsibilityRecordsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    int32_envelope_t *elementToReturn = int32_envelope_parseFromJSON(FiscalResponsibilityRecordsAPIlocalVarJSON);
    cJSON_Delete(FiscalResponsibilityRecordsAPIlocalVarJSON);
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

// Update a fiscal responsibility record
//
// Updates an existing fiscal responsibility record identified by its unique identifier.
//
empty_envelope_t*
FiscalResponsibilityRecordsAPI_updateFiscalResponsibilityRecord(apiClient_t *apiClient, tenantId, char *fiscalResponsibilityRecordId, char *api_version, char *x_api_version, fiscal_responsibility_record_update_dto_t *fiscal_responsibility_record_update_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/AccountingService/Fiscals/Authorities/FiscalResponsibilityRecords/{fiscalResponsibilityRecordId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/AccountingService/Fiscals/Authorities/FiscalResponsibilityRecords/{fiscalResponsibilityRecordId}");


    // Path Params
    long sizeOfPathParams_fiscalResponsibilityRecordId = strlen(fiscalResponsibilityRecordId)+3 + strlen("{ fiscalResponsibilityRecordId }");
    if(fiscalResponsibilityRecordId == NULL) {
        goto end;
    }
    char* localVarToReplace_fiscalResponsibilityRecordId = malloc(sizeOfPathParams_fiscalResponsibilityRecordId);
    sprintf(localVarToReplace_fiscalResponsibilityRecordId, "{%s}", "fiscalResponsibilityRecordId");

    localVarPath = strReplace(localVarPath, localVarToReplace_fiscalResponsibilityRecordId, fiscalResponsibilityRecordId);
    if(fiscalResponsibilityRecordId == NULL) {
        goto end;
    }
    char* localVarToReplace_fiscalResponsibilityRecordId = malloc(sizeOfPathParams_fiscalResponsibilityRecordId);
    sprintf(localVarToReplace_fiscalResponsibilityRecordId, "{%s}", "fiscalResponsibilityRecordId");

    localVarPath = strReplace(localVarPath, localVarToReplace_fiscalResponsibilityRecordId, fiscalResponsibilityRecordId);



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
    cJSON *localVarSingleItemJSON_fiscal_responsibility_record_update_dto = NULL;
    if (fiscal_responsibility_record_update_dto != NULL)
    {
        //string
        localVarSingleItemJSON_fiscal_responsibility_record_update_dto = fiscal_responsibility_record_update_dto_convertToJSON(fiscal_responsibility_record_update_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_fiscal_responsibility_record_update_dto);
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
    cJSON *FiscalResponsibilityRecordsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(FiscalResponsibilityRecordsAPIlocalVarJSON);
    cJSON_Delete(FiscalResponsibilityRecordsAPIlocalVarJSON);
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
    free(localVarToReplace_fiscalResponsibilityRecordId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
    if (localVarSingleItemJSON_fiscal_responsibility_record_update_dto) {
        cJSON_Delete(localVarSingleItemJSON_fiscal_responsibility_record_update_dto);
        localVarSingleItemJSON_fiscal_responsibility_record_update_dto = NULL;
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

