#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "point_of_sale_dto.h"



point_of_sale_dto_t *point_of_sale_dto_create(
    char *id,
    char *timestamp,
    char *tenant_id,
    char *enrollment_id,
    char *location_id,
    char *price_list_id,
    char *code,
    char *title,
    char *description
    ) {
    point_of_sale_dto_t *point_of_sale_dto_local_var = malloc(sizeof(point_of_sale_dto_t));
    if (!point_of_sale_dto_local_var) {
        return NULL;
    }
    point_of_sale_dto_local_var->id = id;
    point_of_sale_dto_local_var->timestamp = timestamp;
    point_of_sale_dto_local_var->tenant_id = tenant_id;
    point_of_sale_dto_local_var->enrollment_id = enrollment_id;
    point_of_sale_dto_local_var->location_id = location_id;
    point_of_sale_dto_local_var->price_list_id = price_list_id;
    point_of_sale_dto_local_var->code = code;
    point_of_sale_dto_local_var->title = title;
    point_of_sale_dto_local_var->description = description;

    return point_of_sale_dto_local_var;
}


void point_of_sale_dto_free(point_of_sale_dto_t *point_of_sale_dto) {
    if(NULL == point_of_sale_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (point_of_sale_dto->id) {
        free(point_of_sale_dto->id);
        point_of_sale_dto->id = NULL;
    }
    if (point_of_sale_dto->timestamp) {
        free(point_of_sale_dto->timestamp);
        point_of_sale_dto->timestamp = NULL;
    }
    if (point_of_sale_dto->tenant_id) {
        free(point_of_sale_dto->tenant_id);
        point_of_sale_dto->tenant_id = NULL;
    }
    if (point_of_sale_dto->enrollment_id) {
        free(point_of_sale_dto->enrollment_id);
        point_of_sale_dto->enrollment_id = NULL;
    }
    if (point_of_sale_dto->location_id) {
        free(point_of_sale_dto->location_id);
        point_of_sale_dto->location_id = NULL;
    }
    if (point_of_sale_dto->price_list_id) {
        free(point_of_sale_dto->price_list_id);
        point_of_sale_dto->price_list_id = NULL;
    }
    if (point_of_sale_dto->code) {
        free(point_of_sale_dto->code);
        point_of_sale_dto->code = NULL;
    }
    if (point_of_sale_dto->title) {
        free(point_of_sale_dto->title);
        point_of_sale_dto->title = NULL;
    }
    if (point_of_sale_dto->description) {
        free(point_of_sale_dto->description);
        point_of_sale_dto->description = NULL;
    }
    free(point_of_sale_dto);
}

cJSON *point_of_sale_dto_convertToJSON(point_of_sale_dto_t *point_of_sale_dto) {
    cJSON *item = cJSON_CreateObject();

    // point_of_sale_dto->id
    if(point_of_sale_dto->id) {
    if(cJSON_AddStringToObject(item, "id", point_of_sale_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // point_of_sale_dto->timestamp
    if(point_of_sale_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", point_of_sale_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // point_of_sale_dto->tenant_id
    if(point_of_sale_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", point_of_sale_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // point_of_sale_dto->enrollment_id
    if(point_of_sale_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", point_of_sale_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // point_of_sale_dto->location_id
    if(point_of_sale_dto->location_id) {
    if(cJSON_AddStringToObject(item, "locationId", point_of_sale_dto->location_id) == NULL) {
    goto fail; //String
    }
    }


    // point_of_sale_dto->price_list_id
    if(point_of_sale_dto->price_list_id) {
    if(cJSON_AddStringToObject(item, "priceListId", point_of_sale_dto->price_list_id) == NULL) {
    goto fail; //String
    }
    }


    // point_of_sale_dto->code
    if(point_of_sale_dto->code) {
    if(cJSON_AddStringToObject(item, "code", point_of_sale_dto->code) == NULL) {
    goto fail; //String
    }
    }


    // point_of_sale_dto->title
    if(point_of_sale_dto->title) {
    if(cJSON_AddStringToObject(item, "title", point_of_sale_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // point_of_sale_dto->description
    if(point_of_sale_dto->description) {
    if(cJSON_AddStringToObject(item, "description", point_of_sale_dto->description) == NULL) {
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

point_of_sale_dto_t *point_of_sale_dto_parseFromJSON(cJSON *point_of_sale_dtoJSON){

    point_of_sale_dto_t *point_of_sale_dto_local_var = NULL;

    // point_of_sale_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(point_of_sale_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // point_of_sale_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(point_of_sale_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // point_of_sale_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(point_of_sale_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // point_of_sale_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(point_of_sale_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // point_of_sale_dto->location_id
    cJSON *location_id = cJSON_GetObjectItemCaseSensitive(point_of_sale_dtoJSON, "locationId");
    if (location_id) { 
    if(!cJSON_IsString(location_id) && !cJSON_IsNull(location_id))
    {
    goto end; //String
    }
    }

    // point_of_sale_dto->price_list_id
    cJSON *price_list_id = cJSON_GetObjectItemCaseSensitive(point_of_sale_dtoJSON, "priceListId");
    if (price_list_id) { 
    if(!cJSON_IsString(price_list_id) && !cJSON_IsNull(price_list_id))
    {
    goto end; //String
    }
    }

    // point_of_sale_dto->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(point_of_sale_dtoJSON, "code");
    if (code) { 
    if(!cJSON_IsString(code) && !cJSON_IsNull(code))
    {
    goto end; //String
    }
    }

    // point_of_sale_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(point_of_sale_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // point_of_sale_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(point_of_sale_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }


    point_of_sale_dto_local_var = point_of_sale_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        location_id && !cJSON_IsNull(location_id) ? strdup(location_id->valuestring) : NULL,
        price_list_id && !cJSON_IsNull(price_list_id) ? strdup(price_list_id->valuestring) : NULL,
        code && !cJSON_IsNull(code) ? strdup(code->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL
        );

    return point_of_sale_dto_local_var;
end:
    return NULL;

}
