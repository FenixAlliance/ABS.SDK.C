#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "voyage_port_call_dto.h"



voyage_port_call_dto_t *voyage_port_call_dto_create(
    char *id,
    char *timestamp,
    int sequence_number,
    char *port_call_status,
    char *eta,
    char *ata,
    char *etd,
    char *atd,
    char *berth_number,
    char *remarks,
    char *voyage_id,
    char *port_id,
    char *tenant_id
    ) {
    voyage_port_call_dto_t *voyage_port_call_dto_local_var = malloc(sizeof(voyage_port_call_dto_t));
    if (!voyage_port_call_dto_local_var) {
        return NULL;
    }
    voyage_port_call_dto_local_var->id = id;
    voyage_port_call_dto_local_var->timestamp = timestamp;
    voyage_port_call_dto_local_var->sequence_number = sequence_number;
    voyage_port_call_dto_local_var->port_call_status = port_call_status;
    voyage_port_call_dto_local_var->eta = eta;
    voyage_port_call_dto_local_var->ata = ata;
    voyage_port_call_dto_local_var->etd = etd;
    voyage_port_call_dto_local_var->atd = atd;
    voyage_port_call_dto_local_var->berth_number = berth_number;
    voyage_port_call_dto_local_var->remarks = remarks;
    voyage_port_call_dto_local_var->voyage_id = voyage_id;
    voyage_port_call_dto_local_var->port_id = port_id;
    voyage_port_call_dto_local_var->tenant_id = tenant_id;

    return voyage_port_call_dto_local_var;
}


