/*
 * sales_literature_dto_list_envelope.h
 *
 * 
 */

#ifndef _sales_literature_dto_list_envelope_H_
#define _sales_literature_dto_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct sales_literature_dto_list_envelope_t sales_literature_dto_list_envelope_t;

#include "sales_literature_dto.h"



typedef struct sales_literature_dto_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    list_t *result; //nonprimitive container

} sales_literature_dto_list_envelope_t;

sales_literature_dto_list_envelope_t *sales_literature_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
);

void sales_literature_dto_list_envelope_free(sales_literature_dto_list_envelope_t *sales_literature_dto_list_envelope);

sales_literature_dto_list_envelope_t *sales_literature_dto_list_envelope_parseFromJSON(cJSON *sales_literature_dto_list_envelopeJSON);

cJSON *sales_literature_dto_list_envelope_convertToJSON(sales_literature_dto_list_envelope_t *sales_literature_dto_list_envelope);

#endif /* _sales_literature_dto_list_envelope_H_ */

