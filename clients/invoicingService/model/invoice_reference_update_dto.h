/*
 * invoice_reference_update_dto.h
 *
 * 
 */

#ifndef _invoice_reference_update_dto_H_
#define _invoice_reference_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct invoice_reference_update_dto_t invoice_reference_update_dto_t;




typedef struct invoice_reference_update_dto_t {
    char *referenced_invoice_id; // string

} invoice_reference_update_dto_t;

invoice_reference_update_dto_t *invoice_reference_update_dto_create(
    char *referenced_invoice_id
);

void invoice_reference_update_dto_free(invoice_reference_update_dto_t *invoice_reference_update_dto);

invoice_reference_update_dto_t *invoice_reference_update_dto_parseFromJSON(cJSON *invoice_reference_update_dtoJSON);

cJSON *invoice_reference_update_dto_convertToJSON(invoice_reference_update_dto_t *invoice_reference_update_dto);

#endif /* _invoice_reference_update_dto_H_ */

