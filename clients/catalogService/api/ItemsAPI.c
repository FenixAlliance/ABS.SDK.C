#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ItemsAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Count tags for a stock item
//
// Counts the number of tags associated with a specific stock item.
//
int32_envelope_t*
ItemsAPI_countStockItemTagsByItemId(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/Items/{itemId}/Tags/Count")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/Items/{itemId}/Tags/Count");


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
    cJSON *ItemsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    int32_envelope_t *elementToReturn = int32_envelope_parseFromJSON(ItemsAPIlocalVarJSON);
    cJSON_Delete(ItemsAPIlocalVarJSON);
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

// Count stock items by business
//
// Counts the number of stock items for a business, optionally filtered by tenant and OData query options.
//
int32_envelope_t*
ItemsAPI_countStockItemsByBusiness(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/Items/Count")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/Items/Count");




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
    cJSON *ItemsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    int32_envelope_t *elementToReturn = int32_envelope_parseFromJSON(ItemsAPIlocalVarJSON);
    cJSON_Delete(ItemsAPIlocalVarJSON);
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

// Create a new stock item
//
// Creates a new stock item for the specified tenant.
//
void
ItemsAPI_createStockItem(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, catalog_item_create_dto_t *catalog_item_create_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/Items")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/Items");




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

    // Body Param
    cJSON *localVarSingleItemJSON_catalog_item_create_dto = NULL;
    if (catalog_item_create_dto != NULL)
    {
        //string
        localVarSingleItemJSON_catalog_item_create_dto = catalog_item_create_dto_convertToJSON(catalog_item_create_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_catalog_item_create_dto);
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
    list_freeList(localVarContentType);
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
    if (localVarSingleItemJSON_catalog_item_create_dto) {
        cJSON_Delete(localVarSingleItemJSON_catalog_item_create_dto);
        localVarSingleItemJSON_catalog_item_create_dto = NULL;
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

// Delete a stock item
//
// Deletes a stock item for the specified tenant and item ID.
//
void
ItemsAPI_deleteStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/Items/{itemId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/Items/{itemId}");


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

// Get extended stock item by ID
//
// Retrieves extended information for a stock item by its unique identifier.
//
catalog_item_dto_envelope_t*
ItemsAPI_getExtendedStockItemById(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/Items/{itemId}/Extended")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/Items/{itemId}/Extended");


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
    cJSON *ItemsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    catalog_item_dto_envelope_t *elementToReturn = catalog_item_dto_envelope_parseFromJSON(ItemsAPIlocalVarJSON);
    cJSON_Delete(ItemsAPIlocalVarJSON);
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

// Get item primary image
//
// Retrieves the primary image for a specific catalog item.
//
empty_envelope_t*
ItemsAPI_getProductPrimaryImageAsync(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/Items/{itemId}/Images/Primary")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/Items/{itemId}/Images/Primary");


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
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    cJSON *ItemsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(ItemsAPIlocalVarJSON);
    cJSON_Delete(ItemsAPIlocalVarJSON);
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

// Get attachment by ID for a stock item
//
// Retrieves a specific attachment by ID for a stock item.
//
item_attachment_dto_envelope_t*
ItemsAPI_getStockItemAttachmentById(apiClient_t *apiClient, char *itemId, char *itemAttachmentId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/Items/{itemId}/Attachments/{itemAttachmentId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/Items/{itemId}/Attachments/{itemAttachmentId}");


    // Path Params
    long sizeOfPathParams_itemId = strlen(itemId)+3 + strlen(itemAttachmentId)+3 + strlen("{ itemId }");
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

    // Path Params
    long sizeOfPathParams_itemAttachmentId = strlen(itemId)+3 + strlen(itemAttachmentId)+3 + strlen("{ itemAttachmentId }");
    if(itemAttachmentId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemAttachmentId = malloc(sizeOfPathParams_itemAttachmentId);
    sprintf(localVarToReplace_itemAttachmentId, "{%s}", "itemAttachmentId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemAttachmentId, itemAttachmentId);
    if(itemAttachmentId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemAttachmentId = malloc(sizeOfPathParams_itemAttachmentId);
    sprintf(localVarToReplace_itemAttachmentId, "{%s}", "itemAttachmentId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemAttachmentId, itemAttachmentId);



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
    cJSON *ItemsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    item_attachment_dto_envelope_t *elementToReturn = item_attachment_dto_envelope_parseFromJSON(ItemsAPIlocalVarJSON);
    cJSON_Delete(ItemsAPIlocalVarJSON);
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
    free(localVarToReplace_itemAttachmentId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
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

// Get attachments for a stock item
//
// Retrieves all attachments associated with a specific stock item.
//
item_attachment_dto_list_envelope_t*
ItemsAPI_getStockItemAttachmentsByItemId(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/Items/{itemId}/Attachments")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/Items/{itemId}/Attachments");


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
    cJSON *ItemsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    item_attachment_dto_list_envelope_t *elementToReturn = item_attachment_dto_list_envelope_parseFromJSON(ItemsAPIlocalVarJSON);
    cJSON_Delete(ItemsAPIlocalVarJSON);
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

// Get attribute option by ID for a stock item
//
// Retrieves a specific attribute option by ID for a stock item.
//
item_attribute_option_dto_envelope_t*
ItemsAPI_getStockItemAttributeOptionById(apiClient_t *apiClient, char *itemId, char *itemAttributeOptionId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/Items/{itemId}/AttributeOptions/{itemAttributeOptionId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/Items/{itemId}/AttributeOptions/{itemAttributeOptionId}");


    // Path Params
    long sizeOfPathParams_itemId = strlen(itemId)+3 + strlen(itemAttributeOptionId)+3 + strlen("{ itemId }");
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

    // Path Params
    long sizeOfPathParams_itemAttributeOptionId = strlen(itemId)+3 + strlen(itemAttributeOptionId)+3 + strlen("{ itemAttributeOptionId }");
    if(itemAttributeOptionId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemAttributeOptionId = malloc(sizeOfPathParams_itemAttributeOptionId);
    sprintf(localVarToReplace_itemAttributeOptionId, "{%s}", "itemAttributeOptionId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemAttributeOptionId, itemAttributeOptionId);
    if(itemAttributeOptionId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemAttributeOptionId = malloc(sizeOfPathParams_itemAttributeOptionId);
    sprintf(localVarToReplace_itemAttributeOptionId, "{%s}", "itemAttributeOptionId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemAttributeOptionId, itemAttributeOptionId);



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
    cJSON *ItemsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    item_attribute_option_dto_envelope_t *elementToReturn = item_attribute_option_dto_envelope_parseFromJSON(ItemsAPIlocalVarJSON);
    cJSON_Delete(ItemsAPIlocalVarJSON);
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
    free(localVarToReplace_itemAttributeOptionId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
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

// Get attribute options for a stock item
//
// Retrieves all attribute options associated with a specific stock item.
//
item_attribute_option_dto_list_envelope_t*
ItemsAPI_getStockItemAttributeOptionsByItemId(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/Items/{itemId}/AttributeOptions")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/Items/{itemId}/AttributeOptions");


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
    cJSON *ItemsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    item_attribute_option_dto_list_envelope_t *elementToReturn = item_attribute_option_dto_list_envelope_parseFromJSON(ItemsAPIlocalVarJSON);
    cJSON_Delete(ItemsAPIlocalVarJSON);
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

// Get brand by ID for a stock item
//
// Retrieves a specific brand by ID for a stock item.
//
item_brand_dto_envelope_t*
ItemsAPI_getStockItemBrandById(apiClient_t *apiClient, char *itemId, char *itemBrandId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/Items/{itemId}/Brands/{itemBrandId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/Items/{itemId}/Brands/{itemBrandId}");


    // Path Params
    long sizeOfPathParams_itemId = strlen(itemId)+3 + strlen(itemBrandId)+3 + strlen("{ itemId }");
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

    // Path Params
    long sizeOfPathParams_itemBrandId = strlen(itemId)+3 + strlen(itemBrandId)+3 + strlen("{ itemBrandId }");
    if(itemBrandId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemBrandId = malloc(sizeOfPathParams_itemBrandId);
    sprintf(localVarToReplace_itemBrandId, "{%s}", "itemBrandId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemBrandId, itemBrandId);
    if(itemBrandId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemBrandId = malloc(sizeOfPathParams_itemBrandId);
    sprintf(localVarToReplace_itemBrandId, "{%s}", "itemBrandId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemBrandId, itemBrandId);



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
    cJSON *ItemsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    item_brand_dto_envelope_t *elementToReturn = item_brand_dto_envelope_parseFromJSON(ItemsAPIlocalVarJSON);
    cJSON_Delete(ItemsAPIlocalVarJSON);
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
    free(localVarToReplace_itemBrandId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
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

// Get brands for a stock item
//
// Retrieves all brands associated with a specific stock item.
//
item_brand_dto_list_envelope_t*
ItemsAPI_getStockItemBrandsByItemId(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/Items/{itemId}/Brands")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/Items/{itemId}/Brands");


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
    cJSON *ItemsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    item_brand_dto_list_envelope_t *elementToReturn = item_brand_dto_list_envelope_parseFromJSON(ItemsAPIlocalVarJSON);
    cJSON_Delete(ItemsAPIlocalVarJSON);
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

// Get stock item by ID
//
// Retrieves a stock item by its unique identifier.
//
catalog_item_dto_envelope_t*
ItemsAPI_getStockItemById(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/Items/{itemId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/Items/{itemId}");


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
    cJSON *ItemsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    catalog_item_dto_envelope_t *elementToReturn = catalog_item_dto_envelope_parseFromJSON(ItemsAPIlocalVarJSON);
    cJSON_Delete(ItemsAPIlocalVarJSON);
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

// Get categories for a stock item
//
// Retrieves all categories associated with a specific stock item.
//
item_category_dto_list_envelope_t*
ItemsAPI_getStockItemCategoriesByItemId(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/Items/{itemId}/Categories")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/Items/{itemId}/Categories");


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
    cJSON *ItemsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    item_category_dto_list_envelope_t *elementToReturn = item_category_dto_list_envelope_parseFromJSON(ItemsAPIlocalVarJSON);
    cJSON_Delete(ItemsAPIlocalVarJSON);
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

// Get category by ID for a stock item
//
// Retrieves a specific category by ID for a stock item.
//
item_category_dto_envelope_t*
ItemsAPI_getStockItemCategoryById(apiClient_t *apiClient, char *itemId, char *itemCategoryId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/Items/{itemId}/Categories/{itemCategoryId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/Items/{itemId}/Categories/{itemCategoryId}");


    // Path Params
    long sizeOfPathParams_itemId = strlen(itemId)+3 + strlen(itemCategoryId)+3 + strlen("{ itemId }");
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

    // Path Params
    long sizeOfPathParams_itemCategoryId = strlen(itemId)+3 + strlen(itemCategoryId)+3 + strlen("{ itemCategoryId }");
    if(itemCategoryId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemCategoryId = malloc(sizeOfPathParams_itemCategoryId);
    sprintf(localVarToReplace_itemCategoryId, "{%s}", "itemCategoryId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemCategoryId, itemCategoryId);
    if(itemCategoryId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemCategoryId = malloc(sizeOfPathParams_itemCategoryId);
    sprintf(localVarToReplace_itemCategoryId, "{%s}", "itemCategoryId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemCategoryId, itemCategoryId);



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
    cJSON *ItemsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    item_category_dto_envelope_t *elementToReturn = item_category_dto_envelope_parseFromJSON(ItemsAPIlocalVarJSON);
    cJSON_Delete(ItemsAPIlocalVarJSON);
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
    free(localVarToReplace_itemCategoryId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
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

// Get Google categories for a stock item
//
// Retrieves all Google categories associated with a specific stock item.
//
item_google_category_dto_list_envelope_t*
ItemsAPI_getStockItemGoogleCategoriesByItemId(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/Items/{itemId}/GoogleCategories")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/Items/{itemId}/GoogleCategories");


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
    cJSON *ItemsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    item_google_category_dto_list_envelope_t *elementToReturn = item_google_category_dto_list_envelope_parseFromJSON(ItemsAPIlocalVarJSON);
    cJSON_Delete(ItemsAPIlocalVarJSON);
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

// Get Google category by ID for a stock item
//
// Retrieves a specific Google category by ID for a stock item.
//
item_google_category_dto_envelope_t*
ItemsAPI_getStockItemGoogleCategoryById(apiClient_t *apiClient, char *itemId, char *itemGoogleCategoryId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/Items/{itemId}/GoogleCategories/{itemGoogleCategoryId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/Items/{itemId}/GoogleCategories/{itemGoogleCategoryId}");


    // Path Params
    long sizeOfPathParams_itemId = strlen(itemId)+3 + strlen(itemGoogleCategoryId)+3 + strlen("{ itemId }");
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

    // Path Params
    long sizeOfPathParams_itemGoogleCategoryId = strlen(itemId)+3 + strlen(itemGoogleCategoryId)+3 + strlen("{ itemGoogleCategoryId }");
    if(itemGoogleCategoryId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemGoogleCategoryId = malloc(sizeOfPathParams_itemGoogleCategoryId);
    sprintf(localVarToReplace_itemGoogleCategoryId, "{%s}", "itemGoogleCategoryId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemGoogleCategoryId, itemGoogleCategoryId);
    if(itemGoogleCategoryId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemGoogleCategoryId = malloc(sizeOfPathParams_itemGoogleCategoryId);
    sprintf(localVarToReplace_itemGoogleCategoryId, "{%s}", "itemGoogleCategoryId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemGoogleCategoryId, itemGoogleCategoryId);



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
    cJSON *ItemsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    item_google_category_dto_envelope_t *elementToReturn = item_google_category_dto_envelope_parseFromJSON(ItemsAPIlocalVarJSON);
    cJSON_Delete(ItemsAPIlocalVarJSON);
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
    free(localVarToReplace_itemGoogleCategoryId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
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

// Get image by ID for a stock item
//
// Retrieves a specific image by ID for a stock item.
//
item_image_dto_envelope_t*
ItemsAPI_getStockItemImageById(apiClient_t *apiClient, char *itemId, char *itemImageId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/Items/{itemId}/Images/{itemImageId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/Items/{itemId}/Images/{itemImageId}");


    // Path Params
    long sizeOfPathParams_itemId = strlen(itemId)+3 + strlen(itemImageId)+3 + strlen("{ itemId }");
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

    // Path Params
    long sizeOfPathParams_itemImageId = strlen(itemId)+3 + strlen(itemImageId)+3 + strlen("{ itemImageId }");
    if(itemImageId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemImageId = malloc(sizeOfPathParams_itemImageId);
    sprintf(localVarToReplace_itemImageId, "{%s}", "itemImageId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemImageId, itemImageId);
    if(itemImageId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemImageId = malloc(sizeOfPathParams_itemImageId);
    sprintf(localVarToReplace_itemImageId, "{%s}", "itemImageId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemImageId, itemImageId);



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
    cJSON *ItemsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    item_image_dto_envelope_t *elementToReturn = item_image_dto_envelope_parseFromJSON(ItemsAPIlocalVarJSON);
    cJSON_Delete(ItemsAPIlocalVarJSON);
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
    free(localVarToReplace_itemImageId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
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

// Get images for a stock item
//
// Retrieves all images associated with a specific stock item.
//
item_image_dto_list_envelope_t*
ItemsAPI_getStockItemImagesByItemId(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/Items/{itemId}/Images")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/Items/{itemId}/Images");


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
    cJSON *ItemsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    item_image_dto_list_envelope_t *elementToReturn = item_image_dto_list_envelope_parseFromJSON(ItemsAPIlocalVarJSON);
    cJSON_Delete(ItemsAPIlocalVarJSON);
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

// Get price rule by ID for a stock item
//
// Retrieves a specific pricing rule by ID for a stock item.
//
pricing_rule_dto_envelope_t*
ItemsAPI_getStockItemPriceRuleById(apiClient_t *apiClient, char *itemId, char *itemPriceRuleId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/Items/{itemId}/PriceRules/{itemPriceRuleId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/Items/{itemId}/PriceRules/{itemPriceRuleId}");


    // Path Params
    long sizeOfPathParams_itemId = strlen(itemId)+3 + strlen(itemPriceRuleId)+3 + strlen("{ itemId }");
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

    // Path Params
    long sizeOfPathParams_itemPriceRuleId = strlen(itemId)+3 + strlen(itemPriceRuleId)+3 + strlen("{ itemPriceRuleId }");
    if(itemPriceRuleId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemPriceRuleId = malloc(sizeOfPathParams_itemPriceRuleId);
    sprintf(localVarToReplace_itemPriceRuleId, "{%s}", "itemPriceRuleId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemPriceRuleId, itemPriceRuleId);
    if(itemPriceRuleId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemPriceRuleId = malloc(sizeOfPathParams_itemPriceRuleId);
    sprintf(localVarToReplace_itemPriceRuleId, "{%s}", "itemPriceRuleId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemPriceRuleId, itemPriceRuleId);



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
    cJSON *ItemsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    pricing_rule_dto_envelope_t *elementToReturn = pricing_rule_dto_envelope_parseFromJSON(ItemsAPIlocalVarJSON);
    cJSON_Delete(ItemsAPIlocalVarJSON);
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
    free(localVarToReplace_itemPriceRuleId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
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

// Get price rules for a stock item
//
// Retrieves all pricing rules associated with a specific stock item.
//
pricing_rule_dto_list_envelope_t*
ItemsAPI_getStockItemPriceRulesByItemId(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/Items/{itemId}/PriceRules")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/Items/{itemId}/PriceRules");


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
    cJSON *ItemsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    pricing_rule_dto_list_envelope_t *elementToReturn = pricing_rule_dto_list_envelope_parseFromJSON(ItemsAPIlocalVarJSON);
    cJSON_Delete(ItemsAPIlocalVarJSON);
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

// Get question by ID for a stock item
//
// Retrieves a specific question by ID for a stock item.
//
item_question_dto_envelope_t*
ItemsAPI_getStockItemQuestionById(apiClient_t *apiClient, char *itemId, char *itemQuestionId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/Items/{itemId}/Questions/{itemQuestionId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/Items/{itemId}/Questions/{itemQuestionId}");


    // Path Params
    long sizeOfPathParams_itemId = strlen(itemId)+3 + strlen(itemQuestionId)+3 + strlen("{ itemId }");
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

    // Path Params
    long sizeOfPathParams_itemQuestionId = strlen(itemId)+3 + strlen(itemQuestionId)+3 + strlen("{ itemQuestionId }");
    if(itemQuestionId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemQuestionId = malloc(sizeOfPathParams_itemQuestionId);
    sprintf(localVarToReplace_itemQuestionId, "{%s}", "itemQuestionId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemQuestionId, itemQuestionId);
    if(itemQuestionId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemQuestionId = malloc(sizeOfPathParams_itemQuestionId);
    sprintf(localVarToReplace_itemQuestionId, "{%s}", "itemQuestionId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemQuestionId, itemQuestionId);



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
    cJSON *ItemsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    item_question_dto_envelope_t *elementToReturn = item_question_dto_envelope_parseFromJSON(ItemsAPIlocalVarJSON);
    cJSON_Delete(ItemsAPIlocalVarJSON);
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
    free(localVarToReplace_itemQuestionId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
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

// Get questions for a stock item
//
// Retrieves all questions associated with a specific stock item.
//
item_question_dto_list_envelope_t*
ItemsAPI_getStockItemQuestionsByItemId(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/Items/{itemId}/Questions")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/Items/{itemId}/Questions");


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
    cJSON *ItemsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    item_question_dto_list_envelope_t *elementToReturn = item_question_dto_list_envelope_parseFromJSON(ItemsAPIlocalVarJSON);
    cJSON_Delete(ItemsAPIlocalVarJSON);
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

// Get refund policies for a stock item
//
// Retrieves all refund policies associated with a specific stock item.
//
item_refund_policy_dto_list_envelope_t*
ItemsAPI_getStockItemRefundPoliciesByItemId(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/Items/{itemId}/RefundPolicies")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/Items/{itemId}/RefundPolicies");


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
    cJSON *ItemsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    item_refund_policy_dto_list_envelope_t *elementToReturn = item_refund_policy_dto_list_envelope_parseFromJSON(ItemsAPIlocalVarJSON);
    cJSON_Delete(ItemsAPIlocalVarJSON);
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

// Get refund policy by ID for a stock item
//
// Retrieves a specific refund policy by ID for a stock item.
//
item_refund_policy_dto_envelope_t*
ItemsAPI_getStockItemRefundPolicyById(apiClient_t *apiClient, char *itemId, char *itemRefundPolicyId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/Items/{itemId}/RefundPolicies/{itemRefundPolicyId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/Items/{itemId}/RefundPolicies/{itemRefundPolicyId}");


    // Path Params
    long sizeOfPathParams_itemId = strlen(itemId)+3 + strlen(itemRefundPolicyId)+3 + strlen("{ itemId }");
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

    // Path Params
    long sizeOfPathParams_itemRefundPolicyId = strlen(itemId)+3 + strlen(itemRefundPolicyId)+3 + strlen("{ itemRefundPolicyId }");
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
    cJSON *ItemsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    item_refund_policy_dto_envelope_t *elementToReturn = item_refund_policy_dto_envelope_parseFromJSON(ItemsAPIlocalVarJSON);
    cJSON_Delete(ItemsAPIlocalVarJSON);
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

// Get return policies for a stock item
//
// Retrieves all return policies associated with a specific stock item.
//
item_return_policy_dto_list_envelope_t*
ItemsAPI_getStockItemReturnPoliciesByItemId(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/Items/{itemId}/ReturnPolicies")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/Items/{itemId}/ReturnPolicies");


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
    cJSON *ItemsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    item_return_policy_dto_list_envelope_t *elementToReturn = item_return_policy_dto_list_envelope_parseFromJSON(ItemsAPIlocalVarJSON);
    cJSON_Delete(ItemsAPIlocalVarJSON);
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

// Get return policy by ID for a stock item
//
// Retrieves a specific return policy by ID for a stock item.
//
item_return_policy_dto_envelope_t*
ItemsAPI_getStockItemReturnPolicyById(apiClient_t *apiClient, char *itemId, char *itemReturnPolicyId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/Items/{itemId}/ReturnPolicies/{itemReturnPolicyId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/Items/{itemId}/ReturnPolicies/{itemReturnPolicyId}");


    // Path Params
    long sizeOfPathParams_itemId = strlen(itemId)+3 + strlen(itemReturnPolicyId)+3 + strlen("{ itemId }");
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

    // Path Params
    long sizeOfPathParams_itemReturnPolicyId = strlen(itemId)+3 + strlen(itemReturnPolicyId)+3 + strlen("{ itemReturnPolicyId }");
    if(itemReturnPolicyId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemReturnPolicyId = malloc(sizeOfPathParams_itemReturnPolicyId);
    sprintf(localVarToReplace_itemReturnPolicyId, "{%s}", "itemReturnPolicyId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemReturnPolicyId, itemReturnPolicyId);
    if(itemReturnPolicyId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemReturnPolicyId = malloc(sizeOfPathParams_itemReturnPolicyId);
    sprintf(localVarToReplace_itemReturnPolicyId, "{%s}", "itemReturnPolicyId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemReturnPolicyId, itemReturnPolicyId);



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
    cJSON *ItemsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    item_return_policy_dto_envelope_t *elementToReturn = item_return_policy_dto_envelope_parseFromJSON(ItemsAPIlocalVarJSON);
    cJSON_Delete(ItemsAPIlocalVarJSON);
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
    free(localVarToReplace_itemReturnPolicyId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
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

// Get review by ID for a stock item
//
// Retrieves a specific review by ID for a stock item.
//
item_review_dto_envelope_t*
ItemsAPI_getStockItemReviewById(apiClient_t *apiClient, char *itemId, char *itemReviewId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/Items/{itemId}/Reviews/{itemReviewId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/Items/{itemId}/Reviews/{itemReviewId}");


    // Path Params
    long sizeOfPathParams_itemId = strlen(itemId)+3 + strlen(itemReviewId)+3 + strlen("{ itemId }");
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

    // Path Params
    long sizeOfPathParams_itemReviewId = strlen(itemId)+3 + strlen(itemReviewId)+3 + strlen("{ itemReviewId }");
    if(itemReviewId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemReviewId = malloc(sizeOfPathParams_itemReviewId);
    sprintf(localVarToReplace_itemReviewId, "{%s}", "itemReviewId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemReviewId, itemReviewId);
    if(itemReviewId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemReviewId = malloc(sizeOfPathParams_itemReviewId);
    sprintf(localVarToReplace_itemReviewId, "{%s}", "itemReviewId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemReviewId, itemReviewId);



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
    cJSON *ItemsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    item_review_dto_envelope_t *elementToReturn = item_review_dto_envelope_parseFromJSON(ItemsAPIlocalVarJSON);
    cJSON_Delete(ItemsAPIlocalVarJSON);
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
    free(localVarToReplace_itemReviewId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
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

// Get reviews for a stock item
//
// Retrieves all reviews associated with a specific stock item.
//
item_review_dto_list_envelope_t*
ItemsAPI_getStockItemReviewsByItemId(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/Items/{itemId}/Reviews")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/Items/{itemId}/Reviews");


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
    cJSON *ItemsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    item_review_dto_list_envelope_t *elementToReturn = item_review_dto_list_envelope_parseFromJSON(ItemsAPIlocalVarJSON);
    cJSON_Delete(ItemsAPIlocalVarJSON);
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

// Get shipping policies for a stock item
//
// Retrieves all shipping policies associated with a specific stock item.
//
item_shipping_policy_dto_list_envelope_t*
ItemsAPI_getStockItemShippingPoliciesByItemId(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/Items/{itemId}/ShippingPolicies")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/Items/{itemId}/ShippingPolicies");


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
    cJSON *ItemsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    item_shipping_policy_dto_list_envelope_t *elementToReturn = item_shipping_policy_dto_list_envelope_parseFromJSON(ItemsAPIlocalVarJSON);
    cJSON_Delete(ItemsAPIlocalVarJSON);
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

// Get shipping policy by ID for a stock item
//
// Retrieves a specific shipping policy by ID for a stock item.
//
item_shipping_policy_dto_envelope_t*
ItemsAPI_getStockItemShippingPolicyById(apiClient_t *apiClient, char *itemId, char *itemShippingPolicyId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/Items/{itemId}/ShippingPolicies/{itemShippingPolicyId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/Items/{itemId}/ShippingPolicies/{itemShippingPolicyId}");


    // Path Params
    long sizeOfPathParams_itemId = strlen(itemId)+3 + strlen(itemShippingPolicyId)+3 + strlen("{ itemId }");
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

    // Path Params
    long sizeOfPathParams_itemShippingPolicyId = strlen(itemId)+3 + strlen(itemShippingPolicyId)+3 + strlen("{ itemShippingPolicyId }");
    if(itemShippingPolicyId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemShippingPolicyId = malloc(sizeOfPathParams_itemShippingPolicyId);
    sprintf(localVarToReplace_itemShippingPolicyId, "{%s}", "itemShippingPolicyId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemShippingPolicyId, itemShippingPolicyId);
    if(itemShippingPolicyId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemShippingPolicyId = malloc(sizeOfPathParams_itemShippingPolicyId);
    sprintf(localVarToReplace_itemShippingPolicyId, "{%s}", "itemShippingPolicyId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemShippingPolicyId, itemShippingPolicyId);



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
    cJSON *ItemsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    item_shipping_policy_dto_envelope_t *elementToReturn = item_shipping_policy_dto_envelope_parseFromJSON(ItemsAPIlocalVarJSON);
    cJSON_Delete(ItemsAPIlocalVarJSON);
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
    free(localVarToReplace_itemShippingPolicyId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
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

// Get tag by ID for a stock item
//
// Retrieves a specific tag by ID for a stock item.
//
item_tag_dto_envelope_t*
ItemsAPI_getStockItemTagById(apiClient_t *apiClient, char *itemId, char *itemTagId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/Items/{itemId}/Tags/{itemTagId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/Items/{itemId}/Tags/{itemTagId}");


    // Path Params
    long sizeOfPathParams_itemId = strlen(itemId)+3 + strlen(itemTagId)+3 + strlen("{ itemId }");
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

    // Path Params
    long sizeOfPathParams_itemTagId = strlen(itemId)+3 + strlen(itemTagId)+3 + strlen("{ itemTagId }");
    if(itemTagId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemTagId = malloc(sizeOfPathParams_itemTagId);
    sprintf(localVarToReplace_itemTagId, "{%s}", "itemTagId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemTagId, itemTagId);
    if(itemTagId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemTagId = malloc(sizeOfPathParams_itemTagId);
    sprintf(localVarToReplace_itemTagId, "{%s}", "itemTagId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemTagId, itemTagId);



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
    cJSON *ItemsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    item_tag_dto_envelope_t *elementToReturn = item_tag_dto_envelope_parseFromJSON(ItemsAPIlocalVarJSON);
    cJSON_Delete(ItemsAPIlocalVarJSON);
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
    free(localVarToReplace_itemTagId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
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

// Get tags for a stock item
//
// Retrieves all tags associated with a specific stock item.
//
item_tag_dto_list_envelope_t*
ItemsAPI_getStockItemTagsByItemId(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/Items/{itemId}/Tags")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/Items/{itemId}/Tags");


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
    cJSON *ItemsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    item_tag_dto_list_envelope_t *elementToReturn = item_tag_dto_list_envelope_parseFromJSON(ItemsAPIlocalVarJSON);
    cJSON_Delete(ItemsAPIlocalVarJSON);
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

// Get tax policies for a stock item
//
// Retrieves all tax policies associated with a specific stock item.
//
item_tax_policy_dto_list_envelope_t*
ItemsAPI_getStockItemTaxPoliciesByItemId(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/Items/{itemId}/TaxPolicies")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/Items/{itemId}/TaxPolicies");


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
    cJSON *ItemsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    item_tax_policy_dto_list_envelope_t *elementToReturn = item_tax_policy_dto_list_envelope_parseFromJSON(ItemsAPIlocalVarJSON);
    cJSON_Delete(ItemsAPIlocalVarJSON);
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

// Get tax policy by ID for a stock item
//
// Retrieves a specific tax policy by ID for a stock item.
//
item_tax_policy_dto_envelope_t*
ItemsAPI_getStockItemTaxPolicyById(apiClient_t *apiClient, char *itemId, char *itemTaxPolicyId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/Items/{itemId}/TaxPolicies/{itemTaxPolicyId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/Items/{itemId}/TaxPolicies/{itemTaxPolicyId}");


    // Path Params
    long sizeOfPathParams_itemId = strlen(itemId)+3 + strlen(itemTaxPolicyId)+3 + strlen("{ itemId }");
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

    // Path Params
    long sizeOfPathParams_itemTaxPolicyId = strlen(itemId)+3 + strlen(itemTaxPolicyId)+3 + strlen("{ itemTaxPolicyId }");
    if(itemTaxPolicyId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemTaxPolicyId = malloc(sizeOfPathParams_itemTaxPolicyId);
    sprintf(localVarToReplace_itemTaxPolicyId, "{%s}", "itemTaxPolicyId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemTaxPolicyId, itemTaxPolicyId);
    if(itemTaxPolicyId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemTaxPolicyId = malloc(sizeOfPathParams_itemTaxPolicyId);
    sprintf(localVarToReplace_itemTaxPolicyId, "{%s}", "itemTaxPolicyId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemTaxPolicyId, itemTaxPolicyId);



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
    cJSON *ItemsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    item_tax_policy_dto_envelope_t *elementToReturn = item_tax_policy_dto_envelope_parseFromJSON(ItemsAPIlocalVarJSON);
    cJSON_Delete(ItemsAPIlocalVarJSON);
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
    free(localVarToReplace_itemTaxPolicyId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
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

// Get type by ID for a stock item
//
// Retrieves a specific type by ID for a stock item.
//
item_type_dto_envelope_t*
ItemsAPI_getStockItemTypeById(apiClient_t *apiClient, char *itemId, char *itemTypeId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/Items/{itemId}/Types/{itemTypeId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/Items/{itemId}/Types/{itemTypeId}");


    // Path Params
    long sizeOfPathParams_itemId = strlen(itemId)+3 + strlen(itemTypeId)+3 + strlen("{ itemId }");
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

    // Path Params
    long sizeOfPathParams_itemTypeId = strlen(itemId)+3 + strlen(itemTypeId)+3 + strlen("{ itemTypeId }");
    if(itemTypeId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemTypeId = malloc(sizeOfPathParams_itemTypeId);
    sprintf(localVarToReplace_itemTypeId, "{%s}", "itemTypeId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemTypeId, itemTypeId);
    if(itemTypeId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemTypeId = malloc(sizeOfPathParams_itemTypeId);
    sprintf(localVarToReplace_itemTypeId, "{%s}", "itemTypeId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemTypeId, itemTypeId);



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
    cJSON *ItemsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    item_type_dto_envelope_t *elementToReturn = item_type_dto_envelope_parseFromJSON(ItemsAPIlocalVarJSON);
    cJSON_Delete(ItemsAPIlocalVarJSON);
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
    free(localVarToReplace_itemTypeId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
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

// Get types for a stock item
//
// Retrieves all types associated with a specific stock item.
//
item_type_dto_list_envelope_t*
ItemsAPI_getStockItemTypesByItemId(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/Items/{itemId}/Types")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/Items/{itemId}/Types");


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
    cJSON *ItemsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    item_type_dto_list_envelope_t *elementToReturn = item_type_dto_list_envelope_parseFromJSON(ItemsAPIlocalVarJSON);
    cJSON_Delete(ItemsAPIlocalVarJSON);
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

// Get warranty policies for a stock item
//
// Retrieves all warranty policies associated with a specific stock item.
//
item_warranty_policy_dto_list_envelope_t*
ItemsAPI_getStockItemWarrantyPoliciesByItemId(apiClient_t *apiClient, char *itemId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/Items/{itemId}/WarrantyPolicies")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/Items/{itemId}/WarrantyPolicies");


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
    cJSON *ItemsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    item_warranty_policy_dto_list_envelope_t *elementToReturn = item_warranty_policy_dto_list_envelope_parseFromJSON(ItemsAPIlocalVarJSON);
    cJSON_Delete(ItemsAPIlocalVarJSON);
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

// Get warranty policy by ID for a stock item
//
// Retrieves a specific warranty policy by ID for a stock item.
//
item_warranty_policy_dto_envelope_t*
ItemsAPI_getStockItemWarrantyPolicyById(apiClient_t *apiClient, char *itemId, char *itemWarrantyPolicyId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/Items/{itemId}/WarrantyPolicies/{itemWarrantyPolicyId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/Items/{itemId}/WarrantyPolicies/{itemWarrantyPolicyId}");


    // Path Params
    long sizeOfPathParams_itemId = strlen(itemId)+3 + strlen(itemWarrantyPolicyId)+3 + strlen("{ itemId }");
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

    // Path Params
    long sizeOfPathParams_itemWarrantyPolicyId = strlen(itemId)+3 + strlen(itemWarrantyPolicyId)+3 + strlen("{ itemWarrantyPolicyId }");
    if(itemWarrantyPolicyId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemWarrantyPolicyId = malloc(sizeOfPathParams_itemWarrantyPolicyId);
    sprintf(localVarToReplace_itemWarrantyPolicyId, "{%s}", "itemWarrantyPolicyId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemWarrantyPolicyId, itemWarrantyPolicyId);
    if(itemWarrantyPolicyId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemWarrantyPolicyId = malloc(sizeOfPathParams_itemWarrantyPolicyId);
    sprintf(localVarToReplace_itemWarrantyPolicyId, "{%s}", "itemWarrantyPolicyId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemWarrantyPolicyId, itemWarrantyPolicyId);



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
    cJSON *ItemsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    item_warranty_policy_dto_envelope_t *elementToReturn = item_warranty_policy_dto_envelope_parseFromJSON(ItemsAPIlocalVarJSON);
    cJSON_Delete(ItemsAPIlocalVarJSON);
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
    free(localVarToReplace_itemWarrantyPolicyId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
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

// Get max price of stock items
//
// Retrieves the maximum price among all stock items, optionally filtered by tenant and OData query options.
//
money_envelope_t*
ItemsAPI_getStockItemsOdataMaxPrice(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/Items/MaxPrice")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/Items/MaxPrice");




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
    cJSON *ItemsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    money_envelope_t *elementToReturn = money_envelope_parseFromJSON(ItemsAPIlocalVarJSON);
    cJSON_Delete(ItemsAPIlocalVarJSON);
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

// Get min price of stock items
//
// Retrieves the minimum price among all stock items, optionally filtered by tenant and OData query options.
//
money_envelope_t*
ItemsAPI_getStockItemsOdataMinPrice(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/Items/MinPrice")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/Items/MinPrice");




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
    cJSON *ItemsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    money_envelope_t *elementToReturn = money_envelope_parseFromJSON(ItemsAPIlocalVarJSON);
    cJSON_Delete(ItemsAPIlocalVarJSON);
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

// Get all stock items
//
// Retrieves all stock items, optionally filtered by tenant and OData query options.
//
catalog_item_dto_list_envelope_t*
ItemsAPI_getStockItemsQuery(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/Items")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/Items");




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
    cJSON *ItemsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    catalog_item_dto_list_envelope_t *elementToReturn = catalog_item_dto_list_envelope_parseFromJSON(ItemsAPIlocalVarJSON);
    cJSON_Delete(ItemsAPIlocalVarJSON);
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

// Relate attachment to stock item
//
// Associates an attachment with a stock item.
//
item_attachment_dto_envelope_t*
ItemsAPI_relateAttachmentToStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemAttachmentId, char *api_version, char *x_api_version, item_attachment_create_dto_t *item_attachment_create_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/Items/{itemId}/Attachments/{itemAttachmentId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/Items/{itemId}/Attachments/{itemAttachmentId}");


    // Path Params
    long sizeOfPathParams_itemId = strlen(itemId)+3 + strlen(itemAttachmentId)+3 + strlen("{ itemId }");
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

    // Path Params
    long sizeOfPathParams_itemAttachmentId = strlen(itemId)+3 + strlen(itemAttachmentId)+3 + strlen("{ itemAttachmentId }");
    if(itemAttachmentId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemAttachmentId = malloc(sizeOfPathParams_itemAttachmentId);
    sprintf(localVarToReplace_itemAttachmentId, "{%s}", "itemAttachmentId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemAttachmentId, itemAttachmentId);



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

    // Body Param
    cJSON *localVarSingleItemJSON_item_attachment_create_dto = NULL;
    if (item_attachment_create_dto != NULL)
    {
        //string
        localVarSingleItemJSON_item_attachment_create_dto = item_attachment_create_dto_convertToJSON(item_attachment_create_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_item_attachment_create_dto);
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
    cJSON *ItemsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    item_attachment_dto_envelope_t *elementToReturn = item_attachment_dto_envelope_parseFromJSON(ItemsAPIlocalVarJSON);
    cJSON_Delete(ItemsAPIlocalVarJSON);
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
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_itemId);
    free(localVarToReplace_itemAttachmentId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
    if (localVarSingleItemJSON_item_attachment_create_dto) {
        cJSON_Delete(localVarSingleItemJSON_item_attachment_create_dto);
        localVarSingleItemJSON_item_attachment_create_dto = NULL;
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

// Relate attribute option to stock item
//
// Associates an attribute option with a stock item.
//
item_attribute_option_dto_envelope_t*
ItemsAPI_relateAttributeOptionToStockItem(apiClient_t *apiClient, char *itemId, char *itemAttributeOptionId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/Items/{itemId}/AttributeOptions/{itemAttributeOptionId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/Items/{itemId}/AttributeOptions/{itemAttributeOptionId}");


    // Path Params
    long sizeOfPathParams_itemId = strlen(itemId)+3 + strlen(itemAttributeOptionId)+3 + strlen("{ itemId }");
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

    // Path Params
    long sizeOfPathParams_itemAttributeOptionId = strlen(itemId)+3 + strlen(itemAttributeOptionId)+3 + strlen("{ itemAttributeOptionId }");
    if(itemAttributeOptionId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemAttributeOptionId = malloc(sizeOfPathParams_itemAttributeOptionId);
    sprintf(localVarToReplace_itemAttributeOptionId, "{%s}", "itemAttributeOptionId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemAttributeOptionId, itemAttributeOptionId);
    if(itemAttributeOptionId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemAttributeOptionId = malloc(sizeOfPathParams_itemAttributeOptionId);
    sprintf(localVarToReplace_itemAttributeOptionId, "{%s}", "itemAttributeOptionId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemAttributeOptionId, itemAttributeOptionId);



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
    //nonprimitive not container
    cJSON *ItemsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    item_attribute_option_dto_envelope_t *elementToReturn = item_attribute_option_dto_envelope_parseFromJSON(ItemsAPIlocalVarJSON);
    cJSON_Delete(ItemsAPIlocalVarJSON);
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
    free(localVarToReplace_itemAttributeOptionId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
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

// Relate brand to stock item
//
// Associates a brand with a stock item.
//
item_brand_dto_envelope_t*
ItemsAPI_relateBrandToStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemBrandId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/Items/{itemId}/Brands/{itemBrandId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/Items/{itemId}/Brands/{itemBrandId}");


    // Path Params
    long sizeOfPathParams_itemId = strlen(itemId)+3 + strlen(itemBrandId)+3 + strlen("{ itemId }");
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

    // Path Params
    long sizeOfPathParams_itemBrandId = strlen(itemId)+3 + strlen(itemBrandId)+3 + strlen("{ itemBrandId }");
    if(itemBrandId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemBrandId = malloc(sizeOfPathParams_itemBrandId);
    sprintf(localVarToReplace_itemBrandId, "{%s}", "itemBrandId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemBrandId, itemBrandId);
    if(itemBrandId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemBrandId = malloc(sizeOfPathParams_itemBrandId);
    sprintf(localVarToReplace_itemBrandId, "{%s}", "itemBrandId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemBrandId, itemBrandId);



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
    //nonprimitive not container
    cJSON *ItemsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    item_brand_dto_envelope_t *elementToReturn = item_brand_dto_envelope_parseFromJSON(ItemsAPIlocalVarJSON);
    cJSON_Delete(ItemsAPIlocalVarJSON);
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
    free(localVarToReplace_itemBrandId);
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

// Relate category to stock item
//
// Associates a category with a stock item.
//
item_category_dto_envelope_t*
ItemsAPI_relateCategoryToStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemCategoryId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/Items/{itemId}/Categories/{itemCategoryId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/Items/{itemId}/Categories/{itemCategoryId}");


    // Path Params
    long sizeOfPathParams_itemId = strlen(itemId)+3 + strlen(itemCategoryId)+3 + strlen("{ itemId }");
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

    // Path Params
    long sizeOfPathParams_itemCategoryId = strlen(itemId)+3 + strlen(itemCategoryId)+3 + strlen("{ itemCategoryId }");
    if(itemCategoryId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemCategoryId = malloc(sizeOfPathParams_itemCategoryId);
    sprintf(localVarToReplace_itemCategoryId, "{%s}", "itemCategoryId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemCategoryId, itemCategoryId);
    if(itemCategoryId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemCategoryId = malloc(sizeOfPathParams_itemCategoryId);
    sprintf(localVarToReplace_itemCategoryId, "{%s}", "itemCategoryId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemCategoryId, itemCategoryId);



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
    //nonprimitive not container
    cJSON *ItemsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    item_category_dto_envelope_t *elementToReturn = item_category_dto_envelope_parseFromJSON(ItemsAPIlocalVarJSON);
    cJSON_Delete(ItemsAPIlocalVarJSON);
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
    free(localVarToReplace_itemCategoryId);
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

// Relate Google category to stock item
//
// Associates a Google category with a stock item.
//
item_google_category_dto_envelope_t*
ItemsAPI_relateGoogleCategoryToStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemGoogleCategoryId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/Items/{itemId}/GoogleCategories/{itemGoogleCategoryId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/Items/{itemId}/GoogleCategories/{itemGoogleCategoryId}");


    // Path Params
    long sizeOfPathParams_itemId = strlen(itemId)+3 + strlen(itemGoogleCategoryId)+3 + strlen("{ itemId }");
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

    // Path Params
    long sizeOfPathParams_itemGoogleCategoryId = strlen(itemId)+3 + strlen(itemGoogleCategoryId)+3 + strlen("{ itemGoogleCategoryId }");
    if(itemGoogleCategoryId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemGoogleCategoryId = malloc(sizeOfPathParams_itemGoogleCategoryId);
    sprintf(localVarToReplace_itemGoogleCategoryId, "{%s}", "itemGoogleCategoryId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemGoogleCategoryId, itemGoogleCategoryId);
    if(itemGoogleCategoryId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemGoogleCategoryId = malloc(sizeOfPathParams_itemGoogleCategoryId);
    sprintf(localVarToReplace_itemGoogleCategoryId, "{%s}", "itemGoogleCategoryId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemGoogleCategoryId, itemGoogleCategoryId);



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
    //nonprimitive not container
    cJSON *ItemsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    item_google_category_dto_envelope_t *elementToReturn = item_google_category_dto_envelope_parseFromJSON(ItemsAPIlocalVarJSON);
    cJSON_Delete(ItemsAPIlocalVarJSON);
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
    free(localVarToReplace_itemGoogleCategoryId);
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

// Relate image to stock item
//
// Associates an image with a stock item.
//
item_image_dto_envelope_t*
ItemsAPI_relateImageToStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemImageId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/Items/{itemId}/Images/{itemImageId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/Items/{itemId}/Images/{itemImageId}");


    // Path Params
    long sizeOfPathParams_itemId = strlen(itemId)+3 + strlen(itemImageId)+3 + strlen("{ itemId }");
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

    // Path Params
    long sizeOfPathParams_itemImageId = strlen(itemId)+3 + strlen(itemImageId)+3 + strlen("{ itemImageId }");
    if(itemImageId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemImageId = malloc(sizeOfPathParams_itemImageId);
    sprintf(localVarToReplace_itemImageId, "{%s}", "itemImageId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemImageId, itemImageId);
    if(itemImageId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemImageId = malloc(sizeOfPathParams_itemImageId);
    sprintf(localVarToReplace_itemImageId, "{%s}", "itemImageId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemImageId, itemImageId);



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
    //nonprimitive not container
    cJSON *ItemsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    item_image_dto_envelope_t *elementToReturn = item_image_dto_envelope_parseFromJSON(ItemsAPIlocalVarJSON);
    cJSON_Delete(ItemsAPIlocalVarJSON);
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
    free(localVarToReplace_itemImageId);
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

// Relate price rule to stock item
//
// Associates a pricing rule with a stock item.
//
pricing_rule_dto_envelope_t*
ItemsAPI_relatePriceRuleToStockItem(apiClient_t *apiClient, char *itemId, char *itemPriceRuleId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/Items/{itemId}/PriceRules/{itemPriceRuleId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/Items/{itemId}/PriceRules/{itemPriceRuleId}");


    // Path Params
    long sizeOfPathParams_itemId = strlen(itemId)+3 + strlen(itemPriceRuleId)+3 + strlen("{ itemId }");
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

    // Path Params
    long sizeOfPathParams_itemPriceRuleId = strlen(itemId)+3 + strlen(itemPriceRuleId)+3 + strlen("{ itemPriceRuleId }");
    if(itemPriceRuleId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemPriceRuleId = malloc(sizeOfPathParams_itemPriceRuleId);
    sprintf(localVarToReplace_itemPriceRuleId, "{%s}", "itemPriceRuleId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemPriceRuleId, itemPriceRuleId);
    if(itemPriceRuleId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemPriceRuleId = malloc(sizeOfPathParams_itemPriceRuleId);
    sprintf(localVarToReplace_itemPriceRuleId, "{%s}", "itemPriceRuleId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemPriceRuleId, itemPriceRuleId);



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
    //nonprimitive not container
    cJSON *ItemsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    pricing_rule_dto_envelope_t *elementToReturn = pricing_rule_dto_envelope_parseFromJSON(ItemsAPIlocalVarJSON);
    cJSON_Delete(ItemsAPIlocalVarJSON);
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
    free(localVarToReplace_itemPriceRuleId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
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

// Create question for stock item
//
// Creates a new question for a stock item.
//
item_question_dto_envelope_t*
ItemsAPI_relateQuestionToStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *api_version, char *x_api_version, item_question_record_create_dto_t *item_question_record_create_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/Items/{itemId}/Questions")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/Items/{itemId}/Questions");


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

    // Body Param
    cJSON *localVarSingleItemJSON_item_question_record_create_dto = NULL;
    if (item_question_record_create_dto != NULL)
    {
        //string
        localVarSingleItemJSON_item_question_record_create_dto = item_question_record_create_dto_convertToJSON(item_question_record_create_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_item_question_record_create_dto);
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
    cJSON *ItemsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    item_question_dto_envelope_t *elementToReturn = item_question_dto_envelope_parseFromJSON(ItemsAPIlocalVarJSON);
    cJSON_Delete(ItemsAPIlocalVarJSON);
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
    list_freeList(localVarContentType);
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
    if (localVarSingleItemJSON_item_question_record_create_dto) {
        cJSON_Delete(localVarSingleItemJSON_item_question_record_create_dto);
        localVarSingleItemJSON_item_question_record_create_dto = NULL;
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

// Relate refund policy to stock item
//
// Associates a refund policy with a stock item.
//
item_refund_policy_dto_envelope_t*
ItemsAPI_relateRefundPolicyToStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemRefundPolicyId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/Items/{itemId}/RefundPolicies/{itemRefundPolicyId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/Items/{itemId}/RefundPolicies/{itemRefundPolicyId}");


    // Path Params
    long sizeOfPathParams_itemId = strlen(itemId)+3 + strlen(itemRefundPolicyId)+3 + strlen("{ itemId }");
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

    // Path Params
    long sizeOfPathParams_itemRefundPolicyId = strlen(itemId)+3 + strlen(itemRefundPolicyId)+3 + strlen("{ itemRefundPolicyId }");
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
    //nonprimitive not container
    cJSON *ItemsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    item_refund_policy_dto_envelope_t *elementToReturn = item_refund_policy_dto_envelope_parseFromJSON(ItemsAPIlocalVarJSON);
    cJSON_Delete(ItemsAPIlocalVarJSON);
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

// Relate return policy to stock item
//
// Associates a return policy with a stock item.
//
item_return_policy_dto_envelope_t*
ItemsAPI_relateReturnPolicyToStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemReturnPolicyId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/Items/{itemId}/ReturnPolicies/{itemReturnPolicyId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/Items/{itemId}/ReturnPolicies/{itemReturnPolicyId}");


    // Path Params
    long sizeOfPathParams_itemId = strlen(itemId)+3 + strlen(itemReturnPolicyId)+3 + strlen("{ itemId }");
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

    // Path Params
    long sizeOfPathParams_itemReturnPolicyId = strlen(itemId)+3 + strlen(itemReturnPolicyId)+3 + strlen("{ itemReturnPolicyId }");
    if(itemReturnPolicyId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemReturnPolicyId = malloc(sizeOfPathParams_itemReturnPolicyId);
    sprintf(localVarToReplace_itemReturnPolicyId, "{%s}", "itemReturnPolicyId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemReturnPolicyId, itemReturnPolicyId);
    if(itemReturnPolicyId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemReturnPolicyId = malloc(sizeOfPathParams_itemReturnPolicyId);
    sprintf(localVarToReplace_itemReturnPolicyId, "{%s}", "itemReturnPolicyId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemReturnPolicyId, itemReturnPolicyId);



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
    //nonprimitive not container
    cJSON *ItemsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    item_return_policy_dto_envelope_t *elementToReturn = item_return_policy_dto_envelope_parseFromJSON(ItemsAPIlocalVarJSON);
    cJSON_Delete(ItemsAPIlocalVarJSON);
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
    free(localVarToReplace_itemReturnPolicyId);
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

// Create review for stock item
//
// Creates a new review for a stock item.
//
item_review_dto_envelope_t*
ItemsAPI_relateReviewToStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *api_version, char *x_api_version, item_review_record_create_dto_t *item_review_record_create_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/Items/{itemId}/Reviews")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/Items/{itemId}/Reviews");


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

    // Body Param
    cJSON *localVarSingleItemJSON_item_review_record_create_dto = NULL;
    if (item_review_record_create_dto != NULL)
    {
        //string
        localVarSingleItemJSON_item_review_record_create_dto = item_review_record_create_dto_convertToJSON(item_review_record_create_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_item_review_record_create_dto);
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
    cJSON *ItemsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    item_review_dto_envelope_t *elementToReturn = item_review_dto_envelope_parseFromJSON(ItemsAPIlocalVarJSON);
    cJSON_Delete(ItemsAPIlocalVarJSON);
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
    list_freeList(localVarContentType);
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
    if (localVarSingleItemJSON_item_review_record_create_dto) {
        cJSON_Delete(localVarSingleItemJSON_item_review_record_create_dto);
        localVarSingleItemJSON_item_review_record_create_dto = NULL;
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

// Relate shipping policy to stock item
//
// Associates a shipping policy with a stock item.
//
item_shipping_policy_dto_envelope_t*
ItemsAPI_relateShippingPolicyToStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemShippingPolicyId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/Items/{itemId}/ShippingPolicies/{itemShippingPolicyId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/Items/{itemId}/ShippingPolicies/{itemShippingPolicyId}");


    // Path Params
    long sizeOfPathParams_itemId = strlen(itemId)+3 + strlen(itemShippingPolicyId)+3 + strlen("{ itemId }");
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

    // Path Params
    long sizeOfPathParams_itemShippingPolicyId = strlen(itemId)+3 + strlen(itemShippingPolicyId)+3 + strlen("{ itemShippingPolicyId }");
    if(itemShippingPolicyId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemShippingPolicyId = malloc(sizeOfPathParams_itemShippingPolicyId);
    sprintf(localVarToReplace_itemShippingPolicyId, "{%s}", "itemShippingPolicyId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemShippingPolicyId, itemShippingPolicyId);
    if(itemShippingPolicyId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemShippingPolicyId = malloc(sizeOfPathParams_itemShippingPolicyId);
    sprintf(localVarToReplace_itemShippingPolicyId, "{%s}", "itemShippingPolicyId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemShippingPolicyId, itemShippingPolicyId);



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
    //nonprimitive not container
    cJSON *ItemsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    item_shipping_policy_dto_envelope_t *elementToReturn = item_shipping_policy_dto_envelope_parseFromJSON(ItemsAPIlocalVarJSON);
    cJSON_Delete(ItemsAPIlocalVarJSON);
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
    free(localVarToReplace_itemShippingPolicyId);
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

// Relate tag to stock item
//
// Associates a tag with a stock item.
//
item_tag_dto_envelope_t*
ItemsAPI_relateTagToStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemTagId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/Items/{itemId}/Tags/{itemTagId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/Items/{itemId}/Tags/{itemTagId}");


    // Path Params
    long sizeOfPathParams_itemId = strlen(itemId)+3 + strlen(itemTagId)+3 + strlen("{ itemId }");
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

    // Path Params
    long sizeOfPathParams_itemTagId = strlen(itemId)+3 + strlen(itemTagId)+3 + strlen("{ itemTagId }");
    if(itemTagId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemTagId = malloc(sizeOfPathParams_itemTagId);
    sprintf(localVarToReplace_itemTagId, "{%s}", "itemTagId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemTagId, itemTagId);
    if(itemTagId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemTagId = malloc(sizeOfPathParams_itemTagId);
    sprintf(localVarToReplace_itemTagId, "{%s}", "itemTagId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemTagId, itemTagId);



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
    //nonprimitive not container
    cJSON *ItemsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    item_tag_dto_envelope_t *elementToReturn = item_tag_dto_envelope_parseFromJSON(ItemsAPIlocalVarJSON);
    cJSON_Delete(ItemsAPIlocalVarJSON);
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
    free(localVarToReplace_itemTagId);
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

// Relate tax policy to stock item
//
// Associates a tax policy with a stock item.
//
item_tax_policy_dto_envelope_t*
ItemsAPI_relateTaxPolicyToStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemTaxPolicyId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/Items/{itemId}/TaxPolicies/{itemTaxPolicyId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/Items/{itemId}/TaxPolicies/{itemTaxPolicyId}");


    // Path Params
    long sizeOfPathParams_itemId = strlen(itemId)+3 + strlen(itemTaxPolicyId)+3 + strlen("{ itemId }");
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

    // Path Params
    long sizeOfPathParams_itemTaxPolicyId = strlen(itemId)+3 + strlen(itemTaxPolicyId)+3 + strlen("{ itemTaxPolicyId }");
    if(itemTaxPolicyId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemTaxPolicyId = malloc(sizeOfPathParams_itemTaxPolicyId);
    sprintf(localVarToReplace_itemTaxPolicyId, "{%s}", "itemTaxPolicyId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemTaxPolicyId, itemTaxPolicyId);
    if(itemTaxPolicyId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemTaxPolicyId = malloc(sizeOfPathParams_itemTaxPolicyId);
    sprintf(localVarToReplace_itemTaxPolicyId, "{%s}", "itemTaxPolicyId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemTaxPolicyId, itemTaxPolicyId);



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
    //nonprimitive not container
    cJSON *ItemsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    item_tax_policy_dto_envelope_t *elementToReturn = item_tax_policy_dto_envelope_parseFromJSON(ItemsAPIlocalVarJSON);
    cJSON_Delete(ItemsAPIlocalVarJSON);
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
    free(localVarToReplace_itemTaxPolicyId);
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

// Relate type to stock item
//
// Associates a type with a stock item.
//
item_type_dto_envelope_t*
ItemsAPI_relateTypeToStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemTypeId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/Items/{itemId}/Types/{itemTypeId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/Items/{itemId}/Types/{itemTypeId}");


    // Path Params
    long sizeOfPathParams_itemId = strlen(itemId)+3 + strlen(itemTypeId)+3 + strlen("{ itemId }");
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

    // Path Params
    long sizeOfPathParams_itemTypeId = strlen(itemId)+3 + strlen(itemTypeId)+3 + strlen("{ itemTypeId }");
    if(itemTypeId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemTypeId = malloc(sizeOfPathParams_itemTypeId);
    sprintf(localVarToReplace_itemTypeId, "{%s}", "itemTypeId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemTypeId, itemTypeId);
    if(itemTypeId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemTypeId = malloc(sizeOfPathParams_itemTypeId);
    sprintf(localVarToReplace_itemTypeId, "{%s}", "itemTypeId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemTypeId, itemTypeId);



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
    //nonprimitive not container
    cJSON *ItemsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    item_type_dto_envelope_t *elementToReturn = item_type_dto_envelope_parseFromJSON(ItemsAPIlocalVarJSON);
    cJSON_Delete(ItemsAPIlocalVarJSON);
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
    free(localVarToReplace_itemTypeId);
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

// Relate warranty policy to stock item
//
// Associates a warranty policy with a stock item.
//
item_warranty_policy_dto_envelope_t*
ItemsAPI_relateWarrantyPolicyToStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemWarrantyPolicyId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/Items/{itemId}/WarrantyPolicies/{itemWarrantyPolicyId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/Items/{itemId}/WarrantyPolicies/{itemWarrantyPolicyId}");


    // Path Params
    long sizeOfPathParams_itemId = strlen(itemId)+3 + strlen(itemWarrantyPolicyId)+3 + strlen("{ itemId }");
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

    // Path Params
    long sizeOfPathParams_itemWarrantyPolicyId = strlen(itemId)+3 + strlen(itemWarrantyPolicyId)+3 + strlen("{ itemWarrantyPolicyId }");
    if(itemWarrantyPolicyId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemWarrantyPolicyId = malloc(sizeOfPathParams_itemWarrantyPolicyId);
    sprintf(localVarToReplace_itemWarrantyPolicyId, "{%s}", "itemWarrantyPolicyId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemWarrantyPolicyId, itemWarrantyPolicyId);
    if(itemWarrantyPolicyId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemWarrantyPolicyId = malloc(sizeOfPathParams_itemWarrantyPolicyId);
    sprintf(localVarToReplace_itemWarrantyPolicyId, "{%s}", "itemWarrantyPolicyId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemWarrantyPolicyId, itemWarrantyPolicyId);



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
    //nonprimitive not container
    cJSON *ItemsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    item_warranty_policy_dto_envelope_t *elementToReturn = item_warranty_policy_dto_envelope_parseFromJSON(ItemsAPIlocalVarJSON);
    cJSON_Delete(ItemsAPIlocalVarJSON);
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
    free(localVarToReplace_itemWarrantyPolicyId);
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

// Remove attachment from stock item
//
// Removes an attachment from a stock item.
//
item_attachment_dto_envelope_t*
ItemsAPI_removeAttachmentFromStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemAttachmentId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/Items/{itemId}/Attachments/{itemAttachmentId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/Items/{itemId}/Attachments/{itemAttachmentId}");


    // Path Params
    long sizeOfPathParams_itemId = strlen(itemId)+3 + strlen(itemAttachmentId)+3 + strlen("{ itemId }");
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

    // Path Params
    long sizeOfPathParams_itemAttachmentId = strlen(itemId)+3 + strlen(itemAttachmentId)+3 + strlen("{ itemAttachmentId }");
    if(itemAttachmentId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemAttachmentId = malloc(sizeOfPathParams_itemAttachmentId);
    sprintf(localVarToReplace_itemAttachmentId, "{%s}", "itemAttachmentId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemAttachmentId, itemAttachmentId);
    if(itemAttachmentId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemAttachmentId = malloc(sizeOfPathParams_itemAttachmentId);
    sprintf(localVarToReplace_itemAttachmentId, "{%s}", "itemAttachmentId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemAttachmentId, itemAttachmentId);



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
    //nonprimitive not container
    cJSON *ItemsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    item_attachment_dto_envelope_t *elementToReturn = item_attachment_dto_envelope_parseFromJSON(ItemsAPIlocalVarJSON);
    cJSON_Delete(ItemsAPIlocalVarJSON);
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
    free(localVarToReplace_itemAttachmentId);
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

// Remove attribute option from stock item
//
// Removes an attribute option from a stock item.
//
item_attribute_option_dto_envelope_t*
ItemsAPI_removeAttributeOptionFromStockItem(apiClient_t *apiClient, char *itemId, char *itemAttributeOptionId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/Items/{itemId}/AttributeOptions/{itemAttributeOptionId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/Items/{itemId}/AttributeOptions/{itemAttributeOptionId}");


    // Path Params
    long sizeOfPathParams_itemId = strlen(itemId)+3 + strlen(itemAttributeOptionId)+3 + strlen("{ itemId }");
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

    // Path Params
    long sizeOfPathParams_itemAttributeOptionId = strlen(itemId)+3 + strlen(itemAttributeOptionId)+3 + strlen("{ itemAttributeOptionId }");
    if(itemAttributeOptionId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemAttributeOptionId = malloc(sizeOfPathParams_itemAttributeOptionId);
    sprintf(localVarToReplace_itemAttributeOptionId, "{%s}", "itemAttributeOptionId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemAttributeOptionId, itemAttributeOptionId);
    if(itemAttributeOptionId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemAttributeOptionId = malloc(sizeOfPathParams_itemAttributeOptionId);
    sprintf(localVarToReplace_itemAttributeOptionId, "{%s}", "itemAttributeOptionId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemAttributeOptionId, itemAttributeOptionId);



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
    //nonprimitive not container
    cJSON *ItemsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    item_attribute_option_dto_envelope_t *elementToReturn = item_attribute_option_dto_envelope_parseFromJSON(ItemsAPIlocalVarJSON);
    cJSON_Delete(ItemsAPIlocalVarJSON);
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
    free(localVarToReplace_itemAttributeOptionId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
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

// Remove brand from stock item
//
// Removes a brand association from a stock item.
//
item_brand_dto_envelope_t*
ItemsAPI_removeBrandFromStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemBrandId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/Items/{itemId}/Brands/{itemBrandId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/Items/{itemId}/Brands/{itemBrandId}");


    // Path Params
    long sizeOfPathParams_itemId = strlen(itemId)+3 + strlen(itemBrandId)+3 + strlen("{ itemId }");
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

    // Path Params
    long sizeOfPathParams_itemBrandId = strlen(itemId)+3 + strlen(itemBrandId)+3 + strlen("{ itemBrandId }");
    if(itemBrandId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemBrandId = malloc(sizeOfPathParams_itemBrandId);
    sprintf(localVarToReplace_itemBrandId, "{%s}", "itemBrandId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemBrandId, itemBrandId);
    if(itemBrandId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemBrandId = malloc(sizeOfPathParams_itemBrandId);
    sprintf(localVarToReplace_itemBrandId, "{%s}", "itemBrandId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemBrandId, itemBrandId);



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
    //nonprimitive not container
    cJSON *ItemsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    item_brand_dto_envelope_t *elementToReturn = item_brand_dto_envelope_parseFromJSON(ItemsAPIlocalVarJSON);
    cJSON_Delete(ItemsAPIlocalVarJSON);
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
    free(localVarToReplace_itemBrandId);
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

// Remove category from stock item
//
// Removes a category association from a stock item.
//
item_category_dto_envelope_t*
ItemsAPI_removeCategoryFromStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemCategoryId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/Items/{itemId}/Categories/{itemCategoryId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/Items/{itemId}/Categories/{itemCategoryId}");


    // Path Params
    long sizeOfPathParams_itemId = strlen(itemId)+3 + strlen(itemCategoryId)+3 + strlen("{ itemId }");
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

    // Path Params
    long sizeOfPathParams_itemCategoryId = strlen(itemId)+3 + strlen(itemCategoryId)+3 + strlen("{ itemCategoryId }");
    if(itemCategoryId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemCategoryId = malloc(sizeOfPathParams_itemCategoryId);
    sprintf(localVarToReplace_itemCategoryId, "{%s}", "itemCategoryId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemCategoryId, itemCategoryId);
    if(itemCategoryId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemCategoryId = malloc(sizeOfPathParams_itemCategoryId);
    sprintf(localVarToReplace_itemCategoryId, "{%s}", "itemCategoryId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemCategoryId, itemCategoryId);



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
    //nonprimitive not container
    cJSON *ItemsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    item_category_dto_envelope_t *elementToReturn = item_category_dto_envelope_parseFromJSON(ItemsAPIlocalVarJSON);
    cJSON_Delete(ItemsAPIlocalVarJSON);
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
    free(localVarToReplace_itemCategoryId);
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

// Remove Google category from stock item
//
// Removes a Google category from a stock item.
//
item_google_category_dto_envelope_t*
ItemsAPI_removeGoogleCategoryFromStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemGoogleCategoryId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/Items/{itemId}/GoogleCategories/{itemGoogleCategoryId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/Items/{itemId}/GoogleCategories/{itemGoogleCategoryId}");


    // Path Params
    long sizeOfPathParams_itemId = strlen(itemId)+3 + strlen(itemGoogleCategoryId)+3 + strlen("{ itemId }");
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

    // Path Params
    long sizeOfPathParams_itemGoogleCategoryId = strlen(itemId)+3 + strlen(itemGoogleCategoryId)+3 + strlen("{ itemGoogleCategoryId }");
    if(itemGoogleCategoryId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemGoogleCategoryId = malloc(sizeOfPathParams_itemGoogleCategoryId);
    sprintf(localVarToReplace_itemGoogleCategoryId, "{%s}", "itemGoogleCategoryId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemGoogleCategoryId, itemGoogleCategoryId);
    if(itemGoogleCategoryId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemGoogleCategoryId = malloc(sizeOfPathParams_itemGoogleCategoryId);
    sprintf(localVarToReplace_itemGoogleCategoryId, "{%s}", "itemGoogleCategoryId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemGoogleCategoryId, itemGoogleCategoryId);



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
    //nonprimitive not container
    cJSON *ItemsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    item_google_category_dto_envelope_t *elementToReturn = item_google_category_dto_envelope_parseFromJSON(ItemsAPIlocalVarJSON);
    cJSON_Delete(ItemsAPIlocalVarJSON);
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
    free(localVarToReplace_itemGoogleCategoryId);
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

// Remove image from stock item
//
// Removes an image association from a stock item.
//
item_image_dto_envelope_t*
ItemsAPI_removeImageFromStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemImageId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/Items/{itemId}/Images/{itemImageId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/Items/{itemId}/Images/{itemImageId}");


    // Path Params
    long sizeOfPathParams_itemId = strlen(itemId)+3 + strlen(itemImageId)+3 + strlen("{ itemId }");
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

    // Path Params
    long sizeOfPathParams_itemImageId = strlen(itemId)+3 + strlen(itemImageId)+3 + strlen("{ itemImageId }");
    if(itemImageId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemImageId = malloc(sizeOfPathParams_itemImageId);
    sprintf(localVarToReplace_itemImageId, "{%s}", "itemImageId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemImageId, itemImageId);
    if(itemImageId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemImageId = malloc(sizeOfPathParams_itemImageId);
    sprintf(localVarToReplace_itemImageId, "{%s}", "itemImageId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemImageId, itemImageId);



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
    //nonprimitive not container
    cJSON *ItemsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    item_image_dto_envelope_t *elementToReturn = item_image_dto_envelope_parseFromJSON(ItemsAPIlocalVarJSON);
    cJSON_Delete(ItemsAPIlocalVarJSON);
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
    free(localVarToReplace_itemImageId);
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

// Remove price rule from stock item
//
// Removes a pricing rule from a stock item.
//
pricing_rule_dto_envelope_t*
ItemsAPI_removePriceRuleFromStockItem(apiClient_t *apiClient, char *itemId, char *itemPriceRuleId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/Items/{itemId}/PriceRules/{itemPriceRuleId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/Items/{itemId}/PriceRules/{itemPriceRuleId}");


    // Path Params
    long sizeOfPathParams_itemId = strlen(itemId)+3 + strlen(itemPriceRuleId)+3 + strlen("{ itemId }");
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

    // Path Params
    long sizeOfPathParams_itemPriceRuleId = strlen(itemId)+3 + strlen(itemPriceRuleId)+3 + strlen("{ itemPriceRuleId }");
    if(itemPriceRuleId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemPriceRuleId = malloc(sizeOfPathParams_itemPriceRuleId);
    sprintf(localVarToReplace_itemPriceRuleId, "{%s}", "itemPriceRuleId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemPriceRuleId, itemPriceRuleId);
    if(itemPriceRuleId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemPriceRuleId = malloc(sizeOfPathParams_itemPriceRuleId);
    sprintf(localVarToReplace_itemPriceRuleId, "{%s}", "itemPriceRuleId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemPriceRuleId, itemPriceRuleId);



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
    //nonprimitive not container
    cJSON *ItemsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    pricing_rule_dto_envelope_t *elementToReturn = pricing_rule_dto_envelope_parseFromJSON(ItemsAPIlocalVarJSON);
    cJSON_Delete(ItemsAPIlocalVarJSON);
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
    free(localVarToReplace_itemPriceRuleId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
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

// Remove question from stock item
//
// Removes a question from a stock item.
//
item_question_dto_envelope_t*
ItemsAPI_removeQuestionFromStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemQuestionId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/Items/{itemId}/Questions/{itemQuestionId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/Items/{itemId}/Questions/{itemQuestionId}");


    // Path Params
    long sizeOfPathParams_itemId = strlen(itemId)+3 + strlen(itemQuestionId)+3 + strlen("{ itemId }");
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

    // Path Params
    long sizeOfPathParams_itemQuestionId = strlen(itemId)+3 + strlen(itemQuestionId)+3 + strlen("{ itemQuestionId }");
    if(itemQuestionId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemQuestionId = malloc(sizeOfPathParams_itemQuestionId);
    sprintf(localVarToReplace_itemQuestionId, "{%s}", "itemQuestionId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemQuestionId, itemQuestionId);
    if(itemQuestionId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemQuestionId = malloc(sizeOfPathParams_itemQuestionId);
    sprintf(localVarToReplace_itemQuestionId, "{%s}", "itemQuestionId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemQuestionId, itemQuestionId);



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
    //nonprimitive not container
    cJSON *ItemsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    item_question_dto_envelope_t *elementToReturn = item_question_dto_envelope_parseFromJSON(ItemsAPIlocalVarJSON);
    cJSON_Delete(ItemsAPIlocalVarJSON);
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
    free(localVarToReplace_itemQuestionId);
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

// Remove refund policy from stock item
//
// Removes a refund policy from a stock item.
//
item_refund_policy_dto_envelope_t*
ItemsAPI_removeRefundPolicyFromStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemRefundPolicyId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/Items/{itemId}/RefundPolicies/{itemRefundPolicyId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/Items/{itemId}/RefundPolicies/{itemRefundPolicyId}");


    // Path Params
    long sizeOfPathParams_itemId = strlen(itemId)+3 + strlen(itemRefundPolicyId)+3 + strlen("{ itemId }");
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

    // Path Params
    long sizeOfPathParams_itemRefundPolicyId = strlen(itemId)+3 + strlen(itemRefundPolicyId)+3 + strlen("{ itemRefundPolicyId }");
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
    //nonprimitive not container
    cJSON *ItemsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    item_refund_policy_dto_envelope_t *elementToReturn = item_refund_policy_dto_envelope_parseFromJSON(ItemsAPIlocalVarJSON);
    cJSON_Delete(ItemsAPIlocalVarJSON);
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

// Remove return policy from stock item
//
// Removes a return policy from a stock item.
//
item_return_policy_dto_envelope_t*
ItemsAPI_removeReturnPolicyFromStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemReturnPolicyId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/Items/{itemId}/ReturnPolicies/{itemReturnPolicyId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/Items/{itemId}/ReturnPolicies/{itemReturnPolicyId}");


    // Path Params
    long sizeOfPathParams_itemId = strlen(itemId)+3 + strlen(itemReturnPolicyId)+3 + strlen("{ itemId }");
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

    // Path Params
    long sizeOfPathParams_itemReturnPolicyId = strlen(itemId)+3 + strlen(itemReturnPolicyId)+3 + strlen("{ itemReturnPolicyId }");
    if(itemReturnPolicyId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemReturnPolicyId = malloc(sizeOfPathParams_itemReturnPolicyId);
    sprintf(localVarToReplace_itemReturnPolicyId, "{%s}", "itemReturnPolicyId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemReturnPolicyId, itemReturnPolicyId);
    if(itemReturnPolicyId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemReturnPolicyId = malloc(sizeOfPathParams_itemReturnPolicyId);
    sprintf(localVarToReplace_itemReturnPolicyId, "{%s}", "itemReturnPolicyId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemReturnPolicyId, itemReturnPolicyId);



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
    //nonprimitive not container
    cJSON *ItemsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    item_return_policy_dto_envelope_t *elementToReturn = item_return_policy_dto_envelope_parseFromJSON(ItemsAPIlocalVarJSON);
    cJSON_Delete(ItemsAPIlocalVarJSON);
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
    free(localVarToReplace_itemReturnPolicyId);
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

// Remove review from stock item
//
// Removes a review from a stock item.
//
item_review_dto_envelope_t*
ItemsAPI_removeReviewFromStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemReviewId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/Items/{itemId}/Reviews/{itemReviewId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/Items/{itemId}/Reviews/{itemReviewId}");


    // Path Params
    long sizeOfPathParams_itemId = strlen(itemId)+3 + strlen(itemReviewId)+3 + strlen("{ itemId }");
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

    // Path Params
    long sizeOfPathParams_itemReviewId = strlen(itemId)+3 + strlen(itemReviewId)+3 + strlen("{ itemReviewId }");
    if(itemReviewId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemReviewId = malloc(sizeOfPathParams_itemReviewId);
    sprintf(localVarToReplace_itemReviewId, "{%s}", "itemReviewId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemReviewId, itemReviewId);
    if(itemReviewId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemReviewId = malloc(sizeOfPathParams_itemReviewId);
    sprintf(localVarToReplace_itemReviewId, "{%s}", "itemReviewId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemReviewId, itemReviewId);



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
    //nonprimitive not container
    cJSON *ItemsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    item_review_dto_envelope_t *elementToReturn = item_review_dto_envelope_parseFromJSON(ItemsAPIlocalVarJSON);
    cJSON_Delete(ItemsAPIlocalVarJSON);
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
    free(localVarToReplace_itemReviewId);
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

// Remove shipping policy from stock item
//
// Removes a shipping policy from a stock item.
//
item_shipping_policy_dto_envelope_t*
ItemsAPI_removeShippingPolicyFromStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemShippingPolicyId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/Items/{itemId}/ShippingPolicies/{itemShippingPolicyId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/Items/{itemId}/ShippingPolicies/{itemShippingPolicyId}");


    // Path Params
    long sizeOfPathParams_itemId = strlen(itemId)+3 + strlen(itemShippingPolicyId)+3 + strlen("{ itemId }");
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

    // Path Params
    long sizeOfPathParams_itemShippingPolicyId = strlen(itemId)+3 + strlen(itemShippingPolicyId)+3 + strlen("{ itemShippingPolicyId }");
    if(itemShippingPolicyId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemShippingPolicyId = malloc(sizeOfPathParams_itemShippingPolicyId);
    sprintf(localVarToReplace_itemShippingPolicyId, "{%s}", "itemShippingPolicyId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemShippingPolicyId, itemShippingPolicyId);
    if(itemShippingPolicyId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemShippingPolicyId = malloc(sizeOfPathParams_itemShippingPolicyId);
    sprintf(localVarToReplace_itemShippingPolicyId, "{%s}", "itemShippingPolicyId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemShippingPolicyId, itemShippingPolicyId);



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
    //nonprimitive not container
    cJSON *ItemsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    item_shipping_policy_dto_envelope_t *elementToReturn = item_shipping_policy_dto_envelope_parseFromJSON(ItemsAPIlocalVarJSON);
    cJSON_Delete(ItemsAPIlocalVarJSON);
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
    free(localVarToReplace_itemShippingPolicyId);
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

// Remove tag from stock item
//
// Removes a tag association from a stock item.
//
item_tag_dto_envelope_t*
ItemsAPI_removeTagFromStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemTagId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/Items/{itemId}/Tags/{itemTagId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/Items/{itemId}/Tags/{itemTagId}");


    // Path Params
    long sizeOfPathParams_itemId = strlen(itemId)+3 + strlen(itemTagId)+3 + strlen("{ itemId }");
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

    // Path Params
    long sizeOfPathParams_itemTagId = strlen(itemId)+3 + strlen(itemTagId)+3 + strlen("{ itemTagId }");
    if(itemTagId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemTagId = malloc(sizeOfPathParams_itemTagId);
    sprintf(localVarToReplace_itemTagId, "{%s}", "itemTagId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemTagId, itemTagId);
    if(itemTagId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemTagId = malloc(sizeOfPathParams_itemTagId);
    sprintf(localVarToReplace_itemTagId, "{%s}", "itemTagId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemTagId, itemTagId);



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
    //nonprimitive not container
    cJSON *ItemsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    item_tag_dto_envelope_t *elementToReturn = item_tag_dto_envelope_parseFromJSON(ItemsAPIlocalVarJSON);
    cJSON_Delete(ItemsAPIlocalVarJSON);
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
    free(localVarToReplace_itemTagId);
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

// Remove tax policy from stock item
//
// Removes a tax policy from a stock item.
//
item_tax_policy_dto_envelope_t*
ItemsAPI_removeTaxPolicyFromStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemTaxPolicyId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/Items/{itemId}/TaxPolicies/{itemTaxPolicyId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/Items/{itemId}/TaxPolicies/{itemTaxPolicyId}");


    // Path Params
    long sizeOfPathParams_itemId = strlen(itemId)+3 + strlen(itemTaxPolicyId)+3 + strlen("{ itemId }");
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

    // Path Params
    long sizeOfPathParams_itemTaxPolicyId = strlen(itemId)+3 + strlen(itemTaxPolicyId)+3 + strlen("{ itemTaxPolicyId }");
    if(itemTaxPolicyId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemTaxPolicyId = malloc(sizeOfPathParams_itemTaxPolicyId);
    sprintf(localVarToReplace_itemTaxPolicyId, "{%s}", "itemTaxPolicyId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemTaxPolicyId, itemTaxPolicyId);
    if(itemTaxPolicyId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemTaxPolicyId = malloc(sizeOfPathParams_itemTaxPolicyId);
    sprintf(localVarToReplace_itemTaxPolicyId, "{%s}", "itemTaxPolicyId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemTaxPolicyId, itemTaxPolicyId);



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
    //nonprimitive not container
    cJSON *ItemsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    item_tax_policy_dto_envelope_t *elementToReturn = item_tax_policy_dto_envelope_parseFromJSON(ItemsAPIlocalVarJSON);
    cJSON_Delete(ItemsAPIlocalVarJSON);
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
    free(localVarToReplace_itemTaxPolicyId);
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

// Remove type from stock item
//
// Removes a type association from a stock item.
//
item_type_dto_envelope_t*
ItemsAPI_removeTypeFromStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemTypeId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/Items/{itemId}/Types/{itemTypeId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/Items/{itemId}/Types/{itemTypeId}");


    // Path Params
    long sizeOfPathParams_itemId = strlen(itemId)+3 + strlen(itemTypeId)+3 + strlen("{ itemId }");
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

    // Path Params
    long sizeOfPathParams_itemTypeId = strlen(itemId)+3 + strlen(itemTypeId)+3 + strlen("{ itemTypeId }");
    if(itemTypeId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemTypeId = malloc(sizeOfPathParams_itemTypeId);
    sprintf(localVarToReplace_itemTypeId, "{%s}", "itemTypeId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemTypeId, itemTypeId);
    if(itemTypeId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemTypeId = malloc(sizeOfPathParams_itemTypeId);
    sprintf(localVarToReplace_itemTypeId, "{%s}", "itemTypeId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemTypeId, itemTypeId);



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
    //nonprimitive not container
    cJSON *ItemsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    item_type_dto_envelope_t *elementToReturn = item_type_dto_envelope_parseFromJSON(ItemsAPIlocalVarJSON);
    cJSON_Delete(ItemsAPIlocalVarJSON);
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
    free(localVarToReplace_itemTypeId);
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

// Remove warranty policy from stock item
//
// Removes a warranty policy from a stock item.
//
item_warranty_policy_dto_envelope_t*
ItemsAPI_removeWarrantyPolicyFromStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *itemWarrantyPolicyId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/Items/{itemId}/WarrantyPolicies/{itemWarrantyPolicyId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/Items/{itemId}/WarrantyPolicies/{itemWarrantyPolicyId}");


    // Path Params
    long sizeOfPathParams_itemId = strlen(itemId)+3 + strlen(itemWarrantyPolicyId)+3 + strlen("{ itemId }");
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

    // Path Params
    long sizeOfPathParams_itemWarrantyPolicyId = strlen(itemId)+3 + strlen(itemWarrantyPolicyId)+3 + strlen("{ itemWarrantyPolicyId }");
    if(itemWarrantyPolicyId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemWarrantyPolicyId = malloc(sizeOfPathParams_itemWarrantyPolicyId);
    sprintf(localVarToReplace_itemWarrantyPolicyId, "{%s}", "itemWarrantyPolicyId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemWarrantyPolicyId, itemWarrantyPolicyId);
    if(itemWarrantyPolicyId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemWarrantyPolicyId = malloc(sizeOfPathParams_itemWarrantyPolicyId);
    sprintf(localVarToReplace_itemWarrantyPolicyId, "{%s}", "itemWarrantyPolicyId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemWarrantyPolicyId, itemWarrantyPolicyId);



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
    //nonprimitive not container
    cJSON *ItemsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    item_warranty_policy_dto_envelope_t *elementToReturn = item_warranty_policy_dto_envelope_parseFromJSON(ItemsAPIlocalVarJSON);
    cJSON_Delete(ItemsAPIlocalVarJSON);
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
    free(localVarToReplace_itemWarrantyPolicyId);
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

// Update item primary image
//
// Updates the primary image for a specific catalog item.
//
empty_envelope_t*
ItemsAPI_updateProductPrimaryImageAsync(apiClient_t *apiClient, char *itemId, char *tenantId, char *api_version, char *x_api_version, binary_t* data)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = list_createList();
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/Items/{itemId}/Images/Primary")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/Items/{itemId}/Images/Primary");


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

    // form parameters
    char *keyForm_data = NULL;
    binary_t* valueForm_data = 0;
    keyValuePair_t *keyPairForm_data = 0;
    if (data != NULL)
    {
        keyForm_data = strdup("data");
        valueForm_data = data;
        keyPairForm_data = keyValuePair_create(keyForm_data, &valueForm_data);
        list_addElement(localVarFormParameters,keyPairForm_data); //file adding
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/xml"); //produces
    list_addElement(localVarContentType,"multipart/form-data"); //consumes
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
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    cJSON *ItemsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(ItemsAPIlocalVarJSON);
    cJSON_Delete(ItemsAPIlocalVarJSON);
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
    list_freeList(localVarFormParameters);
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
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
    if (keyForm_data) {
        free(keyForm_data);
        keyForm_data = NULL;
    }
//    free(fileVar_data->data);
//    free(fileVar_data);
    free(keyPairForm_data);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Update a stock item
//
// Updates an existing stock item for the specified tenant and item ID.
//
void
ItemsAPI_updateStockItem(apiClient_t *apiClient, char *tenantId, char *itemId, char *api_version, char *x_api_version, catalog_item_update_dto_t *catalog_item_update_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CatalogService/Items/{itemId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CatalogService/Items/{itemId}");


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

    // Body Param
    cJSON *localVarSingleItemJSON_catalog_item_update_dto = NULL;
    if (catalog_item_update_dto != NULL)
    {
        //string
        localVarSingleItemJSON_catalog_item_update_dto = catalog_item_update_dto_convertToJSON(catalog_item_update_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_catalog_item_update_dto);
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
    list_freeList(localVarContentType);
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
    if (localVarSingleItemJSON_catalog_item_update_dto) {
        cJSON_Delete(localVarSingleItemJSON_catalog_item_update_dto);
        localVarSingleItemJSON_catalog_item_update_dto = NULL;
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

