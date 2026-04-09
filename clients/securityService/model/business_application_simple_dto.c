#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "business_application_simple_dto.h"



business_application_simple_dto_t *business_application_simple_dto_create(
    char *id,
    char *timestamp,
    char *name
    ) {
    business_application_simple_dto_t *business_application_simple_dto_local_var = malloc(sizeof(business_application_simple_dto_t));
    if (!business_application_simple_dto_local_var) {
        return NULL;
    }
    business_application_simple_dto_local_var->id = id;
    business_application_simple_dto_local_var->timestamp = timestamp;
    business_application_simple_dto_local_var->name = name;

    return business_application_simple_dto_local_var;
}


void business_application_simple_dto_free(business_application_simple_dto_t *business_application_simple_dto) {
    if(NULL == business_application_simple_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (business_application_simple_dto->id) {
        free(business_application_simple_dto->id);
        business_application_simple_dto->id = NULL;
    }
    if (business_application_simple_dto->timestamp) {
        free(business_application_simple_dto->timestamp);
        business_application_simple_dto->timestamp = NULL;
    }
    if (business_application_simple_dto->name) {
        free(business_application_simple_dto->name);
        business_application_simple_dto->name = NULL;
    }
    free(business_application_simple_dto);
}

cJSON *business_application_simple_dto_convertToJSON(business_application_simple_dto_t *business_application_simple_dto) {
    cJSON *item = cJSON_CreateObject();

    // business_application_simple_dto->id
    if(business_application_simple_dto->id) {
    if(cJSON_AddStringToObject(item, "id", business_application_simple_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // business_application_simple_dto->timestamp
    if(business_application_simple_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", business_application_simple_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // business_application_simple_dto->name
    if(business_application_simple_dto->name) {
    if(cJSON_AddStringToObject(item, "name", business_application_simple_dto->name) == NULL) {
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

business_application_simple_dto_t *business_application_simple_dto_parseFromJSON(cJSON *business_application_simple_dtoJSON){

    business_application_simple_dto_t *business_application_simple_dto_local_var = NULL;

    // business_application_simple_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(business_application_simple_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // business_application_simple_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(business_application_simple_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // business_application_simple_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(business_application_simple_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }


    business_application_simple_dto_local_var = business_application_simple_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL
        );

    return business_application_simple_dto_local_var;
end:
    return NULL;

}
