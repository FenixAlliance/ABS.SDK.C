#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "QuotesAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Calculate a quote.
//
// Performs calculation logic for the specified quote.
//
empty_envelope_t*
QuotesAPI_calculateQuote(apiClient_t *apiClient, char *tenantId, char *quoteId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/QuotesService/Quotes/{quoteId}/Calculate")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/QuotesService/Quotes/{quoteId}/Calculate");


    // Path Params
    long sizeOfPathParams_quoteId = strlen(quoteId)+3 + strlen("{ quoteId }");
    if(quoteId == NULL) {
        goto end;
    }
    char* localVarToReplace_quoteId = malloc(sizeOfPathParams_quoteId);
    sprintf(localVarToReplace_quoteId, "{%s}", "quoteId");

    localVarPath = strReplace(localVarPath, localVarToReplace_quoteId, quoteId);
    if(quoteId == NULL) {
        goto end;
    }
    char* localVarToReplace_quoteId = malloc(sizeOfPathParams_quoteId);
    sprintf(localVarToReplace_quoteId, "{%s}", "quoteId");

    localVarPath = strReplace(localVarPath, localVarToReplace_quoteId, quoteId);



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
    cJSON *QuotesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(QuotesAPIlocalVarJSON);
    cJSON_Delete(QuotesAPIlocalVarJSON);
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
    free(localVarToReplace_quoteId);
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

// Calculate a quote line.
//
// Performs calculation logic for the specified quote line.
//
empty_envelope_t*
QuotesAPI_calculateQuoteLine(apiClient_t *apiClient, char *tenantId, char *quoteId, char *quoteLineId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/QuotesService/Quotes/{quoteId}/Lines/{quoteLineId}/Calculate")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/QuotesService/Quotes/{quoteId}/Lines/{quoteLineId}/Calculate");


    // Path Params
    long sizeOfPathParams_quoteId = strlen(quoteId)+3 + strlen(quoteLineId)+3 + strlen("{ quoteId }");
    if(quoteId == NULL) {
        goto end;
    }
    char* localVarToReplace_quoteId = malloc(sizeOfPathParams_quoteId);
    sprintf(localVarToReplace_quoteId, "{%s}", "quoteId");

    localVarPath = strReplace(localVarPath, localVarToReplace_quoteId, quoteId);
    if(quoteId == NULL) {
        goto end;
    }
    char* localVarToReplace_quoteId = malloc(sizeOfPathParams_quoteId);
    sprintf(localVarToReplace_quoteId, "{%s}", "quoteId");

    localVarPath = strReplace(localVarPath, localVarToReplace_quoteId, quoteId);

    // Path Params
    long sizeOfPathParams_quoteLineId = strlen(quoteId)+3 + strlen(quoteLineId)+3 + strlen("{ quoteLineId }");
    if(quoteLineId == NULL) {
        goto end;
    }
    char* localVarToReplace_quoteLineId = malloc(sizeOfPathParams_quoteLineId);
    sprintf(localVarToReplace_quoteLineId, "{%s}", "quoteLineId");

    localVarPath = strReplace(localVarPath, localVarToReplace_quoteLineId, quoteLineId);
    if(quoteLineId == NULL) {
        goto end;
    }
    char* localVarToReplace_quoteLineId = malloc(sizeOfPathParams_quoteLineId);
    sprintf(localVarToReplace_quoteLineId, "{%s}", "quoteLineId");

    localVarPath = strReplace(localVarPath, localVarToReplace_quoteLineId, quoteLineId);



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
    cJSON *QuotesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(QuotesAPIlocalVarJSON);
    cJSON_Delete(QuotesAPIlocalVarJSON);
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
    free(localVarToReplace_quoteId);
    free(localVarToReplace_quoteLineId);
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

// Close a quote.
//
// Closes the specified quote for the tenant.
//
empty_envelope_t*
QuotesAPI_closeQuote(apiClient_t *apiClient, char *tenantId, char *quoteId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/QuotesService/Quotes/{quoteId}/Close")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/QuotesService/Quotes/{quoteId}/Close");


    // Path Params
    long sizeOfPathParams_quoteId = strlen(quoteId)+3 + strlen("{ quoteId }");
    if(quoteId == NULL) {
        goto end;
    }
    char* localVarToReplace_quoteId = malloc(sizeOfPathParams_quoteId);
    sprintf(localVarToReplace_quoteId, "{%s}", "quoteId");

    localVarPath = strReplace(localVarPath, localVarToReplace_quoteId, quoteId);
    if(quoteId == NULL) {
        goto end;
    }
    char* localVarToReplace_quoteId = malloc(sizeOfPathParams_quoteId);
    sprintf(localVarToReplace_quoteId, "{%s}", "quoteId");

    localVarPath = strReplace(localVarPath, localVarToReplace_quoteId, quoteId);



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
    cJSON *QuotesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(QuotesAPIlocalVarJSON);
    cJSON_Delete(QuotesAPIlocalVarJSON);
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
    free(localVarToReplace_quoteId);
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

