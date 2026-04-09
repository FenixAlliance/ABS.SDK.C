#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ItemRefundPoliciesAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Count item refund policies
//
// Counts all refund policies for a specific item.
//
int32_envelope_t*
ItemRefundPoliciesAPI_countItemRefundPoliciesAsync(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/ItemRefundPolicies/Count")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/ItemRefundPolicies/Count");




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
    cJSON *ItemRefundPoliciesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    int32_envelope_t *elementToReturn = int32_envelope_parseFromJSON(ItemRefundPoliciesAPIlocalVarJSON);
    cJSON_Delete(ItemRefundPoliciesAPIlocalVarJSON);
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
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
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

// Get item refund policies
//
// Retrieves all refund policies for a specific item.
//
item_refund_policy_dto_list_envelope_t*
ItemRefundPoliciesAPI_getItemRefundPoliciesAsync(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/ItemRefundPolicies")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/ItemRefundPolicies");




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
    cJSON *ItemRefundPoliciesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    item_refund_policy_dto_list_envelope_t *elementToReturn = item_refund_policy_dto_list_envelope_parseFromJSON(ItemRefundPoliciesAPIlocalVarJSON);
    cJSON_Delete(ItemRefundPoliciesAPIlocalVarJSON);
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
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
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

// Get item refund policy by ID
//
// Retrieves a specific refund policy for an item.
//
item_refund_policy_dto_envelope_t*
ItemRefundPoliciesAPI_getItemRefundPolicyByIdAsync(apiClient_t *apiClient, char *itemRefundPolicyId, char *itemId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/ItemRefundPolicies/{itemRefundPolicyId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/ItemRefundPolicies/{itemRefundPolicyId}");


    // Path Params
    long sizeOfPathParams_itemRefundPolicyId = strlen(itemRefundPolicyId)+3 + strlen("{ itemRefundPolicyId }");
    if(itemRefundPolicyId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemRefundPolicyId = malloc(sizeOfPathParams_itemRefundPolicyId);
    sprintf(localVarToReplace_itemRefundPolicyId, "{%s}", "itemRefundPolicyId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemRefundPolicyId, itemRefundPolicyId);
    if(itemRefundPolicyId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemRefundPolicyId = malloc(sizeOfPathParams_itemRefundPolicyId);
    sprintf(localVarToReplace_itemRefundPolicyId, "{%s}", "itemRefundPolicyId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemRefundPolicyId, itemRefundPolicyId);



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
    cJSON *ItemRefundPoliciesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    item_refund_policy_dto_envelope_t *elementToReturn = item_refund_policy_dto_envelope_parseFromJSON(ItemRefundPoliciesAPIlocalVarJSON);
    cJSON_Delete(ItemRefundPoliciesAPIlocalVarJSON);
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
    free(localVarToReplace_itemRefundPolicyId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
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

// Relate item to refund policy
//
// Relates an item to an existing refund policy.
//
void
ItemRefundPoliciesAPI_relateItemToRefundPolicyAsync(apiClient_t *apiClient, char *tenantId, char *itemId, char *refundPolicyId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/ItemRefundPolicies")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/ItemRefundPolicies");




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

    // query parameters
    char *keyQuery_refundPolicyId = NULL;
    char * valueQuery_refundPolicyId = NULL;
    keyValuePair_t *keyPairQuery_refundPolicyId = 0;
    if (refundPolicyId)
    {
        keyQuery_refundPolicyId = strdup("refundPolicyId");
        valueQuery_refundPolicyId = strdup((refundPolicyId));
        keyPairQuery_refundPolicyId = keyValuePair_create(keyQuery_refundPolicyId, valueQuery_refundPolicyId);
        list_addElement(localVarQueryParameters,keyPairQuery_refundPolicyId);
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
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    list_freeList(localVarHeaderParameters);
    
    list_freeList(localVarHeaderType);
    
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
    if(keyQuery_itemId){
        free(keyQuery_itemId);
        keyQuery_itemId = NULL;
    }
    if(keyPairQuery_itemId){
        keyValuePair_free(keyPairQuery_itemId);
        keyPairQuery_itemId = NULL;
    }
    if(keyQuery_refundPolicyId){
        free(keyQuery_refundPolicyId);
        keyQuery_refundPolicyId = NULL;
    }
    if(valueQuery_refundPolicyId){
        free(valueQuery_refundPolicyId);
        valueQuery_refundPolicyId = NULL;
    }
    if(keyPairQuery_refundPolicyId){
        keyValuePair_free(keyPairQuery_refundPolicyId);
        keyPairQuery_refundPolicyId = NULL;
    }
    if(keyQuery_refundPolicyId){
        free(keyQuery_refundPolicyId);
        keyQuery_refundPolicyId = NULL;
    }
    if(keyPairQuery_refundPolicyId){
        keyValuePair_free(keyPairQuery_refundPolicyId);
        keyPairQuery_refundPolicyId = NULL;
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
    if(keyQuery_api_version){
        free(keyQuery_api_version);
        keyQuery_api_version = NULL;
    }
    if(keyPairQuery_api_version){
        keyValuePair_free(keyPairQuery_api_version);
        keyPairQuery_api_version = NULL;
    }

}

// Remove refund policy from item
//
// Removes a refund policy from an item.
//
void
ItemRefundPoliciesAPI_removeRefundPolicyFromItemAsync(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemRefundPolicyId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/ItemRefundPolicies/{itemRefundPolicyId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/ItemRefundPolicies/{itemRefundPolicyId}");


    // Path Params
    long sizeOfPathParams_itemRefundPolicyId = strlen(itemRefundPolicyId)+3 + strlen("{ itemRefundPolicyId }");
    if(itemRefundPolicyId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemRefundPolicyId = malloc(sizeOfPathParams_itemRefundPolicyId);
    sprintf(localVarToReplace_itemRefundPolicyId, "{%s}", "itemRefundPolicyId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemRefundPolicyId, itemRefundPolicyId);
    if(itemRefundPolicyId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemRefundPolicyId = malloc(sizeOfPathParams_itemRefundPolicyId);
    sprintf(localVarToReplace_itemRefundPolicyId, "{%s}", "itemRefundPolicyId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemRefundPolicyId, itemRefundPolicyId);



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
    list_freeList(localVarHeaderParameters);
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_itemRefundPolicyId);
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
    if(keyQuery_tenantId){
        free(keyQuery_tenantId);
        keyQuery_tenantId = NULL;
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
    if(keyQuery_itemId){
        free(keyQuery_itemId);
        keyQuery_itemId = NULL;
    }
    if(keyPairQuery_itemId){
        keyValuePair_free(keyPairQuery_itemId);
        keyPairQuery_itemId = NULL;
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
    if(keyQuery_api_version){
        free(keyQuery_api_version);
        keyQuery_api_version = NULL;
    }
    if(keyPairQuery_api_version){
        keyValuePair_free(keyPairQuery_api_version);
        keyPairQuery_api_version = NULL;
    }

}

