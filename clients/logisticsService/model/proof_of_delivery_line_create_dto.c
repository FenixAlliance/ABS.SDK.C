#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "proof_of_delivery_line_create_dto.h"



proof_of_delivery_line_create_dto_t *proof_of_delivery_line_create_dto_create(
    char *id,
    char *timestamp,
    char *description,
    int quantity_expected,
    int quantity_received,
    int quantity_rejected,
    char *condition,
    char *remarks,
    char *hs_code
    ) {
    proof_of_delivery_line_create_dto_t *proof_of_delivery_line_create_dto_local_var = malloc(sizeof(proof_of_delivery_line_create_dto_t));
    if (!proof_of_delivery_line_create_dto_local_var) {
        return NULL;
    }
    proof_of_delivery_line_create_dto_local_var->id = id;
    proof_of_delivery_line_create_dto_local_var->timestamp = timestamp;
    proof_of_delivery_line_create_dto_local_var->description = description;
    proof_of_delivery_line_create_dto_local_var->quantity_expected = quantity_expected;
    proof_of_delivery_line_create_dto_local_var->quantity_received = quantity_received;
    proof_of_delivery_line_create_dto_local_var->quantity_rejected = quantity_rejected;
    proof_of_delivery_line_create_dto_local_var->condition = condition;
    proof_of_delivery_line_create_dto_local_var->remarks = remarks;
    proof_of_delivery_line_create_dto_local_var->hs_code = hs_code;

    return proof_of_delivery_line_create_dto_local_var;
}


