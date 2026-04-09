/*
 * asset_transfer_create_dto.h
 *
 * 
 */

#ifndef _asset_transfer_create_dto_H_
#define _asset_transfer_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct asset_transfer_create_dto_t asset_transfer_create_dto_t;




typedef struct asset_transfer_create_dto_t {
    char *asset_id; // string
    int is_root_transfer; //boolean
    char *serial_list; // string
    char *quantity; // string
    char *serial; // string
    char *previous_asset_transfer_id; // string
    char *source_location_id; // string
    char *destination_location_id; // string
    char *source_contact_id; // string
    char *destination_contact_id; // string
    char *source_department_id; // string
    char *destination_department_id; // string

} asset_transfer_create_dto_t;

asset_transfer_create_dto_t *asset_transfer_create_dto_create(
    char *asset_id,
    int is_root_transfer,
    char *serial_list,
    char *quantity,
    char *serial,
    char *previous_asset_transfer_id,
    char *source_location_id,
    char *destination_location_id,
    char *source_contact_id,
    char *destination_contact_id,
    char *source_department_id,
    char *destination_department_id
);

void asset_transfer_create_dto_free(asset_transfer_create_dto_t *asset_transfer_create_dto);

asset_transfer_create_dto_t *asset_transfer_create_dto_parseFromJSON(cJSON *asset_transfer_create_dtoJSON);

cJSON *asset_transfer_create_dto_convertToJSON(asset_transfer_create_dto_t *asset_transfer_create_dto);

#endif /* _asset_transfer_create_dto_H_ */

