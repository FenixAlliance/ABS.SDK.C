#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "e_tag.h"



e_tag_t *e_tag_create(
    int is_well_formed,
    type_t *entity_type,
    int is_any,
    int is_if_none_match
    ) {
    e_tag_t *e_tag_local_var = malloc(sizeof(e_tag_t));
    if (!e_tag_local_var) {
        return NULL;
    }
    e_tag_local_var->is_well_formed = is_well_formed;
    e_tag_local_var->entity_type = entity_type;
    e_tag_local_var->is_any = is_any;
    e_tag_local_var->is_if_none_match = is_if_none_match;

    return e_tag_local_var;
}


void e_tag_free(e_tag_t *e_tag) {
    if(NULL == e_tag){
        return ;
    }
    listEntry_t *listEntry;
    if (e_tag->entity_type) {
        type_free(e_tag->entity_type);
        e_tag->entity_type = NULL;
    }
    free(e_tag);
}

cJSON *e_tag_convertToJSON(e_tag_t *e_tag) {
    cJSON *item = cJSON_CreateObject();

    // e_tag->is_well_formed
    if(e_tag->is_well_formed) {
    if(cJSON_AddBoolToObject(item, "isWellFormed", e_tag->is_well_formed) == NULL) {
    goto fail; //Bool
    }
    }


    // e_tag->entity_type
    if(e_tag->entity_type) {
    cJSON *entity_type_local_JSON = type_convertToJSON(e_tag->entity_type);
    if(entity_type_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "entityType", entity_type_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // e_tag->is_any
    if(e_tag->is_any) {
    if(cJSON_AddBoolToObject(item, "isAny", e_tag->is_any) == NULL) {
    goto fail; //Bool
    }
    }


    // e_tag->is_if_none_match
    if(e_tag->is_if_none_match) {
    if(cJSON_AddBoolToObject(item, "isIfNoneMatch", e_tag->is_if_none_match) == NULL) {
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

e_tag_t *e_tag_parseFromJSON(cJSON *e_tagJSON){

    e_tag_t *e_tag_local_var = NULL;

    // define the local variable for e_tag->entity_type
    type_t *entity_type_local_nonprim = NULL;

    // e_tag->is_well_formed
    cJSON *is_well_formed = cJSON_GetObjectItemCaseSensitive(e_tagJSON, "isWellFormed");
    if (is_well_formed) { 
    if(!cJSON_IsBool(is_well_formed))
    {
    goto end; //Bool
    }
    }

    // e_tag->entity_type
    cJSON *entity_type = cJSON_GetObjectItemCaseSensitive(e_tagJSON, "entityType");
    if (entity_type) { 
    entity_type_local_nonprim = type_parseFromJSON(entity_type); //nonprimitive
    }

    // e_tag->is_any
    cJSON *is_any = cJSON_GetObjectItemCaseSensitive(e_tagJSON, "isAny");
    if (is_any) { 
    if(!cJSON_IsBool(is_any))
    {
    goto end; //Bool
    }
    }

    // e_tag->is_if_none_match
    cJSON *is_if_none_match = cJSON_GetObjectItemCaseSensitive(e_tagJSON, "isIfNoneMatch");
    if (is_if_none_match) { 
    if(!cJSON_IsBool(is_if_none_match))
    {
    goto end; //Bool
    }
    }


    e_tag_local_var = e_tag_create (
        is_well_formed ? is_well_formed->valueint : 0,
        entity_type ? entity_type_local_nonprim : NULL,
        is_any ? is_any->valueint : 0,
        is_if_none_match ? is_if_none_match->valueint : 0
        );

    return e_tag_local_var;
end:
    if (entity_type_local_nonprim) {
        type_free(entity_type_local_nonprim);
        entity_type_local_nonprim = NULL;
    }
    return NULL;

}