// Create an order from a quote.
//
// Creates an order based on the specified quote for the tenant.
//
empty_envelope_t*
QuotesAPI_createOrderFromQuote(apiClient_t *apiClient, char *tenantId, char *quoteId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/QuotesService/Quotes/{quoteId}/Orders")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/QuotesService/Quotes/{quoteId}/Orders");


    // Path Params
    long sizeOfPathParams_quoteId = strlen(quoteId)+3 + strlen("{ quoteId }");
    if(quoteId == NULL) {
        goto end;
    }
    char* localVarToReplace_quoteId = malloc(sizeOfPathParams_quoteId);
    sprintf(localVarToReplace_quoteId, "{%s}", "quoteId");

    localVarPath = strReplace(localVarPath, localVarToReplace_quoteId, quoteId);
    if(quoteId == NULL) {
        goto end;
    }
    char* localVarToReplace_quoteId = malloc(sizeOfPathParams_quoteId);
    sprintf(localVarToReplace_quoteId, "{%s}", "quoteId");

    localVarPath = strReplace(localVarPath, localVarToReplace_quoteId, quoteId);



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
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *QuotesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(QuotesAPIlocalVarJSON);
    cJSON_Delete(QuotesAPIlocalVarJSON);
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
    free(localVarToReplace_quoteId);
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

