/*
 * pipe_writer.h
 *
 * 
 */

#ifndef _pipe_writer_H_
#define _pipe_writer_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct pipe_writer_t pipe_writer_t;




typedef struct pipe_writer_t {
    int can_get_unflushed_bytes; //boolean
    long unflushed_bytes; //numeric

} pipe_writer_t;

pipe_writer_t *pipe_writer_create(
    int can_get_unflushed_bytes,
    long unflushed_bytes
);

void pipe_writer_free(pipe_writer_t *pipe_writer);

pipe_writer_t *pipe_writer_parseFromJSON(cJSON *pipe_writerJSON);

cJSON *pipe_writer_convertToJSON(pipe_writer_t *pipe_writer);

#endif /* _pipe_writer_H_ */

