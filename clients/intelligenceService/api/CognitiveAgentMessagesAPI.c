#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "CognitiveAgentMessagesAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Get a cognitive agent conversation message by ID
//
// Retrieves a specific durable message of a conversation by its identifier.
//
cognitive_agent_message_dto_envelope_t*
CognitiveAgentMessagesAPI_getCognitiveAgentMessageByIdAsync(apiClient_t *apiClient, char *tenantId, char *agentId, char *conversationId, char *id, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/IntelligenceService/CognitiveAgents/{agentId}/Conversations/{conversationId}/Messages/{id}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/IntelligenceService/CognitiveAgents/{agentId}/Conversations/{conversationId}/Messages/{id}");


    // Path Params
    long sizeOfPathParams_agentId = strlen(agentId)+3 + strlen(conversationId)+3 + strlen(id)+3 + strlen("{ agentId }");
    if(agentId == NULL) {
        goto end;
    }
    char* localVarToReplace_agentId = malloc(sizeOfPathParams_agentId);
    sprintf(localVarToReplace_agentId, "{%s}", "agentId");

    localVarPath = strReplace(localVarPath, localVarToReplace_agentId, agentId);
    if(agentId == NULL) {
        goto end;
    }
    char* localVarToReplace_agentId = malloc(sizeOfPathParams_agentId);
    sprintf(localVarToReplace_agentId, "{%s}", "agentId");

    localVarPath = strReplace(localVarPath, localVarToReplace_agentId, agentId);

    // Path Params
    long sizeOfPathParams_conversationId = strlen(agentId)+3 + strlen(conversationId)+3 + strlen(id)+3 + strlen("{ conversationId }");
    if(conversationId == NULL) {
        goto end;
    }
    char* localVarToReplace_conversationId = malloc(sizeOfPathParams_conversationId);
    sprintf(localVarToReplace_conversationId, "{%s}", "conversationId");

    localVarPath = strReplace(localVarPath, localVarToReplace_conversationId, conversationId);
    if(conversationId == NULL) {
        goto end;
    }
    char* localVarToReplace_conversationId = malloc(sizeOfPathParams_conversationId);
    sprintf(localVarToReplace_conversationId, "{%s}", "conversationId");

    localVarPath = strReplace(localVarPath, localVarToReplace_conversationId, conversationId);

    // Path Params
    long sizeOfPathParams_id = strlen(agentId)+3 + strlen(conversationId)+3 + strlen(id)+3 + strlen("{ id }");
    if(id == NULL) {
        goto end;
    }
    char* localVarToReplace_id = malloc(sizeOfPathParams_id);
    sprintf(localVarToReplace_id, "{%s}", "id");

    localVarPath = strReplace(localVarPath, localVarToReplace_id, id);
    if(id == NULL) {
        goto end;
    }
    char* localVarToReplace_id = malloc(sizeOfPathParams_id);
    sprintf(localVarToReplace_id, "{%s}", "id");

    localVarPath = strReplace(localVarPath, localVarToReplace_id, id);



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
    cJSON *CognitiveAgentMessagesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    cognitive_agent_message_dto_envelope_t *elementToReturn = cognitive_agent_message_dto_envelope_parseFromJSON(CognitiveAgentMessagesAPIlocalVarJSON);
    cJSON_Delete(CognitiveAgentMessagesAPIlocalVarJSON);
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
    free(localVarToReplace_agentId);
    free(localVarToReplace_conversationId);
    free(localVarToReplace_id);
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

// Get all messages for a cognitive agent conversation
//
// Retrieves all durable messages for the specified conversation, agent and tenant.
//
cognitive_agent_message_dto_list_envelope_t*
CognitiveAgentMessagesAPI_getCognitiveAgentMessagesAsync(apiClient_t *apiClient, char *tenantId, char *agentId, char *conversationId, char *api_version, char *x_api_version, cognitive_agent_message_dto_collection_query_parameters_t *cognitive_agent_message_dto_collection_query_parameters)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/IntelligenceService/CognitiveAgents/{agentId}/Conversations/{conversationId}/Messages")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/IntelligenceService/CognitiveAgents/{agentId}/Conversations/{conversationId}/Messages");


    // Path Params
    long sizeOfPathParams_agentId = strlen(agentId)+3 + strlen(conversationId)+3 + strlen("{ agentId }");
    if(agentId == NULL) {
        goto end;
    }
    char* localVarToReplace_agentId = malloc(sizeOfPathParams_agentId);
    sprintf(localVarToReplace_agentId, "{%s}", "agentId");

    localVarPath = strReplace(localVarPath, localVarToReplace_agentId, agentId);
    if(agentId == NULL) {
        goto end;
    }
    char* localVarToReplace_agentId = malloc(sizeOfPathParams_agentId);
    sprintf(localVarToReplace_agentId, "{%s}", "agentId");

    localVarPath = strReplace(localVarPath, localVarToReplace_agentId, agentId);

    // Path Params
    long sizeOfPathParams_conversationId = strlen(agentId)+3 + strlen(conversationId)+3 + strlen("{ conversationId }");
    if(conversationId == NULL) {
        goto end;
    }
    char* localVarToReplace_conversationId = malloc(sizeOfPathParams_conversationId);
    sprintf(localVarToReplace_conversationId, "{%s}", "conversationId");

    localVarPath = strReplace(localVarPath, localVarToReplace_conversationId, conversationId);
    if(conversationId == NULL) {
        goto end;
    }
    char* localVarToReplace_conversationId = malloc(sizeOfPathParams_conversationId);
    sprintf(localVarToReplace_conversationId, "{%s}", "conversationId");

    localVarPath = strReplace(localVarPath, localVarToReplace_conversationId, conversationId);



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
    cJSON *localVarSingleItemJSON_cognitive_agent_message_dto_collection_query_parameters = NULL;
    if (cognitive_agent_message_dto_collection_query_parameters != NULL)
    {
        //string
        localVarSingleItemJSON_cognitive_agent_message_dto_collection_query_parameters = cognitive_agent_message_dto_collection_query_parameters_convertToJSON(cognitive_agent_message_dto_collection_query_parameters);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_cognitive_agent_message_dto_collection_query_parameters);
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
    cJSON *CognitiveAgentMessagesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    cognitive_agent_message_dto_list_envelope_t *elementToReturn = cognitive_agent_message_dto_list_envelope_parseFromJSON(CognitiveAgentMessagesAPIlocalVarJSON);
    cJSON_Delete(CognitiveAgentMessagesAPIlocalVarJSON);
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
    free(localVarToReplace_agentId);
    free(localVarToReplace_conversationId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
    if (localVarSingleItemJSON_cognitive_agent_message_dto_collection_query_parameters) {
        cJSON_Delete(localVarSingleItemJSON_cognitive_agent_message_dto_collection_query_parameters);
        localVarSingleItemJSON_cognitive_agent_message_dto_collection_query_parameters = NULL;
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

// Get message count for a cognitive agent conversation
//
// Returns the count of durable messages for the specified conversation, agent and tenant.
//
int32_envelope_t*
CognitiveAgentMessagesAPI_getCognitiveAgentMessagesCountAsync(apiClient_t *apiClient, char *tenantId, char *agentId, char *conversationId, char *api_version, char *x_api_version, cognitive_agent_message_dto_collection_query_parameters_t *cognitive_agent_message_dto_collection_query_parameters)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/IntelligenceService/CognitiveAgents/{agentId}/Conversations/{conversationId}/Messages/Count")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/IntelligenceService/CognitiveAgents/{agentId}/Conversations/{conversationId}/Messages/Count");


    // Path Params
    long sizeOfPathParams_agentId = strlen(agentId)+3 + strlen(conversationId)+3 + strlen("{ agentId }");
    if(agentId == NULL) {
        goto end;
    }
    char* localVarToReplace_agentId = malloc(sizeOfPathParams_agentId);
    sprintf(localVarToReplace_agentId, "{%s}", "agentId");

    localVarPath = strReplace(localVarPath, localVarToReplace_agentId, agentId);
    if(agentId == NULL) {
        goto end;
    }
    char* localVarToReplace_agentId = malloc(sizeOfPathParams_agentId);
    sprintf(localVarToReplace_agentId, "{%s}", "agentId");

    localVarPath = strReplace(localVarPath, localVarToReplace_agentId, agentId);

    // Path Params
    long sizeOfPathParams_conversationId = strlen(agentId)+3 + strlen(conversationId)+3 + strlen("{ conversationId }");
    if(conversationId == NULL) {
        goto end;
    }
    char* localVarToReplace_conversationId = malloc(sizeOfPathParams_conversationId);
    sprintf(localVarToReplace_conversationId, "{%s}", "conversationId");

    localVarPath = strReplace(localVarPath, localVarToReplace_conversationId, conversationId);
    if(conversationId == NULL) {
        goto end;
    }
    char* localVarToReplace_conversationId = malloc(sizeOfPathParams_conversationId);
    sprintf(localVarToReplace_conversationId, "{%s}", "conversationId");

    localVarPath = strReplace(localVarPath, localVarToReplace_conversationId, conversationId);



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
    cJSON *localVarSingleItemJSON_cognitive_agent_message_dto_collection_query_parameters = NULL;
    if (cognitive_agent_message_dto_collection_query_parameters != NULL)
    {
        //string
        localVarSingleItemJSON_cognitive_agent_message_dto_collection_query_parameters = cognitive_agent_message_dto_collection_query_parameters_convertToJSON(cognitive_agent_message_dto_collection_query_parameters);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_cognitive_agent_message_dto_collection_query_parameters);
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
    cJSON *CognitiveAgentMessagesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    int32_envelope_t *elementToReturn = int32_envelope_parseFromJSON(CognitiveAgentMessagesAPIlocalVarJSON);
    cJSON_Delete(CognitiveAgentMessagesAPIlocalVarJSON);
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
    free(localVarToReplace_agentId);
    free(localVarToReplace_conversationId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
    if (localVarSingleItemJSON_cognitive_agent_message_dto_collection_query_parameters) {
        cJSON_Delete(localVarSingleItemJSON_cognitive_agent_message_dto_collection_query_parameters);
        localVarSingleItemJSON_cognitive_agent_message_dto_collection_query_parameters = NULL;
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

