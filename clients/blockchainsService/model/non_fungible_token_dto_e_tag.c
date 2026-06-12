#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "non_fungible_token_dto_e_tag.h"



non_fungible_token_dto_e_tag_t *non_fungible_token_dto_e_tag_create(
    int is_well_formed,
    type_t *entity_type,
    int is_any,
    int is_if_none_match
    ) {
    non_fungible_token_dto_e_tag_t *non_fungible_token_dto_e_tag_local_var = malloc(sizeof(non_fungible_token_dto_e_tag_t));
    if (!non_fungible_token_dto_e_tag_local_var) {
        return NULL;
    }
    non_fungible_token_dto_e_tag_local_var->is_well_formed = is_well_formed;
    non_fungible_token_dto_e_tag_local_var->entity_type = entity_type;
    non_fungible_token_dto_e_tag_local_var->is_any = is_any;
    non_fungible_token_dto_e_tag_local_var->is_if_none_match = is_if_none_match;

    return non_fungible_token_dto_e_tag_local_var;
}


void non_fungible_token_dto_e_tag_free(non_fungible_token_dto_e_tag_t *non_fungible_token_dto_e_tag) {
    if(NULL == non_fungible_token_dto_e_tag){
        return ;
    }
    listEntry_t *listEntry;
    if (non_fungible_token_dto_e_tag->entity_type) {
        type_free(non_fungible_token_dto_e_tag->entity_type);
        non_fungible_token_dto_e_tag->entity_type = NULL;
    }
    free(non_fungible_token_dto_e_tag);
}

cJSON *non_fungible_token_dto_e_tag_convertToJSON(non_fungible_token_dto_e_tag_t *non_fungible_token_dto_e_tag) {
    cJSON *item = cJSON_CreateObject();

    // non_fungible_token_dto_e_tag->is_well_formed
    if(non_fungible_token_dto_e_tag->is_well_formed) {
    if(cJSON_AddBoolToObject(item, "isWellFormed", non_fungible_token_dto_e_tag->is_well_formed) == NULL) {
    goto fail; //Bool
    }
    }


    // non_fungible_token_dto_e_tag->entity_type
    if(non_fungible_token_dto_e_tag->entity_type) {
    cJSON *entity_type_local_JSON = type_convertToJSON(non_fungible_token_dto_e_tag->entity_type);
    if(entity_type_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "entityType", entity_type_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // non_fungible_token_dto_e_tag->is_any
    if(non_fungible_token_dto_e_tag->is_any) {
    if(cJSON_AddBoolToObject(item, "isAny", non_fungible_token_dto_e_tag->is_any) == NULL) {
    goto fail; //Bool
    }
    }


    // non_fungible_token_dto_e_tag->is_if_none_match
    if(non_fungible_token_dto_e_tag->is_if_none_match) {
    if(cJSON_AddBoolToObject(item, "isIfNoneMatch", non_fungible_token_dto_e_tag->is_if_none_match) == NULL) {
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

non_fungible_token_dto_e_tag_t *non_fungible_token_dto_e_tag_parseFromJSON(cJSON *non_fungible_token_dto_e_tagJSON){

    non_fungible_token_dto_e_tag_t *non_fungible_token_dto_e_tag_local_var = NULL;

    // define the local variable for non_fungible_token_dto_e_tag->entity_type
    type_t *entity_type_local_nonprim = NULL;

    // non_fungible_token_dto_e_tag->is_well_formed
    cJSON *is_well_formed = cJSON_GetObjectItemCaseSensitive(non_fungible_token_dto_e_tagJSON, "isWellFormed");
    if (is_well_formed) { 
    if(!cJSON_IsBool(is_well_formed))
    {
    goto end; //Bool
    }
    }

    // non_fungible_token_dto_e_tag->entity_type
    cJSON *entity_type = cJSON_GetObjectItemCaseSensitive(non_fungible_token_dto_e_tagJSON, "entityType");
    if (entity_type) { 
    entity_type_local_nonprim = type_parseFromJSON(entity_type); //nonprimitive
    }

    // non_fungible_token_dto_e_tag->is_any
    cJSON *is_any = cJSON_GetObjectItemCaseSensitive(non_fungible_token_dto_e_tagJSON, "isAny");
    if (is_any) { 
    if(!cJSON_IsBool(is_any))
    {
    goto end; //Bool
    }
    }

    // non_fungible_token_dto_e_tag->is_if_none_match
    cJSON *is_if_none_match = cJSON_GetObjectItemCaseSensitive(non_fungible_token_dto_e_tagJSON, "isIfNoneMatch");
    if (is_if_none_match) { 
    if(!cJSON_IsBool(is_if_none_match))
    {
    goto end; //Bool
    }
    }


    non_fungible_token_dto_e_tag_local_var = non_fungible_token_dto_e_tag_create (
        is_well_formed ? is_well_formed->valueint : 0,
        entity_type ? entity_type_local_nonprim : NULL,
        is_any ? is_any->valueint : 0,
        is_if_none_match ? is_if_none_match->valueint : 0
        );

    return non_fungible_token_dto_e_tag_local_var;
end:
    if (entity_type_local_nonprim) {
        type_free(entity_type_local_nonprim);
        entity_type_local_nonprim = NULL;
    }
    return NULL;

}
