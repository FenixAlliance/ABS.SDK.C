/*
 * price_list_create_dto.h
 *
 * 
 */

#ifndef _price_list_create_dto_H_
#define _price_list_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct price_list_create_dto_t price_list_create_dto_t;


// Enum CONTEXT for price_list_create_dto

typedef enum  { pricingservice_price_list_create_dto_CONTEXT_NULL = 0, pricingservice_price_list_create_dto_CONTEXT_Sales, pricingservice_price_list_create_dto_CONTEXT_Purchase, pricingservice_price_list_create_dto_CONTEXT_Cost } pricingservice_price_list_create_dto_CONTEXT_e;

char* price_list_create_dto_context_ToString(pricingservice_price_list_create_dto_CONTEXT_e context);

pricingservice_price_list_create_dto_CONTEXT_e price_list_create_dto_context_FromString(char* context);



typedef struct price_list_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *description; // string
    pricingservice_price_list_create_dto_CONTEXT_e context; //enum
    char *start_date; //date time
    char *end_date; //date time
    char *currency_id; // string
    char *unit_id; // string
    char *unit_group_id; // string
    int partner_visible; //boolean
    int unit_of_measure_dependant; //boolean

} price_list_create_dto_t;

price_list_create_dto_t *price_list_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description,
    pricingservice_price_list_create_dto_CONTEXT_e context,
    char *start_date,
    char *end_date,
    char *currency_id,
    char *unit_id,
    char *unit_group_id,
    int partner_visible,
    int unit_of_measure_dependant
);

void price_list_create_dto_free(price_list_create_dto_t *price_list_create_dto);

price_list_create_dto_t *price_list_create_dto_parseFromJSON(cJSON *price_list_create_dtoJSON);

cJSON *price_list_create_dto_convertToJSON(price_list_create_dto_t *price_list_create_dto);

#endif /* _price_list_create_dto_H_ */

