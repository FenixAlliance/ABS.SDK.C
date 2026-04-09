#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "CartsAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Add an Item to a cart
//
// Add an Item to a cart
//
empty_envelope_t*
CartsAPI_addItemToCartAsync(apiClient_t *apiClient, char *cartId, char *itemId, int *quantity, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CartService/Carts/{cartId}/Items/{itemId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CartService/Carts/{cartId}/Items/{itemId}");


    // Path Params
    long sizeOfPathParams_cartId = strlen(cartId)+3 + strlen(itemId)+3 + strlen("{ cartId }");
    if(cartId == NULL) {
        goto end;
    }
    char* localVarToReplace_cartId = malloc(sizeOfPathParams_cartId);
    sprintf(localVarToReplace_cartId, "{%s}", "cartId");

    localVarPath = strReplace(localVarPath, localVarToReplace_cartId, cartId);
    if(cartId == NULL) {
        goto end;
    }
    char* localVarToReplace_cartId = malloc(sizeOfPathParams_cartId);
    sprintf(localVarToReplace_cartId, "{%s}", "cartId");

    localVarPath = strReplace(localVarPath, localVarToReplace_cartId, cartId);

    // Path Params
    long sizeOfPathParams_itemId = strlen(cartId)+3 + strlen(itemId)+3 + strlen("{ itemId }");
    if(itemId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemId = malloc(sizeOfPathParams_itemId);
    sprintf(localVarToReplace_itemId, "{%s}", "itemId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemId, itemId);
    if(itemId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemId = malloc(sizeOfPathParams_itemId);
    sprintf(localVarToReplace_itemId, "{%s}", "itemId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemId, itemId);



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
    char *keyQuery_quantity = NULL;
    char * valueQuery_quantity = NULL;
    keyValuePair_t *keyPairQuery_quantity = 0;
    if (quantity)
    {
        keyQuery_quantity = strdup("quantity");
        valueQuery_quantity = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_quantity, MAX_NUMBER_LENGTH, "%d", *quantity);
        keyPairQuery_quantity = keyValuePair_create(keyQuery_quantity, valueQuery_quantity);
        list_addElement(localVarQueryParameters,keyPairQuery_quantity);
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
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    cJSON *CartsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(CartsAPIlocalVarJSON);
    cJSON_Delete(CartsAPIlocalVarJSON);
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
    free(localVarToReplace_cartId);
    free(localVarToReplace_itemId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
    if(keyQuery_quantity){
        free(keyQuery_quantity);
        keyQuery_quantity = NULL;
    }
    if(valueQuery_quantity){
        free(valueQuery_quantity);
        valueQuery_quantity = NULL;
    }
    if(keyPairQuery_quantity){
        keyValuePair_free(keyPairQuery_quantity);
        keyPairQuery_quantity = NULL;
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

// Add an item to the compare table
//
// Add an item to the compare table
//
item_cart_record_dto_t*
CartsAPI_addItemToCartCompareTable(apiClient_t *apiClient, char *cartId, char *itemId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CartService/Carts/{cartId}/Compare/{itemId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CartService/Carts/{cartId}/Compare/{itemId}");


    // Path Params
    long sizeOfPathParams_cartId = strlen(cartId)+3 + strlen(itemId)+3 + strlen("{ cartId }");
    if(cartId == NULL) {
        goto end;
    }
    char* localVarToReplace_cartId = malloc(sizeOfPathParams_cartId);
    sprintf(localVarToReplace_cartId, "{%s}", "cartId");

    localVarPath = strReplace(localVarPath, localVarToReplace_cartId, cartId);
    if(cartId == NULL) {
        goto end;
    }
    char* localVarToReplace_cartId = malloc(sizeOfPathParams_cartId);
    sprintf(localVarToReplace_cartId, "{%s}", "cartId");

    localVarPath = strReplace(localVarPath, localVarToReplace_cartId, cartId);

    // Path Params
    long sizeOfPathParams_itemId = strlen(cartId)+3 + strlen(itemId)+3 + strlen("{ itemId }");
    if(itemId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemId = malloc(sizeOfPathParams_itemId);
    sprintf(localVarToReplace_itemId, "{%s}", "itemId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemId, itemId);
    if(itemId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemId = malloc(sizeOfPathParams_itemId);
    sprintf(localVarToReplace_itemId, "{%s}", "itemId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemId, itemId);



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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    cJSON *CartsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    item_cart_record_dto_t *elementToReturn = item_cart_record_dto_parseFromJSON(CartsAPIlocalVarJSON);
    cJSON_Delete(CartsAPIlocalVarJSON);
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
    free(localVarToReplace_cartId);
    free(localVarToReplace_itemId);
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Add a record to a wish list
//
// Add a record to a wish list
//
empty_envelope_t*
CartsAPI_addItemToWishList(apiClient_t *apiClient, char *cartId, char *wishListId, char *api_version, char *x_api_version, product_to_wish_list_request_t *product_to_wish_list_request)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CartService/Carts/{cartId}/WishLists/{wishListId}/Records")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CartService/Carts/{cartId}/WishLists/{wishListId}/Records");


    // Path Params
    long sizeOfPathParams_cartId = strlen(cartId)+3 + strlen(wishListId)+3 + strlen("{ cartId }");
    if(cartId == NULL) {
        goto end;
    }
    char* localVarToReplace_cartId = malloc(sizeOfPathParams_cartId);
    sprintf(localVarToReplace_cartId, "{%s}", "cartId");

    localVarPath = strReplace(localVarPath, localVarToReplace_cartId, cartId);
    if(cartId == NULL) {
        goto end;
    }
    char* localVarToReplace_cartId = malloc(sizeOfPathParams_cartId);
    sprintf(localVarToReplace_cartId, "{%s}", "cartId");

    localVarPath = strReplace(localVarPath, localVarToReplace_cartId, cartId);

    // Path Params
    long sizeOfPathParams_wishListId = strlen(cartId)+3 + strlen(wishListId)+3 + strlen("{ wishListId }");
    if(wishListId == NULL) {
        goto end;
    }
    char* localVarToReplace_wishListId = malloc(sizeOfPathParams_wishListId);
    sprintf(localVarToReplace_wishListId, "{%s}", "wishListId");

    localVarPath = strReplace(localVarPath, localVarToReplace_wishListId, wishListId);
    if(wishListId == NULL) {
        goto end;
    }
    char* localVarToReplace_wishListId = malloc(sizeOfPathParams_wishListId);
    sprintf(localVarToReplace_wishListId, "{%s}", "wishListId");

    localVarPath = strReplace(localVarPath, localVarToReplace_wishListId, wishListId);



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

    // Body Param
    cJSON *localVarSingleItemJSON_product_to_wish_list_request = NULL;
    if (product_to_wish_list_request != NULL)
    {
        //string
        localVarSingleItemJSON_product_to_wish_list_request = product_to_wish_list_request_convertToJSON(product_to_wish_list_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_product_to_wish_list_request);
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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    cJSON *CartsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(CartsAPIlocalVarJSON);
    cJSON_Delete(CartsAPIlocalVarJSON);
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
    free(localVarToReplace_cartId);
    free(localVarToReplace_wishListId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
    if (localVarSingleItemJSON_product_to_wish_list_request) {
        cJSON_Delete(localVarSingleItemJSON_product_to_wish_list_request);
        localVarSingleItemJSON_product_to_wish_list_request = NULL;
    }
    free(localVarBodyParameters);
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

// Assesses if a WishList exists
//
// Assesses if a WishList exists but does not return the content
//
empty_envelope_t*
CartsAPI_cartWishListExistsHead(apiClient_t *apiClient, char *cartId, char *wishListId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CartService/Carts/{cartId}/WishLists/{wishListId}/Exists")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CartService/Carts/{cartId}/WishLists/{wishListId}/Exists");


    // Path Params
    long sizeOfPathParams_cartId = strlen(cartId)+3 + strlen(wishListId)+3 + strlen("{ cartId }");
    if(cartId == NULL) {
        goto end;
    }
    char* localVarToReplace_cartId = malloc(sizeOfPathParams_cartId);
    sprintf(localVarToReplace_cartId, "{%s}", "cartId");

    localVarPath = strReplace(localVarPath, localVarToReplace_cartId, cartId);
    if(cartId == NULL) {
        goto end;
    }
    char* localVarToReplace_cartId = malloc(sizeOfPathParams_cartId);
    sprintf(localVarToReplace_cartId, "{%s}", "cartId");

    localVarPath = strReplace(localVarPath, localVarToReplace_cartId, cartId);

    // Path Params
    long sizeOfPathParams_wishListId = strlen(cartId)+3 + strlen(wishListId)+3 + strlen("{ wishListId }");
    if(wishListId == NULL) {
        goto end;
    }
    char* localVarToReplace_wishListId = malloc(sizeOfPathParams_wishListId);
    sprintf(localVarToReplace_wishListId, "{%s}", "wishListId");

    localVarPath = strReplace(localVarPath, localVarToReplace_wishListId, wishListId);
    if(wishListId == NULL) {
        goto end;
    }
    char* localVarToReplace_wishListId = malloc(sizeOfPathParams_wishListId);
    sprintf(localVarToReplace_wishListId, "{%s}", "wishListId");

    localVarPath = strReplace(localVarPath, localVarToReplace_wishListId, wishListId);



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
                    "HEAD");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    cJSON *CartsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(CartsAPIlocalVarJSON);
    cJSON_Delete(CartsAPIlocalVarJSON);
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
    free(localVarToReplace_cartId);
    free(localVarToReplace_wishListId);
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Clear all items from a cart
//
// Clear all items from a cart
//
empty_envelope_t*
CartsAPI_clearCartRecords(apiClient_t *apiClient, char *cartId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CartService/Carts/{cartId}/Items")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CartService/Carts/{cartId}/Items");


    // Path Params
    long sizeOfPathParams_cartId = strlen(cartId)+3 + strlen("{ cartId }");
    if(cartId == NULL) {
        goto end;
    }
    char* localVarToReplace_cartId = malloc(sizeOfPathParams_cartId);
    sprintf(localVarToReplace_cartId, "{%s}", "cartId");

    localVarPath = strReplace(localVarPath, localVarToReplace_cartId, cartId);
    if(cartId == NULL) {
        goto end;
    }
    char* localVarToReplace_cartId = malloc(sizeOfPathParams_cartId);
    sprintf(localVarToReplace_cartId, "{%s}", "cartId");

    localVarPath = strReplace(localVarPath, localVarToReplace_cartId, cartId);



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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    cJSON *CartsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(CartsAPIlocalVarJSON);
    cJSON_Delete(CartsAPIlocalVarJSON);
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
    free(localVarToReplace_cartId);
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Create a new wish list
//
// Create a new wish list
//
empty_envelope_t*
CartsAPI_createWishListAsync(apiClient_t *apiClient, char *cartId, char *api_version, char *x_api_version, new_wish_list_request_t *new_wish_list_request)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CartService/Carts/{cartId}/WishLists")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CartService/Carts/{cartId}/WishLists");


    // Path Params
    long sizeOfPathParams_cartId = strlen(cartId)+3 + strlen("{ cartId }");
    if(cartId == NULL) {
        goto end;
    }
    char* localVarToReplace_cartId = malloc(sizeOfPathParams_cartId);
    sprintf(localVarToReplace_cartId, "{%s}", "cartId");

    localVarPath = strReplace(localVarPath, localVarToReplace_cartId, cartId);
    if(cartId == NULL) {
        goto end;
    }
    char* localVarToReplace_cartId = malloc(sizeOfPathParams_cartId);
    sprintf(localVarToReplace_cartId, "{%s}", "cartId");

    localVarPath = strReplace(localVarPath, localVarToReplace_cartId, cartId);



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

    // Body Param
    cJSON *localVarSingleItemJSON_new_wish_list_request = NULL;
    if (new_wish_list_request != NULL)
    {
        //string
        localVarSingleItemJSON_new_wish_list_request = new_wish_list_request_convertToJSON(new_wish_list_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_new_wish_list_request);
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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    cJSON *CartsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(CartsAPIlocalVarJSON);
    cJSON_Delete(CartsAPIlocalVarJSON);
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
    free(localVarToReplace_cartId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
    if (localVarSingleItemJSON_new_wish_list_request) {
        cJSON_Delete(localVarSingleItemJSON_new_wish_list_request);
        localVarSingleItemJSON_new_wish_list_request = NULL;
    }
    free(localVarBodyParameters);
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

// Decrease an Item in a cart
//
// Decrease an Item in a cart
//
empty_envelope_t*
CartsAPI_decreaseCartItemQuantity(apiClient_t *apiClient, char *cartId, char *itemId, char *api_version, char *x_api_version, item_cart_record_update_dto_t *item_cart_record_update_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CartService/Carts/{cartId}/Items/{itemId}/Decrease")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CartService/Carts/{cartId}/Items/{itemId}/Decrease");


    // Path Params
    long sizeOfPathParams_cartId = strlen(cartId)+3 + strlen(itemId)+3 + strlen("{ cartId }");
    if(cartId == NULL) {
        goto end;
    }
    char* localVarToReplace_cartId = malloc(sizeOfPathParams_cartId);
    sprintf(localVarToReplace_cartId, "{%s}", "cartId");

    localVarPath = strReplace(localVarPath, localVarToReplace_cartId, cartId);
    if(cartId == NULL) {
        goto end;
    }
    char* localVarToReplace_cartId = malloc(sizeOfPathParams_cartId);
    sprintf(localVarToReplace_cartId, "{%s}", "cartId");

    localVarPath = strReplace(localVarPath, localVarToReplace_cartId, cartId);

    // Path Params
    long sizeOfPathParams_itemId = strlen(cartId)+3 + strlen(itemId)+3 + strlen("{ itemId }");
    if(itemId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemId = malloc(sizeOfPathParams_itemId);
    sprintf(localVarToReplace_itemId, "{%s}", "itemId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemId, itemId);
    if(itemId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemId = malloc(sizeOfPathParams_itemId);
    sprintf(localVarToReplace_itemId, "{%s}", "itemId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemId, itemId);



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

    // Body Param
    cJSON *localVarSingleItemJSON_item_cart_record_update_dto = NULL;
    if (item_cart_record_update_dto != NULL)
    {
        //string
        localVarSingleItemJSON_item_cart_record_update_dto = item_cart_record_update_dto_convertToJSON(item_cart_record_update_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_item_cart_record_update_dto);
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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    cJSON *CartsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(CartsAPIlocalVarJSON);
    cJSON_Delete(CartsAPIlocalVarJSON);
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
    free(localVarToReplace_cartId);
    free(localVarToReplace_itemId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
    if (localVarSingleItemJSON_item_cart_record_update_dto) {
        cJSON_Delete(localVarSingleItemJSON_item_cart_record_update_dto);
        localVarSingleItemJSON_item_cart_record_update_dto = NULL;
    }
    free(localVarBodyParameters);
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

// Decrease the quantity of a cart line
//
// Decrease the quantity of a cart line
//
empty_envelope_t*
CartsAPI_decreaseCartLineAsync(apiClient_t *apiClient, char *cartId, char *lineId, double quantity, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CartService/Carts/{cartId}/Lines/{lineId}/Decrease")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CartService/Carts/{cartId}/Lines/{lineId}/Decrease");


    // Path Params
    long sizeOfPathParams_cartId = strlen(cartId)+3 + strlen(lineId)+3 + strlen("{ cartId }");
    if(cartId == NULL) {
        goto end;
    }
    char* localVarToReplace_cartId = malloc(sizeOfPathParams_cartId);
    sprintf(localVarToReplace_cartId, "{%s}", "cartId");

    localVarPath = strReplace(localVarPath, localVarToReplace_cartId, cartId);
    if(cartId == NULL) {
        goto end;
    }
    char* localVarToReplace_cartId = malloc(sizeOfPathParams_cartId);
    sprintf(localVarToReplace_cartId, "{%s}", "cartId");

    localVarPath = strReplace(localVarPath, localVarToReplace_cartId, cartId);

    // Path Params
    long sizeOfPathParams_lineId = strlen(cartId)+3 + strlen(lineId)+3 + strlen("{ lineId }");
    if(lineId == NULL) {
        goto end;
    }
    char* localVarToReplace_lineId = malloc(sizeOfPathParams_lineId);
    sprintf(localVarToReplace_lineId, "{%s}", "lineId");

    localVarPath = strReplace(localVarPath, localVarToReplace_lineId, lineId);
    if(lineId == NULL) {
        goto end;
    }
    char* localVarToReplace_lineId = malloc(sizeOfPathParams_lineId);
    sprintf(localVarToReplace_lineId, "{%s}", "lineId");

    localVarPath = strReplace(localVarPath, localVarToReplace_lineId, lineId);



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
    char *keyQuery_quantity = NULL;
    double valueQuery_quantity ;
    keyValuePair_t *keyPairQuery_quantity = 0;
    if (quantity)
    {
        keyQuery_quantity = strdup("quantity");
        valueQuery_quantity = (quantity);
        keyPairQuery_quantity = keyValuePair_create(keyQuery_quantity, &valueQuery_quantity);
        list_addElement(localVarQueryParameters,keyPairQuery_quantity);
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
                    "PUT");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    cJSON *CartsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(CartsAPIlocalVarJSON);
    cJSON_Delete(CartsAPIlocalVarJSON);
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
    free(localVarToReplace_cartId);
    free(localVarToReplace_lineId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
    if(keyQuery_quantity){
        free(keyQuery_quantity);
        keyQuery_quantity = NULL;
    }
    if(keyPairQuery_quantity){
        keyValuePair_free(keyPairQuery_quantity);
        keyPairQuery_quantity = NULL;
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

// Delete a wish list
//
// Delete a wish list
//
empty_envelope_t*
CartsAPI_deleteCartWishList(apiClient_t *apiClient, char *cartId, char *wishListId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CartService/Carts/{cartId}/WishLists/{wishListId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CartService/Carts/{cartId}/WishLists/{wishListId}");


    // Path Params
    long sizeOfPathParams_cartId = strlen(cartId)+3 + strlen(wishListId)+3 + strlen("{ cartId }");
    if(cartId == NULL) {
        goto end;
    }
    char* localVarToReplace_cartId = malloc(sizeOfPathParams_cartId);
    sprintf(localVarToReplace_cartId, "{%s}", "cartId");

    localVarPath = strReplace(localVarPath, localVarToReplace_cartId, cartId);
    if(cartId == NULL) {
        goto end;
    }
    char* localVarToReplace_cartId = malloc(sizeOfPathParams_cartId);
    sprintf(localVarToReplace_cartId, "{%s}", "cartId");

    localVarPath = strReplace(localVarPath, localVarToReplace_cartId, cartId);

    // Path Params
    long sizeOfPathParams_wishListId = strlen(cartId)+3 + strlen(wishListId)+3 + strlen("{ wishListId }");
    if(wishListId == NULL) {
        goto end;
    }
    char* localVarToReplace_wishListId = malloc(sizeOfPathParams_wishListId);
    sprintf(localVarToReplace_wishListId, "{%s}", "wishListId");

    localVarPath = strReplace(localVarPath, localVarToReplace_wishListId, wishListId);
    if(wishListId == NULL) {
        goto end;
    }
    char* localVarToReplace_wishListId = malloc(sizeOfPathParams_wishListId);
    sprintf(localVarToReplace_wishListId, "{%s}", "wishListId");

    localVarPath = strReplace(localVarPath, localVarToReplace_wishListId, wishListId);



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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    cJSON *CartsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(CartsAPIlocalVarJSON);
    cJSON_Delete(CartsAPIlocalVarJSON);
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
    free(localVarToReplace_cartId);
    free(localVarToReplace_wishListId);
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Remove a record from a wish list
//
// Remove a record from a wish list
//
empty_envelope_t*
CartsAPI_deleteCartWishListRecord(apiClient_t *apiClient, char *cartId, char *wishListId, char *recordId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CartService/Carts/{cartId}/WishLists/{wishListId}/Records/{recordId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CartService/Carts/{cartId}/WishLists/{wishListId}/Records/{recordId}");


    // Path Params
    long sizeOfPathParams_cartId = strlen(cartId)+3 + strlen(wishListId)+3 + strlen(recordId)+3 + strlen("{ cartId }");
    if(cartId == NULL) {
        goto end;
    }
    char* localVarToReplace_cartId = malloc(sizeOfPathParams_cartId);
    sprintf(localVarToReplace_cartId, "{%s}", "cartId");

    localVarPath = strReplace(localVarPath, localVarToReplace_cartId, cartId);
    if(cartId == NULL) {
        goto end;
    }
    char* localVarToReplace_cartId = malloc(sizeOfPathParams_cartId);
    sprintf(localVarToReplace_cartId, "{%s}", "cartId");

    localVarPath = strReplace(localVarPath, localVarToReplace_cartId, cartId);

    // Path Params
    long sizeOfPathParams_wishListId = strlen(cartId)+3 + strlen(wishListId)+3 + strlen(recordId)+3 + strlen("{ wishListId }");
    if(wishListId == NULL) {
        goto end;
    }
    char* localVarToReplace_wishListId = malloc(sizeOfPathParams_wishListId);
    sprintf(localVarToReplace_wishListId, "{%s}", "wishListId");

    localVarPath = strReplace(localVarPath, localVarToReplace_wishListId, wishListId);
    if(wishListId == NULL) {
        goto end;
    }
    char* localVarToReplace_wishListId = malloc(sizeOfPathParams_wishListId);
    sprintf(localVarToReplace_wishListId, "{%s}", "wishListId");

    localVarPath = strReplace(localVarPath, localVarToReplace_wishListId, wishListId);

    // Path Params
    long sizeOfPathParams_recordId = strlen(cartId)+3 + strlen(wishListId)+3 + strlen(recordId)+3 + strlen("{ recordId }");
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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    cJSON *CartsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(CartsAPIlocalVarJSON);
    cJSON_Delete(CartsAPIlocalVarJSON);
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
    free(localVarToReplace_cartId);
    free(localVarToReplace_wishListId);
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get the acting cart
//
// Get the acting cart
//
cart_dto_envelope_t*
CartsAPI_getActingCart(apiClient_t *apiClient, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CartService/Carts/ActingCart")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CartService/Carts/ActingCart");




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
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    cJSON *CartsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    cart_dto_envelope_t *elementToReturn = cart_dto_envelope_parseFromJSON(CartsAPIlocalVarJSON);
    cJSON_Delete(CartsAPIlocalVarJSON);
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

// Get all business owned contacts
//
// Get all business owned contacts
//
cart_dto_envelope_t*
CartsAPI_getCartByIdAsync(apiClient_t *apiClient, char *cartId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CartService/Carts/{cartId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CartService/Carts/{cartId}");


    // Path Params
    long sizeOfPathParams_cartId = strlen(cartId)+3 + strlen("{ cartId }");
    if(cartId == NULL) {
        goto end;
    }
    char* localVarToReplace_cartId = malloc(sizeOfPathParams_cartId);
    sprintf(localVarToReplace_cartId, "{%s}", "cartId");

    localVarPath = strReplace(localVarPath, localVarToReplace_cartId, cartId);
    if(cartId == NULL) {
        goto end;
    }
    char* localVarToReplace_cartId = malloc(sizeOfPathParams_cartId);
    sprintf(localVarToReplace_cartId, "{%s}", "cartId");

    localVarPath = strReplace(localVarPath, localVarToReplace_cartId, cartId);



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
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    cJSON *CartsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    cart_dto_envelope_t *elementToReturn = cart_dto_envelope_parseFromJSON(CartsAPIlocalVarJSON);
    cJSON_Delete(CartsAPIlocalVarJSON);
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
    free(localVarToReplace_cartId);
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get an item from the compare table
//
// Get an item from the compare table
//
item_to_compare_cart_record_dto_envelope_t*
CartsAPI_getCartCompareRecord(apiClient_t *apiClient, char *cartId, char *itemId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CartService/Carts/{cartId}/Compare/{itemId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CartService/Carts/{cartId}/Compare/{itemId}");


    // Path Params
    long sizeOfPathParams_cartId = strlen(cartId)+3 + strlen(itemId)+3 + strlen("{ cartId }");
    if(cartId == NULL) {
        goto end;
    }
    char* localVarToReplace_cartId = malloc(sizeOfPathParams_cartId);
    sprintf(localVarToReplace_cartId, "{%s}", "cartId");

    localVarPath = strReplace(localVarPath, localVarToReplace_cartId, cartId);
    if(cartId == NULL) {
        goto end;
    }
    char* localVarToReplace_cartId = malloc(sizeOfPathParams_cartId);
    sprintf(localVarToReplace_cartId, "{%s}", "cartId");

    localVarPath = strReplace(localVarPath, localVarToReplace_cartId, cartId);

    // Path Params
    long sizeOfPathParams_itemId = strlen(cartId)+3 + strlen(itemId)+3 + strlen("{ itemId }");
    if(itemId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemId = malloc(sizeOfPathParams_itemId);
    sprintf(localVarToReplace_itemId, "{%s}", "itemId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemId, itemId);
    if(itemId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemId = malloc(sizeOfPathParams_itemId);
    sprintf(localVarToReplace_itemId, "{%s}", "itemId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemId, itemId);



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
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
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
    cJSON *CartsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    item_to_compare_cart_record_dto_envelope_t *elementToReturn = item_to_compare_cart_record_dto_envelope_parseFromJSON(CartsAPIlocalVarJSON);
    cJSON_Delete(CartsAPIlocalVarJSON);
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
    free(localVarToReplace_cartId);
    free(localVarToReplace_itemId);
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get all items in the compare table
//
// Get all items in the compare table
//
item_to_compare_cart_record_dto_list_envelope_t*
CartsAPI_getCartCompareRecords(apiClient_t *apiClient, char *cartId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CartService/Carts/{cartId}/Compare")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CartService/Carts/{cartId}/Compare");


    // Path Params
    long sizeOfPathParams_cartId = strlen(cartId)+3 + strlen("{ cartId }");
    if(cartId == NULL) {
        goto end;
    }
    char* localVarToReplace_cartId = malloc(sizeOfPathParams_cartId);
    sprintf(localVarToReplace_cartId, "{%s}", "cartId");

    localVarPath = strReplace(localVarPath, localVarToReplace_cartId, cartId);
    if(cartId == NULL) {
        goto end;
    }
    char* localVarToReplace_cartId = malloc(sizeOfPathParams_cartId);
    sprintf(localVarToReplace_cartId, "{%s}", "cartId");

    localVarPath = strReplace(localVarPath, localVarToReplace_cartId, cartId);



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
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
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
    cJSON *CartsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    item_to_compare_cart_record_dto_list_envelope_t *elementToReturn = item_to_compare_cart_record_dto_list_envelope_parseFromJSON(CartsAPIlocalVarJSON);
    cJSON_Delete(CartsAPIlocalVarJSON);
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
    free(localVarToReplace_cartId);
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get the country of a cart
//
// The country of a cart is used to calculate taxes and shipping costs
//
country_dto_envelope_t*
CartsAPI_getCartCountryAsync(apiClient_t *apiClient, char *cartId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CartService/Carts/{cartId}/Country")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CartService/Carts/{cartId}/Country");


    // Path Params
    long sizeOfPathParams_cartId = strlen(cartId)+3 + strlen("{ cartId }");
    if(cartId == NULL) {
        goto end;
    }
    char* localVarToReplace_cartId = malloc(sizeOfPathParams_cartId);
    sprintf(localVarToReplace_cartId, "{%s}", "cartId");

    localVarPath = strReplace(localVarPath, localVarToReplace_cartId, cartId);
    if(cartId == NULL) {
        goto end;
    }
    char* localVarToReplace_cartId = malloc(sizeOfPathParams_cartId);
    sprintf(localVarToReplace_cartId, "{%s}", "cartId");

    localVarPath = strReplace(localVarPath, localVarToReplace_cartId, cartId);



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
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    cJSON *CartsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    country_dto_envelope_t *elementToReturn = country_dto_envelope_parseFromJSON(CartsAPIlocalVarJSON);
    cJSON_Delete(CartsAPIlocalVarJSON);
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
    free(localVarToReplace_cartId);
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get the currency of a cart
//
// The currency of a cart used for display purposes
//
currency_dto_envelope_t*
CartsAPI_getCartCurrencyAsync(apiClient_t *apiClient, char *cartId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CartService/Carts/{cartId}/Currency")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CartService/Carts/{cartId}/Currency");


    // Path Params
    long sizeOfPathParams_cartId = strlen(cartId)+3 + strlen("{ cartId }");
    if(cartId == NULL) {
        goto end;
    }
    char* localVarToReplace_cartId = malloc(sizeOfPathParams_cartId);
    sprintf(localVarToReplace_cartId, "{%s}", "cartId");

    localVarPath = strReplace(localVarPath, localVarToReplace_cartId, cartId);
    if(cartId == NULL) {
        goto end;
    }
    char* localVarToReplace_cartId = malloc(sizeOfPathParams_cartId);
    sprintf(localVarToReplace_cartId, "{%s}", "cartId");

    localVarPath = strReplace(localVarPath, localVarToReplace_cartId, cartId);



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
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    cJSON *CartsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    currency_dto_envelope_t *elementToReturn = currency_dto_envelope_parseFromJSON(CartsAPIlocalVarJSON);
    cJSON_Delete(CartsAPIlocalVarJSON);
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
    free(localVarToReplace_cartId);
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get all cart lines
//
// Get all cart lines
//
item_cart_record_dto_list_envelope_t*
CartsAPI_getCartItems(apiClient_t *apiClient, char *cartId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CartService/Carts/{cartId}/Items")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CartService/Carts/{cartId}/Items");


    // Path Params
    long sizeOfPathParams_cartId = strlen(cartId)+3 + strlen("{ cartId }");
    if(cartId == NULL) {
        goto end;
    }
    char* localVarToReplace_cartId = malloc(sizeOfPathParams_cartId);
    sprintf(localVarToReplace_cartId, "{%s}", "cartId");

    localVarPath = strReplace(localVarPath, localVarToReplace_cartId, cartId);
    if(cartId == NULL) {
        goto end;
    }
    char* localVarToReplace_cartId = malloc(sizeOfPathParams_cartId);
    sprintf(localVarToReplace_cartId, "{%s}", "cartId");

    localVarPath = strReplace(localVarPath, localVarToReplace_cartId, cartId);



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
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    cJSON *CartsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    item_cart_record_dto_list_envelope_t *elementToReturn = item_cart_record_dto_list_envelope_parseFromJSON(CartsAPIlocalVarJSON);
    cJSON_Delete(CartsAPIlocalVarJSON);
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
    free(localVarToReplace_cartId);
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get a cart line by ID
//
// Get a cart line by ID
//
empty_envelope_t*
CartsAPI_getCartLineAsync(apiClient_t *apiClient, char *cartId, char *lineId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CartService/Carts/{cartId}/Lines/{lineId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CartService/Carts/{cartId}/Lines/{lineId}");


    // Path Params
    long sizeOfPathParams_cartId = strlen(cartId)+3 + strlen(lineId)+3 + strlen("{ cartId }");
    if(cartId == NULL) {
        goto end;
    }
    char* localVarToReplace_cartId = malloc(sizeOfPathParams_cartId);
    sprintf(localVarToReplace_cartId, "{%s}", "cartId");

    localVarPath = strReplace(localVarPath, localVarToReplace_cartId, cartId);
    if(cartId == NULL) {
        goto end;
    }
    char* localVarToReplace_cartId = malloc(sizeOfPathParams_cartId);
    sprintf(localVarToReplace_cartId, "{%s}", "cartId");

    localVarPath = strReplace(localVarPath, localVarToReplace_cartId, cartId);

    // Path Params
    long sizeOfPathParams_lineId = strlen(cartId)+3 + strlen(lineId)+3 + strlen("{ lineId }");
    if(lineId == NULL) {
        goto end;
    }
    char* localVarToReplace_lineId = malloc(sizeOfPathParams_lineId);
    sprintf(localVarToReplace_lineId, "{%s}", "lineId");

    localVarPath = strReplace(localVarPath, localVarToReplace_lineId, lineId);
    if(lineId == NULL) {
        goto end;
    }
    char* localVarToReplace_lineId = malloc(sizeOfPathParams_lineId);
    sprintf(localVarToReplace_lineId, "{%s}", "lineId");

    localVarPath = strReplace(localVarPath, localVarToReplace_lineId, lineId);



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
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    cJSON *CartsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(CartsAPIlocalVarJSON);
    cJSON_Delete(CartsAPIlocalVarJSON);
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
    free(localVarToReplace_cartId);
    free(localVarToReplace_lineId);
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get all cart lines
//
// Get all cart lines
//
item_cart_record_dto_list_envelope_t*
CartsAPI_getCartLinesAsync(apiClient_t *apiClient, char *cartId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CartService/Carts/{cartId}/Lines")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CartService/Carts/{cartId}/Lines");


    // Path Params
    long sizeOfPathParams_cartId = strlen(cartId)+3 + strlen("{ cartId }");
    if(cartId == NULL) {
        goto end;
    }
    char* localVarToReplace_cartId = malloc(sizeOfPathParams_cartId);
    sprintf(localVarToReplace_cartId, "{%s}", "cartId");

    localVarPath = strReplace(localVarPath, localVarToReplace_cartId, cartId);
    if(cartId == NULL) {
        goto end;
    }
    char* localVarToReplace_cartId = malloc(sizeOfPathParams_cartId);
    sprintf(localVarToReplace_cartId, "{%s}", "cartId");

    localVarPath = strReplace(localVarPath, localVarToReplace_cartId, cartId);



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
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    cJSON *CartsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    item_cart_record_dto_list_envelope_t *elementToReturn = item_cart_record_dto_list_envelope_parseFromJSON(CartsAPIlocalVarJSON);
    cJSON_Delete(CartsAPIlocalVarJSON);
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
    free(localVarToReplace_cartId);
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get all wishlists in a cart
//
// Get all wishlists in a cart
//
list_t*
CartsAPI_getCartWishList(apiClient_t *apiClient, char *cartId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CartService/Carts/{cartId}/WishLists")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CartService/Carts/{cartId}/WishLists");


    // Path Params
    long sizeOfPathParams_cartId = strlen(cartId)+3 + strlen("{ cartId }");
    if(cartId == NULL) {
        goto end;
    }
    char* localVarToReplace_cartId = malloc(sizeOfPathParams_cartId);
    sprintf(localVarToReplace_cartId, "{%s}", "cartId");

    localVarPath = strReplace(localVarPath, localVarToReplace_cartId, cartId);
    if(cartId == NULL) {
        goto end;
    }
    char* localVarToReplace_cartId = malloc(sizeOfPathParams_cartId);
    sprintf(localVarToReplace_cartId, "{%s}", "cartId");

    localVarPath = strReplace(localVarPath, localVarToReplace_cartId, cartId);



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
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    cJSON *CartsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    if(!cJSON_IsArray(CartsAPIlocalVarJSON)) {
        return 0;//nonprimitive container
    }
    list_t *elementToReturn = list_createList();
    cJSON *VarJSON;
    cJSON_ArrayForEach(VarJSON, CartsAPIlocalVarJSON)
    {
        if(!cJSON_IsObject(VarJSON))
        {
           // return 0;
        }
        char *localVarJSONToChar = cJSON_Print(VarJSON);
        list_addElement(elementToReturn , localVarJSONToChar);
    }

    cJSON_Delete( CartsAPIlocalVarJSON);
    cJSON_Delete( VarJSON);
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
    free(localVarToReplace_cartId);
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get a wish list by ID
//
// Get a wish list by ID
//
wish_list_dto_envelope_t*
CartsAPI_getCartWishListDetails(apiClient_t *apiClient, char *cartId, char *wishListId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CartService/Carts/{cartId}/WishLists/{wishListId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CartService/Carts/{cartId}/WishLists/{wishListId}");


    // Path Params
    long sizeOfPathParams_cartId = strlen(cartId)+3 + strlen(wishListId)+3 + strlen("{ cartId }");
    if(cartId == NULL) {
        goto end;
    }
    char* localVarToReplace_cartId = malloc(sizeOfPathParams_cartId);
    sprintf(localVarToReplace_cartId, "{%s}", "cartId");

    localVarPath = strReplace(localVarPath, localVarToReplace_cartId, cartId);
    if(cartId == NULL) {
        goto end;
    }
    char* localVarToReplace_cartId = malloc(sizeOfPathParams_cartId);
    sprintf(localVarToReplace_cartId, "{%s}", "cartId");

    localVarPath = strReplace(localVarPath, localVarToReplace_cartId, cartId);

    // Path Params
    long sizeOfPathParams_wishListId = strlen(cartId)+3 + strlen(wishListId)+3 + strlen("{ wishListId }");
    if(wishListId == NULL) {
        goto end;
    }
    char* localVarToReplace_wishListId = malloc(sizeOfPathParams_wishListId);
    sprintf(localVarToReplace_wishListId, "{%s}", "wishListId");

    localVarPath = strReplace(localVarPath, localVarToReplace_wishListId, wishListId);
    if(wishListId == NULL) {
        goto end;
    }
    char* localVarToReplace_wishListId = malloc(sizeOfPathParams_wishListId);
    sprintf(localVarToReplace_wishListId, "{%s}", "wishListId");

    localVarPath = strReplace(localVarPath, localVarToReplace_wishListId, wishListId);



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
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    cJSON *CartsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    wish_list_dto_envelope_t *elementToReturn = wish_list_dto_envelope_parseFromJSON(CartsAPIlocalVarJSON);
    cJSON_Delete(CartsAPIlocalVarJSON);
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
    free(localVarToReplace_cartId);
    free(localVarToReplace_wishListId);
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get a record in a wish list
//
// Get a record in a wish list
//
list_t*
CartsAPI_getCartWishListItemAsync(apiClient_t *apiClient, char *cartId, char *wishListId, char *recordId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CartService/Carts/{cartId}/WishLists/{wishListId}/Records/{recordId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CartService/Carts/{cartId}/WishLists/{wishListId}/Records/{recordId}");


    // Path Params
    long sizeOfPathParams_cartId = strlen(cartId)+3 + strlen(wishListId)+3 + strlen(recordId)+3 + strlen("{ cartId }");
    if(cartId == NULL) {
        goto end;
    }
    char* localVarToReplace_cartId = malloc(sizeOfPathParams_cartId);
    sprintf(localVarToReplace_cartId, "{%s}", "cartId");

    localVarPath = strReplace(localVarPath, localVarToReplace_cartId, cartId);
    if(cartId == NULL) {
        goto end;
    }
    char* localVarToReplace_cartId = malloc(sizeOfPathParams_cartId);
    sprintf(localVarToReplace_cartId, "{%s}", "cartId");

    localVarPath = strReplace(localVarPath, localVarToReplace_cartId, cartId);

    // Path Params
    long sizeOfPathParams_wishListId = strlen(cartId)+3 + strlen(wishListId)+3 + strlen(recordId)+3 + strlen("{ wishListId }");
    if(wishListId == NULL) {
        goto end;
    }
    char* localVarToReplace_wishListId = malloc(sizeOfPathParams_wishListId);
    sprintf(localVarToReplace_wishListId, "{%s}", "wishListId");

    localVarPath = strReplace(localVarPath, localVarToReplace_wishListId, wishListId);
    if(wishListId == NULL) {
        goto end;
    }
    char* localVarToReplace_wishListId = malloc(sizeOfPathParams_wishListId);
    sprintf(localVarToReplace_wishListId, "{%s}", "wishListId");

    localVarPath = strReplace(localVarPath, localVarToReplace_wishListId, wishListId);

    // Path Params
    long sizeOfPathParams_recordId = strlen(cartId)+3 + strlen(wishListId)+3 + strlen(recordId)+3 + strlen("{ recordId }");
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
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    cJSON *CartsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    if(!cJSON_IsArray(CartsAPIlocalVarJSON)) {
        return 0;//nonprimitive container
    }
    list_t *elementToReturn = list_createList();
    cJSON *VarJSON;
    cJSON_ArrayForEach(VarJSON, CartsAPIlocalVarJSON)
    {
        if(!cJSON_IsObject(VarJSON))
        {
           // return 0;
        }
        char *localVarJSONToChar = cJSON_Print(VarJSON);
        list_addElement(elementToReturn , localVarJSONToChar);
    }

    cJSON_Delete( CartsAPIlocalVarJSON);
    cJSON_Delete( VarJSON);
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
    free(localVarToReplace_cartId);
    free(localVarToReplace_wishListId);
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get all records in a wish list
//
// Get all records in a wish list
//
list_t*
CartsAPI_getCartWishListItems(apiClient_t *apiClient, char *cartId, char *wishListId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CartService/Carts/{cartId}/WishLists/{wishListId}/Records")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CartService/Carts/{cartId}/WishLists/{wishListId}/Records");


    // Path Params
    long sizeOfPathParams_cartId = strlen(cartId)+3 + strlen(wishListId)+3 + strlen("{ cartId }");
    if(cartId == NULL) {
        goto end;
    }
    char* localVarToReplace_cartId = malloc(sizeOfPathParams_cartId);
    sprintf(localVarToReplace_cartId, "{%s}", "cartId");

    localVarPath = strReplace(localVarPath, localVarToReplace_cartId, cartId);
    if(cartId == NULL) {
        goto end;
    }
    char* localVarToReplace_cartId = malloc(sizeOfPathParams_cartId);
    sprintf(localVarToReplace_cartId, "{%s}", "cartId");

    localVarPath = strReplace(localVarPath, localVarToReplace_cartId, cartId);

    // Path Params
    long sizeOfPathParams_wishListId = strlen(cartId)+3 + strlen(wishListId)+3 + strlen("{ wishListId }");
    if(wishListId == NULL) {
        goto end;
    }
    char* localVarToReplace_wishListId = malloc(sizeOfPathParams_wishListId);
    sprintf(localVarToReplace_wishListId, "{%s}", "wishListId");

    localVarPath = strReplace(localVarPath, localVarToReplace_wishListId, wishListId);
    if(wishListId == NULL) {
        goto end;
    }
    char* localVarToReplace_wishListId = malloc(sizeOfPathParams_wishListId);
    sprintf(localVarToReplace_wishListId, "{%s}", "wishListId");

    localVarPath = strReplace(localVarPath, localVarToReplace_wishListId, wishListId);



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
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    cJSON *CartsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    if(!cJSON_IsArray(CartsAPIlocalVarJSON)) {
        return 0;//nonprimitive container
    }
    list_t *elementToReturn = list_createList();
    cJSON *VarJSON;
    cJSON_ArrayForEach(VarJSON, CartsAPIlocalVarJSON)
    {
        if(!cJSON_IsObject(VarJSON))
        {
           // return 0;
        }
        char *localVarJSONToChar = cJSON_Print(VarJSON);
        list_addElement(elementToReturn , localVarJSONToChar);
    }

    cJSON_Delete( CartsAPIlocalVarJSON);
    cJSON_Delete( VarJSON);
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
    free(localVarToReplace_cartId);
    free(localVarToReplace_wishListId);
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get the guest cart
//
// Get the guest cart
//
cart_dto_envelope_t*
CartsAPI_getGuestCartAsync(apiClient_t *apiClient, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CartService/Carts/GuestCart")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CartService/Carts/GuestCart");




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
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    cJSON *CartsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    cart_dto_envelope_t *elementToReturn = cart_dto_envelope_parseFromJSON(CartsAPIlocalVarJSON);
    cJSON_Delete(CartsAPIlocalVarJSON);
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

// Get the business cart
//
// Get the business cart
//
cart_dto_envelope_t*
CartsAPI_getTenantCartAsync(apiClient_t *apiClient, char *tenantId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CartService/Carts/BusinessCart/{tenantId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CartService/Carts/BusinessCart/{tenantId}");


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
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    cJSON *CartsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    cart_dto_envelope_t *elementToReturn = cart_dto_envelope_parseFromJSON(CartsAPIlocalVarJSON);
    cJSON_Delete(CartsAPIlocalVarJSON);
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get the current user's cart
//
// Get the current user's cart
//
cart_dto_envelope_t*
CartsAPI_getUserCart(apiClient_t *apiClient, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CartService/Carts/UserCart")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CartService/Carts/UserCart");




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
    cJSON *CartsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    cart_dto_envelope_t *elementToReturn = cart_dto_envelope_parseFromJSON(CartsAPIlocalVarJSON);
    cJSON_Delete(CartsAPIlocalVarJSON);
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

// Increase the quantity of a cart line
//
// Increase the quantity of a cart line
//
empty_envelope_t*
CartsAPI_increaseCartLineAsync(apiClient_t *apiClient, char *cartId, char *lineId, double quantity, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CartService/Carts/{cartId}/Lines/{lineId}/Increase")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CartService/Carts/{cartId}/Lines/{lineId}/Increase");


    // Path Params
    long sizeOfPathParams_cartId = strlen(cartId)+3 + strlen(lineId)+3 + strlen("{ cartId }");
    if(cartId == NULL) {
        goto end;
    }
    char* localVarToReplace_cartId = malloc(sizeOfPathParams_cartId);
    sprintf(localVarToReplace_cartId, "{%s}", "cartId");

    localVarPath = strReplace(localVarPath, localVarToReplace_cartId, cartId);
    if(cartId == NULL) {
        goto end;
    }
    char* localVarToReplace_cartId = malloc(sizeOfPathParams_cartId);
    sprintf(localVarToReplace_cartId, "{%s}", "cartId");

    localVarPath = strReplace(localVarPath, localVarToReplace_cartId, cartId);

    // Path Params
    long sizeOfPathParams_lineId = strlen(cartId)+3 + strlen(lineId)+3 + strlen("{ lineId }");
    if(lineId == NULL) {
        goto end;
    }
    char* localVarToReplace_lineId = malloc(sizeOfPathParams_lineId);
    sprintf(localVarToReplace_lineId, "{%s}", "lineId");

    localVarPath = strReplace(localVarPath, localVarToReplace_lineId, lineId);
    if(lineId == NULL) {
        goto end;
    }
    char* localVarToReplace_lineId = malloc(sizeOfPathParams_lineId);
    sprintf(localVarToReplace_lineId, "{%s}", "lineId");

    localVarPath = strReplace(localVarPath, localVarToReplace_lineId, lineId);



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
    char *keyQuery_quantity = NULL;
    double valueQuery_quantity ;
    keyValuePair_t *keyPairQuery_quantity = 0;
    if (quantity)
    {
        keyQuery_quantity = strdup("quantity");
        valueQuery_quantity = (quantity);
        keyPairQuery_quantity = keyValuePair_create(keyQuery_quantity, &valueQuery_quantity);
        list_addElement(localVarQueryParameters,keyPairQuery_quantity);
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
                    "PUT");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    cJSON *CartsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(CartsAPIlocalVarJSON);
    cJSON_Delete(CartsAPIlocalVarJSON);
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
    free(localVarToReplace_cartId);
    free(localVarToReplace_lineId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
    if(keyQuery_quantity){
        free(keyQuery_quantity);
        keyQuery_quantity = NULL;
    }
    if(keyPairQuery_quantity){
        keyValuePair_free(keyPairQuery_quantity);
        keyPairQuery_quantity = NULL;
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

// Increase an Item in a cart
//
// Increase an Item in a cart
//
empty_envelope_t*
CartsAPI_increaseItemCartRecordQuantityAsync(apiClient_t *apiClient, char *cartId, char *itemId, char *api_version, char *x_api_version, item_cart_record_update_dto_t *item_cart_record_update_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CartService/Carts/{cartId}/Items/{itemId}/Increase")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CartService/Carts/{cartId}/Items/{itemId}/Increase");


    // Path Params
    long sizeOfPathParams_cartId = strlen(cartId)+3 + strlen(itemId)+3 + strlen("{ cartId }");
    if(cartId == NULL) {
        goto end;
    }
    char* localVarToReplace_cartId = malloc(sizeOfPathParams_cartId);
    sprintf(localVarToReplace_cartId, "{%s}", "cartId");

    localVarPath = strReplace(localVarPath, localVarToReplace_cartId, cartId);
    if(cartId == NULL) {
        goto end;
    }
    char* localVarToReplace_cartId = malloc(sizeOfPathParams_cartId);
    sprintf(localVarToReplace_cartId, "{%s}", "cartId");

    localVarPath = strReplace(localVarPath, localVarToReplace_cartId, cartId);

    // Path Params
    long sizeOfPathParams_itemId = strlen(cartId)+3 + strlen(itemId)+3 + strlen("{ itemId }");
    if(itemId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemId = malloc(sizeOfPathParams_itemId);
    sprintf(localVarToReplace_itemId, "{%s}", "itemId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemId, itemId);
    if(itemId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemId = malloc(sizeOfPathParams_itemId);
    sprintf(localVarToReplace_itemId, "{%s}", "itemId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemId, itemId);



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

    // Body Param
    cJSON *localVarSingleItemJSON_item_cart_record_update_dto = NULL;
    if (item_cart_record_update_dto != NULL)
    {
        //string
        localVarSingleItemJSON_item_cart_record_update_dto = item_cart_record_update_dto_convertToJSON(item_cart_record_update_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_item_cart_record_update_dto);
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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    cJSON *CartsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(CartsAPIlocalVarJSON);
    cJSON_Delete(CartsAPIlocalVarJSON);
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
    free(localVarToReplace_cartId);
    free(localVarToReplace_itemId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
    if (localVarSingleItemJSON_item_cart_record_update_dto) {
        cJSON_Delete(localVarSingleItemJSON_item_cart_record_update_dto);
        localVarSingleItemJSON_item_cart_record_update_dto = NULL;
    }
    free(localVarBodyParameters);
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

// Assesses if an Item is already in a cart
//
// Assesses if an Item is already in a cart
//
boolean_envelope_t*
CartsAPI_isItemAlreadyInCartAsync(apiClient_t *apiClient, char *cartId, char *itemId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CartService/Carts/{cartId}/Contains/{itemId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CartService/Carts/{cartId}/Contains/{itemId}");


    // Path Params
    long sizeOfPathParams_cartId = strlen(cartId)+3 + strlen(itemId)+3 + strlen("{ cartId }");
    if(cartId == NULL) {
        goto end;
    }
    char* localVarToReplace_cartId = malloc(sizeOfPathParams_cartId);
    sprintf(localVarToReplace_cartId, "{%s}", "cartId");

    localVarPath = strReplace(localVarPath, localVarToReplace_cartId, cartId);
    if(cartId == NULL) {
        goto end;
    }
    char* localVarToReplace_cartId = malloc(sizeOfPathParams_cartId);
    sprintf(localVarToReplace_cartId, "{%s}", "cartId");

    localVarPath = strReplace(localVarPath, localVarToReplace_cartId, cartId);

    // Path Params
    long sizeOfPathParams_itemId = strlen(cartId)+3 + strlen(itemId)+3 + strlen("{ itemId }");
    if(itemId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemId = malloc(sizeOfPathParams_itemId);
    sprintf(localVarToReplace_itemId, "{%s}", "itemId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemId, itemId);
    if(itemId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemId = malloc(sizeOfPathParams_itemId);
    sprintf(localVarToReplace_itemId, "{%s}", "itemId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemId, itemId);



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
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
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
    cJSON *CartsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    boolean_envelope_t *elementToReturn = boolean_envelope_parseFromJSON(CartsAPIlocalVarJSON);
    cJSON_Delete(CartsAPIlocalVarJSON);
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
    free(localVarToReplace_cartId);
    free(localVarToReplace_itemId);
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Assesses if an Item is already in the compare table
//
// Assesses if an Item is already in the compare table
//
boolean_envelope_t*
CartsAPI_isItemInCompareTableAsync(apiClient_t *apiClient, char *cartId, char *itemId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CartService/Carts/{cartId}/Compare/Contains/{itemId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CartService/Carts/{cartId}/Compare/Contains/{itemId}");


    // Path Params
    long sizeOfPathParams_cartId = strlen(cartId)+3 + strlen(itemId)+3 + strlen("{ cartId }");
    if(cartId == NULL) {
        goto end;
    }
    char* localVarToReplace_cartId = malloc(sizeOfPathParams_cartId);
    sprintf(localVarToReplace_cartId, "{%s}", "cartId");

    localVarPath = strReplace(localVarPath, localVarToReplace_cartId, cartId);
    if(cartId == NULL) {
        goto end;
    }
    char* localVarToReplace_cartId = malloc(sizeOfPathParams_cartId);
    sprintf(localVarToReplace_cartId, "{%s}", "cartId");

    localVarPath = strReplace(localVarPath, localVarToReplace_cartId, cartId);

    // Path Params
    long sizeOfPathParams_itemId = strlen(cartId)+3 + strlen(itemId)+3 + strlen("{ itemId }");
    if(itemId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemId = malloc(sizeOfPathParams_itemId);
    sprintf(localVarToReplace_itemId, "{%s}", "itemId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemId, itemId);
    if(itemId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemId = malloc(sizeOfPathParams_itemId);
    sprintf(localVarToReplace_itemId, "{%s}", "itemId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemId, itemId);



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
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
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
    cJSON *CartsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    boolean_envelope_t *elementToReturn = boolean_envelope_parseFromJSON(CartsAPIlocalVarJSON);
    cJSON_Delete(CartsAPIlocalVarJSON);
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
    free(localVarToReplace_cartId);
    free(localVarToReplace_itemId);
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Assesses if an Item is already in any of the cart's wishlists
//
// Assesses if an Item is already in any of the cart's wishlists
//
boolean_envelope_t*
CartsAPI_isItemInWishLists(apiClient_t *apiClient, char *cartId, char *itemId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CartService/Carts/{cartId}/WishLists/Contains/{itemId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CartService/Carts/{cartId}/WishLists/Contains/{itemId}");


    // Path Params
    long sizeOfPathParams_cartId = strlen(cartId)+3 + strlen(itemId)+3 + strlen("{ cartId }");
    if(cartId == NULL) {
        goto end;
    }
    char* localVarToReplace_cartId = malloc(sizeOfPathParams_cartId);
    sprintf(localVarToReplace_cartId, "{%s}", "cartId");

    localVarPath = strReplace(localVarPath, localVarToReplace_cartId, cartId);
    if(cartId == NULL) {
        goto end;
    }
    char* localVarToReplace_cartId = malloc(sizeOfPathParams_cartId);
    sprintf(localVarToReplace_cartId, "{%s}", "cartId");

    localVarPath = strReplace(localVarPath, localVarToReplace_cartId, cartId);

    // Path Params
    long sizeOfPathParams_itemId = strlen(cartId)+3 + strlen(itemId)+3 + strlen("{ itemId }");
    if(itemId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemId = malloc(sizeOfPathParams_itemId);
    sprintf(localVarToReplace_itemId, "{%s}", "itemId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemId, itemId);
    if(itemId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemId = malloc(sizeOfPathParams_itemId);
    sprintf(localVarToReplace_itemId, "{%s}", "itemId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemId, itemId);



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
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    cJSON *CartsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    boolean_envelope_t *elementToReturn = boolean_envelope_parseFromJSON(CartsAPIlocalVarJSON);
    cJSON_Delete(CartsAPIlocalVarJSON);
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
    free(localVarToReplace_cartId);
    free(localVarToReplace_itemId);
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Remove a cart line
//
// Remove a cart line
//
empty_envelope_t*
CartsAPI_removeCartLineAsync(apiClient_t *apiClient, char *cartId, char *lineId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CartService/Carts/{cartId}/Lines/{lineId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CartService/Carts/{cartId}/Lines/{lineId}");


    // Path Params
    long sizeOfPathParams_cartId = strlen(cartId)+3 + strlen(lineId)+3 + strlen("{ cartId }");
    if(cartId == NULL) {
        goto end;
    }
    char* localVarToReplace_cartId = malloc(sizeOfPathParams_cartId);
    sprintf(localVarToReplace_cartId, "{%s}", "cartId");

    localVarPath = strReplace(localVarPath, localVarToReplace_cartId, cartId);
    if(cartId == NULL) {
        goto end;
    }
    char* localVarToReplace_cartId = malloc(sizeOfPathParams_cartId);
    sprintf(localVarToReplace_cartId, "{%s}", "cartId");

    localVarPath = strReplace(localVarPath, localVarToReplace_cartId, cartId);

    // Path Params
    long sizeOfPathParams_lineId = strlen(cartId)+3 + strlen(lineId)+3 + strlen("{ lineId }");
    if(lineId == NULL) {
        goto end;
    }
    char* localVarToReplace_lineId = malloc(sizeOfPathParams_lineId);
    sprintf(localVarToReplace_lineId, "{%s}", "lineId");

    localVarPath = strReplace(localVarPath, localVarToReplace_lineId, lineId);
    if(lineId == NULL) {
        goto end;
    }
    char* localVarToReplace_lineId = malloc(sizeOfPathParams_lineId);
    sprintf(localVarToReplace_lineId, "{%s}", "lineId");

    localVarPath = strReplace(localVarPath, localVarToReplace_lineId, lineId);



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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    cJSON *CartsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(CartsAPIlocalVarJSON);
    cJSON_Delete(CartsAPIlocalVarJSON);
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
    free(localVarToReplace_cartId);
    free(localVarToReplace_lineId);
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Remove an Item from a cart
//
// Remove an Item from a cart
//
empty_envelope_t*
CartsAPI_removeItemFromCartAsync(apiClient_t *apiClient, char *cartId, char *itemId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CartService/Carts/{cartId}/Items/{itemId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CartService/Carts/{cartId}/Items/{itemId}");


    // Path Params
    long sizeOfPathParams_cartId = strlen(cartId)+3 + strlen(itemId)+3 + strlen("{ cartId }");
    if(cartId == NULL) {
        goto end;
    }
    char* localVarToReplace_cartId = malloc(sizeOfPathParams_cartId);
    sprintf(localVarToReplace_cartId, "{%s}", "cartId");

    localVarPath = strReplace(localVarPath, localVarToReplace_cartId, cartId);
    if(cartId == NULL) {
        goto end;
    }
    char* localVarToReplace_cartId = malloc(sizeOfPathParams_cartId);
    sprintf(localVarToReplace_cartId, "{%s}", "cartId");

    localVarPath = strReplace(localVarPath, localVarToReplace_cartId, cartId);

    // Path Params
    long sizeOfPathParams_itemId = strlen(cartId)+3 + strlen(itemId)+3 + strlen("{ itemId }");
    if(itemId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemId = malloc(sizeOfPathParams_itemId);
    sprintf(localVarToReplace_itemId, "{%s}", "itemId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemId, itemId);
    if(itemId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemId = malloc(sizeOfPathParams_itemId);
    sprintf(localVarToReplace_itemId, "{%s}", "itemId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemId, itemId);



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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    cJSON *CartsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(CartsAPIlocalVarJSON);
    cJSON_Delete(CartsAPIlocalVarJSON);
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
    free(localVarToReplace_cartId);
    free(localVarToReplace_itemId);
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Remove an item from the compare table
//
// Remove an item from the compare table
//
item_to_compare_cart_record_dto_t*
CartsAPI_removeItemFromCompareTableAsync(apiClient_t *apiClient, char *cartId, char *itemId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CartService/Carts/{cartId}/Compare/{itemId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CartService/Carts/{cartId}/Compare/{itemId}");


    // Path Params
    long sizeOfPathParams_cartId = strlen(cartId)+3 + strlen(itemId)+3 + strlen("{ cartId }");
    if(cartId == NULL) {
        goto end;
    }
    char* localVarToReplace_cartId = malloc(sizeOfPathParams_cartId);
    sprintf(localVarToReplace_cartId, "{%s}", "cartId");

    localVarPath = strReplace(localVarPath, localVarToReplace_cartId, cartId);
    if(cartId == NULL) {
        goto end;
    }
    char* localVarToReplace_cartId = malloc(sizeOfPathParams_cartId);
    sprintf(localVarToReplace_cartId, "{%s}", "cartId");

    localVarPath = strReplace(localVarPath, localVarToReplace_cartId, cartId);

    // Path Params
    long sizeOfPathParams_itemId = strlen(cartId)+3 + strlen(itemId)+3 + strlen("{ itemId }");
    if(itemId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemId = malloc(sizeOfPathParams_itemId);
    sprintf(localVarToReplace_itemId, "{%s}", "itemId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemId, itemId);
    if(itemId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemId = malloc(sizeOfPathParams_itemId);
    sprintf(localVarToReplace_itemId, "{%s}", "itemId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemId, itemId);



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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    cJSON *CartsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    item_to_compare_cart_record_dto_t *elementToReturn = item_to_compare_cart_record_dto_parseFromJSON(CartsAPIlocalVarJSON);
    cJSON_Delete(CartsAPIlocalVarJSON);
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
    free(localVarToReplace_cartId);
    free(localVarToReplace_itemId);
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Set the country of a cart
//
// Set the country of a cart
//
empty_envelope_t*
CartsAPI_setCartCountryAsync(apiClient_t *apiClient, char *cartId, char *api_version, char *x_api_version, country_switch_request_t *country_switch_request)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CartService/Carts/{cartId}/Country")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CartService/Carts/{cartId}/Country");


    // Path Params
    long sizeOfPathParams_cartId = strlen(cartId)+3 + strlen("{ cartId }");
    if(cartId == NULL) {
        goto end;
    }
    char* localVarToReplace_cartId = malloc(sizeOfPathParams_cartId);
    sprintf(localVarToReplace_cartId, "{%s}", "cartId");

    localVarPath = strReplace(localVarPath, localVarToReplace_cartId, cartId);



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

    // Body Param
    cJSON *localVarSingleItemJSON_country_switch_request = NULL;
    if (country_switch_request != NULL)
    {
        //string
        localVarSingleItemJSON_country_switch_request = country_switch_request_convertToJSON(country_switch_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_country_switch_request);
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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    cJSON *CartsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(CartsAPIlocalVarJSON);
    cJSON_Delete(CartsAPIlocalVarJSON);
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
    free(localVarToReplace_cartId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
    if (localVarSingleItemJSON_country_switch_request) {
        cJSON_Delete(localVarSingleItemJSON_country_switch_request);
        localVarSingleItemJSON_country_switch_request = NULL;
    }
    free(localVarBodyParameters);
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

// Set the currency of a cart
//
// Set the currency of a cart
//
empty_envelope_t*
CartsAPI_setCartCurrencyAsync(apiClient_t *apiClient, char *cartId, char *api_version, char *x_api_version, currency_switch_request_t *currency_switch_request)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CartService/Carts/{cartId}/Currency")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CartService/Carts/{cartId}/Currency");


    // Path Params
    long sizeOfPathParams_cartId = strlen(cartId)+3 + strlen("{ cartId }");
    if(cartId == NULL) {
        goto end;
    }
    char* localVarToReplace_cartId = malloc(sizeOfPathParams_cartId);
    sprintf(localVarToReplace_cartId, "{%s}", "cartId");

    localVarPath = strReplace(localVarPath, localVarToReplace_cartId, cartId);



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

    // Body Param
    cJSON *localVarSingleItemJSON_currency_switch_request = NULL;
    if (currency_switch_request != NULL)
    {
        //string
        localVarSingleItemJSON_currency_switch_request = currency_switch_request_convertToJSON(currency_switch_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_currency_switch_request);
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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    cJSON *CartsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(CartsAPIlocalVarJSON);
    cJSON_Delete(CartsAPIlocalVarJSON);
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
    free(localVarToReplace_cartId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
    if (localVarSingleItemJSON_currency_switch_request) {
        cJSON_Delete(localVarSingleItemJSON_currency_switch_request);
        localVarSingleItemJSON_currency_switch_request = NULL;
    }
    free(localVarBodyParameters);
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

// Submit a cart for processing
//
// Submit a cart for processing
//
empty_envelope_t*
CartsAPI_submitCartAsync(apiClient_t *apiClient, char *cartId, char *tenantId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CartService/Carts/{cartId}/Submit")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CartService/Carts/{cartId}/Submit");


    // Path Params
    long sizeOfPathParams_cartId = strlen(cartId)+3 + strlen("{ cartId }");
    if(cartId == NULL) {
        goto end;
    }
    char* localVarToReplace_cartId = malloc(sizeOfPathParams_cartId);
    sprintf(localVarToReplace_cartId, "{%s}", "cartId");

    localVarPath = strReplace(localVarPath, localVarToReplace_cartId, cartId);
    if(cartId == NULL) {
        goto end;
    }
    char* localVarToReplace_cartId = malloc(sizeOfPathParams_cartId);
    sprintf(localVarToReplace_cartId, "{%s}", "cartId");

    localVarPath = strReplace(localVarPath, localVarToReplace_cartId, cartId);



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
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    cJSON *CartsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(CartsAPIlocalVarJSON);
    cJSON_Delete(CartsAPIlocalVarJSON);
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
    free(localVarToReplace_cartId);
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

// Update a cart
//
// Update a cart
//
empty_envelope_t*
CartsAPI_updateCartAsync(apiClient_t *apiClient, char *cartId, char *api_version, char *x_api_version, cart_update_request_t *cart_update_request)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CartService/Carts/{cartId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CartService/Carts/{cartId}");


    // Path Params
    long sizeOfPathParams_cartId = strlen(cartId)+3 + strlen("{ cartId }");
    if(cartId == NULL) {
        goto end;
    }
    char* localVarToReplace_cartId = malloc(sizeOfPathParams_cartId);
    sprintf(localVarToReplace_cartId, "{%s}", "cartId");

    localVarPath = strReplace(localVarPath, localVarToReplace_cartId, cartId);
    if(cartId == NULL) {
        goto end;
    }
    char* localVarToReplace_cartId = malloc(sizeOfPathParams_cartId);
    sprintf(localVarToReplace_cartId, "{%s}", "cartId");

    localVarPath = strReplace(localVarPath, localVarToReplace_cartId, cartId);



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

    // Body Param
    cJSON *localVarSingleItemJSON_cart_update_request = NULL;
    if (cart_update_request != NULL)
    {
        //string
        localVarSingleItemJSON_cart_update_request = cart_update_request_convertToJSON(cart_update_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_cart_update_request);
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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    cJSON *CartsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(CartsAPIlocalVarJSON);
    cJSON_Delete(CartsAPIlocalVarJSON);
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
    free(localVarToReplace_cartId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
    if (localVarSingleItemJSON_cart_update_request) {
        cJSON_Delete(localVarSingleItemJSON_cart_update_request);
        localVarSingleItemJSON_cart_update_request = NULL;
    }
    free(localVarBodyParameters);
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

// Update a cart line
//
// Update a cart line
//
empty_envelope_t*
CartsAPI_updateCartLineAsync(apiClient_t *apiClient, char *cartId, char *lineId, char *api_version, char *x_api_version, item_cart_record_update_dto_t *item_cart_record_update_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CartService/Carts/{cartId}/Lines/{lineId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CartService/Carts/{cartId}/Lines/{lineId}");


    // Path Params
    long sizeOfPathParams_cartId = strlen(cartId)+3 + strlen(lineId)+3 + strlen("{ cartId }");
    if(cartId == NULL) {
        goto end;
    }
    char* localVarToReplace_cartId = malloc(sizeOfPathParams_cartId);
    sprintf(localVarToReplace_cartId, "{%s}", "cartId");

    localVarPath = strReplace(localVarPath, localVarToReplace_cartId, cartId);
    if(cartId == NULL) {
        goto end;
    }
    char* localVarToReplace_cartId = malloc(sizeOfPathParams_cartId);
    sprintf(localVarToReplace_cartId, "{%s}", "cartId");

    localVarPath = strReplace(localVarPath, localVarToReplace_cartId, cartId);

    // Path Params
    long sizeOfPathParams_lineId = strlen(cartId)+3 + strlen(lineId)+3 + strlen("{ lineId }");
    if(lineId == NULL) {
        goto end;
    }
    char* localVarToReplace_lineId = malloc(sizeOfPathParams_lineId);
    sprintf(localVarToReplace_lineId, "{%s}", "lineId");

    localVarPath = strReplace(localVarPath, localVarToReplace_lineId, lineId);
    if(lineId == NULL) {
        goto end;
    }
    char* localVarToReplace_lineId = malloc(sizeOfPathParams_lineId);
    sprintf(localVarToReplace_lineId, "{%s}", "lineId");

    localVarPath = strReplace(localVarPath, localVarToReplace_lineId, lineId);



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

    // Body Param
    cJSON *localVarSingleItemJSON_item_cart_record_update_dto = NULL;
    if (item_cart_record_update_dto != NULL)
    {
        //string
        localVarSingleItemJSON_item_cart_record_update_dto = item_cart_record_update_dto_convertToJSON(item_cart_record_update_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_item_cart_record_update_dto);
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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    cJSON *CartsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(CartsAPIlocalVarJSON);
    cJSON_Delete(CartsAPIlocalVarJSON);
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
    free(localVarToReplace_cartId);
    free(localVarToReplace_lineId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
    if (localVarSingleItemJSON_item_cart_record_update_dto) {
        cJSON_Delete(localVarSingleItemJSON_item_cart_record_update_dto);
        localVarSingleItemJSON_item_cart_record_update_dto = NULL;
    }
    free(localVarBodyParameters);
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

// Update an Item in a cart
//
// Update an Item in a cart
//
empty_envelope_t*
CartsAPI_updateItemCartRecordAsync(apiClient_t *apiClient, char *cartId, char *itemId, char *api_version, char *x_api_version, item_cart_record_update_dto_t *item_cart_record_update_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CartService/Carts/{cartId}/Items/{itemId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CartService/Carts/{cartId}/Items/{itemId}");


    // Path Params
    long sizeOfPathParams_cartId = strlen(cartId)+3 + strlen(itemId)+3 + strlen("{ cartId }");
    if(cartId == NULL) {
        goto end;
    }
    char* localVarToReplace_cartId = malloc(sizeOfPathParams_cartId);
    sprintf(localVarToReplace_cartId, "{%s}", "cartId");

    localVarPath = strReplace(localVarPath, localVarToReplace_cartId, cartId);
    if(cartId == NULL) {
        goto end;
    }
    char* localVarToReplace_cartId = malloc(sizeOfPathParams_cartId);
    sprintf(localVarToReplace_cartId, "{%s}", "cartId");

    localVarPath = strReplace(localVarPath, localVarToReplace_cartId, cartId);

    // Path Params
    long sizeOfPathParams_itemId = strlen(cartId)+3 + strlen(itemId)+3 + strlen("{ itemId }");
    if(itemId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemId = malloc(sizeOfPathParams_itemId);
    sprintf(localVarToReplace_itemId, "{%s}", "itemId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemId, itemId);
    if(itemId == NULL) {
        goto end;
    }
    char* localVarToReplace_itemId = malloc(sizeOfPathParams_itemId);
    sprintf(localVarToReplace_itemId, "{%s}", "itemId");

    localVarPath = strReplace(localVarPath, localVarToReplace_itemId, itemId);



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

    // Body Param
    cJSON *localVarSingleItemJSON_item_cart_record_update_dto = NULL;
    if (item_cart_record_update_dto != NULL)
    {
        //string
        localVarSingleItemJSON_item_cart_record_update_dto = item_cart_record_update_dto_convertToJSON(item_cart_record_update_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_item_cart_record_update_dto);
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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    cJSON *CartsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(CartsAPIlocalVarJSON);
    cJSON_Delete(CartsAPIlocalVarJSON);
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
    free(localVarToReplace_cartId);
    free(localVarToReplace_itemId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
    if (localVarSingleItemJSON_item_cart_record_update_dto) {
        cJSON_Delete(localVarSingleItemJSON_item_cart_record_update_dto);
        localVarSingleItemJSON_item_cart_record_update_dto = NULL;
    }
    free(localVarBodyParameters);
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

// Update a wish list
//
// Update a wish list
//
empty_envelope_t*
CartsAPI_updateItemToWishList(apiClient_t *apiClient, char *cartId, char *wishListId, char *api_version, char *x_api_version, wish_list_update_dto_t *wish_list_update_dto)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CartService/Carts/{cartId}/WishLists/{wishListId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CartService/Carts/{cartId}/WishLists/{wishListId}");


    // Path Params
    long sizeOfPathParams_cartId = strlen(cartId)+3 + strlen(wishListId)+3 + strlen("{ cartId }");
    if(cartId == NULL) {
        goto end;
    }
    char* localVarToReplace_cartId = malloc(sizeOfPathParams_cartId);
    sprintf(localVarToReplace_cartId, "{%s}", "cartId");

    localVarPath = strReplace(localVarPath, localVarToReplace_cartId, cartId);
    if(cartId == NULL) {
        goto end;
    }
    char* localVarToReplace_cartId = malloc(sizeOfPathParams_cartId);
    sprintf(localVarToReplace_cartId, "{%s}", "cartId");

    localVarPath = strReplace(localVarPath, localVarToReplace_cartId, cartId);

    // Path Params
    long sizeOfPathParams_wishListId = strlen(cartId)+3 + strlen(wishListId)+3 + strlen("{ wishListId }");
    if(wishListId == NULL) {
        goto end;
    }
    char* localVarToReplace_wishListId = malloc(sizeOfPathParams_wishListId);
    sprintf(localVarToReplace_wishListId, "{%s}", "wishListId");

    localVarPath = strReplace(localVarPath, localVarToReplace_wishListId, wishListId);
    if(wishListId == NULL) {
        goto end;
    }
    char* localVarToReplace_wishListId = malloc(sizeOfPathParams_wishListId);
    sprintf(localVarToReplace_wishListId, "{%s}", "wishListId");

    localVarPath = strReplace(localVarPath, localVarToReplace_wishListId, wishListId);



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

    // Body Param
    cJSON *localVarSingleItemJSON_wish_list_update_dto = NULL;
    if (wish_list_update_dto != NULL)
    {
        //string
        localVarSingleItemJSON_wish_list_update_dto = wish_list_update_dto_convertToJSON(wish_list_update_dto);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_wish_list_update_dto);
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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    cJSON *CartsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    empty_envelope_t *elementToReturn = empty_envelope_parseFromJSON(CartsAPIlocalVarJSON);
    cJSON_Delete(CartsAPIlocalVarJSON);
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
    free(localVarToReplace_cartId);
    free(localVarToReplace_wishListId);
    if (keyHeader_x_api_version) {
        free(keyHeader_x_api_version);
        keyHeader_x_api_version = NULL;
    }
    if (valueHeader_x_api_version) {
        free(valueHeader_x_api_version);
        valueHeader_x_api_version = NULL;
    }
    free(keyPairHeader_x_api_version);
    if (localVarSingleItemJSON_wish_list_update_dto) {
        cJSON_Delete(localVarSingleItemJSON_wish_list_update_dto);
        localVarSingleItemJSON_wish_list_update_dto = NULL;
    }
    free(localVarBodyParameters);
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

// Assesses if a WishList exists
//
// Assesses if a WishList exists
//
boolean_envelope_t*
CartsAPI_wishListExistsAsync(apiClient_t *apiClient, char *cartId, char *wishListId, char *api_version, char *x_api_version)
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/api/v2/CartService/Carts/{cartId}/WishLists/{wishListId}/Exists")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/api/v2/CartService/Carts/{cartId}/WishLists/{wishListId}/Exists");


    // Path Params
    long sizeOfPathParams_cartId = strlen(cartId)+3 + strlen(wishListId)+3 + strlen("{ cartId }");
    if(cartId == NULL) {
        goto end;
    }
    char* localVarToReplace_cartId = malloc(sizeOfPathParams_cartId);
    sprintf(localVarToReplace_cartId, "{%s}", "cartId");

    localVarPath = strReplace(localVarPath, localVarToReplace_cartId, cartId);
    if(cartId == NULL) {
        goto end;
    }
    char* localVarToReplace_cartId = malloc(sizeOfPathParams_cartId);
    sprintf(localVarToReplace_cartId, "{%s}", "cartId");

    localVarPath = strReplace(localVarPath, localVarToReplace_cartId, cartId);

    // Path Params
    long sizeOfPathParams_wishListId = strlen(cartId)+3 + strlen(wishListId)+3 + strlen("{ wishListId }");
    if(wishListId == NULL) {
        goto end;
    }
    char* localVarToReplace_wishListId = malloc(sizeOfPathParams_wishListId);
    sprintf(localVarToReplace_wishListId, "{%s}", "wishListId");

    localVarPath = strReplace(localVarPath, localVarToReplace_wishListId, wishListId);
    if(wishListId == NULL) {
        goto end;
    }
    char* localVarToReplace_wishListId = malloc(sizeOfPathParams_wishListId);
    sprintf(localVarToReplace_wishListId, "{%s}", "wishListId");

    localVarPath = strReplace(localVarPath, localVarToReplace_wishListId, wishListId);



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
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
    //}
    //nonprimitive not container
    cJSON *CartsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    boolean_envelope_t *elementToReturn = boolean_envelope_parseFromJSON(CartsAPIlocalVarJSON);
    cJSON_Delete(CartsAPIlocalVarJSON);
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
    free(localVarToReplace_cartId);
    free(localVarToReplace_wishListId);
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

