/*
 * service_level_agreement_update_dto.h
 *
 * 
 */

#ifndef _service_level_agreement_update_dto_H_
#define _service_level_agreement_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct service_level_agreement_update_dto_t service_level_agreement_update_dto_t;




typedef struct service_level_agreement_update_dto_t {
    char *service_id; // string
    char *service_level_id; // string
    char *contact_id; // string

} service_level_agreement_update_dto_t;

service_level_agreement_update_dto_t *service_level_agreement_update_dto_create(
    char *service_id,
    char *service_level_id,
    char *contact_id
);

void service_level_agreement_update_dto_free(service_level_agreement_update_dto_t *service_level_agreement_update_dto);

service_level_agreement_update_dto_t *service_level_agreement_update_dto_parseFromJSON(cJSON *service_level_agreement_update_dtoJSON);

cJSON *service_level_agreement_update_dto_convertToJSON(service_level_agreement_update_dto_t *service_level_agreement_update_dto);

#endif /* _service_level_agreement_update_dto_H_ */

