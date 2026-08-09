#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "CompletionsAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


void
CompletionsAPI_apiV2AiServiceCompletionsCompleteGet(apiClient_t *apiClient, char *tenantId, char *conversationId, char *message)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/IntelligenceService/Completions/Complete")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/IntelligenceService/Completions/Complete");




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
    char *keyQuery_conversationId = NULL;
    char * valueQuery_conversationId = NULL;
    keyValuePair_t *keyPairQuery_conversationId = 0;
    if (conversationId)
    {
        keyQuery_conversationId = strdup("conversationId");
        valueQuery_conversationId = strdup((conversationId));
        keyPairQuery_conversationId = keyValuePair_create(keyQuery_conversationId, valueQuery_conversationId);
        list_addElement(localVarQueryParameters,keyPairQuery_conversationId);
    }

    // query parameters
    char *keyQuery_message = NULL;
    char * valueQuery_message = NULL;
    keyValuePair_t *keyPairQuery_message = 0;
    if (message)
    {
        keyQuery_message = strdup("message");
        valueQuery_message = strdup((message));
        keyPairQuery_message = keyValuePair_create(keyQuery_message, valueQuery_message);
        list_addElement(localVarQueryParameters,keyPairQuery_message);
    }
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal;odata.streaming=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal;odata.streaming=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full;odata.streaming=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full;odata.streaming=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none;odata.streaming=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none;odata.streaming=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.streaming=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.streaming=false"); //produces
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal;odata.streaming=true;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal;odata.streaming=true;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal;odata.streaming=false;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal;odata.streaming=false;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=minimal;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full;odata.streaming=true;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full;odata.streaming=true;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full;odata.streaming=false;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full;odata.streaming=false;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=full;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none;odata.streaming=true;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none;odata.streaming=true;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none;odata.streaming=false;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none;odata.streaming=false;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.metadata=none;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.streaming=true;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.streaming=true;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.streaming=false;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;odata.streaming=false;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/json;IEEE754Compatible=false"); //produces
    list_addElement(localVarHeaderType,"application/json;IEEE754Compatible=true"); //produces
    list_addElement(localVarHeaderType,"application/xml"); //produces
    list_addElement(localVarHeaderType,"text/plain"); //produces
    list_addElement(localVarHeaderType,"application/octet-stream"); //produces
    list_addElement(localVarHeaderType,"text/json"); //produces
    list_addElement(localVarHeaderType,"text/xml"); //produces
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
    if(keyQuery_conversationId){
        free(keyQuery_conversationId);
        keyQuery_conversationId = NULL;
    }
    if(valueQuery_conversationId){
        free(valueQuery_conversationId);
        valueQuery_conversationId = NULL;
    }
    if(keyPairQuery_conversationId){
        keyValuePair_free(keyPairQuery_conversationId);
        keyPairQuery_conversationId = NULL;
    }
    if(keyQuery_conversationId){
        free(keyQuery_conversationId);
        keyQuery_conversationId = NULL;
    }
    if(keyPairQuery_conversationId){
        keyValuePair_free(keyPairQuery_conversationId);
        keyPairQuery_conversationId = NULL;
    }
    if(keyQuery_message){
        free(keyQuery_message);
        keyQuery_message = NULL;
    }
    if(valueQuery_message){
        free(valueQuery_message);
        valueQuery_message = NULL;
    }
    if(keyPairQuery_message){
        keyValuePair_free(keyPairQuery_message);
        keyPairQuery_message = NULL;
    }
    if(keyQuery_message){
        free(keyQuery_message);
        keyQuery_message = NULL;
    }
    if(keyPairQuery_message){
        keyValuePair_free(keyPairQuery_message);
        keyPairQuery_message = NULL;
    }

}

