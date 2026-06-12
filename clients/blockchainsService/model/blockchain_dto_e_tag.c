#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "blockchain_dto_e_tag.h"



blockchain_dto_e_tag_t *blockchain_dto_e_tag_create(
    int is_well_formed,
    type_t *entity_type,
    int is_any,
    int is_if_none_match
    ) {
    blockchain_dto_e_tag_t *blockchain_dto_e_tag_local_var = malloc(sizeof(blockchain_dto_e_tag_t));
    if (!blockchain_dto_e_tag_local_var) {
        return NULL;
    }
    blockchain_dto_e_tag_local_var->is_well_formed = is_well_formed;
    blockchain_dto_e_tag_local_var->entity_type = entity_type;
    blockchain_dto_e_tag_local_var->is_any = is_any;
    blockchain_dto_e_tag_local_var->is_if_none_match = is_if_none_match;

    return blockchain_dto_e_tag_local_var;
}


void blockchain_dto_e_tag_free(blockchain_dto_e_tag_t *blockchain_dto_e_tag) {
    if(NULL == blockchain_dto_e_tag){
        return ;
    }
    listEntry_t *listEntry;
    if (blockchain_dto_e_tag->entity_type) {
        type_free(blockchain_dto_e_tag->entity_type);
        blockchain_dto_e_tag->entity_type = NULL;
    }
    free(blockchain_dto_e_tag);
}

cJSON *blockchain_dto_e_tag_convertToJSON(blockchain_dto_e_tag_t *blockchain_dto_e_tag) {
    cJSON *item = cJSON_CreateObject();

    // blockchain_dto_e_tag->is_well_formed
    if(blockchain_dto_e_tag->is_well_formed) {
    if(cJSON_AddBoolToObject(item, "isWellFormed", blockchain_dto_e_tag->is_well_formed) == NULL) {
    goto fail; //Bool
    }
    }


    // blockchain_dto_e_tag->entity_type
    if(blockchain_dto_e_tag->entity_type) {
    cJSON *entity_type_local_JSON = type_convertToJSON(blockchain_dto_e_tag->entity_type);
    if(entity_type_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "entityType", entity_type_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // blockchain_dto_e_tag->is_any
    if(blockchain_dto_e_tag->is_any) {
    if(cJSON_AddBoolToObject(item, "isAny", blockchain_dto_e_tag->is_any) == NULL) {
    goto fail; //Bool
    }
    }


    // blockchain_dto_e_tag->is_if_none_match
    if(blockchain_dto_e_tag->is_if_none_match) {
    if(cJSON_AddBoolToObject(item, "isIfNoneMatch", blockchain_dto_e_tag->is_if_none_match) == NULL) {
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

blockchain_dto_e_tag_t *blockchain_dto_e_tag_parseFromJSON(cJSON *blockchain_dto_e_tagJSON){

    blockchain_dto_e_tag_t *blockchain_dto_e_tag_local_var = NULL;

    // define the local variable for blockchain_dto_e_tag->entity_type
    type_t *entity_type_local_nonprim = NULL;

    // blockchain_dto_e_tag->is_well_formed
    cJSON *is_well_formed = cJSON_GetObjectItemCaseSensitive(blockchain_dto_e_tagJSON, "isWellFormed");
    if (is_well_formed) { 
    if(!cJSON_IsBool(is_well_formed))
    {
    goto end; //Bool
    }
    }

    // blockchain_dto_e_tag->entity_type
    cJSON *entity_type = cJSON_GetObjectItemCaseSensitive(blockchain_dto_e_tagJSON, "entityType");
    if (entity_type) { 
    entity_type_local_nonprim = type_parseFromJSON(entity_type); //nonprimitive
    }

    // blockchain_dto_e_tag->is_any
    cJSON *is_any = cJSON_GetObjectItemCaseSensitive(blockchain_dto_e_tagJSON, "isAny");
    if (is_any) { 
    if(!cJSON_IsBool(is_any))
    {
    goto end; //Bool
    }
    }

    // blockchain_dto_e_tag->is_if_none_match
    cJSON *is_if_none_match = cJSON_GetObjectItemCaseSensitive(blockchain_dto_e_tagJSON, "isIfNoneMatch");
    if (is_if_none_match) { 
    if(!cJSON_IsBool(is_if_none_match))
    {
    goto end; //Bool
    }
    }


    blockchain_dto_e_tag_local_var = blockchain_dto_e_tag_create (
        is_well_formed ? is_well_formed->valueint : 0,
        entity_type ? entity_type_local_nonprim : NULL,
        is_any ? is_any->valueint : 0,
        is_if_none_match ? is_if_none_match->valueint : 0
        );

    return blockchain_dto_e_tag_local_var;
end:
    if (entity_type_local_nonprim) {
        type_free(entity_type_local_nonprim);
        entity_type_local_nonprim = NULL;
    }
    return NULL;

}
