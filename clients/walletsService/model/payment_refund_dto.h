/*
 * payment_refund_dto.h
 *
 * 
 */

#ifndef _payment_refund_dto_H_
#define _payment_refund_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct payment_refund_dto_t payment_refund_dto_t;




typedef struct payment_refund_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *payment_id; // string
    char *wallet_account_id; // string
    char *refund_request_id; // string
    double total_fees; //numeric

} payment_refund_dto_t;

payment_refund_dto_t *payment_refund_dto_create(
    char *id,
    char *timestamp,
    char *payment_id,
    char *wallet_account_id,
    char *refund_request_id,
    double total_fees
);

void payment_refund_dto_free(payment_refund_dto_t *payment_refund_dto);

payment_refund_dto_t *payment_refund_dto_parseFromJSON(cJSON *payment_refund_dtoJSON);

cJSON *payment_refund_dto_convertToJSON(payment_refund_dto_t *payment_refund_dto);

#endif /* _payment_refund_dto_H_ */

