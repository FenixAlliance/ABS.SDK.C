#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "extended_sales_literature_dto.h"



extended_sales_literature_dto_t *extended_sales_literature_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *content,
    char *description,
    char *modified_date,
    char *expiration_date,
    char *tenant_id,
    char *enrollment_id,
    char *sales_literature_type_id,
    sales_literature_type_dto_t *sales_literature_type,
    tenant_dto_t *tenant
    ) {
    extended_sales_literature_dto_t *extended_sales_literature_dto_local_var = malloc(sizeof(extended_sales_literature_dto_t));
    if (!extended_sales_literature_dto_local_var) {
        return NULL;
    }
    extended_sales_literature_dto_local_var->id = id;
    extended_sales_literature_dto_local_var->timestamp = timestamp;
    extended_sales_literature_dto_local_var->title = title;
    extended_sales_literature_dto_local_var->content = content;
    extended_sales_literature_dto_local_var->description = description;
    extended_sales_literature_dto_local_var->modified_date = modified_date;
    extended_sales_literature_dto_local_var->expiration_date = expiration_date;
    extended_sales_literature_dto_local_var->tenant_id = tenant_id;
    extended_sales_literature_dto_local_var->enrollment_id = enrollment_id;
    extended_sales_literature_dto_local_var->sales_literature_type_id = sales_literature_type_id;
    extended_sales_literature_dto_local_var->sales_literature_type = sales_literature_type;
    extended_sales_literature_dto_local_var->tenant = tenant;

    return extended_sales_literature_dto_local_var;
}


