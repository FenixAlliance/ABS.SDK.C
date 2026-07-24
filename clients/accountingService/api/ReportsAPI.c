#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ReportsAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Trial balance for a fiscal period
//
// Returns the per-account posted debit/credit totals for the given fiscal period (optionally scoped to a single financial book), plus grand totals and the Σdebits == Σcredits balanced flag. Amounts are normalized to the target currency (default USD) from the stored USD reporting amounts.
//
trial_balance_dto_envelope_t*
ReportsAPI_getTrialBalanceAsync(apiClient_t *apiClient, char *tenantId, char *fiscalPeriodId, char *financialBookId, char *currencyId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/AccountingService/Reports/TrialBalance")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/AccountingService/Reports/TrialBalance");




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
    char *keyQuery_fiscalPeriodId = NULL;
    char * valueQuery_fiscalPeriodId = NULL;
    keyValuePair_t *keyPairQuery_fiscalPeriodId = 0;
    if (fiscalPeriodId)
    {
        keyQuery_fiscalPeriodId = strdup("fiscalPeriodId");
        valueQuery_fiscalPeriodId = strdup((fiscalPeriodId));
        keyPairQuery_fiscalPeriodId = keyValuePair_create(keyQuery_fiscalPeriodId, valueQuery_fiscalPeriodId);
        list_addElement(localVarQueryParameters,keyPairQuery_fiscalPeriodId);
    }

    // query parameters
    char *keyQuery_financialBookId = NULL;
    char * valueQuery_financialBookId = NULL;
    keyValuePair_t *keyPairQuery_financialBookId = 0;
    if (financialBookId)
    {
        keyQuery_financialBookId = strdup("financialBookId");
        valueQuery_financialBookId = strdup((financialBookId));
        keyPairQuery_financialBookId = keyValuePair_create(keyQuery_financialBookId, valueQuery_financialBookId);
        list_addElement(localVarQueryParameters,keyPairQuery_financialBookId);
    }

    // query parameters
    char *keyQuery_currencyId = NULL;
    char * valueQuery_currencyId = NULL;
    keyValuePair_t *keyPairQuery_currencyId = 0;
    if (currencyId)
    {
        keyQuery_currencyId = strdup("currencyId");
        valueQuery_currencyId = strdup((currencyId));
        keyPairQuery_currencyId = keyValuePair_create(keyQuery_currencyId, valueQuery_currencyId);
        list_addElement(localVarQueryParameters,keyPairQuery_currencyId);
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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    //nonprimitive not container
    cJSON *ReportsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    trial_balance_dto_envelope_t *elementToReturn = trial_balance_dto_envelope_parseFromJSON(ReportsAPIlocalVarJSON);
    cJSON_Delete(ReportsAPIlocalVarJSON);
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
    if(keyQuery_fiscalPeriodId){
        free(keyQuery_fiscalPeriodId);
        keyQuery_fiscalPeriodId = NULL;
    }
    if(valueQuery_fiscalPeriodId){
        free(valueQuery_fiscalPeriodId);
        valueQuery_fiscalPeriodId = NULL;
    }
    if(keyPairQuery_fiscalPeriodId){
        keyValuePair_free(keyPairQuery_fiscalPeriodId);
        keyPairQuery_fiscalPeriodId = NULL;
    }
    if(keyQuery_financialBookId){
        free(keyQuery_financialBookId);
        keyQuery_financialBookId = NULL;
    }
    if(valueQuery_financialBookId){
        free(valueQuery_financialBookId);
        valueQuery_financialBookId = NULL;
    }
    if(keyPairQuery_financialBookId){
        keyValuePair_free(keyPairQuery_financialBookId);
        keyPairQuery_financialBookId = NULL;
    }
    if(keyQuery_currencyId){
        free(keyQuery_currencyId);
        keyQuery_currencyId = NULL;
    }
    if(valueQuery_currencyId){
        free(valueQuery_currencyId);
        valueQuery_currencyId = NULL;
    }
    if(keyPairQuery_currencyId){
        keyValuePair_free(keyPairQuery_currencyId);
        keyPairQuery_currencyId = NULL;
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

