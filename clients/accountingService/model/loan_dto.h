/*
 * loan_dto.h
 *
 * 
 */

#ifndef _loan_dto_H_
#define _loan_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct loan_dto_t loan_dto_t;




typedef struct loan_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *loan_timestamp; //date time
    char *payment_deadline; //date time
    double value; //numeric
    double interest_rate; //numeric
    int is_compund_interest_rate; //boolean
    char *loan_type_id; // string
    char *currency_id; // string
    char *tenant_id; // string
    char *enrollment_id; // string

} loan_dto_t;

loan_dto_t *loan_dto_create(
    char *id,
    char *timestamp,
    char *loan_timestamp,
    char *payment_deadline,
    double value,
    double interest_rate,
    int is_compund_interest_rate,
    char *loan_type_id,
    char *currency_id,
    char *tenant_id,
    char *enrollment_id
);

void loan_dto_free(loan_dto_t *loan_dto);

loan_dto_t *loan_dto_parseFromJSON(cJSON *loan_dtoJSON);

cJSON *loan_dto_convertToJSON(loan_dto_t *loan_dto);

#endif /* _loan_dto_H_ */

