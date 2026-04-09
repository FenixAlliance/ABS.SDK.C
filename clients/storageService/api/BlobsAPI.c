#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "BlobsAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


blob_envelope_t*
BlobsAPI_getBlobAsync(apiClient_t *apiClient, char *tenantId, char *filePath, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/StorageService/Blobs/Single")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/StorageService/Blobs/Single");




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
    char *keyQuery_filePath = NULL;
    char * valueQuery_filePath = NULL;
    keyValuePair_t *keyPairQuery_filePath = 0;
    if (filePath)
    {
        keyQuery_filePath = strdup("filePath");
        valueQuery_filePath = strdup((filePath));
        keyPairQuery_filePath = keyValuePair_create(keyQuery_filePath, valueQuery_filePath);
        list_addElement(localVarQueryParameters,keyPairQuery_filePath);
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
    list_addElement(localVarHeaderType,"image/png"); //produces
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
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    cJSON *BlobsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    blob_envelope_t *elementToReturn = blob_envelope_parseFromJSON(BlobsAPIlocalVarJSON);
    cJSON_Delete(BlobsAPIlocalVarJSON);
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
    if(keyQuery_filePath){
        free(keyQuery_filePath);
        keyQuery_filePath = NULL;
    }
    if(valueQuery_filePath){
        free(valueQuery_filePath);
        valueQuery_filePath = NULL;
    }
    if(keyPairQuery_filePath){
        keyValuePair_free(keyPairQuery_filePath);
        keyPairQuery_filePath = NULL;
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

blob_envelope_t*
BlobsAPI_getBlobsAsync(apiClient_t *apiClient, char *tenantId, char *folderPath, char *browseFilter, char *filePrefix, int *recurse, int *maxResults, int *includeAttributes, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/StorageService/Blobs")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/StorageService/Blobs");




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
    char *keyQuery_folderPath = NULL;
    char * valueQuery_folderPath = NULL;
    keyValuePair_t *keyPairQuery_folderPath = 0;
    if (folderPath)
    {
        keyQuery_folderPath = strdup("folderPath");
        valueQuery_folderPath = strdup((folderPath));
        keyPairQuery_folderPath = keyValuePair_create(keyQuery_folderPath, valueQuery_folderPath);
        list_addElement(localVarQueryParameters,keyPairQuery_folderPath);
    }

    // query parameters
    char *keyQuery_browseFilter = NULL;
    char * valueQuery_browseFilter = NULL;
    keyValuePair_t *keyPairQuery_browseFilter = 0;
    if (browseFilter)
    {
        keyQuery_browseFilter = strdup("browseFilter");
        valueQuery_browseFilter = strdup((browseFilter));
        keyPairQuery_browseFilter = keyValuePair_create(keyQuery_browseFilter, valueQuery_browseFilter);
        list_addElement(localVarQueryParameters,keyPairQuery_browseFilter);
    }

    // query parameters
    char *keyQuery_filePrefix = NULL;
    char * valueQuery_filePrefix = NULL;
    keyValuePair_t *keyPairQuery_filePrefix = 0;
    if (filePrefix)
    {
        keyQuery_filePrefix = strdup("filePrefix");
        valueQuery_filePrefix = strdup((filePrefix));
        keyPairQuery_filePrefix = keyValuePair_create(keyQuery_filePrefix, valueQuery_filePrefix);
        list_addElement(localVarQueryParameters,keyPairQuery_filePrefix);
    }

    // query parameters
    char *keyQuery_recurse = NULL;
    char * valueQuery_recurse = NULL;
    keyValuePair_t *keyPairQuery_recurse = 0;
    if (recurse)
    {
        keyQuery_recurse = strdup("recurse");
        valueQuery_recurse = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_recurse, MAX_NUMBER_LENGTH, "%d", *recurse);
        keyPairQuery_recurse = keyValuePair_create(keyQuery_recurse, valueQuery_recurse);
        list_addElement(localVarQueryParameters,keyPairQuery_recurse);
    }

    // query parameters
    char *keyQuery_maxResults = NULL;
    char * valueQuery_maxResults = NULL;
    keyValuePair_t *keyPairQuery_maxResults = 0;
    if (maxResults)
    {
        keyQuery_maxResults = strdup("maxResults");
        valueQuery_maxResults = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_maxResults, MAX_NUMBER_LENGTH, "%d", *maxResults);
        keyPairQuery_maxResults = keyValuePair_create(keyQuery_maxResults, valueQuery_maxResults);
        list_addElement(localVarQueryParameters,keyPairQuery_maxResults);
    }

    // query parameters
    char *keyQuery_includeAttributes = NULL;
    char * valueQuery_includeAttributes = NULL;
    keyValuePair_t *keyPairQuery_includeAttributes = 0;
    if (includeAttributes)
    {
        keyQuery_includeAttributes = strdup("includeAttributes");
        valueQuery_includeAttributes = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_includeAttributes, MAX_NUMBER_LENGTH, "%d", *includeAttributes);
        keyPairQuery_includeAttributes = keyValuePair_create(keyQuery_includeAttributes, valueQuery_includeAttributes);
        list_addElement(localVarQueryParameters,keyPairQuery_includeAttributes);
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
    list_addElement(localVarHeaderType,"image/png"); //produces
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
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    cJSON *BlobsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    blob_envelope_t *elementToReturn = blob_envelope_parseFromJSON(BlobsAPIlocalVarJSON);
    cJSON_Delete(BlobsAPIlocalVarJSON);
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
    if(keyQuery_folderPath){
        free(keyQuery_folderPath);
        keyQuery_folderPath = NULL;
    }
    if(valueQuery_folderPath){
        free(valueQuery_folderPath);
        valueQuery_folderPath = NULL;
    }
    if(keyPairQuery_folderPath){
        keyValuePair_free(keyPairQuery_folderPath);
        keyPairQuery_folderPath = NULL;
    }
    if(keyQuery_browseFilter){
        free(keyQuery_browseFilter);
        keyQuery_browseFilter = NULL;
    }
    if(valueQuery_browseFilter){
        free(valueQuery_browseFilter);
        valueQuery_browseFilter = NULL;
    }
    if(keyPairQuery_browseFilter){
        keyValuePair_free(keyPairQuery_browseFilter);
        keyPairQuery_browseFilter = NULL;
    }
    if(keyQuery_filePrefix){
        free(keyQuery_filePrefix);
        keyQuery_filePrefix = NULL;
    }
    if(valueQuery_filePrefix){
        free(valueQuery_filePrefix);
        valueQuery_filePrefix = NULL;
    }
    if(keyPairQuery_filePrefix){
        keyValuePair_free(keyPairQuery_filePrefix);
        keyPairQuery_filePrefix = NULL;
    }
    if(keyQuery_recurse){
        free(keyQuery_recurse);
        keyQuery_recurse = NULL;
    }
    if(valueQuery_recurse){
        free(valueQuery_recurse);
        valueQuery_recurse = NULL;
    }
    if(keyPairQuery_recurse){
        keyValuePair_free(keyPairQuery_recurse);
        keyPairQuery_recurse = NULL;
    }
    if(keyQuery_maxResults){
        free(keyQuery_maxResults);
        keyQuery_maxResults = NULL;
    }
    if(valueQuery_maxResults){
        free(valueQuery_maxResults);
        valueQuery_maxResults = NULL;
    }
    if(keyPairQuery_maxResults){
        keyValuePair_free(keyPairQuery_maxResults);
        keyPairQuery_maxResults = NULL;
    }
    if(keyQuery_includeAttributes){
        free(keyQuery_includeAttributes);
        keyQuery_includeAttributes = NULL;
    }
    if(valueQuery_includeAttributes){
        free(valueQuery_includeAttributes);
        valueQuery_includeAttributes = NULL;
    }
    if(keyPairQuery_includeAttributes){
        keyValuePair_free(keyPairQuery_includeAttributes);
        keyPairQuery_includeAttributes = NULL;
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

