/*
 * sales_literature_type_dto.h
 *
 * 
 */

#ifndef _sales_literature_type_dto_H_
#define _sales_literature_type_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct sales_literature_type_dto_t sales_literature_type_dto_t;




typedef struct sales_literature_type_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *tenant_id; // string
    char *enrollment_id; // string

} sales_literature_type_dto_t;

sales_literature_type_dto_t *sales_literature_type_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *tenant_id,
    char *enrollment_id
);

void sales_literature_type_dto_free(sales_literature_type_dto_t *sales_literature_type_dto);

sales_literature_type_dto_t *sales_literature_type_dto_parseFromJSON(cJSON *sales_literature_type_dtoJSON);

cJSON *sales_literature_type_dto_convertToJSON(sales_literature_type_dto_t *sales_literature_type_dto);

#endif /* _sales_literature_type_dto_H_ */

