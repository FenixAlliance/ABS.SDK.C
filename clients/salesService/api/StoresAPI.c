#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "StoresAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Get stores count
//
// Returns the total count of stores for the specified tenant with OData filter support.
//
int32_envelope_t*
StoresAPI_countStoresAsync(apiClient_t *apiClient, char *tenantId, store_dto_collection_query_parameters_t *store_dto_collection_query_parameters)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SalesService/Stores/Count")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SalesService/Stores/Count");




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
    cJSON *localVarSingleItemJSON_store_dto_collection_query_parameters = NULL;
    if (store_dto_collection_query_parameters != NULL)
    {
        //string
        localVarSingleItemJSON_store_dto_collection_query_parameters = store_dto_collection_query_parameters_convertToJSON(store_dto_collection_query_parameters);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_store_dto_collection_query_parameters);
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
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *StoresAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    int32_envelope_t *elementToReturn = int32_envelope_parseFromJSON(StoresAPIlocalVarJSON);
    cJSON_Delete(StoresAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_store_dto_collection_query_parameters) {
        cJSON_Delete(localVarSingleItemJSON_store_dto_collection_query_parameters);
        localVarSingleItemJSON_store_dto_collection_query_parameters = NULL;
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

// Create a store
//
// Creates a new store for the specified tenant.
//
empty_envelope_t*
StoresAPI_createStoreAsync(apiClient_t *apiClient, char *tenantId, store_create_dto_t *store_create_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SalesService/Stores")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SalesService/Stores");




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
    cJSON *localVarSingleItemJSON_store_create_dto = NULL;
    if (store_create_dto != NULL)
    {
        //string
        localVarSingleItemJSON_store_create_dto = store_create_dto_convertToJSON(store_create_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_store_create_dto);
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
    cJSON *StoresAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(StoresAPIlocalVarJSON);
    cJSON_Delete(StoresAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_store_create_dto) {
        cJSON_Delete(localVarSingleItemJSON_store_create_dto);
        localVarSingleItemJSON_store_create_dto = NULL;
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

// Delete a store
//
// Deletes an existing store by its unique identifier.
//
empty_envelope_t*
StoresAPI_deleteStoreAsync(apiClient_t *apiClient, char *tenantId, char *storeId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SalesService/Stores/{storeId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SalesService/Stores/{storeId}");


    // Path Params
    long sizeOfPathParams_storeId = strlen(storeId)+3 + strlen("{ storeId }");
    if(storeId == NULL) {
        goto end;
    }
    char* localVarToReplace_storeId = malloc(sizeOfPathParams_storeId);
    sprintf(localVarToReplace_storeId, "{%s}", "storeId");

    localVarPath = strReplace(localVarPath, localVarToReplace_storeId, storeId);
    if(storeId == NULL) {
        goto end;
    }
    char* localVarToReplace_storeId = malloc(sizeOfPathParams_storeId);
    sprintf(localVarToReplace_storeId, "{%s}", "storeId");

    localVarPath = strReplace(localVarPath, localVarToReplace_storeId, storeId);



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
    cJSON *StoresAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(StoresAPIlocalVarJSON);
    cJSON_Delete(StoresAPIlocalVarJSON);
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
    free(localVarToReplace_storeId);
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

// Get store by ID
//
// Retrieves a single store by its unique identifier.
//
store_dto_envelope_t*
StoresAPI_getStoreAsync(apiClient_t *apiClient, char *tenantId, char *storeId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SalesService/Stores/{storeId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SalesService/Stores/{storeId}");


    // Path Params
    long sizeOfPathParams_storeId = strlen(storeId)+3 + strlen("{ storeId }");
    if(storeId == NULL) {
        goto end;
    }
    char* localVarToReplace_storeId = malloc(sizeOfPathParams_storeId);
    sprintf(localVarToReplace_storeId, "{%s}", "storeId");

    localVarPath = strReplace(localVarPath, localVarToReplace_storeId, storeId);
    if(storeId == NULL) {
        goto end;
    }
    char* localVarToReplace_storeId = malloc(sizeOfPathParams_storeId);
    sprintf(localVarToReplace_storeId, "{%s}", "storeId");

    localVarPath = strReplace(localVarPath, localVarToReplace_storeId, storeId);



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
    cJSON *StoresAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    store_dto_envelope_t *elementToReturn = store_dto_envelope_parseFromJSON(StoresAPIlocalVarJSON);
    cJSON_Delete(StoresAPIlocalVarJSON);
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
    free(localVarToReplace_storeId);
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

// Get stores
//
// Retrieves a list of stores for the specified tenant with OData query support.
//
store_dto_list_envelope_t*
StoresAPI_getStoresAsync(apiClient_t *apiClient, char *tenantId, store_dto_collection_query_parameters_t *store_dto_collection_query_parameters)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SalesService/Stores")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SalesService/Stores");




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
    cJSON *localVarSingleItemJSON_store_dto_collection_query_parameters = NULL;
    if (store_dto_collection_query_parameters != NULL)
    {
        //string
        localVarSingleItemJSON_store_dto_collection_query_parameters = store_dto_collection_query_parameters_convertToJSON(store_dto_collection_query_parameters);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_store_dto_collection_query_parameters);
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
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *StoresAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    store_dto_list_envelope_t *elementToReturn = store_dto_list_envelope_parseFromJSON(StoresAPIlocalVarJSON);
    cJSON_Delete(StoresAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_store_dto_collection_query_parameters) {
        cJSON_Delete(localVarSingleItemJSON_store_dto_collection_query_parameters);
        localVarSingleItemJSON_store_dto_collection_query_parameters = NULL;
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

// Patch a store
//
// Partially updates an existing store using a JSON Patch document.
//
empty_envelope_t*
StoresAPI_patchStoreAsync(apiClient_t *apiClient, char *tenantId, char *storeId, list_t *patch_operation)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SalesService/Stores/{storeId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SalesService/Stores/{storeId}");


    // Path Params
    long sizeOfPathParams_storeId = strlen(storeId)+3 + strlen("{ storeId }");
    if(storeId == NULL) {
        goto end;
    }
    char* localVarToReplace_storeId = malloc(sizeOfPathParams_storeId);
    sprintf(localVarToReplace_storeId, "{%s}", "storeId");

    localVarPath = strReplace(localVarPath, localVarToReplace_storeId, storeId);
    if(storeId == NULL) {
        goto end;
    }
    char* localVarToReplace_storeId = malloc(sizeOfPathParams_storeId);
    sprintf(localVarToReplace_storeId, "{%s}", "storeId");

    localVarPath = strReplace(localVarPath, localVarToReplace_storeId, storeId);



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
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *StoresAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(StoresAPIlocalVarJSON);
    cJSON_Delete(StoresAPIlocalVarJSON);
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
    free(localVarToReplace_storeId);
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Update a store
//
// Updates an existing store by its unique identifier.
//
empty_envelope_t*
StoresAPI_updateStoreAsync(apiClient_t *apiClient, char *tenantId, char *storeId, store_update_dto_t *store_update_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SalesService/Stores/{storeId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SalesService/Stores/{storeId}");


    // Path Params
    long sizeOfPathParams_storeId = strlen(storeId)+3 + strlen("{ storeId }");
    if(storeId == NULL) {
        goto end;
    }
    char* localVarToReplace_storeId = malloc(sizeOfPathParams_storeId);
    sprintf(localVarToReplace_storeId, "{%s}", "storeId");

    localVarPath = strReplace(localVarPath, localVarToReplace_storeId, storeId);
    if(storeId == NULL) {
        goto end;
    }
    char* localVarToReplace_storeId = malloc(sizeOfPathParams_storeId);
    sprintf(localVarToReplace_storeId, "{%s}", "storeId");

    localVarPath = strReplace(localVarPath, localVarToReplace_storeId, storeId);



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
    cJSON *localVarSingleItemJSON_store_update_dto = NULL;
    if (store_update_dto != NULL)
    {
        //string
        localVarSingleItemJSON_store_update_dto = store_update_dto_convertToJSON(store_update_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_store_update_dto);
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
    cJSON *StoresAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(StoresAPIlocalVarJSON);
    cJSON_Delete(StoresAPIlocalVarJSON);
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
    free(localVarToReplace_storeId);
    if (localVarSingleItemJSON_store_update_dto) {
        cJSON_Delete(localVarSingleItemJSON_store_update_dto);
        localVarSingleItemJSON_store_update_dto = NULL;
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

