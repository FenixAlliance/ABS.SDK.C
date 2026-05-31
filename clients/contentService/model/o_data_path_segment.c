#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "o_data_path_segment.h"



o_data_path_segment_t *o_data_path_segment_create(
    i_edm_type_t *edm_type,
    char *identifier
    ) {
    o_data_path_segment_t *o_data_path_segment_local_var = malloc(sizeof(o_data_path_segment_t));
    if (!o_data_path_segment_local_var) {
        return NULL;
    }
    o_data_path_segment_local_var->edm_type = edm_type;
    o_data_path_segment_local_var->identifier = identifier;

    return o_data_path_segment_local_var;
}


void o_data_path_segment_free(o_data_path_segment_t *o_data_path_segment) {
    if(NULL == o_data_path_segment){
        return ;
    }
    listEntry_t *listEntry;
    if (o_data_path_segment->edm_type) {
        i_edm_type_free(o_data_path_segment->edm_type);
        o_data_path_segment->edm_type = NULL;
    }
    if (o_data_path_segment->identifier) {
        free(o_data_path_segment->identifier);
        o_data_path_segment->identifier = NULL;
    }
    free(o_data_path_segment);
}

cJSON *o_data_path_segment_convertToJSON(o_data_path_segment_t *o_data_path_segment) {
    cJSON *item = cJSON_CreateObject();

    // o_data_path_segment->edm_type
    if(o_data_path_segment->edm_type) {
    cJSON *edm_type_local_JSON = i_edm_type_convertToJSON(o_data_path_segment->edm_type);
    if(edm_type_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "edmType", edm_type_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // o_data_path_segment->identifier
    if(o_data_path_segment->identifier) {
    if(cJSON_AddStringToObject(item, "identifier", o_data_path_segment->identifier) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

o_data_path_segment_t *o_data_path_segment_parseFromJSON(cJSON *o_data_path_segmentJSON){

    o_data_path_segment_t *o_data_path_segment_local_var = NULL;

    // define the local variable for o_data_path_segment->edm_type
    i_edm_type_t *edm_type_local_nonprim = NULL;

    // o_data_path_segment->edm_type
    cJSON *edm_type = cJSON_GetObjectItemCaseSensitive(o_data_path_segmentJSON, "edmType");
    if (edm_type) { 
    edm_type_local_nonprim = i_edm_type_parseFromJSON(edm_type); //nonprimitive
    }

    // o_data_path_segment->identifier
    cJSON *identifier = cJSON_GetObjectItemCaseSensitive(o_data_path_segmentJSON, "identifier");
    if (identifier) { 
    if(!cJSON_IsString(identifier) && !cJSON_IsNull(identifier))
    {
    goto end; //String
    }
    }


    o_data_path_segment_local_var = o_data_path_segment_create (
        edm_type ? edm_type_local_nonprim : NULL,
        identifier && !cJSON_IsNull(identifier) ? strdup(identifier->valuestring) : NULL
        );

    return o_data_path_segment_local_var;
end:
    if (edm_type_local_nonprim) {
        i_edm_type_free(edm_type_local_nonprim);
        edm_type_local_nonprim = NULL;
    }
    return NULL;

}
