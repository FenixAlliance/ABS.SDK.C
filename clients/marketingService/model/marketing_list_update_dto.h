/*
 * marketing_list_update_dto.h
 *
 * 
 */

#ifndef _marketing_list_update_dto_H_
#define _marketing_list_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct marketing_list_update_dto_t marketing_list_update_dto_t;


// Enum MARKETINGLISTTYPE for marketing_list_update_dto

typedef enum  { marketingservice_marketing_list_update_dto_MARKETINGLISTTYPE_NULL = 0, marketingservice_marketing_list_update_dto_MARKETINGLISTTYPE__Static, marketingservice_marketing_list_update_dto_MARKETINGLISTTYPE_Dynamic } marketingservice_marketing_list_update_dto_MARKETINGLISTTYPE_e;

char* marketing_list_update_dto_marketing_list_type_ToString(marketingservice_marketing_list_update_dto_MARKETINGLISTTYPE_e marketing_list_type);

marketingservice_marketing_list_update_dto_MARKETINGLISTTYPE_e marketing_list_update_dto_marketing_list_type_FromString(char* marketing_list_type);

// Enum MARKETINGLISTTARGET for marketing_list_update_dto

typedef enum  { marketingservice_marketing_list_update_dto_MARKETINGLISTTARGET_NULL = 0, marketingservice_marketing_list_update_dto_MARKETINGLISTTARGET_Individual, marketingservice_marketing_list_update_dto_MARKETINGLISTTARGET_Organization, marketingservice_marketing_list_update_dto_MARKETINGLISTTARGET_Lead } marketingservice_marketing_list_update_dto_MARKETINGLISTTARGET_e;

char* marketing_list_update_dto_marketing_list_target_ToString(marketingservice_marketing_list_update_dto_MARKETINGLISTTARGET_e marketing_list_target);

marketingservice_marketing_list_update_dto_MARKETINGLISTTARGET_e marketing_list_update_dto_marketing_list_target_FromString(char* marketing_list_target);



typedef struct marketing_list_update_dto_t {
    int locked; //boolean
    char *name; // string
    char *purpose; // string
    char *description; // string
    char *source; // string
    double cost; //numeric
    char *modified_on; //date time
    char *last_used_on; //date time
    char *currency_id; // string
    marketingservice_marketing_list_update_dto_MARKETINGLISTTYPE_e marketing_list_type; //enum
    marketingservice_marketing_list_update_dto_MARKETINGLISTTARGET_e marketing_list_target; //enum

} marketing_list_update_dto_t;

marketing_list_update_dto_t *marketing_list_update_dto_create(
    int locked,
    char *name,
    char *purpose,
    char *description,
    char *source,
    double cost,
    char *modified_on,
    char *last_used_on,
    char *currency_id,
    marketingservice_marketing_list_update_dto_MARKETINGLISTTYPE_e marketing_list_type,
    marketingservice_marketing_list_update_dto_MARKETINGLISTTARGET_e marketing_list_target
);

void marketing_list_update_dto_free(marketing_list_update_dto_t *marketing_list_update_dto);

marketing_list_update_dto_t *marketing_list_update_dto_parseFromJSON(cJSON *marketing_list_update_dtoJSON);

cJSON *marketing_list_update_dto_convertToJSON(marketing_list_update_dto_t *marketing_list_update_dto);

#endif /* _marketing_list_update_dto_H_ */

