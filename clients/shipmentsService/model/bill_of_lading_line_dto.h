/*
 * bill_of_lading_line_dto.h
 *
 * 
 */

#ifndef _bill_of_lading_line_dto_H_
#define _bill_of_lading_line_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct bill_of_lading_line_dto_t bill_of_lading_line_dto_t;




typedef struct bill_of_lading_line_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *description; // string
    double quantity; //numeric
    char *package_type; // string
    double gross_weight_kg; //numeric
    double volume_m3; //numeric
    char *marks_and_numbers; // string
    char *hs_code; // string
    char *item_id; // string
    char *bill_of_lading_id; // string
    char *tenant_id; // string

} bill_of_lading_line_dto_t;

bill_of_lading_line_dto_t *bill_of_lading_line_dto_create(
    char *id,
    char *timestamp,
    char *description,
    double quantity,
    char *package_type,
    double gross_weight_kg,
    double volume_m3,
    char *marks_and_numbers,
    char *hs_code,
    char *item_id,
    char *bill_of_lading_id,
    char *tenant_id
);

void bill_of_lading_line_dto_free(bill_of_lading_line_dto_t *bill_of_lading_line_dto);

bill_of_lading_line_dto_t *bill_of_lading_line_dto_parseFromJSON(cJSON *bill_of_lading_line_dtoJSON);

cJSON *bill_of_lading_line_dto_convertToJSON(bill_of_lading_line_dto_t *bill_of_lading_line_dto);

#endif /* _bill_of_lading_line_dto_H_ */

