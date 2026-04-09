#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "TaskTypesAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Creates a new task type
//
// Creates a new task type for the current tenant.
//
task_type_dto_t*
TaskTypesAPI_createTaskTypeAsync(apiClient_t *apiClient, char *tenantId, task_type_create_dto_t *task_type_create_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/ProjectsService/TaskTypes")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/ProjectsService/TaskTypes");




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
    cJSON *localVarSingleItemJSON_task_type_create_dto = NULL;
    if (task_type_create_dto != NULL)
    {
        //string
        localVarSingleItemJSON_task_type_create_dto = task_type_create_dto_convertToJSON(task_type_create_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_task_type_create_dto);
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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *TaskTypesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    task_type_dto_t *elementToReturn = task_type_dto_parseFromJSON(TaskTypesAPIlocalVarJSON);
    cJSON_Delete(TaskTypesAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_task_type_create_dto) {
        cJSON_Delete(localVarSingleItemJSON_task_type_create_dto);
        localVarSingleItemJSON_task_type_create_dto = NULL;
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

// Deletes a task type
//
// Deletes the specified task type.
//
task_type_dto_t*
TaskTypesAPI_deleteTaskTypeAsync(apiClient_t *apiClient, char *taskTypeId, char *tenantId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/ProjectsService/TaskTypes/{taskTypeId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/ProjectsService/TaskTypes/{taskTypeId}");


    // Path Params
    long sizeOfPathParams_taskTypeId = strlen(taskTypeId)+3 + strlen("{ taskTypeId }");
    if(taskTypeId == NULL) {
        goto end;
    }
    char* localVarToReplace_taskTypeId = malloc(sizeOfPathParams_taskTypeId);
    sprintf(localVarToReplace_taskTypeId, "{%s}", "taskTypeId");

    localVarPath = strReplace(localVarPath, localVarToReplace_taskTypeId, taskTypeId);
    if(taskTypeId == NULL) {
        goto end;
    }
    char* localVarToReplace_taskTypeId = malloc(sizeOfPathParams_taskTypeId);
    sprintf(localVarToReplace_taskTypeId, "{%s}", "taskTypeId");

    localVarPath = strReplace(localVarPath, localVarToReplace_taskTypeId, taskTypeId);



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
    cJSON *TaskTypesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    task_type_dto_t *elementToReturn = task_type_dto_parseFromJSON(TaskTypesAPIlocalVarJSON);
    cJSON_Delete(TaskTypesAPIlocalVarJSON);
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
    free(localVarToReplace_taskTypeId);
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

// Gets a task type by ID
//
// Retrieves the details of a task type using its unique identifier.
//
task_type_dto_t*
TaskTypesAPI_getTaskTypeByIdAsync(apiClient_t *apiClient, char *taskTypeId, char *tenantId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/ProjectsService/TaskTypes/{taskTypeId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/ProjectsService/TaskTypes/{taskTypeId}");


    // Path Params
    long sizeOfPathParams_taskTypeId = strlen(taskTypeId)+3 + strlen("{ taskTypeId }");
    if(taskTypeId == NULL) {
        goto end;
    }
    char* localVarToReplace_taskTypeId = malloc(sizeOfPathParams_taskTypeId);
    sprintf(localVarToReplace_taskTypeId, "{%s}", "taskTypeId");

    localVarPath = strReplace(localVarPath, localVarToReplace_taskTypeId, taskTypeId);
    if(taskTypeId == NULL) {
        goto end;
    }
    char* localVarToReplace_taskTypeId = malloc(sizeOfPathParams_taskTypeId);
    sprintf(localVarToReplace_taskTypeId, "{%s}", "taskTypeId");

    localVarPath = strReplace(localVarPath, localVarToReplace_taskTypeId, taskTypeId);



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
    cJSON *TaskTypesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    task_type_dto_t *elementToReturn = task_type_dto_parseFromJSON(TaskTypesAPIlocalVarJSON);
    cJSON_Delete(TaskTypesAPIlocalVarJSON);
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
    free(localVarToReplace_taskTypeId);
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

// Updates a task type
//
// Updates the specified task type.
//
task_type_dto_t*
TaskTypesAPI_updateTaskTypeAsync(apiClient_t *apiClient, char *taskTypeId, char *tenantId, task_type_update_dto_t *task_type_update_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/ProjectsService/TaskTypes/{taskTypeId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/ProjectsService/TaskTypes/{taskTypeId}");


    // Path Params
    long sizeOfPathParams_taskTypeId = strlen(taskTypeId)+3 + strlen("{ taskTypeId }");
    if(taskTypeId == NULL) {
        goto end;
    }
    char* localVarToReplace_taskTypeId = malloc(sizeOfPathParams_taskTypeId);
    sprintf(localVarToReplace_taskTypeId, "{%s}", "taskTypeId");

    localVarPath = strReplace(localVarPath, localVarToReplace_taskTypeId, taskTypeId);
    if(taskTypeId == NULL) {
        goto end;
    }
    char* localVarToReplace_taskTypeId = malloc(sizeOfPathParams_taskTypeId);
    sprintf(localVarToReplace_taskTypeId, "{%s}", "taskTypeId");

    localVarPath = strReplace(localVarPath, localVarToReplace_taskTypeId, taskTypeId);



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
    cJSON *localVarSingleItemJSON_task_type_update_dto = NULL;
    if (task_type_update_dto != NULL)
    {
        //string
        localVarSingleItemJSON_task_type_update_dto = task_type_update_dto_convertToJSON(task_type_update_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_task_type_update_dto);
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
    cJSON *TaskTypesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    task_type_dto_t *elementToReturn = task_type_dto_parseFromJSON(TaskTypesAPIlocalVarJSON);
    cJSON_Delete(TaskTypesAPIlocalVarJSON);
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
    free(localVarToReplace_taskTypeId);
    if (localVarSingleItemJSON_task_type_update_dto) {
        cJSON_Delete(localVarSingleItemJSON_task_type_update_dto);
        localVarSingleItemJSON_task_type_update_dto = NULL;
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

