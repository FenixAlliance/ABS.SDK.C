#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "RailWaybillsAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Add a line to rail waybill
//
// Adds a new line to a rail waybill.
//
empty_envelope_t*
RailWaybillsAPI_addRailWaybillLineAsync(apiClient_t *apiClient, char *tenantId, char *waybillId, char *api_version, char *x_api_version, waybill_line_create_dto_t *waybill_line_create_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/LogisticsService/RailWaybills/{waybillId}/Lines")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/LogisticsService/RailWaybills/{waybillId}/Lines");


    // Path Params
    long sizeOfPathParams_waybillId = strlen(waybillId)+3 + strlen("{ waybillId }");
    if(waybillId == NULL) {
        goto end;
    }
    char* localVarToReplace_waybillId = malloc(sizeOfPathParams_waybillId);
    sprintf(localVarToReplace_waybillId, "{%s}", "waybillId");

    localVarPath = strReplace(localVarPath, localVarToReplace_waybillId, waybillId);
    if(waybillId == NULL) {
        goto end;
    }
    char* localVarToReplace_waybillId = malloc(sizeOfPathParams_waybillId);
    sprintf(localVarToReplace_waybillId, "{%s}", "waybillId");

    localVarPath = strReplace(localVarPath, localVarToReplace_waybillId, waybillId);



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
    cJSON *localVarSingleItemJSON_waybill_line_create_dto = NULL;
    if (waybill_line_create_dto != NULL)
    {
        //string
        localVarSingleItemJSON_waybill_line_create_dto = waybill_line_create_dto_convertToJSON(waybill_line_create_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_waybill_line_create_dto);
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
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad Request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *RailWaybillsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(RailWaybillsAPIlocalVarJSON);
    cJSON_Delete(RailWaybillsAPIlocalVarJSON);
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
    free(localVarToReplace_waybillId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
    if (localVarSingleItemJSON_waybill_line_create_dto) {
        cJSON_Delete(localVarSingleItemJSON_waybill_line_create_dto);
        localVarSingleItemJSON_waybill_line_create_dto = NULL;
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

// Cancel a rail waybill
//
// Cancels a rail waybill.
//
empty_envelope_t*
RailWaybillsAPI_cancelRailWaybillAsync(apiClient_t *apiClient, char *tenantId, char *waybillId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/LogisticsService/RailWaybills/{waybillId}/Cancel")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/LogisticsService/RailWaybills/{waybillId}/Cancel");


    // Path Params
    long sizeOfPathParams_waybillId = strlen(waybillId)+3 + strlen("{ waybillId }");
    if(waybillId == NULL) {
        goto end;
    }
    char* localVarToReplace_waybillId = malloc(sizeOfPathParams_waybillId);
    sprintf(localVarToReplace_waybillId, "{%s}", "waybillId");

    localVarPath = strReplace(localVarPath, localVarToReplace_waybillId, waybillId);
    if(waybillId == NULL) {
        goto end;
    }
    char* localVarToReplace_waybillId = malloc(sizeOfPathParams_waybillId);
    sprintf(localVarToReplace_waybillId, "{%s}", "waybillId");

    localVarPath = strReplace(localVarPath, localVarToReplace_waybillId, waybillId);



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
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad Request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *RailWaybillsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(RailWaybillsAPIlocalVarJSON);
    cJSON_Delete(RailWaybillsAPIlocalVarJSON);
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
    free(localVarToReplace_waybillId);
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

// Create a rail waybill
//
// Creates a new rail waybill for the specified tenant.
//
empty_envelope_t*
RailWaybillsAPI_createRailWaybillAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, rail_waybill_create_dto_t *rail_waybill_create_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/LogisticsService/RailWaybills")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/LogisticsService/RailWaybills");




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
    cJSON *localVarSingleItemJSON_rail_waybill_create_dto = NULL;
    if (rail_waybill_create_dto != NULL)
    {
        //string
        localVarSingleItemJSON_rail_waybill_create_dto = rail_waybill_create_dto_convertToJSON(rail_waybill_create_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_rail_waybill_create_dto);
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
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad Request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *RailWaybillsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(RailWaybillsAPIlocalVarJSON);
    cJSON_Delete(RailWaybillsAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_rail_waybill_create_dto) {
        cJSON_Delete(localVarSingleItemJSON_rail_waybill_create_dto);
        localVarSingleItemJSON_rail_waybill_create_dto = NULL;
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

// Delete a rail waybill
//
// Deletes a rail waybill.
//
empty_envelope_t*
RailWaybillsAPI_deleteRailWaybillAsync(apiClient_t *apiClient, char *tenantId, char *waybillId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/LogisticsService/RailWaybills/{waybillId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/LogisticsService/RailWaybills/{waybillId}");


    // Path Params
    long sizeOfPathParams_waybillId = strlen(waybillId)+3 + strlen("{ waybillId }");
    if(waybillId == NULL) {
        goto end;
    }
    char* localVarToReplace_waybillId = malloc(sizeOfPathParams_waybillId);
    sprintf(localVarToReplace_waybillId, "{%s}", "waybillId");

    localVarPath = strReplace(localVarPath, localVarToReplace_waybillId, waybillId);
    if(waybillId == NULL) {
        goto end;
    }
    char* localVarToReplace_waybillId = malloc(sizeOfPathParams_waybillId);
    sprintf(localVarToReplace_waybillId, "{%s}", "waybillId");

    localVarPath = strReplace(localVarPath, localVarToReplace_waybillId, waybillId);



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
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *RailWaybillsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(RailWaybillsAPIlocalVarJSON);
    cJSON_Delete(RailWaybillsAPIlocalVarJSON);
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
    free(localVarToReplace_waybillId);
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

// Get rail waybill by ID
//
// Retrieves a specific rail waybill by its identifier.
//
rail_waybill_dto_envelope_t*
RailWaybillsAPI_getRailWaybillByIdAsync(apiClient_t *apiClient, char *tenantId, char *waybillId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/LogisticsService/RailWaybills/{waybillId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/LogisticsService/RailWaybills/{waybillId}");


    // Path Params
    long sizeOfPathParams_waybillId = strlen(waybillId)+3 + strlen("{ waybillId }");
    if(waybillId == NULL) {
        goto end;
    }
    char* localVarToReplace_waybillId = malloc(sizeOfPathParams_waybillId);
    sprintf(localVarToReplace_waybillId, "{%s}", "waybillId");

    localVarPath = strReplace(localVarPath, localVarToReplace_waybillId, waybillId);
    if(waybillId == NULL) {
        goto end;
    }
    char* localVarToReplace_waybillId = malloc(sizeOfPathParams_waybillId);
    sprintf(localVarToReplace_waybillId, "{%s}", "waybillId");

    localVarPath = strReplace(localVarPath, localVarToReplace_waybillId, waybillId);



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
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *RailWaybillsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    rail_waybill_dto_envelope_t *elementToReturn = rail_waybill_dto_envelope_parseFromJSON(RailWaybillsAPIlocalVarJSON);
    cJSON_Delete(RailWaybillsAPIlocalVarJSON);
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
    free(localVarToReplace_waybillId);
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

// Get rail waybill lines
//
// Retrieves all lines for a specific rail waybill.
//
waybill_line_dto_list_envelope_t*
RailWaybillsAPI_getRailWaybillLinesAsync(apiClient_t *apiClient, char *tenantId, char *waybillId, char *api_version, char *x_api_version, waybill_line_dto_collection_query_parameters_t *waybill_line_dto_collection_query_parameters)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/LogisticsService/RailWaybills/{waybillId}/Lines")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/LogisticsService/RailWaybills/{waybillId}/Lines");


    // Path Params
    long sizeOfPathParams_waybillId = strlen(waybillId)+3 + strlen("{ waybillId }");
    if(waybillId == NULL) {
        goto end;
    }
    char* localVarToReplace_waybillId = malloc(sizeOfPathParams_waybillId);
    sprintf(localVarToReplace_waybillId, "{%s}", "waybillId");

    localVarPath = strReplace(localVarPath, localVarToReplace_waybillId, waybillId);
    if(waybillId == NULL) {
        goto end;
    }
    char* localVarToReplace_waybillId = malloc(sizeOfPathParams_waybillId);
    sprintf(localVarToReplace_waybillId, "{%s}", "waybillId");

    localVarPath = strReplace(localVarPath, localVarToReplace_waybillId, waybillId);



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
    cJSON *localVarSingleItemJSON_waybill_line_dto_collection_query_parameters = NULL;
    if (waybill_line_dto_collection_query_parameters != NULL)
    {
        //string
        localVarSingleItemJSON_waybill_line_dto_collection_query_parameters = waybill_line_dto_collection_query_parameters_convertToJSON(waybill_line_dto_collection_query_parameters);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_waybill_line_dto_collection_query_parameters);
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
    cJSON *RailWaybillsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    waybill_line_dto_list_envelope_t *elementToReturn = waybill_line_dto_list_envelope_parseFromJSON(RailWaybillsAPIlocalVarJSON);
    cJSON_Delete(RailWaybillsAPIlocalVarJSON);
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
    free(localVarToReplace_waybillId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
    if (localVarSingleItemJSON_waybill_line_dto_collection_query_parameters) {
        cJSON_Delete(localVarSingleItemJSON_waybill_line_dto_collection_query_parameters);
        localVarSingleItemJSON_waybill_line_dto_collection_query_parameters = NULL;
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

// Get rail waybill lines count
//
// Returns the count of lines for a specific rail waybill.
//
int32_envelope_t*
RailWaybillsAPI_getRailWaybillLinesCountAsync(apiClient_t *apiClient, char *tenantId, char *waybillId, char *api_version, char *x_api_version, waybill_line_dto_collection_query_parameters_t *waybill_line_dto_collection_query_parameters)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/LogisticsService/RailWaybills/{waybillId}/Lines/Count")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/LogisticsService/RailWaybills/{waybillId}/Lines/Count");


    // Path Params
    long sizeOfPathParams_waybillId = strlen(waybillId)+3 + strlen("{ waybillId }");
    if(waybillId == NULL) {
        goto end;
    }
    char* localVarToReplace_waybillId = malloc(sizeOfPathParams_waybillId);
    sprintf(localVarToReplace_waybillId, "{%s}", "waybillId");

    localVarPath = strReplace(localVarPath, localVarToReplace_waybillId, waybillId);
    if(waybillId == NULL) {
        goto end;
    }
    char* localVarToReplace_waybillId = malloc(sizeOfPathParams_waybillId);
    sprintf(localVarToReplace_waybillId, "{%s}", "waybillId");

    localVarPath = strReplace(localVarPath, localVarToReplace_waybillId, waybillId);



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
    cJSON *localVarSingleItemJSON_waybill_line_dto_collection_query_parameters = NULL;
    if (waybill_line_dto_collection_query_parameters != NULL)
    {
        //string
        localVarSingleItemJSON_waybill_line_dto_collection_query_parameters = waybill_line_dto_collection_query_parameters_convertToJSON(waybill_line_dto_collection_query_parameters);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_waybill_line_dto_collection_query_parameters);
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
    cJSON *RailWaybillsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    int32_envelope_t *elementToReturn = int32_envelope_parseFromJSON(RailWaybillsAPIlocalVarJSON);
    cJSON_Delete(RailWaybillsAPIlocalVarJSON);
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
    free(localVarToReplace_waybillId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
    if (localVarSingleItemJSON_waybill_line_dto_collection_query_parameters) {
        cJSON_Delete(localVarSingleItemJSON_waybill_line_dto_collection_query_parameters);
        localVarSingleItemJSON_waybill_line_dto_collection_query_parameters = NULL;
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

// Get all rail waybills
//
// Retrieves all rail waybills for the specified tenant.
//
rail_waybill_dto_list_envelope_t*
RailWaybillsAPI_getRailWaybillsAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, rail_waybill_dto_collection_query_parameters_t *rail_waybill_dto_collection_query_parameters)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/LogisticsService/RailWaybills")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/LogisticsService/RailWaybills");




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
    cJSON *localVarSingleItemJSON_rail_waybill_dto_collection_query_parameters = NULL;
    if (rail_waybill_dto_collection_query_parameters != NULL)
    {
        //string
        localVarSingleItemJSON_rail_waybill_dto_collection_query_parameters = rail_waybill_dto_collection_query_parameters_convertToJSON(rail_waybill_dto_collection_query_parameters);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_rail_waybill_dto_collection_query_parameters);
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
    cJSON *RailWaybillsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    rail_waybill_dto_list_envelope_t *elementToReturn = rail_waybill_dto_list_envelope_parseFromJSON(RailWaybillsAPIlocalVarJSON);
    cJSON_Delete(RailWaybillsAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_rail_waybill_dto_collection_query_parameters) {
        cJSON_Delete(localVarSingleItemJSON_rail_waybill_dto_collection_query_parameters);
        localVarSingleItemJSON_rail_waybill_dto_collection_query_parameters = NULL;
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

// Get rail waybills count
//
// Returns the count of rail waybills for the specified tenant.
//
int32_envelope_t*
RailWaybillsAPI_getRailWaybillsCountAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, rail_waybill_dto_collection_query_parameters_t *rail_waybill_dto_collection_query_parameters)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/LogisticsService/RailWaybills/Count")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/LogisticsService/RailWaybills/Count");




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
    cJSON *localVarSingleItemJSON_rail_waybill_dto_collection_query_parameters = NULL;
    if (rail_waybill_dto_collection_query_parameters != NULL)
    {
        //string
        localVarSingleItemJSON_rail_waybill_dto_collection_query_parameters = rail_waybill_dto_collection_query_parameters_convertToJSON(rail_waybill_dto_collection_query_parameters);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_rail_waybill_dto_collection_query_parameters);
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
    cJSON *RailWaybillsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    int32_envelope_t *elementToReturn = int32_envelope_parseFromJSON(RailWaybillsAPIlocalVarJSON);
    cJSON_Delete(RailWaybillsAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_rail_waybill_dto_collection_query_parameters) {
        cJSON_Delete(localVarSingleItemJSON_rail_waybill_dto_collection_query_parameters);
        localVarSingleItemJSON_rail_waybill_dto_collection_query_parameters = NULL;
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

// Issue a rail waybill
//
// Issues a rail waybill.
//
empty_envelope_t*
RailWaybillsAPI_issueRailWaybillAsync(apiClient_t *apiClient, char *tenantId, char *waybillId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/LogisticsService/RailWaybills/{waybillId}/Issue")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/LogisticsService/RailWaybills/{waybillId}/Issue");


    // Path Params
    long sizeOfPathParams_waybillId = strlen(waybillId)+3 + strlen("{ waybillId }");
    if(waybillId == NULL) {
        goto end;
    }
    char* localVarToReplace_waybillId = malloc(sizeOfPathParams_waybillId);
    sprintf(localVarToReplace_waybillId, "{%s}", "waybillId");

    localVarPath = strReplace(localVarPath, localVarToReplace_waybillId, waybillId);
    if(waybillId == NULL) {
        goto end;
    }
    char* localVarToReplace_waybillId = malloc(sizeOfPathParams_waybillId);
    sprintf(localVarToReplace_waybillId, "{%s}", "waybillId");

    localVarPath = strReplace(localVarPath, localVarToReplace_waybillId, waybillId);



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
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad Request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *RailWaybillsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(RailWaybillsAPIlocalVarJSON);
    cJSON_Delete(RailWaybillsAPIlocalVarJSON);
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
    free(localVarToReplace_waybillId);
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

// Mark rail waybill delivered
//
// Marks a rail waybill as delivered.
//
empty_envelope_t*
RailWaybillsAPI_markRailWaybillDeliveredAsync(apiClient_t *apiClient, char *tenantId, char *waybillId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/LogisticsService/RailWaybills/{waybillId}/MarkDelivered")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/LogisticsService/RailWaybills/{waybillId}/MarkDelivered");


    // Path Params
    long sizeOfPathParams_waybillId = strlen(waybillId)+3 + strlen("{ waybillId }");
    if(waybillId == NULL) {
        goto end;
    }
    char* localVarToReplace_waybillId = malloc(sizeOfPathParams_waybillId);
    sprintf(localVarToReplace_waybillId, "{%s}", "waybillId");

    localVarPath = strReplace(localVarPath, localVarToReplace_waybillId, waybillId);
    if(waybillId == NULL) {
        goto end;
    }
    char* localVarToReplace_waybillId = malloc(sizeOfPathParams_waybillId);
    sprintf(localVarToReplace_waybillId, "{%s}", "waybillId");

    localVarPath = strReplace(localVarPath, localVarToReplace_waybillId, waybillId);



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
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad Request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *RailWaybillsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(RailWaybillsAPIlocalVarJSON);
    cJSON_Delete(RailWaybillsAPIlocalVarJSON);
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
    free(localVarToReplace_waybillId);
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

// Mark rail waybill in transit
//
// Marks a rail waybill as in transit.
//
empty_envelope_t*
RailWaybillsAPI_markRailWaybillInTransitAsync(apiClient_t *apiClient, char *tenantId, char *waybillId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/LogisticsService/RailWaybills/{waybillId}/MarkInTransit")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/LogisticsService/RailWaybills/{waybillId}/MarkInTransit");


    // Path Params
    long sizeOfPathParams_waybillId = strlen(waybillId)+3 + strlen("{ waybillId }");
    if(waybillId == NULL) {
        goto end;
    }
    char* localVarToReplace_waybillId = malloc(sizeOfPathParams_waybillId);
    sprintf(localVarToReplace_waybillId, "{%s}", "waybillId");

    localVarPath = strReplace(localVarPath, localVarToReplace_waybillId, waybillId);
    if(waybillId == NULL) {
        goto end;
    }
    char* localVarToReplace_waybillId = malloc(sizeOfPathParams_waybillId);
    sprintf(localVarToReplace_waybillId, "{%s}", "waybillId");

    localVarPath = strReplace(localVarPath, localVarToReplace_waybillId, waybillId);



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
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad Request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *RailWaybillsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(RailWaybillsAPIlocalVarJSON);
    cJSON_Delete(RailWaybillsAPIlocalVarJSON);
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
    free(localVarToReplace_waybillId);
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

// Patch a rail waybill
//
// Partially updates an existing rail waybill using a JSON Patch document.
//
empty_envelope_t*
RailWaybillsAPI_patchRailWaybillAsync(apiClient_t *apiClient, char *tenantId, char *waybillId, char *api_version, char *x_api_version, list_t *patch_operation)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/LogisticsService/RailWaybills/{waybillId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/LogisticsService/RailWaybills/{waybillId}");


    // Path Params
    long sizeOfPathParams_waybillId = strlen(waybillId)+3 + strlen("{ waybillId }");
    if(waybillId == NULL) {
        goto end;
    }
    char* localVarToReplace_waybillId = malloc(sizeOfPathParams_waybillId);
    sprintf(localVarToReplace_waybillId, "{%s}", "waybillId");

    localVarPath = strReplace(localVarPath, localVarToReplace_waybillId, waybillId);
    if(waybillId == NULL) {
        goto end;
    }
    char* localVarToReplace_waybillId = malloc(sizeOfPathParams_waybillId);
    sprintf(localVarToReplace_waybillId, "{%s}", "waybillId");

    localVarPath = strReplace(localVarPath, localVarToReplace_waybillId, waybillId);



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
    //notstring
    cJSON *localVar_patch_operation = NULL;
    cJSON *localVarItemJSON_patch_operation = NULL;
    cJSON *localVarSingleItemJSON_patch_operation = NULL;
    if (patch_operation != NULL)
    {
        localVarItemJSON_patch_operation = cJSON_CreateObject();
        localVarSingleItemJSON_patch_operation = cJSON_AddArrayToObject(localVarItemJSON_patch_operation, "patch_operation");
        if (localVarSingleItemJSON_patch_operation == NULL)
        {
            // nonprimitive container

            goto end;
        }
    }

    listEntry_t *patch_operationBodyListEntry;
    list_ForEach(patch_operationBodyListEntry, patch_operation)
    {
        localVar_patch_operation = patch_operation_convertToJSON(patch_operationBodyListEntry->data);
        if(localVar_patch_operation == NULL)
        {
            goto end;
        }
        cJSON_AddItemToArray(localVarSingleItemJSON_patch_operation, localVar_patch_operation);
        localVarBodyParameters = cJSON_Print(localVarItemJSON_patch_operation);
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
                    "PATCH");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad Request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *RailWaybillsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(RailWaybillsAPIlocalVarJSON);
    cJSON_Delete(RailWaybillsAPIlocalVarJSON);
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
    free(localVarToReplace_waybillId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
    if (localVarItemJSON_patch_operation) {
        cJSON_Delete(localVarItemJSON_patch_operation);
        localVarItemJSON_patch_operation = NULL;
    }
    if (localVarSingleItemJSON_patch_operation) {
        cJSON_Delete(localVarSingleItemJSON_patch_operation);
        localVarSingleItemJSON_patch_operation = NULL;
    }
    if (localVar_patch_operation) {
        cJSON_Delete(localVar_patch_operation);
        localVar_patch_operation = NULL;
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

// Patch a rail waybill line
//
// Partially updates a line on a rail waybill using a JSON Patch document.
//
empty_envelope_t*
RailWaybillsAPI_patchRailWaybillLineAsync(apiClient_t *apiClient, char *tenantId, char *waybillId, char *lineId, char *api_version, char *x_api_version, list_t *patch_operation)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/LogisticsService/RailWaybills/{waybillId}/Lines/{lineId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/LogisticsService/RailWaybills/{waybillId}/Lines/{lineId}");


    // Path Params
    long sizeOfPathParams_waybillId = strlen(waybillId)+3 + strlen(lineId)+3 + strlen("{ waybillId }");
    if(waybillId == NULL) {
        goto end;
    }
    char* localVarToReplace_waybillId = malloc(sizeOfPathParams_waybillId);
    sprintf(localVarToReplace_waybillId, "{%s}", "waybillId");

    localVarPath = strReplace(localVarPath, localVarToReplace_waybillId, waybillId);
    if(waybillId == NULL) {
        goto end;
    }
    char* localVarToReplace_waybillId = malloc(sizeOfPathParams_waybillId);
    sprintf(localVarToReplace_waybillId, "{%s}", "waybillId");

    localVarPath = strReplace(localVarPath, localVarToReplace_waybillId, waybillId);

    // Path Params
    long sizeOfPathParams_lineId = strlen(waybillId)+3 + strlen(lineId)+3 + strlen("{ lineId }");
    if(lineId == NULL) {
        goto end;
    }
    char* localVarToReplace_lineId = malloc(sizeOfPathParams_lineId);
    sprintf(localVarToReplace_lineId, "{%s}", "lineId");

    localVarPath = strReplace(localVarPath, localVarToReplace_lineId, lineId);
    if(lineId == NULL) {
        goto end;
    }
    char* localVarToReplace_lineId = malloc(sizeOfPathParams_lineId);
    sprintf(localVarToReplace_lineId, "{%s}", "lineId");

    localVarPath = strReplace(localVarPath, localVarToReplace_lineId, lineId);



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
    //notstring
    cJSON *localVar_patch_operation = NULL;
    cJSON *localVarItemJSON_patch_operation = NULL;
    cJSON *localVarSingleItemJSON_patch_operation = NULL;
    if (patch_operation != NULL)
    {
        localVarItemJSON_patch_operation = cJSON_CreateObject();
        localVarSingleItemJSON_patch_operation = cJSON_AddArrayToObject(localVarItemJSON_patch_operation, "patch_operation");
        if (localVarSingleItemJSON_patch_operation == NULL)
        {
            // nonprimitive container

            goto end;
        }
    }

    listEntry_t *patch_operationBodyListEntry;
    list_ForEach(patch_operationBodyListEntry, patch_operation)
    {
        localVar_patch_operation = patch_operation_convertToJSON(patch_operationBodyListEntry->data);
        if(localVar_patch_operation == NULL)
        {
            goto end;
        }
        cJSON_AddItemToArray(localVarSingleItemJSON_patch_operation, localVar_patch_operation);
        localVarBodyParameters = cJSON_Print(localVarItemJSON_patch_operation);
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
                    "PATCH");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad Request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *RailWaybillsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(RailWaybillsAPIlocalVarJSON);
    cJSON_Delete(RailWaybillsAPIlocalVarJSON);
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
    free(localVarToReplace_waybillId);
    free(localVarToReplace_lineId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
    if (localVarItemJSON_patch_operation) {
        cJSON_Delete(localVarItemJSON_patch_operation);
        localVarItemJSON_patch_operation = NULL;
    }
    if (localVarSingleItemJSON_patch_operation) {
        cJSON_Delete(localVarSingleItemJSON_patch_operation);
        localVarSingleItemJSON_patch_operation = NULL;
    }
    if (localVar_patch_operation) {
        cJSON_Delete(localVar_patch_operation);
        localVar_patch_operation = NULL;
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

// Remove a rail waybill line
//
// Removes a line from a rail waybill.
//
empty_envelope_t*
RailWaybillsAPI_removeRailWaybillLineAsync(apiClient_t *apiClient, char *tenantId, char *waybillId, char *lineId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/LogisticsService/RailWaybills/{waybillId}/Lines/{lineId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/LogisticsService/RailWaybills/{waybillId}/Lines/{lineId}");


    // Path Params
    long sizeOfPathParams_waybillId = strlen(waybillId)+3 + strlen(lineId)+3 + strlen("{ waybillId }");
    if(waybillId == NULL) {
        goto end;
    }
    char* localVarToReplace_waybillId = malloc(sizeOfPathParams_waybillId);
    sprintf(localVarToReplace_waybillId, "{%s}", "waybillId");

    localVarPath = strReplace(localVarPath, localVarToReplace_waybillId, waybillId);
    if(waybillId == NULL) {
        goto end;
    }
    char* localVarToReplace_waybillId = malloc(sizeOfPathParams_waybillId);
    sprintf(localVarToReplace_waybillId, "{%s}", "waybillId");

    localVarPath = strReplace(localVarPath, localVarToReplace_waybillId, waybillId);

    // Path Params
    long sizeOfPathParams_lineId = strlen(waybillId)+3 + strlen(lineId)+3 + strlen("{ lineId }");
    if(lineId == NULL) {
        goto end;
    }
    char* localVarToReplace_lineId = malloc(sizeOfPathParams_lineId);
    sprintf(localVarToReplace_lineId, "{%s}", "lineId");

    localVarPath = strReplace(localVarPath, localVarToReplace_lineId, lineId);
    if(lineId == NULL) {
        goto end;
    }
    char* localVarToReplace_lineId = malloc(sizeOfPathParams_lineId);
    sprintf(localVarToReplace_lineId, "{%s}", "lineId");

    localVarPath = strReplace(localVarPath, localVarToReplace_lineId, lineId);



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
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *RailWaybillsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(RailWaybillsAPIlocalVarJSON);
    cJSON_Delete(RailWaybillsAPIlocalVarJSON);
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
    free(localVarToReplace_waybillId);
    free(localVarToReplace_lineId);
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

// Update a rail waybill
//
// Updates an existing rail waybill.
//
empty_envelope_t*
RailWaybillsAPI_updateRailWaybillAsync(apiClient_t *apiClient, char *tenantId, char *waybillId, char *api_version, char *x_api_version, rail_waybill_update_dto_t *rail_waybill_update_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/LogisticsService/RailWaybills/{waybillId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/LogisticsService/RailWaybills/{waybillId}");


    // Path Params
    long sizeOfPathParams_waybillId = strlen(waybillId)+3 + strlen("{ waybillId }");
    if(waybillId == NULL) {
        goto end;
    }
    char* localVarToReplace_waybillId = malloc(sizeOfPathParams_waybillId);
    sprintf(localVarToReplace_waybillId, "{%s}", "waybillId");

    localVarPath = strReplace(localVarPath, localVarToReplace_waybillId, waybillId);
    if(waybillId == NULL) {
        goto end;
    }
    char* localVarToReplace_waybillId = malloc(sizeOfPathParams_waybillId);
    sprintf(localVarToReplace_waybillId, "{%s}", "waybillId");

    localVarPath = strReplace(localVarPath, localVarToReplace_waybillId, waybillId);



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
    cJSON *localVarSingleItemJSON_rail_waybill_update_dto = NULL;
    if (rail_waybill_update_dto != NULL)
    {
        //string
        localVarSingleItemJSON_rail_waybill_update_dto = rail_waybill_update_dto_convertToJSON(rail_waybill_update_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_rail_waybill_update_dto);
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
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad Request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *RailWaybillsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(RailWaybillsAPIlocalVarJSON);
    cJSON_Delete(RailWaybillsAPIlocalVarJSON);
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
    free(localVarToReplace_waybillId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
    if (localVarSingleItemJSON_rail_waybill_update_dto) {
        cJSON_Delete(localVarSingleItemJSON_rail_waybill_update_dto);
        localVarSingleItemJSON_rail_waybill_update_dto = NULL;
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

// Update a rail waybill line
//
// Updates an existing line on a rail waybill.
//
empty_envelope_t*
RailWaybillsAPI_updateRailWaybillLineAsync(apiClient_t *apiClient, char *tenantId, char *waybillId, char *lineId, char *api_version, char *x_api_version, waybill_line_update_dto_t *waybill_line_update_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/LogisticsService/RailWaybills/{waybillId}/Lines/{lineId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/LogisticsService/RailWaybills/{waybillId}/Lines/{lineId}");


    // Path Params
    long sizeOfPathParams_waybillId = strlen(waybillId)+3 + strlen(lineId)+3 + strlen("{ waybillId }");
    if(waybillId == NULL) {
        goto end;
    }
    char* localVarToReplace_waybillId = malloc(sizeOfPathParams_waybillId);
    sprintf(localVarToReplace_waybillId, "{%s}", "waybillId");

    localVarPath = strReplace(localVarPath, localVarToReplace_waybillId, waybillId);
    if(waybillId == NULL) {
        goto end;
    }
    char* localVarToReplace_waybillId = malloc(sizeOfPathParams_waybillId);
    sprintf(localVarToReplace_waybillId, "{%s}", "waybillId");

    localVarPath = strReplace(localVarPath, localVarToReplace_waybillId, waybillId);

    // Path Params
    long sizeOfPathParams_lineId = strlen(waybillId)+3 + strlen(lineId)+3 + strlen("{ lineId }");
    if(lineId == NULL) {
        goto end;
    }
    char* localVarToReplace_lineId = malloc(sizeOfPathParams_lineId);
    sprintf(localVarToReplace_lineId, "{%s}", "lineId");

    localVarPath = strReplace(localVarPath, localVarToReplace_lineId, lineId);
    if(lineId == NULL) {
        goto end;
    }
    char* localVarToReplace_lineId = malloc(sizeOfPathParams_lineId);
    sprintf(localVarToReplace_lineId, "{%s}", "lineId");

    localVarPath = strReplace(localVarPath, localVarToReplace_lineId, lineId);



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
    cJSON *localVarSingleItemJSON_waybill_line_update_dto = NULL;
    if (waybill_line_update_dto != NULL)
    {
        //string
        localVarSingleItemJSON_waybill_line_update_dto = waybill_line_update_dto_convertToJSON(waybill_line_update_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_waybill_line_update_dto);
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
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad Request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *RailWaybillsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(RailWaybillsAPIlocalVarJSON);
    cJSON_Delete(RailWaybillsAPIlocalVarJSON);
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
    free(localVarToReplace_waybillId);
    free(localVarToReplace_lineId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
    if (localVarSingleItemJSON_waybill_line_update_dto) {
        cJSON_Delete(localVarSingleItemJSON_waybill_line_update_dto);
        localVarSingleItemJSON_waybill_line_update_dto = NULL;
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

