#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "tenant_industry_update_dto.h"



tenant_industry_update_dto_t *tenant_industry_update_dto_create(
    char *name,
    char *parent_business_industry_id
    ) {
    tenant_industry_update_dto_t *tenant_industry_update_dto_local_var = malloc(sizeof(tenant_industry_update_dto_t));
    if (!tenant_industry_update_dto_local_var) {
        return NULL;
    }
    tenant_industry_update_dto_local_var->name = name;
    tenant_industry_update_dto_local_var->parent_business_industry_id = parent_business_industry_id;

    return tenant_industry_update_dto_local_var;
}


void tenant_industry_update_dto_free(tenant_industry_update_dto_t *tenant_industry_update_dto) {
    if(NULL == tenant_industry_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (tenant_industry_update_dto->name) {
        free(tenant_industry_update_dto->name);
        tenant_industry_update_dto->name = NULL;
    }
    if (tenant_industry_update_dto->parent_business_industry_id) {
        free(tenant_industry_update_dto->parent_business_industry_id);
        tenant_industry_update_dto->parent_business_industry_id = NULL;
    }
    free(tenant_industry_update_dto);
}

cJSON *tenant_industry_update_dto_convertToJSON(tenant_industry_update_dto_t *tenant_industry_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // tenant_industry_update_dto->name
    if(tenant_industry_update_dto->name) {
    if(cJSON_AddStringToObject(item, "name", tenant_industry_update_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // tenant_industry_update_dto->parent_business_industry_id
    if(tenant_industry_update_dto->parent_business_industry_id) {
    if(cJSON_AddStringToObject(item, "parentBusinessIndustryID", tenant_industry_update_dto->parent_business_industry_id) == NULL) {
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

tenant_industry_update_dto_t *tenant_industry_update_dto_parseFromJSON(cJSON *tenant_industry_update_dtoJSON){

    tenant_industry_update_dto_t *tenant_industry_update_dto_local_var = NULL;

    // tenant_industry_update_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(tenant_industry_update_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // tenant_industry_update_dto->parent_business_industry_id
    cJSON *parent_business_industry_id = cJSON_GetObjectItemCaseSensitive(tenant_industry_update_dtoJSON, "parentBusinessIndustryID");
    if (parent_business_industry_id) { 
    if(!cJSON_IsString(parent_business_industry_id) && !cJSON_IsNull(parent_business_industry_id))
    {
    goto end; //String
    }
    }


    tenant_industry_update_dto_local_var = tenant_industry_update_dto_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        parent_business_industry_id && !cJSON_IsNull(parent_business_industry_id) ? strdup(parent_business_industry_id->valuestring) : NULL
        );

    return tenant_industry_update_dto_local_var;
end:
    return NULL;

}
