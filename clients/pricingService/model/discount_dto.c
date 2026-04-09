#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "discount_dto.h"



discount_dto_t *discount_dto_create(
    char *id,
    char *timestamp,
    char *description,
    double value,
    double percent,
    char *item_id,
    char *tenant_id,
    char *enrollment_id,
    char *discount_list_id,
    double end_quantity,
    double begin_quantity
    ) {
    discount_dto_t *discount_dto_local_var = malloc(sizeof(discount_dto_t));
    if (!discount_dto_local_var) {
        return NULL;
    }
    discount_dto_local_var->id = id;
    discount_dto_local_var->timestamp = timestamp;
    discount_dto_local_var->description = description;
    discount_dto_local_var->value = value;
    discount_dto_local_var->percent = percent;
    discount_dto_local_var->item_id = item_id;
    discount_dto_local_var->tenant_id = tenant_id;
    discount_dto_local_var->enrollment_id = enrollment_id;
    discount_dto_local_var->discount_list_id = discount_list_id;
    discount_dto_local_var->end_quantity = end_quantity;
    discount_dto_local_var->begin_quantity = begin_quantity;

    return discount_dto_local_var;
}


void discount_dto_free(discount_dto_t *discount_dto) {
    if(NULL == discount_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (discount_dto->id) {
        free(discount_dto->id);
        discount_dto->id = NULL;
    }
    if (discount_dto->timestamp) {
        free(discount_dto->timestamp);
        discount_dto->timestamp = NULL;
    }
    if (discount_dto->description) {
        free(discount_dto->description);
        discount_dto->description = NULL;
    }
    if (discount_dto->item_id) {
        free(discount_dto->item_id);
        discount_dto->item_id = NULL;
    }
    if (discount_dto->tenant_id) {
        free(discount_dto->tenant_id);
        discount_dto->tenant_id = NULL;
    }
    if (discount_dto->enrollment_id) {
        free(discount_dto->enrollment_id);
        discount_dto->enrollment_id = NULL;
    }
    if (discount_dto->discount_list_id) {
        free(discount_dto->discount_list_id);
        discount_dto->discount_list_id = NULL;
    }
    free(discount_dto);
}

cJSON *discount_dto_convertToJSON(discount_dto_t *discount_dto) {
    cJSON *item = cJSON_CreateObject();

    // discount_dto->id
    if(discount_dto->id) {
    if(cJSON_AddStringToObject(item, "id", discount_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // discount_dto->timestamp
    if(discount_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", discount_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // discount_dto->description
    if(discount_dto->description) {
    if(cJSON_AddStringToObject(item, "description", discount_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // discount_dto->value
    if(discount_dto->value) {
    if(cJSON_AddNumberToObject(item, "value", discount_dto->value) == NULL) {
    goto fail; //Numeric
    }
    }


    // discount_dto->percent
    if(discount_dto->percent) {
    if(cJSON_AddNumberToObject(item, "percent", discount_dto->percent) == NULL) {
    goto fail; //Numeric
    }
    }


    // discount_dto->item_id
    if(discount_dto->item_id) {
    if(cJSON_AddStringToObject(item, "itemId", discount_dto->item_id) == NULL) {
    goto fail; //String
    }
    }


    // discount_dto->tenant_id
    if(discount_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", discount_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // discount_dto->enrollment_id
    if(discount_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", discount_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // discount_dto->discount_list_id
    if(discount_dto->discount_list_id) {
    if(cJSON_AddStringToObject(item, "discountListId", discount_dto->discount_list_id) == NULL) {
    goto fail; //String
    }
    }


    // discount_dto->end_quantity
    if(discount_dto->end_quantity) {
    if(cJSON_AddNumberToObject(item, "endQuantity", discount_dto->end_quantity) == NULL) {
    goto fail; //Numeric
    }
    }


    // discount_dto->begin_quantity
    if(discount_dto->begin_quantity) {
    if(cJSON_AddNumberToObject(item, "beginQuantity", discount_dto->begin_quantity) == NULL) {
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

discount_dto_t *discount_dto_parseFromJSON(cJSON *discount_dtoJSON){

    discount_dto_t *discount_dto_local_var = NULL;

    // discount_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(discount_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // discount_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(discount_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // discount_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(discount_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // discount_dto->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(discount_dtoJSON, "value");
    if (value) { 
    if(!cJSON_IsNumber(value))
    {
    goto end; //Numeric
    }
    }

    // discount_dto->percent
    cJSON *percent = cJSON_GetObjectItemCaseSensitive(discount_dtoJSON, "percent");
    if (percent) { 
    if(!cJSON_IsNumber(percent))
    {
    goto end; //Numeric
    }
    }

    // discount_dto->item_id
    cJSON *item_id = cJSON_GetObjectItemCaseSensitive(discount_dtoJSON, "itemId");
    if (item_id) { 
    if(!cJSON_IsString(item_id) && !cJSON_IsNull(item_id))
    {
    goto end; //String
    }
    }

    // discount_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(discount_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // discount_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(discount_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // discount_dto->discount_list_id
    cJSON *discount_list_id = cJSON_GetObjectItemCaseSensitive(discount_dtoJSON, "discountListId");
    if (discount_list_id) { 
    if(!cJSON_IsString(discount_list_id) && !cJSON_IsNull(discount_list_id))
    {
    goto end; //String
    }
    }

    // discount_dto->end_quantity
    cJSON *end_quantity = cJSON_GetObjectItemCaseSensitive(discount_dtoJSON, "endQuantity");
    if (end_quantity) { 
    if(!cJSON_IsNumber(end_quantity))
    {
    goto end; //Numeric
    }
    }

    // discount_dto->begin_quantity
    cJSON *begin_quantity = cJSON_GetObjectItemCaseSensitive(discount_dtoJSON, "beginQuantity");
    if (begin_quantity) { 
    if(!cJSON_IsNumber(begin_quantity))
    {
    goto end; //Numeric
    }
    }


    discount_dto_local_var = discount_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        value ? value->valuedouble : 0,
        percent ? percent->valuedouble : 0,
        item_id && !cJSON_IsNull(item_id) ? strdup(item_id->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        discount_list_id && !cJSON_IsNull(discount_list_id) ? strdup(discount_list_id->valuestring) : NULL,
        end_quantity ? end_quantity->valuedouble : 0,
        begin_quantity ? begin_quantity->valuedouble : 0
        );

    return discount_dto_local_var;
end:
    return NULL;

}
