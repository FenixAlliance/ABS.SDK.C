/*
 * blob_envelope.h
 *
 * 
 */

#ifndef _blob_envelope_H_
#define _blob_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct blob_envelope_t blob_envelope_t;

#include "blob.h"



typedef struct blob_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct blob_t *result; //model

} blob_envelope_t;

blob_envelope_t *blob_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    blob_t *result
);

void blob_envelope_free(blob_envelope_t *blob_envelope);

blob_envelope_t *blob_envelope_parseFromJSON(cJSON *blob_envelopeJSON);

cJSON *blob_envelope_convertToJSON(blob_envelope_t *blob_envelope);

#endif /* _blob_envelope_H_ */

