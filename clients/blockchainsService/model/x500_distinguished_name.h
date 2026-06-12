/*
 * x500_distinguished_name.h
 *
 * 
 */

#ifndef _x500_distinguished_name_H_
#define _x500_distinguished_name_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct x500_distinguished_name_t x500_distinguished_name_t;

#include "oid.h"



typedef struct x500_distinguished_name_t {
    struct oid_t *oid; //model
    char *raw_data; //ByteArray
    char *name; // string

} x500_distinguished_name_t;

x500_distinguished_name_t *x500_distinguished_name_create(
    oid_t *oid,
    char *raw_data,
    char *name
);

void x500_distinguished_name_free(x500_distinguished_name_t *x500_distinguished_name);

x500_distinguished_name_t *x500_distinguished_name_parseFromJSON(cJSON *x500_distinguished_nameJSON);

cJSON *x500_distinguished_name_convertToJSON(x500_distinguished_name_t *x500_distinguished_name);

#endif /* _x500_distinguished_name_H_ */

