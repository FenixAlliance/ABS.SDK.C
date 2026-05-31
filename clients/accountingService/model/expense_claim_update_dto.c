#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "expense_claim_update_dto.h"



expense_claim_update_dto_t *expense_claim_update_dto_create(
    char *expense_type_id
    ) {
    expense_claim_update_dto_t *expense_claim_update_dto_local_var = malloc(sizeof(expense_claim_update_dto_t));
    if (!expense_claim_update_dto_local_var) {
        return NULL;
    }
    expense_claim_update_dto_local_var->expense_type_id = expense_type_id;

    return expense_claim_update_dto_local_var;
}


void expense_claim_update_dto_free(expense_claim_update_dto_t *expense_claim_update_dto) {
    if(NULL == expense_claim_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (expense_claim_update_dto->expense_type_id) {
        free(expense_claim_update_dto->expense_type_id);
        expense_claim_update_dto->expense_type_id = NULL;
    }
    free(expense_claim_update_dto);
}

cJSON *expense_claim_update_dto_convertToJSON(expense_claim_update_dto_t *expense_claim_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // expense_claim_update_dto->expense_type_id
    if(expense_claim_update_dto->expense_type_id) {
    if(cJSON_AddStringToObject(item, "expenseTypeId", expense_claim_update_dto->expense_type_id) == NULL) {
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

expense_claim_update_dto_t *expense_claim_update_dto_parseFromJSON(cJSON *expense_claim_update_dtoJSON){

    expense_claim_update_dto_t *expense_claim_update_dto_local_var = NULL;

    // expense_claim_update_dto->expense_type_id
    cJSON *expense_type_id = cJSON_GetObjectItemCaseSensitive(expense_claim_update_dtoJSON, "expenseTypeId");
    if (expense_type_id) { 
    if(!cJSON_IsString(expense_type_id) && !cJSON_IsNull(expense_type_id))
    {
    goto end; //String
    }
    }


    expense_claim_update_dto_local_var = expense_claim_update_dto_create (
        expense_type_id && !cJSON_IsNull(expense_type_id) ? strdup(expense_type_id->valuestring) : NULL
        );

    return expense_claim_update_dto_local_var;
end:
    return NULL;

}
