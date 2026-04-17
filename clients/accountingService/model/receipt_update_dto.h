/*
 * receipt_update_dto.h
 *
 * 
 */

#ifndef _receipt_update_dto_H_
#define _receipt_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct receipt_update_dto_t receipt_update_dto_t;




typedef struct receipt_update_dto_t {
    char *payment_id; // string
    double forex_rate; //numeric
    double total_amount; //numeric
    double total_amount_in_usd; //numeric
    int closed; //boolean
    char *currency_id; // string
    char *contact_id; // string
    char *order_id; // string
    char *invoice_id; // string

} receipt_update_dto_t;

receipt_update_dto_t *receipt_update_dto_create(
    char *payment_id,
    double forex_rate,
    double total_amount,
    double total_amount_in_usd,
    int closed,
    char *currency_id,
    char *contact_id,
    char *order_id,
    char *invoice_id
);

void receipt_update_dto_free(receipt_update_dto_t *receipt_update_dto);

receipt_update_dto_t *receipt_update_dto_parseFromJSON(cJSON *receipt_update_dtoJSON);

cJSON *receipt_update_dto_convertToJSON(receipt_update_dto_t *receipt_update_dto);

#endif /* _receipt_update_dto_H_ */

