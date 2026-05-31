#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "voyage_dto.h"



voyage_dto_t *voyage_dto_create(
    char *id,
    char *timestamp,
    char *voyage_number,
    char *title,
    char *description,
    char *voyage_status,
    char *voyage_direction,
    char *departure_date,
    char *arrival_date,
    char *actual_departure_date,
    char *actual_arrival_date,
    char *vessel_id,
    char *tenant_id,
    char *enrollment_id
    ) {
    voyage_dto_t *voyage_dto_local_var = malloc(sizeof(voyage_dto_t));
    if (!voyage_dto_local_var) {
        return NULL;
    }
    voyage_dto_local_var->id = id;
    voyage_dto_local_var->timestamp = timestamp;
    voyage_dto_local_var->voyage_number = voyage_number;
    voyage_dto_local_var->title = title;
    voyage_dto_local_var->description = description;
    voyage_dto_local_var->voyage_status = voyage_status;
    voyage_dto_local_var->voyage_direction = voyage_direction;
    voyage_dto_local_var->departure_date = departure_date;
    voyage_dto_local_var->arrival_date = arrival_date;
    voyage_dto_local_var->actual_departure_date = actual_departure_date;
    voyage_dto_local_var->actual_arrival_date = actual_arrival_date;
    voyage_dto_local_var->vessel_id = vessel_id;
    voyage_dto_local_var->tenant_id = tenant_id;
    voyage_dto_local_var->enrollment_id = enrollment_id;

    return voyage_dto_local_var;
}


