#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "IntelligenceServiceAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Run a governed agent over the AG-UI protocol
//
// Streams a governed agent run as AG-UI server-sent events. Feature-flagged on ABP.Cognitive.AgentSurface.Enable; returns 503 when disabled, 401 when unauthorized and 404 when the agent cannot be resolved. An optional ?projectId= binds the run to a project (resolved tenant-scoped): the project id + name are surfaced to the model as context so it can call the governed project-storage tools; it is never auto-filled into a tool's arguments.
//
void
IntelligenceServiceAPI_invokeAgentSurfaceAsync(apiClient_t *apiClient, char *agentId)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = NULL;
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/IntelligenceService/Agents/{agentId}/agui")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/IntelligenceService/Agents/{agentId}/agui");


    // Path Params
    long sizeOfPathParams_agentId = strlen(agentId)+3 + strlen("{ agentId }");
    if(agentId == NULL) {
        goto end;
    }
    char* localVarToReplace_agentId = malloc(sizeOfPathParams_agentId);
    sprintf(localVarToReplace_agentId, "{%s}", "agentId");

    localVarPath = strReplace(localVarPath, localVarToReplace_agentId, agentId);


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
    
    
    
    
    
    free(localVarPath);
    free(localVarToReplace_agentId);

}

