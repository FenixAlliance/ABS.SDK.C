/*
 * e_tag.h
 *
 * 
 */

#ifndef _e_tag_H_
#define _e_tag_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct e_tag_t e_tag_t;

#include "type.h"



typedef struct e_tag_t {
    int is_well_formed; //boolean
    struct type_t *entity_type; //model
    int is_any; //boolean
    int is_if_none_match; //boolean

} e_tag_t;

e_tag_t *e_tag_create(
    int is_well_formed,
    type_t *entity_type,
    int is_any,
    int is_if_none_match
);

void e_tag_free(e_tag_t *e_tag);

e_tag_t *e_tag_parseFromJSON(cJSON *e_tagJSON);

cJSON *e_tag_convertToJSON(e_tag_t *e_tag);

#endif /* _e_tag_H_ */

