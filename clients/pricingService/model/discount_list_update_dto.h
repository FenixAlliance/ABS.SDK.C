/*
 * discount_list_update_dto.h
 *
 * 
 */

#ifndef _discount_list_update_dto_H_
#define _discount_list_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct discount_list_update_dto_t discount_list_update_dto_t;


// Enum DISCOUNTLISTTYPE for discount_list_update_dto

typedef enum  { pricingservice_discount_list_update_dto_DISCOUNTLISTTYPE_NULL = 0, pricingservice_discount_list_update_dto_DISCOUNTLISTTYPE_Amount, pricingservice_discount_list_update_dto_DISCOUNTLISTTYPE_Percentage } pricingservice_discount_list_update_dto_DISCOUNTLISTTYPE_e;

char* discount_list_update_dto_discount_list_type_ToString(pricingservice_discount_list_update_dto_DISCOUNTLISTTYPE_e discount_list_type);

pricingservice_discount_list_update_dto_DISCOUNTLISTTYPE_e discount_list_update_dto_discount_list_type_FromString(char* discount_list_type);



typedef struct discount_list_update_dto_t {
    char *name; // string
    pricingservice_discount_list_update_dto_DISCOUNTLISTTYPE_e discount_list_type; //enum
    char *currency_id; // string

} discount_list_update_dto_t;

discount_list_update_dto_t *discount_list_update_dto_create(
    char *name,
    pricingservice_discount_list_update_dto_DISCOUNTLISTTYPE_e discount_list_type,
    char *currency_id
);

void discount_list_update_dto_free(discount_list_update_dto_t *discount_list_update_dto);

discount_list_update_dto_t *discount_list_update_dto_parseFromJSON(cJSON *discount_list_update_dtoJSON);

cJSON *discount_list_update_dto_convertToJSON(discount_list_update_dto_t *discount_list_update_dto);

#endif /* _discount_list_update_dto_H_ */

