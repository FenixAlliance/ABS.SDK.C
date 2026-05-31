/*
 * web_socket_manager.h
 *
 * 
 */

#ifndef _web_socket_manager_H_
#define _web_socket_manager_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct web_socket_manager_t web_socket_manager_t;




typedef struct web_socket_manager_t {
    int is_web_socket_request; //boolean
    list_t *web_socket_requested_protocols; //primitive container

} web_socket_manager_t;

web_socket_manager_t *web_socket_manager_create(
    int is_web_socket_request,
    list_t *web_socket_requested_protocols
);

void web_socket_manager_free(web_socket_manager_t *web_socket_manager);

web_socket_manager_t *web_socket_manager_parseFromJSON(cJSON *web_socket_managerJSON);

cJSON *web_socket_manager_convertToJSON(web_socket_manager_t *web_socket_manager);

#endif /* _web_socket_manager_H_ */

