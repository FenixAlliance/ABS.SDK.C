/*
 * asset_transfer_dto.h
 *
 * 
 */

#ifndef _asset_transfer_dto_H_
#define _asset_transfer_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct asset_transfer_dto_t asset_transfer_dto_t;




typedef struct asset_transfer_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *business_id; // string
    char *business_profile_record_id; // string
    char *asset_id; // string
    char *asset_name; // string
    int is_root_transfer; //boolean
    char *serial_list; // string
    char *quantity; // string
    char *serial; // string
    char *previous_asset_transfer_id; // string
    char *source_location_id; // string
    char *source_location_name; // string
    char *destination_location_id; // string
    char *destination_location_name; // string
    char *source_contact_id; // string
    char *source_contact_name; // string
    char *destination_contact_id; // string
    char *destination_contact_name; // string
    char *source_department_id; // string
    char *source_department_name; // string
    char *destination_department_id; // string
    char *destination_department_name; // string

} asset_transfer_dto_t;

asset_transfer_dto_t *asset_transfer_dto_create(
    char *id,
    char *timestamp,
    char *business_id,
    char *business_profile_record_id,
    char *asset_id,
    char *asset_name,
    int is_root_transfer,
    char *serial_list,
    char *quantity,
    char *serial,
    char *previous_asset_transfer_id,
    char *source_location_id,
    char *source_location_name,
    char *destination_location_id,
    char *destination_location_name,
    char *source_contact_id,
    char *source_contact_name,
    char *destination_contact_id,
    char *destination_contact_name,
    char *source_department_id,
    char *source_department_name,
    char *destination_department_id,
    char *destination_department_name
);

void asset_transfer_dto_free(asset_transfer_dto_t *asset_transfer_dto);

asset_transfer_dto_t *asset_transfer_dto_parseFromJSON(cJSON *asset_transfer_dtoJSON);

cJSON *asset_transfer_dto_convertToJSON(asset_transfer_dto_t *asset_transfer_dto);

#endif /* _asset_transfer_dto_H_ */

