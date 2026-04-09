/*
 * asset_transfer_update_dto.h
 *
 * 
 */

#ifndef _asset_transfer_update_dto_H_
#define _asset_transfer_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct asset_transfer_update_dto_t asset_transfer_update_dto_t;




typedef struct asset_transfer_update_dto_t {
    char *serial_list; // string
    char *quantity; // string
    char *serial; // string
    char *destination_location_id; // string
    char *destination_contact_id; // string
    char *destination_department_id; // string

} asset_transfer_update_dto_t;

asset_transfer_update_dto_t *asset_transfer_update_dto_create(
    char *serial_list,
    char *quantity,
    char *serial,
    char *destination_location_id,
    char *destination_contact_id,
    char *destination_department_id
);

void asset_transfer_update_dto_free(asset_transfer_update_dto_t *asset_transfer_update_dto);

asset_transfer_update_dto_t *asset_transfer_update_dto_parseFromJSON(cJSON *asset_transfer_update_dtoJSON);

cJSON *asset_transfer_update_dto_convertToJSON(asset_transfer_update_dto_t *asset_transfer_update_dto);

#endif /* _asset_transfer_update_dto_H_ */

