#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "LocationsAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Create Location
//
// Create a new location.
//
empty_envelope_t*
LocationsAPI_createLocationAsync(apiClient_t *apiClient, char *tenantId, location_create_dto_t *location_create_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/LocationsService/Locations")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/LocationsService/Locations");




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
    cJSON *localVarSingleItemJSON_location_create_dto = NULL;
    if (location_create_dto != NULL)
    {
        //string
        localVarSingleItemJSON_location_create_dto = location_create_dto_convertToJSON(location_create_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_location_create_dto);
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
    //if (apiClient->response_code == 201) {
    //    printf("%s\n","Created");
    //}
    //nonprimitive not container
    cJSON *LocationsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(LocationsAPIlocalVarJSON);
    cJSON_Delete(LocationsAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_location_create_dto) {
        cJSON_Delete(localVarSingleItemJSON_location_create_dto);
        localVarSingleItemJSON_location_create_dto = NULL;
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

// Create Wallet Location
//
// Create a new location for a specific wallet.
//
empty_envelope_t*
LocationsAPI_createWalletLocationAsync(apiClient_t *apiClient, char *walletId, location_create_dto_t *location_create_dto)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/LocationsService/Locations/wallet/{walletId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/LocationsService/Locations/wallet/{walletId}");


    // Path Params
    long sizeOfPathParams_walletId = strlen(walletId)+3 + strlen("{ walletId }");
    if(walletId == NULL) {
        goto end;
    }
    char* localVarToReplace_walletId = malloc(sizeOfPathParams_walletId);
    sprintf(localVarToReplace_walletId, "{%s}", "walletId");

    localVarPath = strReplace(localVarPath, localVarToReplace_walletId, walletId);
    if(walletId == NULL) {
        goto end;
    }
    char* localVarToReplace_walletId = malloc(sizeOfPathParams_walletId);
    sprintf(localVarToReplace_walletId, "{%s}", "walletId");

    localVarPath = strReplace(localVarPath, localVarToReplace_walletId, walletId);



    // Body Param
    cJSON *localVarSingleItemJSON_location_create_dto = NULL;
    if (location_create_dto != NULL)
    {
        //string
        localVarSingleItemJSON_location_create_dto = location_create_dto_convertToJSON(location_create_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_location_create_dto);
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
    //if (apiClient->response_code == 201) {
    //    printf("%s\n","Created");
    //}
    //nonprimitive not container
    cJSON *LocationsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(LocationsAPIlocalVarJSON);
    cJSON_Delete(LocationsAPIlocalVarJSON);
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
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_walletId);
    if (localVarSingleItemJSON_location_create_dto) {
        cJSON_Delete(localVarSingleItemJSON_location_create_dto);
        localVarSingleItemJSON_location_create_dto = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Delete Location
//
// Delete a specific location by ID.
//
empty_envelope_t*
LocationsAPI_deleteLocationAsync(apiClient_t *apiClient, char *tenantId, char *locationId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/LocationsService/Locations/{locationId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/LocationsService/Locations/{locationId}");


    // Path Params
    long sizeOfPathParams_locationId = strlen(locationId)+3 + strlen("{ locationId }");
    if(locationId == NULL) {
        goto end;
    }
    char* localVarToReplace_locationId = malloc(sizeOfPathParams_locationId);
    sprintf(localVarToReplace_locationId, "{%s}", "locationId");

    localVarPath = strReplace(localVarPath, localVarToReplace_locationId, locationId);
    if(locationId == NULL) {
        goto end;
    }
    char* localVarToReplace_locationId = malloc(sizeOfPathParams_locationId);
    sprintf(localVarToReplace_locationId, "{%s}", "locationId");

    localVarPath = strReplace(localVarPath, localVarToReplace_locationId, locationId);



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
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","No Content");
    //}
    //nonprimitive not container
    cJSON *LocationsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(LocationsAPIlocalVarJSON);
    cJSON_Delete(LocationsAPIlocalVarJSON);
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
    free(localVarToReplace_locationId);
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

// Delete Wallet Location
//
// Delete a specific location of a wallet.
//
empty_envelope_t*
LocationsAPI_deleteWalletLocationAsync(apiClient_t *apiClient, char *walletId, char *locationId)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/LocationsService/Locations/wallet/{walletId}/{locationId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/LocationsService/Locations/wallet/{walletId}/{locationId}");


    // Path Params
    long sizeOfPathParams_walletId = strlen(walletId)+3 + strlen(locationId)+3 + strlen("{ walletId }");
    if(walletId == NULL) {
        goto end;
    }
    char* localVarToReplace_walletId = malloc(sizeOfPathParams_walletId);
    sprintf(localVarToReplace_walletId, "{%s}", "walletId");

    localVarPath = strReplace(localVarPath, localVarToReplace_walletId, walletId);
    if(walletId == NULL) {
        goto end;
    }
    char* localVarToReplace_walletId = malloc(sizeOfPathParams_walletId);
    sprintf(localVarToReplace_walletId, "{%s}", "walletId");

    localVarPath = strReplace(localVarPath, localVarToReplace_walletId, walletId);

    // Path Params
    long sizeOfPathParams_locationId = strlen(walletId)+3 + strlen(locationId)+3 + strlen("{ locationId }");
    if(locationId == NULL) {
        goto end;
    }
    char* localVarToReplace_locationId = malloc(sizeOfPathParams_locationId);
    sprintf(localVarToReplace_locationId, "{%s}", "locationId");

    localVarPath = strReplace(localVarPath, localVarToReplace_locationId, locationId);
    if(locationId == NULL) {
        goto end;
    }
    char* localVarToReplace_locationId = malloc(sizeOfPathParams_locationId);
    sprintf(localVarToReplace_locationId, "{%s}", "locationId");

    localVarPath = strReplace(localVarPath, localVarToReplace_locationId, locationId);


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
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","No Content");
    //}
    //nonprimitive not container
    cJSON *LocationsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(LocationsAPIlocalVarJSON);
    cJSON_Delete(LocationsAPIlocalVarJSON);
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
    free(localVarToReplace_walletId);
    free(localVarToReplace_locationId);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get Location
//
// Get details of a specific location by ID.
//
location_dto_envelope_t*
LocationsAPI_getLocationAsync(apiClient_t *apiClient, char *tenantId, char *locationId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/LocationsService/Locations/{locationId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/LocationsService/Locations/{locationId}");


    // Path Params
    long sizeOfPathParams_locationId = strlen(locationId)+3 + strlen("{ locationId }");
    if(locationId == NULL) {
        goto end;
    }
    char* localVarToReplace_locationId = malloc(sizeOfPathParams_locationId);
    sprintf(localVarToReplace_locationId, "{%s}", "locationId");

    localVarPath = strReplace(localVarPath, localVarToReplace_locationId, locationId);
    if(locationId == NULL) {
        goto end;
    }
    char* localVarToReplace_locationId = malloc(sizeOfPathParams_locationId);
    sprintf(localVarToReplace_locationId, "{%s}", "locationId");

    localVarPath = strReplace(localVarPath, localVarToReplace_locationId, locationId);



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
    cJSON *LocationsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    location_dto_envelope_t *elementToReturn = location_dto_envelope_parseFromJSON(LocationsAPIlocalVarJSON);
    cJSON_Delete(LocationsAPIlocalVarJSON);
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
    free(localVarToReplace_locationId);
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

// Get Locations
//
// Get all locations with OData query support.
//
location_dto_i_read_only_list_envelope_t*
LocationsAPI_getLocationsAsync(apiClient_t *apiClient, char *tenantId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/LocationsService/Locations")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/LocationsService/Locations");




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
    cJSON *LocationsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    location_dto_i_read_only_list_envelope_t *elementToReturn = location_dto_i_read_only_list_envelope_parseFromJSON(LocationsAPIlocalVarJSON);
    cJSON_Delete(LocationsAPIlocalVarJSON);
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

// Get Locations Count
//
// Get the count of locations with OData query support.
//
int32_envelope_t*
LocationsAPI_getLocationsCountAsync(apiClient_t *apiClient, char *tenantId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/LocationsService/Locations/count")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/LocationsService/Locations/count");




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
    cJSON *LocationsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    int32_envelope_t *elementToReturn = int32_envelope_parseFromJSON(LocationsAPIlocalVarJSON);
    cJSON_Delete(LocationsAPIlocalVarJSON);
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

// Get Wallet Location
//
// Get a specific location of a wallet by ID.
//
location_dto_envelope_t*
LocationsAPI_getWalletLocationAsync(apiClient_t *apiClient, char *walletId, char *locationId)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/LocationsService/Locations/wallet/{walletId}/{locationId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/LocationsService/Locations/wallet/{walletId}/{locationId}");


    // Path Params
    long sizeOfPathParams_walletId = strlen(walletId)+3 + strlen(locationId)+3 + strlen("{ walletId }");
    if(walletId == NULL) {
        goto end;
    }
    char* localVarToReplace_walletId = malloc(sizeOfPathParams_walletId);
    sprintf(localVarToReplace_walletId, "{%s}", "walletId");

    localVarPath = strReplace(localVarPath, localVarToReplace_walletId, walletId);
    if(walletId == NULL) {
        goto end;
    }
    char* localVarToReplace_walletId = malloc(sizeOfPathParams_walletId);
    sprintf(localVarToReplace_walletId, "{%s}", "walletId");

    localVarPath = strReplace(localVarPath, localVarToReplace_walletId, walletId);

    // Path Params
    long sizeOfPathParams_locationId = strlen(walletId)+3 + strlen(locationId)+3 + strlen("{ locationId }");
    if(locationId == NULL) {
        goto end;
    }
    char* localVarToReplace_locationId = malloc(sizeOfPathParams_locationId);
    sprintf(localVarToReplace_locationId, "{%s}", "locationId");

    localVarPath = strReplace(localVarPath, localVarToReplace_locationId, locationId);
    if(locationId == NULL) {
        goto end;
    }
    char* localVarToReplace_locationId = malloc(sizeOfPathParams_locationId);
    sprintf(localVarToReplace_locationId, "{%s}", "locationId");

    localVarPath = strReplace(localVarPath, localVarToReplace_locationId, locationId);


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
    cJSON *LocationsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    location_dto_envelope_t *elementToReturn = location_dto_envelope_parseFromJSON(LocationsAPIlocalVarJSON);
    cJSON_Delete(LocationsAPIlocalVarJSON);
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
    free(localVarToReplace_walletId);
    free(localVarToReplace_locationId);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get Wallet Locations
//
// Get locations for a specific wallet by ID.
//
location_dto_i_read_only_list_envelope_t*
LocationsAPI_getWalletLocationsAsync(apiClient_t *apiClient, char *walletId)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/LocationsService/Locations/wallet/{walletId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/LocationsService/Locations/wallet/{walletId}");


    // Path Params
    long sizeOfPathParams_walletId = strlen(walletId)+3 + strlen("{ walletId }");
    if(walletId == NULL) {
        goto end;
    }
    char* localVarToReplace_walletId = malloc(sizeOfPathParams_walletId);
    sprintf(localVarToReplace_walletId, "{%s}", "walletId");

    localVarPath = strReplace(localVarPath, localVarToReplace_walletId, walletId);
    if(walletId == NULL) {
        goto end;
    }
    char* localVarToReplace_walletId = malloc(sizeOfPathParams_walletId);
    sprintf(localVarToReplace_walletId, "{%s}", "walletId");

    localVarPath = strReplace(localVarPath, localVarToReplace_walletId, walletId);


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
    cJSON *LocationsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    location_dto_i_read_only_list_envelope_t *elementToReturn = location_dto_i_read_only_list_envelope_parseFromJSON(LocationsAPIlocalVarJSON);
    cJSON_Delete(LocationsAPIlocalVarJSON);
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
    free(localVarToReplace_walletId);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get Wallet Locations Count
//
// Get the count of locations for a specific wallet by ID.
//
int32_envelope_t*
LocationsAPI_getWalletLocationsCountAsync(apiClient_t *apiClient, char *walletId)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/LocationsService/Locations/wallet/{walletId}/count")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/LocationsService/Locations/wallet/{walletId}/count");


    // Path Params
    long sizeOfPathParams_walletId = strlen(walletId)+3 + strlen("{ walletId }");
    if(walletId == NULL) {
        goto end;
    }
    char* localVarToReplace_walletId = malloc(sizeOfPathParams_walletId);
    sprintf(localVarToReplace_walletId, "{%s}", "walletId");

    localVarPath = strReplace(localVarPath, localVarToReplace_walletId, walletId);
    if(walletId == NULL) {
        goto end;
    }
    char* localVarToReplace_walletId = malloc(sizeOfPathParams_walletId);
    sprintf(localVarToReplace_walletId, "{%s}", "walletId");

    localVarPath = strReplace(localVarPath, localVarToReplace_walletId, walletId);


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
    cJSON *LocationsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    int32_envelope_t *elementToReturn = int32_envelope_parseFromJSON(LocationsAPIlocalVarJSON);
    cJSON_Delete(LocationsAPIlocalVarJSON);
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
    free(localVarToReplace_walletId);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Update Location
//
// Update a specific location by ID.
//
empty_envelope_t*
LocationsAPI_updateLocationAsync(apiClient_t *apiClient, char *tenantId, char *locationId, location_update_dto_t *location_update_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/LocationsService/Locations/{locationId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/LocationsService/Locations/{locationId}");


    // Path Params
    long sizeOfPathParams_locationId = strlen(locationId)+3 + strlen("{ locationId }");
    if(locationId == NULL) {
        goto end;
    }
    char* localVarToReplace_locationId = malloc(sizeOfPathParams_locationId);
    sprintf(localVarToReplace_locationId, "{%s}", "locationId");

    localVarPath = strReplace(localVarPath, localVarToReplace_locationId, locationId);
    if(locationId == NULL) {
        goto end;
    }
    char* localVarToReplace_locationId = malloc(sizeOfPathParams_locationId);
    sprintf(localVarToReplace_locationId, "{%s}", "locationId");

    localVarPath = strReplace(localVarPath, localVarToReplace_locationId, locationId);



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
    cJSON *localVarSingleItemJSON_location_update_dto = NULL;
    if (location_update_dto != NULL)
    {
        //string
        localVarSingleItemJSON_location_update_dto = location_update_dto_convertToJSON(location_update_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_location_update_dto);
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
    //nonprimitive not container
    cJSON *LocationsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(LocationsAPIlocalVarJSON);
    cJSON_Delete(LocationsAPIlocalVarJSON);
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
    free(localVarToReplace_locationId);
    if (localVarSingleItemJSON_location_update_dto) {
        cJSON_Delete(localVarSingleItemJSON_location_update_dto);
        localVarSingleItemJSON_location_update_dto = NULL;
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

// Update Wallet Location
//
// Update a specific location of a wallet.
//
empty_envelope_t*
LocationsAPI_updateWalletLocationAsync(apiClient_t *apiClient, char *walletId, char *locationId, location_update_dto_t *location_update_dto)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/LocationsService/Locations/wallet/{walletId}/{locationId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/LocationsService/Locations/wallet/{walletId}/{locationId}");


    // Path Params
    long sizeOfPathParams_walletId = strlen(walletId)+3 + strlen(locationId)+3 + strlen("{ walletId }");
    if(walletId == NULL) {
        goto end;
    }
    char* localVarToReplace_walletId = malloc(sizeOfPathParams_walletId);
    sprintf(localVarToReplace_walletId, "{%s}", "walletId");

    localVarPath = strReplace(localVarPath, localVarToReplace_walletId, walletId);
    if(walletId == NULL) {
        goto end;
    }
    char* localVarToReplace_walletId = malloc(sizeOfPathParams_walletId);
    sprintf(localVarToReplace_walletId, "{%s}", "walletId");

    localVarPath = strReplace(localVarPath, localVarToReplace_walletId, walletId);

    // Path Params
    long sizeOfPathParams_locationId = strlen(walletId)+3 + strlen(locationId)+3 + strlen("{ locationId }");
    if(locationId == NULL) {
        goto end;
    }
    char* localVarToReplace_locationId = malloc(sizeOfPathParams_locationId);
    sprintf(localVarToReplace_locationId, "{%s}", "locationId");

    localVarPath = strReplace(localVarPath, localVarToReplace_locationId, locationId);
    if(locationId == NULL) {
        goto end;
    }
    char* localVarToReplace_locationId = malloc(sizeOfPathParams_locationId);
    sprintf(localVarToReplace_locationId, "{%s}", "locationId");

    localVarPath = strReplace(localVarPath, localVarToReplace_locationId, locationId);



    // Body Param
    cJSON *localVarSingleItemJSON_location_update_dto = NULL;
    if (location_update_dto != NULL)
    {
        //string
        localVarSingleItemJSON_location_update_dto = location_update_dto_convertToJSON(location_update_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_location_update_dto);
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
    //nonprimitive not container
    cJSON *LocationsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(LocationsAPIlocalVarJSON);
    cJSON_Delete(LocationsAPIlocalVarJSON);
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
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_walletId);
    free(localVarToReplace_locationId);
    if (localVarSingleItemJSON_location_update_dto) {
        cJSON_Delete(localVarSingleItemJSON_location_update_dto);
        localVarSingleItemJSON_location_update_dto = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

