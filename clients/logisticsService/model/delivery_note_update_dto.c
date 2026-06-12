#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "delivery_note_update_dto.h"



delivery_note_update_dto_t *delivery_note_update_dto_create(
    char *title,
    char *description,
    char *shipment_id,
    char *proof_of_delivery_id
    ) {
    delivery_note_update_dto_t *delivery_note_update_dto_local_var = malloc(sizeof(delivery_note_update_dto_t));
    if (!delivery_note_update_dto_local_var) {
        return NULL;
    }
    delivery_note_update_dto_local_var->title = title;
    delivery_note_update_dto_local_var->description = description;
    delivery_note_update_dto_local_var->shipment_id = shipment_id;
    delivery_note_update_dto_local_var->proof_of_delivery_id = proof_of_delivery_id;

    return delivery_note_update_dto_local_var;
}


void delivery_note_update_dto_free(delivery_note_update_dto_t *delivery_note_update_dto) {
    if(NULL == delivery_note_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (delivery_note_update_dto->title) {
        free(delivery_note_update_dto->title);
        delivery_note_update_dto->title = NULL;
    }
    if (delivery_note_update_dto->description) {
        free(delivery_note_update_dto->description);
        delivery_note_update_dto->description = NULL;
    }
    if (delivery_note_update_dto->shipment_id) {
        free(delivery_note_update_dto->shipment_id);
        delivery_note_update_dto->shipment_id = NULL;
    }
    if (delivery_note_update_dto->proof_of_delivery_id) {
        free(delivery_note_update_dto->proof_of_delivery_id);
        delivery_note_update_dto->proof_of_delivery_id = NULL;
    }
    free(delivery_note_update_dto);
}

cJSON *delivery_note_update_dto_convertToJSON(delivery_note_update_dto_t *delivery_note_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // delivery_note_update_dto->title
    if(delivery_note_update_dto->title) {
    if(cJSON_AddStringToObject(item, "title", delivery_note_update_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // delivery_note_update_dto->description
    if(delivery_note_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", delivery_note_update_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // delivery_note_update_dto->shipment_id
    if(delivery_note_update_dto->shipment_id) {
    if(cJSON_AddStringToObject(item, "shipmentId", delivery_note_update_dto->shipment_id) == NULL) {
    goto fail; //String
    }
    }


    // delivery_note_update_dto->proof_of_delivery_id
    if(delivery_note_update_dto->proof_of_delivery_id) {
    if(cJSON_AddStringToObject(item, "proofOfDeliveryId", delivery_note_update_dto->proof_of_delivery_id) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

delivery_note_update_dto_t *delivery_note_update_dto_parseFromJSON(cJSON *delivery_note_update_dtoJSON){

    delivery_note_update_dto_t *delivery_note_update_dto_local_var = NULL;

    // delivery_note_update_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(delivery_note_update_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // delivery_note_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(delivery_note_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // delivery_note_update_dto->shipment_id
    cJSON *shipment_id = cJSON_GetObjectItemCaseSensitive(delivery_note_update_dtoJSON, "shipmentId");
    if (shipment_id) { 
    if(!cJSON_IsString(shipment_id) && !cJSON_IsNull(shipment_id))
    {
    goto end; //String
    }
    }

    // delivery_note_update_dto->proof_of_delivery_id
    cJSON *proof_of_delivery_id = cJSON_GetObjectItemCaseSensitive(delivery_note_update_dtoJSON, "proofOfDeliveryId");
    if (proof_of_delivery_id) { 
    if(!cJSON_IsString(proof_of_delivery_id) && !cJSON_IsNull(proof_of_delivery_id))
    {
    goto end; //String
    }
    }


    delivery_note_update_dto_local_var = delivery_note_update_dto_create (
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        shipment_id && !cJSON_IsNull(shipment_id) ? strdup(shipment_id->valuestring) : NULL,
        proof_of_delivery_id && !cJSON_IsNull(proof_of_delivery_id) ? strdup(proof_of_delivery_id->valuestring) : NULL
        );

    return delivery_note_update_dto_local_var;
end:
    return NULL;

}
