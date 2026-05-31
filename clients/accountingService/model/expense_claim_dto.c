#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "expense_claim_dto.h"



expense_claim_dto_t *expense_claim_dto_create(
    char *id,
    char *timestamp,
    char *expense_type_id,
    char *tenant_id,
    char *enrollment_id
    ) {
    expense_claim_dto_t *expense_claim_dto_local_var = malloc(sizeof(expense_claim_dto_t));
    if (!expense_claim_dto_local_var) {
        return NULL;
    }
    expense_claim_dto_local_var->id = id;
    expense_claim_dto_local_var->timestamp = timestamp;
    expense_claim_dto_local_var->expense_type_id = expense_type_id;
    expense_claim_dto_local_var->tenant_id = tenant_id;
    expense_claim_dto_local_var->enrollment_id = enrollment_id;

    return expense_claim_dto_local_var;
}


void expense_claim_dto_free(expense_claim_dto_t *expense_claim_dto) {
    if(NULL == expense_claim_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (expense_claim_dto->id) {
        free(expense_claim_dto->id);
        expense_claim_dto->id = NULL;
    }
    if (expense_claim_dto->timestamp) {
        free(expense_claim_dto->timestamp);
        expense_claim_dto->timestamp = NULL;
    }
    if (expense_claim_dto->expense_type_id) {
        free(expense_claim_dto->expense_type_id);
        expense_claim_dto->expense_type_id = NULL;
    }
    if (expense_claim_dto->tenant_id) {
        free(expense_claim_dto->tenant_id);
        expense_claim_dto->tenant_id = NULL;
    }
    if (expense_claim_dto->enrollment_id) {
        free(expense_claim_dto->enrollment_id);
        expense_claim_dto->enrollment_id = NULL;
    }
    free(expense_claim_dto);
}

cJSON *expense_claim_dto_convertToJSON(expense_claim_dto_t *expense_claim_dto) {
    cJSON *item = cJSON_CreateObject();

    // expense_claim_dto->id
    if(expense_claim_dto->id) {
    if(cJSON_AddStringToObject(item, "id", expense_claim_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // expense_claim_dto->timestamp
    if(expense_claim_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", expense_claim_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // expense_claim_dto->expense_type_id
    if(expense_claim_dto->expense_type_id) {
    if(cJSON_AddStringToObject(item, "expenseTypeId", expense_claim_dto->expense_type_id) == NULL) {
    goto fail; //String
    }
    }


    // expense_claim_dto->tenant_id
    if(expense_claim_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", expense_claim_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // expense_claim_dto->enrollment_id
    if(expense_claim_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", expense_claim_dto->enrollment_id) == NULL) {
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

expense_claim_dto_t *expense_claim_dto_parseFromJSON(cJSON *expense_claim_dtoJSON){

    expense_claim_dto_t *expense_claim_dto_local_var = NULL;

    // expense_claim_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(expense_claim_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // expense_claim_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(expense_claim_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // expense_claim_dto->expense_type_id
    cJSON *expense_type_id = cJSON_GetObjectItemCaseSensitive(expense_claim_dtoJSON, "expenseTypeId");
    if (expense_type_id) { 
    if(!cJSON_IsString(expense_type_id) && !cJSON_IsNull(expense_type_id))
    {
    goto end; //String
    }
    }

    // expense_claim_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(expense_claim_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // expense_claim_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(expense_claim_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }


    expense_claim_dto_local_var = expense_claim_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        expense_type_id && !cJSON_IsNull(expense_type_id) ? strdup(expense_type_id->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL
        );

    return expense_claim_dto_local_var;
end:
    return NULL;

}
