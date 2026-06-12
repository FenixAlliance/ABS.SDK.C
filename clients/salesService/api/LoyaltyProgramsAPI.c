#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "LoyaltyProgramsAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Get loyalty programs count
//
// Returns the total count of loyalty programs for the specified tenant with OData filter support.
//
int32_envelope_t*
LoyaltyProgramsAPI_countLoyaltyProgramsAsync(apiClient_t *apiClient, char *tenantId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SalesService/LoyaltyPrograms/Count")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SalesService/LoyaltyPrograms/Count");




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
    cJSON *LoyaltyProgramsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    int32_envelope_t *elementToReturn = int32_envelope_parseFromJSON(LoyaltyProgramsAPIlocalVarJSON);
    cJSON_Delete(LoyaltyProgramsAPIlocalVarJSON);
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

// Create a loyalty program
//
// Creates a new loyalty program for the specified tenant.
//
empty_envelope_t*
LoyaltyProgramsAPI_createLoyaltyProgramAsync(apiClient_t *apiClient, char *tenantId, loyalty_program_create_dto_t *loyalty_program_create_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SalesService/LoyaltyPrograms")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SalesService/LoyaltyPrograms");




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
    cJSON *localVarSingleItemJSON_loyalty_program_create_dto = NULL;
    if (loyalty_program_create_dto != NULL)
    {
        //string
        localVarSingleItemJSON_loyalty_program_create_dto = loyalty_program_create_dto_convertToJSON(loyalty_program_create_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_loyalty_program_create_dto);
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
    cJSON *LoyaltyProgramsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(LoyaltyProgramsAPIlocalVarJSON);
    cJSON_Delete(LoyaltyProgramsAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_loyalty_program_create_dto) {
        cJSON_Delete(localVarSingleItemJSON_loyalty_program_create_dto);
        localVarSingleItemJSON_loyalty_program_create_dto = NULL;
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

// Delete a loyalty program
//
// Deletes an existing loyalty program by its unique identifier.
//
empty_envelope_t*
LoyaltyProgramsAPI_deleteLoyaltyProgramAsync(apiClient_t *apiClient, char *tenantId, char *loyaltyProgramId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SalesService/LoyaltyPrograms/{loyaltyProgramId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SalesService/LoyaltyPrograms/{loyaltyProgramId}");


    // Path Params
    long sizeOfPathParams_loyaltyProgramId = strlen(loyaltyProgramId)+3 + strlen("{ loyaltyProgramId }");
    if(loyaltyProgramId == NULL) {
        goto end;
    }
    char* localVarToReplace_loyaltyProgramId = malloc(sizeOfPathParams_loyaltyProgramId);
    sprintf(localVarToReplace_loyaltyProgramId, "{%s}", "loyaltyProgramId");

    localVarPath = strReplace(localVarPath, localVarToReplace_loyaltyProgramId, loyaltyProgramId);
    if(loyaltyProgramId == NULL) {
        goto end;
    }
    char* localVarToReplace_loyaltyProgramId = malloc(sizeOfPathParams_loyaltyProgramId);
    sprintf(localVarToReplace_loyaltyProgramId, "{%s}", "loyaltyProgramId");

    localVarPath = strReplace(localVarPath, localVarToReplace_loyaltyProgramId, loyaltyProgramId);



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
    cJSON *LoyaltyProgramsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(LoyaltyProgramsAPIlocalVarJSON);
    cJSON_Delete(LoyaltyProgramsAPIlocalVarJSON);
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
    free(localVarToReplace_loyaltyProgramId);
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

// Get loyalty program by ID
//
// Retrieves a single loyalty program by its unique identifier.
//
loyalty_program_dto_envelope_t*
LoyaltyProgramsAPI_getLoyaltyProgramAsync(apiClient_t *apiClient, char *tenantId, char *loyaltyProgramId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SalesService/LoyaltyPrograms/{loyaltyProgramId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SalesService/LoyaltyPrograms/{loyaltyProgramId}");


    // Path Params
    long sizeOfPathParams_loyaltyProgramId = strlen(loyaltyProgramId)+3 + strlen("{ loyaltyProgramId }");
    if(loyaltyProgramId == NULL) {
        goto end;
    }
    char* localVarToReplace_loyaltyProgramId = malloc(sizeOfPathParams_loyaltyProgramId);
    sprintf(localVarToReplace_loyaltyProgramId, "{%s}", "loyaltyProgramId");

    localVarPath = strReplace(localVarPath, localVarToReplace_loyaltyProgramId, loyaltyProgramId);
    if(loyaltyProgramId == NULL) {
        goto end;
    }
    char* localVarToReplace_loyaltyProgramId = malloc(sizeOfPathParams_loyaltyProgramId);
    sprintf(localVarToReplace_loyaltyProgramId, "{%s}", "loyaltyProgramId");

    localVarPath = strReplace(localVarPath, localVarToReplace_loyaltyProgramId, loyaltyProgramId);



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
    cJSON *LoyaltyProgramsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    loyalty_program_dto_envelope_t *elementToReturn = loyalty_program_dto_envelope_parseFromJSON(LoyaltyProgramsAPIlocalVarJSON);
    cJSON_Delete(LoyaltyProgramsAPIlocalVarJSON);
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
    free(localVarToReplace_loyaltyProgramId);
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

// Get loyalty programs
//
// Retrieves a list of loyalty programs for the specified tenant with OData query support.
//
loyalty_program_dto_list_envelope_t*
LoyaltyProgramsAPI_getLoyaltyProgramsAsync(apiClient_t *apiClient, char *tenantId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SalesService/LoyaltyPrograms")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SalesService/LoyaltyPrograms");




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
    cJSON *LoyaltyProgramsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    loyalty_program_dto_list_envelope_t *elementToReturn = loyalty_program_dto_list_envelope_parseFromJSON(LoyaltyProgramsAPIlocalVarJSON);
    cJSON_Delete(LoyaltyProgramsAPIlocalVarJSON);
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

// Patch a loyalty program
//
// Partially updates an existing loyalty program using a JSON Patch document.
//
empty_envelope_t*
LoyaltyProgramsAPI_patchLoyaltyProgramAsync(apiClient_t *apiClient, char *tenantId, char *loyaltyProgramId, list_t *operation)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SalesService/LoyaltyPrograms/{loyaltyProgramId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SalesService/LoyaltyPrograms/{loyaltyProgramId}");


    // Path Params
    long sizeOfPathParams_loyaltyProgramId = strlen(loyaltyProgramId)+3 + strlen("{ loyaltyProgramId }");
    if(loyaltyProgramId == NULL) {
        goto end;
    }
    char* localVarToReplace_loyaltyProgramId = malloc(sizeOfPathParams_loyaltyProgramId);
    sprintf(localVarToReplace_loyaltyProgramId, "{%s}", "loyaltyProgramId");

    localVarPath = strReplace(localVarPath, localVarToReplace_loyaltyProgramId, loyaltyProgramId);
    if(loyaltyProgramId == NULL) {
        goto end;
    }
    char* localVarToReplace_loyaltyProgramId = malloc(sizeOfPathParams_loyaltyProgramId);
    sprintf(localVarToReplace_loyaltyProgramId, "{%s}", "loyaltyProgramId");

    localVarPath = strReplace(localVarPath, localVarToReplace_loyaltyProgramId, loyaltyProgramId);



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
    //notstring
    cJSON *localVar_operation = NULL;
    cJSON *localVarItemJSON_operation = NULL;
    cJSON *localVarSingleItemJSON_operation = NULL;
    if (operation != NULL)
    {
        localVarItemJSON_operation = cJSON_CreateObject();
        localVarSingleItemJSON_operation = cJSON_AddArrayToObject(localVarItemJSON_operation, "operation");
        if (localVarSingleItemJSON_operation == NULL)
        {
            // nonprimitive container

            goto end;
        }
    }

    listEntry_t *operationBodyListEntry;
    list_ForEach(operationBodyListEntry, operation)
    {
        localVar_operation = operation_convertToJSON(operationBodyListEntry->data);
        if(localVar_operation == NULL)
        {
            goto end;
        }
        cJSON_AddItemToArray(localVarSingleItemJSON_operation, localVar_operation);
        localVarBodyParameters = cJSON_Print(localVarItemJSON_operation);
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
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *LoyaltyProgramsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(LoyaltyProgramsAPIlocalVarJSON);
    cJSON_Delete(LoyaltyProgramsAPIlocalVarJSON);
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
    free(localVarToReplace_loyaltyProgramId);
    if (localVarItemJSON_operation) {
        cJSON_Delete(localVarItemJSON_operation);
        localVarItemJSON_operation = NULL;
    }
    if (localVarSingleItemJSON_operation) {
        cJSON_Delete(localVarSingleItemJSON_operation);
        localVarSingleItemJSON_operation = NULL;
    }
    if (localVar_operation) {
        cJSON_Delete(localVar_operation);
        localVar_operation = NULL;
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

// Update a loyalty program
//
// Updates an existing loyalty program by its unique identifier.
//
empty_envelope_t*
LoyaltyProgramsAPI_updateLoyaltyProgramAsync(apiClient_t *apiClient, char *tenantId, char *loyaltyProgramId, loyalty_program_update_dto_t *loyalty_program_update_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SalesService/LoyaltyPrograms/{loyaltyProgramId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SalesService/LoyaltyPrograms/{loyaltyProgramId}");


    // Path Params
    long sizeOfPathParams_loyaltyProgramId = strlen(loyaltyProgramId)+3 + strlen("{ loyaltyProgramId }");
    if(loyaltyProgramId == NULL) {
        goto end;
    }
    char* localVarToReplace_loyaltyProgramId = malloc(sizeOfPathParams_loyaltyProgramId);
    sprintf(localVarToReplace_loyaltyProgramId, "{%s}", "loyaltyProgramId");

    localVarPath = strReplace(localVarPath, localVarToReplace_loyaltyProgramId, loyaltyProgramId);
    if(loyaltyProgramId == NULL) {
        goto end;
    }
    char* localVarToReplace_loyaltyProgramId = malloc(sizeOfPathParams_loyaltyProgramId);
    sprintf(localVarToReplace_loyaltyProgramId, "{%s}", "loyaltyProgramId");

    localVarPath = strReplace(localVarPath, localVarToReplace_loyaltyProgramId, loyaltyProgramId);



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
    cJSON *localVarSingleItemJSON_loyalty_program_update_dto = NULL;
    if (loyalty_program_update_dto != NULL)
    {
        //string
        localVarSingleItemJSON_loyalty_program_update_dto = loyalty_program_update_dto_convertToJSON(loyalty_program_update_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_loyalty_program_update_dto);
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
    cJSON *LoyaltyProgramsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(LoyaltyProgramsAPIlocalVarJSON);
    cJSON_Delete(LoyaltyProgramsAPIlocalVarJSON);
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
    free(localVarToReplace_loyaltyProgramId);
    if (localVarSingleItemJSON_loyalty_program_update_dto) {
        cJSON_Delete(localVarSingleItemJSON_loyalty_program_update_dto);
        localVarSingleItemJSON_loyalty_program_update_dto = NULL;
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

