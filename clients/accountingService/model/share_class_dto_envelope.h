/*
 * share_class_dto_envelope.h
 *
 * 
 */

#ifndef _share_class_dto_envelope_H_
#define _share_class_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct share_class_dto_envelope_t share_class_dto_envelope_t;

#include "share_class_dto.h"



typedef struct share_class_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct share_class_dto_t *result; //model

} share_class_dto_envelope_t;

share_class_dto_envelope_t *share_class_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    share_class_dto_t *result
);

void share_class_dto_envelope_free(share_class_dto_envelope_t *share_class_dto_envelope);

share_class_dto_envelope_t *share_class_dto_envelope_parseFromJSON(cJSON *share_class_dto_envelopeJSON);

cJSON *share_class_dto_envelope_convertToJSON(share_class_dto_envelope_t *share_class_dto_envelope);

#endif /* _share_class_dto_envelope_H_ */

