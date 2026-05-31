#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "sales_literature_type_dto.h"



sales_literature_type_dto_t *sales_literature_type_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *tenant_id,
    char *enrollment_id
    ) {
    sales_literature_type_dto_t *sales_literature_type_dto_local_var = malloc(sizeof(sales_literature_type_dto_t));
    if (!sales_literature_type_dto_local_var) {
        return NULL;
    }
    sales_literature_type_dto_local_var->id = id;
    sales_literature_type_dto_local_var->timestamp = timestamp;
    sales_literature_type_dto_local_var->name = name;
    sales_literature_type_dto_local_var->tenant_id = tenant_id;
    sales_literature_type_dto_local_var->enrollment_id = enrollment_id;

    return sales_literature_type_dto_local_var;
}


void sales_literature_type_dto_free(sales_literature_type_dto_t *sales_literature_type_dto) {
    if(NULL == sales_literature_type_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (sales_literature_type_dto->id) {
        free(sales_literature_type_dto->id);
        sales_literature_type_dto->id = NULL;
    }
    if (sales_literature_type_dto->timestamp) {
        free(sales_literature_type_dto->timestamp);
        sales_literature_type_dto->timestamp = NULL;
    }
    if (sales_literature_type_dto->name) {
        free(sales_literature_type_dto->name);
        sales_literature_type_dto->name = NULL;
    }
    if (sales_literature_type_dto->tenant_id) {
        free(sales_literature_type_dto->tenant_id);
        sales_literature_type_dto->tenant_id = NULL;
    }
    if (sales_literature_type_dto->enrollment_id) {
        free(sales_literature_type_dto->enrollment_id);
        sales_literature_type_dto->enrollment_id = NULL;
    }
    free(sales_literature_type_dto);
}

cJSON *sales_literature_type_dto_convertToJSON(sales_literature_type_dto_t *sales_literature_type_dto) {
    cJSON *item = cJSON_CreateObject();

    // sales_literature_type_dto->id
    if(sales_literature_type_dto->id) {
    if(cJSON_AddStringToObject(item, "id", sales_literature_type_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // sales_literature_type_dto->timestamp
    if(sales_literature_type_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", sales_literature_type_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // sales_literature_type_dto->name
    if(sales_literature_type_dto->name) {
    if(cJSON_AddStringToObject(item, "name", sales_literature_type_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // sales_literature_type_dto->tenant_id
    if(sales_literature_type_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", sales_literature_type_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // sales_literature_type_dto->enrollment_id
    if(sales_literature_type_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", sales_literature_type_dto->enrollment_id) == NULL) {
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

sales_literature_type_dto_t *sales_literature_type_dto_parseFromJSON(cJSON *sales_literature_type_dtoJSON){

    sales_literature_type_dto_t *sales_literature_type_dto_local_var = NULL;

    // sales_literature_type_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(sales_literature_type_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // sales_literature_type_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(sales_literature_type_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // sales_literature_type_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(sales_literature_type_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // sales_literature_type_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(sales_literature_type_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // sales_literature_type_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(sales_literature_type_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }


    sales_literature_type_dto_local_var = sales_literature_type_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL
        );

    return sales_literature_type_dto_local_var;
end:
    return NULL;

}
