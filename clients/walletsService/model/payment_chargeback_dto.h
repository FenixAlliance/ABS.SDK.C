/*
 * payment_chargeback_dto.h
 *
 * 
 */

#ifndef _payment_chargeback_dto_H_
#define _payment_chargeback_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct payment_chargeback_dto_t payment_chargeback_dto_t;




typedef struct payment_chargeback_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *request_date; //date time
    char *payment_id; // string
    char *bank_profile_id; // string
    char *bank_profile_name; // string
    double total_fees; //numeric

} payment_chargeback_dto_t;

payment_chargeback_dto_t *payment_chargeback_dto_create(
    char *id,
    char *timestamp,
    char *request_date,
    char *payment_id,
    char *bank_profile_id,
    char *bank_profile_name,
    double total_fees
);

void payment_chargeback_dto_free(payment_chargeback_dto_t *payment_chargeback_dto);

payment_chargeback_dto_t *payment_chargeback_dto_parseFromJSON(cJSON *payment_chargeback_dtoJSON);

cJSON *payment_chargeback_dto_convertToJSON(payment_chargeback_dto_t *payment_chargeback_dto);

#endif /* _payment_chargeback_dto_H_ */

