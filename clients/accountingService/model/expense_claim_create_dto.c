#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "expense_claim_create_dto.h"



expense_claim_create_dto_t *expense_claim_create_dto_create(
    char *id,
    char *timestamp,
    char *expense_type_id
    ) {
    expense_claim_create_dto_t *expense_claim_create_dto_local_var = malloc(sizeof(expense_claim_create_dto_t));
    if (!expense_claim_create_dto_local_var) {
        return NULL;
    }
    expense_claim_create_dto_local_var->id = id;
    expense_claim_create_dto_local_var->timestamp = timestamp;
    expense_claim_create_dto_local_var->expense_type_id = expense_type_id;

    return expense_claim_create_dto_local_var;
}


void expense_claim_create_dto_free(expense_claim_create_dto_t *expense_claim_create_dto) {
    if(NULL == expense_claim_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (expense_claim_create_dto->id) {
        free(expense_claim_create_dto->id);
        expense_claim_create_dto->id = NULL;
    }
    if (expense_claim_create_dto->timestamp) {
        free(expense_claim_create_dto->timestamp);
        expense_claim_create_dto->timestamp = NULL;
    }
    if (expense_claim_create_dto->expense_type_id) {
        free(expense_claim_create_dto->expense_type_id);
        expense_claim_create_dto->expense_type_id = NULL;
    }
    free(expense_claim_create_dto);
}

cJSON *expense_claim_create_dto_convertToJSON(expense_claim_create_dto_t *expense_claim_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // expense_claim_create_dto->id
    if(expense_claim_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", expense_claim_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // expense_claim_create_dto->timestamp
    if(expense_claim_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", expense_claim_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // expense_claim_create_dto->expense_type_id
    if(expense_claim_create_dto->expense_type_id) {
    if(cJSON_AddStringToObject(item, "expenseTypeId", expense_claim_create_dto->expense_type_id) == NULL) {
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

expense_claim_create_dto_t *expense_claim_create_dto_parseFromJSON(cJSON *expense_claim_create_dtoJSON){

    expense_claim_create_dto_t *expense_claim_create_dto_local_var = NULL;

    // expense_claim_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(expense_claim_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // expense_claim_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(expense_claim_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // expense_claim_create_dto->expense_type_id
    cJSON *expense_type_id = cJSON_GetObjectItemCaseSensitive(expense_claim_create_dtoJSON, "expenseTypeId");
    if (expense_type_id) { 
    if(!cJSON_IsString(expense_type_id) && !cJSON_IsNull(expense_type_id))
    {
    goto end; //String
    }
    }


    expense_claim_create_dto_local_var = expense_claim_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        expense_type_id && !cJSON_IsNull(expense_type_id) ? strdup(expense_type_id->valuestring) : NULL
        );

    return expense_claim_create_dto_local_var;
end:
    return NULL;

}
