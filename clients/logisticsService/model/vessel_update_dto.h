/*
 * vessel_update_dto.h
 *
 * 
 */

#ifndef _vessel_update_dto_H_
#define _vessel_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct vessel_update_dto_t vessel_update_dto_t;




typedef struct vessel_update_dto_t {
    char *name; // string
    char *imo_number; // string
    char *mmsi_number; // string
    char *call_sign; // string
    char *flag_country_id; // string
    char *vessel_type; // string
    char *vessel_status; // string
    double gross_tonnage; //numeric
    double deadweight_tonnage; //numeric
    int teu_capacity; //numeric
    double length_meters; //numeric
    double beam_meters; //numeric
    double draft_meters; //numeric
    int year_built; //numeric
    char *shipping_courier_id; // string

} vessel_update_dto_t;

vessel_update_dto_t *vessel_update_dto_create(
    char *name,
    char *imo_number,
    char *mmsi_number,
    char *call_sign,
    char *flag_country_id,
    char *vessel_type,
    char *vessel_status,
    double gross_tonnage,
    double deadweight_tonnage,
    int teu_capacity,
    double length_meters,
    double beam_meters,
    double draft_meters,
    int year_built,
    char *shipping_courier_id
);

void vessel_update_dto_free(vessel_update_dto_t *vessel_update_dto);

vessel_update_dto_t *vessel_update_dto_parseFromJSON(cJSON *vessel_update_dtoJSON);

cJSON *vessel_update_dto_convertToJSON(vessel_update_dto_t *vessel_update_dto);

#endif /* _vessel_update_dto_H_ */

