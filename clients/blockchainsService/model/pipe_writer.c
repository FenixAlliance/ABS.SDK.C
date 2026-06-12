#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "pipe_writer.h"



pipe_writer_t *pipe_writer_create(
    int can_get_unflushed_bytes,
    long unflushed_bytes
    ) {
    pipe_writer_t *pipe_writer_local_var = malloc(sizeof(pipe_writer_t));
    if (!pipe_writer_local_var) {
        return NULL;
    }
    pipe_writer_local_var->can_get_unflushed_bytes = can_get_unflushed_bytes;
    pipe_writer_local_var->unflushed_bytes = unflushed_bytes;

    return pipe_writer_local_var;
}


void pipe_writer_free(pipe_writer_t *pipe_writer) {
    if(NULL == pipe_writer){
        return ;
    }
    listEntry_t *listEntry;
    free(pipe_writer);
}

cJSON *pipe_writer_convertToJSON(pipe_writer_t *pipe_writer) {
    cJSON *item = cJSON_CreateObject();

    // pipe_writer->can_get_unflushed_bytes
    if(pipe_writer->can_get_unflushed_bytes) {
    if(cJSON_AddBoolToObject(item, "canGetUnflushedBytes", pipe_writer->can_get_unflushed_bytes) == NULL) {
    goto fail; //Bool
    }
    }


    // pipe_writer->unflushed_bytes
    if(pipe_writer->unflushed_bytes) {
    if(cJSON_AddNumberToObject(item, "unflushedBytes", pipe_writer->unflushed_bytes) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

pipe_writer_t *pipe_writer_parseFromJSON(cJSON *pipe_writerJSON){

    pipe_writer_t *pipe_writer_local_var = NULL;

    // pipe_writer->can_get_unflushed_bytes
    cJSON *can_get_unflushed_bytes = cJSON_GetObjectItemCaseSensitive(pipe_writerJSON, "canGetUnflushedBytes");
    if (can_get_unflushed_bytes) { 
    if(!cJSON_IsBool(can_get_unflushed_bytes))
    {
    goto end; //Bool
    }
    }

    // pipe_writer->unflushed_bytes
    cJSON *unflushed_bytes = cJSON_GetObjectItemCaseSensitive(pipe_writerJSON, "unflushedBytes");
    if (unflushed_bytes) { 
    if(!cJSON_IsNumber(unflushed_bytes))
    {
    goto end; //Numeric
    }
    }


    pipe_writer_local_var = pipe_writer_create (
        can_get_unflushed_bytes ? can_get_unflushed_bytes->valueint : 0,
        unflushed_bytes ? unflushed_bytes->valuedouble : 0
        );

    return pipe_writer_local_var;
end:
    return NULL;

}
