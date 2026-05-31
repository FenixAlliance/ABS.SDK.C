#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "PointOfSalesAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Get point of sales count
//
// Returns the total count of point of sales for the specified tenant with OData filter support.
//
int32_envelope_t*
PointOfSalesAPI_countPointOfSalesAsync(apiClient_t *apiClient, char *tenantId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SalesService/PointOfSales/Count")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SalesService/PointOfSales/Count");




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
    cJSON *PointOfSalesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    int32_envelope_t *elementToReturn = int32_envelope_parseFromJSON(PointOfSalesAPIlocalVarJSON);
    cJSON_Delete(PointOfSalesAPIlocalVarJSON);
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

// Create a point of sale
//
// Creates a new point of sale for the specified tenant.
//
empty_envelope_t*
PointOfSalesAPI_createPointOfSaleAsync(apiClient_t *apiClient, char *tenantId, point_of_sale_create_dto_t *point_of_sale_create_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SalesService/PointOfSales")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SalesService/PointOfSales");




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
    cJSON *localVarSingleItemJSON_point_of_sale_create_dto = NULL;
    if (point_of_sale_create_dto != NULL)
    {
        //string
        localVarSingleItemJSON_point_of_sale_create_dto = point_of_sale_create_dto_convertToJSON(point_of_sale_create_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_point_of_sale_create_dto);
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
    cJSON *PointOfSalesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(PointOfSalesAPIlocalVarJSON);
    cJSON_Delete(PointOfSalesAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_point_of_sale_create_dto) {
        cJSON_Delete(localVarSingleItemJSON_point_of_sale_create_dto);
        localVarSingleItemJSON_point_of_sale_create_dto = NULL;
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

// Delete a point of sale
//
// Deletes an existing point of sale by its unique identifier.
//
empty_envelope_t*
PointOfSalesAPI_deletePointOfSaleAsync(apiClient_t *apiClient, char *tenantId, char *pointOfSaleId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SalesService/PointOfSales/{pointOfSaleId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SalesService/PointOfSales/{pointOfSaleId}");


    // Path Params
    long sizeOfPathParams_pointOfSaleId = strlen(pointOfSaleId)+3 + strlen("{ pointOfSaleId }");
    if(pointOfSaleId == NULL) {
        goto end;
    }
    char* localVarToReplace_pointOfSaleId = malloc(sizeOfPathParams_pointOfSaleId);
    sprintf(localVarToReplace_pointOfSaleId, "{%s}", "pointOfSaleId");

    localVarPath = strReplace(localVarPath, localVarToReplace_pointOfSaleId, pointOfSaleId);
    if(pointOfSaleId == NULL) {
        goto end;
    }
    char* localVarToReplace_pointOfSaleId = malloc(sizeOfPathParams_pointOfSaleId);
    sprintf(localVarToReplace_pointOfSaleId, "{%s}", "pointOfSaleId");

    localVarPath = strReplace(localVarPath, localVarToReplace_pointOfSaleId, pointOfSaleId);



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
    cJSON *PointOfSalesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(PointOfSalesAPIlocalVarJSON);
    cJSON_Delete(PointOfSalesAPIlocalVarJSON);
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
    free(localVarToReplace_pointOfSaleId);
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

// Get point of sale by ID
//
// Retrieves a single point of sale by its unique identifier.
//
point_of_sale_dto_envelope_t*
PointOfSalesAPI_getPointOfSaleAsync(apiClient_t *apiClient, char *tenantId, char *pointOfSaleId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SalesService/PointOfSales/{pointOfSaleId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SalesService/PointOfSales/{pointOfSaleId}");


    // Path Params
    long sizeOfPathParams_pointOfSaleId = strlen(pointOfSaleId)+3 + strlen("{ pointOfSaleId }");
    if(pointOfSaleId == NULL) {
        goto end;
    }
    char* localVarToReplace_pointOfSaleId = malloc(sizeOfPathParams_pointOfSaleId);
    sprintf(localVarToReplace_pointOfSaleId, "{%s}", "pointOfSaleId");

    localVarPath = strReplace(localVarPath, localVarToReplace_pointOfSaleId, pointOfSaleId);
    if(pointOfSaleId == NULL) {
        goto end;
    }
    char* localVarToReplace_pointOfSaleId = malloc(sizeOfPathParams_pointOfSaleId);
    sprintf(localVarToReplace_pointOfSaleId, "{%s}", "pointOfSaleId");

    localVarPath = strReplace(localVarPath, localVarToReplace_pointOfSaleId, pointOfSaleId);



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
    cJSON *PointOfSalesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    point_of_sale_dto_envelope_t *elementToReturn = point_of_sale_dto_envelope_parseFromJSON(PointOfSalesAPIlocalVarJSON);
    cJSON_Delete(PointOfSalesAPIlocalVarJSON);
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
    free(localVarToReplace_pointOfSaleId);
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

// Get point of sales
//
// Retrieves a list of point of sales for the specified tenant with OData query support.
//
point_of_sale_dto_list_envelope_t*
PointOfSalesAPI_getPointOfSalesAsync(apiClient_t *apiClient, char *tenantId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SalesService/PointOfSales")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SalesService/PointOfSales");




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
    cJSON *PointOfSalesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    point_of_sale_dto_list_envelope_t *elementToReturn = point_of_sale_dto_list_envelope_parseFromJSON(PointOfSalesAPIlocalVarJSON);
    cJSON_Delete(PointOfSalesAPIlocalVarJSON);
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

// Update a point of sale
//
// Updates an existing point of sale by its unique identifier.
//
empty_envelope_t*
PointOfSalesAPI_updatePointOfSaleAsync(apiClient_t *apiClient, char *tenantId, char *pointOfSaleId, point_of_sale_update_dto_t *point_of_sale_update_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/SalesService/PointOfSales/{pointOfSaleId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/SalesService/PointOfSales/{pointOfSaleId}");


    // Path Params
    long sizeOfPathParams_pointOfSaleId = strlen(pointOfSaleId)+3 + strlen("{ pointOfSaleId }");
    if(pointOfSaleId == NULL) {
        goto end;
    }
    char* localVarToReplace_pointOfSaleId = malloc(sizeOfPathParams_pointOfSaleId);
    sprintf(localVarToReplace_pointOfSaleId, "{%s}", "pointOfSaleId");

    localVarPath = strReplace(localVarPath, localVarToReplace_pointOfSaleId, pointOfSaleId);
    if(pointOfSaleId == NULL) {
        goto end;
    }
    char* localVarToReplace_pointOfSaleId = malloc(sizeOfPathParams_pointOfSaleId);
    sprintf(localVarToReplace_pointOfSaleId, "{%s}", "pointOfSaleId");

    localVarPath = strReplace(localVarPath, localVarToReplace_pointOfSaleId, pointOfSaleId);



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
    cJSON *localVarSingleItemJSON_point_of_sale_update_dto = NULL;
    if (point_of_sale_update_dto != NULL)
    {
        //string
        localVarSingleItemJSON_point_of_sale_update_dto = point_of_sale_update_dto_convertToJSON(point_of_sale_update_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_point_of_sale_update_dto);
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
    cJSON *PointOfSalesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(PointOfSalesAPIlocalVarJSON);
    cJSON_Delete(PointOfSalesAPIlocalVarJSON);
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
    free(localVarToReplace_pointOfSaleId);
    if (localVarSingleItemJSON_point_of_sale_update_dto) {
        cJSON_Delete(localVarSingleItemJSON_point_of_sale_update_dto);
        localVarSingleItemJSON_point_of_sale_update_dto = NULL;
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

