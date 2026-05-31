#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "byte_read_only_span.h"



byte_read_only_span_t *byte_read_only_span_create(
    int length,
    int is_empty
    ) {
    byte_read_only_span_t *byte_read_only_span_local_var = malloc(sizeof(byte_read_only_span_t));
    if (!byte_read_only_span_local_var) {
        return NULL;
    }
    byte_read_only_span_local_var->length = length;
    byte_read_only_span_local_var->is_empty = is_empty;

    return byte_read_only_span_local_var;
}


void byte_read_only_span_free(byte_read_only_span_t *byte_read_only_span) {
    if(NULL == byte_read_only_span){
        return ;
    }
    listEntry_t *listEntry;
    free(byte_read_only_span);
}

cJSON *byte_read_only_span_convertToJSON(byte_read_only_span_t *byte_read_only_span) {
    cJSON *item = cJSON_CreateObject();

    // byte_read_only_span->length
    if(byte_read_only_span->length) {
    if(cJSON_AddNumberToObject(item, "length", byte_read_only_span->length) == NULL) {
    goto fail; //Numeric
    }
    }


    // byte_read_only_span->is_empty
    if(byte_read_only_span->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", byte_read_only_span->is_empty) == NULL) {
    goto fail; //Bool
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

byte_read_only_span_t *byte_read_only_span_parseFromJSON(cJSON *byte_read_only_spanJSON){

    byte_read_only_span_t *byte_read_only_span_local_var = NULL;

    // byte_read_only_span->length
    cJSON *length = cJSON_GetObjectItemCaseSensitive(byte_read_only_spanJSON, "length");
    if (length) { 
    if(!cJSON_IsNumber(length))
    {
    goto end; //Numeric
    }
    }

    // byte_read_only_span->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(byte_read_only_spanJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }


    byte_read_only_span_local_var = byte_read_only_span_create (
        length ? length->valuedouble : 0,
        is_empty ? is_empty->valueint : 0
        );

    return byte_read_only_span_local_var;
end:
    return NULL;

}