// Create a new quote.
//
// Creates a new quote for the specified tenant.
//
empty_envelope_t*
QuotesAPI_createQuote(apiClient_t *apiClient, char *tenantId, quote_create_dto_t *quote_create_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/QuotesService/Quotes")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/QuotesService/Quotes");




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
    cJSON *localVarSingleItemJSON_quote_create_dto = NULL;
    if (quote_create_dto != NULL)
    {
        //string
        localVarSingleItemJSON_quote_create_dto = quote_create_dto_convertToJSON(quote_create_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_quote_create_dto);
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
    cJSON *QuotesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(QuotesAPIlocalVarJSON);
    cJSON_Delete(QuotesAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_quote_create_dto) {
        cJSON_Delete(localVarSingleItemJSON_quote_create_dto);
        localVarSingleItemJSON_quote_create_dto = NULL;
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

// Create a new quote line.
//
// Creates a new quote line for the specified quote and tenant.
//
empty_envelope_t*
QuotesAPI_createQuoteLine(apiClient_t *apiClient, char *tenantId, char *quoteId, quote_line_create_dto_t *quote_line_create_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/QuotesService/Quotes/{quoteId}/Lines")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/QuotesService/Quotes/{quoteId}/Lines");


    // Path Params
    long sizeOfPathParams_quoteId = strlen(quoteId)+3 + strlen("{ quoteId }");
    if(quoteId == NULL) {
        goto end;
    }
    char* localVarToReplace_quoteId = malloc(sizeOfPathParams_quoteId);
    sprintf(localVarToReplace_quoteId, "{%s}", "quoteId");

    localVarPath = strReplace(localVarPath, localVarToReplace_quoteId, quoteId);
    if(quoteId == NULL) {
        goto end;
    }
    char* localVarToReplace_quoteId = malloc(sizeOfPathParams_quoteId);
    sprintf(localVarToReplace_quoteId, "{%s}", "quoteId");

    localVarPath = strReplace(localVarPath, localVarToReplace_quoteId, quoteId);



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
    cJSON *localVarSingleItemJSON_quote_line_create_dto = NULL;
    if (quote_line_create_dto != NULL)
    {
        //string
        localVarSingleItemJSON_quote_line_create_dto = quote_line_create_dto_convertToJSON(quote_line_create_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_quote_line_create_dto);
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
    cJSON *QuotesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(QuotesAPIlocalVarJSON);
    cJSON_Delete(QuotesAPIlocalVarJSON);
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
    free(localVarToReplace_quoteId);
    if (localVarSingleItemJSON_quote_line_create_dto) {
        cJSON_Delete(localVarSingleItemJSON_quote_line_create_dto);
        localVarSingleItemJSON_quote_line_create_dto = NULL;
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

// Delete a quote.
//
// Deletes the specified quote for the tenant.
//
empty_envelope_t*
QuotesAPI_deleteQuote(apiClient_t *apiClient, char *quoteId, char *tenantId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/QuotesService/Quotes/{quoteId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/QuotesService/Quotes/{quoteId}");


    // Path Params
    long sizeOfPathParams_quoteId = strlen(quoteId)+3 + strlen("{ quoteId }");
    if(quoteId == NULL) {
        goto end;
    }
    char* localVarToReplace_quoteId = malloc(sizeOfPathParams_quoteId);
    sprintf(localVarToReplace_quoteId, "{%s}", "quoteId");

    localVarPath = strReplace(localVarPath, localVarToReplace_quoteId, quoteId);
    if(quoteId == NULL) {
        goto end;
    }
    char* localVarToReplace_quoteId = malloc(sizeOfPathParams_quoteId);
    sprintf(localVarToReplace_quoteId, "{%s}", "quoteId");

    localVarPath = strReplace(localVarPath, localVarToReplace_quoteId, quoteId);



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
    cJSON *QuotesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(QuotesAPIlocalVarJSON);
    cJSON_Delete(QuotesAPIlocalVarJSON);
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
    free(localVarToReplace_quoteId);
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

// Delete a quote line.
//
// Deletes the specified quote line for the quote and tenant.
//
empty_envelope_t*
QuotesAPI_deleteQuoteLine(apiClient_t *apiClient, char *tenantId, char *quoteId, char *quoteLineId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/QuotesService/Quotes/{quoteId}/Lines/{quoteLineId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/QuotesService/Quotes/{quoteId}/Lines/{quoteLineId}");


    // Path Params
    long sizeOfPathParams_quoteId = strlen(quoteId)+3 + strlen(quoteLineId)+3 + strlen("{ quoteId }");
    if(quoteId == NULL) {
        goto end;
    }
    char* localVarToReplace_quoteId = malloc(sizeOfPathParams_quoteId);
    sprintf(localVarToReplace_quoteId, "{%s}", "quoteId");

    localVarPath = strReplace(localVarPath, localVarToReplace_quoteId, quoteId);
    if(quoteId == NULL) {
        goto end;
    }
    char* localVarToReplace_quoteId = malloc(sizeOfPathParams_quoteId);
    sprintf(localVarToReplace_quoteId, "{%s}", "quoteId");

    localVarPath = strReplace(localVarPath, localVarToReplace_quoteId, quoteId);

    // Path Params
    long sizeOfPathParams_quoteLineId = strlen(quoteId)+3 + strlen(quoteLineId)+3 + strlen("{ quoteLineId }");
    if(quoteLineId == NULL) {
        goto end;
    }
    char* localVarToReplace_quoteLineId = malloc(sizeOfPathParams_quoteLineId);
    sprintf(localVarToReplace_quoteLineId, "{%s}", "quoteLineId");

    localVarPath = strReplace(localVarPath, localVarToReplace_quoteLineId, quoteLineId);
    if(quoteLineId == NULL) {
        goto end;
    }
    char* localVarToReplace_quoteLineId = malloc(sizeOfPathParams_quoteLineId);
    sprintf(localVarToReplace_quoteLineId, "{%s}", "quoteLineId");

    localVarPath = strReplace(localVarPath, localVarToReplace_quoteLineId, quoteLineId);



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
    cJSON *QuotesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(QuotesAPIlocalVarJSON);
    cJSON_Delete(QuotesAPIlocalVarJSON);
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
    free(localVarToReplace_quoteId);
    free(localVarToReplace_quoteLineId);
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

// Get a list of extended quotes.
//
// Retrieves a list of extended quotes for the specified tenant, supporting OData query options.
//
extended_quote_dto_list_envelope_t*
QuotesAPI_getExtendedQuotes(apiClient_t *apiClient, char *tenantId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/QuotesService/Quotes/Extended")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/QuotesService/Quotes/Extended");




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
    cJSON *QuotesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    extended_quote_dto_list_envelope_t *elementToReturn = extended_quote_dto_list_envelope_parseFromJSON(QuotesAPIlocalVarJSON);
    cJSON_Delete(QuotesAPIlocalVarJSON);
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

// Get a quote by ID.
//
// Retrieves a single quote by its unique identifier for the specified tenant.
//
quote_dto_envelope_t*
QuotesAPI_getQuote(apiClient_t *apiClient, char *tenantId, char *quoteId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/QuotesService/Quotes/{quoteId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/QuotesService/Quotes/{quoteId}");


    // Path Params
    long sizeOfPathParams_quoteId = strlen(quoteId)+3 + strlen("{ quoteId }");
    if(quoteId == NULL) {
        goto end;
    }
    char* localVarToReplace_quoteId = malloc(sizeOfPathParams_quoteId);
    sprintf(localVarToReplace_quoteId, "{%s}", "quoteId");

    localVarPath = strReplace(localVarPath, localVarToReplace_quoteId, quoteId);
    if(quoteId == NULL) {
        goto end;
    }
    char* localVarToReplace_quoteId = malloc(sizeOfPathParams_quoteId);
    sprintf(localVarToReplace_quoteId, "{%s}", "quoteId");

    localVarPath = strReplace(localVarPath, localVarToReplace_quoteId, quoteId);



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
    cJSON *QuotesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    quote_dto_envelope_t *elementToReturn = quote_dto_envelope_parseFromJSON(QuotesAPIlocalVarJSON);
    cJSON_Delete(QuotesAPIlocalVarJSON);
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
    free(localVarToReplace_quoteId);
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

// Get a quote line by ID.
//
// Retrieves a single quote line by its unique identifier for the specified quote and tenant.
//
quote_line_dto_envelope_t*
QuotesAPI_getQuoteLine(apiClient_t *apiClient, char *tenantId, char *quoteId, char *quoteLineId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/QuotesService/Quotes/{quoteId}/Lines/{quoteLineId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/QuotesService/Quotes/{quoteId}/Lines/{quoteLineId}");


    // Path Params
    long sizeOfPathParams_quoteId = strlen(quoteId)+3 + strlen(quoteLineId)+3 + strlen("{ quoteId }");
    if(quoteId == NULL) {
        goto end;
    }
    char* localVarToReplace_quoteId = malloc(sizeOfPathParams_quoteId);
    sprintf(localVarToReplace_quoteId, "{%s}", "quoteId");

    localVarPath = strReplace(localVarPath, localVarToReplace_quoteId, quoteId);
    if(quoteId == NULL) {
        goto end;
    }
    char* localVarToReplace_quoteId = malloc(sizeOfPathParams_quoteId);
    sprintf(localVarToReplace_quoteId, "{%s}", "quoteId");

    localVarPath = strReplace(localVarPath, localVarToReplace_quoteId, quoteId);

    // Path Params
    long sizeOfPathParams_quoteLineId = strlen(quoteId)+3 + strlen(quoteLineId)+3 + strlen("{ quoteLineId }");
    if(quoteLineId == NULL) {
        goto end;
    }
    char* localVarToReplace_quoteLineId = malloc(sizeOfPathParams_quoteLineId);
    sprintf(localVarToReplace_quoteLineId, "{%s}", "quoteLineId");

    localVarPath = strReplace(localVarPath, localVarToReplace_quoteLineId, quoteLineId);
    if(quoteLineId == NULL) {
        goto end;
    }
    char* localVarToReplace_quoteLineId = malloc(sizeOfPathParams_quoteLineId);
    sprintf(localVarToReplace_quoteLineId, "{%s}", "quoteLineId");

    localVarPath = strReplace(localVarPath, localVarToReplace_quoteLineId, quoteLineId);



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
    cJSON *QuotesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    quote_line_dto_envelope_t *elementToReturn = quote_line_dto_envelope_parseFromJSON(QuotesAPIlocalVarJSON);
    cJSON_Delete(QuotesAPIlocalVarJSON);
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
    free(localVarToReplace_quoteId);
    free(localVarToReplace_quoteLineId);
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

// Get quote lines for a quote.
//
// Retrieves all quote lines for the specified quote and tenant.
//
quote_line_dto_list_envelope_t*
QuotesAPI_getQuoteLines(apiClient_t *apiClient, char *tenantId, char *quoteId, char *itemId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/QuotesService/Quotes/{quoteId}/Lines")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/QuotesService/Quotes/{quoteId}/Lines");


    // Path Params
    long sizeOfPathParams_quoteId = strlen(quoteId)+3 + strlen("{ quoteId }");
    if(quoteId == NULL) {
        goto end;
    }
    char* localVarToReplace_quoteId = malloc(sizeOfPathParams_quoteId);
    sprintf(localVarToReplace_quoteId, "{%s}", "quoteId");

    localVarPath = strReplace(localVarPath, localVarToReplace_quoteId, quoteId);
    if(quoteId == NULL) {
        goto end;
    }
    char* localVarToReplace_quoteId = malloc(sizeOfPathParams_quoteId);
    sprintf(localVarToReplace_quoteId, "{%s}", "quoteId");

    localVarPath = strReplace(localVarPath, localVarToReplace_quoteId, quoteId);



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
    cJSON *QuotesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    quote_line_dto_list_envelope_t *elementToReturn = quote_line_dto_list_envelope_parseFromJSON(QuotesAPIlocalVarJSON);
    cJSON_Delete(QuotesAPIlocalVarJSON);
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
    free(localVarToReplace_quoteId);
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

// Get the count of quote lines.
//
// Retrieves the total count of quote lines for the specified quote and tenant.
//
int32_envelope_t*
QuotesAPI_getQuoteLinesCount(apiClient_t *apiClient, char *tenantId, char *quoteId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/QuotesService/Quotes/{quoteId}/Lines/Count")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/QuotesService/Quotes/{quoteId}/Lines/Count");


    // Path Params
    long sizeOfPathParams_quoteId = strlen(quoteId)+3 + strlen("{ quoteId }");
    if(quoteId == NULL) {
        goto end;
    }
    char* localVarToReplace_quoteId = malloc(sizeOfPathParams_quoteId);
    sprintf(localVarToReplace_quoteId, "{%s}", "quoteId");

    localVarPath = strReplace(localVarPath, localVarToReplace_quoteId, quoteId);
    if(quoteId == NULL) {
        goto end;
    }
    char* localVarToReplace_quoteId = malloc(sizeOfPathParams_quoteId);
    sprintf(localVarToReplace_quoteId, "{%s}", "quoteId");

    localVarPath = strReplace(localVarPath, localVarToReplace_quoteId, quoteId);



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
    cJSON *QuotesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    int32_envelope_t *elementToReturn = int32_envelope_parseFromJSON(QuotesAPIlocalVarJSON);
    cJSON_Delete(QuotesAPIlocalVarJSON);
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
    free(localVarToReplace_quoteId);
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

// Get a list of quotes.
//
// Retrieves a list of quotes for the specified tenant, supporting OData query options.
//
quote_dto_list_envelope_t*
QuotesAPI_getQuotes(apiClient_t *apiClient, char *tenantId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/QuotesService/Quotes")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/QuotesService/Quotes");




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
    cJSON *QuotesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    quote_dto_list_envelope_t *elementToReturn = quote_dto_list_envelope_parseFromJSON(QuotesAPIlocalVarJSON);
    cJSON_Delete(QuotesAPIlocalVarJSON);
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

// Get the count of quotes.
//
// Retrieves the total count of quotes for the specified tenant, supporting OData query options.
//
int32_envelope_t*
QuotesAPI_getQuotesCount(apiClient_t *apiClient, char *tenantId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/QuotesService/Quotes/Count")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/QuotesService/Quotes/Count");




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
    cJSON *QuotesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    int32_envelope_t *elementToReturn = int32_envelope_parseFromJSON(QuotesAPIlocalVarJSON);
    cJSON_Delete(QuotesAPIlocalVarJSON);
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

// Preview the rendered email for an invoice.
//
// This action is only available for users with the 'send_email' permission.
//
void
QuotesAPI_previewQuoteEmailTemplate(apiClient_t *apiClient, char *quoteId, char *tenantId, email_dispatch_request_t *email_dispatch_request)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = NULL;
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/QuotesService/Quotes/{quoteId}/Emails/Preview")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/QuotesService/Quotes/{quoteId}/Emails/Preview");


    // Path Params
    long sizeOfPathParams_quoteId = strlen(quoteId)+3 + strlen("{ quoteId }");
    if(quoteId == NULL) {
        goto end;
    }
    char* localVarToReplace_quoteId = malloc(sizeOfPathParams_quoteId);
    sprintf(localVarToReplace_quoteId, "{%s}", "quoteId");

    localVarPath = strReplace(localVarPath, localVarToReplace_quoteId, quoteId);
    if(quoteId == NULL) {
        goto end;
    }
    char* localVarToReplace_quoteId = malloc(sizeOfPathParams_quoteId);
    sprintf(localVarToReplace_quoteId, "{%s}", "quoteId");

    localVarPath = strReplace(localVarPath, localVarToReplace_quoteId, quoteId);



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
    cJSON *localVarSingleItemJSON_email_dispatch_request = NULL;
    if (email_dispatch_request != NULL)
    {
        //string
        localVarSingleItemJSON_email_dispatch_request = email_dispatch_request_convertToJSON(email_dispatch_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_email_dispatch_request);
    }
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
    
    
    
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_quoteId);
    if (localVarSingleItemJSON_email_dispatch_request) {
        cJSON_Delete(localVarSingleItemJSON_email_dispatch_request);
        localVarSingleItemJSON_email_dispatch_request = NULL;
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
    if(keyQuery_tenantId){
        free(keyQuery_tenantId);
        keyQuery_tenantId = NULL;
    }
    if(keyPairQuery_tenantId){
        keyValuePair_free(keyPairQuery_tenantId);
        keyPairQuery_tenantId = NULL;
    }

}

// Check if a quote line exists.
//
// Checks if a quote line exists for the specified quote and tenant, by quote line ID or item ID.
//
boolean_envelope_t*
QuotesAPI_quoteLineExists(apiClient_t *apiClient, char *tenantId, char *quoteId, char *quoteLineId, char *itemId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/QuotesService/Quotes/{quoteId}/Lines/Exists")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/QuotesService/Quotes/{quoteId}/Lines/Exists");


    // Path Params
    long sizeOfPathParams_quoteId = strlen(quoteId)+3 + strlen("{ quoteId }");
    if(quoteId == NULL) {
        goto end;
    }
    char* localVarToReplace_quoteId = malloc(sizeOfPathParams_quoteId);
    sprintf(localVarToReplace_quoteId, "{%s}", "quoteId");

    localVarPath = strReplace(localVarPath, localVarToReplace_quoteId, quoteId);
    if(quoteId == NULL) {
        goto end;
    }
    char* localVarToReplace_quoteId = malloc(sizeOfPathParams_quoteId);
    sprintf(localVarToReplace_quoteId, "{%s}", "quoteId");

    localVarPath = strReplace(localVarPath, localVarToReplace_quoteId, quoteId);



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
    char *keyQuery_quoteLineId = NULL;
    char * valueQuery_quoteLineId = NULL;
    keyValuePair_t *keyPairQuery_quoteLineId = 0;
    if (quoteLineId)
    {
        keyQuery_quoteLineId = strdup("quoteLineId");
        valueQuery_quoteLineId = strdup((quoteLineId));
        keyPairQuery_quoteLineId = keyValuePair_create(keyQuery_quoteLineId, valueQuery_quoteLineId);
        list_addElement(localVarQueryParameters,keyPairQuery_quoteLineId);
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
    cJSON *QuotesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    boolean_envelope_t *elementToReturn = boolean_envelope_parseFromJSON(QuotesAPIlocalVarJSON);
    cJSON_Delete(QuotesAPIlocalVarJSON);
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
    free(localVarToReplace_quoteId);
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
    if(keyQuery_quoteLineId){
        free(keyQuery_quoteLineId);
        keyQuery_quoteLineId = NULL;
    }
    if(valueQuery_quoteLineId){
        free(valueQuery_quoteLineId);
        valueQuery_quoteLineId = NULL;
    }
    if(keyPairQuery_quoteLineId){
        keyValuePair_free(keyPairQuery_quoteLineId);
        keyPairQuery_quoteLineId = NULL;
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

// Reopen a closed quote.
//
// Reopens a previously closed quote for the tenant.
//
empty_envelope_t*
QuotesAPI_reopenQuote(apiClient_t *apiClient, char *tenantId, char *quoteId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/QuotesService/Quotes/{quoteId}/Reopen")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/QuotesService/Quotes/{quoteId}/Reopen");


    // Path Params
    long sizeOfPathParams_quoteId = strlen(quoteId)+3 + strlen("{ quoteId }");
    if(quoteId == NULL) {
        goto end;
    }
    char* localVarToReplace_quoteId = malloc(sizeOfPathParams_quoteId);
    sprintf(localVarToReplace_quoteId, "{%s}", "quoteId");

    localVarPath = strReplace(localVarPath, localVarToReplace_quoteId, quoteId);
    if(quoteId == NULL) {
        goto end;
    }
    char* localVarToReplace_quoteId = malloc(sizeOfPathParams_quoteId);
    sprintf(localVarToReplace_quoteId, "{%s}", "quoteId");

    localVarPath = strReplace(localVarPath, localVarToReplace_quoteId, quoteId);



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
    cJSON *QuotesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(QuotesAPIlocalVarJSON);
    cJSON_Delete(QuotesAPIlocalVarJSON);
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
    free(localVarToReplace_quoteId);
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

// Send a quote transactional email to recipients.
//
// This action is only available for users with the 'send_email' permission.
//
empty_envelope_t*
QuotesAPI_sendQuoteEmail(apiClient_t *apiClient, char *tenantId, char *quoteId, email_dispatch_request_t *email_dispatch_request)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/QuotesService/Quotes/{quoteId}/Emails/Send")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/QuotesService/Quotes/{quoteId}/Emails/Send");


    // Path Params
    long sizeOfPathParams_quoteId = strlen(quoteId)+3 + strlen("{ quoteId }");
    if(quoteId == NULL) {
        goto end;
    }
    char* localVarToReplace_quoteId = malloc(sizeOfPathParams_quoteId);
    sprintf(localVarToReplace_quoteId, "{%s}", "quoteId");

    localVarPath = strReplace(localVarPath, localVarToReplace_quoteId, quoteId);
    if(quoteId == NULL) {
        goto end;
    }
    char* localVarToReplace_quoteId = malloc(sizeOfPathParams_quoteId);
    sprintf(localVarToReplace_quoteId, "{%s}", "quoteId");

    localVarPath = strReplace(localVarPath, localVarToReplace_quoteId, quoteId);



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
    cJSON *localVarSingleItemJSON_email_dispatch_request = NULL;
    if (email_dispatch_request != NULL)
    {
        //string
        localVarSingleItemJSON_email_dispatch_request = email_dispatch_request_convertToJSON(email_dispatch_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_email_dispatch_request);
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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *QuotesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(QuotesAPIlocalVarJSON);
    cJSON_Delete(QuotesAPIlocalVarJSON);
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
    free(localVarToReplace_quoteId);
    if (localVarSingleItemJSON_email_dispatch_request) {
        cJSON_Delete(localVarSingleItemJSON_email_dispatch_request);
        localVarSingleItemJSON_email_dispatch_request = NULL;
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

// Update an existing quote.
//
// Updates an existing quote for the specified tenant and quote ID.
//
empty_envelope_t*
QuotesAPI_updateQuote(apiClient_t *apiClient, char *tenantId, char *quoteId, quote_update_dto_t *quote_update_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/QuotesService/Quotes/{quoteId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/QuotesService/Quotes/{quoteId}");


    // Path Params
    long sizeOfPathParams_quoteId = strlen(quoteId)+3 + strlen("{ quoteId }");
    if(quoteId == NULL) {
        goto end;
    }
    char* localVarToReplace_quoteId = malloc(sizeOfPathParams_quoteId);
    sprintf(localVarToReplace_quoteId, "{%s}", "quoteId");

    localVarPath = strReplace(localVarPath, localVarToReplace_quoteId, quoteId);
    if(quoteId == NULL) {
        goto end;
    }
    char* localVarToReplace_quoteId = malloc(sizeOfPathParams_quoteId);
    sprintf(localVarToReplace_quoteId, "{%s}", "quoteId");

    localVarPath = strReplace(localVarPath, localVarToReplace_quoteId, quoteId);



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
    cJSON *localVarSingleItemJSON_quote_update_dto = NULL;
    if (quote_update_dto != NULL)
    {
        //string
        localVarSingleItemJSON_quote_update_dto = quote_update_dto_convertToJSON(quote_update_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_quote_update_dto);
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
    cJSON *QuotesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(QuotesAPIlocalVarJSON);
    cJSON_Delete(QuotesAPIlocalVarJSON);
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
    free(localVarToReplace_quoteId);
    if (localVarSingleItemJSON_quote_update_dto) {
        cJSON_Delete(localVarSingleItemJSON_quote_update_dto);
        localVarSingleItemJSON_quote_update_dto = NULL;
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

// Update a quote line.
//
// Updates an existing quote line for the specified quote and tenant.
//
empty_envelope_t*
QuotesAPI_updateQuoteLine(apiClient_t *apiClient, char *tenantId, char *quoteId, char *quoteLineId, quote_line_update_dto_t *quote_line_update_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/QuotesService/Quotes/{quoteId}/Lines/{quoteLineId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/QuotesService/Quotes/{quoteId}/Lines/{quoteLineId}");


    // Path Params
    long sizeOfPathParams_quoteId = strlen(quoteId)+3 + strlen(quoteLineId)+3 + strlen("{ quoteId }");
    if(quoteId == NULL) {
        goto end;
    }
    char* localVarToReplace_quoteId = malloc(sizeOfPathParams_quoteId);
    sprintf(localVarToReplace_quoteId, "{%s}", "quoteId");

    localVarPath = strReplace(localVarPath, localVarToReplace_quoteId, quoteId);
    if(quoteId == NULL) {
        goto end;
    }
    char* localVarToReplace_quoteId = malloc(sizeOfPathParams_quoteId);
    sprintf(localVarToReplace_quoteId, "{%s}", "quoteId");

    localVarPath = strReplace(localVarPath, localVarToReplace_quoteId, quoteId);

    // Path Params
    long sizeOfPathParams_quoteLineId = strlen(quoteId)+3 + strlen(quoteLineId)+3 + strlen("{ quoteLineId }");
    if(quoteLineId == NULL) {
        goto end;
    }
    char* localVarToReplace_quoteLineId = malloc(sizeOfPathParams_quoteLineId);
    sprintf(localVarToReplace_quoteLineId, "{%s}", "quoteLineId");

    localVarPath = strReplace(localVarPath, localVarToReplace_quoteLineId, quoteLineId);
    if(quoteLineId == NULL) {
        goto end;
    }
    char* localVarToReplace_quoteLineId = malloc(sizeOfPathParams_quoteLineId);
    sprintf(localVarToReplace_quoteLineId, "{%s}", "quoteLineId");

    localVarPath = strReplace(localVarPath, localVarToReplace_quoteLineId, quoteLineId);



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
    cJSON *localVarSingleItemJSON_quote_line_update_dto = NULL;
    if (quote_line_update_dto != NULL)
    {
        //string
        localVarSingleItemJSON_quote_line_update_dto = quote_line_update_dto_convertToJSON(quote_line_update_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_quote_line_update_dto);
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
    cJSON *QuotesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(QuotesAPIlocalVarJSON);
    cJSON_Delete(QuotesAPIlocalVarJSON);
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
    free(localVarToReplace_quoteId);
    free(localVarToReplace_quoteLineId);
    if (localVarSingleItemJSON_quote_line_update_dto) {
        cJSON_Delete(localVarSingleItemJSON_quote_line_update_dto);
        localVarSingleItemJSON_quote_line_update_dto = NULL;
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

// Upsert a quote line.
//
// Creates or updates a quote line for the specified quote and tenant.
//
empty_envelope_t*
QuotesAPI_upsertQuoteLine(apiClient_t *apiClient, char *tenantId, char *quoteId, char *quoteLineId, quote_line_upsert_dto_t *quote_line_upsert_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/QuotesService/Quotes/{quoteId}/Lines/{quoteLineId}/Upsert")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/QuotesService/Quotes/{quoteId}/Lines/{quoteLineId}/Upsert");


    // Path Params
    long sizeOfPathParams_quoteId = strlen(quoteId)+3 + strlen(quoteLineId)+3 + strlen("{ quoteId }");
    if(quoteId == NULL) {
        goto end;
    }
    char* localVarToReplace_quoteId = malloc(sizeOfPathParams_quoteId);
    sprintf(localVarToReplace_quoteId, "{%s}", "quoteId");

    localVarPath = strReplace(localVarPath, localVarToReplace_quoteId, quoteId);
    if(quoteId == NULL) {
        goto end;
    }
    char* localVarToReplace_quoteId = malloc(sizeOfPathParams_quoteId);
    sprintf(localVarToReplace_quoteId, "{%s}", "quoteId");

    localVarPath = strReplace(localVarPath, localVarToReplace_quoteId, quoteId);

    // Path Params
    long sizeOfPathParams_quoteLineId = strlen(quoteId)+3 + strlen(quoteLineId)+3 + strlen("{ quoteLineId }");
    if(quoteLineId == NULL) {
        goto end;
    }
    char* localVarToReplace_quoteLineId = malloc(sizeOfPathParams_quoteLineId);
    sprintf(localVarToReplace_quoteLineId, "{%s}", "quoteLineId");

    localVarPath = strReplace(localVarPath, localVarToReplace_quoteLineId, quoteLineId);
    if(quoteLineId == NULL) {
        goto end;
    }
    char* localVarToReplace_quoteLineId = malloc(sizeOfPathParams_quoteLineId);
    sprintf(localVarToReplace_quoteLineId, "{%s}", "quoteLineId");

    localVarPath = strReplace(localVarPath, localVarToReplace_quoteLineId, quoteLineId);



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
    cJSON *localVarSingleItemJSON_quote_line_upsert_dto = NULL;
    if (quote_line_upsert_dto != NULL)
    {
        //string
        localVarSingleItemJSON_quote_line_upsert_dto = quote_line_upsert_dto_convertToJSON(quote_line_upsert_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_quote_line_upsert_dto);
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
    cJSON *QuotesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(QuotesAPIlocalVarJSON);
    cJSON_Delete(QuotesAPIlocalVarJSON);
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
    free(localVarToReplace_quoteId);
    free(localVarToReplace_quoteLineId);
    if (localVarSingleItemJSON_quote_line_upsert_dto) {
        cJSON_Delete(localVarSingleItemJSON_quote_line_upsert_dto);
        localVarSingleItemJSON_quote_line_upsert_dto = NULL;
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

