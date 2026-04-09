#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "invoice_reference_update_dto.h"



invoice_reference_update_dto_t *invoice_reference_update_dto_create(
    char *referenced_invoice_id
    ) {
    invoice_reference_update_dto_t *invoice_reference_update_dto_local_var = malloc(sizeof(invoice_reference_update_dto_t));
    if (!invoice_reference_update_dto_local_var) {
        return NULL;
    }
    invoice_reference_update_dto_local_var->referenced_invoice_id = referenced_invoice_id;

    return invoice_reference_update_dto_local_var;
}


void invoice_reference_update_dto_free(invoice_reference_update_dto_t *invoice_reference_update_dto) {
    if(NULL == invoice_reference_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (invoice_reference_update_dto->referenced_invoice_id) {
        free(invoice_reference_update_dto->referenced_invoice_id);
        invoice_reference_update_dto->referenced_invoice_id = NULL;
    }
    free(invoice_reference_update_dto);
}

cJSON *invoice_reference_update_dto_convertToJSON(invoice_reference_update_dto_t *invoice_reference_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // invoice_reference_update_dto->referenced_invoice_id
    if(invoice_reference_update_dto->referenced_invoice_id) {
    if(cJSON_AddStringToObject(item, "referencedInvoiceId", invoice_reference_update_dto->referenced_invoice_id) == NULL) {
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

invoice_reference_update_dto_t *invoice_reference_update_dto_parseFromJSON(cJSON *invoice_reference_update_dtoJSON){

    invoice_reference_update_dto_t *invoice_reference_update_dto_local_var = NULL;

    // invoice_reference_update_dto->referenced_invoice_id
    cJSON *referenced_invoice_id = cJSON_GetObjectItemCaseSensitive(invoice_reference_update_dtoJSON, "referencedInvoiceId");
    if (referenced_invoice_id) { 
    if(!cJSON_IsString(referenced_invoice_id) && !cJSON_IsNull(referenced_invoice_id))
    {
    goto end; //String
    }
    }


    invoice_reference_update_dto_local_var = invoice_reference_update_dto_create (
        referenced_invoice_id && !cJSON_IsNull(referenced_invoice_id) ? strdup(referenced_invoice_id->valuestring) : NULL
        );

    return invoice_reference_update_dto_local_var;
end:
    return NULL;

}
