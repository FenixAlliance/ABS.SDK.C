#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "business_relationship_update_dto.h"



business_relationship_update_dto_t *business_relationship_update_dto_create(
    char *child_tenant_id,
    double ownership_percentage
    ) {
    business_relationship_update_dto_t *business_relationship_update_dto_local_var = malloc(sizeof(business_relationship_update_dto_t));
    if (!business_relationship_update_dto_local_var) {
        return NULL;
    }
    business_relationship_update_dto_local_var->child_tenant_id = child_tenant_id;
    business_relationship_update_dto_local_var->ownership_percentage = ownership_percentage;

    return business_relationship_update_dto_local_var;
}


void business_relationship_update_dto_free(business_relationship_update_dto_t *business_relationship_update_dto) {
    if(NULL == business_relationship_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (business_relationship_update_dto->child_tenant_id) {
        free(business_relationship_update_dto->child_tenant_id);
        business_relationship_update_dto->child_tenant_id = NULL;
    }
    free(business_relationship_update_dto);
}

cJSON *business_relationship_update_dto_convertToJSON(business_relationship_update_dto_t *business_relationship_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // business_relationship_update_dto->child_tenant_id
    if(business_relationship_update_dto->child_tenant_id) {
    if(cJSON_AddStringToObject(item, "childTenantId", business_relationship_update_dto->child_tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // business_relationship_update_dto->ownership_percentage
    if(business_relationship_update_dto->ownership_percentage) {
    if(cJSON_AddNumberToObject(item, "ownershipPercentage", business_relationship_update_dto->ownership_percentage) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

business_relationship_update_dto_t *business_relationship_update_dto_parseFromJSON(cJSON *business_relationship_update_dtoJSON){

    business_relationship_update_dto_t *business_relationship_update_dto_local_var = NULL;

    // business_relationship_update_dto->child_tenant_id
    cJSON *child_tenant_id = cJSON_GetObjectItemCaseSensitive(business_relationship_update_dtoJSON, "childTenantId");
    if (child_tenant_id) { 
    if(!cJSON_IsString(child_tenant_id) && !cJSON_IsNull(child_tenant_id))
    {
    goto end; //String
    }
    }

    // business_relationship_update_dto->ownership_percentage
    cJSON *ownership_percentage = cJSON_GetObjectItemCaseSensitive(business_relationship_update_dtoJSON, "ownershipPercentage");
    if (ownership_percentage) { 
    if(!cJSON_IsNumber(ownership_percentage))
    {
    goto end; //Numeric
    }
    }


    business_relationship_update_dto_local_var = business_relationship_update_dto_create (
        child_tenant_id && !cJSON_IsNull(child_tenant_id) ? strdup(child_tenant_id->valuestring) : NULL,
        ownership_percentage ? ownership_percentage->valuedouble : 0
        );

    return business_relationship_update_dto_local_var;
end:
    return NULL;

}
