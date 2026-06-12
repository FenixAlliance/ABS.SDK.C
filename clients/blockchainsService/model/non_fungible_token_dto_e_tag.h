/*
 * non_fungible_token_dto_e_tag.h
 *
 * 
 */

#ifndef _non_fungible_token_dto_e_tag_H_
#define _non_fungible_token_dto_e_tag_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct non_fungible_token_dto_e_tag_t non_fungible_token_dto_e_tag_t;

#include "type.h"



typedef struct non_fungible_token_dto_e_tag_t {
    int is_well_formed; //boolean
    struct type_t *entity_type; //model
    int is_any; //boolean
    int is_if_none_match; //boolean

} non_fungible_token_dto_e_tag_t;

non_fungible_token_dto_e_tag_t *non_fungible_token_dto_e_tag_create(
    int is_well_formed,
    type_t *entity_type,
    int is_any,
    int is_if_none_match
);

void non_fungible_token_dto_e_tag_free(non_fungible_token_dto_e_tag_t *non_fungible_token_dto_e_tag);

non_fungible_token_dto_e_tag_t *non_fungible_token_dto_e_tag_parseFromJSON(cJSON *non_fungible_token_dto_e_tagJSON);

cJSON *non_fungible_token_dto_e_tag_convertToJSON(non_fungible_token_dto_e_tag_t *non_fungible_token_dto_e_tag);

#endif /* _non_fungible_token_dto_e_tag_H_ */

