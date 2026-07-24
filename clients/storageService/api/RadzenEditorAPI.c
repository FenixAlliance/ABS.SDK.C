#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "RadzenEditorAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Upload an editor image to tenant storage.
//
void
RadzenEditorAPI_radzenUploadImage(apiClient_t *apiClient, char *tenantId, char *visibility, char *socialProfileId, char *purpose, char *api_version, char *x_api_version, binary_t* file)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = list_createList();
    list_t *localVarHeaderType = NULL;
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/fs/radzen/tenants/{tenantId}/upload/image")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/fs/radzen/tenants/{tenantId}/upload/image");


    // Path Params
    long sizeOfPathParams_tenantId = strlen(tenantId)+3 + strlen("{ tenantId }");
    if(tenantId == NULL) {
        goto end;
    }
    char* localVarToReplace_tenantId = malloc(sizeOfPathParams_tenantId);
    sprintf(localVarToReplace_tenantId, "{%s}", "tenantId");

    localVarPath = strReplace(localVarPath, localVarToReplace_tenantId, tenantId);
    if(tenantId == NULL) {
        goto end;
    }
    char* localVarToReplace_tenantId = malloc(sizeOfPathParams_tenantId);
    sprintf(localVarToReplace_tenantId, "{%s}", "tenantId");

    localVarPath = strReplace(localVarPath, localVarToReplace_tenantId, tenantId);



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
    char *keyQuery_visibility = NULL;
    char * valueQuery_visibility = NULL;
    keyValuePair_t *keyPairQuery_visibility = 0;
    if (visibility)
    {
        keyQuery_visibility = strdup("visibility");
        valueQuery_visibility = strdup((visibility));
        keyPairQuery_visibility = keyValuePair_create(keyQuery_visibility, valueQuery_visibility);
        list_addElement(localVarQueryParameters,keyPairQuery_visibility);
    }

    // query parameters
    char *keyQuery_socialProfileId = NULL;
    char * valueQuery_socialProfileId = NULL;
    keyValuePair_t *keyPairQuery_socialProfileId = 0;
    if (socialProfileId)
    {
        keyQuery_socialProfileId = strdup("socialProfileId");
        valueQuery_socialProfileId = strdup((socialProfileId));
        keyPairQuery_socialProfileId = keyValuePair_create(keyQuery_socialProfileId, valueQuery_socialProfileId);
        list_addElement(localVarQueryParameters,keyPairQuery_socialProfileId);
    }

    // query parameters
    char *keyQuery_purpose = NULL;
    char * valueQuery_purpose = NULL;
    keyValuePair_t *keyPairQuery_purpose = 0;
    if (purpose)
    {
        keyQuery_purpose = strdup("purpose");
        valueQuery_purpose = strdup((purpose));
        keyPairQuery_purpose = keyValuePair_create(keyQuery_purpose, valueQuery_purpose);
        list_addElement(localVarQueryParameters,keyPairQuery_purpose);
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
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    list_freeList(localVarHeaderParameters);
    list_freeList(localVarFormParameters);
    
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_tenantId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
    if(keyQuery_visibility){
        free(keyQuery_visibility);
        keyQuery_visibility = NULL;
    }
    if(valueQuery_visibility){
        free(valueQuery_visibility);
        valueQuery_visibility = NULL;
    }
    if(keyPairQuery_visibility){
        keyValuePair_free(keyPairQuery_visibility);
        keyPairQuery_visibility = NULL;
    }
    if(keyQuery_visibility){
        free(keyQuery_visibility);
        keyQuery_visibility = NULL;
    }
    if(keyPairQuery_visibility){
        keyValuePair_free(keyPairQuery_visibility);
        keyPairQuery_visibility = NULL;
    }
    if(keyQuery_socialProfileId){
        free(keyQuery_socialProfileId);
        keyQuery_socialProfileId = NULL;
    }
    if(valueQuery_socialProfileId){
        free(valueQuery_socialProfileId);
        valueQuery_socialProfileId = NULL;
    }
    if(keyPairQuery_socialProfileId){
        keyValuePair_free(keyPairQuery_socialProfileId);
        keyPairQuery_socialProfileId = NULL;
    }
    if(keyQuery_socialProfileId){
        free(keyQuery_socialProfileId);
        keyQuery_socialProfileId = NULL;
    }
    if(keyPairQuery_socialProfileId){
        keyValuePair_free(keyPairQuery_socialProfileId);
        keyPairQuery_socialProfileId = NULL;
    }
    if(keyQuery_purpose){
        free(keyQuery_purpose);
        keyQuery_purpose = NULL;
    }
    if(valueQuery_purpose){
        free(valueQuery_purpose);
        valueQuery_purpose = NULL;
    }
    if(keyPairQuery_purpose){
        keyValuePair_free(keyPairQuery_purpose);
        keyPairQuery_purpose = NULL;
    }
    if(keyQuery_purpose){
        free(keyQuery_purpose);
        keyQuery_purpose = NULL;
    }
    if(keyPairQuery_purpose){
        keyValuePair_free(keyPairQuery_purpose);
        keyPairQuery_purpose = NULL;
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
    if (keyForm_file) {
        free(keyForm_file);
        keyForm_file = NULL;
    }
//    free(fileVar_file->data);
//    free(fileVar_file);

}

// Upload an editor image scoped to a record.
//
void
RadzenEditorAPI_radzenUploadImageScoped(apiClient_t *apiClient, char *tenantId, char *recordType, char *recordId, char *visibility, char *socialProfileId, char *purpose, char *api_version, char *x_api_version, binary_t* file)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = list_createList();
    list_t *localVarHeaderType = NULL;
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/fs/radzen/tenants/{tenantId}/{recordType}/{recordId}/upload/image")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/fs/radzen/tenants/{tenantId}/{recordType}/{recordId}/upload/image");


    // Path Params
    long sizeOfPathParams_tenantId = strlen(tenantId)+3 + strlen(recordType)+3 + strlen(recordId)+3 + strlen("{ tenantId }");
    if(tenantId == NULL) {
        goto end;
    }
    char* localVarToReplace_tenantId = malloc(sizeOfPathParams_tenantId);
    sprintf(localVarToReplace_tenantId, "{%s}", "tenantId");

    localVarPath = strReplace(localVarPath, localVarToReplace_tenantId, tenantId);
    if(tenantId == NULL) {
        goto end;
    }
    char* localVarToReplace_tenantId = malloc(sizeOfPathParams_tenantId);
    sprintf(localVarToReplace_tenantId, "{%s}", "tenantId");

    localVarPath = strReplace(localVarPath, localVarToReplace_tenantId, tenantId);

    // Path Params
    long sizeOfPathParams_recordType = strlen(tenantId)+3 + strlen(recordType)+3 + strlen(recordId)+3 + strlen("{ recordType }");
    if(recordType == NULL) {
        goto end;
    }
    char* localVarToReplace_recordType = malloc(sizeOfPathParams_recordType);
    sprintf(localVarToReplace_recordType, "{%s}", "recordType");

    localVarPath = strReplace(localVarPath, localVarToReplace_recordType, recordType);

    // Path Params
    long sizeOfPathParams_recordId = strlen(tenantId)+3 + strlen(recordType)+3 + strlen(recordId)+3 + strlen("{ recordId }");
    if(recordId == NULL) {
        goto end;
    }
    char* localVarToReplace_recordId = malloc(sizeOfPathParams_recordId);
    sprintf(localVarToReplace_recordId, "{%s}", "recordId");

    localVarPath = strReplace(localVarPath, localVarToReplace_recordId, recordId);



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
    char *keyQuery_visibility = NULL;
    char * valueQuery_visibility = NULL;
    keyValuePair_t *keyPairQuery_visibility = 0;
    if (visibility)
    {
        keyQuery_visibility = strdup("visibility");
        valueQuery_visibility = strdup((visibility));
        keyPairQuery_visibility = keyValuePair_create(keyQuery_visibility, valueQuery_visibility);
        list_addElement(localVarQueryParameters,keyPairQuery_visibility);
    }

    // query parameters
    char *keyQuery_socialProfileId = NULL;
    char * valueQuery_socialProfileId = NULL;
    keyValuePair_t *keyPairQuery_socialProfileId = 0;
    if (socialProfileId)
    {
        keyQuery_socialProfileId = strdup("socialProfileId");
        valueQuery_socialProfileId = strdup((socialProfileId));
        keyPairQuery_socialProfileId = keyValuePair_create(keyQuery_socialProfileId, valueQuery_socialProfileId);
        list_addElement(localVarQueryParameters,keyPairQuery_socialProfileId);
    }

    // query parameters
    char *keyQuery_purpose = NULL;
    char * valueQuery_purpose = NULL;
    keyValuePair_t *keyPairQuery_purpose = 0;
    if (purpose)
    {
        keyQuery_purpose = strdup("purpose");
        valueQuery_purpose = strdup((purpose));
        keyPairQuery_purpose = keyValuePair_create(keyQuery_purpose, valueQuery_purpose);
        list_addElement(localVarQueryParameters,keyPairQuery_purpose);
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
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    list_freeList(localVarHeaderParameters);
    list_freeList(localVarFormParameters);
    
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_tenantId);
    free(localVarToReplace_recordType);
    free(localVarToReplace_recordId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
    if(keyQuery_visibility){
        free(keyQuery_visibility);
        keyQuery_visibility = NULL;
    }
    if(valueQuery_visibility){
        free(valueQuery_visibility);
        valueQuery_visibility = NULL;
    }
    if(keyPairQuery_visibility){
        keyValuePair_free(keyPairQuery_visibility);
        keyPairQuery_visibility = NULL;
    }
    if(keyQuery_visibility){
        free(keyQuery_visibility);
        keyQuery_visibility = NULL;
    }
    if(keyPairQuery_visibility){
        keyValuePair_free(keyPairQuery_visibility);
        keyPairQuery_visibility = NULL;
    }
    if(keyQuery_socialProfileId){
        free(keyQuery_socialProfileId);
        keyQuery_socialProfileId = NULL;
    }
    if(valueQuery_socialProfileId){
        free(valueQuery_socialProfileId);
        valueQuery_socialProfileId = NULL;
    }
    if(keyPairQuery_socialProfileId){
        keyValuePair_free(keyPairQuery_socialProfileId);
        keyPairQuery_socialProfileId = NULL;
    }
    if(keyQuery_socialProfileId){
        free(keyQuery_socialProfileId);
        keyQuery_socialProfileId = NULL;
    }
    if(keyPairQuery_socialProfileId){
        keyValuePair_free(keyPairQuery_socialProfileId);
        keyPairQuery_socialProfileId = NULL;
    }
    if(keyQuery_purpose){
        free(keyQuery_purpose);
        keyQuery_purpose = NULL;
    }
    if(valueQuery_purpose){
        free(valueQuery_purpose);
        valueQuery_purpose = NULL;
    }
    if(keyPairQuery_purpose){
        keyValuePair_free(keyPairQuery_purpose);
        keyPairQuery_purpose = NULL;
    }
    if(keyQuery_purpose){
        free(keyQuery_purpose);
        keyQuery_purpose = NULL;
    }
    if(keyPairQuery_purpose){
        keyValuePair_free(keyPairQuery_purpose);
        keyPairQuery_purpose = NULL;
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
    if (keyForm_file) {
        free(keyForm_file);
        keyForm_file = NULL;
    }
//    free(fileVar_file->data);
//    free(fileVar_file);

}

// Upload a single editor file to tenant storage.
//
void
RadzenEditorAPI_radzenUploadSingle(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version, binary_t* file)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = list_createList();
    list_t *localVarHeaderType = NULL;
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/fs/radzen/tenants/{tenantId}/upload/single")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/fs/radzen/tenants/{tenantId}/upload/single");


    // Path Params
    long sizeOfPathParams_tenantId = strlen(tenantId)+3 + strlen("{ tenantId }");
    if(tenantId == NULL) {
        goto end;
    }
    char* localVarToReplace_tenantId = malloc(sizeOfPathParams_tenantId);
    sprintf(localVarToReplace_tenantId, "{%s}", "tenantId");

    localVarPath = strReplace(localVarPath, localVarToReplace_tenantId, tenantId);
    if(tenantId == NULL) {
        goto end;
    }
    char* localVarToReplace_tenantId = malloc(sizeOfPathParams_tenantId);
    sprintf(localVarToReplace_tenantId, "{%s}", "tenantId");

    localVarPath = strReplace(localVarPath, localVarToReplace_tenantId, tenantId);



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
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    list_freeList(localVarHeaderParameters);
    list_freeList(localVarFormParameters);
    
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_tenantId);
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
    if(keyQuery_api_version){
        free(keyQuery_api_version);
        keyQuery_api_version = NULL;
    }
    if(keyPairQuery_api_version){
        keyValuePair_free(keyPairQuery_api_version);
        keyPairQuery_api_version = NULL;
    }
    if (keyForm_file) {
        free(keyForm_file);
        keyForm_file = NULL;
    }
