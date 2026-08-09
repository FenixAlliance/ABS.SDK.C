#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ReceiptsAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Creates a new receipt
//
// Adds a new receipt record under the specified tenant.
//
empty_envelope_t*
ReceiptsAPI_createReceiptAsync(apiClient_t *apiClient, char *tenantId, receipt_create_dto_t *receipt_create_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/AccountingService/Receipts")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/AccountingService/Receipts");




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
    cJSON *localVarSingleItemJSON_receipt_create_dto = NULL;
    if (receipt_create_dto != NULL)
    {
        //string
        localVarSingleItemJSON_receipt_create_dto = receipt_create_dto_convertToJSON(receipt_create_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_receipt_create_dto);
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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *ReceiptsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(ReceiptsAPIlocalVarJSON);
    cJSON_Delete(ReceiptsAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_receipt_create_dto) {
        cJSON_Delete(localVarSingleItemJSON_receipt_create_dto);
        localVarSingleItemJSON_receipt_create_dto = NULL;
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

// Deletes a receipt
//
// Removes an existing receipt from the tenant’s records.
//
empty_envelope_t*
ReceiptsAPI_deleteReceiptAsync(apiClient_t *apiClient, char *tenantId, char *receiptId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/AccountingService/Receipts/{receiptId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/AccountingService/Receipts/{receiptId}");


    // Path Params
    long sizeOfPathParams_receiptId = strlen(receiptId)+3 + strlen("{ receiptId }");
    if(receiptId == NULL) {
        goto end;
    }
    char* localVarToReplace_receiptId = malloc(sizeOfPathParams_receiptId);
    sprintf(localVarToReplace_receiptId, "{%s}", "receiptId");

    localVarPath = strReplace(localVarPath, localVarToReplace_receiptId, receiptId);
    if(receiptId == NULL) {
        goto end;
    }
    char* localVarToReplace_receiptId = malloc(sizeOfPathParams_receiptId);
    sprintf(localVarToReplace_receiptId, "{%s}", "receiptId");

    localVarPath = strReplace(localVarPath, localVarToReplace_receiptId, receiptId);



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
    //nonprimitive not container
    cJSON *ReceiptsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(ReceiptsAPIlocalVarJSON);
    cJSON_Delete(ReceiptsAPIlocalVarJSON);
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
    free(localVarToReplace_receiptId);
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

// Gets details of a receipt
//
// Retrieves a specific receipt by its ID for the given tenant.
//
receipt_dto_envelope_t*
ReceiptsAPI_getReceiptDetailsAsync(apiClient_t *apiClient, char *tenantId, char *receiptId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/AccountingService/Receipts/{receiptId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/AccountingService/Receipts/{receiptId}");


    // Path Params
    long sizeOfPathParams_receiptId = strlen(receiptId)+3 + strlen("{ receiptId }");
    if(receiptId == NULL) {
        goto end;
    }
    char* localVarToReplace_receiptId = malloc(sizeOfPathParams_receiptId);
    sprintf(localVarToReplace_receiptId, "{%s}", "receiptId");

    localVarPath = strReplace(localVarPath, localVarToReplace_receiptId, receiptId);
    if(receiptId == NULL) {
        goto end;
    }
    char* localVarToReplace_receiptId = malloc(sizeOfPathParams_receiptId);
    sprintf(localVarToReplace_receiptId, "{%s}", "receiptId");

    localVarPath = strReplace(localVarPath, localVarToReplace_receiptId, receiptId);



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
    //nonprimitive not container
    cJSON *ReceiptsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    receipt_dto_envelope_t *elementToReturn = receipt_dto_envelope_parseFromJSON(ReceiptsAPIlocalVarJSON);
    cJSON_Delete(ReceiptsAPIlocalVarJSON);
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
    free(localVarToReplace_receiptId);
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

// Retrieves tenant receipts
//
// Fetches all receipts for a given tenant with OData support.
//
receipt_dto_i_read_only_list_envelope_t*
ReceiptsAPI_getReceiptsAsync(apiClient_t *apiClient, char *tenantId, receipt_dto_collection_query_parameters_t *receipt_dto_collection_query_parameters)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/AccountingService/Receipts")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/AccountingService/Receipts");




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
    cJSON *localVarSingleItemJSON_receipt_dto_collection_query_parameters = NULL;
    if (receipt_dto_collection_query_parameters != NULL)
    {
        //string
        localVarSingleItemJSON_receipt_dto_collection_query_parameters = receipt_dto_collection_query_parameters_convertToJSON(receipt_dto_collection_query_parameters);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_receipt_dto_collection_query_parameters);
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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *ReceiptsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    receipt_dto_i_read_only_list_envelope_t *elementToReturn = receipt_dto_i_read_only_list_envelope_parseFromJSON(ReceiptsAPIlocalVarJSON);
    cJSON_Delete(ReceiptsAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_receipt_dto_collection_query_parameters) {
        cJSON_Delete(localVarSingleItemJSON_receipt_dto_collection_query_parameters);
        localVarSingleItemJSON_receipt_dto_collection_query_parameters = NULL;
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

// Gets count of tenant receipts
//
// Returns total number of receipts for the tenant with OData filter support.
//
int32_envelope_t*
ReceiptsAPI_getReceiptsCountAsync(apiClient_t *apiClient, char *tenantId, receipt_dto_collection_query_parameters_t *receipt_dto_collection_query_parameters)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/AccountingService/Receipts/Count")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/AccountingService/Receipts/Count");




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
    cJSON *localVarSingleItemJSON_receipt_dto_collection_query_parameters = NULL;
    if (receipt_dto_collection_query_parameters != NULL)
    {
        //string
        localVarSingleItemJSON_receipt_dto_collection_query_parameters = receipt_dto_collection_query_parameters_convertToJSON(receipt_dto_collection_query_parameters);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_receipt_dto_collection_query_parameters);
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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *ReceiptsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    int32_envelope_t *elementToReturn = int32_envelope_parseFromJSON(ReceiptsAPIlocalVarJSON);
    cJSON_Delete(ReceiptsAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_receipt_dto_collection_query_parameters) {
        cJSON_Delete(localVarSingleItemJSON_receipt_dto_collection_query_parameters);
        localVarSingleItemJSON_receipt_dto_collection_query_parameters = NULL;
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

// Patches a receipt
//
// Partially updates the specified receipt using a JSON Patch document.
//
empty_envelope_t*
ReceiptsAPI_patchReceiptAsync(apiClient_t *apiClient, char *tenantId, char *receiptId, list_t *patch_operation)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/AccountingService/Receipts/{receiptId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/AccountingService/Receipts/{receiptId}");


    // Path Params
    long sizeOfPathParams_receiptId = strlen(receiptId)+3 + strlen("{ receiptId }");
    if(receiptId == NULL) {
        goto end;
    }
    char* localVarToReplace_receiptId = malloc(sizeOfPathParams_receiptId);
    sprintf(localVarToReplace_receiptId, "{%s}", "receiptId");

    localVarPath = strReplace(localVarPath, localVarToReplace_receiptId, receiptId);
    if(receiptId == NULL) {
        goto end;
    }
    char* localVarToReplace_receiptId = malloc(sizeOfPathParams_receiptId);
    sprintf(localVarToReplace_receiptId, "{%s}", "receiptId");

    localVarPath = strReplace(localVarPath, localVarToReplace_receiptId, receiptId);



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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    //nonprimitive not container
    cJSON *ReceiptsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(ReceiptsAPIlocalVarJSON);
    cJSON_Delete(ReceiptsAPIlocalVarJSON);
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
    free(localVarToReplace_receiptId);
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

// Updates a receipt
//
// Modifies the data of an existing receipt for the given tenant.
//
empty_envelope_t*
ReceiptsAPI_updateReceiptAsync(apiClient_t *apiClient, char *tenantId, char *receiptId, receipt_update_dto_t *receipt_update_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/AccountingService/Receipts/{receiptId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/AccountingService/Receipts/{receiptId}");


    // Path Params
    long sizeOfPathParams_receiptId = strlen(receiptId)+3 + strlen("{ receiptId }");
    if(receiptId == NULL) {
        goto end;
    }
    char* localVarToReplace_receiptId = malloc(sizeOfPathParams_receiptId);
    sprintf(localVarToReplace_receiptId, "{%s}", "receiptId");

    localVarPath = strReplace(localVarPath, localVarToReplace_receiptId, receiptId);
    if(receiptId == NULL) {
        goto end;
    }
    char* localVarToReplace_receiptId = malloc(sizeOfPathParams_receiptId);
    sprintf(localVarToReplace_receiptId, "{%s}", "receiptId");

    localVarPath = strReplace(localVarPath, localVarToReplace_receiptId, receiptId);



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
    cJSON *localVarSingleItemJSON_receipt_update_dto = NULL;
    if (receipt_update_dto != NULL)
    {
        //string
        localVarSingleItemJSON_receipt_update_dto = receipt_update_dto_convertToJSON(receipt_update_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_receipt_update_dto);
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
    //nonprimitive not container
    cJSON *ReceiptsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(ReceiptsAPIlocalVarJSON);
    cJSON_Delete(ReceiptsAPIlocalVarJSON);
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
    free(localVarToReplace_receiptId);
    if (localVarSingleItemJSON_receipt_update_dto) {
        cJSON_Delete(localVarSingleItemJSON_receipt_update_dto);
        localVarSingleItemJSON_receipt_update_dto = NULL;
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

