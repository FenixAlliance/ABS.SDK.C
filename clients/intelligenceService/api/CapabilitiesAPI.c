#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "CapabilitiesAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)

// Functions for enum SURFACE for CapabilitiesAPI_getCapabilitiesAsync

static char* getCapabilitiesAsync_SURFACE_ToString(intelligenceservice_getCapabilitiesAsync_surface_e SURFACE){
    char *SURFACEArray[] =  { "NULL", "None", "Workflow", "AI", "Mcp", "Job", "Integration", "Webhook", "Admin" };
    return SURFACEArray[SURFACE];
}

static intelligenceservice_getCapabilitiesAsync_surface_e getCapabilitiesAsync_SURFACE_FromString(char* SURFACE){
    int stringToReturn = 0;
    char *SURFACEArray[] =  { "NULL", "None", "Workflow", "AI", "Mcp", "Job", "Integration", "Webhook", "Admin" };
    size_t sizeofArray = sizeof(SURFACEArray) / sizeof(SURFACEArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(SURFACE, SURFACEArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

/*
// Function getCapabilitiesAsync_SURFACE_convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *getCapabilitiesAsync_SURFACE_convertToJSON(intelligenceservice_getCapabilitiesAsync_surface_e SURFACE) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "surface", getCapabilitiesAsync_SURFACE_ToString(SURFACE)) == NULL) {
        goto fail;
    }
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function getCapabilitiesAsync_SURFACE_parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static intelligenceservice_getCapabilitiesAsync_surface_e getCapabilitiesAsync_SURFACE_parseFromJSON(cJSON* SURFACEJSON) {
    intelligenceservice_getCapabilitiesAsync_surface_e SURFACEVariable = 0;
    cJSON *SURFACEVar = cJSON_GetObjectItemCaseSensitive(SURFACEJSON, "surface");
    if(!cJSON_IsString(SURFACEVar) || (SURFACEVar->valuestring == NULL))
    {
        goto end;
    }
    SURFACEVariable = getCapabilitiesAsync_SURFACE_FromString(SURFACEVar->valuestring);
    return SURFACEVariable;
end:
    return 0;
}
*/

// Functions for enum SURFACE for CapabilitiesAPI_getCapabilitiesCountAsync

static char* getCapabilitiesCountAsync_SURFACE_ToString(intelligenceservice_getCapabilitiesCountAsync_surface_e SURFACE){
    char *SURFACEArray[] =  { "NULL", "None", "Workflow", "AI", "Mcp", "Job", "Integration", "Webhook", "Admin" };
    return SURFACEArray[SURFACE];
}

static intelligenceservice_getCapabilitiesCountAsync_surface_e getCapabilitiesCountAsync_SURFACE_FromString(char* SURFACE){
    int stringToReturn = 0;
    char *SURFACEArray[] =  { "NULL", "None", "Workflow", "AI", "Mcp", "Job", "Integration", "Webhook", "Admin" };
    size_t sizeofArray = sizeof(SURFACEArray) / sizeof(SURFACEArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(SURFACE, SURFACEArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

/*
// Function getCapabilitiesCountAsync_SURFACE_convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *getCapabilitiesCountAsync_SURFACE_convertToJSON(intelligenceservice_getCapabilitiesCountAsync_surface_e SURFACE) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "surface", getCapabilitiesCountAsync_SURFACE_ToString(SURFACE)) == NULL) {
        goto fail;
    }
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function getCapabilitiesCountAsync_SURFACE_parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static intelligenceservice_getCapabilitiesCountAsync_surface_e getCapabilitiesCountAsync_SURFACE_parseFromJSON(cJSON* SURFACEJSON) {
    intelligenceservice_getCapabilitiesCountAsync_surface_e SURFACEVariable = 0;
    cJSON *SURFACEVar = cJSON_GetObjectItemCaseSensitive(SURFACEJSON, "surface");
    if(!cJSON_IsString(SURFACEVar) || (SURFACEVar->valuestring == NULL))
    {
        goto end;
    }
    SURFACEVariable = getCapabilitiesCountAsync_SURFACE_FromString(SURFACEVar->valuestring);
    return SURFACEVariable;
end:
    return 0;
}
*/


// Get the annotated capability catalog
//
// Retrieves the full governed-capability catalog for the specified tenant, optionally narrowed to a single execution surface. Every capability is returned with an Available flag (and a DeniedReason when not available) so callers render disabled-with-reason instead of hiding; entitlement is computed server-side.
//
capability_dto_list_envelope_t*
CapabilitiesAPI_getCapabilitiesAsync(apiClient_t *apiClient, char *tenantId, intelligenceservice_getCapabilitiesAsync_surface_e surface, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/IntelligenceService/Capabilities")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/IntelligenceService/Capabilities");




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
    char *keyQuery_surface = NULL;
    intelligenceservice_getCapabilitiesAsync_surface_e valueQuery_surface ;
    keyValuePair_t *keyPairQuery_surface = 0;
    if (surface)
    {
        keyQuery_surface = strdup("surface");
        valueQuery_surface = (surface);
        keyPairQuery_surface = keyValuePair_create(keyQuery_surface, (void *)strdup(getCapabilitiesAsync_SURFACE_ToString(
        valueQuery_surface)));
        list_addElement(localVarQueryParameters,keyPairQuery_surface);
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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *CapabilitiesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    capability_dto_list_envelope_t *elementToReturn = capability_dto_list_envelope_parseFromJSON(CapabilitiesAPIlocalVarJSON);
    cJSON_Delete(CapabilitiesAPIlocalVarJSON);
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
    if(keyQuery_surface){
        free(keyQuery_surface);
        keyQuery_surface = NULL;
    }
    if(keyPairQuery_surface){
        keyValuePair_free(keyPairQuery_surface);
        keyPairQuery_surface = NULL;
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

// Get the capability catalog count
//
// Returns the number of governed capabilities in the catalog for the specified tenant — the surface-matching total that mirrors the list route's returned-set size (entitled or not), honouring the same optional surface narrowing.
//
int32_envelope_t*
CapabilitiesAPI_getCapabilitiesCountAsync(apiClient_t *apiClient, char *tenantId, intelligenceservice_getCapabilitiesCountAsync_surface_e surface, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/IntelligenceService/Capabilities/Count")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/IntelligenceService/Capabilities/Count");




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
    char *keyQuery_surface = NULL;
    intelligenceservice_getCapabilitiesCountAsync_surface_e valueQuery_surface ;
    keyValuePair_t *keyPairQuery_surface = 0;
    if (surface)
    {
        keyQuery_surface = strdup("surface");
        valueQuery_surface = (surface);
        keyPairQuery_surface = keyValuePair_create(keyQuery_surface, (void *)strdup(getCapabilitiesCountAsync_SURFACE_ToString(
        valueQuery_surface)));
        list_addElement(localVarQueryParameters,keyPairQuery_surface);
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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *CapabilitiesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    int32_envelope_t *elementToReturn = int32_envelope_parseFromJSON(CapabilitiesAPIlocalVarJSON);
    cJSON_Delete(CapabilitiesAPIlocalVarJSON);
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
    if(keyQuery_surface){
        free(keyQuery_surface);
        keyQuery_surface = NULL;
    }
    if(keyPairQuery_surface){
        keyValuePair_free(keyPairQuery_surface);
        keyPairQuery_surface = NULL;
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

// Get a capability by key
//
// Retrieves a single governed capability by its stable, dotted key, stamped with the Available / DeniedReason entitlement flag. Returns 404 only when the capability does not exist; an existing capability the actor is not entitled to run is returned annotated as unavailable, not hidden.
//
capability_dto_envelope_t*
CapabilitiesAPI_getCapabilityByKeyAsync(apiClient_t *apiClient, char *tenantId, char *key, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/IntelligenceService/Capabilities/{key}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/IntelligenceService/Capabilities/{key}");


    // Path Params
    long sizeOfPathParams_key = strlen(key)+3 + strlen("{ key }");
    if(key == NULL) {
        goto end;
    }
    char* localVarToReplace_key = malloc(sizeOfPathParams_key);
    sprintf(localVarToReplace_key, "{%s}", "key");

    localVarPath = strReplace(localVarPath, localVarToReplace_key, key);



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
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *CapabilitiesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    capability_dto_envelope_t *elementToReturn = capability_dto_envelope_parseFromJSON(CapabilitiesAPIlocalVarJSON);
    cJSON_Delete(CapabilitiesAPIlocalVarJSON);
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
    free(localVarToReplace_key);
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

