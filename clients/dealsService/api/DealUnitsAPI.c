#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "DealUnitsAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Calculate a deal unit
//
// Triggers recalculation of totals and derived values for a specific deal unit.
//
empty_envelope_t*
DealUnitsAPI_calculateDealUnitAsync(apiClient_t *apiClient, char *tenantId, char *dealUnitId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/DealsService/DealUnits/{dealUnitId}/Calculate")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/DealsService/DealUnits/{dealUnitId}/Calculate");


    // Path Params
    long sizeOfPathParams_dealUnitId = strlen(dealUnitId)+3 + strlen("{ dealUnitId }");
    if(dealUnitId == NULL) {
        goto end;
    }
    char* localVarToReplace_dealUnitId = malloc(sizeOfPathParams_dealUnitId);
    sprintf(localVarToReplace_dealUnitId, "{%s}", "dealUnitId");

    localVarPath = strReplace(localVarPath, localVarToReplace_dealUnitId, dealUnitId);
    if(dealUnitId == NULL) {
        goto end;
    }
    char* localVarToReplace_dealUnitId = malloc(sizeOfPathParams_dealUnitId);
    sprintf(localVarToReplace_dealUnitId, "{%s}", "dealUnitId");

    localVarPath = strReplace(localVarPath, localVarToReplace_dealUnitId, dealUnitId);



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
    cJSON *DealUnitsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(DealUnitsAPIlocalVarJSON);
    cJSON_Delete(DealUnitsAPIlocalVarJSON);
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
    free(localVarToReplace_dealUnitId);
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

// Calculate a deal unit line
//
// Triggers recalculation of totals and derived values for a specific deal unit line.
//
empty_envelope_t*
DealUnitsAPI_calculateDealUnitLineAsync(apiClient_t *apiClient, char *tenantId, char *dealUnitId, char *dealUnitLineId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/DealsService/DealUnits/{dealUnitId}/Lines/{dealUnitLineId}/Calculate")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/DealsService/DealUnits/{dealUnitId}/Lines/{dealUnitLineId}/Calculate");


    // Path Params
    long sizeOfPathParams_dealUnitId = strlen(dealUnitId)+3 + strlen(dealUnitLineId)+3 + strlen("{ dealUnitId }");
    if(dealUnitId == NULL) {
        goto end;
    }
    char* localVarToReplace_dealUnitId = malloc(sizeOfPathParams_dealUnitId);
    sprintf(localVarToReplace_dealUnitId, "{%s}", "dealUnitId");

    localVarPath = strReplace(localVarPath, localVarToReplace_dealUnitId, dealUnitId);
    if(dealUnitId == NULL) {
        goto end;
    }
    char* localVarToReplace_dealUnitId = malloc(sizeOfPathParams_dealUnitId);
    sprintf(localVarToReplace_dealUnitId, "{%s}", "dealUnitId");

    localVarPath = strReplace(localVarPath, localVarToReplace_dealUnitId, dealUnitId);

    // Path Params
    long sizeOfPathParams_dealUnitLineId = strlen(dealUnitId)+3 + strlen(dealUnitLineId)+3 + strlen("{ dealUnitLineId }");
    if(dealUnitLineId == NULL) {
        goto end;
    }
    char* localVarToReplace_dealUnitLineId = malloc(sizeOfPathParams_dealUnitLineId);
    sprintf(localVarToReplace_dealUnitLineId, "{%s}", "dealUnitLineId");

    localVarPath = strReplace(localVarPath, localVarToReplace_dealUnitLineId, dealUnitLineId);
    if(dealUnitLineId == NULL) {
        goto end;
    }
    char* localVarToReplace_dealUnitLineId = malloc(sizeOfPathParams_dealUnitLineId);
    sprintf(localVarToReplace_dealUnitLineId, "{%s}", "dealUnitLineId");

    localVarPath = strReplace(localVarPath, localVarToReplace_dealUnitLineId, dealUnitLineId);



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
    cJSON *DealUnitsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(DealUnitsAPIlocalVarJSON);
    cJSON_Delete(DealUnitsAPIlocalVarJSON);
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
    free(localVarToReplace_dealUnitId);
    free(localVarToReplace_dealUnitLineId);
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

