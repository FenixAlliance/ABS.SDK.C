#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "PriceListsAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Creates a new price list
//
// Creates a new price list for the current tenant.
//
empty_envelope_t*
PriceListsAPI_createPriceListAsync(apiClient_t *apiClient, char *tenantId, price_list_create_dto_t *price_list_create_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/PricingService/PriceLists")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/PricingService/PriceLists");




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
    cJSON *localVarSingleItemJSON_price_list_create_dto = NULL;
    if (price_list_create_dto != NULL)
    {
        //string
        localVarSingleItemJSON_price_list_create_dto = price_list_create_dto_convertToJSON(price_list_create_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_price_list_create_dto);
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
    cJSON *PriceListsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(PriceListsAPIlocalVarJSON);
    cJSON_Delete(PriceListsAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_price_list_create_dto) {
        cJSON_Delete(localVarSingleItemJSON_price_list_create_dto);
        localVarSingleItemJSON_price_list_create_dto = NULL;
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

// Creates a price list entry
//
// Creates a new price entry in the specified price list.
//
empty_envelope_t*
PriceListsAPI_createPriceListPricesAsync(apiClient_t *apiClient, char *tenantId, char *priceListId, item_price_create_dto_t *item_price_create_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/PricingService/PriceLists/{priceListId}/Prices")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/PricingService/PriceLists/{priceListId}/Prices");


    // Path Params
    long sizeOfPathParams_priceListId = strlen(priceListId)+3 + strlen("{ priceListId }");
    if(priceListId == NULL) {
        goto end;
    }
    char* localVarToReplace_priceListId = malloc(sizeOfPathParams_priceListId);
    sprintf(localVarToReplace_priceListId, "{%s}", "priceListId");

    localVarPath = strReplace(localVarPath, localVarToReplace_priceListId, priceListId);
    if(priceListId == NULL) {
        goto end;
    }
    char* localVarToReplace_priceListId = malloc(sizeOfPathParams_priceListId);
    sprintf(localVarToReplace_priceListId, "{%s}", "priceListId");

    localVarPath = strReplace(localVarPath, localVarToReplace_priceListId, priceListId);



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
    cJSON *localVarSingleItemJSON_item_price_create_dto = NULL;
    if (item_price_create_dto != NULL)
    {
        //string
        localVarSingleItemJSON_item_price_create_dto = item_price_create_dto_convertToJSON(item_price_create_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_item_price_create_dto);
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
    cJSON *PriceListsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(PriceListsAPIlocalVarJSON);
    cJSON_Delete(PriceListsAPIlocalVarJSON);
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
    free(localVarToReplace_priceListId);
    if (localVarSingleItemJSON_item_price_create_dto) {
        cJSON_Delete(localVarSingleItemJSON_item_price_create_dto);
        localVarSingleItemJSON_item_price_create_dto = NULL;
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

// Deletes a price list
//
// Deletes the specified price list.
//
empty_envelope_t*
PriceListsAPI_deletePriceListAsync(apiClient_t *apiClient, char *tenantId, char *priceListId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/PricingService/PriceLists/{priceListId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/PricingService/PriceLists/{priceListId}");


    // Path Params
    long sizeOfPathParams_priceListId = strlen(priceListId)+3 + strlen("{ priceListId }");
    if(priceListId == NULL) {
        goto end;
    }
    char* localVarToReplace_priceListId = malloc(sizeOfPathParams_priceListId);
    sprintf(localVarToReplace_priceListId, "{%s}", "priceListId");

    localVarPath = strReplace(localVarPath, localVarToReplace_priceListId, priceListId);
    if(priceListId == NULL) {
        goto end;
    }
    char* localVarToReplace_priceListId = malloc(sizeOfPathParams_priceListId);
    sprintf(localVarToReplace_priceListId, "{%s}", "priceListId");

    localVarPath = strReplace(localVarPath, localVarToReplace_priceListId, priceListId);



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
    cJSON *PriceListsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(PriceListsAPIlocalVarJSON);
    cJSON_Delete(PriceListsAPIlocalVarJSON);
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
    free(localVarToReplace_priceListId);
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

// Deletes a price list entry
//
// Deletes the specified price entry from a price list.
//
empty_envelope_t*
PriceListsAPI_deletePriceListPriceAsync(apiClient_t *apiClient, char *tenantId, char *priceListId, char *priceId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/PricingService/PriceLists/{priceListId}/Prices/{priceId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/PricingService/PriceLists/{priceListId}/Prices/{priceId}");


    // Path Params
    long sizeOfPathParams_priceListId = strlen(priceListId)+3 + strlen(priceId)+3 + strlen("{ priceListId }");
    if(priceListId == NULL) {
        goto end;
    }
    char* localVarToReplace_priceListId = malloc(sizeOfPathParams_priceListId);
    sprintf(localVarToReplace_priceListId, "{%s}", "priceListId");

    localVarPath = strReplace(localVarPath, localVarToReplace_priceListId, priceListId);
    if(priceListId == NULL) {
        goto end;
    }
    char* localVarToReplace_priceListId = malloc(sizeOfPathParams_priceListId);
    sprintf(localVarToReplace_priceListId, "{%s}", "priceListId");

    localVarPath = strReplace(localVarPath, localVarToReplace_priceListId, priceListId);

    // Path Params
    long sizeOfPathParams_priceId = strlen(priceListId)+3 + strlen(priceId)+3 + strlen("{ priceId }");
    if(priceId == NULL) {
        goto end;
    }
    char* localVarToReplace_priceId = malloc(sizeOfPathParams_priceId);
    sprintf(localVarToReplace_priceId, "{%s}", "priceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_priceId, priceId);
    if(priceId == NULL) {
        goto end;
    }
    char* localVarToReplace_priceId = malloc(sizeOfPathParams_priceId);
    sprintf(localVarToReplace_priceId, "{%s}", "priceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_priceId, priceId);



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
    cJSON *PriceListsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(PriceListsAPIlocalVarJSON);
    cJSON_Delete(PriceListsAPIlocalVarJSON);
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
    free(localVarToReplace_priceListId);
    free(localVarToReplace_priceId);
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

// Gets a price list by ID
//
// Retrieves the details of a price list using its unique identifier.
//
price_list_dto_envelope_t*
PriceListsAPI_getPriceListAsync(apiClient_t *apiClient, char *tenantId, char *priceListId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/PricingService/PriceLists/{priceListId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/PricingService/PriceLists/{priceListId}");


    // Path Params
    long sizeOfPathParams_priceListId = strlen(priceListId)+3 + strlen("{ priceListId }");
    if(priceListId == NULL) {
        goto end;
    }
    char* localVarToReplace_priceListId = malloc(sizeOfPathParams_priceListId);
    sprintf(localVarToReplace_priceListId, "{%s}", "priceListId");

    localVarPath = strReplace(localVarPath, localVarToReplace_priceListId, priceListId);
    if(priceListId == NULL) {
        goto end;
    }
    char* localVarToReplace_priceListId = malloc(sizeOfPathParams_priceListId);
    sprintf(localVarToReplace_priceListId, "{%s}", "priceListId");

    localVarPath = strReplace(localVarPath, localVarToReplace_priceListId, priceListId);



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
    cJSON *PriceListsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    price_list_dto_envelope_t *elementToReturn = price_list_dto_envelope_parseFromJSON(PriceListsAPIlocalVarJSON);
    cJSON_Delete(PriceListsAPIlocalVarJSON);
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
    free(localVarToReplace_priceListId);
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

// Gets a price list entry by ID
//
// Retrieves a specific price entry from a price list.
//
item_price_dto_envelope_t*
PriceListsAPI_getPriceListPriceAsync(apiClient_t *apiClient, char *tenantId, char *priceListId, char *priceId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/PricingService/PriceLists/{priceListId}/Prices/{priceId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/PricingService/PriceLists/{priceListId}/Prices/{priceId}");


    // Path Params
    long sizeOfPathParams_priceListId = strlen(priceListId)+3 + strlen(priceId)+3 + strlen("{ priceListId }");
    if(priceListId == NULL) {
        goto end;
    }
    char* localVarToReplace_priceListId = malloc(sizeOfPathParams_priceListId);
    sprintf(localVarToReplace_priceListId, "{%s}", "priceListId");

    localVarPath = strReplace(localVarPath, localVarToReplace_priceListId, priceListId);
    if(priceListId == NULL) {
        goto end;
    }
    char* localVarToReplace_priceListId = malloc(sizeOfPathParams_priceListId);
    sprintf(localVarToReplace_priceListId, "{%s}", "priceListId");

    localVarPath = strReplace(localVarPath, localVarToReplace_priceListId, priceListId);

    // Path Params
    long sizeOfPathParams_priceId = strlen(priceListId)+3 + strlen(priceId)+3 + strlen("{ priceId }");
    if(priceId == NULL) {
        goto end;
    }
    char* localVarToReplace_priceId = malloc(sizeOfPathParams_priceId);
    sprintf(localVarToReplace_priceId, "{%s}", "priceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_priceId, priceId);
    if(priceId == NULL) {
        goto end;
    }
    char* localVarToReplace_priceId = malloc(sizeOfPathParams_priceId);
    sprintf(localVarToReplace_priceId, "{%s}", "priceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_priceId, priceId);



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
    cJSON *PriceListsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    item_price_dto_envelope_t *elementToReturn = item_price_dto_envelope_parseFromJSON(PriceListsAPIlocalVarJSON);
    cJSON_Delete(PriceListsAPIlocalVarJSON);
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
    free(localVarToReplace_priceListId);
    free(localVarToReplace_priceId);
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

// Retrieves prices in a price list
//
// Gets all price entries for a specific price list with OData support.
//
item_price_dto_list_envelope_t*
PriceListsAPI_getPriceListPricesAsync(apiClient_t *apiClient, char *tenantId, char *priceListId, char *itemId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/PricingService/PriceLists/{priceListId}/Prices")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/PricingService/PriceLists/{priceListId}/Prices");


    // Path Params
    long sizeOfPathParams_priceListId = strlen(priceListId)+3 + strlen("{ priceListId }");
    if(priceListId == NULL) {
        goto end;
    }
    char* localVarToReplace_priceListId = malloc(sizeOfPathParams_priceListId);
    sprintf(localVarToReplace_priceListId, "{%s}", "priceListId");

    localVarPath = strReplace(localVarPath, localVarToReplace_priceListId, priceListId);
    if(priceListId == NULL) {
        goto end;
    }
    char* localVarToReplace_priceListId = malloc(sizeOfPathParams_priceListId);
    sprintf(localVarToReplace_priceListId, "{%s}", "priceListId");

    localVarPath = strReplace(localVarPath, localVarToReplace_priceListId, priceListId);



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
    cJSON *PriceListsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    item_price_dto_list_envelope_t *elementToReturn = item_price_dto_list_envelope_parseFromJSON(PriceListsAPIlocalVarJSON);
    cJSON_Delete(PriceListsAPIlocalVarJSON);
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
    free(localVarToReplace_priceListId);
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

// Retrieves all price lists
//
// Gets all price lists for the current tenant with OData support.
//
price_list_dto_list_envelope_t*
PriceListsAPI_getPriceListsAsync(apiClient_t *apiClient, char *tenantId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/PricingService/PriceLists")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/PricingService/PriceLists");




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
    cJSON *PriceListsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    price_list_dto_list_envelope_t *elementToReturn = price_list_dto_list_envelope_parseFromJSON(PriceListsAPIlocalVarJSON);
    cJSON_Delete(PriceListsAPIlocalVarJSON);
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

// Counts price lists
//
// Gets the count of price lists for the current tenant.
//
int32_envelope_t*
PriceListsAPI_getPriceListsCountAsync(apiClient_t *apiClient, char *tenantId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/PricingService/PriceLists/Count")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/PricingService/PriceLists/Count");




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
    cJSON *PriceListsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    int32_envelope_t *elementToReturn = int32_envelope_parseFromJSON(PriceListsAPIlocalVarJSON);
    cJSON_Delete(PriceListsAPIlocalVarJSON);
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

// Updates a price list
//
// Updates the specified price list.
//
empty_envelope_t*
PriceListsAPI_updatePriceListAsync(apiClient_t *apiClient, char *tenantId, char *priceListId, price_list_update_dto_t *price_list_update_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/PricingService/PriceLists/{priceListId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/PricingService/PriceLists/{priceListId}");


    // Path Params
    long sizeOfPathParams_priceListId = strlen(priceListId)+3 + strlen("{ priceListId }");
    if(priceListId == NULL) {
        goto end;
    }
    char* localVarToReplace_priceListId = malloc(sizeOfPathParams_priceListId);
    sprintf(localVarToReplace_priceListId, "{%s}", "priceListId");

    localVarPath = strReplace(localVarPath, localVarToReplace_priceListId, priceListId);
    if(priceListId == NULL) {
        goto end;
    }
    char* localVarToReplace_priceListId = malloc(sizeOfPathParams_priceListId);
    sprintf(localVarToReplace_priceListId, "{%s}", "priceListId");

    localVarPath = strReplace(localVarPath, localVarToReplace_priceListId, priceListId);



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
    cJSON *localVarSingleItemJSON_price_list_update_dto = NULL;
    if (price_list_update_dto != NULL)
    {
        //string
        localVarSingleItemJSON_price_list_update_dto = price_list_update_dto_convertToJSON(price_list_update_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_price_list_update_dto);
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
    cJSON *PriceListsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(PriceListsAPIlocalVarJSON);
    cJSON_Delete(PriceListsAPIlocalVarJSON);
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
    free(localVarToReplace_priceListId);
    if (localVarSingleItemJSON_price_list_update_dto) {
        cJSON_Delete(localVarSingleItemJSON_price_list_update_dto);
        localVarSingleItemJSON_price_list_update_dto = NULL;
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

// Updates a price list entry
//
// Updates the specified price entry in a price list.
//
empty_envelope_t*
PriceListsAPI_updatePriceListPriceAsync(apiClient_t *apiClient, char *tenantId, char *priceListId, char *priceId, item_price_update_dto_t *item_price_update_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/PricingService/PriceLists/{priceListId}/Prices/{priceId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/PricingService/PriceLists/{priceListId}/Prices/{priceId}");


    // Path Params
    long sizeOfPathParams_priceListId = strlen(priceListId)+3 + strlen(priceId)+3 + strlen("{ priceListId }");
    if(priceListId == NULL) {
        goto end;
    }
    char* localVarToReplace_priceListId = malloc(sizeOfPathParams_priceListId);
    sprintf(localVarToReplace_priceListId, "{%s}", "priceListId");

    localVarPath = strReplace(localVarPath, localVarToReplace_priceListId, priceListId);
    if(priceListId == NULL) {
        goto end;
    }
    char* localVarToReplace_priceListId = malloc(sizeOfPathParams_priceListId);
    sprintf(localVarToReplace_priceListId, "{%s}", "priceListId");

    localVarPath = strReplace(localVarPath, localVarToReplace_priceListId, priceListId);

    // Path Params
    long sizeOfPathParams_priceId = strlen(priceListId)+3 + strlen(priceId)+3 + strlen("{ priceId }");
    if(priceId == NULL) {
        goto end;
    }
    char* localVarToReplace_priceId = malloc(sizeOfPathParams_priceId);
    sprintf(localVarToReplace_priceId, "{%s}", "priceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_priceId, priceId);
    if(priceId == NULL) {
        goto end;
    }
    char* localVarToReplace_priceId = malloc(sizeOfPathParams_priceId);
    sprintf(localVarToReplace_priceId, "{%s}", "priceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_priceId, priceId);



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
    cJSON *localVarSingleItemJSON_item_price_update_dto = NULL;
    if (item_price_update_dto != NULL)
    {
        //string
        localVarSingleItemJSON_item_price_update_dto = item_price_update_dto_convertToJSON(item_price_update_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_item_price_update_dto);
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
    cJSON *PriceListsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(PriceListsAPIlocalVarJSON);
    cJSON_Delete(PriceListsAPIlocalVarJSON);
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
    free(localVarToReplace_priceListId);
    free(localVarToReplace_priceId);
    if (localVarSingleItemJSON_item_price_update_dto) {
        cJSON_Delete(localVarSingleItemJSON_item_price_update_dto);
        localVarSingleItemJSON_item_price_update_dto = NULL;
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

