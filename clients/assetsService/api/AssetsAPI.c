#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "AssetsAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Creates a new asset
//
// Creates a new asset for the authenticated tenant.
//
asset_dto_envelope_t*
AssetsAPI_createAsset(apiClient_t *apiClient, char *tenantId, asset_create_dto_t *asset_create_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/AssetsService/Assets")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/AssetsService/Assets");




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
    cJSON *localVarSingleItemJSON_asset_create_dto = NULL;
    if (asset_create_dto != NULL)
    {
        //string
        localVarSingleItemJSON_asset_create_dto = asset_create_dto_convertToJSON(asset_create_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_asset_create_dto);
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
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad Request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 201) {
    //    printf("%s\n","Created");
    //}
    //nonprimitive not container
    cJSON *AssetsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    asset_dto_envelope_t *elementToReturn = asset_dto_envelope_parseFromJSON(AssetsAPIlocalVarJSON);
    cJSON_Delete(AssetsAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_asset_create_dto) {
        cJSON_Delete(localVarSingleItemJSON_asset_create_dto);
        localVarSingleItemJSON_asset_create_dto = NULL;
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

// Creates a new asset category
//
// Creates a new asset category for the authenticated tenant.
//
asset_category_dto_envelope_t*
AssetsAPI_createAssetAssetCategory(apiClient_t *apiClient, char *tenantId, asset_category_create_dto_t *asset_category_create_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/AssetsService/Assets/Categories")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/AssetsService/Assets/Categories");




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
    cJSON *localVarSingleItemJSON_asset_category_create_dto = NULL;
    if (asset_category_create_dto != NULL)
    {
        //string
        localVarSingleItemJSON_asset_category_create_dto = asset_category_create_dto_convertToJSON(asset_category_create_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_asset_category_create_dto);
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
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad Request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 201) {
    //    printf("%s\n","Created");
    //}
    //nonprimitive not container
    cJSON *AssetsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    asset_category_dto_envelope_t *elementToReturn = asset_category_dto_envelope_parseFromJSON(AssetsAPIlocalVarJSON);
    cJSON_Delete(AssetsAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_asset_category_create_dto) {
        cJSON_Delete(localVarSingleItemJSON_asset_category_create_dto);
        localVarSingleItemJSON_asset_category_create_dto = NULL;
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

// Creates a new depreciation record for an asset
//
// Creates a new depreciation record for the specified asset.
//
empty_envelope_t*
AssetsAPI_createAssetDepreciationRecord(apiClient_t *apiClient, char *tenantId, char *assetId, asset_depreciation_record_create_dto_t *asset_depreciation_record_create_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/AssetsService/Assets/{assetId}/DepreciationRecords")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/AssetsService/Assets/{assetId}/DepreciationRecords");


    // Path Params
    long sizeOfPathParams_assetId = strlen(assetId)+3 + strlen("{ assetId }");
    if(assetId == NULL) {
        goto end;
    }
    char* localVarToReplace_assetId = malloc(sizeOfPathParams_assetId);
    sprintf(localVarToReplace_assetId, "{%s}", "assetId");

    localVarPath = strReplace(localVarPath, localVarToReplace_assetId, assetId);
    if(assetId == NULL) {
        goto end;
    }
    char* localVarToReplace_assetId = malloc(sizeOfPathParams_assetId);
    sprintf(localVarToReplace_assetId, "{%s}", "assetId");

    localVarPath = strReplace(localVarPath, localVarToReplace_assetId, assetId);



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
    cJSON *localVarSingleItemJSON_asset_depreciation_record_create_dto = NULL;
    if (asset_depreciation_record_create_dto != NULL)
    {
        //string
        localVarSingleItemJSON_asset_depreciation_record_create_dto = asset_depreciation_record_create_dto_convertToJSON(asset_depreciation_record_create_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_asset_depreciation_record_create_dto);
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
    cJSON *AssetsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(AssetsAPIlocalVarJSON);
    cJSON_Delete(AssetsAPIlocalVarJSON);
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
    free(localVarToReplace_assetId);
    if (localVarSingleItemJSON_asset_depreciation_record_create_dto) {
        cJSON_Delete(localVarSingleItemJSON_asset_depreciation_record_create_dto);
        localVarSingleItemJSON_asset_depreciation_record_create_dto = NULL;
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

// Creates a new repair for an asset
//
// Creates a new repair record for the specified asset.
//
empty_envelope_t*
AssetsAPI_createAssetRepair(apiClient_t *apiClient, char *tenantId, char *assetId, asset_repair_create_dto_t *asset_repair_create_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/AssetsService/Assets/{assetId}/Repairs")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/AssetsService/Assets/{assetId}/Repairs");


    // Path Params
    long sizeOfPathParams_assetId = strlen(assetId)+3 + strlen("{ assetId }");
    if(assetId == NULL) {
        goto end;
    }
    char* localVarToReplace_assetId = malloc(sizeOfPathParams_assetId);
    sprintf(localVarToReplace_assetId, "{%s}", "assetId");

    localVarPath = strReplace(localVarPath, localVarToReplace_assetId, assetId);
    if(assetId == NULL) {
        goto end;
    }
    char* localVarToReplace_assetId = malloc(sizeOfPathParams_assetId);
    sprintf(localVarToReplace_assetId, "{%s}", "assetId");

    localVarPath = strReplace(localVarPath, localVarToReplace_assetId, assetId);



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
    cJSON *localVarSingleItemJSON_asset_repair_create_dto = NULL;
    if (asset_repair_create_dto != NULL)
    {
        //string
        localVarSingleItemJSON_asset_repair_create_dto = asset_repair_create_dto_convertToJSON(asset_repair_create_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_asset_repair_create_dto);
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
    cJSON *AssetsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(AssetsAPIlocalVarJSON);
    cJSON_Delete(AssetsAPIlocalVarJSON);
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
    free(localVarToReplace_assetId);
    if (localVarSingleItemJSON_asset_repair_create_dto) {
        cJSON_Delete(localVarSingleItemJSON_asset_repair_create_dto);
        localVarSingleItemJSON_asset_repair_create_dto = NULL;
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

// Creates a new transfer for an asset
//
// Creates a new transfer record for the specified asset.
//
empty_envelope_t*
AssetsAPI_createAssetTransfer(apiClient_t *apiClient, char *tenantId, char *assetId, asset_transfer_create_dto_t *asset_transfer_create_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/AssetsService/Assets/{assetId}/Transfers")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/AssetsService/Assets/{assetId}/Transfers");


    // Path Params
    long sizeOfPathParams_assetId = strlen(assetId)+3 + strlen("{ assetId }");
    if(assetId == NULL) {
        goto end;
    }
    char* localVarToReplace_assetId = malloc(sizeOfPathParams_assetId);
    sprintf(localVarToReplace_assetId, "{%s}", "assetId");

    localVarPath = strReplace(localVarPath, localVarToReplace_assetId, assetId);
    if(assetId == NULL) {
        goto end;
    }
    char* localVarToReplace_assetId = malloc(sizeOfPathParams_assetId);
    sprintf(localVarToReplace_assetId, "{%s}", "assetId");

    localVarPath = strReplace(localVarPath, localVarToReplace_assetId, assetId);



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
    cJSON *localVarSingleItemJSON_asset_transfer_create_dto = NULL;
    if (asset_transfer_create_dto != NULL)
    {
        //string
        localVarSingleItemJSON_asset_transfer_create_dto = asset_transfer_create_dto_convertToJSON(asset_transfer_create_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_asset_transfer_create_dto);
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
    cJSON *AssetsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(AssetsAPIlocalVarJSON);
    cJSON_Delete(AssetsAPIlocalVarJSON);
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
    free(localVarToReplace_assetId);
    if (localVarSingleItemJSON_asset_transfer_create_dto) {
        cJSON_Delete(localVarSingleItemJSON_asset_transfer_create_dto);
        localVarSingleItemJSON_asset_transfer_create_dto = NULL;
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

// Creates a new value amendment for an asset
//
// Creates a new value amendment record for the specified asset.
//
empty_envelope_t*
AssetsAPI_createAssetValueAmend(apiClient_t *apiClient, char *tenantId, char *assetId, asset_value_amend_create_dto_t *asset_value_amend_create_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/AssetsService/Assets/{assetId}/ValueAmends")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/AssetsService/Assets/{assetId}/ValueAmends");


    // Path Params
    long sizeOfPathParams_assetId = strlen(assetId)+3 + strlen("{ assetId }");
    if(assetId == NULL) {
        goto end;
    }
    char* localVarToReplace_assetId = malloc(sizeOfPathParams_assetId);
    sprintf(localVarToReplace_assetId, "{%s}", "assetId");

    localVarPath = strReplace(localVarPath, localVarToReplace_assetId, assetId);
    if(assetId == NULL) {
        goto end;
    }
    char* localVarToReplace_assetId = malloc(sizeOfPathParams_assetId);
    sprintf(localVarToReplace_assetId, "{%s}", "assetId");

    localVarPath = strReplace(localVarPath, localVarToReplace_assetId, assetId);



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
    cJSON *localVarSingleItemJSON_asset_value_amend_create_dto = NULL;
    if (asset_value_amend_create_dto != NULL)
    {
        //string
        localVarSingleItemJSON_asset_value_amend_create_dto = asset_value_amend_create_dto_convertToJSON(asset_value_amend_create_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_asset_value_amend_create_dto);
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
    cJSON *AssetsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(AssetsAPIlocalVarJSON);
    cJSON_Delete(AssetsAPIlocalVarJSON);
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
    free(localVarToReplace_assetId);
    if (localVarSingleItemJSON_asset_value_amend_create_dto) {
        cJSON_Delete(localVarSingleItemJSON_asset_value_amend_create_dto);
        localVarSingleItemJSON_asset_value_amend_create_dto = NULL;
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

// Deletes an existing asset
//
// Deletes an existing asset for the authenticated tenant.
//
void
AssetsAPI_deleteAsset(apiClient_t *apiClient, char *tenantId, char *assetId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/AssetsService/Assets/{assetId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/AssetsService/Assets/{assetId}");


    // Path Params
    long sizeOfPathParams_assetId = strlen(assetId)+3 + strlen("{ assetId }");
    if(assetId == NULL) {
        goto end;
    }
    char* localVarToReplace_assetId = malloc(sizeOfPathParams_assetId);
    sprintf(localVarToReplace_assetId, "{%s}", "assetId");

    localVarPath = strReplace(localVarPath, localVarToReplace_assetId, assetId);
    if(assetId == NULL) {
        goto end;
    }
    char* localVarToReplace_assetId = malloc(sizeOfPathParams_assetId);
    sprintf(localVarToReplace_assetId, "{%s}", "assetId");

    localVarPath = strReplace(localVarPath, localVarToReplace_assetId, assetId);



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
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","No Content");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_assetId);
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

// Deletes an existing asset category
//
// Deletes an existing asset category for the authenticated tenant.
//
void
AssetsAPI_deleteAssetAssetCategory(apiClient_t *apiClient, char *tenantId, char *categoryId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/AssetsService/Assets/Categories/{categoryId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/AssetsService/Assets/Categories/{categoryId}");


    // Path Params
    long sizeOfPathParams_categoryId = strlen(categoryId)+3 + strlen("{ categoryId }");
    if(categoryId == NULL) {
        goto end;
    }
    char* localVarToReplace_categoryId = malloc(sizeOfPathParams_categoryId);
    sprintf(localVarToReplace_categoryId, "{%s}", "categoryId");

    localVarPath = strReplace(localVarPath, localVarToReplace_categoryId, categoryId);
    if(categoryId == NULL) {
        goto end;
    }
    char* localVarToReplace_categoryId = malloc(sizeOfPathParams_categoryId);
    sprintf(localVarToReplace_categoryId, "{%s}", "categoryId");

    localVarPath = strReplace(localVarPath, localVarToReplace_categoryId, categoryId);



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
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","No Content");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_categoryId);
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

// Deletes a depreciation record for an asset
//
// Deletes a depreciation record for the specified asset.
//
empty_envelope_t*
AssetsAPI_deleteAssetDepreciationRecord(apiClient_t *apiClient, char *tenantId, char *assetId, char *recordId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/AssetsService/Assets/{assetId}/DepreciationRecords/{recordId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/AssetsService/Assets/{assetId}/DepreciationRecords/{recordId}");


    // Path Params
    long sizeOfPathParams_assetId = strlen(assetId)+3 + strlen(recordId)+3 + strlen("{ assetId }");
    if(assetId == NULL) {
        goto end;
    }
    char* localVarToReplace_assetId = malloc(sizeOfPathParams_assetId);
    sprintf(localVarToReplace_assetId, "{%s}", "assetId");

    localVarPath = strReplace(localVarPath, localVarToReplace_assetId, assetId);
    if(assetId == NULL) {
        goto end;
    }
    char* localVarToReplace_assetId = malloc(sizeOfPathParams_assetId);
    sprintf(localVarToReplace_assetId, "{%s}", "assetId");

    localVarPath = strReplace(localVarPath, localVarToReplace_assetId, assetId);

    // Path Params
    long sizeOfPathParams_recordId = strlen(assetId)+3 + strlen(recordId)+3 + strlen("{ recordId }");
    if(recordId == NULL) {
        goto end;
    }
    char* localVarToReplace_recordId = malloc(sizeOfPathParams_recordId);
    sprintf(localVarToReplace_recordId, "{%s}", "recordId");

    localVarPath = strReplace(localVarPath, localVarToReplace_recordId, recordId);
    if(recordId == NULL) {
        goto end;
    }
    char* localVarToReplace_recordId = malloc(sizeOfPathParams_recordId);
    sprintf(localVarToReplace_recordId, "{%s}", "recordId");

    localVarPath = strReplace(localVarPath, localVarToReplace_recordId, recordId);



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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *AssetsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(AssetsAPIlocalVarJSON);
    cJSON_Delete(AssetsAPIlocalVarJSON);
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
    free(localVarToReplace_assetId);
    free(localVarToReplace_recordId);
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

// Deletes a repair for an asset
//
// Deletes a repair record for the specified asset.
//
empty_envelope_t*
AssetsAPI_deleteAssetRepair(apiClient_t *apiClient, char *tenantId, char *assetId, char *repairId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/AssetsService/Assets/{assetId}/Repairs/{repairId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/AssetsService/Assets/{assetId}/Repairs/{repairId}");


    // Path Params
    long sizeOfPathParams_assetId = strlen(assetId)+3 + strlen(repairId)+3 + strlen("{ assetId }");
    if(assetId == NULL) {
        goto end;
    }
    char* localVarToReplace_assetId = malloc(sizeOfPathParams_assetId);
    sprintf(localVarToReplace_assetId, "{%s}", "assetId");

    localVarPath = strReplace(localVarPath, localVarToReplace_assetId, assetId);
    if(assetId == NULL) {
        goto end;
    }
    char* localVarToReplace_assetId = malloc(sizeOfPathParams_assetId);
    sprintf(localVarToReplace_assetId, "{%s}", "assetId");

    localVarPath = strReplace(localVarPath, localVarToReplace_assetId, assetId);

    // Path Params
    long sizeOfPathParams_repairId = strlen(assetId)+3 + strlen(repairId)+3 + strlen("{ repairId }");
    if(repairId == NULL) {
        goto end;
    }
    char* localVarToReplace_repairId = malloc(sizeOfPathParams_repairId);
    sprintf(localVarToReplace_repairId, "{%s}", "repairId");

    localVarPath = strReplace(localVarPath, localVarToReplace_repairId, repairId);
    if(repairId == NULL) {
        goto end;
    }
    char* localVarToReplace_repairId = malloc(sizeOfPathParams_repairId);
    sprintf(localVarToReplace_repairId, "{%s}", "repairId");

    localVarPath = strReplace(localVarPath, localVarToReplace_repairId, repairId);



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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *AssetsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(AssetsAPIlocalVarJSON);
    cJSON_Delete(AssetsAPIlocalVarJSON);
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
    free(localVarToReplace_assetId);
    free(localVarToReplace_repairId);
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

// Deletes a transfer for an asset
//
// Deletes a transfer record for the specified asset.
//
empty_envelope_t*
AssetsAPI_deleteAssetTransfer(apiClient_t *apiClient, char *tenantId, char *assetId, char *transferId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/AssetsService/Assets/{assetId}/Transfers/{transferId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/AssetsService/Assets/{assetId}/Transfers/{transferId}");


    // Path Params
    long sizeOfPathParams_assetId = strlen(assetId)+3 + strlen(transferId)+3 + strlen("{ assetId }");
    if(assetId == NULL) {
        goto end;
    }
    char* localVarToReplace_assetId = malloc(sizeOfPathParams_assetId);
    sprintf(localVarToReplace_assetId, "{%s}", "assetId");

    localVarPath = strReplace(localVarPath, localVarToReplace_assetId, assetId);
    if(assetId == NULL) {
        goto end;
    }
    char* localVarToReplace_assetId = malloc(sizeOfPathParams_assetId);
    sprintf(localVarToReplace_assetId, "{%s}", "assetId");

    localVarPath = strReplace(localVarPath, localVarToReplace_assetId, assetId);

    // Path Params
    long sizeOfPathParams_transferId = strlen(assetId)+3 + strlen(transferId)+3 + strlen("{ transferId }");
    if(transferId == NULL) {
        goto end;
    }
    char* localVarToReplace_transferId = malloc(sizeOfPathParams_transferId);
    sprintf(localVarToReplace_transferId, "{%s}", "transferId");

    localVarPath = strReplace(localVarPath, localVarToReplace_transferId, transferId);
    if(transferId == NULL) {
        goto end;
    }
    char* localVarToReplace_transferId = malloc(sizeOfPathParams_transferId);
    sprintf(localVarToReplace_transferId, "{%s}", "transferId");

    localVarPath = strReplace(localVarPath, localVarToReplace_transferId, transferId);



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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *AssetsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(AssetsAPIlocalVarJSON);
    cJSON_Delete(AssetsAPIlocalVarJSON);
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
    free(localVarToReplace_assetId);
    free(localVarToReplace_transferId);
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

// Deletes a value amendment for an asset
//
// Deletes a value amendment record for the specified asset.
//
empty_envelope_t*
AssetsAPI_deleteAssetValueAmend(apiClient_t *apiClient, char *tenantId, char *assetId, char *amendId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/AssetsService/Assets/{assetId}/ValueAmends/{amendId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/AssetsService/Assets/{assetId}/ValueAmends/{amendId}");


    // Path Params
    long sizeOfPathParams_assetId = strlen(assetId)+3 + strlen(amendId)+3 + strlen("{ assetId }");
    if(assetId == NULL) {
        goto end;
    }
    char* localVarToReplace_assetId = malloc(sizeOfPathParams_assetId);
    sprintf(localVarToReplace_assetId, "{%s}", "assetId");

    localVarPath = strReplace(localVarPath, localVarToReplace_assetId, assetId);
    if(assetId == NULL) {
        goto end;
    }
    char* localVarToReplace_assetId = malloc(sizeOfPathParams_assetId);
    sprintf(localVarToReplace_assetId, "{%s}", "assetId");

    localVarPath = strReplace(localVarPath, localVarToReplace_assetId, assetId);

    // Path Params
    long sizeOfPathParams_amendId = strlen(assetId)+3 + strlen(amendId)+3 + strlen("{ amendId }");
    if(amendId == NULL) {
        goto end;
    }
    char* localVarToReplace_amendId = malloc(sizeOfPathParams_amendId);
    sprintf(localVarToReplace_amendId, "{%s}", "amendId");

    localVarPath = strReplace(localVarPath, localVarToReplace_amendId, amendId);
    if(amendId == NULL) {
        goto end;
    }
    char* localVarToReplace_amendId = malloc(sizeOfPathParams_amendId);
    sprintf(localVarToReplace_amendId, "{%s}", "amendId");

    localVarPath = strReplace(localVarPath, localVarToReplace_amendId, amendId);



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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *AssetsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(AssetsAPIlocalVarJSON);
    cJSON_Delete(AssetsAPIlocalVarJSON);
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
    free(localVarToReplace_assetId);
    free(localVarToReplace_amendId);
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

// Gets a specific asset by ID
//
// Retrieves a specific asset for the authenticated tenant.
//
asset_dto_envelope_t*
AssetsAPI_getAsset(apiClient_t *apiClient, char *tenantId, char *assetId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/AssetsService/Assets/{assetId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/AssetsService/Assets/{assetId}");


    // Path Params
    long sizeOfPathParams_assetId = strlen(assetId)+3 + strlen("{ assetId }");
    if(assetId == NULL) {
        goto end;
    }
    char* localVarToReplace_assetId = malloc(sizeOfPathParams_assetId);
    sprintf(localVarToReplace_assetId, "{%s}", "assetId");

    localVarPath = strReplace(localVarPath, localVarToReplace_assetId, assetId);
    if(assetId == NULL) {
        goto end;
    }
    char* localVarToReplace_assetId = malloc(sizeOfPathParams_assetId);
    sprintf(localVarToReplace_assetId, "{%s}", "assetId");

    localVarPath = strReplace(localVarPath, localVarToReplace_assetId, assetId);



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
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *AssetsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    asset_dto_envelope_t *elementToReturn = asset_dto_envelope_parseFromJSON(AssetsAPIlocalVarJSON);
    cJSON_Delete(AssetsAPIlocalVarJSON);
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
    free(localVarToReplace_assetId);
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

// Gets all asset categories
//
// Retrieves all asset categories for the authenticated tenant.
//
asset_category_dto_list_envelope_t*
AssetsAPI_getAssetAssetCategories(apiClient_t *apiClient, char *tenantId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/AssetsService/Assets/Categories")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/AssetsService/Assets/Categories");




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
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *AssetsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    asset_category_dto_list_envelope_t *elementToReturn = asset_category_dto_list_envelope_parseFromJSON(AssetsAPIlocalVarJSON);
    cJSON_Delete(AssetsAPIlocalVarJSON);
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

// Gets the count of asset categories
//
// Returns the total number of asset categories for the authenticated tenant.
//
int32_envelope_t*
AssetsAPI_getAssetAssetCategoriesCount(apiClient_t *apiClient, char *tenantId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/AssetsService/Assets/Categories/count")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/AssetsService/Assets/Categories/count");




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
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *AssetsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    int32_envelope_t *elementToReturn = int32_envelope_parseFromJSON(AssetsAPIlocalVarJSON);
    cJSON_Delete(AssetsAPIlocalVarJSON);
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

// Gets a specific asset category
//
// Retrieves a specific asset category for the authenticated tenant.
//
asset_category_dto_envelope_t*
AssetsAPI_getAssetAssetCategory(apiClient_t *apiClient, char *tenantId, char *categoryId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/AssetsService/Assets/Categories/{categoryId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/AssetsService/Assets/Categories/{categoryId}");


    // Path Params
    long sizeOfPathParams_categoryId = strlen(categoryId)+3 + strlen("{ categoryId }");
    if(categoryId == NULL) {
        goto end;
    }
    char* localVarToReplace_categoryId = malloc(sizeOfPathParams_categoryId);
    sprintf(localVarToReplace_categoryId, "{%s}", "categoryId");

    localVarPath = strReplace(localVarPath, localVarToReplace_categoryId, categoryId);
    if(categoryId == NULL) {
        goto end;
    }
    char* localVarToReplace_categoryId = malloc(sizeOfPathParams_categoryId);
    sprintf(localVarToReplace_categoryId, "{%s}", "categoryId");

    localVarPath = strReplace(localVarPath, localVarToReplace_categoryId, categoryId);



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
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *AssetsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    asset_category_dto_envelope_t *elementToReturn = asset_category_dto_envelope_parseFromJSON(AssetsAPIlocalVarJSON);
    cJSON_Delete(AssetsAPIlocalVarJSON);
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
    free(localVarToReplace_categoryId);
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

// Gets a specific depreciation record for an asset
//
// Retrieves a specific depreciation record by ID for the specified asset.
//
asset_depreciation_record_dto_envelope_t*
AssetsAPI_getAssetDepreciationRecord(apiClient_t *apiClient, char *tenantId, char *assetId, char *recordId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/AssetsService/Assets/{assetId}/DepreciationRecords/{recordId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/AssetsService/Assets/{assetId}/DepreciationRecords/{recordId}");


    // Path Params
    long sizeOfPathParams_assetId = strlen(assetId)+3 + strlen(recordId)+3 + strlen("{ assetId }");
    if(assetId == NULL) {
        goto end;
    }
    char* localVarToReplace_assetId = malloc(sizeOfPathParams_assetId);
    sprintf(localVarToReplace_assetId, "{%s}", "assetId");

    localVarPath = strReplace(localVarPath, localVarToReplace_assetId, assetId);
    if(assetId == NULL) {
        goto end;
    }
    char* localVarToReplace_assetId = malloc(sizeOfPathParams_assetId);
    sprintf(localVarToReplace_assetId, "{%s}", "assetId");

    localVarPath = strReplace(localVarPath, localVarToReplace_assetId, assetId);

    // Path Params
    long sizeOfPathParams_recordId = strlen(assetId)+3 + strlen(recordId)+3 + strlen("{ recordId }");
    if(recordId == NULL) {
        goto end;
    }
    char* localVarToReplace_recordId = malloc(sizeOfPathParams_recordId);
    sprintf(localVarToReplace_recordId, "{%s}", "recordId");

    localVarPath = strReplace(localVarPath, localVarToReplace_recordId, recordId);
    if(recordId == NULL) {
        goto end;
    }
    char* localVarToReplace_recordId = malloc(sizeOfPathParams_recordId);
    sprintf(localVarToReplace_recordId, "{%s}", "recordId");

    localVarPath = strReplace(localVarPath, localVarToReplace_recordId, recordId);



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
    cJSON *AssetsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    asset_depreciation_record_dto_envelope_t *elementToReturn = asset_depreciation_record_dto_envelope_parseFromJSON(AssetsAPIlocalVarJSON);
    cJSON_Delete(AssetsAPIlocalVarJSON);
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
    free(localVarToReplace_assetId);
    free(localVarToReplace_recordId);
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

// Gets depreciation records for a specific asset
//
// Retrieves all depreciation records for the specified asset.
//
asset_depreciation_record_dto_list_envelope_t*
AssetsAPI_getAssetDepreciationRecords(apiClient_t *apiClient, char *tenantId, char *assetId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/AssetsService/Assets/{assetId}/DepreciationRecords")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/AssetsService/Assets/{assetId}/DepreciationRecords");


    // Path Params
    long sizeOfPathParams_assetId = strlen(assetId)+3 + strlen("{ assetId }");
    if(assetId == NULL) {
        goto end;
    }
    char* localVarToReplace_assetId = malloc(sizeOfPathParams_assetId);
    sprintf(localVarToReplace_assetId, "{%s}", "assetId");

    localVarPath = strReplace(localVarPath, localVarToReplace_assetId, assetId);
    if(assetId == NULL) {
        goto end;
    }
    char* localVarToReplace_assetId = malloc(sizeOfPathParams_assetId);
    sprintf(localVarToReplace_assetId, "{%s}", "assetId");

    localVarPath = strReplace(localVarPath, localVarToReplace_assetId, assetId);



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
    cJSON *AssetsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    asset_depreciation_record_dto_list_envelope_t *elementToReturn = asset_depreciation_record_dto_list_envelope_parseFromJSON(AssetsAPIlocalVarJSON);
    cJSON_Delete(AssetsAPIlocalVarJSON);
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
    free(localVarToReplace_assetId);
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

// Gets count of depreciation records for a specific asset
//
// Returns the total number of depreciation records for the specified asset.
//
int32_envelope_t*
AssetsAPI_getAssetDepreciationRecordsCount(apiClient_t *apiClient, char *tenantId, char *assetId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/AssetsService/Assets/{assetId}/DepreciationRecords/Count")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/AssetsService/Assets/{assetId}/DepreciationRecords/Count");


    // Path Params
    long sizeOfPathParams_assetId = strlen(assetId)+3 + strlen("{ assetId }");
    if(assetId == NULL) {
        goto end;
    }
    char* localVarToReplace_assetId = malloc(sizeOfPathParams_assetId);
    sprintf(localVarToReplace_assetId, "{%s}", "assetId");

    localVarPath = strReplace(localVarPath, localVarToReplace_assetId, assetId);
    if(assetId == NULL) {
        goto end;
    }
    char* localVarToReplace_assetId = malloc(sizeOfPathParams_assetId);
    sprintf(localVarToReplace_assetId, "{%s}", "assetId");

    localVarPath = strReplace(localVarPath, localVarToReplace_assetId, assetId);



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
    cJSON *AssetsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    int32_envelope_t *elementToReturn = int32_envelope_parseFromJSON(AssetsAPIlocalVarJSON);
    cJSON_Delete(AssetsAPIlocalVarJSON);
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
    free(localVarToReplace_assetId);
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

// Gets a specific repair for an asset
//
// Retrieves a specific repair record by ID for the specified asset.
//
asset_repair_dto_envelope_t*
AssetsAPI_getAssetRepair(apiClient_t *apiClient, char *tenantId, char *assetId, char *repairId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/AssetsService/Assets/{assetId}/Repairs/{repairId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/AssetsService/Assets/{assetId}/Repairs/{repairId}");


    // Path Params
    long sizeOfPathParams_assetId = strlen(assetId)+3 + strlen(repairId)+3 + strlen("{ assetId }");
    if(assetId == NULL) {
        goto end;
    }
    char* localVarToReplace_assetId = malloc(sizeOfPathParams_assetId);
    sprintf(localVarToReplace_assetId, "{%s}", "assetId");

    localVarPath = strReplace(localVarPath, localVarToReplace_assetId, assetId);
    if(assetId == NULL) {
        goto end;
    }
    char* localVarToReplace_assetId = malloc(sizeOfPathParams_assetId);
    sprintf(localVarToReplace_assetId, "{%s}", "assetId");

    localVarPath = strReplace(localVarPath, localVarToReplace_assetId, assetId);

    // Path Params
    long sizeOfPathParams_repairId = strlen(assetId)+3 + strlen(repairId)+3 + strlen("{ repairId }");
    if(repairId == NULL) {
        goto end;
    }
    char* localVarToReplace_repairId = malloc(sizeOfPathParams_repairId);
    sprintf(localVarToReplace_repairId, "{%s}", "repairId");

    localVarPath = strReplace(localVarPath, localVarToReplace_repairId, repairId);
    if(repairId == NULL) {
        goto end;
    }
    char* localVarToReplace_repairId = malloc(sizeOfPathParams_repairId);
    sprintf(localVarToReplace_repairId, "{%s}", "repairId");

    localVarPath = strReplace(localVarPath, localVarToReplace_repairId, repairId);



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
    cJSON *AssetsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    asset_repair_dto_envelope_t *elementToReturn = asset_repair_dto_envelope_parseFromJSON(AssetsAPIlocalVarJSON);
    cJSON_Delete(AssetsAPIlocalVarJSON);
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
    free(localVarToReplace_assetId);
    free(localVarToReplace_repairId);
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

// Gets repairs for a specific asset
//
// Retrieves all repair records for the specified asset.
//
asset_repair_dto_list_envelope_t*
AssetsAPI_getAssetRepairs(apiClient_t *apiClient, char *tenantId, char *assetId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/AssetsService/Assets/{assetId}/Repairs")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/AssetsService/Assets/{assetId}/Repairs");


    // Path Params
    long sizeOfPathParams_assetId = strlen(assetId)+3 + strlen("{ assetId }");
    if(assetId == NULL) {
        goto end;
    }
    char* localVarToReplace_assetId = malloc(sizeOfPathParams_assetId);
    sprintf(localVarToReplace_assetId, "{%s}", "assetId");

    localVarPath = strReplace(localVarPath, localVarToReplace_assetId, assetId);
    if(assetId == NULL) {
        goto end;
    }
    char* localVarToReplace_assetId = malloc(sizeOfPathParams_assetId);
    sprintf(localVarToReplace_assetId, "{%s}", "assetId");

    localVarPath = strReplace(localVarPath, localVarToReplace_assetId, assetId);



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
    cJSON *AssetsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    asset_repair_dto_list_envelope_t *elementToReturn = asset_repair_dto_list_envelope_parseFromJSON(AssetsAPIlocalVarJSON);
    cJSON_Delete(AssetsAPIlocalVarJSON);
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
    free(localVarToReplace_assetId);
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

// Gets count of repairs for a specific asset
//
// Returns the total number of repair records for the specified asset.
//
int32_envelope_t*
AssetsAPI_getAssetRepairsCount(apiClient_t *apiClient, char *tenantId, char *assetId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/AssetsService/Assets/{assetId}/Repairs/Count")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/AssetsService/Assets/{assetId}/Repairs/Count");


    // Path Params
    long sizeOfPathParams_assetId = strlen(assetId)+3 + strlen("{ assetId }");
    if(assetId == NULL) {
        goto end;
    }
    char* localVarToReplace_assetId = malloc(sizeOfPathParams_assetId);
    sprintf(localVarToReplace_assetId, "{%s}", "assetId");

    localVarPath = strReplace(localVarPath, localVarToReplace_assetId, assetId);
    if(assetId == NULL) {
        goto end;
    }
    char* localVarToReplace_assetId = malloc(sizeOfPathParams_assetId);
    sprintf(localVarToReplace_assetId, "{%s}", "assetId");

    localVarPath = strReplace(localVarPath, localVarToReplace_assetId, assetId);



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
    cJSON *AssetsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    int32_envelope_t *elementToReturn = int32_envelope_parseFromJSON(AssetsAPIlocalVarJSON);
    cJSON_Delete(AssetsAPIlocalVarJSON);
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
    free(localVarToReplace_assetId);
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

// Gets a specific transfer for an asset
//
// Retrieves a specific transfer record by ID for the specified asset.
//
asset_transfer_dto_envelope_t*
AssetsAPI_getAssetTransfer(apiClient_t *apiClient, char *tenantId, char *assetId, char *transferId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/AssetsService/Assets/{assetId}/Transfers/{transferId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/AssetsService/Assets/{assetId}/Transfers/{transferId}");


    // Path Params
    long sizeOfPathParams_assetId = strlen(assetId)+3 + strlen(transferId)+3 + strlen("{ assetId }");
    if(assetId == NULL) {
        goto end;
    }
    char* localVarToReplace_assetId = malloc(sizeOfPathParams_assetId);
    sprintf(localVarToReplace_assetId, "{%s}", "assetId");

    localVarPath = strReplace(localVarPath, localVarToReplace_assetId, assetId);
    if(assetId == NULL) {
        goto end;
    }
    char* localVarToReplace_assetId = malloc(sizeOfPathParams_assetId);
    sprintf(localVarToReplace_assetId, "{%s}", "assetId");

    localVarPath = strReplace(localVarPath, localVarToReplace_assetId, assetId);

    // Path Params
    long sizeOfPathParams_transferId = strlen(assetId)+3 + strlen(transferId)+3 + strlen("{ transferId }");
    if(transferId == NULL) {
        goto end;
    }
    char* localVarToReplace_transferId = malloc(sizeOfPathParams_transferId);
    sprintf(localVarToReplace_transferId, "{%s}", "transferId");

    localVarPath = strReplace(localVarPath, localVarToReplace_transferId, transferId);
    if(transferId == NULL) {
        goto end;
    }
    char* localVarToReplace_transferId = malloc(sizeOfPathParams_transferId);
    sprintf(localVarToReplace_transferId, "{%s}", "transferId");

    localVarPath = strReplace(localVarPath, localVarToReplace_transferId, transferId);



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
    cJSON *AssetsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    asset_transfer_dto_envelope_t *elementToReturn = asset_transfer_dto_envelope_parseFromJSON(AssetsAPIlocalVarJSON);
    cJSON_Delete(AssetsAPIlocalVarJSON);
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
    free(localVarToReplace_assetId);
    free(localVarToReplace_transferId);
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

// Gets transfers for a specific asset
//
// Retrieves all transfer records for the specified asset.
//
asset_transfer_dto_list_envelope_t*
AssetsAPI_getAssetTransfers(apiClient_t *apiClient, char *tenantId, char *assetId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/AssetsService/Assets/{assetId}/Transfers")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/AssetsService/Assets/{assetId}/Transfers");


    // Path Params
    long sizeOfPathParams_assetId = strlen(assetId)+3 + strlen("{ assetId }");
    if(assetId == NULL) {
        goto end;
    }
    char* localVarToReplace_assetId = malloc(sizeOfPathParams_assetId);
    sprintf(localVarToReplace_assetId, "{%s}", "assetId");

    localVarPath = strReplace(localVarPath, localVarToReplace_assetId, assetId);
    if(assetId == NULL) {
        goto end;
    }
    char* localVarToReplace_assetId = malloc(sizeOfPathParams_assetId);
    sprintf(localVarToReplace_assetId, "{%s}", "assetId");

    localVarPath = strReplace(localVarPath, localVarToReplace_assetId, assetId);



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
    cJSON *AssetsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    asset_transfer_dto_list_envelope_t *elementToReturn = asset_transfer_dto_list_envelope_parseFromJSON(AssetsAPIlocalVarJSON);
    cJSON_Delete(AssetsAPIlocalVarJSON);
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
    free(localVarToReplace_assetId);
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

// Gets count of transfers for a specific asset
//
// Returns the total number of transfer records for the specified asset.
//
int32_envelope_t*
AssetsAPI_getAssetTransfersCount(apiClient_t *apiClient, char *tenantId, char *assetId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/AssetsService/Assets/{assetId}/Transfers/Count")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/AssetsService/Assets/{assetId}/Transfers/Count");


    // Path Params
    long sizeOfPathParams_assetId = strlen(assetId)+3 + strlen("{ assetId }");
    if(assetId == NULL) {
        goto end;
    }
    char* localVarToReplace_assetId = malloc(sizeOfPathParams_assetId);
    sprintf(localVarToReplace_assetId, "{%s}", "assetId");

    localVarPath = strReplace(localVarPath, localVarToReplace_assetId, assetId);
    if(assetId == NULL) {
        goto end;
    }
    char* localVarToReplace_assetId = malloc(sizeOfPathParams_assetId);
    sprintf(localVarToReplace_assetId, "{%s}", "assetId");

    localVarPath = strReplace(localVarPath, localVarToReplace_assetId, assetId);



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
    cJSON *AssetsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    int32_envelope_t *elementToReturn = int32_envelope_parseFromJSON(AssetsAPIlocalVarJSON);
    cJSON_Delete(AssetsAPIlocalVarJSON);
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
    free(localVarToReplace_assetId);
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

// Gets a specific value amendment for an asset
//
// Retrieves a specific value amendment record by ID for the specified asset.
//
asset_value_amend_dto_envelope_t*
AssetsAPI_getAssetValueAmend(apiClient_t *apiClient, char *tenantId, char *assetId, char *amendId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/AssetsService/Assets/{assetId}/ValueAmends/{amendId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/AssetsService/Assets/{assetId}/ValueAmends/{amendId}");


    // Path Params
    long sizeOfPathParams_assetId = strlen(assetId)+3 + strlen(amendId)+3 + strlen("{ assetId }");
    if(assetId == NULL) {
        goto end;
    }
    char* localVarToReplace_assetId = malloc(sizeOfPathParams_assetId);
    sprintf(localVarToReplace_assetId, "{%s}", "assetId");

    localVarPath = strReplace(localVarPath, localVarToReplace_assetId, assetId);
    if(assetId == NULL) {
        goto end;
    }
    char* localVarToReplace_assetId = malloc(sizeOfPathParams_assetId);
    sprintf(localVarToReplace_assetId, "{%s}", "assetId");

    localVarPath = strReplace(localVarPath, localVarToReplace_assetId, assetId);

    // Path Params
    long sizeOfPathParams_amendId = strlen(assetId)+3 + strlen(amendId)+3 + strlen("{ amendId }");
    if(amendId == NULL) {
        goto end;
    }
    char* localVarToReplace_amendId = malloc(sizeOfPathParams_amendId);
    sprintf(localVarToReplace_amendId, "{%s}", "amendId");

    localVarPath = strReplace(localVarPath, localVarToReplace_amendId, amendId);
    if(amendId == NULL) {
        goto end;
    }
    char* localVarToReplace_amendId = malloc(sizeOfPathParams_amendId);
    sprintf(localVarToReplace_amendId, "{%s}", "amendId");

    localVarPath = strReplace(localVarPath, localVarToReplace_amendId, amendId);



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
    cJSON *AssetsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    asset_value_amend_dto_envelope_t *elementToReturn = asset_value_amend_dto_envelope_parseFromJSON(AssetsAPIlocalVarJSON);
    cJSON_Delete(AssetsAPIlocalVarJSON);
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
    free(localVarToReplace_assetId);
    free(localVarToReplace_amendId);
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

// Gets value amendments for a specific asset
//
// Retrieves all value amendment records for the specified asset.
//
asset_value_amend_dto_list_envelope_t*
AssetsAPI_getAssetValueAmends(apiClient_t *apiClient, char *tenantId, char *assetId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/AssetsService/Assets/{assetId}/ValueAmends")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/AssetsService/Assets/{assetId}/ValueAmends");


    // Path Params
    long sizeOfPathParams_assetId = strlen(assetId)+3 + strlen("{ assetId }");
    if(assetId == NULL) {
        goto end;
    }
    char* localVarToReplace_assetId = malloc(sizeOfPathParams_assetId);
    sprintf(localVarToReplace_assetId, "{%s}", "assetId");

    localVarPath = strReplace(localVarPath, localVarToReplace_assetId, assetId);
    if(assetId == NULL) {
        goto end;
    }
    char* localVarToReplace_assetId = malloc(sizeOfPathParams_assetId);
    sprintf(localVarToReplace_assetId, "{%s}", "assetId");

    localVarPath = strReplace(localVarPath, localVarToReplace_assetId, assetId);



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
    cJSON *AssetsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    asset_value_amend_dto_list_envelope_t *elementToReturn = asset_value_amend_dto_list_envelope_parseFromJSON(AssetsAPIlocalVarJSON);
    cJSON_Delete(AssetsAPIlocalVarJSON);
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
    free(localVarToReplace_assetId);
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

// Gets count of value amendments for a specific asset
//
// Returns the total number of value amendment records for the specified asset.
//
int32_envelope_t*
AssetsAPI_getAssetValueAmendsCount(apiClient_t *apiClient, char *tenantId, char *assetId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/AssetsService/Assets/{assetId}/ValueAmends/Count")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/AssetsService/Assets/{assetId}/ValueAmends/Count");


    // Path Params
    long sizeOfPathParams_assetId = strlen(assetId)+3 + strlen("{ assetId }");
    if(assetId == NULL) {
        goto end;
    }
    char* localVarToReplace_assetId = malloc(sizeOfPathParams_assetId);
    sprintf(localVarToReplace_assetId, "{%s}", "assetId");

    localVarPath = strReplace(localVarPath, localVarToReplace_assetId, assetId);
    if(assetId == NULL) {
        goto end;
    }
    char* localVarToReplace_assetId = malloc(sizeOfPathParams_assetId);
    sprintf(localVarToReplace_assetId, "{%s}", "assetId");

    localVarPath = strReplace(localVarPath, localVarToReplace_assetId, assetId);



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
    cJSON *AssetsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    int32_envelope_t *elementToReturn = int32_envelope_parseFromJSON(AssetsAPIlocalVarJSON);
    cJSON_Delete(AssetsAPIlocalVarJSON);
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
    free(localVarToReplace_assetId);
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

// Gets all assets for the current tenant
//
// Retrieves all assets for the authenticated tenant with optional filtering.
//
asset_dto_list_envelope_t*
AssetsAPI_getAssets(apiClient_t *apiClient, char *tenantId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/AssetsService/Assets")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/AssetsService/Assets");




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
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *AssetsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    asset_dto_list_envelope_t *elementToReturn = asset_dto_list_envelope_parseFromJSON(AssetsAPIlocalVarJSON);
    cJSON_Delete(AssetsAPIlocalVarJSON);
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

// Gets the count of assets
//
// Returns the total number of assets for the authenticated tenant.
//
int32_envelope_t*
AssetsAPI_getAssetsCount(apiClient_t *apiClient, char *tenantId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/AssetsService/Assets/count")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/AssetsService/Assets/count");




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
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *AssetsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    int32_envelope_t *elementToReturn = int32_envelope_parseFromJSON(AssetsAPIlocalVarJSON);
    cJSON_Delete(AssetsAPIlocalVarJSON);
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

// Updates an existing asset
//
// Updates an existing asset for the authenticated tenant.
//
asset_dto_envelope_t*
AssetsAPI_updateAsset(apiClient_t *apiClient, char *tenantId, char *assetId, asset_update_dto_t *asset_update_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/AssetsService/Assets/{assetId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/AssetsService/Assets/{assetId}");


    // Path Params
    long sizeOfPathParams_assetId = strlen(assetId)+3 + strlen("{ assetId }");
    if(assetId == NULL) {
        goto end;
    }
    char* localVarToReplace_assetId = malloc(sizeOfPathParams_assetId);
    sprintf(localVarToReplace_assetId, "{%s}", "assetId");

    localVarPath = strReplace(localVarPath, localVarToReplace_assetId, assetId);
    if(assetId == NULL) {
        goto end;
    }
    char* localVarToReplace_assetId = malloc(sizeOfPathParams_assetId);
    sprintf(localVarToReplace_assetId, "{%s}", "assetId");

    localVarPath = strReplace(localVarPath, localVarToReplace_assetId, assetId);



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
    cJSON *localVarSingleItemJSON_asset_update_dto = NULL;
    if (asset_update_dto != NULL)
    {
        //string
        localVarSingleItemJSON_asset_update_dto = asset_update_dto_convertToJSON(asset_update_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_asset_update_dto);
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
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad Request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *AssetsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    asset_dto_envelope_t *elementToReturn = asset_dto_envelope_parseFromJSON(AssetsAPIlocalVarJSON);
    cJSON_Delete(AssetsAPIlocalVarJSON);
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
    free(localVarToReplace_assetId);
    if (localVarSingleItemJSON_asset_update_dto) {
        cJSON_Delete(localVarSingleItemJSON_asset_update_dto);
        localVarSingleItemJSON_asset_update_dto = NULL;
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

// Updates an existing asset category
//
// Updates an existing asset category for the authenticated tenant.
//
asset_category_dto_envelope_t*
AssetsAPI_updateAssetAssetCategory(apiClient_t *apiClient, char *tenantId, char *categoryId, asset_category_update_dto_t *asset_category_update_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/AssetsService/Assets/Categories/{categoryId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/AssetsService/Assets/Categories/{categoryId}");


    // Path Params
    long sizeOfPathParams_categoryId = strlen(categoryId)+3 + strlen("{ categoryId }");
    if(categoryId == NULL) {
        goto end;
    }
    char* localVarToReplace_categoryId = malloc(sizeOfPathParams_categoryId);
    sprintf(localVarToReplace_categoryId, "{%s}", "categoryId");

    localVarPath = strReplace(localVarPath, localVarToReplace_categoryId, categoryId);
    if(categoryId == NULL) {
        goto end;
    }
    char* localVarToReplace_categoryId = malloc(sizeOfPathParams_categoryId);
    sprintf(localVarToReplace_categoryId, "{%s}", "categoryId");

    localVarPath = strReplace(localVarPath, localVarToReplace_categoryId, categoryId);



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
    cJSON *localVarSingleItemJSON_asset_category_update_dto = NULL;
    if (asset_category_update_dto != NULL)
    {
        //string
        localVarSingleItemJSON_asset_category_update_dto = asset_category_update_dto_convertToJSON(asset_category_update_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_asset_category_update_dto);
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
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad Request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *AssetsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    asset_category_dto_envelope_t *elementToReturn = asset_category_dto_envelope_parseFromJSON(AssetsAPIlocalVarJSON);
    cJSON_Delete(AssetsAPIlocalVarJSON);
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
    free(localVarToReplace_categoryId);
    if (localVarSingleItemJSON_asset_category_update_dto) {
        cJSON_Delete(localVarSingleItemJSON_asset_category_update_dto);
        localVarSingleItemJSON_asset_category_update_dto = NULL;
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

// Updates a depreciation record for an asset
//
// Updates an existing depreciation record for the specified asset.
//
empty_envelope_t*
AssetsAPI_updateAssetDepreciationRecord(apiClient_t *apiClient, char *tenantId, char *assetId, char *recordId, asset_depreciation_record_update_dto_t *asset_depreciation_record_update_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/AssetsService/Assets/{assetId}/DepreciationRecords/{recordId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/AssetsService/Assets/{assetId}/DepreciationRecords/{recordId}");


    // Path Params
    long sizeOfPathParams_assetId = strlen(assetId)+3 + strlen(recordId)+3 + strlen("{ assetId }");
    if(assetId == NULL) {
        goto end;
    }
    char* localVarToReplace_assetId = malloc(sizeOfPathParams_assetId);
    sprintf(localVarToReplace_assetId, "{%s}", "assetId");

    localVarPath = strReplace(localVarPath, localVarToReplace_assetId, assetId);
    if(assetId == NULL) {
        goto end;
    }
    char* localVarToReplace_assetId = malloc(sizeOfPathParams_assetId);
    sprintf(localVarToReplace_assetId, "{%s}", "assetId");

    localVarPath = strReplace(localVarPath, localVarToReplace_assetId, assetId);

    // Path Params
    long sizeOfPathParams_recordId = strlen(assetId)+3 + strlen(recordId)+3 + strlen("{ recordId }");
    if(recordId == NULL) {
        goto end;
    }
    char* localVarToReplace_recordId = malloc(sizeOfPathParams_recordId);
    sprintf(localVarToReplace_recordId, "{%s}", "recordId");

    localVarPath = strReplace(localVarPath, localVarToReplace_recordId, recordId);
    if(recordId == NULL) {
        goto end;
    }
    char* localVarToReplace_recordId = malloc(sizeOfPathParams_recordId);
    sprintf(localVarToReplace_recordId, "{%s}", "recordId");

    localVarPath = strReplace(localVarPath, localVarToReplace_recordId, recordId);



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
    cJSON *localVarSingleItemJSON_asset_depreciation_record_update_dto = NULL;
    if (asset_depreciation_record_update_dto != NULL)
    {
        //string
        localVarSingleItemJSON_asset_depreciation_record_update_dto = asset_depreciation_record_update_dto_convertToJSON(asset_depreciation_record_update_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_asset_depreciation_record_update_dto);
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
    cJSON *AssetsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(AssetsAPIlocalVarJSON);
    cJSON_Delete(AssetsAPIlocalVarJSON);
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
    free(localVarToReplace_assetId);
    free(localVarToReplace_recordId);
    if (localVarSingleItemJSON_asset_depreciation_record_update_dto) {
        cJSON_Delete(localVarSingleItemJSON_asset_depreciation_record_update_dto);
        localVarSingleItemJSON_asset_depreciation_record_update_dto = NULL;
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

// Updates a repair for an asset
//
// Updates an existing repair record for the specified asset.
//
empty_envelope_t*
AssetsAPI_updateAssetRepair(apiClient_t *apiClient, char *tenantId, char *assetId, char *repairId, asset_repair_update_dto_t *asset_repair_update_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/AssetsService/Assets/{assetId}/Repairs/{repairId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/AssetsService/Assets/{assetId}/Repairs/{repairId}");


    // Path Params
    long sizeOfPathParams_assetId = strlen(assetId)+3 + strlen(repairId)+3 + strlen("{ assetId }");
    if(assetId == NULL) {
        goto end;
    }
    char* localVarToReplace_assetId = malloc(sizeOfPathParams_assetId);
    sprintf(localVarToReplace_assetId, "{%s}", "assetId");

    localVarPath = strReplace(localVarPath, localVarToReplace_assetId, assetId);
    if(assetId == NULL) {
        goto end;
    }
    char* localVarToReplace_assetId = malloc(sizeOfPathParams_assetId);
    sprintf(localVarToReplace_assetId, "{%s}", "assetId");

    localVarPath = strReplace(localVarPath, localVarToReplace_assetId, assetId);

    // Path Params
    long sizeOfPathParams_repairId = strlen(assetId)+3 + strlen(repairId)+3 + strlen("{ repairId }");
    if(repairId == NULL) {
        goto end;
    }
    char* localVarToReplace_repairId = malloc(sizeOfPathParams_repairId);
    sprintf(localVarToReplace_repairId, "{%s}", "repairId");

    localVarPath = strReplace(localVarPath, localVarToReplace_repairId, repairId);
    if(repairId == NULL) {
        goto end;
    }
    char* localVarToReplace_repairId = malloc(sizeOfPathParams_repairId);
    sprintf(localVarToReplace_repairId, "{%s}", "repairId");

    localVarPath = strReplace(localVarPath, localVarToReplace_repairId, repairId);



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
    cJSON *localVarSingleItemJSON_asset_repair_update_dto = NULL;
    if (asset_repair_update_dto != NULL)
    {
        //string
        localVarSingleItemJSON_asset_repair_update_dto = asset_repair_update_dto_convertToJSON(asset_repair_update_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_asset_repair_update_dto);
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
    cJSON *AssetsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(AssetsAPIlocalVarJSON);
    cJSON_Delete(AssetsAPIlocalVarJSON);
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
    free(localVarToReplace_assetId);
    free(localVarToReplace_repairId);
    if (localVarSingleItemJSON_asset_repair_update_dto) {
        cJSON_Delete(localVarSingleItemJSON_asset_repair_update_dto);
        localVarSingleItemJSON_asset_repair_update_dto = NULL;
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

// Updates a transfer for an asset
//
// Updates an existing transfer record for the specified asset.
//
empty_envelope_t*
AssetsAPI_updateAssetTransfer(apiClient_t *apiClient, char *tenantId, char *assetId, char *transferId, asset_transfer_update_dto_t *asset_transfer_update_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/AssetsService/Assets/{assetId}/Transfers/{transferId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/AssetsService/Assets/{assetId}/Transfers/{transferId}");


    // Path Params
    long sizeOfPathParams_assetId = strlen(assetId)+3 + strlen(transferId)+3 + strlen("{ assetId }");
    if(assetId == NULL) {
        goto end;
    }
    char* localVarToReplace_assetId = malloc(sizeOfPathParams_assetId);
    sprintf(localVarToReplace_assetId, "{%s}", "assetId");

    localVarPath = strReplace(localVarPath, localVarToReplace_assetId, assetId);
    if(assetId == NULL) {
        goto end;
    }
    char* localVarToReplace_assetId = malloc(sizeOfPathParams_assetId);
    sprintf(localVarToReplace_assetId, "{%s}", "assetId");

    localVarPath = strReplace(localVarPath, localVarToReplace_assetId, assetId);

    // Path Params
    long sizeOfPathParams_transferId = strlen(assetId)+3 + strlen(transferId)+3 + strlen("{ transferId }");
    if(transferId == NULL) {
        goto end;
    }
    char* localVarToReplace_transferId = malloc(sizeOfPathParams_transferId);
    sprintf(localVarToReplace_transferId, "{%s}", "transferId");

    localVarPath = strReplace(localVarPath, localVarToReplace_transferId, transferId);
    if(transferId == NULL) {
        goto end;
    }
    char* localVarToReplace_transferId = malloc(sizeOfPathParams_transferId);
    sprintf(localVarToReplace_transferId, "{%s}", "transferId");

    localVarPath = strReplace(localVarPath, localVarToReplace_transferId, transferId);



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
    cJSON *localVarSingleItemJSON_asset_transfer_update_dto = NULL;
    if (asset_transfer_update_dto != NULL)
    {
        //string
        localVarSingleItemJSON_asset_transfer_update_dto = asset_transfer_update_dto_convertToJSON(asset_transfer_update_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_asset_transfer_update_dto);
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
    cJSON *AssetsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(AssetsAPIlocalVarJSON);
    cJSON_Delete(AssetsAPIlocalVarJSON);
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
    free(localVarToReplace_assetId);
    free(localVarToReplace_transferId);
    if (localVarSingleItemJSON_asset_transfer_update_dto) {
        cJSON_Delete(localVarSingleItemJSON_asset_transfer_update_dto);
        localVarSingleItemJSON_asset_transfer_update_dto = NULL;
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

// Updates a value amendment for an asset
//
// Updates an existing value amendment record for the specified asset.
//
empty_envelope_t*
AssetsAPI_updateAssetValueAmend(apiClient_t *apiClient, char *tenantId, char *assetId, char *amendId, asset_value_amend_update_dto_t *asset_value_amend_update_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/AssetsService/Assets/{assetId}/ValueAmends/{amendId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/AssetsService/Assets/{assetId}/ValueAmends/{amendId}");


    // Path Params
    long sizeOfPathParams_assetId = strlen(assetId)+3 + strlen(amendId)+3 + strlen("{ assetId }");
    if(assetId == NULL) {
        goto end;
    }
    char* localVarToReplace_assetId = malloc(sizeOfPathParams_assetId);
    sprintf(localVarToReplace_assetId, "{%s}", "assetId");

    localVarPath = strReplace(localVarPath, localVarToReplace_assetId, assetId);
    if(assetId == NULL) {
        goto end;
    }
    char* localVarToReplace_assetId = malloc(sizeOfPathParams_assetId);
    sprintf(localVarToReplace_assetId, "{%s}", "assetId");

    localVarPath = strReplace(localVarPath, localVarToReplace_assetId, assetId);

    // Path Params
    long sizeOfPathParams_amendId = strlen(assetId)+3 + strlen(amendId)+3 + strlen("{ amendId }");
    if(amendId == NULL) {
        goto end;
    }
    char* localVarToReplace_amendId = malloc(sizeOfPathParams_amendId);
    sprintf(localVarToReplace_amendId, "{%s}", "amendId");

    localVarPath = strReplace(localVarPath, localVarToReplace_amendId, amendId);
    if(amendId == NULL) {
        goto end;
    }
    char* localVarToReplace_amendId = malloc(sizeOfPathParams_amendId);
    sprintf(localVarToReplace_amendId, "{%s}", "amendId");

    localVarPath = strReplace(localVarPath, localVarToReplace_amendId, amendId);



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
    cJSON *localVarSingleItemJSON_asset_value_amend_update_dto = NULL;
    if (asset_value_amend_update_dto != NULL)
    {
        //string
        localVarSingleItemJSON_asset_value_amend_update_dto = asset_value_amend_update_dto_convertToJSON(asset_value_amend_update_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_asset_value_amend_update_dto);
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
    cJSON *AssetsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(AssetsAPIlocalVarJSON);
    cJSON_Delete(AssetsAPIlocalVarJSON);
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
    free(localVarToReplace_assetId);
    free(localVarToReplace_amendId);
    if (localVarSingleItemJSON_asset_value_amend_update_dto) {
        cJSON_Delete(localVarSingleItemJSON_asset_value_amend_update_dto);
        localVarSingleItemJSON_asset_value_amend_update_dto = NULL;
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

