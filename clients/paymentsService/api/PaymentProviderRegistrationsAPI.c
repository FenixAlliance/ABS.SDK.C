#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "PaymentProviderRegistrationsAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Provisions a provider webhook registration
//
// Stores the BYO signing secret in the tenant options store, creates + activates the registration, and reveals the one-time plaintext webhook key plus its fully-composed inbound URL.
//
provider_webhook_registration_created_dto_envelope_t*
PaymentProviderRegistrationsAPI_createAsync(apiClient_t *apiClient, char *tenantId, create_provider_webhook_registration_request_t *create_provider_webhook_registration_request)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/PaymentsService/PaymentProviderRegistrations")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/PaymentsService/PaymentProviderRegistrations");




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
    cJSON *localVarSingleItemJSON_create_provider_webhook_registration_request = NULL;
    if (create_provider_webhook_registration_request != NULL)
    {
        //string
        localVarSingleItemJSON_create_provider_webhook_registration_request = create_provider_webhook_registration_request_convertToJSON(create_provider_webhook_registration_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_create_provider_webhook_registration_request);
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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *PaymentProviderRegistrationsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    provider_webhook_registration_created_dto_envelope_t *elementToReturn = provider_webhook_registration_created_dto_envelope_parseFromJSON(PaymentProviderRegistrationsAPIlocalVarJSON);
    cJSON_Delete(PaymentProviderRegistrationsAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_create_provider_webhook_registration_request) {
        cJSON_Delete(localVarSingleItemJSON_create_provider_webhook_registration_request);
        localVarSingleItemJSON_create_provider_webhook_registration_request = NULL;
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

// Lists the tenant's provider registrations
//
// Gets all provider registrations for the current tenant with OData support (no secret is ever returned).
//
payment_provider_registration_dto_list_envelope_t*
PaymentProviderRegistrationsAPI_getAsync(apiClient_t *apiClient, char *tenantId, payment_provider_registration_dto_collection_query_parameters_t *payment_provider_registration_dto_collection_query_parameters)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/PaymentsService/PaymentProviderRegistrations")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/PaymentsService/PaymentProviderRegistrations");




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
    cJSON *localVarSingleItemJSON_payment_provider_registration_dto_collection_query_parameters = NULL;
    if (payment_provider_registration_dto_collection_query_parameters != NULL)
    {
        //string
        localVarSingleItemJSON_payment_provider_registration_dto_collection_query_parameters = payment_provider_registration_dto_collection_query_parameters_convertToJSON(payment_provider_registration_dto_collection_query_parameters);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_payment_provider_registration_dto_collection_query_parameters);
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
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *PaymentProviderRegistrationsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    payment_provider_registration_dto_list_envelope_t *elementToReturn = payment_provider_registration_dto_list_envelope_parseFromJSON(PaymentProviderRegistrationsAPIlocalVarJSON);
    cJSON_Delete(PaymentProviderRegistrationsAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_payment_provider_registration_dto_collection_query_parameters) {
        cJSON_Delete(localVarSingleItemJSON_payment_provider_registration_dto_collection_query_parameters);
        localVarSingleItemJSON_payment_provider_registration_dto_collection_query_parameters = NULL;
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

// Counts the tenant's provider registrations
//
// Gets the count of provider registrations for the current tenant (OData sibling of the list).
//
int32_envelope_t*
PaymentProviderRegistrationsAPI_getCountAsync(apiClient_t *apiClient, char *tenantId, payment_provider_registration_dto_collection_query_parameters_t *payment_provider_registration_dto_collection_query_parameters)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/PaymentsService/PaymentProviderRegistrations/Count")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/PaymentsService/PaymentProviderRegistrations/Count");




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
    cJSON *localVarSingleItemJSON_payment_provider_registration_dto_collection_query_parameters = NULL;
    if (payment_provider_registration_dto_collection_query_parameters != NULL)
    {
        //string
        localVarSingleItemJSON_payment_provider_registration_dto_collection_query_parameters = payment_provider_registration_dto_collection_query_parameters_convertToJSON(payment_provider_registration_dto_collection_query_parameters);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_payment_provider_registration_dto_collection_query_parameters);
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
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *PaymentProviderRegistrationsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    int32_envelope_t *elementToReturn = int32_envelope_parseFromJSON(PaymentProviderRegistrationsAPIlocalVarJSON);
    cJSON_Delete(PaymentProviderRegistrationsAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_payment_provider_registration_dto_collection_query_parameters) {
        cJSON_Delete(localVarSingleItemJSON_payment_provider_registration_dto_collection_query_parameters);
        localVarSingleItemJSON_payment_provider_registration_dto_collection_query_parameters = NULL;
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

// Rotates a registration's webhook key
//
// Mints a fresh webhook key (invalidating the previous one) and reveals it once, plus its composed URL.
//
provider_webhook_registration_created_dto_envelope_t*
PaymentProviderRegistrationsAPI_rotateKeyAsync(apiClient_t *apiClient, char *tenantId, char *registrationId)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/PaymentsService/PaymentProviderRegistrations/{registrationId}/RotateKey")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/PaymentsService/PaymentProviderRegistrations/{registrationId}/RotateKey");


    // Path Params
    long sizeOfPathParams_registrationId = strlen(registrationId)+3 + strlen("{ registrationId }");
    if(registrationId == NULL) {
        goto end;
    }
    char* localVarToReplace_registrationId = malloc(sizeOfPathParams_registrationId);
    sprintf(localVarToReplace_registrationId, "{%s}", "registrationId");

    localVarPath = strReplace(localVarPath, localVarToReplace_registrationId, registrationId);
    if(registrationId == NULL) {
        goto end;
    }
    char* localVarToReplace_registrationId = malloc(sizeOfPathParams_registrationId);
    sprintf(localVarToReplace_registrationId, "{%s}", "registrationId");

    localVarPath = strReplace(localVarPath, localVarToReplace_registrationId, registrationId);



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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    //nonprimitive not container
    cJSON *PaymentProviderRegistrationsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    provider_webhook_registration_created_dto_envelope_t *elementToReturn = provider_webhook_registration_created_dto_envelope_parseFromJSON(PaymentProviderRegistrationsAPIlocalVarJSON);
    cJSON_Delete(PaymentProviderRegistrationsAPIlocalVarJSON);
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
    free(localVarToReplace_registrationId);
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

