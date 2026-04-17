/*
 * payment_term_create_dto.h
 *
 * 
 */

#ifndef _payment_term_create_dto_H_
#define _payment_term_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct payment_term_create_dto_t payment_term_create_dto_t;




typedef struct payment_term_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *description; // string
    int is_template; //boolean
    double percentage; //numeric
    double credit_days; //numeric
    double credit_weeks; //numeric
    double credit_months; //numeric
    double credit_years; //numeric
    char *payment_mode_id; // string

} payment_term_create_dto_t;

payment_term_create_dto_t *payment_term_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description,
    int is_template,
    double percentage,
    double credit_days,
    double credit_weeks,
    double credit_months,
    double credit_years,
    char *payment_mode_id
);

void payment_term_create_dto_free(payment_term_create_dto_t *payment_term_create_dto);

payment_term_create_dto_t *payment_term_create_dto_parseFromJSON(cJSON *payment_term_create_dtoJSON);

cJSON *payment_term_create_dto_convertToJSON(payment_term_create_dto_t *payment_term_create_dto);

#endif /* _payment_term_create_dto_H_ */

