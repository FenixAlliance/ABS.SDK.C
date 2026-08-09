#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "guest_cart_purge_result_dto.h"



guest_cart_purge_result_dto_t *guest_cart_purge_result_dto_create(
    int guest_carts_deleted,
    int item_cart_records_deleted,
    int wish_lists_deleted
    ) {
    guest_cart_purge_result_dto_t *guest_cart_purge_result_dto_local_var = malloc(sizeof(guest_cart_purge_result_dto_t));
    if (!guest_cart_purge_result_dto_local_var) {
        return NULL;
    }
    guest_cart_purge_result_dto_local_var->guest_carts_deleted = guest_carts_deleted;
    guest_cart_purge_result_dto_local_var->item_cart_records_deleted = item_cart_records_deleted;
    guest_cart_purge_result_dto_local_var->wish_lists_deleted = wish_lists_deleted;

    return guest_cart_purge_result_dto_local_var;
}


void guest_cart_purge_result_dto_free(guest_cart_purge_result_dto_t *guest_cart_purge_result_dto) {
    if(NULL == guest_cart_purge_result_dto){
        return ;
    }
    listEntry_t *listEntry;
    free(guest_cart_purge_result_dto);
}

cJSON *guest_cart_purge_result_dto_convertToJSON(guest_cart_purge_result_dto_t *guest_cart_purge_result_dto) {
    cJSON *item = cJSON_CreateObject();

    // guest_cart_purge_result_dto->guest_carts_deleted
    if(guest_cart_purge_result_dto->guest_carts_deleted) {
    if(cJSON_AddNumberToObject(item, "guestCartsDeleted", guest_cart_purge_result_dto->guest_carts_deleted) == NULL) {
    goto fail; //Numeric
    }
    }


    // guest_cart_purge_result_dto->item_cart_records_deleted
    if(guest_cart_purge_result_dto->item_cart_records_deleted) {
    if(cJSON_AddNumberToObject(item, "itemCartRecordsDeleted", guest_cart_purge_result_dto->item_cart_records_deleted) == NULL) {
    goto fail; //Numeric
    }
    }


    // guest_cart_purge_result_dto->wish_lists_deleted
    if(guest_cart_purge_result_dto->wish_lists_deleted) {
    if(cJSON_AddNumberToObject(item, "wishListsDeleted", guest_cart_purge_result_dto->wish_lists_deleted) == NULL) {
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

guest_cart_purge_result_dto_t *guest_cart_purge_result_dto_parseFromJSON(cJSON *guest_cart_purge_result_dtoJSON){

    guest_cart_purge_result_dto_t *guest_cart_purge_result_dto_local_var = NULL;

    // guest_cart_purge_result_dto->guest_carts_deleted
    cJSON *guest_carts_deleted = cJSON_GetObjectItemCaseSensitive(guest_cart_purge_result_dtoJSON, "guestCartsDeleted");
    if (guest_carts_deleted) { 
    if(!cJSON_IsNumber(guest_carts_deleted))
    {
    goto end; //Numeric
    }
    }

    // guest_cart_purge_result_dto->item_cart_records_deleted
    cJSON *item_cart_records_deleted = cJSON_GetObjectItemCaseSensitive(guest_cart_purge_result_dtoJSON, "itemCartRecordsDeleted");
    if (item_cart_records_deleted) { 
    if(!cJSON_IsNumber(item_cart_records_deleted))
    {
    goto end; //Numeric
    }
    }

    // guest_cart_purge_result_dto->wish_lists_deleted
    cJSON *wish_lists_deleted = cJSON_GetObjectItemCaseSensitive(guest_cart_purge_result_dtoJSON, "wishListsDeleted");
    if (wish_lists_deleted) { 
    if(!cJSON_IsNumber(wish_lists_deleted))
    {
    goto end; //Numeric
    }
    }


    guest_cart_purge_result_dto_local_var = guest_cart_purge_result_dto_create (
        guest_carts_deleted ? guest_carts_deleted->valuedouble : 0,
        item_cart_records_deleted ? item_cart_records_deleted->valuedouble : 0,
        wish_lists_deleted ? wish_lists_deleted->valuedouble : 0
        );

    return guest_cart_purge_result_dto_local_var;
end:
    return NULL;

}
