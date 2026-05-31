/*
 * byte_read_only_memory.h
 *
 * 
 */

#ifndef _byte_read_only_memory_H_
#define _byte_read_only_memory_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct byte_read_only_memory_t byte_read_only_memory_t;

#include "byte_read_only_span.h"



typedef struct byte_read_only_memory_t {
    int length; //numeric
    int is_empty; //boolean
    struct byte_read_only_span_t *span; //model

} byte_read_only_memory_t;

byte_read_only_memory_t *byte_read_only_memory_create(
    int length,
    int is_empty,
    byte_read_only_span_t *span
);

void byte_read_only_memory_free(byte_read_only_memory_t *byte_read_only_memory);

byte_read_only_memory_t *byte_read_only_memory_parseFromJSON(cJSON *byte_read_only_memoryJSON);

cJSON *byte_read_only_memory_convertToJSON(byte_read_only_memory_t *byte_read_only_memory);

#endif /* _byte_read_only_memory_H_ */

