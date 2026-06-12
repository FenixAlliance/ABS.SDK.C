/*
 * blockchain_block_dto_e_tag.h
 *
 * 
 */

#ifndef _blockchain_block_dto_e_tag_H_
#define _blockchain_block_dto_e_tag_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct blockchain_block_dto_e_tag_t blockchain_block_dto_e_tag_t;

#include "type.h"



typedef struct blockchain_block_dto_e_tag_t {
    int is_well_formed; //boolean
    struct type_t *entity_type; //model
    int is_any; //boolean
    int is_if_none_match; //boolean

} blockchain_block_dto_e_tag_t;

blockchain_block_dto_e_tag_t *blockchain_block_dto_e_tag_create(
    int is_well_formed,
    type_t *entity_type,
    int is_any,
    int is_if_none_match
);

void blockchain_block_dto_e_tag_free(blockchain_block_dto_e_tag_t *blockchain_block_dto_e_tag);

blockchain_block_dto_e_tag_t *blockchain_block_dto_e_tag_parseFromJSON(cJSON *blockchain_block_dto_e_tagJSON);

cJSON *blockchain_block_dto_e_tag_convertToJSON(blockchain_block_dto_e_tag_t *blockchain_block_dto_e_tag);

#endif /* _blockchain_block_dto_e_tag_H_ */

