#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ExchangeVAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Exchange currency at historical rates (v3)
//
// Exchange an amount of money from one currency to another using exchange rates from a specific historical date. Returns the full ExchangeRate details.
//
exchange_rate_envelope_t*
ExchangeVAPI_exchangeAmountHistoricalV3Async(apiClient_t *apiClient, double amount, char *sourceCurrencyId, char *targetCurrencyId, char date)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v3/ForexService/Exchange/History")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v3/ForexService/Exchange/History");




    // query parameters
    char *keyQuery_amount = NULL;
    double valueQuery_amount ;
    keyValuePair_t *keyPairQuery_amount = 0;
    if (amount)
    {
        keyQuery_amount = strdup("amount");
        valueQuery_amount = (amount);
        keyPairQuery_amount = keyValuePair_create(keyQuery_amount, &valueQuery_amount);
        list_addElement(localVarQueryParameters,keyPairQuery_amount);
    }

    // query parameters
    char *keyQuery_sourceCurrencyId = NULL;
    char * valueQuery_sourceCurrencyId = NULL;
    keyValuePair_t *keyPairQuery_sourceCurrencyId = 0;
    if (sourceCurrencyId)
    {
        keyQuery_sourceCurrencyId = strdup("sourceCurrencyId");
        valueQuery_sourceCurrencyId = strdup((sourceCurrencyId));
        keyPairQuery_sourceCurrencyId = keyValuePair_create(keyQuery_sourceCurrencyId, valueQuery_sourceCurrencyId);
        list_addElement(localVarQueryParameters,keyPairQuery_sourceCurrencyId);
    }

    // query parameters
    char *keyQuery_targetCurrencyId = NULL;
    char * valueQuery_targetCurrencyId = NULL;
    keyValuePair_t *keyPairQuery_targetCurrencyId = 0;
    if (targetCurrencyId)
    {
        keyQuery_targetCurrencyId = strdup("targetCurrencyId");
        valueQuery_targetCurrencyId = strdup((targetCurrencyId));
        keyPairQuery_targetCurrencyId = keyValuePair_create(keyQuery_targetCurrencyId, valueQuery_targetCurrencyId);
        list_addElement(localVarQueryParameters,keyPairQuery_targetCurrencyId);
    }

    // query parameters
    char *keyQuery_date = NULL;
    char valueQuery_date ;
    keyValuePair_t *keyPairQuery_date = 0;
    if (date)
    {
        keyQuery_date = strdup("date");
        valueQuery_date = (date);
        keyPairQuery_date = keyValuePair_create(keyQuery_date, &valueQuery_date);
        list_addElement(localVarQueryParameters,keyPairQuery_date);
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
    cJSON *ExchangeVAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    exchange_rate_envelope_t *elementToReturn = exchange_rate_envelope_parseFromJSON(ExchangeVAPIlocalVarJSON);
    cJSON_Delete(ExchangeVAPIlocalVarJSON);
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
    if(keyQuery_amount){
        free(keyQuery_amount);
        keyQuery_amount = NULL;
    }
    if(keyPairQuery_amount){
        keyValuePair_free(keyPairQuery_amount);
        keyPairQuery_amount = NULL;
    }
    if(keyQuery_sourceCurrencyId){
        free(keyQuery_sourceCurrencyId);
        keyQuery_sourceCurrencyId = NULL;
    }
    if(valueQuery_sourceCurrencyId){
        free(valueQuery_sourceCurrencyId);
        valueQuery_sourceCurrencyId = NULL;
    }
    if(keyPairQuery_sourceCurrencyId){
        keyValuePair_free(keyPairQuery_sourceCurrencyId);
        keyPairQuery_sourceCurrencyId = NULL;
    }
    if(keyQuery_targetCurrencyId){
        free(keyQuery_targetCurrencyId);
        keyQuery_targetCurrencyId = NULL;
    }
    if(valueQuery_targetCurrencyId){
        free(valueQuery_targetCurrencyId);
        valueQuery_targetCurrencyId = NULL;
    }
    if(keyPairQuery_targetCurrencyId){
        keyValuePair_free(keyPairQuery_targetCurrencyId);
        keyPairQuery_targetCurrencyId = NULL;
    }
    if(keyQuery_date){
        free(keyQuery_date);
        keyQuery_date = NULL;
    }
    if(keyPairQuery_date){
        keyValuePair_free(keyPairQuery_date);
        keyPairQuery_date = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Exchange currency at latest rates (v3)
//
// Exchange an amount of money from one currency to another using the latest available exchange rates. Returns the full ExchangeRate details.
//
exchange_rate_envelope_t*
ExchangeVAPI_exchangeAmountV3Async(apiClient_t *apiClient, double amount, char *sourceCurrencyId, char *targetCurrencyId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v3/ForexService/Exchange/Latest")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v3/ForexService/Exchange/Latest");




    // query parameters
    char *keyQuery_amount = NULL;
    double valueQuery_amount ;
    keyValuePair_t *keyPairQuery_amount = 0;
    if (amount)
    {
        keyQuery_amount = strdup("amount");
        valueQuery_amount = (amount);
        keyPairQuery_amount = keyValuePair_create(keyQuery_amount, &valueQuery_amount);
        list_addElement(localVarQueryParameters,keyPairQuery_amount);
    }

    // query parameters
    char *keyQuery_sourceCurrencyId = NULL;
    char * valueQuery_sourceCurrencyId = NULL;
    keyValuePair_t *keyPairQuery_sourceCurrencyId = 0;
    if (sourceCurrencyId)
    {
        keyQuery_sourceCurrencyId = strdup("sourceCurrencyId");
        valueQuery_sourceCurrencyId = strdup((sourceCurrencyId));
        keyPairQuery_sourceCurrencyId = keyValuePair_create(keyQuery_sourceCurrencyId, valueQuery_sourceCurrencyId);
        list_addElement(localVarQueryParameters,keyPairQuery_sourceCurrencyId);
    }

    // query parameters
    char *keyQuery_targetCurrencyId = NULL;
    char * valueQuery_targetCurrencyId = NULL;
    keyValuePair_t *keyPairQuery_targetCurrencyId = 0;
    if (targetCurrencyId)
    {
        keyQuery_targetCurrencyId = strdup("targetCurrencyId");
        valueQuery_targetCurrencyId = strdup((targetCurrencyId));
        keyPairQuery_targetCurrencyId = keyValuePair_create(keyQuery_targetCurrencyId, valueQuery_targetCurrencyId);
        list_addElement(localVarQueryParameters,keyPairQuery_targetCurrencyId);
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
    cJSON *ExchangeVAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    exchange_rate_envelope_t *elementToReturn = exchange_rate_envelope_parseFromJSON(ExchangeVAPIlocalVarJSON);
    cJSON_Delete(ExchangeVAPIlocalVarJSON);
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
    if(keyQuery_amount){
        free(keyQuery_amount);
        keyQuery_amount = NULL;
    }
    if(keyPairQuery_amount){
        keyValuePair_free(keyPairQuery_amount);
        keyPairQuery_amount = NULL;
    }
    if(keyQuery_sourceCurrencyId){
        free(keyQuery_sourceCurrencyId);
        keyQuery_sourceCurrencyId = NULL;
    }
    if(valueQuery_sourceCurrencyId){
        free(valueQuery_sourceCurrencyId);
        valueQuery_sourceCurrencyId = NULL;
    }
    if(keyPairQuery_sourceCurrencyId){
        keyValuePair_free(keyPairQuery_sourceCurrencyId);
        keyPairQuery_sourceCurrencyId = NULL;
    }
    if(keyQuery_targetCurrencyId){
        free(keyQuery_targetCurrencyId);
        keyQuery_targetCurrencyId = NULL;
    }
    if(valueQuery_targetCurrencyId){
        free(valueQuery_targetCurrencyId);
        valueQuery_targetCurrencyId = NULL;
    }
    if(keyPairQuery_targetCurrencyId){
        keyValuePair_free(keyPairQuery_targetCurrencyId);
        keyPairQuery_targetCurrencyId = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