//    free(fileVar_file->data);
//    free(fileVar_file);

}

// Upload a single editor file scoped to a record.
//
void
RadzenEditorAPI_radzenUploadSingleScoped(apiClient_t *apiClient, char *tenantId, char *recordType, char *recordId, char *api_version, char *x_api_version, binary_t* file)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = list_createList();
    list_t *localVarHeaderType = NULL;
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/fs/radzen/tenants/{tenantId}/{recordType}/{recordId}/upload/single")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/fs/radzen/tenants/{tenantId}/{recordType}/{recordId}/upload/single");


    // Path Params
    long sizeOfPathParams_tenantId = strlen(tenantId)+3 + strlen(recordType)+3 + strlen(recordId)+3 + strlen("{ tenantId }");
    if(tenantId == NULL) {
        goto end;
    }
    char* localVarToReplace_tenantId = malloc(sizeOfPathParams_tenantId);
    sprintf(localVarToReplace_tenantId, "{%s}", "tenantId");

    localVarPath = strReplace(localVarPath, localVarToReplace_tenantId, tenantId);
    if(tenantId == NULL) {
        goto end;
    }
    char* localVarToReplace_tenantId = malloc(sizeOfPathParams_tenantId);
    sprintf(localVarToReplace_tenantId, "{%s}", "tenantId");

    localVarPath = strReplace(localVarPath, localVarToReplace_tenantId, tenantId);

    // Path Params
    long sizeOfPathParams_recordType = strlen(tenantId)+3 + strlen(recordType)+3 + strlen(recordId)+3 + strlen("{ recordType }");
    if(recordType == NULL) {
        goto end;
    }
    char* localVarToReplace_recordType = malloc(sizeOfPathParams_recordType);
    sprintf(localVarToReplace_recordType, "{%s}", "recordType");

    localVarPath = strReplace(localVarPath, localVarToReplace_recordType, recordType);

    // Path Params
    long sizeOfPathParams_recordId = strlen(tenantId)+3 + strlen(recordType)+3 + strlen(recordId)+3 + strlen("{ recordId }");
    if(recordId == NULL) {
        goto end;
    }
    char* localVarToReplace_recordId = malloc(sizeOfPathParams_recordId);
    sprintf(localVarToReplace_recordId, "{%s}", "recordId");

    localVarPath = strReplace(localVarPath, localVarToReplace_recordId, recordId);



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
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    list_freeList(localVarHeaderParameters);
    list_freeList(localVarFormParameters);
    
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_tenantId);
    free(localVarToReplace_recordType);
    free(localVarToReplace_recordId);
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
    if(keyQuery_api_version){
        free(keyQuery_api_version);
        keyQuery_api_version = NULL;
    }
    if(keyPairQuery_api_version){
        keyValuePair_free(keyPairQuery_api_version);
        keyPairQuery_api_version = NULL;
    }
    if (keyForm_file) {
        free(keyForm_file);
        keyForm_file = NULL;
    }
