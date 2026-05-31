/*
 * cancellation_token.h
 *
 * 
 */

#ifndef _cancellation_token_H_
#define _cancellation_token_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cancellation_token_t cancellation_token_t;

#include "wait_handle.h"



typedef struct cancellation_token_t {
    int is_cancellation_requested; //boolean
    int can_be_canceled; //boolean
    struct wait_handle_t *wait_handle; //model

} cancellation_token_t;

cancellation_token_t *cancellation_token_create(
    int is_cancellation_requested,
    int can_be_canceled,
    wait_handle_t *wait_handle
);

void cancellation_token_free(cancellation_token_t *cancellation_token);

cancellation_token_t *cancellation_token_parseFromJSON(cJSON *cancellation_tokenJSON);

cJSON *cancellation_token_convertToJSON(cancellation_token_t *cancellation_token);

#endif /* _cancellation_token_H_ */

