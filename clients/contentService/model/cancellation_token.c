#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cancellation_token.h"



cancellation_token_t *cancellation_token_create(
    int is_cancellation_requested,
    int can_be_canceled,
    wait_handle_t *wait_handle
    ) {
    cancellation_token_t *cancellation_token_local_var = malloc(sizeof(cancellation_token_t));
    if (!cancellation_token_local_var) {
        return NULL;
    }
    cancellation_token_local_var->is_cancellation_requested = is_cancellation_requested;
    cancellation_token_local_var->can_be_canceled = can_be_canceled;
    cancellation_token_local_var->wait_handle = wait_handle;

    return cancellation_token_local_var;
}


void cancellation_token_free(cancellation_token_t *cancellation_token) {
    if(NULL == cancellation_token){
        return ;
    }
    listEntry_t *listEntry;
    if (cancellation_token->wait_handle) {
        wait_handle_free(cancellation_token->wait_handle);
        cancellation_token->wait_handle = NULL;
    }
    free(cancellation_token);
}

cJSON *cancellation_token_convertToJSON(cancellation_token_t *cancellation_token) {
    cJSON *item = cJSON_CreateObject();

    // cancellation_token->is_cancellation_requested
    if(cancellation_token->is_cancellation_requested) {
    if(cJSON_AddBoolToObject(item, "isCancellationRequested", cancellation_token->is_cancellation_requested) == NULL) {
    goto fail; //Bool
    }
    }


    // cancellation_token->can_be_canceled
    if(cancellation_token->can_be_canceled) {
    if(cJSON_AddBoolToObject(item, "canBeCanceled", cancellation_token->can_be_canceled) == NULL) {
    goto fail; //Bool
    }
    }


    // cancellation_token->wait_handle
    if(cancellation_token->wait_handle) {
    cJSON *wait_handle_local_JSON = wait_handle_convertToJSON(cancellation_token->wait_handle);
    if(wait_handle_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "waitHandle", wait_handle_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

cancellation_token_t *cancellation_token_parseFromJSON(cJSON *cancellation_tokenJSON){

    cancellation_token_t *cancellation_token_local_var = NULL;

    // define the local variable for cancellation_token->wait_handle
    wait_handle_t *wait_handle_local_nonprim = NULL;

    // cancellation_token->is_cancellation_requested
    cJSON *is_cancellation_requested = cJSON_GetObjectItemCaseSensitive(cancellation_tokenJSON, "isCancellationRequested");
    if (is_cancellation_requested) { 
    if(!cJSON_IsBool(is_cancellation_requested))
    {
    goto end; //Bool
    }
    }

    // cancellation_token->can_be_canceled
    cJSON *can_be_canceled = cJSON_GetObjectItemCaseSensitive(cancellation_tokenJSON, "canBeCanceled");
    if (can_be_canceled) { 
    if(!cJSON_IsBool(can_be_canceled))
    {
    goto end; //Bool
    }
    }

    // cancellation_token->wait_handle
    cJSON *wait_handle = cJSON_GetObjectItemCaseSensitive(cancellation_tokenJSON, "waitHandle");
    if (wait_handle) { 
    wait_handle_local_nonprim = wait_handle_parseFromJSON(wait_handle); //nonprimitive
    }


    cancellation_token_local_var = cancellation_token_create (
        is_cancellation_requested ? is_cancellation_requested->valueint : 0,
        can_be_canceled ? can_be_canceled->valueint : 0,
        wait_handle ? wait_handle_local_nonprim : NULL
        );

    return cancellation_token_local_var;
end:
    if (wait_handle_local_nonprim) {
        wait_handle_free(wait_handle_local_nonprim);
        wait_handle_local_nonprim = NULL;
    }
    return NULL;

}
