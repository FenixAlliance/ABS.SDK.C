#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "invoice_line_applied_tax_update_dto.h"



invoice_line_applied_tax_update_dto_t *invoice_line_applied_tax_update_dto_create(
    char *tax_policy_id
    ) {
    invoice_line_applied_tax_update_dto_t *invoice_line_applied_tax_update_dto_local_var = malloc(sizeof(invoice_line_applied_tax_update_dto_t));
    if (!invoice_line_applied_tax_update_dto_local_var) {
        return NULL;
    }
    invoice_line_applied_tax_update_dto_local_var->tax_policy_id = tax_policy_id;

    return invoice_line_applied_tax_update_dto_local_var;
}


void invoice_line_applied_tax_update_dto_free(invoice_line_applied_tax_update_dto_t *invoice_line_applied_tax_update_dto) {
    if(NULL == invoice_line_applied_tax_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (invoice_line_applied_tax_update_dto->tax_policy_id) {
        free(invoice_line_applied_tax_update_dto->tax_policy_id);
        invoice_line_applied_tax_update_dto->tax_policy_id = NULL;
    }
    free(invoice_line_applied_tax_update_dto);
}

cJSON *invoice_line_applied_tax_update_dto_convertToJSON(invoice_line_applied_tax_update_dto_t *invoice_line_applied_tax_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // invoice_line_applied_tax_update_dto->tax_policy_id
    if(invoice_line_applied_tax_update_dto->tax_policy_id) {
    if(cJSON_AddStringToObject(item, "taxPolicyId", invoice_line_applied_tax_update_dto->tax_policy_id) == NULL) {
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

invoice_line_applied_tax_update_dto_t *invoice_line_applied_tax_update_dto_parseFromJSON(cJSON *invoice_line_applied_tax_update_dtoJSON){

    invoice_line_applied_tax_update_dto_t *invoice_line_applied_tax_update_dto_local_var = NULL;

    // invoice_line_applied_tax_update_dto->tax_policy_id
    cJSON *tax_policy_id = cJSON_GetObjectItemCaseSensitive(invoice_line_applied_tax_update_dtoJSON, "taxPolicyId");
    if (tax_policy_id) { 
    if(!cJSON_IsString(tax_policy_id) && !cJSON_IsNull(tax_policy_id))
    {
    goto end; //String
    }
    }


    invoice_line_applied_tax_update_dto_local_var = invoice_line_applied_tax_update_dto_create (
        tax_policy_id && !cJSON_IsNull(tax_policy_id) ? strdup(tax_policy_id->valuestring) : NULL
        );

    return invoice_line_applied_tax_update_dto_local_var;
end:
    return NULL;

}