// Create a deal unit
//
// Creates a new deal unit for the specified tenant.
//
empty_envelope_t*
DealUnitsAPI_createDealUnitAsync(apiClient_t *apiClient, char *tenantId, deal_unit_create_dto_t *deal_unit_create_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/DealsService/DealUnits")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/DealsService/DealUnits");




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
    cJSON *localVarSingleItemJSON_deal_unit_create_dto = NULL;
    if (deal_unit_create_dto != NULL)
    {
        //string
        localVarSingleItemJSON_deal_unit_create_dto = deal_unit_create_dto_convertToJSON(deal_unit_create_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_deal_unit_create_dto);
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
    cJSON *DealUnitsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(DealUnitsAPIlocalVarJSON);
    cJSON_Delete(DealUnitsAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_deal_unit_create_dto) {
        cJSON_Delete(localVarSingleItemJSON_deal_unit_create_dto);
        localVarSingleItemJSON_deal_unit_create_dto = NULL;
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

// Create a deal unit line
//
// Creates a new line within a specific deal unit.
//
empty_envelope_t*
DealUnitsAPI_createGetDealUnitLinesAsync(apiClient_t *apiClient, char *tenantId, char *dealUnitId, deal_unit_line_create_dto_t *deal_unit_line_create_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/DealsService/DealUnits/{dealUnitId}/Lines")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/DealsService/DealUnits/{dealUnitId}/Lines");


    // Path Params
    long sizeOfPathParams_dealUnitId = strlen(dealUnitId)+3 + strlen("{ dealUnitId }");
    if(dealUnitId == NULL) {
        goto end;
    }
    char* localVarToReplace_dealUnitId = malloc(sizeOfPathParams_dealUnitId);
    sprintf(localVarToReplace_dealUnitId, "{%s}", "dealUnitId");

    localVarPath = strReplace(localVarPath, localVarToReplace_dealUnitId, dealUnitId);
    if(dealUnitId == NULL) {
        goto end;
    }
    char* localVarToReplace_dealUnitId = malloc(sizeOfPathParams_dealUnitId);
    sprintf(localVarToReplace_dealUnitId, "{%s}", "dealUnitId");

    localVarPath = strReplace(localVarPath, localVarToReplace_dealUnitId, dealUnitId);



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
    cJSON *localVarSingleItemJSON_deal_unit_line_create_dto = NULL;
    if (deal_unit_line_create_dto != NULL)
    {
        //string
        localVarSingleItemJSON_deal_unit_line_create_dto = deal_unit_line_create_dto_convertToJSON(deal_unit_line_create_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_deal_unit_line_create_dto);
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
    cJSON *DealUnitsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(DealUnitsAPIlocalVarJSON);
    cJSON_Delete(DealUnitsAPIlocalVarJSON);
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
    free(localVarToReplace_dealUnitId);
    if (localVarSingleItemJSON_deal_unit_line_create_dto) {
        cJSON_Delete(localVarSingleItemJSON_deal_unit_line_create_dto);
        localVarSingleItemJSON_deal_unit_line_create_dto = NULL;
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

// Delete a deal unit
//
// Deletes an existing deal unit by its unique identifier.
//
empty_envelope_t*
DealUnitsAPI_deleteDealUnitAsync(apiClient_t *apiClient, char *tenantId, char *dealUnitId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/DealsService/DealUnits/{dealUnitId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/DealsService/DealUnits/{dealUnitId}");


    // Path Params
    long sizeOfPathParams_dealUnitId = strlen(dealUnitId)+3 + strlen("{ dealUnitId }");
    if(dealUnitId == NULL) {
        goto end;
    }
    char* localVarToReplace_dealUnitId = malloc(sizeOfPathParams_dealUnitId);
    sprintf(localVarToReplace_dealUnitId, "{%s}", "dealUnitId");

    localVarPath = strReplace(localVarPath, localVarToReplace_dealUnitId, dealUnitId);
    if(dealUnitId == NULL) {
        goto end;
    }
    char* localVarToReplace_dealUnitId = malloc(sizeOfPathParams_dealUnitId);
    sprintf(localVarToReplace_dealUnitId, "{%s}", "dealUnitId");

    localVarPath = strReplace(localVarPath, localVarToReplace_dealUnitId, dealUnitId);



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
    cJSON *DealUnitsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(DealUnitsAPIlocalVarJSON);
    cJSON_Delete(DealUnitsAPIlocalVarJSON);
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
    free(localVarToReplace_dealUnitId);
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

// Delete a deal unit line
//
// Deletes an existing line from a specific deal unit.
//
empty_envelope_t*
DealUnitsAPI_deleteDealUnitPriceAsync(apiClient_t *apiClient, char *tenantId, char *dealUnitId, char *dealUnitLineId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/DealsService/DealUnits/{dealUnitId}/Lines/{dealUnitLineId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/DealsService/DealUnits/{dealUnitId}/Lines/{dealUnitLineId}");


    // Path Params
    long sizeOfPathParams_dealUnitId = strlen(dealUnitId)+3 + strlen(dealUnitLineId)+3 + strlen("{ dealUnitId }");
    if(dealUnitId == NULL) {
        goto end;
    }
    char* localVarToReplace_dealUnitId = malloc(sizeOfPathParams_dealUnitId);
    sprintf(localVarToReplace_dealUnitId, "{%s}", "dealUnitId");

    localVarPath = strReplace(localVarPath, localVarToReplace_dealUnitId, dealUnitId);
    if(dealUnitId == NULL) {
        goto end;
    }
    char* localVarToReplace_dealUnitId = malloc(sizeOfPathParams_dealUnitId);
    sprintf(localVarToReplace_dealUnitId, "{%s}", "dealUnitId");

    localVarPath = strReplace(localVarPath, localVarToReplace_dealUnitId, dealUnitId);

    // Path Params
    long sizeOfPathParams_dealUnitLineId = strlen(dealUnitId)+3 + strlen(dealUnitLineId)+3 + strlen("{ dealUnitLineId }");
    if(dealUnitLineId == NULL) {
        goto end;
    }
    char* localVarToReplace_dealUnitLineId = malloc(sizeOfPathParams_dealUnitLineId);
    sprintf(localVarToReplace_dealUnitLineId, "{%s}", "dealUnitLineId");

    localVarPath = strReplace(localVarPath, localVarToReplace_dealUnitLineId, dealUnitLineId);
    if(dealUnitLineId == NULL) {
        goto end;
    }
    char* localVarToReplace_dealUnitLineId = malloc(sizeOfPathParams_dealUnitLineId);
    sprintf(localVarToReplace_dealUnitLineId, "{%s}", "dealUnitLineId");

    localVarPath = strReplace(localVarPath, localVarToReplace_dealUnitLineId, dealUnitLineId);



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
    cJSON *DealUnitsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(DealUnitsAPIlocalVarJSON);
    cJSON_Delete(DealUnitsAPIlocalVarJSON);
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
    free(localVarToReplace_dealUnitId);
    free(localVarToReplace_dealUnitLineId);
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

// Get deal unit by ID
//
// Retrieves a single deal unit by its unique identifier.
//
deal_unit_dto_envelope_t*
DealUnitsAPI_getDealUnitAsync(apiClient_t *apiClient, char *tenantId, char *dealUnitId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/DealsService/DealUnits/{dealUnitId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/DealsService/DealUnits/{dealUnitId}");


    // Path Params
    long sizeOfPathParams_dealUnitId = strlen(dealUnitId)+3 + strlen("{ dealUnitId }");
    if(dealUnitId == NULL) {
        goto end;
    }
    char* localVarToReplace_dealUnitId = malloc(sizeOfPathParams_dealUnitId);
    sprintf(localVarToReplace_dealUnitId, "{%s}", "dealUnitId");

    localVarPath = strReplace(localVarPath, localVarToReplace_dealUnitId, dealUnitId);
    if(dealUnitId == NULL) {
        goto end;
    }
    char* localVarToReplace_dealUnitId = malloc(sizeOfPathParams_dealUnitId);
    sprintf(localVarToReplace_dealUnitId, "{%s}", "dealUnitId");

    localVarPath = strReplace(localVarPath, localVarToReplace_dealUnitId, dealUnitId);



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
    cJSON *DealUnitsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    deal_unit_dto_envelope_t *elementToReturn = deal_unit_dto_envelope_parseFromJSON(DealUnitsAPIlocalVarJSON);
    cJSON_Delete(DealUnitsAPIlocalVarJSON);
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
    free(localVarToReplace_dealUnitId);
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

// Get deal unit lines
//
// Retrieves a list of lines for a specific deal unit with OData query support.
//
deal_unit_line_dto_list_envelope_t*
DealUnitsAPI_getDealUnitLinesAsync(apiClient_t *apiClient, char *tenantId, char *dealUnitId, char *itemId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/DealsService/DealUnits/{dealUnitId}/Lines")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/DealsService/DealUnits/{dealUnitId}/Lines");


    // Path Params
    long sizeOfPathParams_dealUnitId = strlen(dealUnitId)+3 + strlen("{ dealUnitId }");
    if(dealUnitId == NULL) {
        goto end;
    }
    char* localVarToReplace_dealUnitId = malloc(sizeOfPathParams_dealUnitId);
    sprintf(localVarToReplace_dealUnitId, "{%s}", "dealUnitId");

    localVarPath = strReplace(localVarPath, localVarToReplace_dealUnitId, dealUnitId);
    if(dealUnitId == NULL) {
        goto end;
    }
    char* localVarToReplace_dealUnitId = malloc(sizeOfPathParams_dealUnitId);
    sprintf(localVarToReplace_dealUnitId, "{%s}", "dealUnitId");

    localVarPath = strReplace(localVarPath, localVarToReplace_dealUnitId, dealUnitId);



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
    char *keyQuery_itemId = NULL;
    char * valueQuery_itemId = NULL;
    keyValuePair_t *keyPairQuery_itemId = 0;
    if (itemId)
    {
        keyQuery_itemId = strdup("itemId");
        valueQuery_itemId = strdup((itemId));
        keyPairQuery_itemId = keyValuePair_create(keyQuery_itemId, valueQuery_itemId);
        list_addElement(localVarQueryParameters,keyPairQuery_itemId);
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
    cJSON *DealUnitsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    deal_unit_line_dto_list_envelope_t *elementToReturn = deal_unit_line_dto_list_envelope_parseFromJSON(DealUnitsAPIlocalVarJSON);
    cJSON_Delete(DealUnitsAPIlocalVarJSON);
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
    free(localVarToReplace_dealUnitId);
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
    if(keyQuery_itemId){
        free(keyQuery_itemId);
        keyQuery_itemId = NULL;
    }
    if(valueQuery_itemId){
        free(valueQuery_itemId);
        valueQuery_itemId = NULL;
    }
    if(keyPairQuery_itemId){
        keyValuePair_free(keyPairQuery_itemId);
        keyPairQuery_itemId = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get deal unit lines count
//
// Returns the total count of lines for a specific deal unit with OData filter support.
//
int32_envelope_t*
DealUnitsAPI_getDealUnitLinesCountAsync(apiClient_t *apiClient, char *tenantId, char *dealUnitId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/DealsService/DealUnits/{dealUnitId}/Lines/Count")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/DealsService/DealUnits/{dealUnitId}/Lines/Count");


    // Path Params
    long sizeOfPathParams_dealUnitId = strlen(dealUnitId)+3 + strlen("{ dealUnitId }");
    if(dealUnitId == NULL) {
        goto end;
    }
    char* localVarToReplace_dealUnitId = malloc(sizeOfPathParams_dealUnitId);
    sprintf(localVarToReplace_dealUnitId, "{%s}", "dealUnitId");

    localVarPath = strReplace(localVarPath, localVarToReplace_dealUnitId, dealUnitId);
    if(dealUnitId == NULL) {
        goto end;
    }
    char* localVarToReplace_dealUnitId = malloc(sizeOfPathParams_dealUnitId);
    sprintf(localVarToReplace_dealUnitId, "{%s}", "dealUnitId");

    localVarPath = strReplace(localVarPath, localVarToReplace_dealUnitId, dealUnitId);



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
    cJSON *DealUnitsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    int32_envelope_t *elementToReturn = int32_envelope_parseFromJSON(DealUnitsAPIlocalVarJSON);
    cJSON_Delete(DealUnitsAPIlocalVarJSON);
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
    free(localVarToReplace_dealUnitId);
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

// Get a deal unit line by ID
//
// Retrieves a single deal unit line by its unique identifier.
//
deal_unit_line_dto_envelope_t*
DealUnitsAPI_getDealUnitPriceAsync(apiClient_t *apiClient, char *tenantId, char *dealUnitId, char *dealUnitLineId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/DealsService/DealUnits/{dealUnitId}/Lines/{dealUnitLineId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/DealsService/DealUnits/{dealUnitId}/Lines/{dealUnitLineId}");


    // Path Params
    long sizeOfPathParams_dealUnitId = strlen(dealUnitId)+3 + strlen(dealUnitLineId)+3 + strlen("{ dealUnitId }");
    if(dealUnitId == NULL) {
        goto end;
    }
    char* localVarToReplace_dealUnitId = malloc(sizeOfPathParams_dealUnitId);
    sprintf(localVarToReplace_dealUnitId, "{%s}", "dealUnitId");

    localVarPath = strReplace(localVarPath, localVarToReplace_dealUnitId, dealUnitId);
    if(dealUnitId == NULL) {
        goto end;
    }
    char* localVarToReplace_dealUnitId = malloc(sizeOfPathParams_dealUnitId);
    sprintf(localVarToReplace_dealUnitId, "{%s}", "dealUnitId");

    localVarPath = strReplace(localVarPath, localVarToReplace_dealUnitId, dealUnitId);

    // Path Params
    long sizeOfPathParams_dealUnitLineId = strlen(dealUnitId)+3 + strlen(dealUnitLineId)+3 + strlen("{ dealUnitLineId }");
    if(dealUnitLineId == NULL) {
        goto end;
    }
    char* localVarToReplace_dealUnitLineId = malloc(sizeOfPathParams_dealUnitLineId);
    sprintf(localVarToReplace_dealUnitLineId, "{%s}", "dealUnitLineId");

    localVarPath = strReplace(localVarPath, localVarToReplace_dealUnitLineId, dealUnitLineId);
    if(dealUnitLineId == NULL) {
        goto end;
    }
    char* localVarToReplace_dealUnitLineId = malloc(sizeOfPathParams_dealUnitLineId);
    sprintf(localVarToReplace_dealUnitLineId, "{%s}", "dealUnitLineId");

    localVarPath = strReplace(localVarPath, localVarToReplace_dealUnitLineId, dealUnitLineId);



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
    cJSON *DealUnitsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    deal_unit_line_dto_envelope_t *elementToReturn = deal_unit_line_dto_envelope_parseFromJSON(DealUnitsAPIlocalVarJSON);
    cJSON_Delete(DealUnitsAPIlocalVarJSON);
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
    free(localVarToReplace_dealUnitId);
    free(localVarToReplace_dealUnitLineId);
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

// Get deal units
//
// Retrieves a list of deal units for the specified tenant with OData query support.
//
deal_unit_dto_list_envelope_t*
DealUnitsAPI_getDealUnitsAsync(apiClient_t *apiClient, char *tenantId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/DealsService/DealUnits")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/DealsService/DealUnits");




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
    cJSON *DealUnitsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    deal_unit_dto_list_envelope_t *elementToReturn = deal_unit_dto_list_envelope_parseFromJSON(DealUnitsAPIlocalVarJSON);
    cJSON_Delete(DealUnitsAPIlocalVarJSON);
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

// Get deal units count
//
// Returns the total count of deal units for the specified tenant with OData filter support.
//
int32_envelope_t*
DealUnitsAPI_getDealUnitsCountAsync(apiClient_t *apiClient, char *tenantId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/DealsService/DealUnits/Count")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/DealsService/DealUnits/Count");




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
    cJSON *DealUnitsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    int32_envelope_t *elementToReturn = int32_envelope_parseFromJSON(DealUnitsAPIlocalVarJSON);
    cJSON_Delete(DealUnitsAPIlocalVarJSON);
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

// Get extended deal unit by ID
//
// Retrieves a single deal unit with extended details by its unique identifier.
//
extended_deal_unit_dto_envelope_t*
DealUnitsAPI_getExtendedDealUnitAsync(apiClient_t *apiClient, char *tenantId, char *dealUnitId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/DealsService/DealUnits/{dealUnitId}/Extended")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/DealsService/DealUnits/{dealUnitId}/Extended");


    // Path Params
    long sizeOfPathParams_dealUnitId = strlen(dealUnitId)+3 + strlen("{ dealUnitId }");
    if(dealUnitId == NULL) {
        goto end;
    }
    char* localVarToReplace_dealUnitId = malloc(sizeOfPathParams_dealUnitId);
    sprintf(localVarToReplace_dealUnitId, "{%s}", "dealUnitId");

    localVarPath = strReplace(localVarPath, localVarToReplace_dealUnitId, dealUnitId);
    if(dealUnitId == NULL) {
        goto end;
    }
    char* localVarToReplace_dealUnitId = malloc(sizeOfPathParams_dealUnitId);
    sprintf(localVarToReplace_dealUnitId, "{%s}", "dealUnitId");

    localVarPath = strReplace(localVarPath, localVarToReplace_dealUnitId, dealUnitId);



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
    cJSON *DealUnitsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    extended_deal_unit_dto_envelope_t *elementToReturn = extended_deal_unit_dto_envelope_parseFromJSON(DealUnitsAPIlocalVarJSON);
    cJSON_Delete(DealUnitsAPIlocalVarJSON);
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
    free(localVarToReplace_dealUnitId);
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

// Get extended deal units
//
// Retrieves a list of deal units with extended details for the specified tenant with OData query support.
//
extended_deal_unit_dto_list_envelope_t*
DealUnitsAPI_getExtendedDealUnitsAsync(apiClient_t *apiClient, char *tenantId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/DealsService/DealUnits/Extended")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/DealsService/DealUnits/Extended");




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
    cJSON *DealUnitsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    extended_deal_unit_dto_list_envelope_t *elementToReturn = extended_deal_unit_dto_list_envelope_parseFromJSON(DealUnitsAPIlocalVarJSON);
    cJSON_Delete(DealUnitsAPIlocalVarJSON);
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

// Update a deal unit
//
// Updates an existing deal unit by its unique identifier.
//
empty_envelope_t*
DealUnitsAPI_updateDealUnitAsync(apiClient_t *apiClient, char *tenantId, char *dealUnitId, deal_unit_update_dto_t *deal_unit_update_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/DealsService/DealUnits/{dealUnitId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/DealsService/DealUnits/{dealUnitId}");


    // Path Params
    long sizeOfPathParams_dealUnitId = strlen(dealUnitId)+3 + strlen("{ dealUnitId }");
    if(dealUnitId == NULL) {
        goto end;
    }
    char* localVarToReplace_dealUnitId = malloc(sizeOfPathParams_dealUnitId);
    sprintf(localVarToReplace_dealUnitId, "{%s}", "dealUnitId");

    localVarPath = strReplace(localVarPath, localVarToReplace_dealUnitId, dealUnitId);
    if(dealUnitId == NULL) {
        goto end;
    }
    char* localVarToReplace_dealUnitId = malloc(sizeOfPathParams_dealUnitId);
    sprintf(localVarToReplace_dealUnitId, "{%s}", "dealUnitId");

    localVarPath = strReplace(localVarPath, localVarToReplace_dealUnitId, dealUnitId);



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
    cJSON *localVarSingleItemJSON_deal_unit_update_dto = NULL;
    if (deal_unit_update_dto != NULL)
    {
        //string
        localVarSingleItemJSON_deal_unit_update_dto = deal_unit_update_dto_convertToJSON(deal_unit_update_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_deal_unit_update_dto);
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
    cJSON *DealUnitsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(DealUnitsAPIlocalVarJSON);
    cJSON_Delete(DealUnitsAPIlocalVarJSON);
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
    free(localVarToReplace_dealUnitId);
    if (localVarSingleItemJSON_deal_unit_update_dto) {
        cJSON_Delete(localVarSingleItemJSON_deal_unit_update_dto);
        localVarSingleItemJSON_deal_unit_update_dto = NULL;
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

// Update a deal unit line
//
// Updates an existing line within a specific deal unit.
//
empty_envelope_t*
DealUnitsAPI_updateDealUnitPriceAsync(apiClient_t *apiClient, char *tenantId, char *dealUnitId, char *dealUnitLineId, deal_unit_line_update_dto_t *deal_unit_line_update_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/DealsService/DealUnits/{dealUnitId}/Lines/{dealUnitLineId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/DealsService/DealUnits/{dealUnitId}/Lines/{dealUnitLineId}");


    // Path Params
    long sizeOfPathParams_dealUnitId = strlen(dealUnitId)+3 + strlen(dealUnitLineId)+3 + strlen("{ dealUnitId }");
    if(dealUnitId == NULL) {
        goto end;
    }
    char* localVarToReplace_dealUnitId = malloc(sizeOfPathParams_dealUnitId);
    sprintf(localVarToReplace_dealUnitId, "{%s}", "dealUnitId");

    localVarPath = strReplace(localVarPath, localVarToReplace_dealUnitId, dealUnitId);
    if(dealUnitId == NULL) {
        goto end;
    }
    char* localVarToReplace_dealUnitId = malloc(sizeOfPathParams_dealUnitId);
    sprintf(localVarToReplace_dealUnitId, "{%s}", "dealUnitId");

    localVarPath = strReplace(localVarPath, localVarToReplace_dealUnitId, dealUnitId);

    // Path Params
    long sizeOfPathParams_dealUnitLineId = strlen(dealUnitId)+3 + strlen(dealUnitLineId)+3 + strlen("{ dealUnitLineId }");
    if(dealUnitLineId == NULL) {
        goto end;
    }
    char* localVarToReplace_dealUnitLineId = malloc(sizeOfPathParams_dealUnitLineId);
    sprintf(localVarToReplace_dealUnitLineId, "{%s}", "dealUnitLineId");

    localVarPath = strReplace(localVarPath, localVarToReplace_dealUnitLineId, dealUnitLineId);
    if(dealUnitLineId == NULL) {
        goto end;
    }
    char* localVarToReplace_dealUnitLineId = malloc(sizeOfPathParams_dealUnitLineId);
    sprintf(localVarToReplace_dealUnitLineId, "{%s}", "dealUnitLineId");

    localVarPath = strReplace(localVarPath, localVarToReplace_dealUnitLineId, dealUnitLineId);



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
    cJSON *localVarSingleItemJSON_deal_unit_line_update_dto = NULL;
    if (deal_unit_line_update_dto != NULL)
    {
        //string
        localVarSingleItemJSON_deal_unit_line_update_dto = deal_unit_line_update_dto_convertToJSON(deal_unit_line_update_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_deal_unit_line_update_dto);
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
    cJSON *DealUnitsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(DealUnitsAPIlocalVarJSON);
    cJSON_Delete(DealUnitsAPIlocalVarJSON);
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
    free(localVarToReplace_dealUnitId);
    free(localVarToReplace_dealUnitLineId);
    if (localVarSingleItemJSON_deal_unit_line_update_dto) {
        cJSON_Delete(localVarSingleItemJSON_deal_unit_line_update_dto);
        localVarSingleItemJSON_deal_unit_line_update_dto = NULL;
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

