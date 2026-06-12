#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "byte_read_only_memory.h"



byte_read_only_memory_t *byte_read_only_memory_create(
    int length,
    int is_empty,
    byte_read_only_span_t *span
    ) {
    byte_read_only_memory_t *byte_read_only_memory_local_var = malloc(sizeof(byte_read_only_memory_t));
    if (!byte_read_only_memory_local_var) {
        return NULL;
    }
    byte_read_only_memory_local_var->length = length;
    byte_read_only_memory_local_var->is_empty = is_empty;
    byte_read_only_memory_local_var->span = span;

    return byte_read_only_memory_local_var;
}


void byte_read_only_memory_free(byte_read_only_memory_t *byte_read_only_memory) {
    if(NULL == byte_read_only_memory){
        return ;
    }
    listEntry_t *listEntry;
    if (byte_read_only_memory->span) {
        byte_read_only_span_free(byte_read_only_memory->span);
        byte_read_only_memory->span = NULL;
    }
    free(byte_read_only_memory);
}

cJSON *byte_read_only_memory_convertToJSON(byte_read_only_memory_t *byte_read_only_memory) {
    cJSON *item = cJSON_CreateObject();

    // byte_read_only_memory->length
    if(byte_read_only_memory->length) {
    if(cJSON_AddNumberToObject(item, "length", byte_read_only_memory->length) == NULL) {
    goto fail; //Numeric
    }
    }


    // byte_read_only_memory->is_empty
    if(byte_read_only_memory->is_empty) {
    if(cJSON_AddBoolToObject(item, "isEmpty", byte_read_only_memory->is_empty) == NULL) {
    goto fail; //Bool
    }
    }


    // byte_read_only_memory->span
    if(byte_read_only_memory->span) {
    cJSON *span_local_JSON = byte_read_only_span_convertToJSON(byte_read_only_memory->span);
    if(span_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "span", span_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

byte_read_only_memory_t *byte_read_only_memory_parseFromJSON(cJSON *byte_read_only_memoryJSON){

    byte_read_only_memory_t *byte_read_only_memory_local_var = NULL;

    // define the local variable for byte_read_only_memory->span
    byte_read_only_span_t *span_local_nonprim = NULL;

    // byte_read_only_memory->length
    cJSON *length = cJSON_GetObjectItemCaseSensitive(byte_read_only_memoryJSON, "length");
    if (length) { 
    if(!cJSON_IsNumber(length))
    {
    goto end; //Numeric
    }
    }

    // byte_read_only_memory->is_empty
    cJSON *is_empty = cJSON_GetObjectItemCaseSensitive(byte_read_only_memoryJSON, "isEmpty");
    if (is_empty) { 
    if(!cJSON_IsBool(is_empty))
    {
    goto end; //Bool
    }
    }

    // byte_read_only_memory->span
    cJSON *span = cJSON_GetObjectItemCaseSensitive(byte_read_only_memoryJSON, "span");
    if (span) { 
    span_local_nonprim = byte_read_only_span_parseFromJSON(span); //nonprimitive
    }


    byte_read_only_memory_local_var = byte_read_only_memory_create (
        length ? length->valuedouble : 0,
        is_empty ? is_empty->valueint : 0,
        span ? span_local_nonprim : NULL
        );

    return byte_read_only_memory_local_var;
end:
    if (span_local_nonprim) {
        byte_read_only_span_free(span_local_nonprim);
        span_local_nonprim = NULL;
    }
    return NULL;

}
