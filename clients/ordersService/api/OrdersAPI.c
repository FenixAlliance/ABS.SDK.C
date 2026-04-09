#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "OrdersAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Calculates totals for an order.
//
// Performs calculation of totals and taxes for the specified order.
//
empty_envelope_t*
OrdersAPI_calculateOrder(apiClient_t *apiClient, char *tenantId, char *orderId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/OrdersService/Orders/{orderId}/Calculate")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/OrdersService/Orders/{orderId}/Calculate");


    // Path Params
    long sizeOfPathParams_orderId = strlen(orderId)+3 + strlen("{ orderId }");
    if(orderId == NULL) {
        goto end;
    }
    char* localVarToReplace_orderId = malloc(sizeOfPathParams_orderId);
    sprintf(localVarToReplace_orderId, "{%s}", "orderId");

    localVarPath = strReplace(localVarPath, localVarToReplace_orderId, orderId);
    if(orderId == NULL) {
        goto end;
    }
    char* localVarToReplace_orderId = malloc(sizeOfPathParams_orderId);
    sprintf(localVarToReplace_orderId, "{%s}", "orderId");

    localVarPath = strReplace(localVarPath, localVarToReplace_orderId, orderId);



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
    cJSON *OrdersAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(OrdersAPIlocalVarJSON);
    cJSON_Delete(OrdersAPIlocalVarJSON);
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
    free(localVarToReplace_orderId);
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

// Calculates totals for an order line.
//
// Performs calculation of totals and taxes for the specified order line.
//
empty_envelope_t*
OrdersAPI_calculateOrderLine(apiClient_t *apiClient, char *tenantId, char *orderId, char *orderLineId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/OrdersService/Orders/{orderId}/Lines/{orderLineId}/Calculate")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/OrdersService/Orders/{orderId}/Lines/{orderLineId}/Calculate");


    // Path Params
    long sizeOfPathParams_orderId = strlen(orderId)+3 + strlen(orderLineId)+3 + strlen("{ orderId }");
    if(orderId == NULL) {
        goto end;
    }
    char* localVarToReplace_orderId = malloc(sizeOfPathParams_orderId);
    sprintf(localVarToReplace_orderId, "{%s}", "orderId");

    localVarPath = strReplace(localVarPath, localVarToReplace_orderId, orderId);
    if(orderId == NULL) {
        goto end;
    }
    char* localVarToReplace_orderId = malloc(sizeOfPathParams_orderId);
    sprintf(localVarToReplace_orderId, "{%s}", "orderId");

    localVarPath = strReplace(localVarPath, localVarToReplace_orderId, orderId);

    // Path Params
    long sizeOfPathParams_orderLineId = strlen(orderId)+3 + strlen(orderLineId)+3 + strlen("{ orderLineId }");
    if(orderLineId == NULL) {
        goto end;
    }
    char* localVarToReplace_orderLineId = malloc(sizeOfPathParams_orderLineId);
    sprintf(localVarToReplace_orderLineId, "{%s}", "orderLineId");

    localVarPath = strReplace(localVarPath, localVarToReplace_orderLineId, orderLineId);
    if(orderLineId == NULL) {
        goto end;
    }
    char* localVarToReplace_orderLineId = malloc(sizeOfPathParams_orderLineId);
    sprintf(localVarToReplace_orderLineId, "{%s}", "orderLineId");

    localVarPath = strReplace(localVarPath, localVarToReplace_orderLineId, orderLineId);



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
    cJSON *OrdersAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(OrdersAPIlocalVarJSON);
    cJSON_Delete(OrdersAPIlocalVarJSON);
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
    free(localVarToReplace_orderId);
    free(localVarToReplace_orderLineId);
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

