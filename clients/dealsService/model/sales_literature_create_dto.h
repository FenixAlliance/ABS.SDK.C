/*
 * sales_literature_create_dto.h
 *
 * 
 */

#ifndef _sales_literature_create_dto_H_
#define _sales_literature_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct sales_literature_create_dto_t sales_literature_create_dto_t;




typedef struct sales_literature_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *title; // string
    char *content; // string
    char *description; // string
    char *modified_date; //date time
    char *expiration_date; //date time
    char *tenant_id; // string
    char *enrollment_id; // string
    char *sales_literature_type_id; // string

} sales_literature_create_dto_t;

sales_literature_create_dto_t *sales_literature_create_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *content,
    char *description,
    char *modified_date,
    char *expiration_date,
    char *tenant_id,
    char *enrollment_id,
    char *sales_literature_type_id
);

void sales_literature_create_dto_free(sales_literature_create_dto_t *sales_literature_create_dto);

sales_literature_create_dto_t *sales_literature_create_dto_parseFromJSON(cJSON *sales_literature_create_dtoJSON);

cJSON *sales_literature_create_dto_convertToJSON(sales_literature_create_dto_t *sales_literature_create_dto);

#endif /* _sales_literature_create_dto_H_ */

