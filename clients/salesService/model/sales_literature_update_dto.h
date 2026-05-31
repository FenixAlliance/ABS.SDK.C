/*
 * sales_literature_update_dto.h
 *
 * 
 */

#ifndef _sales_literature_update_dto_H_
#define _sales_literature_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct sales_literature_update_dto_t sales_literature_update_dto_t;




typedef struct sales_literature_update_dto_t {
    char *title; // string
    char *content; // string
    char *description; // string
    char *modified_date; //date time
    char *expiration_date; //date time
    char *sales_literature_type_id; // string

} sales_literature_update_dto_t;

sales_literature_update_dto_t *sales_literature_update_dto_create(
    char *title,
    char *content,
    char *description,
    char *modified_date,
    char *expiration_date,
    char *sales_literature_type_id
);

void sales_literature_update_dto_free(sales_literature_update_dto_t *sales_literature_update_dto);

sales_literature_update_dto_t *sales_literature_update_dto_parseFromJSON(cJSON *sales_literature_update_dtoJSON);

cJSON *sales_literature_update_dto_convertToJSON(sales_literature_update_dto_t *sales_literature_update_dto);

#endif /* _sales_literature_update_dto_H_ */