//    free(fileVar_file->data);
//    free(fileVar_file);

}

// Chunked editor upload (not implemented).
//
void
RadzenEditorAPI_radzenUploadStream(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = NULL;
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/fs/radzen/tenants/{tenantId}/upload/stream")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/fs/radzen/tenants/{tenantId}/upload/stream");


    // Path Params
    long sizeOfPathParams_tenantId = strlen(tenantId)+3 + strlen("{ tenantId }");
    if(tenantId == NULL) {
        goto end;
    }
    char* localVarToReplace_tenantId = malloc(sizeOfPathParams_tenantId);
    sprintf(localVarToReplace_tenantId, "{%s}", "tenantId");

    localVarPath = strReplace(localVarPath, localVarToReplace_tenantId, tenantId);



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
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    list_freeList(localVarHeaderParameters);
    
    
    
    free(localVarPath);
    free(localVarToReplace_tenantId);
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
    if(keyQuery_api_version){
        free(keyQuery_api_version);
        keyQuery_api_version = NULL;
    }
    if(keyPairQuery_api_version){
        keyValuePair_free(keyPairQuery_api_version);
        keyPairQuery_api_version = NULL;
    }

}

// Chunked editor upload scoped to a record (not implemented).
//
void
RadzenEditorAPI_radzenUploadStreamScoped(apiClient_t *apiClient, char *tenantId, char *recordType, char *recordId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = NULL;
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/fs/radzen/tenants/{tenantId}/{recordType}/{recordId}/upload/stream")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/fs/radzen/tenants/{tenantId}/{recordType}/{recordId}/upload/stream");


    // Path Params
    long sizeOfPathParams_tenantId = strlen(tenantId)+3 + strlen(recordType)+3 + strlen(recordId)+3 + strlen("{ tenantId }");
    if(tenantId == NULL) {
        goto end;
    }
    char* localVarToReplace_tenantId = malloc(sizeOfPathParams_tenantId);
    sprintf(localVarToReplace_tenantId, "{%s}", "tenantId");

    localVarPath = strReplace(localVarPath, localVarToReplace_tenantId, tenantId);

    // Path Params
    long sizeOfPathParams_recordType = strlen(tenantId)+3 + strlen(recordType)+3 + strlen(recordId)+3 + strlen("{ recordType }");
    if(recordType == NULL) {
        goto end;
    }
    char* localVarToReplace_recordType = malloc(sizeOfPathParams_recordType);
    sprintf(localVarToReplace_recordType, "{%s}", "recordType");

    localVarPath = strReplace(localVarPath, localVarToReplace_recordType, recordType);

    // Path Params
    long sizeOfPathParams_recordId = strlen(tenantId)+3 + strlen(recordType)+3 + strlen(recordId)+3 + strlen("{ recordId }");
    if(recordId == NULL) {
        goto end;
    }
    char* localVarToReplace_recordId = malloc(sizeOfPathParams_recordId);
    sprintf(localVarToReplace_recordId, "{%s}", "recordId");

    localVarPath = strReplace(localVarPath, localVarToReplace_recordId, recordId);



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
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    list_freeList(localVarHeaderParameters);
    
    
    
    free(localVarPath);
    free(localVarToReplace_tenantId);
    free(localVarToReplace_recordType);
    free(localVarToReplace_recordId);
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
    if(keyQuery_api_version){
        free(keyQuery_api_version);
        keyQuery_api_version = NULL;
    }
    if(keyPairQuery_api_version){
        keyValuePair_free(keyPairQuery_api_version);
        keyPairQuery_api_version = NULL;
    }

}

