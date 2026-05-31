/*
 * asn_encoded_data.h
 *
 * 
 */

#ifndef _asn_encoded_data_H_
#define _asn_encoded_data_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct asn_encoded_data_t asn_encoded_data_t;

#include "oid.h"



typedef struct asn_encoded_data_t {
    struct oid_t *oid; //model
    char *raw_data; //ByteArray

} asn_encoded_data_t;

asn_encoded_data_t *asn_encoded_data_create(
    oid_t *oid,
    char *raw_data
);

void asn_encoded_data_free(asn_encoded_data_t *asn_encoded_data);

asn_encoded_data_t *asn_encoded_data_parseFromJSON(cJSON *asn_encoded_dataJSON);

cJSON *asn_encoded_data_convertToJSON(asn_encoded_data_t *asn_encoded_data);

#endif /* _asn_encoded_data_H_ */

