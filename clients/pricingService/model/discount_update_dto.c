#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "discount_update_dto.h"



discount_update_dto_t *discount_update_dto_create(
    char *description,
    double begin_quantity,
    double end_quantity,
    double percent,
    double value,
    char *tenant_id,
    char *enrollment_id,
    char *discount_list_id
    ) {
    discount_update_dto_t *discount_update_dto_local_var = malloc(sizeof(discount_update_dto_t));
    if (!discount_update_dto_local_var) {
        return NULL;
    }
    discount_update_dto_local_var->description = description;
    discount_update_dto_local_var->begin_quantity = begin_quantity;
    discount_update_dto_local_var->end_quantity = end_quantity;
    discount_update_dto_local_var->percent = percent;
    discount_update_dto_local_var->value = value;
    discount_update_dto_local_var->tenant_id = tenant_id;
    discount_update_dto_local_var->enrollment_id = enrollment_id;
    discount_update_dto_local_var->discount_list_id = discount_list_id;

    return discount_update_dto_local_var;
}


void discount_update_dto_free(discount_update_dto_t *discount_update_dto) {
    if(NULL == discount_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (discount_update_dto->description) {
        free(discount_update_dto->description);
        discount_update_dto->description = NULL;
    }
    if (discount_update_dto->tenant_id) {
        free(discount_update_dto->tenant_id);
        discount_update_dto->tenant_id = NULL;
    }
    if (discount_update_dto->enrollment_id) {
        free(discount_update_dto->enrollment_id);
        discount_update_dto->enrollment_id = NULL;
    }
    if (discount_update_dto->discount_list_id) {
        free(discount_update_dto->discount_list_id);
        discount_update_dto->discount_list_id = NULL;
    }
    free(discount_update_dto);
}

cJSON *discount_update_dto_convertToJSON(discount_update_dto_t *discount_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // discount_update_dto->description
    if(discount_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", discount_update_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // discount_update_dto->begin_quantity
    if(discount_update_dto->begin_quantity) {
    if(cJSON_AddNumberToObject(item, "beginQuantity", discount_update_dto->begin_quantity) == NULL) {
    goto fail; //Numeric
    }
    }


    // discount_update_dto->end_quantity
    if(discount_update_dto->end_quantity) {
    if(cJSON_AddNumberToObject(item, "endQuantity", discount_update_dto->end_quantity) == NULL) {
    goto fail; //Numeric
    }
    }


    // discount_update_dto->percent
    if(discount_update_dto->percent) {
    if(cJSON_AddNumberToObject(item, "percent", discount_update_dto->percent) == NULL) {
    goto fail; //Numeric
    }
    }


    // discount_update_dto->value
    if(discount_update_dto->value) {
    if(cJSON_AddNumberToObject(item, "value", discount_update_dto->value) == NULL) {
    goto fail; //Numeric
    }
    }


    // discount_update_dto->tenant_id
    if(discount_update_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", discount_update_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // discount_update_dto->enrollment_id
    if(discount_update_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", discount_update_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // discount_update_dto->discount_list_id
    if(discount_update_dto->discount_list_id) {
    if(cJSON_AddStringToObject(item, "discountListId", discount_update_dto->discount_list_id) == NULL) {
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

discount_update_dto_t *discount_update_dto_parseFromJSON(cJSON *discount_update_dtoJSON){

    discount_update_dto_t *discount_update_dto_local_var = NULL;

    // discount_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(discount_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // discount_update_dto->begin_quantity
    cJSON *begin_quantity = cJSON_GetObjectItemCaseSensitive(discount_update_dtoJSON, "beginQuantity");
    if (begin_quantity) { 
    if(!cJSON_IsNumber(begin_quantity))
    {
    goto end; //Numeric
    }
    }

    // discount_update_dto->end_quantity
    cJSON *end_quantity = cJSON_GetObjectItemCaseSensitive(discount_update_dtoJSON, "endQuantity");
    if (end_quantity) { 
    if(!cJSON_IsNumber(end_quantity))
    {
    goto end; //Numeric
    }
    }

    // discount_update_dto->percent
    cJSON *percent = cJSON_GetObjectItemCaseSensitive(discount_update_dtoJSON, "percent");
    if (percent) { 
    if(!cJSON_IsNumber(percent))
    {
    goto end; //Numeric
    }
    }

    // discount_update_dto->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(discount_update_dtoJSON, "value");
    if (value) { 
    if(!cJSON_IsNumber(value))
    {
    goto end; //Numeric
    }
    }

    // discount_update_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(discount_update_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // discount_update_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(discount_update_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // discount_update_dto->discount_list_id
    cJSON *discount_list_id = cJSON_GetObjectItemCaseSensitive(discount_update_dtoJSON, "discountListId");
    if (discount_list_id) { 
    if(!cJSON_IsString(discount_list_id) && !cJSON_IsNull(discount_list_id))
    {
    goto end; //String
    }
    }


    discount_update_dto_local_var = discount_update_dto_create (
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        begin_quantity ? begin_quantity->valuedouble : 0,
        end_quantity ? end_quantity->valuedouble : 0,
        percent ? percent->valuedouble : 0,
        value ? value->valuedouble : 0,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        discount_list_id && !cJSON_IsNull(discount_list_id) ? strdup(discount_list_id->valuestring) : NULL
        );

    return discount_update_dto_local_var;
end:
    return NULL;

}
