#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "InvoicesAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Aggregate invoice discounts.
//
// Aggregates the discounts for the specified invoices.
//
money_envelope_t*
InvoicesAPI_aggregateInvoiceDiscounts(apiClient_t *apiClient, list_t *request_body, char *currencyId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/InvoicingService/Invoices/DiscountsAggregate")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/InvoicingService/Invoices/DiscountsAggregate");




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

    // Body Param
    //notstring
    cJSON *localVar_request_body = NULL;
    cJSON *localVarItemJSON_request_body = NULL;
    cJSON *localVarSingleItemJSON_request_body = NULL;
    if (request_body != NULL)
    {
        localVarItemJSON_request_body = cJSON_CreateObject();
        localVarSingleItemJSON_request_body = cJSON_AddArrayToObject(localVarItemJSON_request_body, "request_body");
        if (localVarSingleItemJSON_request_body == NULL)
        {
            // nonprimitive container

            goto end;
        }
    }

    listEntry_t *request_bodyBodyListEntry;
    list_ForEach(request_bodyBodyListEntry, request_body)
    {
        localVar_request_body = _convertToJSON(request_bodyBodyListEntry->data);
        if(localVar_request_body == NULL)
        {
            goto end;
        }
        cJSON_AddItemToArray(localVarSingleItemJSON_request_body, localVar_request_body);
        localVarBodyParameters = cJSON_Print(localVarItemJSON_request_body);
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
    cJSON *InvoicesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    money_envelope_t *elementToReturn = money_envelope_parseFromJSON(InvoicesAPIlocalVarJSON);
    cJSON_Delete(InvoicesAPIlocalVarJSON);
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
    if (localVarItemJSON_request_body) {
        cJSON_Delete(localVarItemJSON_request_body);
        localVarItemJSON_request_body = NULL;
    }
    if (localVarSingleItemJSON_request_body) {
        cJSON_Delete(localVarSingleItemJSON_request_body);
        localVarSingleItemJSON_request_body = NULL;
    }
    if (localVar_request_body) {
        cJSON_Delete(localVar_request_body);
        localVar_request_body = NULL;
    }
    free(localVarBodyParameters);
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Aggregate invoice global surcharges.
//
// Aggregates the global surcharges for the specified invoices.
//
money_envelope_t*
InvoicesAPI_aggregateInvoiceGlobalSurcharges(apiClient_t *apiClient, list_t *request_body, char *currencyId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/InvoicingService/Invoices/GlobalSurchargesAggregate")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/InvoicingService/Invoices/GlobalSurchargesAggregate");




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

    // Body Param
    //notstring
    cJSON *localVar_request_body = NULL;
    cJSON *localVarItemJSON_request_body = NULL;
    cJSON *localVarSingleItemJSON_request_body = NULL;
    if (request_body != NULL)
    {
        localVarItemJSON_request_body = cJSON_CreateObject();
        localVarSingleItemJSON_request_body = cJSON_AddArrayToObject(localVarItemJSON_request_body, "request_body");
        if (localVarSingleItemJSON_request_body == NULL)
        {
            // nonprimitive container

            goto end;
        }
    }

    listEntry_t *request_bodyBodyListEntry;
    list_ForEach(request_bodyBodyListEntry, request_body)
    {
        localVar_request_body = _convertToJSON(request_bodyBodyListEntry->data);
        if(localVar_request_body == NULL)
        {
            goto end;
        }
        cJSON_AddItemToArray(localVarSingleItemJSON_request_body, localVar_request_body);
        localVarBodyParameters = cJSON_Print(localVarItemJSON_request_body);
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
    cJSON *InvoicesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    money_envelope_t *elementToReturn = money_envelope_parseFromJSON(InvoicesAPIlocalVarJSON);
    cJSON_Delete(InvoicesAPIlocalVarJSON);
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
    if (localVarItemJSON_request_body) {
        cJSON_Delete(localVarItemJSON_request_body);
        localVarItemJSON_request_body = NULL;
    }
    if (localVarSingleItemJSON_request_body) {
        cJSON_Delete(localVarSingleItemJSON_request_body);
        localVarSingleItemJSON_request_body = NULL;
    }
    if (localVar_request_body) {
        cJSON_Delete(localVar_request_body);
        localVar_request_body = NULL;
    }
    free(localVarBodyParameters);
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Aggregate invoice tax bases.
//
// Aggregates the tax bases for the specified invoices.
//
money_envelope_t*
InvoicesAPI_aggregateInvoiceTaxBases(apiClient_t *apiClient, list_t *request_body, char *currencyId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/InvoicingService/Invoices/TaxBasesAggregate")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/InvoicingService/Invoices/TaxBasesAggregate");




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

    // Body Param
    //notstring
    cJSON *localVar_request_body = NULL;
    cJSON *localVarItemJSON_request_body = NULL;
    cJSON *localVarSingleItemJSON_request_body = NULL;
    if (request_body != NULL)
    {
        localVarItemJSON_request_body = cJSON_CreateObject();
        localVarSingleItemJSON_request_body = cJSON_AddArrayToObject(localVarItemJSON_request_body, "request_body");
        if (localVarSingleItemJSON_request_body == NULL)
        {
            // nonprimitive container

            goto end;
        }
    }

    listEntry_t *request_bodyBodyListEntry;
    list_ForEach(request_bodyBodyListEntry, request_body)
    {
        localVar_request_body = _convertToJSON(request_bodyBodyListEntry->data);
        if(localVar_request_body == NULL)
        {
            goto end;
        }
        cJSON_AddItemToArray(localVarSingleItemJSON_request_body, localVar_request_body);
        localVarBodyParameters = cJSON_Print(localVarItemJSON_request_body);
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
    cJSON *InvoicesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    money_envelope_t *elementToReturn = money_envelope_parseFromJSON(InvoicesAPIlocalVarJSON);
    cJSON_Delete(InvoicesAPIlocalVarJSON);
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
    if (localVarItemJSON_request_body) {
        cJSON_Delete(localVarItemJSON_request_body);
        localVarItemJSON_request_body = NULL;
    }
    if (localVarSingleItemJSON_request_body) {
        cJSON_Delete(localVarSingleItemJSON_request_body);
        localVarSingleItemJSON_request_body = NULL;
    }
    if (localVar_request_body) {
        cJSON_Delete(localVar_request_body);
        localVar_request_body = NULL;
    }
    free(localVarBodyParameters);
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Aggregate invoice taxes.
//
// Aggregates the taxes for the specified invoices.
//
money_envelope_t*
InvoicesAPI_aggregateInvoiceTaxes(apiClient_t *apiClient, list_t *request_body, char *currencyId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/InvoicingService/Invoices/TaxesAggregate")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/InvoicingService/Invoices/TaxesAggregate");




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

    // Body Param
    //notstring
    cJSON *localVar_request_body = NULL;
    cJSON *localVarItemJSON_request_body = NULL;
    cJSON *localVarSingleItemJSON_request_body = NULL;
    if (request_body != NULL)
    {
        localVarItemJSON_request_body = cJSON_CreateObject();
        localVarSingleItemJSON_request_body = cJSON_AddArrayToObject(localVarItemJSON_request_body, "request_body");
        if (localVarSingleItemJSON_request_body == NULL)
        {
            // nonprimitive container

            goto end;
        }
    }

    listEntry_t *request_bodyBodyListEntry;
    list_ForEach(request_bodyBodyListEntry, request_body)
    {
        localVar_request_body = _convertToJSON(request_bodyBodyListEntry->data);
        if(localVar_request_body == NULL)
        {
            goto end;
        }
        cJSON_AddItemToArray(localVarSingleItemJSON_request_body, localVar_request_body);
        localVarBodyParameters = cJSON_Print(localVarItemJSON_request_body);
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
    cJSON *InvoicesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    money_envelope_t *elementToReturn = money_envelope_parseFromJSON(InvoicesAPIlocalVarJSON);
    cJSON_Delete(InvoicesAPIlocalVarJSON);
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
    if (localVarItemJSON_request_body) {
        cJSON_Delete(localVarItemJSON_request_body);
        localVarItemJSON_request_body = NULL;
    }
    if (localVarSingleItemJSON_request_body) {
        cJSON_Delete(localVarSingleItemJSON_request_body);
        localVarSingleItemJSON_request_body = NULL;
    }
    if (localVar_request_body) {
        cJSON_Delete(localVar_request_body);
        localVar_request_body = NULL;
    }
    free(localVarBodyParameters);
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Aggregate invoice totals.
//
// Aggregates the totals for the specified invoices.
//
money_envelope_t*
InvoicesAPI_aggregateInvoiceTotals(apiClient_t *apiClient, list_t *request_body, char *currencyId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/InvoicingService/Invoices/TotalsAggregate")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/InvoicingService/Invoices/TotalsAggregate");




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

    // Body Param
    //notstring
    cJSON *localVar_request_body = NULL;
    cJSON *localVarItemJSON_request_body = NULL;
    cJSON *localVarSingleItemJSON_request_body = NULL;
    if (request_body != NULL)
    {
        localVarItemJSON_request_body = cJSON_CreateObject();
        localVarSingleItemJSON_request_body = cJSON_AddArrayToObject(localVarItemJSON_request_body, "request_body");
        if (localVarSingleItemJSON_request_body == NULL)
        {
            // nonprimitive container

            goto end;
        }
    }

    listEntry_t *request_bodyBodyListEntry;
    list_ForEach(request_bodyBodyListEntry, request_body)
    {
        localVar_request_body = _convertToJSON(request_bodyBodyListEntry->data);
        if(localVar_request_body == NULL)
        {
            goto end;
        }
        cJSON_AddItemToArray(localVarSingleItemJSON_request_body, localVar_request_body);
        localVarBodyParameters = cJSON_Print(localVarItemJSON_request_body);
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
    cJSON *InvoicesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    money_envelope_t *elementToReturn = money_envelope_parseFromJSON(InvoicesAPIlocalVarJSON);
    cJSON_Delete(InvoicesAPIlocalVarJSON);
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
    if (localVarItemJSON_request_body) {
        cJSON_Delete(localVarItemJSON_request_body);
        localVarItemJSON_request_body = NULL;
    }
    if (localVarSingleItemJSON_request_body) {
        cJSON_Delete(localVarSingleItemJSON_request_body);
        localVarSingleItemJSON_request_body = NULL;
    }
    if (localVar_request_body) {
        cJSON_Delete(localVar_request_body);
        localVar_request_body = NULL;
    }
    free(localVarBodyParameters);
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Calculate an invoice.
//
// Calculates the totals and taxes for the specified invoice.
//
empty_envelope_t*
InvoicesAPI_calculateInvoice(apiClient_t *apiClient, char *tenantId, char *invoiceId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/InvoicingService/Invoices/{invoiceId}/Calculate")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/InvoicingService/Invoices/{invoiceId}/Calculate");


    // Path Params
    long sizeOfPathParams_invoiceId = strlen(invoiceId)+3 + strlen("{ invoiceId }");
    if(invoiceId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceId = malloc(sizeOfPathParams_invoiceId);
    sprintf(localVarToReplace_invoiceId, "{%s}", "invoiceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceId, invoiceId);
    if(invoiceId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceId = malloc(sizeOfPathParams_invoiceId);
    sprintf(localVarToReplace_invoiceId, "{%s}", "invoiceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceId, invoiceId);



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
    cJSON *InvoicesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(InvoicesAPIlocalVarJSON);
    cJSON_Delete(InvoicesAPIlocalVarJSON);
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
    free(localVarToReplace_invoiceId);
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

// Calculate an invoice line.
//
// Calculates the totals and taxes for the specified invoice line.
//
empty_envelope_t*
InvoicesAPI_calculateInvoiceLine(apiClient_t *apiClient, char *tenantId, char *invoiceId, char *invoiceLineId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/InvoicingService/Invoices/{invoiceId}/Lines/{invoiceLineId}/Calculate")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/InvoicingService/Invoices/{invoiceId}/Lines/{invoiceLineId}/Calculate");


    // Path Params
    long sizeOfPathParams_invoiceId = strlen(invoiceId)+3 + strlen(invoiceLineId)+3 + strlen("{ invoiceId }");
    if(invoiceId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceId = malloc(sizeOfPathParams_invoiceId);
    sprintf(localVarToReplace_invoiceId, "{%s}", "invoiceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceId, invoiceId);
    if(invoiceId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceId = malloc(sizeOfPathParams_invoiceId);
    sprintf(localVarToReplace_invoiceId, "{%s}", "invoiceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceId, invoiceId);

    // Path Params
    long sizeOfPathParams_invoiceLineId = strlen(invoiceId)+3 + strlen(invoiceLineId)+3 + strlen("{ invoiceLineId }");
    if(invoiceLineId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceLineId = malloc(sizeOfPathParams_invoiceLineId);
    sprintf(localVarToReplace_invoiceLineId, "{%s}", "invoiceLineId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceLineId, invoiceLineId);
    if(invoiceLineId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceLineId = malloc(sizeOfPathParams_invoiceLineId);
    sprintf(localVarToReplace_invoiceLineId, "{%s}", "invoiceLineId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceLineId, invoiceLineId);



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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *InvoicesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(InvoicesAPIlocalVarJSON);
    cJSON_Delete(InvoicesAPIlocalVarJSON);
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
    free(localVarToReplace_invoiceId);
    free(localVarToReplace_invoiceLineId);
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

// Create a new invoice.
//
// Creates a new invoice for the specified tenant.
//
empty_envelope_t*
InvoicesAPI_createInvoice(apiClient_t *apiClient, char *tenantId, invoice_create_dto_t *invoice_create_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/InvoicingService/Invoices")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/InvoicingService/Invoices");




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
    cJSON *localVarSingleItemJSON_invoice_create_dto = NULL;
    if (invoice_create_dto != NULL)
    {
        //string
        localVarSingleItemJSON_invoice_create_dto = invoice_create_dto_convertToJSON(invoice_create_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_invoice_create_dto);
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
    cJSON *InvoicesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(InvoicesAPIlocalVarJSON);
    cJSON_Delete(InvoicesAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_invoice_create_dto) {
        cJSON_Delete(localVarSingleItemJSON_invoice_create_dto);
        localVarSingleItemJSON_invoice_create_dto = NULL;
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

// Create a new invoice adjustment.
//
// Creates a new adjustment for the specified invoice.
//
empty_envelope_t*
InvoicesAPI_createInvoiceAdjustment(apiClient_t *apiClient, char *tenantId, char *invoiceId, invoice_adjustment_create_dto_t *invoice_adjustment_create_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/InvoicingService/Invoices/{invoiceId}/Adjustments")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/InvoicingService/Invoices/{invoiceId}/Adjustments");


    // Path Params
    long sizeOfPathParams_invoiceId = strlen(invoiceId)+3 + strlen("{ invoiceId }");
    if(invoiceId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceId = malloc(sizeOfPathParams_invoiceId);
    sprintf(localVarToReplace_invoiceId, "{%s}", "invoiceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceId, invoiceId);
    if(invoiceId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceId = malloc(sizeOfPathParams_invoiceId);
    sprintf(localVarToReplace_invoiceId, "{%s}", "invoiceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceId, invoiceId);



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
    cJSON *localVarSingleItemJSON_invoice_adjustment_create_dto = NULL;
    if (invoice_adjustment_create_dto != NULL)
    {
        //string
        localVarSingleItemJSON_invoice_adjustment_create_dto = invoice_adjustment_create_dto_convertToJSON(invoice_adjustment_create_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_invoice_adjustment_create_dto);
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
    cJSON *InvoicesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(InvoicesAPIlocalVarJSON);
    cJSON_Delete(InvoicesAPIlocalVarJSON);
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
    free(localVarToReplace_invoiceId);
    if (localVarSingleItemJSON_invoice_adjustment_create_dto) {
        cJSON_Delete(localVarSingleItemJSON_invoice_adjustment_create_dto);
        localVarSingleItemJSON_invoice_adjustment_create_dto = NULL;
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

// Create a new invoice line.
//
// Creates a new invoice line for the specified invoice.
//
invoice_line_dto_i_read_only_list_envelope_t*
InvoicesAPI_createInvoiceLine(apiClient_t *apiClient, char *tenantId, char *invoiceId, invoice_line_create_dto_t *invoice_line_create_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/InvoicingService/Invoices/{invoiceId}/Lines")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/InvoicingService/Invoices/{invoiceId}/Lines");


    // Path Params
    long sizeOfPathParams_invoiceId = strlen(invoiceId)+3 + strlen("{ invoiceId }");
    if(invoiceId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceId = malloc(sizeOfPathParams_invoiceId);
    sprintf(localVarToReplace_invoiceId, "{%s}", "invoiceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceId, invoiceId);
    if(invoiceId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceId = malloc(sizeOfPathParams_invoiceId);
    sprintf(localVarToReplace_invoiceId, "{%s}", "invoiceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceId, invoiceId);



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
    cJSON *localVarSingleItemJSON_invoice_line_create_dto = NULL;
    if (invoice_line_create_dto != NULL)
    {
        //string
        localVarSingleItemJSON_invoice_line_create_dto = invoice_line_create_dto_convertToJSON(invoice_line_create_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_invoice_line_create_dto);
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
    cJSON *InvoicesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    invoice_line_dto_i_read_only_list_envelope_t *elementToReturn = invoice_line_dto_i_read_only_list_envelope_parseFromJSON(InvoicesAPIlocalVarJSON);
    cJSON_Delete(InvoicesAPIlocalVarJSON);
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
    free(localVarToReplace_invoiceId);
    if (localVarSingleItemJSON_invoice_line_create_dto) {
        cJSON_Delete(localVarSingleItemJSON_invoice_line_create_dto);
        localVarSingleItemJSON_invoice_line_create_dto = NULL;
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

// Create a new tax for an invoice line.
//
// Creates a new tax entry for the specified invoice line.
//
empty_envelope_t*
InvoicesAPI_createInvoiceLineTax(apiClient_t *apiClient, char *tenantId, char *invoiceId, char *invoiceLineId, invoice_line_applied_tax_create_dto_t *invoice_line_applied_tax_create_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/InvoicingService/Invoices/{invoiceId}/Lines/{invoiceLineId}/Taxes")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/InvoicingService/Invoices/{invoiceId}/Lines/{invoiceLineId}/Taxes");


    // Path Params
    long sizeOfPathParams_invoiceId = strlen(invoiceId)+3 + strlen(invoiceLineId)+3 + strlen("{ invoiceId }");
    if(invoiceId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceId = malloc(sizeOfPathParams_invoiceId);
    sprintf(localVarToReplace_invoiceId, "{%s}", "invoiceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceId, invoiceId);
    if(invoiceId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceId = malloc(sizeOfPathParams_invoiceId);
    sprintf(localVarToReplace_invoiceId, "{%s}", "invoiceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceId, invoiceId);

    // Path Params
    long sizeOfPathParams_invoiceLineId = strlen(invoiceId)+3 + strlen(invoiceLineId)+3 + strlen("{ invoiceLineId }");
    if(invoiceLineId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceLineId = malloc(sizeOfPathParams_invoiceLineId);
    sprintf(localVarToReplace_invoiceLineId, "{%s}", "invoiceLineId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceLineId, invoiceLineId);
    if(invoiceLineId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceLineId = malloc(sizeOfPathParams_invoiceLineId);
    sprintf(localVarToReplace_invoiceLineId, "{%s}", "invoiceLineId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceLineId, invoiceLineId);



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
    cJSON *localVarSingleItemJSON_invoice_line_applied_tax_create_dto = NULL;
    if (invoice_line_applied_tax_create_dto != NULL)
    {
        //string
        localVarSingleItemJSON_invoice_line_applied_tax_create_dto = invoice_line_applied_tax_create_dto_convertToJSON(invoice_line_applied_tax_create_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_invoice_line_applied_tax_create_dto);
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
    cJSON *InvoicesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(InvoicesAPIlocalVarJSON);
    cJSON_Delete(InvoicesAPIlocalVarJSON);
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
    free(localVarToReplace_invoiceId);
    free(localVarToReplace_invoiceLineId);
    if (localVarSingleItemJSON_invoice_line_applied_tax_create_dto) {
        cJSON_Delete(localVarSingleItemJSON_invoice_line_applied_tax_create_dto);
        localVarSingleItemJSON_invoice_line_applied_tax_create_dto = NULL;
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

// Create a new invoice reference.
//
// Creates a new reference for the specified invoice.
//
empty_envelope_t*
InvoicesAPI_createInvoiceReference(apiClient_t *apiClient, char *tenantId, char *invoiceId, invoice_reference_create_dto_t *invoice_reference_create_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/InvoicingService/Invoices/{invoiceId}/References")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/InvoicingService/Invoices/{invoiceId}/References");


    // Path Params
    long sizeOfPathParams_invoiceId = strlen(invoiceId)+3 + strlen("{ invoiceId }");
    if(invoiceId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceId = malloc(sizeOfPathParams_invoiceId);
    sprintf(localVarToReplace_invoiceId, "{%s}", "invoiceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceId, invoiceId);
    if(invoiceId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceId = malloc(sizeOfPathParams_invoiceId);
    sprintf(localVarToReplace_invoiceId, "{%s}", "invoiceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceId, invoiceId);



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
    cJSON *localVarSingleItemJSON_invoice_reference_create_dto = NULL;
    if (invoice_reference_create_dto != NULL)
    {
        //string
        localVarSingleItemJSON_invoice_reference_create_dto = invoice_reference_create_dto_convertToJSON(invoice_reference_create_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_invoice_reference_create_dto);
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
    cJSON *InvoicesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(InvoicesAPIlocalVarJSON);
    cJSON_Delete(InvoicesAPIlocalVarJSON);
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
    free(localVarToReplace_invoiceId);
    if (localVarSingleItemJSON_invoice_reference_create_dto) {
        cJSON_Delete(localVarSingleItemJSON_invoice_reference_create_dto);
        localVarSingleItemJSON_invoice_reference_create_dto = NULL;
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

// Delete an invoice.
//
// Deletes the specified invoice for the tenant.
//
empty_envelope_t*
InvoicesAPI_deleteInvoice(apiClient_t *apiClient, char *tenantId, char *invoiceId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/InvoicingService/Invoices/{invoiceId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/InvoicingService/Invoices/{invoiceId}");


    // Path Params
    long sizeOfPathParams_invoiceId = strlen(invoiceId)+3 + strlen("{ invoiceId }");
    if(invoiceId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceId = malloc(sizeOfPathParams_invoiceId);
    sprintf(localVarToReplace_invoiceId, "{%s}", "invoiceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceId, invoiceId);
    if(invoiceId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceId = malloc(sizeOfPathParams_invoiceId);
    sprintf(localVarToReplace_invoiceId, "{%s}", "invoiceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceId, invoiceId);



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
    cJSON *InvoicesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(InvoicesAPIlocalVarJSON);
    cJSON_Delete(InvoicesAPIlocalVarJSON);
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
    free(localVarToReplace_invoiceId);
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

// Delete an invoice adjustment.
//
// Deletes the specified adjustment from the invoice.
//
empty_envelope_t*
InvoicesAPI_deleteInvoiceAdjustment(apiClient_t *apiClient, char *tenantId, char *invoiceId, char *invoiceAdjustmentId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/InvoicingService/Invoices/{invoiceId}/Adjustments/{invoiceAdjustmentId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/InvoicingService/Invoices/{invoiceId}/Adjustments/{invoiceAdjustmentId}");


    // Path Params
    long sizeOfPathParams_invoiceId = strlen(invoiceId)+3 + strlen(invoiceAdjustmentId)+3 + strlen("{ invoiceId }");
    if(invoiceId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceId = malloc(sizeOfPathParams_invoiceId);
    sprintf(localVarToReplace_invoiceId, "{%s}", "invoiceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceId, invoiceId);
    if(invoiceId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceId = malloc(sizeOfPathParams_invoiceId);
    sprintf(localVarToReplace_invoiceId, "{%s}", "invoiceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceId, invoiceId);

    // Path Params
    long sizeOfPathParams_invoiceAdjustmentId = strlen(invoiceId)+3 + strlen(invoiceAdjustmentId)+3 + strlen("{ invoiceAdjustmentId }");
    if(invoiceAdjustmentId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceAdjustmentId = malloc(sizeOfPathParams_invoiceAdjustmentId);
    sprintf(localVarToReplace_invoiceAdjustmentId, "{%s}", "invoiceAdjustmentId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceAdjustmentId, invoiceAdjustmentId);
    if(invoiceAdjustmentId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceAdjustmentId = malloc(sizeOfPathParams_invoiceAdjustmentId);
    sprintf(localVarToReplace_invoiceAdjustmentId, "{%s}", "invoiceAdjustmentId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceAdjustmentId, invoiceAdjustmentId);



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
    cJSON *InvoicesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(InvoicesAPIlocalVarJSON);
    cJSON_Delete(InvoicesAPIlocalVarJSON);
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
    free(localVarToReplace_invoiceId);
    free(localVarToReplace_invoiceAdjustmentId);
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

// Delete an invoice line.
//
// Deletes the specified invoice line.
//
empty_envelope_t*
InvoicesAPI_deleteInvoiceLine(apiClient_t *apiClient, char *tenantId, char *invoiceId, char *invoiceLineId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/InvoicingService/Invoices/{invoiceId}/Lines/{invoiceLineId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/InvoicingService/Invoices/{invoiceId}/Lines/{invoiceLineId}");


    // Path Params
    long sizeOfPathParams_invoiceId = strlen(invoiceId)+3 + strlen(invoiceLineId)+3 + strlen("{ invoiceId }");
    if(invoiceId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceId = malloc(sizeOfPathParams_invoiceId);
    sprintf(localVarToReplace_invoiceId, "{%s}", "invoiceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceId, invoiceId);
    if(invoiceId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceId = malloc(sizeOfPathParams_invoiceId);
    sprintf(localVarToReplace_invoiceId, "{%s}", "invoiceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceId, invoiceId);

    // Path Params
    long sizeOfPathParams_invoiceLineId = strlen(invoiceId)+3 + strlen(invoiceLineId)+3 + strlen("{ invoiceLineId }");
    if(invoiceLineId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceLineId = malloc(sizeOfPathParams_invoiceLineId);
    sprintf(localVarToReplace_invoiceLineId, "{%s}", "invoiceLineId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceLineId, invoiceLineId);
    if(invoiceLineId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceLineId = malloc(sizeOfPathParams_invoiceLineId);
    sprintf(localVarToReplace_invoiceLineId, "{%s}", "invoiceLineId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceLineId, invoiceLineId);



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
    cJSON *InvoicesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(InvoicesAPIlocalVarJSON);
    cJSON_Delete(InvoicesAPIlocalVarJSON);
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
    free(localVarToReplace_invoiceId);
    free(localVarToReplace_invoiceLineId);
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

// Delete a tax from an invoice line.
//
// Deletes the specified tax entry from the invoice line.
//
empty_envelope_t*
InvoicesAPI_deleteInvoiceLineTax(apiClient_t *apiClient, char *tenantId, char *invoiceId, char *invoiceLineId, char *invoiceLineTaxId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/InvoicingService/Invoices/{invoiceId}/Lines/{invoiceLineId}/Taxes/{invoiceLineTaxId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/InvoicingService/Invoices/{invoiceId}/Lines/{invoiceLineId}/Taxes/{invoiceLineTaxId}");


    // Path Params
    long sizeOfPathParams_invoiceId = strlen(invoiceId)+3 + strlen(invoiceLineId)+3 + strlen(invoiceLineTaxId)+3 + strlen("{ invoiceId }");
    if(invoiceId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceId = malloc(sizeOfPathParams_invoiceId);
    sprintf(localVarToReplace_invoiceId, "{%s}", "invoiceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceId, invoiceId);
    if(invoiceId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceId = malloc(sizeOfPathParams_invoiceId);
    sprintf(localVarToReplace_invoiceId, "{%s}", "invoiceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceId, invoiceId);

    // Path Params
    long sizeOfPathParams_invoiceLineId = strlen(invoiceId)+3 + strlen(invoiceLineId)+3 + strlen(invoiceLineTaxId)+3 + strlen("{ invoiceLineId }");
    if(invoiceLineId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceLineId = malloc(sizeOfPathParams_invoiceLineId);
    sprintf(localVarToReplace_invoiceLineId, "{%s}", "invoiceLineId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceLineId, invoiceLineId);
    if(invoiceLineId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceLineId = malloc(sizeOfPathParams_invoiceLineId);
    sprintf(localVarToReplace_invoiceLineId, "{%s}", "invoiceLineId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceLineId, invoiceLineId);

    // Path Params
    long sizeOfPathParams_invoiceLineTaxId = strlen(invoiceId)+3 + strlen(invoiceLineId)+3 + strlen(invoiceLineTaxId)+3 + strlen("{ invoiceLineTaxId }");
    if(invoiceLineTaxId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceLineTaxId = malloc(sizeOfPathParams_invoiceLineTaxId);
    sprintf(localVarToReplace_invoiceLineTaxId, "{%s}", "invoiceLineTaxId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceLineTaxId, invoiceLineTaxId);
    if(invoiceLineTaxId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceLineTaxId = malloc(sizeOfPathParams_invoiceLineTaxId);
    sprintf(localVarToReplace_invoiceLineTaxId, "{%s}", "invoiceLineTaxId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceLineTaxId, invoiceLineTaxId);



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
    cJSON *InvoicesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(InvoicesAPIlocalVarJSON);
    cJSON_Delete(InvoicesAPIlocalVarJSON);
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
    free(localVarToReplace_invoiceId);
    free(localVarToReplace_invoiceLineId);
    free(localVarToReplace_invoiceLineTaxId);
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

// Delete an invoice reference.
//
// Deletes the specified reference from the invoice.
//
empty_envelope_t*
InvoicesAPI_deleteInvoiceReference(apiClient_t *apiClient, char *tenantId, char *invoiceId, char *invoiceReferenceId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/InvoicingService/Invoices/{invoiceId}/References/{invoiceReferenceId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/InvoicingService/Invoices/{invoiceId}/References/{invoiceReferenceId}");


    // Path Params
    long sizeOfPathParams_invoiceId = strlen(invoiceId)+3 + strlen(invoiceReferenceId)+3 + strlen("{ invoiceId }");
    if(invoiceId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceId = malloc(sizeOfPathParams_invoiceId);
    sprintf(localVarToReplace_invoiceId, "{%s}", "invoiceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceId, invoiceId);
    if(invoiceId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceId = malloc(sizeOfPathParams_invoiceId);
    sprintf(localVarToReplace_invoiceId, "{%s}", "invoiceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceId, invoiceId);

    // Path Params
    long sizeOfPathParams_invoiceReferenceId = strlen(invoiceId)+3 + strlen(invoiceReferenceId)+3 + strlen("{ invoiceReferenceId }");
    if(invoiceReferenceId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceReferenceId = malloc(sizeOfPathParams_invoiceReferenceId);
    sprintf(localVarToReplace_invoiceReferenceId, "{%s}", "invoiceReferenceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceReferenceId, invoiceReferenceId);
    if(invoiceReferenceId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceReferenceId = malloc(sizeOfPathParams_invoiceReferenceId);
    sprintf(localVarToReplace_invoiceReferenceId, "{%s}", "invoiceReferenceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceReferenceId, invoiceReferenceId);



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
    cJSON *InvoicesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(InvoicesAPIlocalVarJSON);
    cJSON_Delete(InvoicesAPIlocalVarJSON);
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
    free(localVarToReplace_invoiceId);
    free(localVarToReplace_invoiceReferenceId);
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

// Get an extended invoice by ID.
//
// Retrieves the extended invoice details for the specified invoice ID.
//
invoice_dto_envelope_t*
InvoicesAPI_getExtendedInvoice(apiClient_t *apiClient, char *tenantId, char *invoiceId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/InvoicingService/Invoices/{invoiceId}/Extended")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/InvoicingService/Invoices/{invoiceId}/Extended");


    // Path Params
    long sizeOfPathParams_invoiceId = strlen(invoiceId)+3 + strlen("{ invoiceId }");
    if(invoiceId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceId = malloc(sizeOfPathParams_invoiceId);
    sprintf(localVarToReplace_invoiceId, "{%s}", "invoiceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceId, invoiceId);
    if(invoiceId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceId = malloc(sizeOfPathParams_invoiceId);
    sprintf(localVarToReplace_invoiceId, "{%s}", "invoiceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceId, invoiceId);



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
    cJSON *InvoicesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    invoice_dto_envelope_t *elementToReturn = invoice_dto_envelope_parseFromJSON(InvoicesAPIlocalVarJSON);
    cJSON_Delete(InvoicesAPIlocalVarJSON);
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
    free(localVarToReplace_invoiceId);
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

// Get a list of extended invoices.
//
// Retrieves a list of extended invoice details for the specified tenant.
//
extended_invoice_dto_list_envelope_t*
InvoicesAPI_getExtendedInvoices(apiClient_t *apiClient, char *tenantId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/InvoicingService/Invoices/Extended")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/InvoicingService/Invoices/Extended");




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
    cJSON *InvoicesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    extended_invoice_dto_list_envelope_t *elementToReturn = extended_invoice_dto_list_envelope_parseFromJSON(InvoicesAPIlocalVarJSON);
    cJSON_Delete(InvoicesAPIlocalVarJSON);
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

// Get the count of extended invoices.
//
// Retrieves the total count of extended invoices for the specified tenant.
//
int32_envelope_t*
InvoicesAPI_getExtendedInvoicesCount(apiClient_t *apiClient, char *tenantId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/InvoicingService/Invoices/Extended/Count")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/InvoicingService/Invoices/Extended/Count");




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
    cJSON *InvoicesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    int32_envelope_t *elementToReturn = int32_envelope_parseFromJSON(InvoicesAPIlocalVarJSON);
    cJSON_Delete(InvoicesAPIlocalVarJSON);
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

// Get an invoice by ID.
//
// Retrieves the invoice details for the specified invoice ID.
//
invoice_dto_envelope_t*
InvoicesAPI_getInvoice(apiClient_t *apiClient, char *tenantId, char *invoiceId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/InvoicingService/Invoices/{invoiceId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/InvoicingService/Invoices/{invoiceId}");


    // Path Params
    long sizeOfPathParams_invoiceId = strlen(invoiceId)+3 + strlen("{ invoiceId }");
    if(invoiceId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceId = malloc(sizeOfPathParams_invoiceId);
    sprintf(localVarToReplace_invoiceId, "{%s}", "invoiceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceId, invoiceId);
    if(invoiceId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceId = malloc(sizeOfPathParams_invoiceId);
    sprintf(localVarToReplace_invoiceId, "{%s}", "invoiceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceId, invoiceId);



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
    cJSON *InvoicesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    invoice_dto_envelope_t *elementToReturn = invoice_dto_envelope_parseFromJSON(InvoicesAPIlocalVarJSON);
    cJSON_Delete(InvoicesAPIlocalVarJSON);
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
    free(localVarToReplace_invoiceId);
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

// Get an invoice adjustment by ID.
//
// Retrieves the adjustment details for the specified invoice adjustment ID.
//
invoice_adjustment_dto_envelope_t*
InvoicesAPI_getInvoiceAdjustment(apiClient_t *apiClient, char *tenantId, char *invoiceId, char *invoiceAdjustmentId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/InvoicingService/Invoices/{invoiceId}/Adjustments/{invoiceAdjustmentId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/InvoicingService/Invoices/{invoiceId}/Adjustments/{invoiceAdjustmentId}");


    // Path Params
    long sizeOfPathParams_invoiceId = strlen(invoiceId)+3 + strlen(invoiceAdjustmentId)+3 + strlen("{ invoiceId }");
    if(invoiceId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceId = malloc(sizeOfPathParams_invoiceId);
    sprintf(localVarToReplace_invoiceId, "{%s}", "invoiceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceId, invoiceId);
    if(invoiceId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceId = malloc(sizeOfPathParams_invoiceId);
    sprintf(localVarToReplace_invoiceId, "{%s}", "invoiceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceId, invoiceId);

    // Path Params
    long sizeOfPathParams_invoiceAdjustmentId = strlen(invoiceId)+3 + strlen(invoiceAdjustmentId)+3 + strlen("{ invoiceAdjustmentId }");
    if(invoiceAdjustmentId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceAdjustmentId = malloc(sizeOfPathParams_invoiceAdjustmentId);
    sprintf(localVarToReplace_invoiceAdjustmentId, "{%s}", "invoiceAdjustmentId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceAdjustmentId, invoiceAdjustmentId);
    if(invoiceAdjustmentId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceAdjustmentId = malloc(sizeOfPathParams_invoiceAdjustmentId);
    sprintf(localVarToReplace_invoiceAdjustmentId, "{%s}", "invoiceAdjustmentId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceAdjustmentId, invoiceAdjustmentId);



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
    cJSON *InvoicesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    invoice_adjustment_dto_envelope_t *elementToReturn = invoice_adjustment_dto_envelope_parseFromJSON(InvoicesAPIlocalVarJSON);
    cJSON_Delete(InvoicesAPIlocalVarJSON);
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
    free(localVarToReplace_invoiceId);
    free(localVarToReplace_invoiceAdjustmentId);
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

// Get invoice adjustments.
//
// Retrieves the adjustments for the specified invoice.
//
invoice_adjustment_dto_i_read_only_list_envelope_t*
InvoicesAPI_getInvoiceAdjustments(apiClient_t *apiClient, char *tenantId, char *invoiceId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/InvoicingService/Invoices/{invoiceId}/Adjustments")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/InvoicingService/Invoices/{invoiceId}/Adjustments");


    // Path Params
    long sizeOfPathParams_invoiceId = strlen(invoiceId)+3 + strlen("{ invoiceId }");
    if(invoiceId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceId = malloc(sizeOfPathParams_invoiceId);
    sprintf(localVarToReplace_invoiceId, "{%s}", "invoiceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceId, invoiceId);
    if(invoiceId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceId = malloc(sizeOfPathParams_invoiceId);
    sprintf(localVarToReplace_invoiceId, "{%s}", "invoiceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceId, invoiceId);



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
    cJSON *InvoicesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    invoice_adjustment_dto_i_read_only_list_envelope_t *elementToReturn = invoice_adjustment_dto_i_read_only_list_envelope_parseFromJSON(InvoicesAPIlocalVarJSON);
    cJSON_Delete(InvoicesAPIlocalVarJSON);
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
    free(localVarToReplace_invoiceId);
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

// Get the count of invoice adjustments.
//
// Retrieves the total count of adjustments for the specified invoice.
//
int32_envelope_t*
InvoicesAPI_getInvoiceAdjustmentsCount(apiClient_t *apiClient, char *tenantId, char *invoiceId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/InvoicingService/Invoices/{invoiceId}/Adjustments/Count")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/InvoicingService/Invoices/{invoiceId}/Adjustments/Count");


    // Path Params
    long sizeOfPathParams_invoiceId = strlen(invoiceId)+3 + strlen("{ invoiceId }");
    if(invoiceId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceId = malloc(sizeOfPathParams_invoiceId);
    sprintf(localVarToReplace_invoiceId, "{%s}", "invoiceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceId, invoiceId);
    if(invoiceId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceId = malloc(sizeOfPathParams_invoiceId);
    sprintf(localVarToReplace_invoiceId, "{%s}", "invoiceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceId, invoiceId);



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
    cJSON *InvoicesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    int32_envelope_t *elementToReturn = int32_envelope_parseFromJSON(InvoicesAPIlocalVarJSON);
    cJSON_Delete(InvoicesAPIlocalVarJSON);
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
    free(localVarToReplace_invoiceId);
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

// Get an invoice line by ID.
//
// Retrieves the invoice line details for the specified invoice line ID.
//
invoice_line_dto_envelope_t*
InvoicesAPI_getInvoiceLine(apiClient_t *apiClient, char *tenantId, char *invoiceId, char *invoiceLineId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/InvoicingService/Invoices/{invoiceId}/Lines/{invoiceLineId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/InvoicingService/Invoices/{invoiceId}/Lines/{invoiceLineId}");


    // Path Params
    long sizeOfPathParams_invoiceId = strlen(invoiceId)+3 + strlen(invoiceLineId)+3 + strlen("{ invoiceId }");
    if(invoiceId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceId = malloc(sizeOfPathParams_invoiceId);
    sprintf(localVarToReplace_invoiceId, "{%s}", "invoiceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceId, invoiceId);
    if(invoiceId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceId = malloc(sizeOfPathParams_invoiceId);
    sprintf(localVarToReplace_invoiceId, "{%s}", "invoiceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceId, invoiceId);

    // Path Params
    long sizeOfPathParams_invoiceLineId = strlen(invoiceId)+3 + strlen(invoiceLineId)+3 + strlen("{ invoiceLineId }");
    if(invoiceLineId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceLineId = malloc(sizeOfPathParams_invoiceLineId);
    sprintf(localVarToReplace_invoiceLineId, "{%s}", "invoiceLineId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceLineId, invoiceLineId);
    if(invoiceLineId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceLineId = malloc(sizeOfPathParams_invoiceLineId);
    sprintf(localVarToReplace_invoiceLineId, "{%s}", "invoiceLineId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceLineId, invoiceLineId);



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
    cJSON *InvoicesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    invoice_line_dto_envelope_t *elementToReturn = invoice_line_dto_envelope_parseFromJSON(InvoicesAPIlocalVarJSON);
    cJSON_Delete(InvoicesAPIlocalVarJSON);
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
    free(localVarToReplace_invoiceId);
    free(localVarToReplace_invoiceLineId);
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

// Get taxes for an invoice line.
//
// Retrieves the taxes applied to the specified invoice line.
//
invoice_line_applied_tax_dto_i_read_only_list_envelope_t*
InvoicesAPI_getInvoiceLineTaxes(apiClient_t *apiClient, char *tenantId, char *invoiceId, char *invoiceLineId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/InvoicingService/Invoices/{invoiceId}/Lines/{invoiceLineId}/Taxes")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/InvoicingService/Invoices/{invoiceId}/Lines/{invoiceLineId}/Taxes");


    // Path Params
    long sizeOfPathParams_invoiceId = strlen(invoiceId)+3 + strlen(invoiceLineId)+3 + strlen("{ invoiceId }");
    if(invoiceId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceId = malloc(sizeOfPathParams_invoiceId);
    sprintf(localVarToReplace_invoiceId, "{%s}", "invoiceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceId, invoiceId);
    if(invoiceId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceId = malloc(sizeOfPathParams_invoiceId);
    sprintf(localVarToReplace_invoiceId, "{%s}", "invoiceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceId, invoiceId);

    // Path Params
    long sizeOfPathParams_invoiceLineId = strlen(invoiceId)+3 + strlen(invoiceLineId)+3 + strlen("{ invoiceLineId }");
    if(invoiceLineId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceLineId = malloc(sizeOfPathParams_invoiceLineId);
    sprintf(localVarToReplace_invoiceLineId, "{%s}", "invoiceLineId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceLineId, invoiceLineId);
    if(invoiceLineId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceLineId = malloc(sizeOfPathParams_invoiceLineId);
    sprintf(localVarToReplace_invoiceLineId, "{%s}", "invoiceLineId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceLineId, invoiceLineId);



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
    cJSON *InvoicesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    invoice_line_applied_tax_dto_i_read_only_list_envelope_t *elementToReturn = invoice_line_applied_tax_dto_i_read_only_list_envelope_parseFromJSON(InvoicesAPIlocalVarJSON);
    cJSON_Delete(InvoicesAPIlocalVarJSON);
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
    free(localVarToReplace_invoiceId);
    free(localVarToReplace_invoiceLineId);
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

// Get the count of taxes for an invoice line.
//
// Retrieves the total count of taxes applied to the specified invoice line.
//
int32_envelope_t*
InvoicesAPI_getInvoiceLineTaxesCount(apiClient_t *apiClient, char *tenantId, char *invoiceId, char *invoiceLineId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/InvoicingService/Invoices/{invoiceId}/Lines/{invoiceLineId}/Taxes/Count")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/InvoicingService/Invoices/{invoiceId}/Lines/{invoiceLineId}/Taxes/Count");


    // Path Params
    long sizeOfPathParams_invoiceId = strlen(invoiceId)+3 + strlen(invoiceLineId)+3 + strlen("{ invoiceId }");
    if(invoiceId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceId = malloc(sizeOfPathParams_invoiceId);
    sprintf(localVarToReplace_invoiceId, "{%s}", "invoiceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceId, invoiceId);
    if(invoiceId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceId = malloc(sizeOfPathParams_invoiceId);
    sprintf(localVarToReplace_invoiceId, "{%s}", "invoiceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceId, invoiceId);

    // Path Params
    long sizeOfPathParams_invoiceLineId = strlen(invoiceId)+3 + strlen(invoiceLineId)+3 + strlen("{ invoiceLineId }");
    if(invoiceLineId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceLineId = malloc(sizeOfPathParams_invoiceLineId);
    sprintf(localVarToReplace_invoiceLineId, "{%s}", "invoiceLineId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceLineId, invoiceLineId);
    if(invoiceLineId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceLineId = malloc(sizeOfPathParams_invoiceLineId);
    sprintf(localVarToReplace_invoiceLineId, "{%s}", "invoiceLineId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceLineId, invoiceLineId);



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
    cJSON *InvoicesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    int32_envelope_t *elementToReturn = int32_envelope_parseFromJSON(InvoicesAPIlocalVarJSON);
    cJSON_Delete(InvoicesAPIlocalVarJSON);
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
    free(localVarToReplace_invoiceId);
    free(localVarToReplace_invoiceLineId);
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

// Get invoice lines.
//
// Retrieves the invoice lines for the specified invoice.
//
invoice_line_dto_list_envelope_t*
InvoicesAPI_getInvoiceLines(apiClient_t *apiClient, char *tenantId, char *invoiceId, char *itemId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/InvoicingService/Invoices/{invoiceId}/Lines")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/InvoicingService/Invoices/{invoiceId}/Lines");


    // Path Params
    long sizeOfPathParams_invoiceId = strlen(invoiceId)+3 + strlen("{ invoiceId }");
    if(invoiceId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceId = malloc(sizeOfPathParams_invoiceId);
    sprintf(localVarToReplace_invoiceId, "{%s}", "invoiceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceId, invoiceId);
    if(invoiceId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceId = malloc(sizeOfPathParams_invoiceId);
    sprintf(localVarToReplace_invoiceId, "{%s}", "invoiceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceId, invoiceId);



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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *InvoicesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    invoice_line_dto_list_envelope_t *elementToReturn = invoice_line_dto_list_envelope_parseFromJSON(InvoicesAPIlocalVarJSON);
    cJSON_Delete(InvoicesAPIlocalVarJSON);
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
    free(localVarToReplace_invoiceId);
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

// Get the count of invoice lines.
//
// Retrieves the total count of invoice lines for the specified invoice.
//
int32_envelope_t*
InvoicesAPI_getInvoiceLinesCount(apiClient_t *apiClient, char *tenantId, char *invoiceId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/InvoicingService/Invoices/{invoiceId}/Lines/Count")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/InvoicingService/Invoices/{invoiceId}/Lines/Count");


    // Path Params
    long sizeOfPathParams_invoiceId = strlen(invoiceId)+3 + strlen("{ invoiceId }");
    if(invoiceId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceId = malloc(sizeOfPathParams_invoiceId);
    sprintf(localVarToReplace_invoiceId, "{%s}", "invoiceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceId, invoiceId);
    if(invoiceId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceId = malloc(sizeOfPathParams_invoiceId);
    sprintf(localVarToReplace_invoiceId, "{%s}", "invoiceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceId, invoiceId);



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
    cJSON *InvoicesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    int32_envelope_t *elementToReturn = int32_envelope_parseFromJSON(InvoicesAPIlocalVarJSON);
    cJSON_Delete(InvoicesAPIlocalVarJSON);
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
    free(localVarToReplace_invoiceId);
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

// Get payments for an invoice.
//
// Retrieves the list of payments related to the specified invoice.
//
payment_dto_i_read_only_list_envelope_t*
InvoicesAPI_getInvoicePayments(apiClient_t *apiClient, char *invoiceId)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/InvoicingService/Invoices/{invoiceId}/Payments")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/InvoicingService/Invoices/{invoiceId}/Payments");


    // Path Params
    long sizeOfPathParams_invoiceId = strlen(invoiceId)+3 + strlen("{ invoiceId }");
    if(invoiceId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceId = malloc(sizeOfPathParams_invoiceId);
    sprintf(localVarToReplace_invoiceId, "{%s}", "invoiceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceId, invoiceId);
    if(invoiceId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceId = malloc(sizeOfPathParams_invoiceId);
    sprintf(localVarToReplace_invoiceId, "{%s}", "invoiceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceId, invoiceId);


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
    cJSON *InvoicesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    payment_dto_i_read_only_list_envelope_t *elementToReturn = payment_dto_i_read_only_list_envelope_parseFromJSON(InvoicesAPIlocalVarJSON);
    cJSON_Delete(InvoicesAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_invoiceId);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get the count of payments for an invoice.
//
// Retrieves the total count of payments for the specified invoice.
//
int32_envelope_t*
InvoicesAPI_getInvoicePaymentsCount(apiClient_t *apiClient, char *invoiceId)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/InvoicingService/Invoices/{invoiceId}/Payments/Count")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/InvoicingService/Invoices/{invoiceId}/Payments/Count");


    // Path Params
    long sizeOfPathParams_invoiceId = strlen(invoiceId)+3 + strlen("{ invoiceId }");
    if(invoiceId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceId = malloc(sizeOfPathParams_invoiceId);
    sprintf(localVarToReplace_invoiceId, "{%s}", "invoiceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceId, invoiceId);
    if(invoiceId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceId = malloc(sizeOfPathParams_invoiceId);
    sprintf(localVarToReplace_invoiceId, "{%s}", "invoiceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceId, invoiceId);


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
    cJSON *InvoicesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    int32_envelope_t *elementToReturn = int32_envelope_parseFromJSON(InvoicesAPIlocalVarJSON);
    cJSON_Delete(InvoicesAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_invoiceId);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get an invoice reference by ID.
//
// Retrieves the reference details for the specified invoice reference ID.
//
invoice_reference_dto_envelope_t*
InvoicesAPI_getInvoiceReference(apiClient_t *apiClient, char *tenantId, char *invoiceId, char *invoiceReferenceId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/InvoicingService/Invoices/{invoiceId}/References/{invoiceReferenceId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/InvoicingService/Invoices/{invoiceId}/References/{invoiceReferenceId}");


    // Path Params
    long sizeOfPathParams_invoiceId = strlen(invoiceId)+3 + strlen(invoiceReferenceId)+3 + strlen("{ invoiceId }");
    if(invoiceId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceId = malloc(sizeOfPathParams_invoiceId);
    sprintf(localVarToReplace_invoiceId, "{%s}", "invoiceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceId, invoiceId);
    if(invoiceId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceId = malloc(sizeOfPathParams_invoiceId);
    sprintf(localVarToReplace_invoiceId, "{%s}", "invoiceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceId, invoiceId);

    // Path Params
    long sizeOfPathParams_invoiceReferenceId = strlen(invoiceId)+3 + strlen(invoiceReferenceId)+3 + strlen("{ invoiceReferenceId }");
    if(invoiceReferenceId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceReferenceId = malloc(sizeOfPathParams_invoiceReferenceId);
    sprintf(localVarToReplace_invoiceReferenceId, "{%s}", "invoiceReferenceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceReferenceId, invoiceReferenceId);
    if(invoiceReferenceId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceReferenceId = malloc(sizeOfPathParams_invoiceReferenceId);
    sprintf(localVarToReplace_invoiceReferenceId, "{%s}", "invoiceReferenceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceReferenceId, invoiceReferenceId);



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
    cJSON *InvoicesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    invoice_reference_dto_envelope_t *elementToReturn = invoice_reference_dto_envelope_parseFromJSON(InvoicesAPIlocalVarJSON);
    cJSON_Delete(InvoicesAPIlocalVarJSON);
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
    free(localVarToReplace_invoiceId);
    free(localVarToReplace_invoiceReferenceId);
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

// Get invoice references.
//
// Retrieves the references for the specified invoice.
//
invoice_reference_dto_i_read_only_list_envelope_t*
InvoicesAPI_getInvoiceReferences(apiClient_t *apiClient, char *tenantId, char *invoiceId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/InvoicingService/Invoices/{invoiceId}/References")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/InvoicingService/Invoices/{invoiceId}/References");


    // Path Params
    long sizeOfPathParams_invoiceId = strlen(invoiceId)+3 + strlen("{ invoiceId }");
    if(invoiceId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceId = malloc(sizeOfPathParams_invoiceId);
    sprintf(localVarToReplace_invoiceId, "{%s}", "invoiceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceId, invoiceId);
    if(invoiceId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceId = malloc(sizeOfPathParams_invoiceId);
    sprintf(localVarToReplace_invoiceId, "{%s}", "invoiceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceId, invoiceId);



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
    cJSON *InvoicesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    invoice_reference_dto_i_read_only_list_envelope_t *elementToReturn = invoice_reference_dto_i_read_only_list_envelope_parseFromJSON(InvoicesAPIlocalVarJSON);
    cJSON_Delete(InvoicesAPIlocalVarJSON);
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
    free(localVarToReplace_invoiceId);
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

// Get the count of invoice references.
//
// Retrieves the total count of references for the specified invoice.
//
int32_envelope_t*
InvoicesAPI_getInvoiceReferencesCount(apiClient_t *apiClient, char *tenantId, char *invoiceId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/InvoicingService/Invoices/{invoiceId}/References/Count")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/InvoicingService/Invoices/{invoiceId}/References/Count");


    // Path Params
    long sizeOfPathParams_invoiceId = strlen(invoiceId)+3 + strlen("{ invoiceId }");
    if(invoiceId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceId = malloc(sizeOfPathParams_invoiceId);
    sprintf(localVarToReplace_invoiceId, "{%s}", "invoiceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceId, invoiceId);
    if(invoiceId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceId = malloc(sizeOfPathParams_invoiceId);
    sprintf(localVarToReplace_invoiceId, "{%s}", "invoiceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceId, invoiceId);



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
    cJSON *InvoicesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    int32_envelope_t *elementToReturn = int32_envelope_parseFromJSON(InvoicesAPIlocalVarJSON);
    cJSON_Delete(InvoicesAPIlocalVarJSON);
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
    free(localVarToReplace_invoiceId);
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

// Get a list of invoices.
//
// Retrieves a list of invoices for the specified tenant.
//
invoice_dto_list_envelope_t*
InvoicesAPI_getInvoices(apiClient_t *apiClient, char *tenantId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/InvoicingService/Invoices")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/InvoicingService/Invoices");




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
    cJSON *InvoicesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    invoice_dto_list_envelope_t *elementToReturn = invoice_dto_list_envelope_parseFromJSON(InvoicesAPIlocalVarJSON);
    cJSON_Delete(InvoicesAPIlocalVarJSON);
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

// Get the count of invoices.
//
// Retrieves the total count of invoices for the specified tenant.
//
int32_envelope_t*
InvoicesAPI_getInvoicesCount(apiClient_t *apiClient, char *tenantId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/InvoicingService/Invoices/Count")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/InvoicingService/Invoices/Count");




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
    cJSON *InvoicesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    int32_envelope_t *elementToReturn = int32_envelope_parseFromJSON(InvoicesAPIlocalVarJSON);
    cJSON_Delete(InvoicesAPIlocalVarJSON);
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
InvoicesAPI_previewInvoiceEmail(apiClient_t *apiClient, char *invoiceId, char *tenantId, email_dispatch_request_t *email_dispatch_request)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = NULL;
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/InvoicingService/Invoices/{invoiceId}/Emails/Preview")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/InvoicingService/Invoices/{invoiceId}/Emails/Preview");


    // Path Params
    long sizeOfPathParams_invoiceId = strlen(invoiceId)+3 + strlen("{ invoiceId }");
    if(invoiceId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceId = malloc(sizeOfPathParams_invoiceId);
    sprintf(localVarToReplace_invoiceId, "{%s}", "invoiceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceId, invoiceId);
    if(invoiceId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceId = malloc(sizeOfPathParams_invoiceId);
    sprintf(localVarToReplace_invoiceId, "{%s}", "invoiceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceId, invoiceId);



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
    free(localVarToReplace_invoiceId);
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

// Send an invoice transactional email to recipients.
//
// This action is only available for users with the 'send_email' permission.
//
envelope_t*
InvoicesAPI_sendInvoiceEmail(apiClient_t *apiClient, char *tenantId, char *invoiceId, email_dispatch_request_t *email_dispatch_request)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/InvoicingService/Invoices/{invoiceId}/Emails/Send")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/InvoicingService/Invoices/{invoiceId}/Emails/Send");


    // Path Params
    long sizeOfPathParams_invoiceId = strlen(invoiceId)+3 + strlen("{ invoiceId }");
    if(invoiceId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceId = malloc(sizeOfPathParams_invoiceId);
    sprintf(localVarToReplace_invoiceId, "{%s}", "invoiceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceId, invoiceId);
    if(invoiceId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceId = malloc(sizeOfPathParams_invoiceId);
    sprintf(localVarToReplace_invoiceId, "{%s}", "invoiceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceId, invoiceId);



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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *InvoicesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    envelope_t *elementToReturn = envelope_parseFromJSON(InvoicesAPIlocalVarJSON);
    cJSON_Delete(InvoicesAPIlocalVarJSON);
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
    free(localVarToReplace_invoiceId);
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

// Update an invoice.
//
// Updates the specified invoice for the tenant.
//
empty_envelope_t*
InvoicesAPI_updateInvoice(apiClient_t *apiClient, char *tenantId, char *invoiceId, invoice_update_dto_t *invoice_update_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/InvoicingService/Invoices/{invoiceId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/InvoicingService/Invoices/{invoiceId}");


    // Path Params
    long sizeOfPathParams_invoiceId = strlen(invoiceId)+3 + strlen("{ invoiceId }");
    if(invoiceId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceId = malloc(sizeOfPathParams_invoiceId);
    sprintf(localVarToReplace_invoiceId, "{%s}", "invoiceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceId, invoiceId);
    if(invoiceId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceId = malloc(sizeOfPathParams_invoiceId);
    sprintf(localVarToReplace_invoiceId, "{%s}", "invoiceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceId, invoiceId);



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
    cJSON *localVarSingleItemJSON_invoice_update_dto = NULL;
    if (invoice_update_dto != NULL)
    {
        //string
        localVarSingleItemJSON_invoice_update_dto = invoice_update_dto_convertToJSON(invoice_update_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_invoice_update_dto);
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
    cJSON *InvoicesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(InvoicesAPIlocalVarJSON);
    cJSON_Delete(InvoicesAPIlocalVarJSON);
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
    free(localVarToReplace_invoiceId);
    if (localVarSingleItemJSON_invoice_update_dto) {
        cJSON_Delete(localVarSingleItemJSON_invoice_update_dto);
        localVarSingleItemJSON_invoice_update_dto = NULL;
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

// Update an invoice adjustment.
//
// Updates the specified adjustment for the invoice.
//
empty_envelope_t*
InvoicesAPI_updateInvoiceAdjustment(apiClient_t *apiClient, char *tenantId, char *invoiceId, char *invoiceAdjustmentId, invoice_adjustment_update_dto_t *invoice_adjustment_update_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/InvoicingService/Invoices/{invoiceId}/Adjustments/{invoiceAdjustmentId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/InvoicingService/Invoices/{invoiceId}/Adjustments/{invoiceAdjustmentId}");


    // Path Params
    long sizeOfPathParams_invoiceId = strlen(invoiceId)+3 + strlen(invoiceAdjustmentId)+3 + strlen("{ invoiceId }");
    if(invoiceId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceId = malloc(sizeOfPathParams_invoiceId);
    sprintf(localVarToReplace_invoiceId, "{%s}", "invoiceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceId, invoiceId);
    if(invoiceId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceId = malloc(sizeOfPathParams_invoiceId);
    sprintf(localVarToReplace_invoiceId, "{%s}", "invoiceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceId, invoiceId);

    // Path Params
    long sizeOfPathParams_invoiceAdjustmentId = strlen(invoiceId)+3 + strlen(invoiceAdjustmentId)+3 + strlen("{ invoiceAdjustmentId }");
    if(invoiceAdjustmentId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceAdjustmentId = malloc(sizeOfPathParams_invoiceAdjustmentId);
    sprintf(localVarToReplace_invoiceAdjustmentId, "{%s}", "invoiceAdjustmentId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceAdjustmentId, invoiceAdjustmentId);
    if(invoiceAdjustmentId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceAdjustmentId = malloc(sizeOfPathParams_invoiceAdjustmentId);
    sprintf(localVarToReplace_invoiceAdjustmentId, "{%s}", "invoiceAdjustmentId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceAdjustmentId, invoiceAdjustmentId);



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
    cJSON *localVarSingleItemJSON_invoice_adjustment_update_dto = NULL;
    if (invoice_adjustment_update_dto != NULL)
    {
        //string
        localVarSingleItemJSON_invoice_adjustment_update_dto = invoice_adjustment_update_dto_convertToJSON(invoice_adjustment_update_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_invoice_adjustment_update_dto);
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
    cJSON *InvoicesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(InvoicesAPIlocalVarJSON);
    cJSON_Delete(InvoicesAPIlocalVarJSON);
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
    free(localVarToReplace_invoiceId);
    free(localVarToReplace_invoiceAdjustmentId);
    if (localVarSingleItemJSON_invoice_adjustment_update_dto) {
        cJSON_Delete(localVarSingleItemJSON_invoice_adjustment_update_dto);
        localVarSingleItemJSON_invoice_adjustment_update_dto = NULL;
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

// Update an invoice line.
//
// Updates the specified invoice line.
//
invoice_line_dto_envelope_t*
InvoicesAPI_updateInvoiceLine(apiClient_t *apiClient, char *tenantId, char *invoiceId, char *invoiceLineId, invoice_line_update_dto_t *invoice_line_update_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/InvoicingService/Invoices/{invoiceId}/Lines/{invoiceLineId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/InvoicingService/Invoices/{invoiceId}/Lines/{invoiceLineId}");


    // Path Params
    long sizeOfPathParams_invoiceId = strlen(invoiceId)+3 + strlen(invoiceLineId)+3 + strlen("{ invoiceId }");
    if(invoiceId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceId = malloc(sizeOfPathParams_invoiceId);
    sprintf(localVarToReplace_invoiceId, "{%s}", "invoiceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceId, invoiceId);
    if(invoiceId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceId = malloc(sizeOfPathParams_invoiceId);
    sprintf(localVarToReplace_invoiceId, "{%s}", "invoiceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceId, invoiceId);

    // Path Params
    long sizeOfPathParams_invoiceLineId = strlen(invoiceId)+3 + strlen(invoiceLineId)+3 + strlen("{ invoiceLineId }");
    if(invoiceLineId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceLineId = malloc(sizeOfPathParams_invoiceLineId);
    sprintf(localVarToReplace_invoiceLineId, "{%s}", "invoiceLineId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceLineId, invoiceLineId);
    if(invoiceLineId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceLineId = malloc(sizeOfPathParams_invoiceLineId);
    sprintf(localVarToReplace_invoiceLineId, "{%s}", "invoiceLineId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceLineId, invoiceLineId);



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
    cJSON *localVarSingleItemJSON_invoice_line_update_dto = NULL;
    if (invoice_line_update_dto != NULL)
    {
        //string
        localVarSingleItemJSON_invoice_line_update_dto = invoice_line_update_dto_convertToJSON(invoice_line_update_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_invoice_line_update_dto);
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
    cJSON *InvoicesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    invoice_line_dto_envelope_t *elementToReturn = invoice_line_dto_envelope_parseFromJSON(InvoicesAPIlocalVarJSON);
    cJSON_Delete(InvoicesAPIlocalVarJSON);
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
    free(localVarToReplace_invoiceId);
    free(localVarToReplace_invoiceLineId);
    if (localVarSingleItemJSON_invoice_line_update_dto) {
        cJSON_Delete(localVarSingleItemJSON_invoice_line_update_dto);
        localVarSingleItemJSON_invoice_line_update_dto = NULL;
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

// Update a tax for an invoice line.
//
// Updates the specified tax entry for the invoice line.
//
empty_envelope_t*
InvoicesAPI_updateInvoiceLineTax(apiClient_t *apiClient, char *tenantId, char *invoiceId, char *invoiceLineId, char *invoiceLineTaxId, invoice_line_applied_tax_update_dto_t *invoice_line_applied_tax_update_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/InvoicingService/Invoices/{invoiceId}/Lines/{invoiceLineId}/Taxes/{invoiceLineTaxId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/InvoicingService/Invoices/{invoiceId}/Lines/{invoiceLineId}/Taxes/{invoiceLineTaxId}");


    // Path Params
    long sizeOfPathParams_invoiceId = strlen(invoiceId)+3 + strlen(invoiceLineId)+3 + strlen(invoiceLineTaxId)+3 + strlen("{ invoiceId }");
    if(invoiceId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceId = malloc(sizeOfPathParams_invoiceId);
    sprintf(localVarToReplace_invoiceId, "{%s}", "invoiceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceId, invoiceId);
    if(invoiceId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceId = malloc(sizeOfPathParams_invoiceId);
    sprintf(localVarToReplace_invoiceId, "{%s}", "invoiceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceId, invoiceId);

    // Path Params
    long sizeOfPathParams_invoiceLineId = strlen(invoiceId)+3 + strlen(invoiceLineId)+3 + strlen(invoiceLineTaxId)+3 + strlen("{ invoiceLineId }");
    if(invoiceLineId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceLineId = malloc(sizeOfPathParams_invoiceLineId);
    sprintf(localVarToReplace_invoiceLineId, "{%s}", "invoiceLineId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceLineId, invoiceLineId);
    if(invoiceLineId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceLineId = malloc(sizeOfPathParams_invoiceLineId);
    sprintf(localVarToReplace_invoiceLineId, "{%s}", "invoiceLineId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceLineId, invoiceLineId);

    // Path Params
    long sizeOfPathParams_invoiceLineTaxId = strlen(invoiceId)+3 + strlen(invoiceLineId)+3 + strlen(invoiceLineTaxId)+3 + strlen("{ invoiceLineTaxId }");
    if(invoiceLineTaxId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceLineTaxId = malloc(sizeOfPathParams_invoiceLineTaxId);
    sprintf(localVarToReplace_invoiceLineTaxId, "{%s}", "invoiceLineTaxId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceLineTaxId, invoiceLineTaxId);
    if(invoiceLineTaxId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceLineTaxId = malloc(sizeOfPathParams_invoiceLineTaxId);
    sprintf(localVarToReplace_invoiceLineTaxId, "{%s}", "invoiceLineTaxId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceLineTaxId, invoiceLineTaxId);



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
    cJSON *localVarSingleItemJSON_invoice_line_applied_tax_update_dto = NULL;
    if (invoice_line_applied_tax_update_dto != NULL)
    {
        //string
        localVarSingleItemJSON_invoice_line_applied_tax_update_dto = invoice_line_applied_tax_update_dto_convertToJSON(invoice_line_applied_tax_update_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_invoice_line_applied_tax_update_dto);
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
    cJSON *InvoicesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(InvoicesAPIlocalVarJSON);
    cJSON_Delete(InvoicesAPIlocalVarJSON);
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
    free(localVarToReplace_invoiceId);
    free(localVarToReplace_invoiceLineId);
    free(localVarToReplace_invoiceLineTaxId);
    if (localVarSingleItemJSON_invoice_line_applied_tax_update_dto) {
        cJSON_Delete(localVarSingleItemJSON_invoice_line_applied_tax_update_dto);
        localVarSingleItemJSON_invoice_line_applied_tax_update_dto = NULL;
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

// Update an invoice reference.
//
// Updates the specified reference for the invoice.
//
empty_envelope_t*
InvoicesAPI_updateInvoiceReference(apiClient_t *apiClient, char *tenantId, char *invoiceId, char *invoiceReferenceId, invoice_reference_update_dto_t *invoice_reference_update_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/InvoicingService/Invoices/{invoiceId}/References/{invoiceReferenceId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/InvoicingService/Invoices/{invoiceId}/References/{invoiceReferenceId}");


    // Path Params
    long sizeOfPathParams_invoiceId = strlen(invoiceId)+3 + strlen(invoiceReferenceId)+3 + strlen("{ invoiceId }");
    if(invoiceId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceId = malloc(sizeOfPathParams_invoiceId);
    sprintf(localVarToReplace_invoiceId, "{%s}", "invoiceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceId, invoiceId);
    if(invoiceId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceId = malloc(sizeOfPathParams_invoiceId);
    sprintf(localVarToReplace_invoiceId, "{%s}", "invoiceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceId, invoiceId);

    // Path Params
    long sizeOfPathParams_invoiceReferenceId = strlen(invoiceId)+3 + strlen(invoiceReferenceId)+3 + strlen("{ invoiceReferenceId }");
    if(invoiceReferenceId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceReferenceId = malloc(sizeOfPathParams_invoiceReferenceId);
    sprintf(localVarToReplace_invoiceReferenceId, "{%s}", "invoiceReferenceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceReferenceId, invoiceReferenceId);
    if(invoiceReferenceId == NULL) {
        goto end;
    }
    char* localVarToReplace_invoiceReferenceId = malloc(sizeOfPathParams_invoiceReferenceId);
    sprintf(localVarToReplace_invoiceReferenceId, "{%s}", "invoiceReferenceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_invoiceReferenceId, invoiceReferenceId);



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
    cJSON *localVarSingleItemJSON_invoice_reference_update_dto = NULL;
    if (invoice_reference_update_dto != NULL)
    {
        //string
        localVarSingleItemJSON_invoice_reference_update_dto = invoice_reference_update_dto_convertToJSON(invoice_reference_update_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_invoice_reference_update_dto);
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
    cJSON *InvoicesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(InvoicesAPIlocalVarJSON);
    cJSON_Delete(InvoicesAPIlocalVarJSON);
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
    free(localVarToReplace_invoiceId);
    free(localVarToReplace_invoiceReferenceId);
    if (localVarSingleItemJSON_invoice_reference_update_dto) {
        cJSON_Delete(localVarSingleItemJSON_invoice_reference_update_dto);
        localVarSingleItemJSON_invoice_reference_update_dto = NULL;
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

