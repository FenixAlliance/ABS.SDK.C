#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "DealUnitFlowsAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Create a deal unit flow
//
// Creates a new deal unit flow for the specified tenant.
//
empty_envelope_t*
DealUnitFlowsAPI_createDealUnitFlowAsync(apiClient_t *apiClient, char *tenantId, deal_unit_flow_create_dto_t *deal_unit_flow_create_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/DealsService/DealUnitFlows")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/DealsService/DealUnitFlows");




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
    cJSON *localVarSingleItemJSON_deal_unit_flow_create_dto = NULL;
    if (deal_unit_flow_create_dto != NULL)
    {
        //string
        localVarSingleItemJSON_deal_unit_flow_create_dto = deal_unit_flow_create_dto_convertToJSON(deal_unit_flow_create_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_deal_unit_flow_create_dto);
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
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *DealUnitFlowsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(DealUnitFlowsAPIlocalVarJSON);
    cJSON_Delete(DealUnitFlowsAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_deal_unit_flow_create_dto) {
        cJSON_Delete(localVarSingleItemJSON_deal_unit_flow_create_dto);
        localVarSingleItemJSON_deal_unit_flow_create_dto = NULL;
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

// Create a deal unit flow stage
//
// Creates a new stage within a specific deal unit flow.
//
empty_envelope_t*
DealUnitFlowsAPI_createDealUnitFlowStageAsync(apiClient_t *apiClient, char *tenantId, char *dealUnitFlowId, deal_unit_flow_stage_create_dto_t *deal_unit_flow_stage_create_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/DealsService/DealUnitFlows/{dealUnitFlowId}/Stages")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/DealsService/DealUnitFlows/{dealUnitFlowId}/Stages");


    // Path Params
    long sizeOfPathParams_dealUnitFlowId = strlen(dealUnitFlowId)+3 + strlen("{ dealUnitFlowId }");
    if(dealUnitFlowId == NULL) {
        goto end;
    }
    char* localVarToReplace_dealUnitFlowId = malloc(sizeOfPathParams_dealUnitFlowId);
    sprintf(localVarToReplace_dealUnitFlowId, "{%s}", "dealUnitFlowId");

    localVarPath = strReplace(localVarPath, localVarToReplace_dealUnitFlowId, dealUnitFlowId);
    if(dealUnitFlowId == NULL) {
        goto end;
    }
    char* localVarToReplace_dealUnitFlowId = malloc(sizeOfPathParams_dealUnitFlowId);
    sprintf(localVarToReplace_dealUnitFlowId, "{%s}", "dealUnitFlowId");

    localVarPath = strReplace(localVarPath, localVarToReplace_dealUnitFlowId, dealUnitFlowId);



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
    cJSON *localVarSingleItemJSON_deal_unit_flow_stage_create_dto = NULL;
    if (deal_unit_flow_stage_create_dto != NULL)
    {
        //string
        localVarSingleItemJSON_deal_unit_flow_stage_create_dto = deal_unit_flow_stage_create_dto_convertToJSON(deal_unit_flow_stage_create_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_deal_unit_flow_stage_create_dto);
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
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *DealUnitFlowsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(DealUnitFlowsAPIlocalVarJSON);
    cJSON_Delete(DealUnitFlowsAPIlocalVarJSON);
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
    free(localVarToReplace_dealUnitFlowId);
    if (localVarSingleItemJSON_deal_unit_flow_stage_create_dto) {
        cJSON_Delete(localVarSingleItemJSON_deal_unit_flow_stage_create_dto);
        localVarSingleItemJSON_deal_unit_flow_stage_create_dto = NULL;
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

// Delete a deal unit flow
//
// Deletes an existing deal unit flow by its unique identifier.
//
empty_envelope_t*
DealUnitFlowsAPI_deleteDealUnitFlowAsync(apiClient_t *apiClient, char *tenantId, char *dealUnitFlowId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/DealsService/DealUnitFlows/{dealUnitFlowId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/DealsService/DealUnitFlows/{dealUnitFlowId}");


    // Path Params
    long sizeOfPathParams_dealUnitFlowId = strlen(dealUnitFlowId)+3 + strlen("{ dealUnitFlowId }");
    if(dealUnitFlowId == NULL) {
        goto end;
    }
    char* localVarToReplace_dealUnitFlowId = malloc(sizeOfPathParams_dealUnitFlowId);
    sprintf(localVarToReplace_dealUnitFlowId, "{%s}", "dealUnitFlowId");

    localVarPath = strReplace(localVarPath, localVarToReplace_dealUnitFlowId, dealUnitFlowId);
    if(dealUnitFlowId == NULL) {
        goto end;
    }
    char* localVarToReplace_dealUnitFlowId = malloc(sizeOfPathParams_dealUnitFlowId);
    sprintf(localVarToReplace_dealUnitFlowId, "{%s}", "dealUnitFlowId");

    localVarPath = strReplace(localVarPath, localVarToReplace_dealUnitFlowId, dealUnitFlowId);



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
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *DealUnitFlowsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(DealUnitFlowsAPIlocalVarJSON);
    cJSON_Delete(DealUnitFlowsAPIlocalVarJSON);
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
    free(localVarToReplace_dealUnitFlowId);
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

// Delete a deal unit flow stage
//
// Deletes an existing stage from a specific deal unit flow.
//
empty_envelope_t*
DealUnitFlowsAPI_deleteDealUnitFlowStageAsync(apiClient_t *apiClient, char *tenantId, char *dealUnitFlowId, char *dealUnitFlowStageId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/DealsService/DealUnitFlows/{dealUnitFlowId}/Stages/{dealUnitFlowStageId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/DealsService/DealUnitFlows/{dealUnitFlowId}/Stages/{dealUnitFlowStageId}");


    // Path Params
    long sizeOfPathParams_dealUnitFlowId = strlen(dealUnitFlowId)+3 + strlen(dealUnitFlowStageId)+3 + strlen("{ dealUnitFlowId }");
    if(dealUnitFlowId == NULL) {
        goto end;
    }
    char* localVarToReplace_dealUnitFlowId = malloc(sizeOfPathParams_dealUnitFlowId);
    sprintf(localVarToReplace_dealUnitFlowId, "{%s}", "dealUnitFlowId");

    localVarPath = strReplace(localVarPath, localVarToReplace_dealUnitFlowId, dealUnitFlowId);
    if(dealUnitFlowId == NULL) {
        goto end;
    }
    char* localVarToReplace_dealUnitFlowId = malloc(sizeOfPathParams_dealUnitFlowId);
    sprintf(localVarToReplace_dealUnitFlowId, "{%s}", "dealUnitFlowId");

    localVarPath = strReplace(localVarPath, localVarToReplace_dealUnitFlowId, dealUnitFlowId);

    // Path Params
    long sizeOfPathParams_dealUnitFlowStageId = strlen(dealUnitFlowId)+3 + strlen(dealUnitFlowStageId)+3 + strlen("{ dealUnitFlowStageId }");
    if(dealUnitFlowStageId == NULL) {
        goto end;
    }
    char* localVarToReplace_dealUnitFlowStageId = malloc(sizeOfPathParams_dealUnitFlowStageId);
    sprintf(localVarToReplace_dealUnitFlowStageId, "{%s}", "dealUnitFlowStageId");

    localVarPath = strReplace(localVarPath, localVarToReplace_dealUnitFlowStageId, dealUnitFlowStageId);
    if(dealUnitFlowStageId == NULL) {
        goto end;
    }
    char* localVarToReplace_dealUnitFlowStageId = malloc(sizeOfPathParams_dealUnitFlowStageId);
    sprintf(localVarToReplace_dealUnitFlowStageId, "{%s}", "dealUnitFlowStageId");

    localVarPath = strReplace(localVarPath, localVarToReplace_dealUnitFlowStageId, dealUnitFlowStageId);



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
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *DealUnitFlowsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(DealUnitFlowsAPIlocalVarJSON);
    cJSON_Delete(DealUnitFlowsAPIlocalVarJSON);
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
    free(localVarToReplace_dealUnitFlowId);
    free(localVarToReplace_dealUnitFlowStageId);
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

// Get deal unit flow by ID
//
// Retrieves a single deal unit flow by its unique identifier.
//
deal_unit_flow_dto_envelope_t*
DealUnitFlowsAPI_getDealUnitFlowAsync(apiClient_t *apiClient, char *tenantId, char *dealUnitFlowId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/DealsService/DealUnitFlows/{dealUnitFlowId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/DealsService/DealUnitFlows/{dealUnitFlowId}");


    // Path Params
    long sizeOfPathParams_dealUnitFlowId = strlen(dealUnitFlowId)+3 + strlen("{ dealUnitFlowId }");
    if(dealUnitFlowId == NULL) {
        goto end;
    }
    char* localVarToReplace_dealUnitFlowId = malloc(sizeOfPathParams_dealUnitFlowId);
    sprintf(localVarToReplace_dealUnitFlowId, "{%s}", "dealUnitFlowId");

    localVarPath = strReplace(localVarPath, localVarToReplace_dealUnitFlowId, dealUnitFlowId);
    if(dealUnitFlowId == NULL) {
        goto end;
    }
    char* localVarToReplace_dealUnitFlowId = malloc(sizeOfPathParams_dealUnitFlowId);
    sprintf(localVarToReplace_dealUnitFlowId, "{%s}", "dealUnitFlowId");

    localVarPath = strReplace(localVarPath, localVarToReplace_dealUnitFlowId, dealUnitFlowId);



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
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *DealUnitFlowsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    deal_unit_flow_dto_envelope_t *elementToReturn = deal_unit_flow_dto_envelope_parseFromJSON(DealUnitFlowsAPIlocalVarJSON);
    cJSON_Delete(DealUnitFlowsAPIlocalVarJSON);
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
    free(localVarToReplace_dealUnitFlowId);
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

// Get a deal unit flow stage by ID
//
// Retrieves a single stage for a specific deal unit flow by its unique identifier.
//
deal_unit_flow_stage_dto_envelope_t*
DealUnitFlowsAPI_getDealUnitFlowStageAsync(apiClient_t *apiClient, char *tenantId, char *dealUnitFlowId, char *dealUnitFlowStageId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/DealsService/DealUnitFlows/{dealUnitFlowId}/Stages/{dealUnitFlowStageId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/DealsService/DealUnitFlows/{dealUnitFlowId}/Stages/{dealUnitFlowStageId}");


    // Path Params
    long sizeOfPathParams_dealUnitFlowId = strlen(dealUnitFlowId)+3 + strlen(dealUnitFlowStageId)+3 + strlen("{ dealUnitFlowId }");
    if(dealUnitFlowId == NULL) {
        goto end;
    }
    char* localVarToReplace_dealUnitFlowId = malloc(sizeOfPathParams_dealUnitFlowId);
    sprintf(localVarToReplace_dealUnitFlowId, "{%s}", "dealUnitFlowId");

    localVarPath = strReplace(localVarPath, localVarToReplace_dealUnitFlowId, dealUnitFlowId);
    if(dealUnitFlowId == NULL) {
        goto end;
    }
    char* localVarToReplace_dealUnitFlowId = malloc(sizeOfPathParams_dealUnitFlowId);
    sprintf(localVarToReplace_dealUnitFlowId, "{%s}", "dealUnitFlowId");

    localVarPath = strReplace(localVarPath, localVarToReplace_dealUnitFlowId, dealUnitFlowId);

    // Path Params
    long sizeOfPathParams_dealUnitFlowStageId = strlen(dealUnitFlowId)+3 + strlen(dealUnitFlowStageId)+3 + strlen("{ dealUnitFlowStageId }");
    if(dealUnitFlowStageId == NULL) {
        goto end;
    }
    char* localVarToReplace_dealUnitFlowStageId = malloc(sizeOfPathParams_dealUnitFlowStageId);
    sprintf(localVarToReplace_dealUnitFlowStageId, "{%s}", "dealUnitFlowStageId");

    localVarPath = strReplace(localVarPath, localVarToReplace_dealUnitFlowStageId, dealUnitFlowStageId);
    if(dealUnitFlowStageId == NULL) {
        goto end;
    }
    char* localVarToReplace_dealUnitFlowStageId = malloc(sizeOfPathParams_dealUnitFlowStageId);
    sprintf(localVarToReplace_dealUnitFlowStageId, "{%s}", "dealUnitFlowStageId");

    localVarPath = strReplace(localVarPath, localVarToReplace_dealUnitFlowStageId, dealUnitFlowStageId);



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
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *DealUnitFlowsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    deal_unit_flow_stage_dto_envelope_t *elementToReturn = deal_unit_flow_stage_dto_envelope_parseFromJSON(DealUnitFlowsAPIlocalVarJSON);
    cJSON_Delete(DealUnitFlowsAPIlocalVarJSON);
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
    free(localVarToReplace_dealUnitFlowId);
    free(localVarToReplace_dealUnitFlowStageId);
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

// Get stages for a deal unit flow
//
// Retrieves a list of stages for a specific deal unit flow with OData query support.
//
deal_unit_flow_stage_dto_list_envelope_t*
DealUnitFlowsAPI_getDealUnitFlowStagesAsync(apiClient_t *apiClient, char *tenantId, char *dealUnitFlowId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/DealsService/DealUnitFlows/{dealUnitFlowId}/Stages")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/DealsService/DealUnitFlows/{dealUnitFlowId}/Stages");


    // Path Params
    long sizeOfPathParams_dealUnitFlowId = strlen(dealUnitFlowId)+3 + strlen("{ dealUnitFlowId }");
    if(dealUnitFlowId == NULL) {
        goto end;
    }
    char* localVarToReplace_dealUnitFlowId = malloc(sizeOfPathParams_dealUnitFlowId);
    sprintf(localVarToReplace_dealUnitFlowId, "{%s}", "dealUnitFlowId");

    localVarPath = strReplace(localVarPath, localVarToReplace_dealUnitFlowId, dealUnitFlowId);
    if(dealUnitFlowId == NULL) {
        goto end;
    }
    char* localVarToReplace_dealUnitFlowId = malloc(sizeOfPathParams_dealUnitFlowId);
    sprintf(localVarToReplace_dealUnitFlowId, "{%s}", "dealUnitFlowId");

    localVarPath = strReplace(localVarPath, localVarToReplace_dealUnitFlowId, dealUnitFlowId);



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
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *DealUnitFlowsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    deal_unit_flow_stage_dto_list_envelope_t *elementToReturn = deal_unit_flow_stage_dto_list_envelope_parseFromJSON(DealUnitFlowsAPIlocalVarJSON);
    cJSON_Delete(DealUnitFlowsAPIlocalVarJSON);
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
    free(localVarToReplace_dealUnitFlowId);
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

// Get stages count for a deal unit flow
//
// Returns the total count of stages for a specific deal unit flow with OData filter support.
//
int32_envelope_t*
DealUnitFlowsAPI_getDealUnitFlowStagesCountAsync(apiClient_t *apiClient, char *tenantId, char *dealUnitFlowId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/DealsService/DealUnitFlows/{dealUnitFlowId}/Stages/Count")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/DealsService/DealUnitFlows/{dealUnitFlowId}/Stages/Count");


    // Path Params
    long sizeOfPathParams_dealUnitFlowId = strlen(dealUnitFlowId)+3 + strlen("{ dealUnitFlowId }");
    if(dealUnitFlowId == NULL) {
        goto end;
    }
    char* localVarToReplace_dealUnitFlowId = malloc(sizeOfPathParams_dealUnitFlowId);
    sprintf(localVarToReplace_dealUnitFlowId, "{%s}", "dealUnitFlowId");

    localVarPath = strReplace(localVarPath, localVarToReplace_dealUnitFlowId, dealUnitFlowId);
    if(dealUnitFlowId == NULL) {
        goto end;
    }
    char* localVarToReplace_dealUnitFlowId = malloc(sizeOfPathParams_dealUnitFlowId);
    sprintf(localVarToReplace_dealUnitFlowId, "{%s}", "dealUnitFlowId");

    localVarPath = strReplace(localVarPath, localVarToReplace_dealUnitFlowId, dealUnitFlowId);



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
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *DealUnitFlowsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    int32_envelope_t *elementToReturn = int32_envelope_parseFromJSON(DealUnitFlowsAPIlocalVarJSON);
    cJSON_Delete(DealUnitFlowsAPIlocalVarJSON);
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
    free(localVarToReplace_dealUnitFlowId);
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

// Get deal unit flows
//
// Retrieves a list of deal unit flows for the specified tenant with OData query support.
//
deal_unit_flow_dto_list_envelope_t*
DealUnitFlowsAPI_getDealUnitFlowsAsync(apiClient_t *apiClient, char *tenantId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/DealsService/DealUnitFlows")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/DealsService/DealUnitFlows");




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
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *DealUnitFlowsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    deal_unit_flow_dto_list_envelope_t *elementToReturn = deal_unit_flow_dto_list_envelope_parseFromJSON(DealUnitFlowsAPIlocalVarJSON);
    cJSON_Delete(DealUnitFlowsAPIlocalVarJSON);
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

// Get deal unit flows count
//
// Returns the total count of deal unit flows for the specified tenant with OData filter support.
//
int32_envelope_t*
DealUnitFlowsAPI_getDealUnitFlowsCountAsync(apiClient_t *apiClient, char *tenantId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/DealsService/DealUnitFlows/Count")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/DealsService/DealUnitFlows/Count");




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
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *DealUnitFlowsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    int32_envelope_t *elementToReturn = int32_envelope_parseFromJSON(DealUnitFlowsAPIlocalVarJSON);
    cJSON_Delete(DealUnitFlowsAPIlocalVarJSON);
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

// Update a deal unit flow
//
// Updates an existing deal unit flow by its unique identifier.
//
empty_envelope_t*
DealUnitFlowsAPI_updateDealUnitFlowAsync(apiClient_t *apiClient, char *tenantId, char *dealUnitFlowId, deal_unit_flow_update_dto_t *deal_unit_flow_update_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/DealsService/DealUnitFlows/{dealUnitFlowId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/DealsService/DealUnitFlows/{dealUnitFlowId}");


    // Path Params
    long sizeOfPathParams_dealUnitFlowId = strlen(dealUnitFlowId)+3 + strlen("{ dealUnitFlowId }");
    if(dealUnitFlowId == NULL) {
        goto end;
    }
    char* localVarToReplace_dealUnitFlowId = malloc(sizeOfPathParams_dealUnitFlowId);
    sprintf(localVarToReplace_dealUnitFlowId, "{%s}", "dealUnitFlowId");

    localVarPath = strReplace(localVarPath, localVarToReplace_dealUnitFlowId, dealUnitFlowId);
    if(dealUnitFlowId == NULL) {
        goto end;
    }
    char* localVarToReplace_dealUnitFlowId = malloc(sizeOfPathParams_dealUnitFlowId);
    sprintf(localVarToReplace_dealUnitFlowId, "{%s}", "dealUnitFlowId");

    localVarPath = strReplace(localVarPath, localVarToReplace_dealUnitFlowId, dealUnitFlowId);



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
    cJSON *localVarSingleItemJSON_deal_unit_flow_update_dto = NULL;
    if (deal_unit_flow_update_dto != NULL)
    {
        //string
        localVarSingleItemJSON_deal_unit_flow_update_dto = deal_unit_flow_update_dto_convertToJSON(deal_unit_flow_update_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_deal_unit_flow_update_dto);
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
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *DealUnitFlowsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(DealUnitFlowsAPIlocalVarJSON);
    cJSON_Delete(DealUnitFlowsAPIlocalVarJSON);
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
    free(localVarToReplace_dealUnitFlowId);
    if (localVarSingleItemJSON_deal_unit_flow_update_dto) {
        cJSON_Delete(localVarSingleItemJSON_deal_unit_flow_update_dto);
        localVarSingleItemJSON_deal_unit_flow_update_dto = NULL;
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

// Update a deal unit flow stage
//
// Updates an existing stage within a specific deal unit flow.
//
empty_envelope_t*
DealUnitFlowsAPI_updateDealUnitFlowStageAsync(apiClient_t *apiClient, char *tenantId, char *dealUnitFlowId, char *dealUnitFlowStageId, deal_unit_flow_stage_update_dto_t *deal_unit_flow_stage_update_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/DealsService/DealUnitFlows/{dealUnitFlowId}/Stages/{dealUnitFlowStageId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/DealsService/DealUnitFlows/{dealUnitFlowId}/Stages/{dealUnitFlowStageId}");


    // Path Params
    long sizeOfPathParams_dealUnitFlowId = strlen(dealUnitFlowId)+3 + strlen(dealUnitFlowStageId)+3 + strlen("{ dealUnitFlowId }");
    if(dealUnitFlowId == NULL) {
        goto end;
    }
    char* localVarToReplace_dealUnitFlowId = malloc(sizeOfPathParams_dealUnitFlowId);
    sprintf(localVarToReplace_dealUnitFlowId, "{%s}", "dealUnitFlowId");

    localVarPath = strReplace(localVarPath, localVarToReplace_dealUnitFlowId, dealUnitFlowId);
    if(dealUnitFlowId == NULL) {
        goto end;
    }
    char* localVarToReplace_dealUnitFlowId = malloc(sizeOfPathParams_dealUnitFlowId);
    sprintf(localVarToReplace_dealUnitFlowId, "{%s}", "dealUnitFlowId");

    localVarPath = strReplace(localVarPath, localVarToReplace_dealUnitFlowId, dealUnitFlowId);

    // Path Params
    long sizeOfPathParams_dealUnitFlowStageId = strlen(dealUnitFlowId)+3 + strlen(dealUnitFlowStageId)+3 + strlen("{ dealUnitFlowStageId }");
    if(dealUnitFlowStageId == NULL) {
        goto end;
    }
    char* localVarToReplace_dealUnitFlowStageId = malloc(sizeOfPathParams_dealUnitFlowStageId);
    sprintf(localVarToReplace_dealUnitFlowStageId, "{%s}", "dealUnitFlowStageId");

    localVarPath = strReplace(localVarPath, localVarToReplace_dealUnitFlowStageId, dealUnitFlowStageId);
    if(dealUnitFlowStageId == NULL) {
        goto end;
    }
    char* localVarToReplace_dealUnitFlowStageId = malloc(sizeOfPathParams_dealUnitFlowStageId);
    sprintf(localVarToReplace_dealUnitFlowStageId, "{%s}", "dealUnitFlowStageId");

    localVarPath = strReplace(localVarPath, localVarToReplace_dealUnitFlowStageId, dealUnitFlowStageId);



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
    cJSON *localVarSingleItemJSON_deal_unit_flow_stage_update_dto = NULL;
    if (deal_unit_flow_stage_update_dto != NULL)
    {
        //string
        localVarSingleItemJSON_deal_unit_flow_stage_update_dto = deal_unit_flow_stage_update_dto_convertToJSON(deal_unit_flow_stage_update_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_deal_unit_flow_stage_update_dto);
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
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *DealUnitFlowsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(DealUnitFlowsAPIlocalVarJSON);
    cJSON_Delete(DealUnitFlowsAPIlocalVarJSON);
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
    free(localVarToReplace_dealUnitFlowId);
    free(localVarToReplace_dealUnitFlowStageId);
    if (localVarSingleItemJSON_deal_unit_flow_stage_update_dto) {
        cJSON_Delete(localVarSingleItemJSON_deal_unit_flow_stage_update_dto);
        localVarSingleItemJSON_deal_unit_flow_stage_update_dto = NULL;
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