void extended_sales_literature_dto_free(extended_sales_literature_dto_t *extended_sales_literature_dto) {
    if(NULL == extended_sales_literature_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (extended_sales_literature_dto->id) {
        free(extended_sales_literature_dto->id);
        extended_sales_literature_dto->id = NULL;
    }
    if (extended_sales_literature_dto->timestamp) {
        free(extended_sales_literature_dto->timestamp);
        extended_sales_literature_dto->timestamp = NULL;
    }
    if (extended_sales_literature_dto->title) {
        free(extended_sales_literature_dto->title);
        extended_sales_literature_dto->title = NULL;
    }
    if (extended_sales_literature_dto->content) {
        free(extended_sales_literature_dto->content);
        extended_sales_literature_dto->content = NULL;
    }
    if (extended_sales_literature_dto->description) {
        free(extended_sales_literature_dto->description);
        extended_sales_literature_dto->description = NULL;
    }
    if (extended_sales_literature_dto->modified_date) {
        free(extended_sales_literature_dto->modified_date);
        extended_sales_literature_dto->modified_date = NULL;
    }
    if (extended_sales_literature_dto->expiration_date) {
        free(extended_sales_literature_dto->expiration_date);
        extended_sales_literature_dto->expiration_date = NULL;
    }
    if (extended_sales_literature_dto->tenant_id) {
        free(extended_sales_literature_dto->tenant_id);
        extended_sales_literature_dto->tenant_id = NULL;
    }
    if (extended_sales_literature_dto->enrollment_id) {
        free(extended_sales_literature_dto->enrollment_id);
        extended_sales_literature_dto->enrollment_id = NULL;
    }
    if (extended_sales_literature_dto->sales_literature_type_id) {
        free(extended_sales_literature_dto->sales_literature_type_id);
        extended_sales_literature_dto->sales_literature_type_id = NULL;
    }
    if (extended_sales_literature_dto->sales_literature_type) {
        sales_literature_type_dto_free(extended_sales_literature_dto->sales_literature_type);
        extended_sales_literature_dto->sales_literature_type = NULL;
    }
    if (extended_sales_literature_dto->tenant) {
        tenant_dto_free(extended_sales_literature_dto->tenant);
        extended_sales_literature_dto->tenant = NULL;
    }
    free(extended_sales_literature_dto);
}

cJSON *extended_sales_literature_dto_convertToJSON(extended_sales_literature_dto_t *extended_sales_literature_dto) {
    cJSON *item = cJSON_CreateObject();

    // extended_sales_literature_dto->id
    if(extended_sales_literature_dto->id) {
    if(cJSON_AddStringToObject(item, "id", extended_sales_literature_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // extended_sales_literature_dto->timestamp
    if(extended_sales_literature_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", extended_sales_literature_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // extended_sales_literature_dto->title
    if(extended_sales_literature_dto->title) {
    if(cJSON_AddStringToObject(item, "title", extended_sales_literature_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // extended_sales_literature_dto->content
    if(extended_sales_literature_dto->content) {
    if(cJSON_AddStringToObject(item, "content", extended_sales_literature_dto->content) == NULL) {
    goto fail; //String
    }
    }


    // extended_sales_literature_dto->description
    if(extended_sales_literature_dto->description) {
    if(cJSON_AddStringToObject(item, "description", extended_sales_literature_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // extended_sales_literature_dto->modified_date
    if(extended_sales_literature_dto->modified_date) {
    if(cJSON_AddStringToObject(item, "modifiedDate", extended_sales_literature_dto->modified_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // extended_sales_literature_dto->expiration_date
    if(extended_sales_literature_dto->expiration_date) {
    if(cJSON_AddStringToObject(item, "expirationDate", extended_sales_literature_dto->expiration_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // extended_sales_literature_dto->tenant_id
    if(extended_sales_literature_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", extended_sales_literature_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_sales_literature_dto->enrollment_id
    if(extended_sales_literature_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", extended_sales_literature_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_sales_literature_dto->sales_literature_type_id
    if(extended_sales_literature_dto->sales_literature_type_id) {
    if(cJSON_AddStringToObject(item, "salesLiteratureTypeId", extended_sales_literature_dto->sales_literature_type_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_sales_literature_dto->sales_literature_type
    if(extended_sales_literature_dto->sales_literature_type) {
    cJSON *sales_literature_type_local_JSON = sales_literature_type_dto_convertToJSON(extended_sales_literature_dto->sales_literature_type);
    if(sales_literature_type_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "salesLiteratureType", sales_literature_type_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // extended_sales_literature_dto->tenant
    if(extended_sales_literature_dto->tenant) {
    cJSON *tenant_local_JSON = tenant_dto_convertToJSON(extended_sales_literature_dto->tenant);
    if(tenant_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "tenant", tenant_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

extended_sales_literature_dto_t *extended_sales_literature_dto_parseFromJSON(cJSON *extended_sales_literature_dtoJSON){

    extended_sales_literature_dto_t *extended_sales_literature_dto_local_var = NULL;

    // define the local variable for extended_sales_literature_dto->sales_literature_type
    sales_literature_type_dto_t *sales_literature_type_local_nonprim = NULL;

    // define the local variable for extended_sales_literature_dto->tenant
    tenant_dto_t *tenant_local_nonprim = NULL;

    // extended_sales_literature_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(extended_sales_literature_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // extended_sales_literature_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(extended_sales_literature_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // extended_sales_literature_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(extended_sales_literature_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // extended_sales_literature_dto->content
    cJSON *content = cJSON_GetObjectItemCaseSensitive(extended_sales_literature_dtoJSON, "content");
    if (content) { 
    if(!cJSON_IsString(content) && !cJSON_IsNull(content))
    {
    goto end; //String
    }
    }

    // extended_sales_literature_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(extended_sales_literature_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // extended_sales_literature_dto->modified_date
    cJSON *modified_date = cJSON_GetObjectItemCaseSensitive(extended_sales_literature_dtoJSON, "modifiedDate");
    if (modified_date) { 
    if(!cJSON_IsString(modified_date) && !cJSON_IsNull(modified_date))
    {
    goto end; //DateTime
    }
    }

    // extended_sales_literature_dto->expiration_date
    cJSON *expiration_date = cJSON_GetObjectItemCaseSensitive(extended_sales_literature_dtoJSON, "expirationDate");
    if (expiration_date) { 
    if(!cJSON_IsString(expiration_date) && !cJSON_IsNull(expiration_date))
    {
    goto end; //DateTime
    }
    }

    // extended_sales_literature_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(extended_sales_literature_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // extended_sales_literature_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(extended_sales_literature_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // extended_sales_literature_dto->sales_literature_type_id
    cJSON *sales_literature_type_id = cJSON_GetObjectItemCaseSensitive(extended_sales_literature_dtoJSON, "salesLiteratureTypeId");
    if (sales_literature_type_id) { 
    if(!cJSON_IsString(sales_literature_type_id) && !cJSON_IsNull(sales_literature_type_id))
    {
    goto end; //String
    }
    }

    // extended_sales_literature_dto->sales_literature_type
    cJSON *sales_literature_type = cJSON_GetObjectItemCaseSensitive(extended_sales_literature_dtoJSON, "salesLiteratureType");
    if (sales_literature_type) { 
    sales_literature_type_local_nonprim = sales_literature_type_dto_parseFromJSON(sales_literature_type); //nonprimitive
    }

    // extended_sales_literature_dto->tenant
    cJSON *tenant = cJSON_GetObjectItemCaseSensitive(extended_sales_literature_dtoJSON, "tenant");
    if (tenant) { 
    tenant_local_nonprim = tenant_dto_parseFromJSON(tenant); //nonprimitive
    }


    extended_sales_literature_dto_local_var = extended_sales_literature_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        content && !cJSON_IsNull(content) ? strdup(content->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        modified_date && !cJSON_IsNull(modified_date) ? strdup(modified_date->valuestring) : NULL,
        expiration_date && !cJSON_IsNull(expiration_date) ? strdup(expiration_date->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        sales_literature_type_id && !cJSON_IsNull(sales_literature_type_id) ? strdup(sales_literature_type_id->valuestring) : NULL,
        sales_literature_type ? sales_literature_type_local_nonprim : NULL,
        tenant ? tenant_local_nonprim : NULL
        );

    return extended_sales_literature_dto_local_var;
end:
    if (sales_literature_type_local_nonprim) {
        sales_literature_type_dto_free(sales_literature_type_local_nonprim);
        sales_literature_type_local_nonprim = NULL;
    }
    if (tenant_local_nonprim) {
        tenant_dto_free(tenant_local_nonprim);
        tenant_local_nonprim = NULL;
    }
    return NULL;

}
