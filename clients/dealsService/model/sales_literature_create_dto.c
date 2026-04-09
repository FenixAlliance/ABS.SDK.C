#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "sales_literature_create_dto.h"



sales_literature_create_dto_t *sales_literature_create_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *content,
    char *description,
    char *modified_date,
    char *expiration_date,
    char *tenant_id,
    char *enrollment_id,
    char *sales_literature_type_id
    ) {
    sales_literature_create_dto_t *sales_literature_create_dto_local_var = malloc(sizeof(sales_literature_create_dto_t));
    if (!sales_literature_create_dto_local_var) {
        return NULL;
    }
    sales_literature_create_dto_local_var->id = id;
    sales_literature_create_dto_local_var->timestamp = timestamp;
    sales_literature_create_dto_local_var->title = title;
    sales_literature_create_dto_local_var->content = content;
    sales_literature_create_dto_local_var->description = description;
    sales_literature_create_dto_local_var->modified_date = modified_date;
    sales_literature_create_dto_local_var->expiration_date = expiration_date;
    sales_literature_create_dto_local_var->tenant_id = tenant_id;
    sales_literature_create_dto_local_var->enrollment_id = enrollment_id;
    sales_literature_create_dto_local_var->sales_literature_type_id = sales_literature_type_id;

    return sales_literature_create_dto_local_var;
}


void sales_literature_create_dto_free(sales_literature_create_dto_t *sales_literature_create_dto) {
    if(NULL == sales_literature_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (sales_literature_create_dto->id) {
        free(sales_literature_create_dto->id);
        sales_literature_create_dto->id = NULL;
    }
    if (sales_literature_create_dto->timestamp) {
        free(sales_literature_create_dto->timestamp);
        sales_literature_create_dto->timestamp = NULL;
    }
    if (sales_literature_create_dto->title) {
        free(sales_literature_create_dto->title);
        sales_literature_create_dto->title = NULL;
    }
    if (sales_literature_create_dto->content) {
        free(sales_literature_create_dto->content);
        sales_literature_create_dto->content = NULL;
    }
    if (sales_literature_create_dto->description) {
        free(sales_literature_create_dto->description);
        sales_literature_create_dto->description = NULL;
    }
    if (sales_literature_create_dto->modified_date) {
        free(sales_literature_create_dto->modified_date);
        sales_literature_create_dto->modified_date = NULL;
    }
    if (sales_literature_create_dto->expiration_date) {
        free(sales_literature_create_dto->expiration_date);
        sales_literature_create_dto->expiration_date = NULL;
    }
    if (sales_literature_create_dto->tenant_id) {
        free(sales_literature_create_dto->tenant_id);
        sales_literature_create_dto->tenant_id = NULL;
    }
    if (sales_literature_create_dto->enrollment_id) {
        free(sales_literature_create_dto->enrollment_id);
        sales_literature_create_dto->enrollment_id = NULL;
    }
    if (sales_literature_create_dto->sales_literature_type_id) {
        free(sales_literature_create_dto->sales_literature_type_id);
        sales_literature_create_dto->sales_literature_type_id = NULL;
    }
    free(sales_literature_create_dto);
}

cJSON *sales_literature_create_dto_convertToJSON(sales_literature_create_dto_t *sales_literature_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // sales_literature_create_dto->id
    if(sales_literature_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", sales_literature_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // sales_literature_create_dto->timestamp
    if(sales_literature_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", sales_literature_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // sales_literature_create_dto->title
    if(sales_literature_create_dto->title) {
    if(cJSON_AddStringToObject(item, "title", sales_literature_create_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // sales_literature_create_dto->content
    if(sales_literature_create_dto->content) {
    if(cJSON_AddStringToObject(item, "content", sales_literature_create_dto->content) == NULL) {
    goto fail; //String
    }
    }


    // sales_literature_create_dto->description
    if(sales_literature_create_dto->description) {
    if(cJSON_AddStringToObject(item, "description", sales_literature_create_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // sales_literature_create_dto->modified_date
    if(sales_literature_create_dto->modified_date) {
    if(cJSON_AddStringToObject(item, "modifiedDate", sales_literature_create_dto->modified_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // sales_literature_create_dto->expiration_date
    if(sales_literature_create_dto->expiration_date) {
    if(cJSON_AddStringToObject(item, "expirationDate", sales_literature_create_dto->expiration_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // sales_literature_create_dto->tenant_id
    if(sales_literature_create_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", sales_literature_create_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // sales_literature_create_dto->enrollment_id
    if(sales_literature_create_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", sales_literature_create_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // sales_literature_create_dto->sales_literature_type_id
    if(sales_literature_create_dto->sales_literature_type_id) {
    if(cJSON_AddStringToObject(item, "salesLiteratureTypeId", sales_literature_create_dto->sales_literature_type_id) == NULL) {
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

sales_literature_create_dto_t *sales_literature_create_dto_parseFromJSON(cJSON *sales_literature_create_dtoJSON){

    sales_literature_create_dto_t *sales_literature_create_dto_local_var = NULL;

    // sales_literature_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(sales_literature_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // sales_literature_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(sales_literature_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // sales_literature_create_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(sales_literature_create_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // sales_literature_create_dto->content
    cJSON *content = cJSON_GetObjectItemCaseSensitive(sales_literature_create_dtoJSON, "content");
    if (content) { 
    if(!cJSON_IsString(content) && !cJSON_IsNull(content))
    {
    goto end; //String
    }
    }

    // sales_literature_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(sales_literature_create_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // sales_literature_create_dto->modified_date
    cJSON *modified_date = cJSON_GetObjectItemCaseSensitive(sales_literature_create_dtoJSON, "modifiedDate");
    if (modified_date) { 
    if(!cJSON_IsString(modified_date) && !cJSON_IsNull(modified_date))
    {
    goto end; //DateTime
    }
    }

    // sales_literature_create_dto->expiration_date
    cJSON *expiration_date = cJSON_GetObjectItemCaseSensitive(sales_literature_create_dtoJSON, "expirationDate");
    if (expiration_date) { 
    if(!cJSON_IsString(expiration_date) && !cJSON_IsNull(expiration_date))
    {
    goto end; //DateTime
    }
    }

    // sales_literature_create_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(sales_literature_create_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // sales_literature_create_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(sales_literature_create_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // sales_literature_create_dto->sales_literature_type_id
    cJSON *sales_literature_type_id = cJSON_GetObjectItemCaseSensitive(sales_literature_create_dtoJSON, "salesLiteratureTypeId");
    if (sales_literature_type_id) { 
    if(!cJSON_IsString(sales_literature_type_id) && !cJSON_IsNull(sales_literature_type_id))
    {
    goto end; //String
    }
    }


    sales_literature_create_dto_local_var = sales_literature_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        content && !cJSON_IsNull(content) ? strdup(content->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        modified_date && !cJSON_IsNull(modified_date) ? strdup(modified_date->valuestring) : NULL,
        expiration_date && !cJSON_IsNull(expiration_date) ? strdup(expiration_date->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        sales_literature_type_id && !cJSON_IsNull(sales_literature_type_id) ? strdup(sales_literature_type_id->valuestring) : NULL
        );

    return sales_literature_create_dto_local_var;
end:
    return NULL;

}
