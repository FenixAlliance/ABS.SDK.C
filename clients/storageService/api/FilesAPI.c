#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "FilesAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


empty_envelope_t*
FilesAPI_createFileAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, char *id, char timestamp, char *notes, char *title, char *author, int *isFolder, char *fileName, char *abstract, char *keyWords, int *validResponse, char *parentFileUploadId, char *filePath, binary_t* file)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = list_createList();
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/StorageService/Files")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/StorageService/Files");




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
    char *keyForm_id = NULL;
    char * valueForm_id = 0;
    keyValuePair_t *keyPairForm_id = 0;
    if (id != NULL)
    {
        keyForm_id = strdup("id");
        valueForm_id = strdup((id));
        keyPairForm_id = keyValuePair_create(keyForm_id,valueForm_id);
        list_addElement(localVarFormParameters,keyPairForm_id);
    }

    // form parameters
    char *keyForm_timestamp = NULL;
    char valueForm_timestamp = 0;
    keyValuePair_t *keyPairForm_timestamp = 0;
    if (timestamp != NULL)
    {
        keyForm_timestamp = strdup("timestamp");
        valueForm_timestamp = (timestamp);
        keyPairForm_timestamp = keyValuePair_create(keyForm_timestamp,&valueForm_timestamp);
        list_addElement(localVarFormParameters,keyPairForm_timestamp);
    }

    // form parameters
    char *keyForm_notes = NULL;
    char * valueForm_notes = 0;
    keyValuePair_t *keyPairForm_notes = 0;
    if (notes != NULL)
    {
        keyForm_notes = strdup("notes");
        valueForm_notes = strdup((notes));
        keyPairForm_notes = keyValuePair_create(keyForm_notes,valueForm_notes);
        list_addElement(localVarFormParameters,keyPairForm_notes);
    }

    // form parameters
    char *keyForm_title = NULL;
    char * valueForm_title = 0;
    keyValuePair_t *keyPairForm_title = 0;
    if (title != NULL)
    {
        keyForm_title = strdup("title");
        valueForm_title = strdup((title));
        keyPairForm_title = keyValuePair_create(keyForm_title,valueForm_title);
        list_addElement(localVarFormParameters,keyPairForm_title);
    }

    // form parameters
    char *keyForm_author = NULL;
    char * valueForm_author = 0;
    keyValuePair_t *keyPairForm_author = 0;
    if (author != NULL)
    {
        keyForm_author = strdup("author");
        valueForm_author = strdup((author));
        keyPairForm_author = keyValuePair_create(keyForm_author,valueForm_author);
        list_addElement(localVarFormParameters,keyPairForm_author);
    }

    // form parameters
    char *keyForm_isFolder = NULL;
    int valueForm_isFolder = 0;
    keyValuePair_t *keyPairForm_isFolder = 0;
    if (isFolder != NULL)
    {
        keyForm_isFolder = strdup("isFolder");
        valueForm_isFolder = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueForm_isFolder, MAX_NUMBER_LENGTH, "%d", *isFolder);
        keyPairForm_isFolder = keyValuePair_create(keyForm_isFolder,&valueForm_isFolder);
        list_addElement(localVarFormParameters,keyPairForm_isFolder);
    }

    // form parameters
    char *keyForm_fileName = NULL;
    char * valueForm_fileName = 0;
    keyValuePair_t *keyPairForm_fileName = 0;
    if (fileName != NULL)
    {
        keyForm_fileName = strdup("fileName");
        valueForm_fileName = strdup((fileName));
        keyPairForm_fileName = keyValuePair_create(keyForm_fileName,valueForm_fileName);
        list_addElement(localVarFormParameters,keyPairForm_fileName);
    }

    // form parameters
    char *keyForm_abstract = NULL;
    char * valueForm_abstract = 0;
    keyValuePair_t *keyPairForm_abstract = 0;
    if (abstract != NULL)
    {
        keyForm_abstract = strdup("abstract");
        valueForm_abstract = strdup((abstract));
        keyPairForm_abstract = keyValuePair_create(keyForm_abstract,valueForm_abstract);
        list_addElement(localVarFormParameters,keyPairForm_abstract);
    }

    // form parameters
    char *keyForm_keyWords = NULL;
    char * valueForm_keyWords = 0;
    keyValuePair_t *keyPairForm_keyWords = 0;
    if (keyWords != NULL)
    {
        keyForm_keyWords = strdup("keyWords");
        valueForm_keyWords = strdup((keyWords));
        keyPairForm_keyWords = keyValuePair_create(keyForm_keyWords,valueForm_keyWords);
        list_addElement(localVarFormParameters,keyPairForm_keyWords);
    }

    // form parameters
    char *keyForm_validResponse = NULL;
    int valueForm_validResponse = 0;
    keyValuePair_t *keyPairForm_validResponse = 0;
    if (validResponse != NULL)
    {
        keyForm_validResponse = strdup("validResponse");
        valueForm_validResponse = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueForm_validResponse, MAX_NUMBER_LENGTH, "%d", *validResponse);
        keyPairForm_validResponse = keyValuePair_create(keyForm_validResponse,&valueForm_validResponse);
        list_addElement(localVarFormParameters,keyPairForm_validResponse);
    }

    // form parameters
    char *keyForm_parentFileUploadId = NULL;
    char * valueForm_parentFileUploadId = 0;
    keyValuePair_t *keyPairForm_parentFileUploadId = 0;
    if (parentFileUploadId != NULL)
    {
        keyForm_parentFileUploadId = strdup("parentFileUploadId");
        valueForm_parentFileUploadId = strdup((parentFileUploadId));
        keyPairForm_parentFileUploadId = keyValuePair_create(keyForm_parentFileUploadId,valueForm_parentFileUploadId);
        list_addElement(localVarFormParameters,keyPairForm_parentFileUploadId);
    }

    // form parameters
    char *keyForm_filePath = NULL;
    char * valueForm_filePath = 0;
    keyValuePair_t *keyPairForm_filePath = 0;
    if (filePath != NULL)
    {
        keyForm_filePath = strdup("filePath");
        valueForm_filePath = strdup((filePath));
        keyPairForm_filePath = keyValuePair_create(keyForm_filePath,valueForm_filePath);
        list_addElement(localVarFormParameters,keyPairForm_filePath);
    }

    // form parameters
    char *keyForm_file = NULL;
    binary_t* valueForm_file = 0;
    keyValuePair_t *keyPairForm_file = 0;
    if (file != NULL)
    {
        keyForm_file = strdup("file");
        valueForm_file = file;
        keyPairForm_file = keyValuePair_create(keyForm_file, &valueForm_file);
        list_addElement(localVarFormParameters,keyPairForm_file); //file adding
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"image/png"); //produces
    list_addElement(localVarContentType,"multipart/form-data"); //consumes
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
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad Request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 409) {
    //    printf("%s\n","Conflict");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","Unprocessable Content");
    //}
    //nonprimitive not container
    cJSON *FilesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(FilesAPIlocalVarJSON);
    cJSON_Delete(FilesAPIlocalVarJSON);
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
    if (keyForm_id) {
        free(keyForm_id);
        keyForm_id = NULL;
    }
    if (valueForm_id) {
        free(valueForm_id);
        valueForm_id = NULL;
    }
    free(keyPairForm_id);
    if (keyForm_timestamp) {
        free(keyForm_timestamp);
        keyForm_timestamp = NULL;
    }
    free(keyPairForm_timestamp);
    if (keyForm_notes) {
        free(keyForm_notes);
        keyForm_notes = NULL;
    }
    if (valueForm_notes) {
        free(valueForm_notes);
        valueForm_notes = NULL;
    }
    free(keyPairForm_notes);
    if (keyForm_title) {
        free(keyForm_title);
        keyForm_title = NULL;
    }
    if (valueForm_title) {
        free(valueForm_title);
        valueForm_title = NULL;
    }
    free(keyPairForm_title);
    if (keyForm_author) {
        free(keyForm_author);
        keyForm_author = NULL;
    }
    if (valueForm_author) {
        free(valueForm_author);
        valueForm_author = NULL;
    }
    free(keyPairForm_author);
    if (keyForm_isFolder) {
        free(keyForm_isFolder);
        keyForm_isFolder = NULL;
    }
    free(keyPairForm_isFolder);
    if (keyForm_fileName) {
        free(keyForm_fileName);
        keyForm_fileName = NULL;
    }
    if (valueForm_fileName) {
        free(valueForm_fileName);
        valueForm_fileName = NULL;
    }
    free(keyPairForm_fileName);
    if (keyForm_abstract) {
        free(keyForm_abstract);
        keyForm_abstract = NULL;
    }
    if (valueForm_abstract) {
        free(valueForm_abstract);
        valueForm_abstract = NULL;
    }
    free(keyPairForm_abstract);
    if (keyForm_keyWords) {
        free(keyForm_keyWords);
        keyForm_keyWords = NULL;
    }
    if (valueForm_keyWords) {
        free(valueForm_keyWords);
        valueForm_keyWords = NULL;
    }
    free(keyPairForm_keyWords);
    if (keyForm_validResponse) {
        free(keyForm_validResponse);
        keyForm_validResponse = NULL;
    }
    free(keyPairForm_validResponse);
    if (keyForm_parentFileUploadId) {
        free(keyForm_parentFileUploadId);
        keyForm_parentFileUploadId = NULL;
    }
    if (valueForm_parentFileUploadId) {
        free(valueForm_parentFileUploadId);
        valueForm_parentFileUploadId = NULL;
    }
    free(keyPairForm_parentFileUploadId);
    if (keyForm_filePath) {
        free(keyForm_filePath);
        keyForm_filePath = NULL;
    }
    if (valueForm_filePath) {
        free(valueForm_filePath);
        valueForm_filePath = NULL;
    }
    free(keyPairForm_filePath);
    if (keyForm_file) {
        free(keyForm_file);
        keyForm_file = NULL;
    }
//    free(fileVar_file->data);
//    free(fileVar_file);
    free(keyPairForm_file);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

file_upload_dto_envelope_t*
FilesAPI_deleteFileAsync(apiClient_t *apiClient, char *fileId, char *tenantId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/StorageService/Files/{fileId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/StorageService/Files/{fileId}");


    // Path Params
    long sizeOfPathParams_fileId = strlen(fileId)+3 + strlen("{ fileId }");
    if(fileId == NULL) {
        goto end;
    }
    char* localVarToReplace_fileId = malloc(sizeOfPathParams_fileId);
    sprintf(localVarToReplace_fileId, "{%s}", "fileId");

    localVarPath = strReplace(localVarPath, localVarToReplace_fileId, fileId);
    if(fileId == NULL) {
        goto end;
    }
    char* localVarToReplace_fileId = malloc(sizeOfPathParams_fileId);
    sprintf(localVarToReplace_fileId, "{%s}", "fileId");

    localVarPath = strReplace(localVarPath, localVarToReplace_fileId, fileId);



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
    list_addElement(localVarHeaderType,"image/png"); //produces
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
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad Request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 409) {
    //    printf("%s\n","Conflict");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","Unprocessable Content");
    //}
    //nonprimitive not container
    cJSON *FilesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    file_upload_dto_envelope_t *elementToReturn = file_upload_dto_envelope_parseFromJSON(FilesAPIlocalVarJSON);
    cJSON_Delete(FilesAPIlocalVarJSON);
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
    free(localVarToReplace_fileId);
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

binary_t**
FilesAPI_downloadFileAsync(apiClient_t *apiClient, char *fileId, char *tenantId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/StorageService/Files/{fileId}/Raw")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/StorageService/Files/{fileId}/Raw");


    // Path Params
    long sizeOfPathParams_fileId = strlen(fileId)+3 + strlen("{ fileId }");
    if(fileId == NULL) {
        goto end;
    }
    char* localVarToReplace_fileId = malloc(sizeOfPathParams_fileId);
    sprintf(localVarToReplace_fileId, "{%s}", "fileId");

    localVarPath = strReplace(localVarPath, localVarToReplace_fileId, fileId);
    if(fileId == NULL) {
        goto end;
    }
    char* localVarToReplace_fileId = malloc(sizeOfPathParams_fileId);
    sprintf(localVarToReplace_fileId, "{%s}", "fileId");

    localVarPath = strReplace(localVarPath, localVarToReplace_fileId, fileId);



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
    //primitive return type simple
    binary_t** elementToReturn =  strdup((binary_t**)apiClient->dataReceived);

    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    list_freeList(localVarHeaderParameters);
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_fileId);
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

file_upload_dto_envelope_t*
FilesAPI_getFileAsync(apiClient_t *apiClient, char *fileId, char *tenantId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/StorageService/Files/{fileId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/StorageService/Files/{fileId}");


    // Path Params
    long sizeOfPathParams_fileId = strlen(fileId)+3 + strlen("{ fileId }");
    if(fileId == NULL) {
        goto end;
    }
    char* localVarToReplace_fileId = malloc(sizeOfPathParams_fileId);
    sprintf(localVarToReplace_fileId, "{%s}", "fileId");

    localVarPath = strReplace(localVarPath, localVarToReplace_fileId, fileId);
    if(fileId == NULL) {
        goto end;
    }
    char* localVarToReplace_fileId = malloc(sizeOfPathParams_fileId);
    sprintf(localVarToReplace_fileId, "{%s}", "fileId");

    localVarPath = strReplace(localVarPath, localVarToReplace_fileId, fileId);



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
    cJSON *FilesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    file_upload_dto_envelope_t *elementToReturn = file_upload_dto_envelope_parseFromJSON(FilesAPIlocalVarJSON);
    cJSON_Delete(FilesAPIlocalVarJSON);
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
    free(localVarToReplace_fileId);
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

file_upload_dto_envelope_t*
FilesAPI_getFilesAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/StorageService/Files")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/StorageService/Files");




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
    cJSON *FilesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    file_upload_dto_envelope_t *elementToReturn = file_upload_dto_envelope_parseFromJSON(FilesAPIlocalVarJSON);
    cJSON_Delete(FilesAPIlocalVarJSON);
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

file_upload_dto_envelope_t*
FilesAPI_updateFileAsync(apiClient_t *apiClient, char *fileId, char *tenantId, char *api_version, char *x_api_version, char *notes, char *metadata, char *title, char *author, int *isFolder, char *fileName, char *abstract, char *keyWords, int *validResponse, char *parentFileUploadID, char *filePath, binary_t* file)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = list_createList();
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/StorageService/Files/{fileId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/StorageService/Files/{fileId}");


    // Path Params
    long sizeOfPathParams_fileId = strlen(fileId)+3 + strlen("{ fileId }");
    if(fileId == NULL) {
        goto end;
    }
    char* localVarToReplace_fileId = malloc(sizeOfPathParams_fileId);
    sprintf(localVarToReplace_fileId, "{%s}", "fileId");

    localVarPath = strReplace(localVarPath, localVarToReplace_fileId, fileId);
    if(fileId == NULL) {
        goto end;
    }
    char* localVarToReplace_fileId = malloc(sizeOfPathParams_fileId);
    sprintf(localVarToReplace_fileId, "{%s}", "fileId");

    localVarPath = strReplace(localVarPath, localVarToReplace_fileId, fileId);



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
    char *keyForm_notes = NULL;
    char * valueForm_notes = 0;
    keyValuePair_t *keyPairForm_notes = 0;
    if (notes != NULL)
    {
        keyForm_notes = strdup("notes");
        valueForm_notes = strdup((notes));
        keyPairForm_notes = keyValuePair_create(keyForm_notes,valueForm_notes);
        list_addElement(localVarFormParameters,keyPairForm_notes);
    }

    // form parameters
    char *keyForm_metadata = NULL;
    char * valueForm_metadata = 0;
    keyValuePair_t *keyPairForm_metadata = 0;
    if (metadata != NULL)
    {
        keyForm_metadata = strdup("metadata");
        valueForm_metadata = strdup((metadata));
        keyPairForm_metadata = keyValuePair_create(keyForm_metadata,valueForm_metadata);
        list_addElement(localVarFormParameters,keyPairForm_metadata);
    }

    // form parameters
    char *keyForm_title = NULL;
    char * valueForm_title = 0;
    keyValuePair_t *keyPairForm_title = 0;
    if (title != NULL)
    {
        keyForm_title = strdup("title");
        valueForm_title = strdup((title));
        keyPairForm_title = keyValuePair_create(keyForm_title,valueForm_title);
        list_addElement(localVarFormParameters,keyPairForm_title);
    }

    // form parameters
    char *keyForm_author = NULL;
    char * valueForm_author = 0;
    keyValuePair_t *keyPairForm_author = 0;
    if (author != NULL)
    {
        keyForm_author = strdup("author");
        valueForm_author = strdup((author));
        keyPairForm_author = keyValuePair_create(keyForm_author,valueForm_author);
        list_addElement(localVarFormParameters,keyPairForm_author);
    }

    // form parameters
    char *keyForm_isFolder = NULL;
    int valueForm_isFolder = 0;
    keyValuePair_t *keyPairForm_isFolder = 0;
    if (isFolder != NULL)
    {
        keyForm_isFolder = strdup("isFolder");
        valueForm_isFolder = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueForm_isFolder, MAX_NUMBER_LENGTH, "%d", *isFolder);
        keyPairForm_isFolder = keyValuePair_create(keyForm_isFolder,&valueForm_isFolder);
        list_addElement(localVarFormParameters,keyPairForm_isFolder);
    }

    // form parameters
    char *keyForm_fileName = NULL;
    char * valueForm_fileName = 0;
    keyValuePair_t *keyPairForm_fileName = 0;
    if (fileName != NULL)
    {
        keyForm_fileName = strdup("fileName");
        valueForm_fileName = strdup((fileName));
        keyPairForm_fileName = keyValuePair_create(keyForm_fileName,valueForm_fileName);
        list_addElement(localVarFormParameters,keyPairForm_fileName);
    }

    // form parameters
    char *keyForm_abstract = NULL;
    char * valueForm_abstract = 0;
    keyValuePair_t *keyPairForm_abstract = 0;
    if (abstract != NULL)
    {
        keyForm_abstract = strdup("abstract");
        valueForm_abstract = strdup((abstract));
        keyPairForm_abstract = keyValuePair_create(keyForm_abstract,valueForm_abstract);
        list_addElement(localVarFormParameters,keyPairForm_abstract);
    }

    // form parameters
    char *keyForm_keyWords = NULL;
    char * valueForm_keyWords = 0;
    keyValuePair_t *keyPairForm_keyWords = 0;
    if (keyWords != NULL)
    {
        keyForm_keyWords = strdup("keyWords");
        valueForm_keyWords = strdup((keyWords));
        keyPairForm_keyWords = keyValuePair_create(keyForm_keyWords,valueForm_keyWords);
        list_addElement(localVarFormParameters,keyPairForm_keyWords);
    }

    // form parameters
    char *keyForm_validResponse = NULL;
    int valueForm_validResponse = 0;
    keyValuePair_t *keyPairForm_validResponse = 0;
    if (validResponse != NULL)
    {
        keyForm_validResponse = strdup("validResponse");
        valueForm_validResponse = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueForm_validResponse, MAX_NUMBER_LENGTH, "%d", *validResponse);
        keyPairForm_validResponse = keyValuePair_create(keyForm_validResponse,&valueForm_validResponse);
        list_addElement(localVarFormParameters,keyPairForm_validResponse);
    }

    // form parameters
    char *keyForm_parentFileUploadID = NULL;
    char * valueForm_parentFileUploadID = 0;
    keyValuePair_t *keyPairForm_parentFileUploadID = 0;
    if (parentFileUploadID != NULL)
    {
        keyForm_parentFileUploadID = strdup("parentFileUploadID");
        valueForm_parentFileUploadID = strdup((parentFileUploadID));
        keyPairForm_parentFileUploadID = keyValuePair_create(keyForm_parentFileUploadID,valueForm_parentFileUploadID);
        list_addElement(localVarFormParameters,keyPairForm_parentFileUploadID);
    }

    // form parameters
    char *keyForm_filePath = NULL;
    char * valueForm_filePath = 0;
    keyValuePair_t *keyPairForm_filePath = 0;
    if (filePath != NULL)
    {
        keyForm_filePath = strdup("filePath");
        valueForm_filePath = strdup((filePath));
        keyPairForm_filePath = keyValuePair_create(keyForm_filePath,valueForm_filePath);
        list_addElement(localVarFormParameters,keyPairForm_filePath);
    }

    // form parameters
    char *keyForm_file = NULL;
    binary_t* valueForm_file = 0;
    keyValuePair_t *keyPairForm_file = 0;
    if (file != NULL)
    {
        keyForm_file = strdup("file");
        valueForm_file = file;
        keyPairForm_file = keyValuePair_create(keyForm_file, &valueForm_file);
        list_addElement(localVarFormParameters,keyPairForm_file); //file adding
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"image/png"); //produces
    list_addElement(localVarContentType,"multipart/form-data"); //consumes
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
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad Request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 409) {
    //    printf("%s\n","Conflict");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","Unprocessable Content");
    //}
    //nonprimitive not container
    cJSON *FilesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    file_upload_dto_envelope_t *elementToReturn = file_upload_dto_envelope_parseFromJSON(FilesAPIlocalVarJSON);
    cJSON_Delete(FilesAPIlocalVarJSON);
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
    free(localVarToReplace_fileId);
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
    if (keyForm_notes) {
        free(keyForm_notes);
        keyForm_notes = NULL;
    }
    if (valueForm_notes) {
        free(valueForm_notes);
        valueForm_notes = NULL;
    }
    free(keyPairForm_notes);
    if (keyForm_metadata) {
        free(keyForm_metadata);
        keyForm_metadata = NULL;
    }
    if (valueForm_metadata) {
        free(valueForm_metadata);
        valueForm_metadata = NULL;
    }
    free(keyPairForm_metadata);
    if (keyForm_title) {
        free(keyForm_title);
        keyForm_title = NULL;
    }
    if (valueForm_title) {
        free(valueForm_title);
        valueForm_title = NULL;
    }
    free(keyPairForm_title);
    if (keyForm_author) {
        free(keyForm_author);
        keyForm_author = NULL;
    }
    if (valueForm_author) {
        free(valueForm_author);
        valueForm_author = NULL;
    }
    free(keyPairForm_author);
    if (keyForm_isFolder) {
        free(keyForm_isFolder);
        keyForm_isFolder = NULL;
    }
    free(keyPairForm_isFolder);
    if (keyForm_fileName) {
        free(keyForm_fileName);
        keyForm_fileName = NULL;
    }
    if (valueForm_fileName) {
        free(valueForm_fileName);
        valueForm_fileName = NULL;
    }
    free(keyPairForm_fileName);
    if (keyForm_abstract) {
        free(keyForm_abstract);
        keyForm_abstract = NULL;
    }
    if (valueForm_abstract) {
        free(valueForm_abstract);
        valueForm_abstract = NULL;
    }
    free(keyPairForm_abstract);
    if (keyForm_keyWords) {
        free(keyForm_keyWords);
        keyForm_keyWords = NULL;
    }
    if (valueForm_keyWords) {
        free(valueForm_keyWords);
        valueForm_keyWords = NULL;
    }
    free(keyPairForm_keyWords);
    if (keyForm_validResponse) {
        free(keyForm_validResponse);
        keyForm_validResponse = NULL;
    }
    free(keyPairForm_validResponse);
    if (keyForm_parentFileUploadID) {
        free(keyForm_parentFileUploadID);
        keyForm_parentFileUploadID = NULL;
    }
    if (valueForm_parentFileUploadID) {
        free(valueForm_parentFileUploadID);
        valueForm_parentFileUploadID = NULL;
    }
    free(keyPairForm_parentFileUploadID);
    if (keyForm_filePath) {
        free(keyForm_filePath);
        keyForm_filePath = NULL;
    }
    if (valueForm_filePath) {
        free(valueForm_filePath);
        valueForm_filePath = NULL;
    }
    free(keyPairForm_filePath);
    if (keyForm_file) {
        free(keyForm_file);
        keyForm_file = NULL;
    }
//    free(fileVar_file->data);
//    free(fileVar_file);
    free(keyPairForm_file);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

