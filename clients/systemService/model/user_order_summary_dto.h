/*
 * user_order_summary_dto.h
 *
 * 
 */

#ifndef _user_order_summary_dto_H_
#define _user_order_summary_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct user_order_summary_dto_t user_order_summary_dto_t;


// Enum ORDERTYPE for user_order_summary_dto

typedef enum  { systemservice_user_order_summary_dto_ORDERTYPE_NULL = 0, systemservice_user_order_summary_dto_ORDERTYPE_SalesOrder, systemservice_user_order_summary_dto_ORDERTYPE_PurchaseOrder } systemservice_user_order_summary_dto_ORDERTYPE_e;

char* user_order_summary_dto_order_type_ToString(systemservice_user_order_summary_dto_ORDERTYPE_e order_type);

systemservice_user_order_summary_dto_ORDERTYPE_e user_order_summary_dto_order_type_FromString(char* order_type);

// Enum ORDERSTATUS for user_order_summary_dto

typedef enum  { systemservice_user_order_summary_dto_ORDERSTATUS_NULL = 0, systemservice_user_order_summary_dto_ORDERSTATUS__New, systemservice_user_order_summary_dto_ORDERSTATUS_Processing, systemservice_user_order_summary_dto_ORDERSTATUS_Accepted, systemservice_user_order_summary_dto_ORDERSTATUS_Declined, systemservice_user_order_summary_dto_ORDERSTATUS_Shipped, systemservice_user_order_summary_dto_ORDERSTATUS_Delivered, systemservice_user_order_summary_dto_ORDERSTATUS_OnHold, systemservice_user_order_summary_dto_ORDERSTATUS_Failed, systemservice_user_order_summary_dto_ORDERSTATUS_Fulfilled, systemservice_user_order_summary_dto_ORDERSTATUS_Cancelled } systemservice_user_order_summary_dto_ORDERSTATUS_e;

char* user_order_summary_dto_order_status_ToString(systemservice_user_order_summary_dto_ORDERSTATUS_e order_status);

systemservice_user_order_summary_dto_ORDERSTATUS_e user_order_summary_dto_order_status_FromString(char* order_status);



typedef struct user_order_summary_dto_t {
    char *id; // string
    systemservice_user_order_summary_dto_ORDERTYPE_e order_type; //enum
    systemservice_user_order_summary_dto_ORDERSTATUS_e order_status; //enum

} user_order_summary_dto_t;

user_order_summary_dto_t *user_order_summary_dto_create(
    char *id,
    systemservice_user_order_summary_dto_ORDERTYPE_e order_type,
    systemservice_user_order_summary_dto_ORDERSTATUS_e order_status
);

void user_order_summary_dto_free(user_order_summary_dto_t *user_order_summary_dto);

user_order_summary_dto_t *user_order_summary_dto_parseFromJSON(cJSON *user_order_summary_dtoJSON);

cJSON *user_order_summary_dto_convertToJSON(user_order_summary_dto_t *user_order_summary_dto);

#endif /* _user_order_summary_dto_H_ */

