#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "item_family_dto.h"



item_family_dto_t *item_family_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *code,
    char *description,
    char *business_id
    ) {
    item_family_dto_t *item_family_dto_local_var = malloc(sizeof(item_family_dto_t));
    if (!item_family_dto_local_var) {
        return NULL;
    }
    item_family_dto_local_var->id = id;
    item_family_dto_local_var->timestamp = timestamp;
    item_family_dto_local_var->name = name;
    item_family_dto_local_var->code = code;
    item_family_dto_local_var->description = description;
    item_family_dto_local_var->business_id = business_id;

    return item_family_dto_local_var;
}


void item_family_dto_free(item_family_dto_t *item_family_dto) {
    if(NULL == item_family_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (item_family_dto->id) {
        free(item_family_dto->id);
        item_family_dto->id = NULL;
    }
    if (item_family_dto->timestamp) {
        free(item_family_dto->timestamp);
        item_family_dto->timestamp = NULL;
    }
    if (item_family_dto->name) {
        free(item_family_dto->name);
        item_family_dto->name = NULL;
    }
    if (item_family_dto->code) {
        free(item_family_dto->code);
        item_family_dto->code = NULL;
    }
    if (item_family_dto->description) {
        free(item_family_dto->description);
        item_family_dto->description = NULL;
    }
    if (item_family_dto->business_id) {
        free(item_family_dto->business_id);
        item_family_dto->business_id = NULL;
    }
    free(item_family_dto);
}

cJSON *item_family_dto_convertToJSON(item_family_dto_t *item_family_dto) {
    cJSON *item = cJSON_CreateObject();

    // item_family_dto->id
    if(item_family_dto->id) {
    if(cJSON_AddStringToObject(item, "id", item_family_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // item_family_dto->timestamp
    if(item_family_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", item_family_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // item_family_dto->name
    if(item_family_dto->name) {
    if(cJSON_AddStringToObject(item, "name", item_family_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // item_family_dto->code
    if(item_family_dto->code) {
    if(cJSON_AddStringToObject(item, "code", item_family_dto->code) == NULL) {
    goto fail; //String
    }
    }


    // item_family_dto->description
    if(item_family_dto->description) {
    if(cJSON_AddStringToObject(item, "description", item_family_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // item_family_dto->business_id
    if(item_family_dto->business_id) {
    if(cJSON_AddStringToObject(item, "businessID", item_family_dto->business_id) == NULL) {
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

item_family_dto_t *item_family_dto_parseFromJSON(cJSON *item_family_dtoJSON){

    item_family_dto_t *item_family_dto_local_var = NULL;

    // item_family_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(item_family_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // item_family_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(item_family_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // item_family_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(item_family_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // item_family_dto->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(item_family_dtoJSON, "code");
    if (code) { 
    if(!cJSON_IsString(code) && !cJSON_IsNull(code))
    {
    goto end; //String
    }
    }

    // item_family_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(item_family_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // item_family_dto->business_id
    cJSON *business_id = cJSON_GetObjectItemCaseSensitive(item_family_dtoJSON, "businessID");
    if (business_id) { 
    if(!cJSON_IsString(business_id) && !cJSON_IsNull(business_id))
    {
    goto end; //String
    }
    }


    item_family_dto_local_var = item_family_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        code && !cJSON_IsNull(code) ? strdup(code->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        business_id && !cJSON_IsNull(business_id) ? strdup(business_id->valuestring) : NULL
        );

    return item_family_dto_local_var;
end:
    return NULL;

}