// Upload an editor image to user storage.
//
void
RadzenEditorAPI_radzenUploadUserImage(apiClient_t *apiClient, char *visibility, char *socialProfileId, char *purpose, char *api_version, char *x_api_version, binary_t* file)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = list_createList();
    list_t *localVarHeaderType = NULL;
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/fs/radzen/users/upload/image")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/fs/radzen/users/upload/image");




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
    char *keyQuery_visibility = NULL;
    char * valueQuery_visibility = NULL;
    keyValuePair_t *keyPairQuery_visibility = 0;
    if (visibility)
    {
        keyQuery_visibility = strdup("visibility");
        valueQuery_visibility = strdup((visibility));
        keyPairQuery_visibility = keyValuePair_create(keyQuery_visibility, valueQuery_visibility);
        list_addElement(localVarQueryParameters,keyPairQuery_visibility);
    }

    // query parameters
    char *keyQuery_socialProfileId = NULL;
    char * valueQuery_socialProfileId = NULL;
    keyValuePair_t *keyPairQuery_socialProfileId = 0;
    if (socialProfileId)
    {
        keyQuery_socialProfileId = strdup("socialProfileId");
        valueQuery_socialProfileId = strdup((socialProfileId));
        keyPairQuery_socialProfileId = keyValuePair_create(keyQuery_socialProfileId, valueQuery_socialProfileId);
        list_addElement(localVarQueryParameters,keyPairQuery_socialProfileId);
    }

    // query parameters
    char *keyQuery_purpose = NULL;
    char * valueQuery_purpose = NULL;
    keyValuePair_t *keyPairQuery_purpose = 0;
    if (purpose)
    {
        keyQuery_purpose = strdup("purpose");
        valueQuery_purpose = strdup((purpose));
        keyPairQuery_purpose = keyValuePair_create(keyQuery_purpose, valueQuery_purpose);
        list_addElement(localVarQueryParameters,keyPairQuery_purpose);
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
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    list_freeList(localVarHeaderParameters);
    list_freeList(localVarFormParameters);
    
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
    if(keyQuery_visibility){
        free(keyQuery_visibility);
        keyQuery_visibility = NULL;
    }
    if(valueQuery_visibility){
        free(valueQuery_visibility);
        valueQuery_visibility = NULL;
    }
    if(keyPairQuery_visibility){
        keyValuePair_free(keyPairQuery_visibility);
        keyPairQuery_visibility = NULL;
    }
    if(keyQuery_visibility){
        free(keyQuery_visibility);
        keyQuery_visibility = NULL;
    }
    if(keyPairQuery_visibility){
        keyValuePair_free(keyPairQuery_visibility);
        keyPairQuery_visibility = NULL;
    }
    if(keyQuery_socialProfileId){
        free(keyQuery_socialProfileId);
        keyQuery_socialProfileId = NULL;
    }
    if(valueQuery_socialProfileId){
        free(valueQuery_socialProfileId);
        valueQuery_socialProfileId = NULL;
    }
    if(keyPairQuery_socialProfileId){
        keyValuePair_free(keyPairQuery_socialProfileId);
        keyPairQuery_socialProfileId = NULL;
    }
    if(keyQuery_socialProfileId){
        free(keyQuery_socialProfileId);
        keyQuery_socialProfileId = NULL;
    }
    if(keyPairQuery_socialProfileId){
        keyValuePair_free(keyPairQuery_socialProfileId);
        keyPairQuery_socialProfileId = NULL;
    }
    if(keyQuery_purpose){
        free(keyQuery_purpose);
        keyQuery_purpose = NULL;
    }
    if(valueQuery_purpose){
        free(valueQuery_purpose);
        valueQuery_purpose = NULL;
    }
    if(keyPairQuery_purpose){
        keyValuePair_free(keyPairQuery_purpose);
        keyPairQuery_purpose = NULL;
    }
    if(keyQuery_purpose){
        free(keyQuery_purpose);
        keyQuery_purpose = NULL;
    }
    if(keyPairQuery_purpose){
        keyValuePair_free(keyPairQuery_purpose);
        keyPairQuery_purpose = NULL;
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
    if (keyForm_file) {
        free(keyForm_file);
        keyForm_file = NULL;
    }
//    free(fileVar_file->data);
//    free(fileVar_file);

}

// Upload a user editor image scoped to a record.
//
void
RadzenEditorAPI_radzenUploadUserImageScoped(apiClient_t *apiClient, char *recordType, char *recordId, char *visibility, char *socialProfileId, char *purpose, char *api_version, char *x_api_version, binary_t* file)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = list_createList();
    list_t *localVarHeaderType = NULL;
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/fs/radzen/users/{recordType}/{recordId}/upload/image")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/fs/radzen/users/{recordType}/{recordId}/upload/image");


    // Path Params
    long sizeOfPathParams_recordType = strlen(recordType)+3 + strlen(recordId)+3 + strlen("{ recordType }");
    if(recordType == NULL) {
        goto end;
    }
    char* localVarToReplace_recordType = malloc(sizeOfPathParams_recordType);
    sprintf(localVarToReplace_recordType, "{%s}", "recordType");

    localVarPath = strReplace(localVarPath, localVarToReplace_recordType, recordType);

    // Path Params
    long sizeOfPathParams_recordId = strlen(recordType)+3 + strlen(recordId)+3 + strlen("{ recordId }");
    if(recordId == NULL) {
        goto end;
    }
    char* localVarToReplace_recordId = malloc(sizeOfPathParams_recordId);
    sprintf(localVarToReplace_recordId, "{%s}", "recordId");

    localVarPath = strReplace(localVarPath, localVarToReplace_recordId, recordId);



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
    char *keyQuery_visibility = NULL;
    char * valueQuery_visibility = NULL;
    keyValuePair_t *keyPairQuery_visibility = 0;
    if (visibility)
    {
        keyQuery_visibility = strdup("visibility");
        valueQuery_visibility = strdup((visibility));
        keyPairQuery_visibility = keyValuePair_create(keyQuery_visibility, valueQuery_visibility);
        list_addElement(localVarQueryParameters,keyPairQuery_visibility);
    }

    // query parameters
    char *keyQuery_socialProfileId = NULL;
    char * valueQuery_socialProfileId = NULL;
    keyValuePair_t *keyPairQuery_socialProfileId = 0;
    if (socialProfileId)
    {
        keyQuery_socialProfileId = strdup("socialProfileId");
        valueQuery_socialProfileId = strdup((socialProfileId));
        keyPairQuery_socialProfileId = keyValuePair_create(keyQuery_socialProfileId, valueQuery_socialProfileId);
        list_addElement(localVarQueryParameters,keyPairQuery_socialProfileId);
    }

    // query parameters
    char *keyQuery_purpose = NULL;
    char * valueQuery_purpose = NULL;
    keyValuePair_t *keyPairQuery_purpose = 0;
    if (purpose)
    {
        keyQuery_purpose = strdup("purpose");
        valueQuery_purpose = strdup((purpose));
        keyPairQuery_purpose = keyValuePair_create(keyQuery_purpose, valueQuery_purpose);
        list_addElement(localVarQueryParameters,keyPairQuery_purpose);
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
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    list_freeList(localVarHeaderParameters);
    list_freeList(localVarFormParameters);
    
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_recordType);
    free(localVarToReplace_recordId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
    if(keyQuery_visibility){
        free(keyQuery_visibility);
        keyQuery_visibility = NULL;
    }
    if(valueQuery_visibility){
        free(valueQuery_visibility);
        valueQuery_visibility = NULL;
    }
    if(keyPairQuery_visibility){
        keyValuePair_free(keyPairQuery_visibility);
        keyPairQuery_visibility = NULL;
    }
    if(keyQuery_visibility){
        free(keyQuery_visibility);
        keyQuery_visibility = NULL;
    }
    if(keyPairQuery_visibility){
        keyValuePair_free(keyPairQuery_visibility);
        keyPairQuery_visibility = NULL;
    }
    if(keyQuery_socialProfileId){
        free(keyQuery_socialProfileId);
        keyQuery_socialProfileId = NULL;
    }
    if(valueQuery_socialProfileId){
        free(valueQuery_socialProfileId);
        valueQuery_socialProfileId = NULL;
    }
    if(keyPairQuery_socialProfileId){
        keyValuePair_free(keyPairQuery_socialProfileId);
        keyPairQuery_socialProfileId = NULL;
    }
    if(keyQuery_socialProfileId){
        free(keyQuery_socialProfileId);
        keyQuery_socialProfileId = NULL;
    }
    if(keyPairQuery_socialProfileId){
        keyValuePair_free(keyPairQuery_socialProfileId);
        keyPairQuery_socialProfileId = NULL;
    }
    if(keyQuery_purpose){
        free(keyQuery_purpose);
        keyQuery_purpose = NULL;
    }
    if(valueQuery_purpose){
        free(valueQuery_purpose);
        valueQuery_purpose = NULL;
    }
    if(keyPairQuery_purpose){
        keyValuePair_free(keyPairQuery_purpose);
        keyPairQuery_purpose = NULL;
    }
    if(keyQuery_purpose){
        free(keyQuery_purpose);
        keyQuery_purpose = NULL;
    }
    if(keyPairQuery_purpose){
        keyValuePair_free(keyPairQuery_purpose);
        keyPairQuery_purpose = NULL;
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
    if (keyForm_file) {
        free(keyForm_file);
        keyForm_file = NULL;
    }
//    free(fileVar_file->data);
//    free(fileVar_file);

}

