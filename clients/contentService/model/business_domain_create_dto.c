#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "business_domain_create_dto.h"



business_domain_create_dto_t *business_domain_create_dto_create(
    char *id,
    char *timestamp,
    char *domain
    ) {
    business_domain_create_dto_t *business_domain_create_dto_local_var = malloc(sizeof(business_domain_create_dto_t));
    if (!business_domain_create_dto_local_var) {
        return NULL;
    }
    business_domain_create_dto_local_var->id = id;
    business_domain_create_dto_local_var->timestamp = timestamp;
    business_domain_create_dto_local_var->domain = domain;

    return business_domain_create_dto_local_var;
}


void business_domain_create_dto_free(business_domain_create_dto_t *business_domain_create_dto) {
    if(NULL == business_domain_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (business_domain_create_dto->id) {
        free(business_domain_create_dto->id);
        business_domain_create_dto->id = NULL;
    }
    if (business_domain_create_dto->timestamp) {
        free(business_domain_create_dto->timestamp);
        business_domain_create_dto->timestamp = NULL;
    }
    if (business_domain_create_dto->domain) {
        free(business_domain_create_dto->domain);
        business_domain_create_dto->domain = NULL;
    }
    free(business_domain_create_dto);
}

cJSON *business_domain_create_dto_convertToJSON(business_domain_create_dto_t *business_domain_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // business_domain_create_dto->id
    if(business_domain_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", business_domain_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // business_domain_create_dto->timestamp
    if(business_domain_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", business_domain_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // business_domain_create_dto->domain
    if (!business_domain_create_dto->domain) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "domain", business_domain_create_dto->domain) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

business_domain_create_dto_t *business_domain_create_dto_parseFromJSON(cJSON *business_domain_create_dtoJSON){

    business_domain_create_dto_t *business_domain_create_dto_local_var = NULL;

    // business_domain_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(business_domain_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // business_domain_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(business_domain_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // business_domain_create_dto->domain
    cJSON *domain = cJSON_GetObjectItemCaseSensitive(business_domain_create_dtoJSON, "domain");
    if (!domain) {
        goto end;
    }

    
    if(!cJSON_IsString(domain))
    {
    goto end; //String
    }


    business_domain_create_dto_local_var = business_domain_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(domain->valuestring)
        );

    return business_domain_create_dto_local_var;
end:
    return NULL;

}