void voyage_port_call_dto_free(voyage_port_call_dto_t *voyage_port_call_dto) {
    if(NULL == voyage_port_call_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (voyage_port_call_dto->id) {
        free(voyage_port_call_dto->id);
        voyage_port_call_dto->id = NULL;
    }
    if (voyage_port_call_dto->timestamp) {
        free(voyage_port_call_dto->timestamp);
        voyage_port_call_dto->timestamp = NULL;
    }
    if (voyage_port_call_dto->port_call_status) {
        free(voyage_port_call_dto->port_call_status);
        voyage_port_call_dto->port_call_status = NULL;
    }
    if (voyage_port_call_dto->eta) {
        free(voyage_port_call_dto->eta);
        voyage_port_call_dto->eta = NULL;
    }
    if (voyage_port_call_dto->ata) {
        free(voyage_port_call_dto->ata);
        voyage_port_call_dto->ata = NULL;
    }
    if (voyage_port_call_dto->etd) {
        free(voyage_port_call_dto->etd);
        voyage_port_call_dto->etd = NULL;
    }
    if (voyage_port_call_dto->atd) {
        free(voyage_port_call_dto->atd);
        voyage_port_call_dto->atd = NULL;
    }
    if (voyage_port_call_dto->berth_number) {
        free(voyage_port_call_dto->berth_number);
        voyage_port_call_dto->berth_number = NULL;
    }
    if (voyage_port_call_dto->remarks) {
        free(voyage_port_call_dto->remarks);
        voyage_port_call_dto->remarks = NULL;
    }
    if (voyage_port_call_dto->voyage_id) {
        free(voyage_port_call_dto->voyage_id);
        voyage_port_call_dto->voyage_id = NULL;
    }
    if (voyage_port_call_dto->port_id) {
        free(voyage_port_call_dto->port_id);
        voyage_port_call_dto->port_id = NULL;
    }
    if (voyage_port_call_dto->tenant_id) {
        free(voyage_port_call_dto->tenant_id);
        voyage_port_call_dto->tenant_id = NULL;
    }
    free(voyage_port_call_dto);
}

cJSON *voyage_port_call_dto_convertToJSON(voyage_port_call_dto_t *voyage_port_call_dto) {
    cJSON *item = cJSON_CreateObject();

    // voyage_port_call_dto->id
    if(voyage_port_call_dto->id) {
    if(cJSON_AddStringToObject(item, "id", voyage_port_call_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // voyage_port_call_dto->timestamp
    if(voyage_port_call_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", voyage_port_call_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // voyage_port_call_dto->sequence_number
    if(voyage_port_call_dto->sequence_number) {
    if(cJSON_AddNumberToObject(item, "sequenceNumber", voyage_port_call_dto->sequence_number) == NULL) {
    goto fail; //Numeric
    }
    }


    // voyage_port_call_dto->port_call_status
    if(voyage_port_call_dto->port_call_status) {
    if(cJSON_AddStringToObject(item, "portCallStatus", voyage_port_call_dto->port_call_status) == NULL) {
    goto fail; //String
    }
    }


    // voyage_port_call_dto->eta
    if(voyage_port_call_dto->eta) {
    if(cJSON_AddStringToObject(item, "eta", voyage_port_call_dto->eta) == NULL) {
    goto fail; //Date-Time
    }
    }


    // voyage_port_call_dto->ata
    if(voyage_port_call_dto->ata) {
    if(cJSON_AddStringToObject(item, "ata", voyage_port_call_dto->ata) == NULL) {
    goto fail; //Date-Time
    }
    }


    // voyage_port_call_dto->etd
    if(voyage_port_call_dto->etd) {
    if(cJSON_AddStringToObject(item, "etd", voyage_port_call_dto->etd) == NULL) {
    goto fail; //Date-Time
    }
    }


    // voyage_port_call_dto->atd
    if(voyage_port_call_dto->atd) {
    if(cJSON_AddStringToObject(item, "atd", voyage_port_call_dto->atd) == NULL) {
    goto fail; //Date-Time
    }
    }


    // voyage_port_call_dto->berth_number
    if(voyage_port_call_dto->berth_number) {
    if(cJSON_AddStringToObject(item, "berthNumber", voyage_port_call_dto->berth_number) == NULL) {
    goto fail; //String
    }
    }


    // voyage_port_call_dto->remarks
    if(voyage_port_call_dto->remarks) {
    if(cJSON_AddStringToObject(item, "remarks", voyage_port_call_dto->remarks) == NULL) {
    goto fail; //String
    }
    }


    // voyage_port_call_dto->voyage_id
    if(voyage_port_call_dto->voyage_id) {
    if(cJSON_AddStringToObject(item, "voyageId", voyage_port_call_dto->voyage_id) == NULL) {
    goto fail; //String
    }
    }


    // voyage_port_call_dto->port_id
    if(voyage_port_call_dto->port_id) {
    if(cJSON_AddStringToObject(item, "portId", voyage_port_call_dto->port_id) == NULL) {
    goto fail; //String
    }
    }


    // voyage_port_call_dto->tenant_id
    if(voyage_port_call_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", voyage_port_call_dto->tenant_id) == NULL) {
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

voyage_port_call_dto_t *voyage_port_call_dto_parseFromJSON(cJSON *voyage_port_call_dtoJSON){

    voyage_port_call_dto_t *voyage_port_call_dto_local_var = NULL;

    // voyage_port_call_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(voyage_port_call_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // voyage_port_call_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(voyage_port_call_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // voyage_port_call_dto->sequence_number
    cJSON *sequence_number = cJSON_GetObjectItemCaseSensitive(voyage_port_call_dtoJSON, "sequenceNumber");
    if (sequence_number) { 
    if(!cJSON_IsNumber(sequence_number))
    {
    goto end; //Numeric
    }
    }

    // voyage_port_call_dto->port_call_status
    cJSON *port_call_status = cJSON_GetObjectItemCaseSensitive(voyage_port_call_dtoJSON, "portCallStatus");
    if (port_call_status) { 
    if(!cJSON_IsString(port_call_status) && !cJSON_IsNull(port_call_status))
    {
    goto end; //String
    }
    }

    // voyage_port_call_dto->eta
    cJSON *eta = cJSON_GetObjectItemCaseSensitive(voyage_port_call_dtoJSON, "eta");
    if (eta) { 
    if(!cJSON_IsString(eta) && !cJSON_IsNull(eta))
    {
    goto end; //DateTime
    }
    }

    // voyage_port_call_dto->ata
    cJSON *ata = cJSON_GetObjectItemCaseSensitive(voyage_port_call_dtoJSON, "ata");
    if (ata) { 
    if(!cJSON_IsString(ata) && !cJSON_IsNull(ata))
    {
    goto end; //DateTime
    }
    }

    // voyage_port_call_dto->etd
    cJSON *etd = cJSON_GetObjectItemCaseSensitive(voyage_port_call_dtoJSON, "etd");
    if (etd) { 
    if(!cJSON_IsString(etd) && !cJSON_IsNull(etd))
    {
    goto end; //DateTime
    }
    }

    // voyage_port_call_dto->atd
    cJSON *atd = cJSON_GetObjectItemCaseSensitive(voyage_port_call_dtoJSON, "atd");
    if (atd) { 
    if(!cJSON_IsString(atd) && !cJSON_IsNull(atd))
    {
    goto end; //DateTime
    }
    }

    // voyage_port_call_dto->berth_number
    cJSON *berth_number = cJSON_GetObjectItemCaseSensitive(voyage_port_call_dtoJSON, "berthNumber");
    if (berth_number) { 
    if(!cJSON_IsString(berth_number) && !cJSON_IsNull(berth_number))
    {
    goto end; //String
    }
    }

    // voyage_port_call_dto->remarks
    cJSON *remarks = cJSON_GetObjectItemCaseSensitive(voyage_port_call_dtoJSON, "remarks");
    if (remarks) { 
    if(!cJSON_IsString(remarks) && !cJSON_IsNull(remarks))
    {
    goto end; //String
    }
    }

    // voyage_port_call_dto->voyage_id
    cJSON *voyage_id = cJSON_GetObjectItemCaseSensitive(voyage_port_call_dtoJSON, "voyageId");
    if (voyage_id) { 
    if(!cJSON_IsString(voyage_id) && !cJSON_IsNull(voyage_id))
    {
    goto end; //String
    }
    }

    // voyage_port_call_dto->port_id
    cJSON *port_id = cJSON_GetObjectItemCaseSensitive(voyage_port_call_dtoJSON, "portId");
    if (port_id) { 
    if(!cJSON_IsString(port_id) && !cJSON_IsNull(port_id))
    {
    goto end; //String
    }
    }

    // voyage_port_call_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(voyage_port_call_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }


    voyage_port_call_dto_local_var = voyage_port_call_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        sequence_number ? sequence_number->valuedouble : 0,
        port_call_status && !cJSON_IsNull(port_call_status) ? strdup(port_call_status->valuestring) : NULL,
        eta && !cJSON_IsNull(eta) ? strdup(eta->valuestring) : NULL,
        ata && !cJSON_IsNull(ata) ? strdup(ata->valuestring) : NULL,
        etd && !cJSON_IsNull(etd) ? strdup(etd->valuestring) : NULL,
        atd && !cJSON_IsNull(atd) ? strdup(atd->valuestring) : NULL,
        berth_number && !cJSON_IsNull(berth_number) ? strdup(berth_number->valuestring) : NULL,
        remarks && !cJSON_IsNull(remarks) ? strdup(remarks->valuestring) : NULL,
        voyage_id && !cJSON_IsNull(voyage_id) ? strdup(voyage_id->valuestring) : NULL,
        port_id && !cJSON_IsNull(port_id) ? strdup(port_id->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL
        );

    return voyage_port_call_dto_local_var;
end:
    return NULL;

}
