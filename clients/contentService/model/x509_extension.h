/*
 * x509_extension.h
 *
 * 
 */

#ifndef _x509_extension_H_
#define _x509_extension_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct x509_extension_t x509_extension_t;

#include "oid.h"



typedef struct x509_extension_t {
    struct oid_t *oid; //model
    char *raw_data; //ByteArray
    int critical; //boolean

} x509_extension_t;

x509_extension_t *x509_extension_create(
    oid_t *oid,
    char *raw_data,
    int critical
);

void x509_extension_free(x509_extension_t *x509_extension);

x509_extension_t *x509_extension_parseFromJSON(cJSON *x509_extensionJSON);

cJSON *x509_extension_convertToJSON(x509_extension_t *x509_extension);

#endif /* _x509_extension_H_ */

