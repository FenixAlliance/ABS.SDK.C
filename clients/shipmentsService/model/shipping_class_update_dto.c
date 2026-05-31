#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "shipping_class_update_dto.h"



shipping_class_update_dto_t *shipping_class_update_dto_create(
    char *name,
    char *slug
    ) {
    shipping_class_update_dto_t *shipping_class_update_dto_local_var = malloc(sizeof(shipping_class_update_dto_t));
    if (!shipping_class_update_dto_local_var) {
        return NULL;
    }
    shipping_class_update_dto_local_var->name = name;
    shipping_class_update_dto_local_var->slug = slug;

    return shipping_class_update_dto_local_var;
}


void shipping_class_update_dto_free(shipping_class_update_dto_t *shipping_class_update_dto) {
    if(NULL == shipping_class_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (shipping_class_update_dto->name) {
        free(shipping_class_update_dto->name);
        shipping_class_update_dto->name = NULL;
    }
    if (shipping_class_update_dto->slug) {
        free(shipping_class_update_dto->slug);
        shipping_class_update_dto->slug = NULL;
    }
    free(shipping_class_update_dto);
}

cJSON *shipping_class_update_dto_convertToJSON(shipping_class_update_dto_t *shipping_class_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // shipping_class_update_dto->name
    if(shipping_class_update_dto->name) {
    if(cJSON_AddStringToObject(item, "name", shipping_class_update_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // shipping_class_update_dto->slug
    if(shipping_class_update_dto->slug) {
    if(cJSON_AddStringToObject(item, "slug", shipping_class_update_dto->slug) == NULL) {
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

shipping_class_update_dto_t *shipping_class_update_dto_parseFromJSON(cJSON *shipping_class_update_dtoJSON){

    shipping_class_update_dto_t *shipping_class_update_dto_local_var = NULL;

    // shipping_class_update_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(shipping_class_update_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // shipping_class_update_dto->slug
    cJSON *slug = cJSON_GetObjectItemCaseSensitive(shipping_class_update_dtoJSON, "slug");
    if (slug) { 
    if(!cJSON_IsString(slug) && !cJSON_IsNull(slug))
    {
    goto end; //String
    }
    }


    shipping_class_update_dto_local_var = shipping_class_update_dto_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        slug && !cJSON_IsNull(slug) ? strdup(slug->valuestring) : NULL
        );

    return shipping_class_update_dto_local_var;
end:
    return NULL;

}
