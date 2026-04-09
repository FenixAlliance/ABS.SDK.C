/*
 * invoice_line_applied_tax_create_dto.h
 *
 * 
 */

#ifndef _invoice_line_applied_tax_create_dto_H_
#define _invoice_line_applied_tax_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct invoice_line_applied_tax_create_dto_t invoice_line_applied_tax_create_dto_t;




typedef struct invoice_line_applied_tax_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *tenant_id; // string
    char *invoice_id; // string
    char *tax_policy_id; // string
    char *enrollment_id; // string

} invoice_line_applied_tax_create_dto_t;

invoice_line_applied_tax_create_dto_t *invoice_line_applied_tax_create_dto_create(
    char *id,
    char *timestamp,
    char *tenant_id,
    char *invoice_id,
    char *tax_policy_id,
    char *enrollment_id
);

void invoice_line_applied_tax_create_dto_free(invoice_line_applied_tax_create_dto_t *invoice_line_applied_tax_create_dto);

invoice_line_applied_tax_create_dto_t *invoice_line_applied_tax_create_dto_parseFromJSON(cJSON *invoice_line_applied_tax_create_dtoJSON);

cJSON *invoice_line_applied_tax_create_dto_convertToJSON(invoice_line_applied_tax_create_dto_t *invoice_line_applied_tax_create_dto);

#endif /* _invoice_line_applied_tax_create_dto_H_ */