// Creates a new order.
//
// Creates a new order for the specified tenant.
//
empty_envelope_t*
OrdersAPI_createOrder(apiClient_t *apiClient, char *tenantId, order_create_dto_t *order_create_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/OrdersService/Orders")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/OrdersService/Orders");




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
    cJSON *localVarSingleItemJSON_order_create_dto = NULL;
    if (order_create_dto != NULL)
    {
        //string
        localVarSingleItemJSON_order_create_dto = order_create_dto_convertToJSON(order_create_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_order_create_dto);
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
    cJSON *OrdersAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(OrdersAPIlocalVarJSON);
    cJSON_Delete(OrdersAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_order_create_dto) {
        cJSON_Delete(localVarSingleItemJSON_order_create_dto);
        localVarSingleItemJSON_order_create_dto = NULL;
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

// Creates a new order line.
//
// Creates a new line (item) for the specified order.
//
empty_envelope_t*
OrdersAPI_createOrderLine(apiClient_t *apiClient, char *tenantId, char *orderId, order_line_create_dto_t *order_line_create_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/OrdersService/Orders/{orderId}/Lines")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/OrdersService/Orders/{orderId}/Lines");


    // Path Params
    long sizeOfPathParams_orderId = strlen(orderId)+3 + strlen("{ orderId }");
    if(orderId == NULL) {
        goto end;
    }
    char* localVarToReplace_orderId = malloc(sizeOfPathParams_orderId);
    sprintf(localVarToReplace_orderId, "{%s}", "orderId");

    localVarPath = strReplace(localVarPath, localVarToReplace_orderId, orderId);
    if(orderId == NULL) {
        goto end;
    }
    char* localVarToReplace_orderId = malloc(sizeOfPathParams_orderId);
    sprintf(localVarToReplace_orderId, "{%s}", "orderId");

    localVarPath = strReplace(localVarPath, localVarToReplace_orderId, orderId);



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
    cJSON *localVarSingleItemJSON_order_line_create_dto = NULL;
    if (order_line_create_dto != NULL)
    {
        //string
        localVarSingleItemJSON_order_line_create_dto = order_line_create_dto_convertToJSON(order_line_create_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_order_line_create_dto);
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
    cJSON *OrdersAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(OrdersAPIlocalVarJSON);
    cJSON_Delete(OrdersAPIlocalVarJSON);
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
    free(localVarToReplace_orderId);
    if (localVarSingleItemJSON_order_line_create_dto) {
        cJSON_Delete(localVarSingleItemJSON_order_line_create_dto);
        localVarSingleItemJSON_order_line_create_dto = NULL;
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

// Deletes an order.
//
// Deletes the specified order.
//
empty_envelope_t*
OrdersAPI_deleteOrder(apiClient_t *apiClient, char *tenantId, char *orderId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/OrdersService/Orders/{orderId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/OrdersService/Orders/{orderId}");


    // Path Params
    long sizeOfPathParams_orderId = strlen(orderId)+3 + strlen("{ orderId }");
    if(orderId == NULL) {
        goto end;
    }
    char* localVarToReplace_orderId = malloc(sizeOfPathParams_orderId);
    sprintf(localVarToReplace_orderId, "{%s}", "orderId");

    localVarPath = strReplace(localVarPath, localVarToReplace_orderId, orderId);
    if(orderId == NULL) {
        goto end;
    }
    char* localVarToReplace_orderId = malloc(sizeOfPathParams_orderId);
    sprintf(localVarToReplace_orderId, "{%s}", "orderId");

    localVarPath = strReplace(localVarPath, localVarToReplace_orderId, orderId);



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
    cJSON *OrdersAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(OrdersAPIlocalVarJSON);
    cJSON_Delete(OrdersAPIlocalVarJSON);
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
    free(localVarToReplace_orderId);
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

// Deletes an order line.
//
// Deletes the specified order line.
//
empty_envelope_t*
OrdersAPI_deleteOrderLine(apiClient_t *apiClient, char *tenantId, char *orderId, char *orderLineId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/OrdersService/Orders/{orderId}/Lines/{orderLineId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/OrdersService/Orders/{orderId}/Lines/{orderLineId}");


    // Path Params
    long sizeOfPathParams_orderId = strlen(orderId)+3 + strlen(orderLineId)+3 + strlen("{ orderId }");
    if(orderId == NULL) {
        goto end;
    }
    char* localVarToReplace_orderId = malloc(sizeOfPathParams_orderId);
    sprintf(localVarToReplace_orderId, "{%s}", "orderId");

    localVarPath = strReplace(localVarPath, localVarToReplace_orderId, orderId);
    if(orderId == NULL) {
        goto end;
    }
    char* localVarToReplace_orderId = malloc(sizeOfPathParams_orderId);
    sprintf(localVarToReplace_orderId, "{%s}", "orderId");

    localVarPath = strReplace(localVarPath, localVarToReplace_orderId, orderId);

    // Path Params
    long sizeOfPathParams_orderLineId = strlen(orderId)+3 + strlen(orderLineId)+3 + strlen("{ orderLineId }");
    if(orderLineId == NULL) {
        goto end;
    }
    char* localVarToReplace_orderLineId = malloc(sizeOfPathParams_orderLineId);
    sprintf(localVarToReplace_orderLineId, "{%s}", "orderLineId");

    localVarPath = strReplace(localVarPath, localVarToReplace_orderLineId, orderLineId);
    if(orderLineId == NULL) {
        goto end;
    }
    char* localVarToReplace_orderLineId = malloc(sizeOfPathParams_orderLineId);
    sprintf(localVarToReplace_orderLineId, "{%s}", "orderLineId");

    localVarPath = strReplace(localVarPath, localVarToReplace_orderLineId, orderLineId);



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
    cJSON *OrdersAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(OrdersAPIlocalVarJSON);
    cJSON_Delete(OrdersAPIlocalVarJSON);
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
    free(localVarToReplace_orderId);
    free(localVarToReplace_orderLineId);
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

// Gets a list of extended orders for a tenant.
//
// Retrieves a list of extended order details for the specified tenant.
//
extended_order_dto_list_envelope_t*
OrdersAPI_getExtendedOrders(apiClient_t *apiClient, char *tenantId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/OrdersService/Orders/Extended")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/OrdersService/Orders/Extended");




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
    cJSON *OrdersAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    extended_order_dto_list_envelope_t *elementToReturn = extended_order_dto_list_envelope_parseFromJSON(OrdersAPIlocalVarJSON);
    cJSON_Delete(OrdersAPIlocalVarJSON);
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

// Gets a specific order by ID.
//
// Retrieves the details of a specific order by its ID.
//
order_dto_envelope_t*
OrdersAPI_getOrder(apiClient_t *apiClient, char *tenantId, char *orderId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/OrdersService/Orders/{orderId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/OrdersService/Orders/{orderId}");


    // Path Params
    long sizeOfPathParams_orderId = strlen(orderId)+3 + strlen("{ orderId }");
    if(orderId == NULL) {
        goto end;
    }
    char* localVarToReplace_orderId = malloc(sizeOfPathParams_orderId);
    sprintf(localVarToReplace_orderId, "{%s}", "orderId");

    localVarPath = strReplace(localVarPath, localVarToReplace_orderId, orderId);
    if(orderId == NULL) {
        goto end;
    }
    char* localVarToReplace_orderId = malloc(sizeOfPathParams_orderId);
    sprintf(localVarToReplace_orderId, "{%s}", "orderId");

    localVarPath = strReplace(localVarPath, localVarToReplace_orderId, orderId);



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
    cJSON *OrdersAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    order_dto_envelope_t *elementToReturn = order_dto_envelope_parseFromJSON(OrdersAPIlocalVarJSON);
    cJSON_Delete(OrdersAPIlocalVarJSON);
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
    free(localVarToReplace_orderId);
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

// Gets a specific order line.
//
// Retrieves the details of a specific order line by its ID.
//
order_line_dto_envelope_t*
OrdersAPI_getOrderLine(apiClient_t *apiClient, char *tenantId, char *orderId, char *orderLineId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/OrdersService/Orders/{orderId}/Lines/{orderLineId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/OrdersService/Orders/{orderId}/Lines/{orderLineId}");


    // Path Params
    long sizeOfPathParams_orderId = strlen(orderId)+3 + strlen(orderLineId)+3 + strlen("{ orderId }");
    if(orderId == NULL) {
        goto end;
    }
    char* localVarToReplace_orderId = malloc(sizeOfPathParams_orderId);
    sprintf(localVarToReplace_orderId, "{%s}", "orderId");

    localVarPath = strReplace(localVarPath, localVarToReplace_orderId, orderId);
    if(orderId == NULL) {
        goto end;
    }
    char* localVarToReplace_orderId = malloc(sizeOfPathParams_orderId);
    sprintf(localVarToReplace_orderId, "{%s}", "orderId");

    localVarPath = strReplace(localVarPath, localVarToReplace_orderId, orderId);

    // Path Params
    long sizeOfPathParams_orderLineId = strlen(orderId)+3 + strlen(orderLineId)+3 + strlen("{ orderLineId }");
    if(orderLineId == NULL) {
        goto end;
    }
    char* localVarToReplace_orderLineId = malloc(sizeOfPathParams_orderLineId);
    sprintf(localVarToReplace_orderLineId, "{%s}", "orderLineId");

    localVarPath = strReplace(localVarPath, localVarToReplace_orderLineId, orderLineId);
    if(orderLineId == NULL) {
        goto end;
    }
    char* localVarToReplace_orderLineId = malloc(sizeOfPathParams_orderLineId);
    sprintf(localVarToReplace_orderLineId, "{%s}", "orderLineId");

    localVarPath = strReplace(localVarPath, localVarToReplace_orderLineId, orderLineId);



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
    cJSON *OrdersAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    order_line_dto_envelope_t *elementToReturn = order_line_dto_envelope_parseFromJSON(OrdersAPIlocalVarJSON);
    cJSON_Delete(OrdersAPIlocalVarJSON);
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
    free(localVarToReplace_orderId);
    free(localVarToReplace_orderLineId);
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

// Gets order lines for an order.
//
// Retrieves the lines (items) for the specified order.
//
order_line_dto_list_envelope_t*
OrdersAPI_getOrderLines(apiClient_t *apiClient, char *tenantId, char *orderId, char *itemId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/OrdersService/Orders/{orderId}/Lines")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/OrdersService/Orders/{orderId}/Lines");


    // Path Params
    long sizeOfPathParams_orderId = strlen(orderId)+3 + strlen("{ orderId }");
    if(orderId == NULL) {
        goto end;
    }
    char* localVarToReplace_orderId = malloc(sizeOfPathParams_orderId);
    sprintf(localVarToReplace_orderId, "{%s}", "orderId");

    localVarPath = strReplace(localVarPath, localVarToReplace_orderId, orderId);
    if(orderId == NULL) {
        goto end;
    }
    char* localVarToReplace_orderId = malloc(sizeOfPathParams_orderId);
    sprintf(localVarToReplace_orderId, "{%s}", "orderId");

    localVarPath = strReplace(localVarPath, localVarToReplace_orderId, orderId);



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
    cJSON *OrdersAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    order_line_dto_list_envelope_t *elementToReturn = order_line_dto_list_envelope_parseFromJSON(OrdersAPIlocalVarJSON);
    cJSON_Delete(OrdersAPIlocalVarJSON);
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
    free(localVarToReplace_orderId);
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

// Gets the count of order lines for an order.
//
// Retrieves the total number of lines for the specified order.
//
int32_envelope_t*
OrdersAPI_getOrderLinesCount(apiClient_t *apiClient, char *tenantId, char *orderId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/OrdersService/Orders/{orderId}/Lines/Count")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/OrdersService/Orders/{orderId}/Lines/Count");


    // Path Params
    long sizeOfPathParams_orderId = strlen(orderId)+3 + strlen("{ orderId }");
    if(orderId == NULL) {
        goto end;
    }
    char* localVarToReplace_orderId = malloc(sizeOfPathParams_orderId);
    sprintf(localVarToReplace_orderId, "{%s}", "orderId");

    localVarPath = strReplace(localVarPath, localVarToReplace_orderId, orderId);
    if(orderId == NULL) {
        goto end;
    }
    char* localVarToReplace_orderId = malloc(sizeOfPathParams_orderId);
    sprintf(localVarToReplace_orderId, "{%s}", "orderId");

    localVarPath = strReplace(localVarPath, localVarToReplace_orderId, orderId);



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
    cJSON *OrdersAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    int32_envelope_t *elementToReturn = int32_envelope_parseFromJSON(OrdersAPIlocalVarJSON);
    cJSON_Delete(OrdersAPIlocalVarJSON);
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
    free(localVarToReplace_orderId);
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

// Gets a list of orders for a tenant.
//
// Retrieves a list of orders for the specified tenant.
//
order_dto_list_envelope_t*
OrdersAPI_getOrders(apiClient_t *apiClient, char *tenantId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/OrdersService/Orders")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/OrdersService/Orders");




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
    cJSON *OrdersAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    order_dto_list_envelope_t *elementToReturn = order_dto_list_envelope_parseFromJSON(OrdersAPIlocalVarJSON);
    cJSON_Delete(OrdersAPIlocalVarJSON);
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

// Gets the count of orders for a tenant.
//
// Retrieves the total number of orders for the specified tenant.
//
int32_envelope_t*
OrdersAPI_getOrdersCount(apiClient_t *apiClient, char *tenantId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/OrdersService/Orders/Count")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/OrdersService/Orders/Count");




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
    cJSON *OrdersAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    int32_envelope_t *elementToReturn = int32_envelope_parseFromJSON(OrdersAPIlocalVarJSON);
    cJSON_Delete(OrdersAPIlocalVarJSON);
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

// Preview the rendered email for an Order.
//
// Previews the rendered email template for the specified order. Only users with the 'send_email' permission are permitted.
//
void
OrdersAPI_previewOrderEmailTemplate(apiClient_t *apiClient, char *orderId, char *tenantId, email_dispatch_request_t *email_dispatch_request)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = NULL;
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/OrdersService/Orders/{orderId}/Emails/Preview")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/OrdersService/Orders/{orderId}/Emails/Preview");


    // Path Params
    long sizeOfPathParams_orderId = strlen(orderId)+3 + strlen("{ orderId }");
    if(orderId == NULL) {
        goto end;
    }
    char* localVarToReplace_orderId = malloc(sizeOfPathParams_orderId);
    sprintf(localVarToReplace_orderId, "{%s}", "orderId");

    localVarPath = strReplace(localVarPath, localVarToReplace_orderId, orderId);
    if(orderId == NULL) {
        goto end;
    }
    char* localVarToReplace_orderId = malloc(sizeOfPathParams_orderId);
    sprintf(localVarToReplace_orderId, "{%s}", "orderId");

    localVarPath = strReplace(localVarPath, localVarToReplace_orderId, orderId);



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
    free(localVarToReplace_orderId);
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

// Send a transactional email for an order.
//
// Sends a transactional email for the specified order. Only users with the 'send_email' permission are permitted.
//
empty_envelope_t*
OrdersAPI_sendOrderEmail(apiClient_t *apiClient, char *tenantId, char *orderId, email_dispatch_request_t *email_dispatch_request)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/OrdersService/Orders/{orderId}/Emails/Send")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/OrdersService/Orders/{orderId}/Emails/Send");


    // Path Params
    long sizeOfPathParams_orderId = strlen(orderId)+3 + strlen("{ orderId }");
    if(orderId == NULL) {
        goto end;
    }
    char* localVarToReplace_orderId = malloc(sizeOfPathParams_orderId);
    sprintf(localVarToReplace_orderId, "{%s}", "orderId");

    localVarPath = strReplace(localVarPath, localVarToReplace_orderId, orderId);
    if(orderId == NULL) {
        goto end;
    }
    char* localVarToReplace_orderId = malloc(sizeOfPathParams_orderId);
    sprintf(localVarToReplace_orderId, "{%s}", "orderId");

    localVarPath = strReplace(localVarPath, localVarToReplace_orderId, orderId);



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
    cJSON *OrdersAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(OrdersAPIlocalVarJSON);
    cJSON_Delete(OrdersAPIlocalVarJSON);
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
    free(localVarToReplace_orderId);
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

// Submits a cart and creates an order.
//
// Submits the specified cart and creates an order for the authenticated user.
//
order_dto_envelope_t*
OrdersAPI_submitCart(apiClient_t *apiClient, char *cartId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/OrdersService/Orders/SubmitCart")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/OrdersService/Orders/SubmitCart");




    // query parameters
    char *keyQuery_cartId = NULL;
    char * valueQuery_cartId = NULL;
    keyValuePair_t *keyPairQuery_cartId = 0;
    if (cartId)
    {
        keyQuery_cartId = strdup("cartId");
        valueQuery_cartId = strdup((cartId));
        keyPairQuery_cartId = keyValuePair_create(keyQuery_cartId, valueQuery_cartId);
        list_addElement(localVarQueryParameters,keyPairQuery_cartId);
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
    cJSON *OrdersAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    order_dto_envelope_t *elementToReturn = order_dto_envelope_parseFromJSON(OrdersAPIlocalVarJSON);
    cJSON_Delete(OrdersAPIlocalVarJSON);
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
    if(keyQuery_cartId){
        free(keyQuery_cartId);
        keyQuery_cartId = NULL;
    }
    if(valueQuery_cartId){
        free(valueQuery_cartId);
        valueQuery_cartId = NULL;
    }
    if(keyPairQuery_cartId){
        keyValuePair_free(keyPairQuery_cartId);
        keyPairQuery_cartId = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Updates an existing order.
//
// Updates the details of an existing order.
//
empty_envelope_t*
OrdersAPI_updateOrder(apiClient_t *apiClient, char *tenantId, char *orderId, order_update_dto_t *order_update_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/OrdersService/Orders/{orderId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/OrdersService/Orders/{orderId}");


    // Path Params
    long sizeOfPathParams_orderId = strlen(orderId)+3 + strlen("{ orderId }");
    if(orderId == NULL) {
        goto end;
    }
    char* localVarToReplace_orderId = malloc(sizeOfPathParams_orderId);
    sprintf(localVarToReplace_orderId, "{%s}", "orderId");

    localVarPath = strReplace(localVarPath, localVarToReplace_orderId, orderId);
    if(orderId == NULL) {
        goto end;
    }
    char* localVarToReplace_orderId = malloc(sizeOfPathParams_orderId);
    sprintf(localVarToReplace_orderId, "{%s}", "orderId");

    localVarPath = strReplace(localVarPath, localVarToReplace_orderId, orderId);



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
    cJSON *localVarSingleItemJSON_order_update_dto = NULL;
    if (order_update_dto != NULL)
    {
        //string
        localVarSingleItemJSON_order_update_dto = order_update_dto_convertToJSON(order_update_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_order_update_dto);
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
    cJSON *OrdersAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(OrdersAPIlocalVarJSON);
    cJSON_Delete(OrdersAPIlocalVarJSON);
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
    free(localVarToReplace_orderId);
    if (localVarSingleItemJSON_order_update_dto) {
        cJSON_Delete(localVarSingleItemJSON_order_update_dto);
        localVarSingleItemJSON_order_update_dto = NULL;
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

// Updates an order line.
//
// Updates the details of a specific order line.
//
empty_envelope_t*
OrdersAPI_updateOrderLine(apiClient_t *apiClient, char *tenantId, char *orderId, char *orderLineId, order_line_update_dto_t *order_line_update_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/OrdersService/Orders/{orderId}/Lines/{orderLineId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/OrdersService/Orders/{orderId}/Lines/{orderLineId}");


    // Path Params
    long sizeOfPathParams_orderId = strlen(orderId)+3 + strlen(orderLineId)+3 + strlen("{ orderId }");
    if(orderId == NULL) {
        goto end;
    }
    char* localVarToReplace_orderId = malloc(sizeOfPathParams_orderId);
    sprintf(localVarToReplace_orderId, "{%s}", "orderId");

    localVarPath = strReplace(localVarPath, localVarToReplace_orderId, orderId);
    if(orderId == NULL) {
        goto end;
    }
    char* localVarToReplace_orderId = malloc(sizeOfPathParams_orderId);
    sprintf(localVarToReplace_orderId, "{%s}", "orderId");

    localVarPath = strReplace(localVarPath, localVarToReplace_orderId, orderId);

    // Path Params
    long sizeOfPathParams_orderLineId = strlen(orderId)+3 + strlen(orderLineId)+3 + strlen("{ orderLineId }");
    if(orderLineId == NULL) {
        goto end;
    }
    char* localVarToReplace_orderLineId = malloc(sizeOfPathParams_orderLineId);
    sprintf(localVarToReplace_orderLineId, "{%s}", "orderLineId");

    localVarPath = strReplace(localVarPath, localVarToReplace_orderLineId, orderLineId);
    if(orderLineId == NULL) {
        goto end;
    }
    char* localVarToReplace_orderLineId = malloc(sizeOfPathParams_orderLineId);
    sprintf(localVarToReplace_orderLineId, "{%s}", "orderLineId");

    localVarPath = strReplace(localVarPath, localVarToReplace_orderLineId, orderLineId);



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
    cJSON *localVarSingleItemJSON_order_line_update_dto = NULL;
    if (order_line_update_dto != NULL)
    {
        //string
        localVarSingleItemJSON_order_line_update_dto = order_line_update_dto_convertToJSON(order_line_update_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_order_line_update_dto);
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
    cJSON *OrdersAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(OrdersAPIlocalVarJSON);
    cJSON_Delete(OrdersAPIlocalVarJSON);
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
    free(localVarToReplace_orderId);
    free(localVarToReplace_orderLineId);
    if (localVarSingleItemJSON_order_line_update_dto) {
        cJSON_Delete(localVarSingleItemJSON_order_line_update_dto);
        localVarSingleItemJSON_order_line_update_dto = NULL;
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

