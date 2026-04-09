/*
 * invoice_line_applied_tax_update_dto.h
 *
 * 
 */

#ifndef _invoice_line_applied_tax_update_dto_H_
#define _invoice_line_applied_tax_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct invoice_line_applied_tax_update_dto_t invoice_line_applied_tax_update_dto_t;




typedef struct invoice_line_applied_tax_update_dto_t {
    char *tax_policy_id; // string

} invoice_line_applied_tax_update_dto_t;

invoice_line_applied_tax_update_dto_t *invoice_line_applied_tax_update_dto_create(
    char *tax_policy_id
);

void invoice_line_applied_tax_update_dto_free(invoice_line_applied_tax_update_dto_t *invoice_line_applied_tax_update_dto);

invoice_line_applied_tax_update_dto_t *invoice_line_applied_tax_update_dto_parseFromJSON(cJSON *invoice_line_applied_tax_update_dtoJSON);

cJSON *invoice_line_applied_tax_update_dto_convertToJSON(invoice_line_applied_tax_update_dto_t *invoice_line_applied_tax_update_dto);

#endif /* _invoice_line_applied_tax_update_dto_H_ */