void voyage_dto_free(voyage_dto_t *voyage_dto) {
    if(NULL == voyage_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (voyage_dto->id) {
        free(voyage_dto->id);
        voyage_dto->id = NULL;
    }
    if (voyage_dto->timestamp) {
        free(voyage_dto->timestamp);
        voyage_dto->timestamp = NULL;
    }
    if (voyage_dto->voyage_number) {
        free(voyage_dto->voyage_number);
        voyage_dto->voyage_number = NULL;
    }
    if (voyage_dto->title) {
        free(voyage_dto->title);
        voyage_dto->title = NULL;
    }
    if (voyage_dto->description) {
        free(voyage_dto->description);
        voyage_dto->description = NULL;
    }
    if (voyage_dto->voyage_status) {
        free(voyage_dto->voyage_status);
        voyage_dto->voyage_status = NULL;
    }
    if (voyage_dto->voyage_direction) {
        free(voyage_dto->voyage_direction);
        voyage_dto->voyage_direction = NULL;
    }
    if (voyage_dto->departure_date) {
        free(voyage_dto->departure_date);
        voyage_dto->departure_date = NULL;
    }
    if (voyage_dto->arrival_date) {
        free(voyage_dto->arrival_date);
        voyage_dto->arrival_date = NULL;
    }
    if (voyage_dto->actual_departure_date) {
        free(voyage_dto->actual_departure_date);
        voyage_dto->actual_departure_date = NULL;
    }
    if (voyage_dto->actual_arrival_date) {
        free(voyage_dto->actual_arrival_date);
        voyage_dto->actual_arrival_date = NULL;
    }
    if (voyage_dto->vessel_id) {
        free(voyage_dto->vessel_id);
        voyage_dto->vessel_id = NULL;
    }
    if (voyage_dto->tenant_id) {
        free(voyage_dto->tenant_id);
        voyage_dto->tenant_id = NULL;
    }
    if (voyage_dto->enrollment_id) {
        free(voyage_dto->enrollment_id);
        voyage_dto->enrollment_id = NULL;
    }
    free(voyage_dto);
}

cJSON *voyage_dto_convertToJSON(voyage_dto_t *voyage_dto) {
    cJSON *item = cJSON_CreateObject();

    // voyage_dto->id
    if(voyage_dto->id) {
    if(cJSON_AddStringToObject(item, "id", voyage_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // voyage_dto->timestamp
    if(voyage_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", voyage_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // voyage_dto->voyage_number
    if(voyage_dto->voyage_number) {
    if(cJSON_AddStringToObject(item, "voyageNumber", voyage_dto->voyage_number) == NULL) {
    goto fail; //String
    }
    }


    // voyage_dto->title
    if(voyage_dto->title) {
    if(cJSON_AddStringToObject(item, "title", voyage_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // voyage_dto->description
    if(voyage_dto->description) {
    if(cJSON_AddStringToObject(item, "description", voyage_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // voyage_dto->voyage_status
    if(voyage_dto->voyage_status) {
    if(cJSON_AddStringToObject(item, "voyageStatus", voyage_dto->voyage_status) == NULL) {
    goto fail; //String
    }
    }


    // voyage_dto->voyage_direction
    if(voyage_dto->voyage_direction) {
    if(cJSON_AddStringToObject(item, "voyageDirection", voyage_dto->voyage_direction) == NULL) {
    goto fail; //String
    }
    }


    // voyage_dto->departure_date
    if(voyage_dto->departure_date) {
    if(cJSON_AddStringToObject(item, "departureDate", voyage_dto->departure_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // voyage_dto->arrival_date
    if(voyage_dto->arrival_date) {
    if(cJSON_AddStringToObject(item, "arrivalDate", voyage_dto->arrival_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // voyage_dto->actual_departure_date
    if(voyage_dto->actual_departure_date) {
    if(cJSON_AddStringToObject(item, "actualDepartureDate", voyage_dto->actual_departure_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // voyage_dto->actual_arrival_date
    if(voyage_dto->actual_arrival_date) {
    if(cJSON_AddStringToObject(item, "actualArrivalDate", voyage_dto->actual_arrival_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // voyage_dto->vessel_id
    if(voyage_dto->vessel_id) {
    if(cJSON_AddStringToObject(item, "vesselId", voyage_dto->vessel_id) == NULL) {
    goto fail; //String
    }
    }


    // voyage_dto->tenant_id
    if(voyage_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", voyage_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // voyage_dto->enrollment_id
    if(voyage_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", voyage_dto->enrollment_id) == NULL) {
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

voyage_dto_t *voyage_dto_parseFromJSON(cJSON *voyage_dtoJSON){

    voyage_dto_t *voyage_dto_local_var = NULL;

    // voyage_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(voyage_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // voyage_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(voyage_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // voyage_dto->voyage_number
    cJSON *voyage_number = cJSON_GetObjectItemCaseSensitive(voyage_dtoJSON, "voyageNumber");
    if (voyage_number) { 
    if(!cJSON_IsString(voyage_number) && !cJSON_IsNull(voyage_number))
    {
    goto end; //String
    }
    }

    // voyage_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(voyage_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // voyage_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(voyage_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // voyage_dto->voyage_status
    cJSON *voyage_status = cJSON_GetObjectItemCaseSensitive(voyage_dtoJSON, "voyageStatus");
    if (voyage_status) { 
    if(!cJSON_IsString(voyage_status) && !cJSON_IsNull(voyage_status))
    {
    goto end; //String
    }
    }

    // voyage_dto->voyage_direction
    cJSON *voyage_direction = cJSON_GetObjectItemCaseSensitive(voyage_dtoJSON, "voyageDirection");
    if (voyage_direction) { 
    if(!cJSON_IsString(voyage_direction) && !cJSON_IsNull(voyage_direction))
    {
    goto end; //String
    }
    }

    // voyage_dto->departure_date
    cJSON *departure_date = cJSON_GetObjectItemCaseSensitive(voyage_dtoJSON, "departureDate");
    if (departure_date) { 
    if(!cJSON_IsString(departure_date) && !cJSON_IsNull(departure_date))
    {
    goto end; //DateTime
    }
    }

    // voyage_dto->arrival_date
    cJSON *arrival_date = cJSON_GetObjectItemCaseSensitive(voyage_dtoJSON, "arrivalDate");
    if (arrival_date) { 
    if(!cJSON_IsString(arrival_date) && !cJSON_IsNull(arrival_date))
    {
    goto end; //DateTime
    }
    }

    // voyage_dto->actual_departure_date
    cJSON *actual_departure_date = cJSON_GetObjectItemCaseSensitive(voyage_dtoJSON, "actualDepartureDate");
    if (actual_departure_date) { 
    if(!cJSON_IsString(actual_departure_date) && !cJSON_IsNull(actual_departure_date))
    {
    goto end; //DateTime
    }
    }

    // voyage_dto->actual_arrival_date
    cJSON *actual_arrival_date = cJSON_GetObjectItemCaseSensitive(voyage_dtoJSON, "actualArrivalDate");
    if (actual_arrival_date) { 
    if(!cJSON_IsString(actual_arrival_date) && !cJSON_IsNull(actual_arrival_date))
    {
    goto end; //DateTime
    }
    }

    // voyage_dto->vessel_id
    cJSON *vessel_id = cJSON_GetObjectItemCaseSensitive(voyage_dtoJSON, "vesselId");
    if (vessel_id) { 
    if(!cJSON_IsString(vessel_id) && !cJSON_IsNull(vessel_id))
    {
    goto end; //String
    }
    }

    // voyage_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(voyage_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // voyage_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(voyage_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }


    voyage_dto_local_var = voyage_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        voyage_number && !cJSON_IsNull(voyage_number) ? strdup(voyage_number->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        voyage_status && !cJSON_IsNull(voyage_status) ? strdup(voyage_status->valuestring) : NULL,
        voyage_direction && !cJSON_IsNull(voyage_direction) ? strdup(voyage_direction->valuestring) : NULL,
        departure_date && !cJSON_IsNull(departure_date) ? strdup(departure_date->valuestring) : NULL,
        arrival_date && !cJSON_IsNull(arrival_date) ? strdup(arrival_date->valuestring) : NULL,
        actual_departure_date && !cJSON_IsNull(actual_departure_date) ? strdup(actual_departure_date->valuestring) : NULL,
        actual_arrival_date && !cJSON_IsNull(actual_arrival_date) ? strdup(actual_arrival_date->valuestring) : NULL,
        vessel_id && !cJSON_IsNull(vessel_id) ? strdup(vessel_id->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL
        );

    return voyage_dto_local_var;
end:
    return NULL;

}
