/*
 * o_data_path_segment.h
 *
 * 
 */

#ifndef _o_data_path_segment_H_
#define _o_data_path_segment_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct o_data_path_segment_t o_data_path_segment_t;

#include "i_edm_type.h"



typedef struct o_data_path_segment_t {
    struct i_edm_type_t *edm_type; //model
    char *identifier; // string

} o_data_path_segment_t;

o_data_path_segment_t *o_data_path_segment_create(
    i_edm_type_t *edm_type,
    char *identifier
);

void o_data_path_segment_free(o_data_path_segment_t *o_data_path_segment);

o_data_path_segment_t *o_data_path_segment_parseFromJSON(cJSON *o_data_path_segmentJSON);

cJSON *o_data_path_segment_convertToJSON(o_data_path_segment_t *o_data_path_segment);

#endif /* _o_data_path_segment_H_ */

