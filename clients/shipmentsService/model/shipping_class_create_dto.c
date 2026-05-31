#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "shipping_class_create_dto.h"



shipping_class_create_dto_t *shipping_class_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *slug
    ) {
    shipping_class_create_dto_t *shipping_class_create_dto_local_var = malloc(sizeof(shipping_class_create_dto_t));
    if (!shipping_class_create_dto_local_var) {
        return NULL;
    }
    shipping_class_create_dto_local_var->id = id;
    shipping_class_create_dto_local_var->timestamp = timestamp;
    shipping_class_create_dto_local_var->name = name;
    shipping_class_create_dto_local_var->slug = slug;

    return shipping_class_create_dto_local_var;
}


void shipping_class_create_dto_free(shipping_class_create_dto_t *shipping_class_create_dto) {
    if(NULL == shipping_class_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (shipping_class_create_dto->id) {
        free(shipping_class_create_dto->id);
        shipping_class_create_dto->id = NULL;
    }
    if (shipping_class_create_dto->timestamp) {
        free(shipping_class_create_dto->timestamp);
        shipping_class_create_dto->timestamp = NULL;
    }
    if (shipping_class_create_dto->name) {
        free(shipping_class_create_dto->name);
        shipping_class_create_dto->name = NULL;
    }
    if (shipping_class_create_dto->slug) {
        free(shipping_class_create_dto->slug);
        shipping_class_create_dto->slug = NULL;
    }
    free(shipping_class_create_dto);
}

cJSON *shipping_class_create_dto_convertToJSON(shipping_class_create_dto_t *shipping_class_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // shipping_class_create_dto->id
    if(shipping_class_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", shipping_class_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // shipping_class_create_dto->timestamp
    if(shipping_class_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", shipping_class_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // shipping_class_create_dto->name
    if (!shipping_class_create_dto->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", shipping_class_create_dto->name) == NULL) {
    goto fail; //String
    }


    // shipping_class_create_dto->slug
    if(shipping_class_create_dto->slug) {
    if(cJSON_AddStringToObject(item, "slug", shipping_class_create_dto->slug) == NULL) {
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

shipping_class_create_dto_t *shipping_class_create_dto_parseFromJSON(cJSON *shipping_class_create_dtoJSON){

    shipping_class_create_dto_t *shipping_class_create_dto_local_var = NULL;

    // shipping_class_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(shipping_class_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // shipping_class_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(shipping_class_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // shipping_class_create_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(shipping_class_create_dtoJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // shipping_class_create_dto->slug
    cJSON *slug = cJSON_GetObjectItemCaseSensitive(shipping_class_create_dtoJSON, "slug");
    if (slug) { 
    if(!cJSON_IsString(slug) && !cJSON_IsNull(slug))
    {
    goto end; //String
    }
    }


    shipping_class_create_dto_local_var = shipping_class_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(name->valuestring),
        slug && !cJSON_IsNull(slug) ? strdup(slug->valuestring) : NULL
        );

    return shipping_class_create_dto_local_var;
end:
    return NULL;

}
