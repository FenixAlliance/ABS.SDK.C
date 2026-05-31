/*
 * tax_class_create_dto.h
 *
 * 
 */

#ifndef _tax_class_create_dto_H_
#define _tax_class_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct tax_class_create_dto_t tax_class_create_dto_t;


// Enum TYPE for tax_class_create_dto

typedef enum  { accountingservice_tax_class_create_dto_TYPE_NULL = 0, accountingservice_tax_class_create_dto_TYPE_Tax, accountingservice_tax_class_create_dto_TYPE_Withholding } accountingservice_tax_class_create_dto_TYPE_e;

char* tax_class_create_dto_type_ToString(accountingservice_tax_class_create_dto_TYPE_e type);

accountingservice_tax_class_create_dto_TYPE_e tax_class_create_dto_type_FromString(char* type);



typedef struct tax_class_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    accountingservice_tax_class_create_dto_TYPE_e type; //enum
    char *fiscal_authority_id; // string

} tax_class_create_dto_t;

tax_class_create_dto_t *tax_class_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    accountingservice_tax_class_create_dto_TYPE_e type,
    char *fiscal_authority_id
);

void tax_class_create_dto_free(tax_class_create_dto_t *tax_class_create_dto);

tax_class_create_dto_t *tax_class_create_dto_parseFromJSON(cJSON *tax_class_create_dtoJSON);

cJSON *tax_class_create_dto_convertToJSON(tax_class_create_dto_t *tax_class_create_dto);

#endif /* _tax_class_create_dto_H_ */

