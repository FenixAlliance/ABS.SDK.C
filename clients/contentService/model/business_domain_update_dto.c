#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "business_domain_update_dto.h"



business_domain_update_dto_t *business_domain_update_dto_create(
    char *domain
    ) {
    business_domain_update_dto_t *business_domain_update_dto_local_var = malloc(sizeof(business_domain_update_dto_t));
    if (!business_domain_update_dto_local_var) {
        return NULL;
    }
    business_domain_update_dto_local_var->domain = domain;

    return business_domain_update_dto_local_var;
}


void business_domain_update_dto_free(business_domain_update_dto_t *business_domain_update_dto) {
    if(NULL == business_domain_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (business_domain_update_dto->domain) {
        free(business_domain_update_dto->domain);
        business_domain_update_dto->domain = NULL;
    }
    free(business_domain_update_dto);
}

cJSON *business_domain_update_dto_convertToJSON(business_domain_update_dto_t *business_domain_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // business_domain_update_dto->domain
    if(business_domain_update_dto->domain) {
    if(cJSON_AddStringToObject(item, "domain", business_domain_update_dto->domain) == NULL) {
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

business_domain_update_dto_t *business_domain_update_dto_parseFromJSON(cJSON *business_domain_update_dtoJSON){

    business_domain_update_dto_t *business_domain_update_dto_local_var = NULL;

    // business_domain_update_dto->domain
    cJSON *domain = cJSON_GetObjectItemCaseSensitive(business_domain_update_dtoJSON, "domain");
    if (domain) { 
    if(!cJSON_IsString(domain) && !cJSON_IsNull(domain))
    {
    goto end; //String
    }
    }


    business_domain_update_dto_local_var = business_domain_update_dto_create (
        domain && !cJSON_IsNull(domain) ? strdup(domain->valuestring) : NULL
        );

    return business_domain_update_dto_local_var;
end:
    return NULL;

}
