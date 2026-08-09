#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "user_order_summary_dto.h"


char* user_order_summary_dto_order_type_ToString(systemservice_user_order_summary_dto_ORDERTYPE_e order_type) {
    char* order_typeArray[] =  { "NULL", "SalesOrder", "PurchaseOrder" };
    return order_typeArray[order_type];
}

systemservice_user_order_summary_dto_ORDERTYPE_e user_order_summary_dto_order_type_FromString(char* order_type){
    int stringToReturn = 0;
    char *order_typeArray[] =  { "NULL", "SalesOrder", "PurchaseOrder" };
    size_t sizeofArray = sizeof(order_typeArray) / sizeof(order_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(order_type, order_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* user_order_summary_dto_order_status_ToString(systemservice_user_order_summary_dto_ORDERSTATUS_e order_status) {
    char* order_statusArray[] =  { "NULL", "New", "Processing", "Accepted", "Declined", "Shipped", "Delivered", "OnHold", "Failed", "Fulfilled", "Cancelled" };
    return order_statusArray[order_status];
}

systemservice_user_order_summary_dto_ORDERSTATUS_e user_order_summary_dto_order_status_FromString(char* order_status){
    int stringToReturn = 0;
    char *order_statusArray[] =  { "NULL", "New", "Processing", "Accepted", "Declined", "Shipped", "Delivered", "OnHold", "Failed", "Fulfilled", "Cancelled" };
    size_t sizeofArray = sizeof(order_statusArray) / sizeof(order_statusArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(order_status, order_statusArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

user_order_summary_dto_t *user_order_summary_dto_create(
    char *id,
    systemservice_user_order_summary_dto_ORDERTYPE_e order_type,
    systemservice_user_order_summary_dto_ORDERSTATUS_e order_status
    ) {
    user_order_summary_dto_t *user_order_summary_dto_local_var = malloc(sizeof(user_order_summary_dto_t));
    if (!user_order_summary_dto_local_var) {
        return NULL;
    }
    user_order_summary_dto_local_var->id = id;
    user_order_summary_dto_local_var->order_type = order_type;
    user_order_summary_dto_local_var->order_status = order_status;

    return user_order_summary_dto_local_var;
}


void user_order_summary_dto_free(user_order_summary_dto_t *user_order_summary_dto) {
    if(NULL == user_order_summary_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (user_order_summary_dto->id) {
        free(user_order_summary_dto->id);
        user_order_summary_dto->id = NULL;
    }
    free(user_order_summary_dto);
}

cJSON *user_order_summary_dto_convertToJSON(user_order_summary_dto_t *user_order_summary_dto) {
    cJSON *item = cJSON_CreateObject();

    // user_order_summary_dto->id
    if(user_order_summary_dto->id) {
    if(cJSON_AddStringToObject(item, "id", user_order_summary_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // user_order_summary_dto->order_type
    if(user_order_summary_dto->order_type != systemservice_user_order_summary_dto_ORDERTYPE_NULL) {
    if(cJSON_AddStringToObject(item, "orderType", order_typeuser_order_summary_dto_ToString(user_order_summary_dto->order_type)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // user_order_summary_dto->order_status
    if(user_order_summary_dto->order_status != systemservice_user_order_summary_dto_ORDERSTATUS_NULL) {
    if(cJSON_AddStringToObject(item, "orderStatus", order_statususer_order_summary_dto_ToString(user_order_summary_dto->order_status)) == NULL)
    {
    goto fail; //Enum
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

user_order_summary_dto_t *user_order_summary_dto_parseFromJSON(cJSON *user_order_summary_dtoJSON){

    user_order_summary_dto_t *user_order_summary_dto_local_var = NULL;

    // user_order_summary_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(user_order_summary_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // user_order_summary_dto->order_type
    cJSON *order_type = cJSON_GetObjectItemCaseSensitive(user_order_summary_dtoJSON, "orderType");
    systemservice_user_order_summary_dto_ORDERTYPE_e order_typeVariable;
    if (order_type) { 
    if(!cJSON_IsString(order_type))
    {
    goto end; //Enum
    }
    order_typeVariable = user_order_summary_dto_order_type_FromString(order_type->valuestring);
    }

    // user_order_summary_dto->order_status
    cJSON *order_status = cJSON_GetObjectItemCaseSensitive(user_order_summary_dtoJSON, "orderStatus");
    systemservice_user_order_summary_dto_ORDERSTATUS_e order_statusVariable;
    if (order_status) { 
    if(!cJSON_IsString(order_status))
    {
    goto end; //Enum
    }
    order_statusVariable = user_order_summary_dto_order_status_FromString(order_status->valuestring);
    }


    user_order_summary_dto_local_var = user_order_summary_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        order_type ? order_typeVariable : systemservice_user_order_summary_dto_ORDERTYPE_NULL,
        order_status ? order_statusVariable : systemservice_user_order_summary_dto_ORDERSTATUS_NULL
        );

    return user_order_summary_dto_local_var;
end:
    return NULL;

}
