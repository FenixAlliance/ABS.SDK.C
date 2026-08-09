/*
 * fiscal_period_dto.h
 *
 * 
 */

#ifndef _fiscal_period_dto_H_
#define _fiscal_period_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct fiscal_period_dto_t fiscal_period_dto_t;


// Enum STATUS for fiscal_period_dto

typedef enum  { accountingservice_fiscal_period_dto_STATUS_NULL = 0, accountingservice_fiscal_period_dto_STATUS_Open, accountingservice_fiscal_period_dto_STATUS_Closed, accountingservice_fiscal_period_dto_STATUS_Locked } accountingservice_fiscal_period_dto_STATUS_e;

char* fiscal_period_dto_status_ToString(accountingservice_fiscal_period_dto_STATUS_e status);

accountingservice_fiscal_period_dto_STATUS_e fiscal_period_dto_status_FromString(char* status);



typedef struct fiscal_period_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *from_date; //date time
    char *to_date; //date time
    char *tenant_id; // string
    char *enrollment_id; // string
    char *fiscal_year_id; // string
    accountingservice_fiscal_period_dto_STATUS_e status; //enum

} fiscal_period_dto_t;

fiscal_period_dto_t *fiscal_period_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *from_date,
    char *to_date,
    char *tenant_id,
    char *enrollment_id,
    char *fiscal_year_id,
    accountingservice_fiscal_period_dto_STATUS_e status
);

void fiscal_period_dto_free(fiscal_period_dto_t *fiscal_period_dto);

fiscal_period_dto_t *fiscal_period_dto_parseFromJSON(cJSON *fiscal_period_dtoJSON);

cJSON *fiscal_period_dto_convertToJSON(fiscal_period_dto_t *fiscal_period_dto);

#endif /* _fiscal_period_dto_H_ */

