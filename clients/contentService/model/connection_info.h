/*
 * connection_info.h
 *
 * 
 */

#ifndef _connection_info_H_
#define _connection_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct connection_info_t connection_info_t;

#include "ip_address.h"
#include "x509_certificate2.h"



typedef struct connection_info_t {
    char *id; // string
    struct ip_address_t *remote_ip_address; //model
    int remote_port; //numeric
    struct ip_address_t *local_ip_address; //model
    int local_port; //numeric
    struct x509_certificate2_t *client_certificate; //model

} connection_info_t;

connection_info_t *connection_info_create(
    char *id,
    ip_address_t *remote_ip_address,
    int remote_port,
    ip_address_t *local_ip_address,
    int local_port,
    x509_certificate2_t *client_certificate
);

void connection_info_free(connection_info_t *connection_info);

connection_info_t *connection_info_parseFromJSON(cJSON *connection_infoJSON);

cJSON *connection_info_convertToJSON(connection_info_t *connection_info);

#endif /* _connection_info_H_ */

