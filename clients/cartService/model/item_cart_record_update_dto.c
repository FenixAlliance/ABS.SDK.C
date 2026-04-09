#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "item_cart_record_update_dto.h"



item_cart_record_update_dto_t *item_cart_record_update_dto_create(
    double quantity
    ) {
    item_cart_record_update_dto_t *item_cart_record_update_dto_local_var = malloc(sizeof(item_cart_record_update_dto_t));
    if (!item_cart_record_update_dto_local_var) {
        return NULL;
    }
    item_cart_record_update_dto_local_var->quantity = quantity;

    return item_cart_record_update_dto_local_var;
}


void item_cart_record_update_dto_free(item_cart_record_update_dto_t *item_cart_record_update_dto) {
    if(NULL == item_cart_record_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    free(item_cart_record_update_dto);
}

cJSON *item_cart_record_update_dto_convertToJSON(item_cart_record_update_dto_t *item_cart_record_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // item_cart_record_update_dto->quantity
    if(item_cart_record_update_dto->quantity) {
    if(cJSON_AddNumberToObject(item, "quantity", item_cart_record_update_dto->quantity) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

item_cart_record_update_dto_t *item_cart_record_update_dto_parseFromJSON(cJSON *item_cart_record_update_dtoJSON){

    item_cart_record_update_dto_t *item_cart_record_update_dto_local_var = NULL;

    // item_cart_record_update_dto->quantity
    cJSON *quantity = cJSON_GetObjectItemCaseSensitive(item_cart_record_update_dtoJSON, "quantity");
    if (quantity) { 
    if(!cJSON_IsNumber(quantity))
    {
    goto end; //Numeric
    }
    }


    item_cart_record_update_dto_local_var = item_cart_record_update_dto_create (
        quantity ? quantity->valuedouble : 0
        );

    return item_cart_record_update_dto_local_var;
end:
    return NULL;

}
