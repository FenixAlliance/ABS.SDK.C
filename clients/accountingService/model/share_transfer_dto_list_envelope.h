/*
 * share_transfer_dto_list_envelope.h
 *
 * 
 */

#ifndef _share_transfer_dto_list_envelope_H_
#define _share_transfer_dto_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct share_transfer_dto_list_envelope_t share_transfer_dto_list_envelope_t;

#include "share_transfer_dto.h"



typedef struct share_transfer_dto_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    list_t *result; //nonprimitive container

} share_transfer_dto_list_envelope_t;

share_transfer_dto_list_envelope_t *share_transfer_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
);

void share_transfer_dto_list_envelope_free(share_transfer_dto_list_envelope_t *share_transfer_dto_list_envelope);

share_transfer_dto_list_envelope_t *share_transfer_dto_list_envelope_parseFromJSON(cJSON *share_transfer_dto_list_envelopeJSON);

cJSON *share_transfer_dto_list_envelope_convertToJSON(share_transfer_dto_list_envelope_t *share_transfer_dto_list_envelope);

#endif /* _share_transfer_dto_list_envelope_H_ */

