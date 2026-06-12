/*
 * x509_certificate2.h
 *
 * 
 */

#ifndef _x509_certificate2_H_
#define _x509_certificate2_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct x509_certificate2_t x509_certificate2_t;

#include "asymmetric_algorithm.h"
#include "byte_read_only_memory.h"
#include "object.h"
#include "oid.h"
#include "public_key.h"
#include "x500_distinguished_name.h"
#include "x509_extension.h"



typedef struct x509_certificate2_t {
    object_t *handle; //object
    char *issuer; // string
    char *subject; // string
    struct byte_read_only_memory_t *serial_number_bytes; //model
    int archived; //boolean
    list_t *extensions; //nonprimitive container
    char *friendly_name; // string
    int has_private_key; //boolean
    struct asymmetric_algorithm_t *private_key; //model
    struct x500_distinguished_name_t *issuer_name; //model
    char *not_after; //date time
    char *not_before; //date time
    struct public_key_t *public_key; //model
    char *raw_data; //ByteArray
    struct byte_read_only_memory_t *raw_data_memory; //model
    char *serial_number; // string
    struct oid_t *signature_algorithm; //model
    struct x500_distinguished_name_t *subject_name; //model
    char *thumbprint; // string
    int version; //numeric

} x509_certificate2_t;

x509_certificate2_t *x509_certificate2_create(
    object_t *handle,
    char *issuer,
    char *subject,
    byte_read_only_memory_t *serial_number_bytes,
    int archived,
    list_t *extensions,
    char *friendly_name,
    int has_private_key,
    asymmetric_algorithm_t *private_key,
    x500_distinguished_name_t *issuer_name,
    char *not_after,
    char *not_before,
    public_key_t *public_key,
    char *raw_data,
    byte_read_only_memory_t *raw_data_memory,
    char *serial_number,
    oid_t *signature_algorithm,
    x500_distinguished_name_t *subject_name,
    char *thumbprint,
    int version
);

void x509_certificate2_free(x509_certificate2_t *x509_certificate2);

x509_certificate2_t *x509_certificate2_parseFromJSON(cJSON *x509_certificate2JSON);

cJSON *x509_certificate2_convertToJSON(x509_certificate2_t *x509_certificate2);

#endif /* _x509_certificate2_H_ */

