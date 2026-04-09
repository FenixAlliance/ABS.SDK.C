#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "country_top_level_domain_dto.h"



country_top_level_domain_dto_t *country_top_level_domain_dto_create(
    char *id,
    char *domain,
    char *country_id
    ) {
    country_top_level_domain_dto_t *country_top_level_domain_dto_local_var = malloc(sizeof(country_top_level_domain_dto_t));
    if (!country_top_level_domain_dto_local_var) {
        return NULL;
    }
    country_top_level_domain_dto_local_var->id = id;
    country_top_level_domain_dto_local_var->domain = domain;
    country_top_level_domain_dto_local_var->country_id = country_id;

    return country_top_level_domain_dto_local_var;
}


void country_top_level_domain_dto_free(country_top_level_domain_dto_t *country_top_level_domain_dto) {
    if(NULL == country_top_level_domain_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (country_top_level_domain_dto->id) {
        free(country_top_level_domain_dto->id);
        country_top_level_domain_dto->id = NULL;
    }
    if (country_top_level_domain_dto->domain) {
        free(country_top_level_domain_dto->domain);
        country_top_level_domain_dto->domain = NULL;
    }
    if (country_top_level_domain_dto->country_id) {
        free(country_top_level_domain_dto->country_id);
        country_top_level_domain_dto->country_id = NULL;
    }
    free(country_top_level_domain_dto);
}

cJSON *country_top_level_domain_dto_convertToJSON(country_top_level_domain_dto_t *country_top_level_domain_dto) {
    cJSON *item = cJSON_CreateObject();

    // country_top_level_domain_dto->id
    if(country_top_level_domain_dto->id) {
    if(cJSON_AddStringToObject(item, "id", country_top_level_domain_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // country_top_level_domain_dto->domain
    if(country_top_level_domain_dto->domain) {
    if(cJSON_AddStringToObject(item, "domain", country_top_level_domain_dto->domain) == NULL) {
    goto fail; //String
    }
    }


    // country_top_level_domain_dto->country_id
    if(country_top_level_domain_dto->country_id) {
    if(cJSON_AddStringToObject(item, "countryID", country_top_level_domain_dto->country_id) == NULL) {
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

country_top_level_domain_dto_t *country_top_level_domain_dto_parseFromJSON(cJSON *country_top_level_domain_dtoJSON){

    country_top_level_domain_dto_t *country_top_level_domain_dto_local_var = NULL;

    // country_top_level_domain_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(country_top_level_domain_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // country_top_level_domain_dto->domain
    cJSON *domain = cJSON_GetObjectItemCaseSensitive(country_top_level_domain_dtoJSON, "domain");
    if (domain) { 
    if(!cJSON_IsString(domain) && !cJSON_IsNull(domain))
    {
    goto end; //String
    }
    }

    // country_top_level_domain_dto->country_id
    cJSON *country_id = cJSON_GetObjectItemCaseSensitive(country_top_level_domain_dtoJSON, "countryID");
    if (country_id) { 
    if(!cJSON_IsString(country_id) && !cJSON_IsNull(country_id))
    {
    goto end; //String
    }
    }


    country_top_level_domain_dto_local_var = country_top_level_domain_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        domain && !cJSON_IsNull(domain) ? strdup(domain->valuestring) : NULL,
        country_id && !cJSON_IsNull(country_id) ? strdup(country_id->valuestring) : NULL
        );

    return country_top_level_domain_dto_local_var;
end:
    return NULL;

}
