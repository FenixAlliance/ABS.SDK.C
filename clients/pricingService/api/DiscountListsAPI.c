#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "DiscountListsAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Creates a new discount list
//
// Creates a new discount list for the current tenant.
//
empty_envelope_t*
DiscountListsAPI_createDiscountList(apiClient_t *apiClient, char *tenantId, discount_list_create_dto_t *discount_list_create_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/PricingService/DiscountLists")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/PricingService/DiscountLists");




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
    cJSON *localVarSingleItemJSON_discount_list_create_dto = NULL;
    if (discount_list_create_dto != NULL)
    {
        //string
        localVarSingleItemJSON_discount_list_create_dto = discount_list_create_dto_convertToJSON(discount_list_create_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_discount_list_create_dto);
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
    //if (apiClient->response_code == 201) {
    //    printf("%s\n","Created");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad Request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    cJSON *DiscountListsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(DiscountListsAPIlocalVarJSON);
    cJSON_Delete(DiscountListsAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_discount_list_create_dto) {
        cJSON_Delete(localVarSingleItemJSON_discount_list_create_dto);
        localVarSingleItemJSON_discount_list_create_dto = NULL;
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

// Creates a discount list entry
//
// Creates a new discount entry in the specified discount list.
//
empty_envelope_t*
DiscountListsAPI_createDiscountListEntry(apiClient_t *apiClient, char *tenantId, char *discountListId, discount_create_dto_t *discount_create_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/PricingService/DiscountLists/{discountListId}/Discounts")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/PricingService/DiscountLists/{discountListId}/Discounts");


    // Path Params
    long sizeOfPathParams_discountListId = strlen(discountListId)+3 + strlen("{ discountListId }");
    if(discountListId == NULL) {
        goto end;
    }
    char* localVarToReplace_discountListId = malloc(sizeOfPathParams_discountListId);
    sprintf(localVarToReplace_discountListId, "{%s}", "discountListId");

    localVarPath = strReplace(localVarPath, localVarToReplace_discountListId, discountListId);
    if(discountListId == NULL) {
        goto end;
    }
    char* localVarToReplace_discountListId = malloc(sizeOfPathParams_discountListId);
    sprintf(localVarToReplace_discountListId, "{%s}", "discountListId");

    localVarPath = strReplace(localVarPath, localVarToReplace_discountListId, discountListId);



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
    cJSON *localVarSingleItemJSON_discount_create_dto = NULL;
    if (discount_create_dto != NULL)
    {
        //string
        localVarSingleItemJSON_discount_create_dto = discount_create_dto_convertToJSON(discount_create_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_discount_create_dto);
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
    //if (apiClient->response_code == 201) {
    //    printf("%s\n","Created");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad Request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    cJSON *DiscountListsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(DiscountListsAPIlocalVarJSON);
    cJSON_Delete(DiscountListsAPIlocalVarJSON);
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
    free(localVarToReplace_discountListId);
    if (localVarSingleItemJSON_discount_create_dto) {
        cJSON_Delete(localVarSingleItemJSON_discount_create_dto);
        localVarSingleItemJSON_discount_create_dto = NULL;
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

// Deletes a discount list
//
// Deletes the specified discount list.
//
empty_envelope_t*
DiscountListsAPI_deleteDiscountList(apiClient_t *apiClient, char *tenantId, char *discountListId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/PricingService/DiscountLists/{discountListId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/PricingService/DiscountLists/{discountListId}");


    // Path Params
    long sizeOfPathParams_discountListId = strlen(discountListId)+3 + strlen("{ discountListId }");
    if(discountListId == NULL) {
        goto end;
    }
    char* localVarToReplace_discountListId = malloc(sizeOfPathParams_discountListId);
    sprintf(localVarToReplace_discountListId, "{%s}", "discountListId");

    localVarPath = strReplace(localVarPath, localVarToReplace_discountListId, discountListId);
    if(discountListId == NULL) {
        goto end;
    }
    char* localVarToReplace_discountListId = malloc(sizeOfPathParams_discountListId);
    sprintf(localVarToReplace_discountListId, "{%s}", "discountListId");

    localVarPath = strReplace(localVarPath, localVarToReplace_discountListId, discountListId);



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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad Request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    cJSON *DiscountListsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(DiscountListsAPIlocalVarJSON);
    cJSON_Delete(DiscountListsAPIlocalVarJSON);
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
    free(localVarToReplace_discountListId);
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

// Deletes a discount list entry
//
// Deletes the specified discount entry from a discount list.
//
empty_envelope_t*
DiscountListsAPI_deleteDiscountListEntry(apiClient_t *apiClient, char *tenantId, char *discountListId, char *discountListEntryId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/PricingService/DiscountLists/{discountListId}/Discounts/{discountListEntryId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/PricingService/DiscountLists/{discountListId}/Discounts/{discountListEntryId}");


    // Path Params
    long sizeOfPathParams_discountListId = strlen(discountListId)+3 + strlen(discountListEntryId)+3 + strlen("{ discountListId }");
    if(discountListId == NULL) {
        goto end;
    }
    char* localVarToReplace_discountListId = malloc(sizeOfPathParams_discountListId);
    sprintf(localVarToReplace_discountListId, "{%s}", "discountListId");

    localVarPath = strReplace(localVarPath, localVarToReplace_discountListId, discountListId);
    if(discountListId == NULL) {
        goto end;
    }
    char* localVarToReplace_discountListId = malloc(sizeOfPathParams_discountListId);
    sprintf(localVarToReplace_discountListId, "{%s}", "discountListId");

    localVarPath = strReplace(localVarPath, localVarToReplace_discountListId, discountListId);

    // Path Params
    long sizeOfPathParams_discountListEntryId = strlen(discountListId)+3 + strlen(discountListEntryId)+3 + strlen("{ discountListEntryId }");
    if(discountListEntryId == NULL) {
        goto end;
    }
    char* localVarToReplace_discountListEntryId = malloc(sizeOfPathParams_discountListEntryId);
    sprintf(localVarToReplace_discountListEntryId, "{%s}", "discountListEntryId");

    localVarPath = strReplace(localVarPath, localVarToReplace_discountListEntryId, discountListEntryId);
    if(discountListEntryId == NULL) {
        goto end;
    }
    char* localVarToReplace_discountListEntryId = malloc(sizeOfPathParams_discountListEntryId);
    sprintf(localVarToReplace_discountListEntryId, "{%s}", "discountListEntryId");

    localVarPath = strReplace(localVarPath, localVarToReplace_discountListEntryId, discountListEntryId);



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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad Request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    cJSON *DiscountListsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(DiscountListsAPIlocalVarJSON);
    cJSON_Delete(DiscountListsAPIlocalVarJSON);
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
    free(localVarToReplace_discountListId);
    free(localVarToReplace_discountListEntryId);
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

// Gets a discount list by ID
//
// Retrieves the details of a discount list using its unique identifier.
//
discount_list_dto_envelope_t*
DiscountListsAPI_getDiscountList(apiClient_t *apiClient, char *tenantId, char *discountListId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/PricingService/DiscountLists/{discountListId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/PricingService/DiscountLists/{discountListId}");


    // Path Params
    long sizeOfPathParams_discountListId = strlen(discountListId)+3 + strlen("{ discountListId }");
    if(discountListId == NULL) {
        goto end;
    }
    char* localVarToReplace_discountListId = malloc(sizeOfPathParams_discountListId);
    sprintf(localVarToReplace_discountListId, "{%s}", "discountListId");

    localVarPath = strReplace(localVarPath, localVarToReplace_discountListId, discountListId);
    if(discountListId == NULL) {
        goto end;
    }
    char* localVarToReplace_discountListId = malloc(sizeOfPathParams_discountListId);
    sprintf(localVarToReplace_discountListId, "{%s}", "discountListId");

    localVarPath = strReplace(localVarPath, localVarToReplace_discountListId, discountListId);



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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad Request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    cJSON *DiscountListsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    discount_list_dto_envelope_t *elementToReturn = discount_list_dto_envelope_parseFromJSON(DiscountListsAPIlocalVarJSON);
    cJSON_Delete(DiscountListsAPIlocalVarJSON);
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
    free(localVarToReplace_discountListId);
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

// Retrieves discounts in a discount list
//
// Gets all discount entries for a specific discount list with OData support.
//
discount_dto_list_envelope_t*
DiscountListsAPI_getDiscountListEntries(apiClient_t *apiClient, char *tenantId, char *discountListId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/PricingService/DiscountLists/{discountListId}/Discounts")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/PricingService/DiscountLists/{discountListId}/Discounts");


    // Path Params
    long sizeOfPathParams_discountListId = strlen(discountListId)+3 + strlen("{ discountListId }");
    if(discountListId == NULL) {
        goto end;
    }
    char* localVarToReplace_discountListId = malloc(sizeOfPathParams_discountListId);
    sprintf(localVarToReplace_discountListId, "{%s}", "discountListId");

    localVarPath = strReplace(localVarPath, localVarToReplace_discountListId, discountListId);
    if(discountListId == NULL) {
        goto end;
    }
    char* localVarToReplace_discountListId = malloc(sizeOfPathParams_discountListId);
    sprintf(localVarToReplace_discountListId, "{%s}", "discountListId");

    localVarPath = strReplace(localVarPath, localVarToReplace_discountListId, discountListId);



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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad Request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    cJSON *DiscountListsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    discount_dto_list_envelope_t *elementToReturn = discount_dto_list_envelope_parseFromJSON(DiscountListsAPIlocalVarJSON);
    cJSON_Delete(DiscountListsAPIlocalVarJSON);
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
    free(localVarToReplace_discountListId);
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

// Counts discounts in a discount list
//
// Gets the count of discount entries for a specific discount list.
//
int32_envelope_t*
DiscountListsAPI_getDiscountListEntriesCount(apiClient_t *apiClient, char *tenantId, char *discountListId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/PricingService/DiscountLists/{discountListId}/Discounts/Count")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/PricingService/DiscountLists/{discountListId}/Discounts/Count");


    // Path Params
    long sizeOfPathParams_discountListId = strlen(discountListId)+3 + strlen("{ discountListId }");
    if(discountListId == NULL) {
        goto end;
    }
    char* localVarToReplace_discountListId = malloc(sizeOfPathParams_discountListId);
    sprintf(localVarToReplace_discountListId, "{%s}", "discountListId");

    localVarPath = strReplace(localVarPath, localVarToReplace_discountListId, discountListId);
    if(discountListId == NULL) {
        goto end;
    }
    char* localVarToReplace_discountListId = malloc(sizeOfPathParams_discountListId);
    sprintf(localVarToReplace_discountListId, "{%s}", "discountListId");

    localVarPath = strReplace(localVarPath, localVarToReplace_discountListId, discountListId);



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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad Request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    cJSON *DiscountListsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    int32_envelope_t *elementToReturn = int32_envelope_parseFromJSON(DiscountListsAPIlocalVarJSON);
    cJSON_Delete(DiscountListsAPIlocalVarJSON);
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
    free(localVarToReplace_discountListId);
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

// Gets a discount list entry by ID
//
// Retrieves a specific discount entry from a discount list.
//
discount_dto_envelope_t*
DiscountListsAPI_getDiscountListEntry(apiClient_t *apiClient, char *tenantId, char *discountListId, char *discountListEntryId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/PricingService/DiscountLists/{discountListId}/Discounts/{discountListEntryId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/PricingService/DiscountLists/{discountListId}/Discounts/{discountListEntryId}");


    // Path Params
    long sizeOfPathParams_discountListId = strlen(discountListId)+3 + strlen(discountListEntryId)+3 + strlen("{ discountListId }");
    if(discountListId == NULL) {
        goto end;
    }
    char* localVarToReplace_discountListId = malloc(sizeOfPathParams_discountListId);
    sprintf(localVarToReplace_discountListId, "{%s}", "discountListId");

    localVarPath = strReplace(localVarPath, localVarToReplace_discountListId, discountListId);
    if(discountListId == NULL) {
        goto end;
    }
    char* localVarToReplace_discountListId = malloc(sizeOfPathParams_discountListId);
    sprintf(localVarToReplace_discountListId, "{%s}", "discountListId");

    localVarPath = strReplace(localVarPath, localVarToReplace_discountListId, discountListId);

    // Path Params
    long sizeOfPathParams_discountListEntryId = strlen(discountListId)+3 + strlen(discountListEntryId)+3 + strlen("{ discountListEntryId }");
    if(discountListEntryId == NULL) {
        goto end;
    }
    char* localVarToReplace_discountListEntryId = malloc(sizeOfPathParams_discountListEntryId);
    sprintf(localVarToReplace_discountListEntryId, "{%s}", "discountListEntryId");

    localVarPath = strReplace(localVarPath, localVarToReplace_discountListEntryId, discountListEntryId);
    if(discountListEntryId == NULL) {
        goto end;
    }
    char* localVarToReplace_discountListEntryId = malloc(sizeOfPathParams_discountListEntryId);
    sprintf(localVarToReplace_discountListEntryId, "{%s}", "discountListEntryId");

    localVarPath = strReplace(localVarPath, localVarToReplace_discountListEntryId, discountListEntryId);



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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad Request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    cJSON *DiscountListsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    discount_dto_envelope_t *elementToReturn = discount_dto_envelope_parseFromJSON(DiscountListsAPIlocalVarJSON);
    cJSON_Delete(DiscountListsAPIlocalVarJSON);
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
    free(localVarToReplace_discountListId);
    free(localVarToReplace_discountListEntryId);
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

// Retrieves all discount lists
//
// Gets all discount lists for the current tenant with OData support.
//
discount_list_dto_list_envelope_t*
DiscountListsAPI_getDiscountLists(apiClient_t *apiClient, char *tenantId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/PricingService/DiscountLists")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/PricingService/DiscountLists");




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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad Request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    cJSON *DiscountListsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    discount_list_dto_list_envelope_t *elementToReturn = discount_list_dto_list_envelope_parseFromJSON(DiscountListsAPIlocalVarJSON);
    cJSON_Delete(DiscountListsAPIlocalVarJSON);
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

// Counts discount lists
//
// Gets the count of discount lists for the current tenant.
//
int32_envelope_t*
DiscountListsAPI_getDiscountListsCount(apiClient_t *apiClient, char *tenantId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/PricingService/DiscountLists/Count")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/PricingService/DiscountLists/Count");




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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad Request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    cJSON *DiscountListsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    int32_envelope_t *elementToReturn = int32_envelope_parseFromJSON(DiscountListsAPIlocalVarJSON);
    cJSON_Delete(DiscountListsAPIlocalVarJSON);
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

// Updates a discount list
//
// Updates the specified discount list.
//
empty_envelope_t*
DiscountListsAPI_updateDiscountList(apiClient_t *apiClient, char *tenantId, char *discountListId, discount_list_update_dto_t *discount_list_update_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/PricingService/DiscountLists/{discountListId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/PricingService/DiscountLists/{discountListId}");


    // Path Params
    long sizeOfPathParams_discountListId = strlen(discountListId)+3 + strlen("{ discountListId }");
    if(discountListId == NULL) {
        goto end;
    }
    char* localVarToReplace_discountListId = malloc(sizeOfPathParams_discountListId);
    sprintf(localVarToReplace_discountListId, "{%s}", "discountListId");

    localVarPath = strReplace(localVarPath, localVarToReplace_discountListId, discountListId);
    if(discountListId == NULL) {
        goto end;
    }
    char* localVarToReplace_discountListId = malloc(sizeOfPathParams_discountListId);
    sprintf(localVarToReplace_discountListId, "{%s}", "discountListId");

    localVarPath = strReplace(localVarPath, localVarToReplace_discountListId, discountListId);



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
    cJSON *localVarSingleItemJSON_discount_list_update_dto = NULL;
    if (discount_list_update_dto != NULL)
    {
        //string
        localVarSingleItemJSON_discount_list_update_dto = discount_list_update_dto_convertToJSON(discount_list_update_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_discount_list_update_dto);
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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad Request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    cJSON *DiscountListsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(DiscountListsAPIlocalVarJSON);
    cJSON_Delete(DiscountListsAPIlocalVarJSON);
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
    free(localVarToReplace_discountListId);
    if (localVarSingleItemJSON_discount_list_update_dto) {
        cJSON_Delete(localVarSingleItemJSON_discount_list_update_dto);
        localVarSingleItemJSON_discount_list_update_dto = NULL;
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

// Updates a discount list entry
//
// Updates the specified discount entry in a discount list.
//
empty_envelope_t*
DiscountListsAPI_updateDiscountListEntry(apiClient_t *apiClient, char *tenantId, char *discountListId, char *discountListEntryId, discount_update_dto_t *discount_update_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/PricingService/DiscountLists/{discountListId}/Discounts/{discountListEntryId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/PricingService/DiscountLists/{discountListId}/Discounts/{discountListEntryId}");


    // Path Params
    long sizeOfPathParams_discountListId = strlen(discountListId)+3 + strlen(discountListEntryId)+3 + strlen("{ discountListId }");
    if(discountListId == NULL) {
        goto end;
    }
    char* localVarToReplace_discountListId = malloc(sizeOfPathParams_discountListId);
    sprintf(localVarToReplace_discountListId, "{%s}", "discountListId");

    localVarPath = strReplace(localVarPath, localVarToReplace_discountListId, discountListId);
    if(discountListId == NULL) {
        goto end;
    }
    char* localVarToReplace_discountListId = malloc(sizeOfPathParams_discountListId);
    sprintf(localVarToReplace_discountListId, "{%s}", "discountListId");

    localVarPath = strReplace(localVarPath, localVarToReplace_discountListId, discountListId);

    // Path Params
    long sizeOfPathParams_discountListEntryId = strlen(discountListId)+3 + strlen(discountListEntryId)+3 + strlen("{ discountListEntryId }");
    if(discountListEntryId == NULL) {
        goto end;
    }
    char* localVarToReplace_discountListEntryId = malloc(sizeOfPathParams_discountListEntryId);
    sprintf(localVarToReplace_discountListEntryId, "{%s}", "discountListEntryId");

    localVarPath = strReplace(localVarPath, localVarToReplace_discountListEntryId, discountListEntryId);
    if(discountListEntryId == NULL) {
        goto end;
    }
    char* localVarToReplace_discountListEntryId = malloc(sizeOfPathParams_discountListEntryId);
    sprintf(localVarToReplace_discountListEntryId, "{%s}", "discountListEntryId");

    localVarPath = strReplace(localVarPath, localVarToReplace_discountListEntryId, discountListEntryId);



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
    cJSON *localVarSingleItemJSON_discount_update_dto = NULL;
    if (discount_update_dto != NULL)
    {
        //string
        localVarSingleItemJSON_discount_update_dto = discount_update_dto_convertToJSON(discount_update_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_discount_update_dto);
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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad Request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    cJSON *DiscountListsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(DiscountListsAPIlocalVarJSON);
    cJSON_Delete(DiscountListsAPIlocalVarJSON);
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
    free(localVarToReplace_discountListId);
    free(localVarToReplace_discountListEntryId);
    if (localVarSingleItemJSON_discount_update_dto) {
        cJSON_Delete(localVarSingleItemJSON_discount_update_dto);
        localVarSingleItemJSON_discount_update_dto = NULL;
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

