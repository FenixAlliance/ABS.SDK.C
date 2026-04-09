/*
 * receipt_dto.h
 *
 * 
 */

#ifndef _receipt_dto_H_
#define _receipt_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct receipt_dto_t receipt_dto_t;


// Enum RECEIPTTYPE for receipt_dto

typedef enum  { accountingservice_receipt_dto_RECEIPTTYPE_NULL = 0, accountingservice_receipt_dto_RECEIPTTYPE_PaymentReceipt, accountingservice_receipt_dto_RECEIPTTYPE_PurchaseReceipt } accountingservice_receipt_dto_RECEIPTTYPE_e;

char* receipt_dto_receipt_type_ToString(accountingservice_receipt_dto_RECEIPTTYPE_e receipt_type);

accountingservice_receipt_dto_RECEIPTTYPE_e receipt_dto_receipt_type_FromString(char* receipt_type);



typedef struct receipt_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *payment_id; // string
    char *tenant_id; // string
    int closed; //boolean
    char *account_holder_id; // string
    char *contact_id; // string
    char *enrollment_id; // string
    accountingservice_receipt_dto_RECEIPTTYPE_e receipt_type; //enum
    char *order_id; // string
    char *invoice_id; // string

} receipt_dto_t;

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
);

void receipt_dto_free(receipt_dto_t *receipt_dto);

receipt_dto_t *receipt_dto_parseFromJSON(cJSON *receipt_dtoJSON);

cJSON *receipt_dto_convertToJSON(receipt_dto_t *receipt_dto);

#endif /* _receipt_dto_H_ */

