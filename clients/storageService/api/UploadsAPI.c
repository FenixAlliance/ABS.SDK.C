#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "UploadsAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)

// Functions for enum APPFILESOURCE for UploadsAPI_saveFileAsync

static char* saveFileAsync_APPFILESOURCE_ToString(storageservice_saveFileAsync_appFile.source_e APPFILESOURCE){
    char *APPFILESOURCEArray[] =  { "NULL", "Unknown", "HttpUpload", "Integration", "InternalProcess", "ApiClient", "WorkflowEngine" };
    return APPFILESOURCEArray[APPFILESOURCE];
}

static storageservice_saveFileAsync_appFile.source_e saveFileAsync_APPFILESOURCE_FromString(char* APPFILESOURCE){
    int stringToReturn = 0;
    char *APPFILESOURCEArray[] =  { "NULL", "Unknown", "HttpUpload", "Integration", "InternalProcess", "ApiClient", "WorkflowEngine" };
    size_t sizeofArray = sizeof(APPFILESOURCEArray) / sizeof(APPFILESOURCEArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(APPFILESOURCE, APPFILESOURCEArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

/*
// Function saveFileAsync_APPFILESOURCE_convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *saveFileAsync_APPFILESOURCE_convertToJSON(storageservice_saveFileAsync_appFile.source_e APPFILESOURCE) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "appFile.source", saveFileAsync_APPFILESOURCE_ToString(APPFILESOURCE)) == NULL) {
        goto fail;
    }
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function saveFileAsync_APPFILESOURCE_parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static storageservice_saveFileAsync_appFile.source_e saveFileAsync_APPFILESOURCE_parseFromJSON(cJSON* APPFILESOURCEJSON) {
    storageservice_saveFileAsync_appFile.source_e APPFILESOURCEVariable = 0;
    cJSON *APPFILESOURCEVar = cJSON_GetObjectItemCaseSensitive(APPFILESOURCEJSON, "appFile.source");
    if(!cJSON_IsString(APPFILESOURCEVar) || (APPFILESOURCEVar->valuestring == NULL))
    {
        goto end;
    }
    APPFILESOURCEVariable = saveFileAsync_APPFILESOURCE_FromString(APPFILESOURCEVar->valuestring);
    return APPFILESOURCEVariable;
end:
    return 0;
}
*/


// Upload a file
//
// Uploads a file to tenant or user storage.
//
empty_envelope_t*
UploadsAPI_saveFileAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, char *notes, char *title, char *author, int *isFolder, char *fileName, char *abstract, char *keyWords, int *validResponse, char *parentFileUploadId, char *filePath, char *appFile.content, char *appFile.sha256, char appFile.createdAtUtc, char *appFile.userId.value, char *appFile.tenantId.value, char *appFile.enrollmentId.value, storageservice_saveFileAsync_appFile.source_e appFile.source, long appFile.length, char *appFile.name, char *appFile.fileName, char appFile.lastModified, long appFile.size, char *appFile.contentType, char *appFile.contentDisposition, list_t* appFile.headers, char *id, char timestamp)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = list_createList();
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/StorageService/Uploads")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/StorageService/Uploads");




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
    char *keyForm_appFile.content = NULL;
    char * valueForm_appFile.content = 0;
    keyValuePair_t *keyPairForm_appFile.content = 0;
    if (appFile.content != NULL)
    {
        keyForm_appFile.content = strdup("appFile.content");
        valueForm_appFile.content = (appFile.content);
        keyPairForm_appFile.content = keyValuePair_create(keyForm_appFile.content,&valueForm_appFile.content);
        list_addElement(localVarFormParameters,keyPairForm_appFile.content);
    }

    // form parameters
    char *keyForm_appFile.sha256 = NULL;
    char * valueForm_appFile.sha256 = 0;
    keyValuePair_t *keyPairForm_appFile.sha256 = 0;
    if (appFile.sha256 != NULL)
    {
        keyForm_appFile.sha256 = strdup("appFile.sha256");
        valueForm_appFile.sha256 = strdup((appFile.sha256));
        keyPairForm_appFile.sha256 = keyValuePair_create(keyForm_appFile.sha256,valueForm_appFile.sha256);
        list_addElement(localVarFormParameters,keyPairForm_appFile.sha256);
    }

    // form parameters
    char *keyForm_appFile.createdAtUtc = NULL;
    char valueForm_appFile.createdAtUtc = 0;
    keyValuePair_t *keyPairForm_appFile.createdAtUtc = 0;
    if (appFile.createdAtUtc != NULL)
    {
        keyForm_appFile.createdAtUtc = strdup("appFile.createdAtUtc");
        valueForm_appFile.createdAtUtc = (appFile.createdAtUtc);
        keyPairForm_appFile.createdAtUtc = keyValuePair_create(keyForm_appFile.createdAtUtc,&valueForm_appFile.createdAtUtc);
        list_addElement(localVarFormParameters,keyPairForm_appFile.createdAtUtc);
    }

    // form parameters
    char *keyForm_appFile.userId.value = NULL;
    char * valueForm_appFile.userId.value = 0;
    keyValuePair_t *keyPairForm_appFile.userId.value = 0;
    if (appFile.userId.value != NULL)
    {
        keyForm_appFile.userId.value = strdup("appFile.userId.value");
        valueForm_appFile.userId.value = strdup((appFile.userId.value));
        keyPairForm_appFile.userId.value = keyValuePair_create(keyForm_appFile.userId.value,valueForm_appFile.userId.value);
        list_addElement(localVarFormParameters,keyPairForm_appFile.userId.value);
    }

    // form parameters
    char *keyForm_appFile.tenantId.value = NULL;
    char * valueForm_appFile.tenantId.value = 0;
    keyValuePair_t *keyPairForm_appFile.tenantId.value = 0;
    if (appFile.tenantId.value != NULL)
    {
        keyForm_appFile.tenantId.value = strdup("appFile.tenantId.value");
        valueForm_appFile.tenantId.value = strdup((appFile.tenantId.value));
        keyPairForm_appFile.tenantId.value = keyValuePair_create(keyForm_appFile.tenantId.value,valueForm_appFile.tenantId.value);
        list_addElement(localVarFormParameters,keyPairForm_appFile.tenantId.value);
    }

    // form parameters
    char *keyForm_appFile.enrollmentId.value = NULL;
    char * valueForm_appFile.enrollmentId.value = 0;
    keyValuePair_t *keyPairForm_appFile.enrollmentId.value = 0;
    if (appFile.enrollmentId.value != NULL)
    {
        keyForm_appFile.enrollmentId.value = strdup("appFile.enrollmentId.value");
        valueForm_appFile.enrollmentId.value = strdup((appFile.enrollmentId.value));
        keyPairForm_appFile.enrollmentId.value = keyValuePair_create(keyForm_appFile.enrollmentId.value,valueForm_appFile.enrollmentId.value);
        list_addElement(localVarFormParameters,keyPairForm_appFile.enrollmentId.value);
    }

    // form parameters
    char *keyForm_appFile.source = NULL;
    storageservice_saveFileAsync_appFile.source_e valueForm_appFile.source = 0;
    keyValuePair_t *keyPairForm_appFile.source = 0;
    if (appFile.source != NULL)
    {
        keyForm_appFile.source = strdup("appFile.source");
        valueForm_appFile.source = (appFile.source);
        keyPairForm_appFile.source = keyValuePair_create(keyForm_appFile.source,(void *)valueForm_appFile.source);
        list_addElement(localVarFormParameters,keyPairForm_appFile.source);
    }

    // form parameters
    char *keyForm_appFile.length = NULL;
    long valueForm_appFile.length = 0;
    keyValuePair_t *keyPairForm_appFile.length = 0;
    if (appFile.length != NULL)
    {
        keyForm_appFile.length = strdup("appFile.length");
        valueForm_appFile.length = (appFile.length);
        keyPairForm_appFile.length = keyValuePair_create(keyForm_appFile.length,&valueForm_appFile.length);
        list_addElement(localVarFormParameters,keyPairForm_appFile.length);
    }

    // form parameters
    char *keyForm_appFile.name = NULL;
    char * valueForm_appFile.name = 0;
    keyValuePair_t *keyPairForm_appFile.name = 0;
    if (appFile.name != NULL)
    {
        keyForm_appFile.name = strdup("appFile.name");
        valueForm_appFile.name = strdup((appFile.name));
        keyPairForm_appFile.name = keyValuePair_create(keyForm_appFile.name,valueForm_appFile.name);
        list_addElement(localVarFormParameters,keyPairForm_appFile.name);
    }

    // form parameters
    char *keyForm_appFile.fileName = NULL;
    char * valueForm_appFile.fileName = 0;
    keyValuePair_t *keyPairForm_appFile.fileName = 0;
    if (appFile.fileName != NULL)
    {
        keyForm_appFile.fileName = strdup("appFile.fileName");
        valueForm_appFile.fileName = strdup((appFile.fileName));
        keyPairForm_appFile.fileName = keyValuePair_create(keyForm_appFile.fileName,valueForm_appFile.fileName);
        list_addElement(localVarFormParameters,keyPairForm_appFile.fileName);
    }

    // form parameters
    char *keyForm_appFile.lastModified = NULL;
    char valueForm_appFile.lastModified = 0;
    keyValuePair_t *keyPairForm_appFile.lastModified = 0;
    if (appFile.lastModified != NULL)
    {
        keyForm_appFile.lastModified = strdup("appFile.lastModified");
        valueForm_appFile.lastModified = (appFile.lastModified);
        keyPairForm_appFile.lastModified = keyValuePair_create(keyForm_appFile.lastModified,&valueForm_appFile.lastModified);
        list_addElement(localVarFormParameters,keyPairForm_appFile.lastModified);
    }

    // form parameters
    char *keyForm_appFile.size = NULL;
    long valueForm_appFile.size = 0;
    keyValuePair_t *keyPairForm_appFile.size = 0;
    if (appFile.size != NULL)
    {
        keyForm_appFile.size = strdup("appFile.size");
        valueForm_appFile.size = (appFile.size);
        keyPairForm_appFile.size = keyValuePair_create(keyForm_appFile.size,&valueForm_appFile.size);
        list_addElement(localVarFormParameters,keyPairForm_appFile.size);
    }

    // form parameters
    char *keyForm_appFile.contentType = NULL;
    char * valueForm_appFile.contentType = 0;
    keyValuePair_t *keyPairForm_appFile.contentType = 0;
    if (appFile.contentType != NULL)
    {
        keyForm_appFile.contentType = strdup("appFile.contentType");
        valueForm_appFile.contentType = strdup((appFile.contentType));
        keyPairForm_appFile.contentType = keyValuePair_create(keyForm_appFile.contentType,valueForm_appFile.contentType);
        list_addElement(localVarFormParameters,keyPairForm_appFile.contentType);
    }

    // form parameters
    char *keyForm_appFile.contentDisposition = NULL;
    char * valueForm_appFile.contentDisposition = 0;
    keyValuePair_t *keyPairForm_appFile.contentDisposition = 0;
    if (appFile.contentDisposition != NULL)
    {
        keyForm_appFile.contentDisposition = strdup("appFile.contentDisposition");
        valueForm_appFile.contentDisposition = strdup((appFile.contentDisposition));
        keyPairForm_appFile.contentDisposition = keyValuePair_create(keyForm_appFile.contentDisposition,valueForm_appFile.contentDisposition);
        list_addElement(localVarFormParameters,keyPairForm_appFile.contentDisposition);
    }

    // form parameters
    char *keyForm_appFile.headers = NULL;
     valueForm_appFile.headers = 0;
    keyValuePair_t *keyPairForm_appFile.headers = 0;
    if (appFile.headers != NULL)
    {
        keyForm_appFile.headers = strdup("appFile.headers");
        valueForm_appFile.headers = (appFile.headers);
        keyPairForm_appFile.headers = keyValuePair_create(keyForm_appFile.headers,&valueForm_appFile.headers);
        list_addElement(localVarFormParameters,keyPairForm_appFile.headers);
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
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/xml"); //produces
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
    cJSON *UploadsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(UploadsAPIlocalVarJSON);
    cJSON_Delete(UploadsAPIlocalVarJSON);
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
    if (keyForm_appFile.content) {
        free(keyForm_appFile.content);
        keyForm_appFile.content = NULL;
    }
    free(keyPairForm_appFile.content);
    if (keyForm_appFile.sha256) {
        free(keyForm_appFile.sha256);
        keyForm_appFile.sha256 = NULL;
    }
    if (valueForm_appFile.sha256) {
        free(valueForm_appFile.sha256);
        valueForm_appFile.sha256 = NULL;
    }
    free(keyPairForm_appFile.sha256);
    if (keyForm_appFile.createdAtUtc) {
        free(keyForm_appFile.createdAtUtc);
        keyForm_appFile.createdAtUtc = NULL;
    }
    free(keyPairForm_appFile.createdAtUtc);
    if (keyForm_appFile.userId.value) {
        free(keyForm_appFile.userId.value);
        keyForm_appFile.userId.value = NULL;
    }
    if (valueForm_appFile.userId.value) {
        free(valueForm_appFile.userId.value);
        valueForm_appFile.userId.value = NULL;
    }
    free(keyPairForm_appFile.userId.value);
    if (keyForm_appFile.tenantId.value) {
        free(keyForm_appFile.tenantId.value);
        keyForm_appFile.tenantId.value = NULL;
    }
    if (valueForm_appFile.tenantId.value) {
        free(valueForm_appFile.tenantId.value);
        valueForm_appFile.tenantId.value = NULL;
    }
    free(keyPairForm_appFile.tenantId.value);
    if (keyForm_appFile.enrollmentId.value) {
        free(keyForm_appFile.enrollmentId.value);
        keyForm_appFile.enrollmentId.value = NULL;
    }
    if (valueForm_appFile.enrollmentId.value) {
        free(valueForm_appFile.enrollmentId.value);
        valueForm_appFile.enrollmentId.value = NULL;
    }
    free(keyPairForm_appFile.enrollmentId.value);
    if (keyForm_appFile.source) {
        free(keyForm_appFile.source);
        keyForm_appFile.source = NULL;
    }
    if (valueForm_appFile.source) {
        free(valueForm_appFile.source);
        valueForm_appFile.source = NULL;
    }
    free(keyPairForm_appFile.source);
    if (keyForm_appFile.length) {
        free(keyForm_appFile.length);
        keyForm_appFile.length = NULL;
    }
    free(keyPairForm_appFile.length);
    if (keyForm_appFile.name) {
        free(keyForm_appFile.name);
        keyForm_appFile.name = NULL;
    }
    if (valueForm_appFile.name) {
        free(valueForm_appFile.name);
        valueForm_appFile.name = NULL;
    }
    free(keyPairForm_appFile.name);
    if (keyForm_appFile.fileName) {
        free(keyForm_appFile.fileName);
        keyForm_appFile.fileName = NULL;
    }
    if (valueForm_appFile.fileName) {
        free(valueForm_appFile.fileName);
        valueForm_appFile.fileName = NULL;
    }
    free(keyPairForm_appFile.fileName);
    if (keyForm_appFile.lastModified) {
        free(keyForm_appFile.lastModified);
        keyForm_appFile.lastModified = NULL;
    }
    free(keyPairForm_appFile.lastModified);
    if (keyForm_appFile.size) {
        free(keyForm_appFile.size);
        keyForm_appFile.size = NULL;
    }
    free(keyPairForm_appFile.size);
    if (keyForm_appFile.contentType) {
        free(keyForm_appFile.contentType);
        keyForm_appFile.contentType = NULL;
    }
    if (valueForm_appFile.contentType) {
        free(valueForm_appFile.contentType);
        valueForm_appFile.contentType = NULL;
    }
    free(keyPairForm_appFile.contentType);
    if (keyForm_appFile.contentDisposition) {
        free(keyForm_appFile.contentDisposition);
        keyForm_appFile.contentDisposition = NULL;
    }
    if (valueForm_appFile.contentDisposition) {
        free(valueForm_appFile.contentDisposition);
        valueForm_appFile.contentDisposition = NULL;
    }
    free(keyPairForm_appFile.contentDisposition);
    if (keyForm_appFile.headers) {
        free(keyForm_appFile.headers);
        keyForm_appFile.headers = NULL;
    }
    free(keyPairForm_appFile.headers);
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

