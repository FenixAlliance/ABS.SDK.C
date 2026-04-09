#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "receipt_dto.h"


char* receipt_dto_receipt_type_ToString(accountingservice_receipt_dto_RECEIPTTYPE_e receipt_type) {
    char* receipt_typeArray[] =  { "NULL", "PaymentReceipt", "PurchaseReceipt" };
    return receipt_typeArray[receipt_type];
}

accountingservice_receipt_dto_RECEIPTTYPE_e receipt_dto_receipt_type_FromString(char* receipt_type){
    int stringToReturn = 0;
    char *receipt_typeArray[] =  { "NULL", "PaymentReceipt", "PurchaseReceipt" };
    size_t sizeofArray = sizeof(receipt_typeArray) / sizeof(receipt_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(receipt_type, receipt_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

receipt_dto_t *receipt_dto_create(
    char *id,
    char *timestamp,
    char *payment_id,
    char *tenant_id,
    int closed,
    char *account_holder_id,
    char *contact_id,
    char *enrollment_id,
    accountingservice_receipt_dto_RECEIPTTYPE_e receipt_type,
    char *order_id,
    char *invoice_id
    ) {
    receipt_dto_t *receipt_dto_local_var = malloc(sizeof(receipt_dto_t));
    if (!receipt_dto_local_var) {
        return NULL;
    }
    receipt_dto_local_var->id = id;
    receipt_dto_local_var->timestamp = timestamp;
    receipt_dto_local_var->payment_id = payment_id;
    receipt_dto_local_var->tenant_id = tenant_id;
    receipt_dto_local_var->closed = closed;
    receipt_dto_local_var->account_holder_id = account_holder_id;
    receipt_dto_local_var->contact_id = contact_id;
    receipt_dto_local_var->enrollment_id = enrollment_id;
    receipt_dto_local_var->receipt_type = receipt_type;
    receipt_dto_local_var->order_id = order_id;
    receipt_dto_local_var->invoice_id = invoice_id;

    return receipt_dto_local_var;
}


void receipt_dto_free(receipt_dto_t *receipt_dto) {
    if(NULL == receipt_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (receipt_dto->id) {
        free(receipt_dto->id);
        receipt_dto->id = NULL;
    }
    if (receipt_dto->timestamp) {
        free(receipt_dto->timestamp);
        receipt_dto->timestamp = NULL;
    }
    if (receipt_dto->payment_id) {
        free(receipt_dto->payment_id);
        receipt_dto->payment_id = NULL;
    }
    if (receipt_dto->tenant_id) {
        free(receipt_dto->tenant_id);
        receipt_dto->tenant_id = NULL;
    }
    if (receipt_dto->account_holder_id) {
        free(receipt_dto->account_holder_id);
        receipt_dto->account_holder_id = NULL;
    }
    if (receipt_dto->contact_id) {
        free(receipt_dto->contact_id);
        receipt_dto->contact_id = NULL;
    }
    if (receipt_dto->enrollment_id) {
        free(receipt_dto->enrollment_id);
        receipt_dto->enrollment_id = NULL;
    }
    if (receipt_dto->order_id) {
        free(receipt_dto->order_id);
        receipt_dto->order_id = NULL;
    }
    if (receipt_dto->invoice_id) {
        free(receipt_dto->invoice_id);
        receipt_dto->invoice_id = NULL;
    }
    free(receipt_dto);
}

cJSON *receipt_dto_convertToJSON(receipt_dto_t *receipt_dto) {
    cJSON *item = cJSON_CreateObject();

    // receipt_dto->id
    if(receipt_dto->id) {
    if(cJSON_AddStringToObject(item, "id", receipt_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // receipt_dto->timestamp
    if(receipt_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", receipt_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // receipt_dto->payment_id
    if(receipt_dto->payment_id) {
    if(cJSON_AddStringToObject(item, "paymentId", receipt_dto->payment_id) == NULL) {
    goto fail; //String
    }
    }


    // receipt_dto->tenant_id
    if(receipt_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", receipt_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // receipt_dto->closed
    if(receipt_dto->closed) {
    if(cJSON_AddBoolToObject(item, "closed", receipt_dto->closed) == NULL) {
    goto fail; //Bool
    }
    }


    // receipt_dto->account_holder_id
    if(receipt_dto->account_holder_id) {
    if(cJSON_AddStringToObject(item, "accountHolderId", receipt_dto->account_holder_id) == NULL) {
    goto fail; //String
    }
    }


    // receipt_dto->contact_id
    if(receipt_dto->contact_id) {
    if(cJSON_AddStringToObject(item, "contactId", receipt_dto->contact_id) == NULL) {
    goto fail; //String
    }
    }


    // receipt_dto->enrollment_id
    if(receipt_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", receipt_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // receipt_dto->receipt_type
    if(receipt_dto->receipt_type != accountingservice_receipt_dto_RECEIPTTYPE_NULL) {
    if(cJSON_AddStringToObject(item, "receiptType", receipt_typereceipt_dto_ToString(receipt_dto->receipt_type)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // receipt_dto->order_id
    if(receipt_dto->order_id) {
    if(cJSON_AddStringToObject(item, "orderId", receipt_dto->order_id) == NULL) {
    goto fail; //String
    }
    }


    // receipt_dto->invoice_id
    if(receipt_dto->invoice_id) {
    if(cJSON_AddStringToObject(item, "invoiceId", receipt_dto->invoice_id) == NULL) {
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

receipt_dto_t *receipt_dto_parseFromJSON(cJSON *receipt_dtoJSON){

    receipt_dto_t *receipt_dto_local_var = NULL;

    // receipt_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(receipt_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // receipt_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(receipt_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // receipt_dto->payment_id
    cJSON *payment_id = cJSON_GetObjectItemCaseSensitive(receipt_dtoJSON, "paymentId");
    if (payment_id) { 
    if(!cJSON_IsString(payment_id) && !cJSON_IsNull(payment_id))
    {
    goto end; //String
    }
    }

    // receipt_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(receipt_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // receipt_dto->closed
    cJSON *closed = cJSON_GetObjectItemCaseSensitive(receipt_dtoJSON, "closed");
    if (closed) { 
    if(!cJSON_IsBool(closed))
    {
    goto end; //Bool
    }
    }

    // receipt_dto->account_holder_id
    cJSON *account_holder_id = cJSON_GetObjectItemCaseSensitive(receipt_dtoJSON, "accountHolderId");
    if (account_holder_id) { 
    if(!cJSON_IsString(account_holder_id) && !cJSON_IsNull(account_holder_id))
    {
    goto end; //String
    }
    }

    // receipt_dto->contact_id
    cJSON *contact_id = cJSON_GetObjectItemCaseSensitive(receipt_dtoJSON, "contactId");
    if (contact_id) { 
    if(!cJSON_IsString(contact_id) && !cJSON_IsNull(contact_id))
    {
    goto end; //String
    }
    }

    // receipt_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(receipt_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // receipt_dto->receipt_type
    cJSON *receipt_type = cJSON_GetObjectItemCaseSensitive(receipt_dtoJSON, "receiptType");
    accountingservice_receipt_dto_RECEIPTTYPE_e receipt_typeVariable;
    if (receipt_type) { 
    if(!cJSON_IsString(receipt_type))
    {
    goto end; //Enum
    }
    receipt_typeVariable = receipt_dto_receipt_type_FromString(receipt_type->valuestring);
    }

    // receipt_dto->order_id
    cJSON *order_id = cJSON_GetObjectItemCaseSensitive(receipt_dtoJSON, "orderId");
    if (order_id) { 
    if(!cJSON_IsString(order_id) && !cJSON_IsNull(order_id))
    {
    goto end; //String
    }
    }

    // receipt_dto->invoice_id
    cJSON *invoice_id = cJSON_GetObjectItemCaseSensitive(receipt_dtoJSON, "invoiceId");
    if (invoice_id) { 
    if(!cJSON_IsString(invoice_id) && !cJSON_IsNull(invoice_id))
    {
    goto end; //String
    }
    }


    receipt_dto_local_var = receipt_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        payment_id && !cJSON_IsNull(payment_id) ? strdup(payment_id->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        closed ? closed->valueint : 0,
        account_holder_id && !cJSON_IsNull(account_holder_id) ? strdup(account_holder_id->valuestring) : NULL,
        contact_id && !cJSON_IsNull(contact_id) ? strdup(contact_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        receipt_type ? receipt_typeVariable : accountingservice_receipt_dto_RECEIPTTYPE_NULL,
        order_id && !cJSON_IsNull(order_id) ? strdup(order_id->valuestring) : NULL,
        invoice_id && !cJSON_IsNull(invoice_id) ? strdup(invoice_id->valuestring) : NULL
        );

    return receipt_dto_local_var;
end:
    return NULL;

}
