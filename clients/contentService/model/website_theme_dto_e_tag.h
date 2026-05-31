/*
 * website_theme_dto_e_tag.h
 *
 * 
 */

#ifndef _website_theme_dto_e_tag_H_
#define _website_theme_dto_e_tag_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct website_theme_dto_e_tag_t website_theme_dto_e_tag_t;

#include "type.h"



typedef struct website_theme_dto_e_tag_t {
    int is_well_formed; //boolean
    struct type_t *entity_type; //model
    int is_any; //boolean
    int is_if_none_match; //boolean

} website_theme_dto_e_tag_t;

website_theme_dto_e_tag_t *website_theme_dto_e_tag_create(
    int is_well_formed,
    type_t *entity_type,
    int is_any,
    int is_if_none_match
);

void website_theme_dto_e_tag_free(website_theme_dto_e_tag_t *website_theme_dto_e_tag);

website_theme_dto_e_tag_t *website_theme_dto_e_tag_parseFromJSON(cJSON *website_theme_dto_e_tagJSON);

cJSON *website_theme_dto_e_tag_convertToJSON(website_theme_dto_e_tag_t *website_theme_dto_e_tag);

#endif /* _website_theme_dto_e_tag_H_ */

