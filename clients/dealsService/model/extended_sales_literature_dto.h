/*
 * extended_sales_literature_dto.h
 *
 * 
 */

#ifndef _extended_sales_literature_dto_H_
#define _extended_sales_literature_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct extended_sales_literature_dto_t extended_sales_literature_dto_t;

#include "sales_literature_type_dto.h"
#include "tenant_dto.h"



typedef struct extended_sales_literature_dto_t {
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
    struct sales_literature_type_dto_t *sales_literature_type; //model
    struct tenant_dto_t *tenant; //model

} extended_sales_literature_dto_t;

extended_sales_literature_dto_t *extended_sales_literature_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *content,
    char *description,
    char *modified_date,
    char *expiration_date,
    char *tenant_id,
    char *enrollment_id,
    char *sales_literature_type_id,
    sales_literature_type_dto_t *sales_literature_type,
    tenant_dto_t *tenant
);

void extended_sales_literature_dto_free(extended_sales_literature_dto_t *extended_sales_literature_dto);

extended_sales_literature_dto_t *extended_sales_literature_dto_parseFromJSON(cJSON *extended_sales_literature_dtoJSON);

cJSON *extended_sales_literature_dto_convertToJSON(extended_sales_literature_dto_t *extended_sales_literature_dto);

#endif /* _extended_sales_literature_dto_H_ */