void proof_of_delivery_line_create_dto_free(proof_of_delivery_line_create_dto_t *proof_of_delivery_line_create_dto) {
    if(NULL == proof_of_delivery_line_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (proof_of_delivery_line_create_dto->id) {
        free(proof_of_delivery_line_create_dto->id);
        proof_of_delivery_line_create_dto->id = NULL;
    }
    if (proof_of_delivery_line_create_dto->timestamp) {
        free(proof_of_delivery_line_create_dto->timestamp);
        proof_of_delivery_line_create_dto->timestamp = NULL;
    }
    if (proof_of_delivery_line_create_dto->description) {
        free(proof_of_delivery_line_create_dto->description);
        proof_of_delivery_line_create_dto->description = NULL;
    }
    if (proof_of_delivery_line_create_dto->condition) {
        free(proof_of_delivery_line_create_dto->condition);
        proof_of_delivery_line_create_dto->condition = NULL;
    }
    if (proof_of_delivery_line_create_dto->remarks) {
        free(proof_of_delivery_line_create_dto->remarks);
        proof_of_delivery_line_create_dto->remarks = NULL;
    }
    if (proof_of_delivery_line_create_dto->hs_code) {
        free(proof_of_delivery_line_create_dto->hs_code);
        proof_of_delivery_line_create_dto->hs_code = NULL;
    }
    free(proof_of_delivery_line_create_dto);
}

cJSON *proof_of_delivery_line_create_dto_convertToJSON(proof_of_delivery_line_create_dto_t *proof_of_delivery_line_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // proof_of_delivery_line_create_dto->id
    if(proof_of_delivery_line_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", proof_of_delivery_line_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // proof_of_delivery_line_create_dto->timestamp
    if(proof_of_delivery_line_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", proof_of_delivery_line_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // proof_of_delivery_line_create_dto->description
    if(proof_of_delivery_line_create_dto->description) {
    if(cJSON_AddStringToObject(item, "description", proof_of_delivery_line_create_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // proof_of_delivery_line_create_dto->quantity_expected
    if(proof_of_delivery_line_create_dto->quantity_expected) {
    if(cJSON_AddNumberToObject(item, "quantityExpected", proof_of_delivery_line_create_dto->quantity_expected) == NULL) {
    goto fail; //Numeric
    }
    }


    // proof_of_delivery_line_create_dto->quantity_received
    if(proof_of_delivery_line_create_dto->quantity_received) {
    if(cJSON_AddNumberToObject(item, "quantityReceived", proof_of_delivery_line_create_dto->quantity_received) == NULL) {
    goto fail; //Numeric
    }
    }


    // proof_of_delivery_line_create_dto->quantity_rejected
    if(proof_of_delivery_line_create_dto->quantity_rejected) {
    if(cJSON_AddNumberToObject(item, "quantityRejected", proof_of_delivery_line_create_dto->quantity_rejected) == NULL) {
    goto fail; //Numeric
    }
    }


    // proof_of_delivery_line_create_dto->condition
    if(proof_of_delivery_line_create_dto->condition) {
    if(cJSON_AddStringToObject(item, "condition", proof_of_delivery_line_create_dto->condition) == NULL) {
    goto fail; //String
    }
    }


    // proof_of_delivery_line_create_dto->remarks
    if(proof_of_delivery_line_create_dto->remarks) {
    if(cJSON_AddStringToObject(item, "remarks", proof_of_delivery_line_create_dto->remarks) == NULL) {
    goto fail; //String
    }
    }


    // proof_of_delivery_line_create_dto->hs_code
    if(proof_of_delivery_line_create_dto->hs_code) {
    if(cJSON_AddStringToObject(item, "hsCode", proof_of_delivery_line_create_dto->hs_code) == NULL) {
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

proof_of_delivery_line_create_dto_t *proof_of_delivery_line_create_dto_parseFromJSON(cJSON *proof_of_delivery_line_create_dtoJSON){

    proof_of_delivery_line_create_dto_t *proof_of_delivery_line_create_dto_local_var = NULL;

    // proof_of_delivery_line_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(proof_of_delivery_line_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // proof_of_delivery_line_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(proof_of_delivery_line_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // proof_of_delivery_line_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(proof_of_delivery_line_create_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // proof_of_delivery_line_create_dto->quantity_expected
    cJSON *quantity_expected = cJSON_GetObjectItemCaseSensitive(proof_of_delivery_line_create_dtoJSON, "quantityExpected");
    if (quantity_expected) { 
    if(!cJSON_IsNumber(quantity_expected))
    {
    goto end; //Numeric
    }
    }

    // proof_of_delivery_line_create_dto->quantity_received
    cJSON *quantity_received = cJSON_GetObjectItemCaseSensitive(proof_of_delivery_line_create_dtoJSON, "quantityReceived");
    if (quantity_received) { 
    if(!cJSON_IsNumber(quantity_received))
    {
    goto end; //Numeric
    }
    }

    // proof_of_delivery_line_create_dto->quantity_rejected
    cJSON *quantity_rejected = cJSON_GetObjectItemCaseSensitive(proof_of_delivery_line_create_dtoJSON, "quantityRejected");
    if (quantity_rejected) { 
    if(!cJSON_IsNumber(quantity_rejected))
    {
    goto end; //Numeric
    }
    }

    // proof_of_delivery_line_create_dto->condition
    cJSON *condition = cJSON_GetObjectItemCaseSensitive(proof_of_delivery_line_create_dtoJSON, "condition");
    if (condition) { 
    if(!cJSON_IsString(condition) && !cJSON_IsNull(condition))
    {
    goto end; //String
    }
    }

    // proof_of_delivery_line_create_dto->remarks
    cJSON *remarks = cJSON_GetObjectItemCaseSensitive(proof_of_delivery_line_create_dtoJSON, "remarks");
    if (remarks) { 
    if(!cJSON_IsString(remarks) && !cJSON_IsNull(remarks))
    {
    goto end; //String
    }
    }

    // proof_of_delivery_line_create_dto->hs_code
    cJSON *hs_code = cJSON_GetObjectItemCaseSensitive(proof_of_delivery_line_create_dtoJSON, "hsCode");
    if (hs_code) { 
    if(!cJSON_IsString(hs_code) && !cJSON_IsNull(hs_code))
    {
    goto end; //String
    }
    }


    proof_of_delivery_line_create_dto_local_var = proof_of_delivery_line_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        quantity_expected ? quantity_expected->valuedouble : 0,
        quantity_received ? quantity_received->valuedouble : 0,
        quantity_rejected ? quantity_rejected->valuedouble : 0,
        condition && !cJSON_IsNull(condition) ? strdup(condition->valuestring) : NULL,
        remarks && !cJSON_IsNull(remarks) ? strdup(remarks->valuestring) : NULL,
        hs_code && !cJSON_IsNull(hs_code) ? strdup(hs_code->valuestring) : NULL
        );

    return proof_of_delivery_line_create_dto_local_var;
end:
    return NULL;

}
