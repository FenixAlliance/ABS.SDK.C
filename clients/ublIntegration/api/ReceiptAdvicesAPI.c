#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ReceiptAdvicesAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)

// Functions for enum PROFILE for ReceiptAdvicesAPI_apiV2UblServiceReceiptAdvicesItemRestockIdGet

static char* apiV2UblServiceReceiptAdvicesItemRestockIdGet_PROFILE_ToString(ublintegration_apiV2UblServiceReceiptAdvicesItemRestockIdGet_profile_e PROFILE){
    char *PROFILEArray[] =  { "NULL", "Generic", "Dian" };
    return PROFILEArray[PROFILE];
}

static ublintegration_apiV2UblServiceReceiptAdvicesItemRestockIdGet_profile_e apiV2UblServiceReceiptAdvicesItemRestockIdGet_PROFILE_FromString(char* PROFILE){
    int stringToReturn = 0;
    char *PROFILEArray[] =  { "NULL", "Generic", "Dian" };
    size_t sizeofArray = sizeof(PROFILEArray) / sizeof(PROFILEArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(PROFILE, PROFILEArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

/*
// Function apiV2UblServiceReceiptAdvicesItemRestockIdGet_PROFILE_convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *apiV2UblServiceReceiptAdvicesItemRestockIdGet_PROFILE_convertToJSON(ublintegration_apiV2UblServiceReceiptAdvicesItemRestockIdGet_profile_e PROFILE) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "profile", apiV2UblServiceReceiptAdvicesItemRestockIdGet_PROFILE_ToString(PROFILE)) == NULL) {
        goto fail;
    }
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function apiV2UblServiceReceiptAdvicesItemRestockIdGet_PROFILE_parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static ublintegration_apiV2UblServiceReceiptAdvicesItemRestockIdGet_profile_e apiV2UblServiceReceiptAdvicesItemRestockIdGet_PROFILE_parseFromJSON(cJSON* PROFILEJSON) {
    ublintegration_apiV2UblServiceReceiptAdvicesItemRestockIdGet_profile_e PROFILEVariable = 0;
    cJSON *PROFILEVar = cJSON_GetObjectItemCaseSensitive(PROFILEJSON, "profile");
    if(!cJSON_IsString(PROFILEVar) || (PROFILEVar->valuestring == NULL))
    {
        goto end;
    }
    PROFILEVariable = apiV2UblServiceReceiptAdvicesItemRestockIdGet_PROFILE_FromString(PROFILEVar->valuestring);
    return PROFILEVariable;
end:
    return 0;
}
*/

// Functions for enum PROFILE for ReceiptAdvicesAPI_apiV2UblServiceReceiptAdvicesItemRestockIdPartitionsGet

static char* apiV2UblServiceReceiptAdvicesItemRestockIdPartitionsGet_PROFILE_ToString(ublintegration_apiV2UblServiceReceiptAdvicesItemRestockIdPartitionsGet_profile_e PROFILE){
    char *PROFILEArray[] =  { "NULL", "Generic", "Dian" };
    return PROFILEArray[PROFILE];
}

static ublintegration_apiV2UblServiceReceiptAdvicesItemRestockIdPartitionsGet_profile_e apiV2UblServiceReceiptAdvicesItemRestockIdPartitionsGet_PROFILE_FromString(char* PROFILE){
    int stringToReturn = 0;
    char *PROFILEArray[] =  { "NULL", "Generic", "Dian" };
    size_t sizeofArray = sizeof(PROFILEArray) / sizeof(PROFILEArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(PROFILE, PROFILEArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

/*
// Function apiV2UblServiceReceiptAdvicesItemRestockIdPartitionsGet_PROFILE_convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *apiV2UblServiceReceiptAdvicesItemRestockIdPartitionsGet_PROFILE_convertToJSON(ublintegration_apiV2UblServiceReceiptAdvicesItemRestockIdPartitionsGet_profile_e PROFILE) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "profile", apiV2UblServiceReceiptAdvicesItemRestockIdPartitionsGet_PROFILE_ToString(PROFILE)) == NULL) {
        goto fail;
    }
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function apiV2UblServiceReceiptAdvicesItemRestockIdPartitionsGet_PROFILE_parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static ublintegration_apiV2UblServiceReceiptAdvicesItemRestockIdPartitionsGet_profile_e apiV2UblServiceReceiptAdvicesItemRestockIdPartitionsGet_PROFILE_parseFromJSON(cJSON* PROFILEJSON) {
    ublintegration_apiV2UblServiceReceiptAdvicesItemRestockIdPartitionsGet_profile_e PROFILEVariable = 0;
    cJSON *PROFILEVar = cJSON_GetObjectItemCaseSensitive(PROFILEJSON, "profile");
    if(!cJSON_IsString(PROFILEVar) || (PROFILEVar->valuestring == NULL))
    {
        goto end;
    }
    PROFILEVariable = apiV2UblServiceReceiptAdvicesItemRestockIdPartitionsGet_PROFILE_FromString(PROFILEVar->valuestring);
    return PROFILEVariable;
end:
    return 0;
}
*/


void
ReceiptAdvicesAPI_apiV2UblServiceReceiptAdvicesItemRestockIdGet(apiClient_t *apiClient, char *tenantId, char *itemRestockId, ublintegration_apiV2UblServiceReceiptAdvicesItemRestockIdGet_profile_e profile, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = NULL;
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/UblService/ReceiptAdvices/{itemRestockId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/UblService/ReceiptAdvices/{itemRestockId}");


    // Path Params
    long sizeOfPathParams_itemRestockId = strlen(itemRestockId)+3 + strlen("{ itemRestockId }");
    if(itemRestockId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemRestockId = malloc(sizeOfPathParams_itemRestockId);
    sprintf(localVarToReplace_itemRestockId, "{%s}", "itemRestockId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemRestockId, itemRestockId);
    if(itemRestockId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemRestockId = malloc(sizeOfPathParams_itemRestockId);
    sprintf(localVarToReplace_itemRestockId, "{%s}", "itemRestockId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemRestockId, itemRestockId);



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
    char *keyQuery_profile = NULL;
    ublintegration_apiV2UblServiceReceiptAdvicesItemRestockIdGet_profile_e valueQuery_profile ;
    keyValuePair_t *keyPairQuery_profile = 0;
    if (profile)
    {
        keyQuery_profile = strdup("profile");
        valueQuery_profile = (profile);
        keyPairQuery_profile = keyValuePair_create(keyQuery_profile, (void *)strdup(apiV2UblServiceReceiptAdvicesItemRestockIdGet_PROFILE_ToString(
        valueQuery_profile)));
        list_addElement(localVarQueryParameters,keyPairQuery_profile);
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
                    "GET");

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
    free(localVarToReplace_itemRestockId);
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
    if(keyQuery_profile){
        free(keyQuery_profile);
        keyQuery_profile = NULL;
    }
    if(valueQuery_profile){
        free(valueQuery_profile);
        valueQuery_profile = NULL;
    }
    if(keyPairQuery_profile){
        keyValuePair_free(keyPairQuery_profile);
        keyPairQuery_profile = NULL;
    }
    if(keyQuery_profile){
        free(keyQuery_profile);
        keyQuery_profile = NULL;
    }
    if(keyPairQuery_profile){
        keyValuePair_free(keyPairQuery_profile);
        keyPairQuery_profile = NULL;
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

void
ReceiptAdvicesAPI_apiV2UblServiceReceiptAdvicesItemRestockIdPartitionsGet(apiClient_t *apiClient, char *tenantId, char *itemRestockId, ublintegration_apiV2UblServiceReceiptAdvicesItemRestockIdPartitionsGet_profile_e profile, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = NULL;
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/UblService/ReceiptAdvices/{itemRestockId}/partitions")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/UblService/ReceiptAdvices/{itemRestockId}/partitions");


    // Path Params
    long sizeOfPathParams_itemRestockId = strlen(itemRestockId)+3 + strlen("{ itemRestockId }");
    if(itemRestockId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemRestockId = malloc(sizeOfPathParams_itemRestockId);
    sprintf(localVarToReplace_itemRestockId, "{%s}", "itemRestockId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemRestockId, itemRestockId);
    if(itemRestockId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemRestockId = malloc(sizeOfPathParams_itemRestockId);
    sprintf(localVarToReplace_itemRestockId, "{%s}", "itemRestockId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemRestockId, itemRestockId);



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
    char *keyQuery_profile = NULL;
    ublintegration_apiV2UblServiceReceiptAdvicesItemRestockIdPartitionsGet_profile_e valueQuery_profile ;
    keyValuePair_t *keyPairQuery_profile = 0;
    if (profile)
    {
        keyQuery_profile = strdup("profile");
        valueQuery_profile = (profile);
        keyPairQuery_profile = keyValuePair_create(keyQuery_profile, (void *)strdup(apiV2UblServiceReceiptAdvicesItemRestockIdPartitionsGet_PROFILE_ToString(
        valueQuery_profile)));
        list_addElement(localVarQueryParameters,keyPairQuery_profile);
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
                    "GET");

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
    free(localVarToReplace_itemRestockId);
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
    if(keyQuery_profile){
        free(keyQuery_profile);
        keyQuery_profile = NULL;
    }
    if(valueQuery_profile){
        free(valueQuery_profile);
        valueQuery_profile = NULL;
    }
    if(keyPairQuery_profile){
        keyValuePair_free(keyPairQuery_profile);
        keyPairQuery_profile = NULL;
    }
    if(keyQuery_profile){
        free(keyQuery_profile);
        keyQuery_profile = NULL;
    }
    if(keyPairQuery_profile){
        keyValuePair_free(keyPairQuery_profile);
        keyPairQuery_profile = NULL;
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

