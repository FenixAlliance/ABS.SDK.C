#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "voyage_update_dto.h"



voyage_update_dto_t *voyage_update_dto_create(
    char *voyage_number,
    char *title,
    char *description,
    char *voyage_direction,
    char *departure_date,
    char *arrival_date,
    char *vessel_id
    ) {
    voyage_update_dto_t *voyage_update_dto_local_var = malloc(sizeof(voyage_update_dto_t));
    if (!voyage_update_dto_local_var) {
        return NULL;
    }
    voyage_update_dto_local_var->voyage_number = voyage_number;
    voyage_update_dto_local_var->title = title;
    voyage_update_dto_local_var->description = description;
    voyage_update_dto_local_var->voyage_direction = voyage_direction;
    voyage_update_dto_local_var->departure_date = departure_date;
    voyage_update_dto_local_var->arrival_date = arrival_date;
    voyage_update_dto_local_var->vessel_id = vessel_id;

    return voyage_update_dto_local_var;
}


void voyage_update_dto_free(voyage_update_dto_t *voyage_update_dto) {
    if(NULL == voyage_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (voyage_update_dto->voyage_number) {
        free(voyage_update_dto->voyage_number);
        voyage_update_dto->voyage_number = NULL;
    }
    if (voyage_update_dto->title) {
        free(voyage_update_dto->title);
        voyage_update_dto->title = NULL;
    }
    if (voyage_update_dto->description) {
        free(voyage_update_dto->description);
        voyage_update_dto->description = NULL;
    }
    if (voyage_update_dto->voyage_direction) {
        free(voyage_update_dto->voyage_direction);
        voyage_update_dto->voyage_direction = NULL;
    }
    if (voyage_update_dto->departure_date) {
        free(voyage_update_dto->departure_date);
        voyage_update_dto->departure_date = NULL;
    }
    if (voyage_update_dto->arrival_date) {
        free(voyage_update_dto->arrival_date);
        voyage_update_dto->arrival_date = NULL;
    }
    if (voyage_update_dto->vessel_id) {
        free(voyage_update_dto->vessel_id);
        voyage_update_dto->vessel_id = NULL;
    }
    free(voyage_update_dto);
}

cJSON *voyage_update_dto_convertToJSON(voyage_update_dto_t *voyage_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // voyage_update_dto->voyage_number
    if(voyage_update_dto->voyage_number) {
    if(cJSON_AddStringToObject(item, "voyageNumber", voyage_update_dto->voyage_number) == NULL) {
    goto fail; //String
    }
    }


    // voyage_update_dto->title
    if(voyage_update_dto->title) {
    if(cJSON_AddStringToObject(item, "title", voyage_update_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // voyage_update_dto->description
    if(voyage_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", voyage_update_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // voyage_update_dto->voyage_direction
    if(voyage_update_dto->voyage_direction) {
    if(cJSON_AddStringToObject(item, "voyageDirection", voyage_update_dto->voyage_direction) == NULL) {
    goto fail; //String
    }
    }


    // voyage_update_dto->departure_date
    if(voyage_update_dto->departure_date) {
    if(cJSON_AddStringToObject(item, "departureDate", voyage_update_dto->departure_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // voyage_update_dto->arrival_date
    if(voyage_update_dto->arrival_date) {
    if(cJSON_AddStringToObject(item, "arrivalDate", voyage_update_dto->arrival_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // voyage_update_dto->vessel_id
    if(voyage_update_dto->vessel_id) {
    if(cJSON_AddStringToObject(item, "vesselId", voyage_update_dto->vessel_id) == NULL) {
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

voyage_update_dto_t *voyage_update_dto_parseFromJSON(cJSON *voyage_update_dtoJSON){

    voyage_update_dto_t *voyage_update_dto_local_var = NULL;

    // voyage_update_dto->voyage_number
    cJSON *voyage_number = cJSON_GetObjectItemCaseSensitive(voyage_update_dtoJSON, "voyageNumber");
    if (voyage_number) { 
    if(!cJSON_IsString(voyage_number) && !cJSON_IsNull(voyage_number))
    {
    goto end; //String
    }
    }

    // voyage_update_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(voyage_update_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // voyage_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(voyage_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // voyage_update_dto->voyage_direction
    cJSON *voyage_direction = cJSON_GetObjectItemCaseSensitive(voyage_update_dtoJSON, "voyageDirection");
    if (voyage_direction) { 
    if(!cJSON_IsString(voyage_direction) && !cJSON_IsNull(voyage_direction))
    {
    goto end; //String
    }
    }

    // voyage_update_dto->departure_date
    cJSON *departure_date = cJSON_GetObjectItemCaseSensitive(voyage_update_dtoJSON, "departureDate");
    if (departure_date) { 
    if(!cJSON_IsString(departure_date) && !cJSON_IsNull(departure_date))
    {
    goto end; //DateTime
    }
    }

    // voyage_update_dto->arrival_date
    cJSON *arrival_date = cJSON_GetObjectItemCaseSensitive(voyage_update_dtoJSON, "arrivalDate");
    if (arrival_date) { 
    if(!cJSON_IsString(arrival_date) && !cJSON_IsNull(arrival_date))
    {
    goto end; //DateTime
    }
    }

    // voyage_update_dto->vessel_id
    cJSON *vessel_id = cJSON_GetObjectItemCaseSensitive(voyage_update_dtoJSON, "vesselId");
    if (vessel_id) { 
    if(!cJSON_IsString(vessel_id) && !cJSON_IsNull(vessel_id))
    {
    goto end; //String
    }
    }


    voyage_update_dto_local_var = voyage_update_dto_create (
        voyage_number && !cJSON_IsNull(voyage_number) ? strdup(voyage_number->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        voyage_direction && !cJSON_IsNull(voyage_direction) ? strdup(voyage_direction->valuestring) : NULL,
        departure_date && !cJSON_IsNull(departure_date) ? strdup(departure_date->valuestring) : NULL,
        arrival_date && !cJSON_IsNull(arrival_date) ? strdup(arrival_date->valuestring) : NULL,
        vessel_id && !cJSON_IsNull(vessel_id) ? strdup(vessel_id->valuestring) : NULL
        );

    return voyage_update_dto_local_var;
end:
    return NULL;

}
