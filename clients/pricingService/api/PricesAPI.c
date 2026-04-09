#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "PricesAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Gets the final price for an item
//
// Gets the final price for an item after all discounts and taxes in the specified currency.
//
money_envelope_t*
PricesAPI_getFinalPrice(apiClient_t *apiClient, char *itemId, char *currencyId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/PricingService/Prices/{itemId}/FinalPrice")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/PricingService/Prices/{itemId}/FinalPrice");


    // Path Params
    long sizeOfPathParams_itemId = strlen(itemId)+3 + strlen("{ itemId }");
    if(itemId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemId = malloc(sizeOfPathParams_itemId);
    sprintf(localVarToReplace_itemId, "{%s}", "itemId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemId, itemId);
    if(itemId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemId = malloc(sizeOfPathParams_itemId);
    sprintf(localVarToReplace_itemId, "{%s}", "itemId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemId, itemId);



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
    char *keyQuery_currencyId = NULL;
    char * valueQuery_currencyId = NULL;
    keyValuePair_t *keyPairQuery_currencyId = 0;
    if (currencyId)
    {
        keyQuery_currencyId = strdup("currencyId");
        valueQuery_currencyId = strdup((currencyId));
        keyPairQuery_currencyId = keyValuePair_create(keyQuery_currencyId, valueQuery_currencyId);
        list_addElement(localVarQueryParameters,keyPairQuery_currencyId);
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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    //nonprimitive not container
    cJSON *PricesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    money_envelope_t *elementToReturn = money_envelope_parseFromJSON(PricesAPIlocalVarJSON);
    cJSON_Delete(PricesAPIlocalVarJSON);
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
    free(localVarToReplace_itemId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
    if(keyQuery_currencyId){
        free(keyQuery_currencyId);
        keyQuery_currencyId = NULL;
    }
    if(valueQuery_currencyId){
        free(valueQuery_currencyId);
        valueQuery_currencyId = NULL;
    }
    if(keyPairQuery_currencyId){
        keyValuePair_free(keyPairQuery_currencyId);
        keyPairQuery_currencyId = NULL;
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

// Gets the calculated price for an item
//
// Calculates the price for an item considering price list, discount list, quantity, and currency.
//
item_price_calculation_envelope_t*
PricesAPI_getPrice(apiClient_t *apiClient, char *itemId, char *priceListId, char *discountsListId, double quantity, char *currencyId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/PricingService/Prices/{itemId}/Price")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/PricingService/Prices/{itemId}/Price");


    // Path Params
    long sizeOfPathParams_itemId = strlen(itemId)+3 + strlen("{ itemId }");
    if(itemId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemId = malloc(sizeOfPathParams_itemId);
    sprintf(localVarToReplace_itemId, "{%s}", "itemId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemId, itemId);
    if(itemId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemId = malloc(sizeOfPathParams_itemId);
    sprintf(localVarToReplace_itemId, "{%s}", "itemId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemId, itemId);



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
    char *keyQuery_priceListId = NULL;
    char * valueQuery_priceListId = NULL;
    keyValuePair_t *keyPairQuery_priceListId = 0;
    if (priceListId)
    {
        keyQuery_priceListId = strdup("priceListId");
        valueQuery_priceListId = strdup((priceListId));
        keyPairQuery_priceListId = keyValuePair_create(keyQuery_priceListId, valueQuery_priceListId);
        list_addElement(localVarQueryParameters,keyPairQuery_priceListId);
    }

    // query parameters
    char *keyQuery_discountsListId = NULL;
    char * valueQuery_discountsListId = NULL;
    keyValuePair_t *keyPairQuery_discountsListId = 0;
    if (discountsListId)
    {
        keyQuery_discountsListId = strdup("discountsListId");
        valueQuery_discountsListId = strdup((discountsListId));
        keyPairQuery_discountsListId = keyValuePair_create(keyQuery_discountsListId, valueQuery_discountsListId);
        list_addElement(localVarQueryParameters,keyPairQuery_discountsListId);
    }

    // query parameters
    char *keyQuery_quantity = NULL;
    double valueQuery_quantity ;
    keyValuePair_t *keyPairQuery_quantity = 0;
    if (quantity)
    {
        keyQuery_quantity = strdup("quantity");
        valueQuery_quantity = (quantity);
        keyPairQuery_quantity = keyValuePair_create(keyQuery_quantity, &valueQuery_quantity);
        list_addElement(localVarQueryParameters,keyPairQuery_quantity);
    }

    // query parameters
    char *keyQuery_currencyId = NULL;
    char * valueQuery_currencyId = NULL;
    keyValuePair_t *keyPairQuery_currencyId = 0;
    if (currencyId)
    {
        keyQuery_currencyId = strdup("currencyId");
        valueQuery_currencyId = strdup((currencyId));
        keyPairQuery_currencyId = keyValuePair_create(keyQuery_currencyId, valueQuery_currencyId);
        list_addElement(localVarQueryParameters,keyPairQuery_currencyId);
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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    //nonprimitive not container
    cJSON *PricesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    item_price_calculation_envelope_t *elementToReturn = item_price_calculation_envelope_parseFromJSON(PricesAPIlocalVarJSON);
    cJSON_Delete(PricesAPIlocalVarJSON);
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
    free(localVarToReplace_itemId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
    if(keyQuery_priceListId){
        free(keyQuery_priceListId);
        keyQuery_priceListId = NULL;
    }
    if(valueQuery_priceListId){
        free(valueQuery_priceListId);
        valueQuery_priceListId = NULL;
    }
    if(keyPairQuery_priceListId){
        keyValuePair_free(keyPairQuery_priceListId);
        keyPairQuery_priceListId = NULL;
    }
    if(keyQuery_discountsListId){
        free(keyQuery_discountsListId);
        keyQuery_discountsListId = NULL;
    }
    if(valueQuery_discountsListId){
        free(valueQuery_discountsListId);
        valueQuery_discountsListId = NULL;
    }
    if(keyPairQuery_discountsListId){
        keyValuePair_free(keyPairQuery_discountsListId);
        keyPairQuery_discountsListId = NULL;
    }
    if(keyQuery_quantity){
        free(keyQuery_quantity);
        keyQuery_quantity = NULL;
    }
    if(keyPairQuery_quantity){
        keyValuePair_free(keyPairQuery_quantity);
        keyPairQuery_quantity = NULL;
    }
    if(keyQuery_currencyId){
        free(keyQuery_currencyId);
        keyQuery_currencyId = NULL;
    }
    if(valueQuery_currencyId){
        free(valueQuery_currencyId);
        valueQuery_currencyId = NULL;
    }
    if(keyPairQuery_currencyId){
        keyValuePair_free(keyPairQuery_currencyId);
        keyPairQuery_currencyId = NULL;
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

// Gets total savings for an item
//
// Gets the total savings amount for an item in the specified currency.
//
money_envelope_t*
PricesAPI_getTotalSavingsInUsd(apiClient_t *apiClient, char *itemId, char *currencyId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/PricingService/Prices/{itemId}/TotalSavings")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/PricingService/Prices/{itemId}/TotalSavings");


    // Path Params
    long sizeOfPathParams_itemId = strlen(itemId)+3 + strlen("{ itemId }");
    if(itemId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemId = malloc(sizeOfPathParams_itemId);
    sprintf(localVarToReplace_itemId, "{%s}", "itemId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemId, itemId);
    if(itemId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemId = malloc(sizeOfPathParams_itemId);
    sprintf(localVarToReplace_itemId, "{%s}", "itemId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemId, itemId);



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
    char *keyQuery_currencyId = NULL;
    char * valueQuery_currencyId = NULL;
    keyValuePair_t *keyPairQuery_currencyId = 0;
    if (currencyId)
    {
        keyQuery_currencyId = strdup("currencyId");
        valueQuery_currencyId = strdup((currencyId));
        keyPairQuery_currencyId = keyValuePair_create(keyQuery_currencyId, valueQuery_currencyId);
        list_addElement(localVarQueryParameters,keyPairQuery_currencyId);
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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    //nonprimitive not container
    cJSON *PricesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    money_envelope_t *elementToReturn = money_envelope_parseFromJSON(PricesAPIlocalVarJSON);
    cJSON_Delete(PricesAPIlocalVarJSON);
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
    free(localVarToReplace_itemId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
    if(keyQuery_currencyId){
        free(keyQuery_currencyId);
        keyQuery_currencyId = NULL;
    }
    if(valueQuery_currencyId){
        free(valueQuery_currencyId);
        valueQuery_currencyId = NULL;
    }
    if(keyPairQuery_currencyId){
        keyValuePair_free(keyPairQuery_currencyId);
        keyPairQuery_currencyId = NULL;
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

// Gets total taxes for an item
//
// Gets the total tax amount for an item in the specified currency.
//
money_envelope_t*
PricesAPI_getTotalTaxesInUsd(apiClient_t *apiClient, char *itemId, char *currencyId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/PricingService/Prices/{itemId}/TotalTaxes")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/PricingService/Prices/{itemId}/TotalTaxes");


    // Path Params
    long sizeOfPathParams_itemId = strlen(itemId)+3 + strlen("{ itemId }");
    if(itemId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemId = malloc(sizeOfPathParams_itemId);
    sprintf(localVarToReplace_itemId, "{%s}", "itemId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemId, itemId);
    if(itemId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemId = malloc(sizeOfPathParams_itemId);
    sprintf(localVarToReplace_itemId, "{%s}", "itemId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemId, itemId);



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
    char *keyQuery_currencyId = NULL;
    char * valueQuery_currencyId = NULL;
    keyValuePair_t *keyPairQuery_currencyId = 0;
    if (currencyId)
    {
        keyQuery_currencyId = strdup("currencyId");
        valueQuery_currencyId = strdup((currencyId));
        keyPairQuery_currencyId = keyValuePair_create(keyQuery_currencyId, valueQuery_currencyId);
        list_addElement(localVarQueryParameters,keyPairQuery_currencyId);
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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    //nonprimitive not container
    cJSON *PricesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    money_envelope_t *elementToReturn = money_envelope_parseFromJSON(PricesAPIlocalVarJSON);
    cJSON_Delete(PricesAPIlocalVarJSON);
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
    free(localVarToReplace_itemId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
    if(keyQuery_currencyId){
        free(keyQuery_currencyId);
        keyQuery_currencyId = NULL;
    }
    if(valueQuery_currencyId){
        free(valueQuery_currencyId);
        valueQuery_currencyId = NULL;
    }
    if(keyPairQuery_currencyId){
        keyValuePair_free(keyPairQuery_currencyId);
        keyPairQuery_currencyId = NULL;
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

