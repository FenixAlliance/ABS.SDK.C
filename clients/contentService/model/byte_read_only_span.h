/*
 * byte_read_only_span.h
 *
 * 
 */

#ifndef _byte_read_only_span_H_
#define _byte_read_only_span_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct byte_read_only_span_t byte_read_only_span_t;




typedef struct byte_read_only_span_t {
    int length; //numeric
    int is_empty; //boolean

} byte_read_only_span_t;

byte_read_only_span_t *byte_read_only_span_create(
    int length,
    int is_empty
);

void byte_read_only_span_free(byte_read_only_span_t *byte_read_only_span);

byte_read_only_span_t *byte_read_only_span_parseFromJSON(cJSON *byte_read_only_spanJSON);

cJSON *byte_read_only_span_convertToJSON(byte_read_only_span_t *byte_read_only_span);

#endif /* _byte_read_only_span_H_ */

