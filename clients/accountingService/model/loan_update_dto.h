/*
 * loan_update_dto.h
 *
 * 
 */

#ifndef _loan_update_dto_H_
#define _loan_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct loan_update_dto_t loan_update_dto_t;




typedef struct loan_update_dto_t {
    char *loan_timestamp; //date time
    char *payment_deadline; //date time
    double value; //numeric
    double interest_rate; //numeric
    int is_compund_interest_rate; //boolean
    char *loan_type_id; // string
    char *currency_id; // string
    char *enrollment_id; // string

} loan_update_dto_t;

loan_update_dto_t *loan_update_dto_create(
    char *loan_timestamp,
    char *payment_deadline,
    double value,
    double interest_rate,
    int is_compund_interest_rate,
    char *loan_type_id,
    char *currency_id,
    char *enrollment_id
);

void loan_update_dto_free(loan_update_dto_t *loan_update_dto);

loan_update_dto_t *loan_update_dto_parseFromJSON(cJSON *loan_update_dtoJSON);

cJSON *loan_update_dto_convertToJSON(loan_update_dto_t *loan_update_dto);

#endif /* _loan_update_dto_H_ */

