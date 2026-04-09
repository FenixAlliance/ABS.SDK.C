/*
 * new_wish_list_request.h
 *
 * 
 */

#ifndef _new_wish_list_request_H_
#define _new_wish_list_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct new_wish_list_request_t new_wish_list_request_t;




typedef struct new_wish_list_request_t {
    char *title; // string
    char *description; // string
    char *cart_id; // string
    int _public; //boolean

} new_wish_list_request_t;

new_wish_list_request_t *new_wish_list_request_create(
    char *title,
    char *description,
    char *cart_id,
    int _public
);

void new_wish_list_request_free(new_wish_list_request_t *new_wish_list_request);

new_wish_list_request_t *new_wish_list_request_parseFromJSON(cJSON *new_wish_list_requestJSON);

cJSON *new_wish_list_request_convertToJSON(new_wish_list_request_t *new_wish_list_request);

#endif /* _new_wish_list_request_H_ */

