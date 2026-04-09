/*
 * service_queue_update_dto.h
 *
 * 
 */

#ifndef _service_queue_update_dto_H_
#define _service_queue_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct service_queue_update_dto_t service_queue_update_dto_t;




typedef struct service_queue_update_dto_t {
    char *service_id; // string

} service_queue_update_dto_t;

service_queue_update_dto_t *service_queue_update_dto_create(
    char *service_id
);

void service_queue_update_dto_free(service_queue_update_dto_t *service_queue_update_dto);

service_queue_update_dto_t *service_queue_update_dto_parseFromJSON(cJSON *service_queue_update_dtoJSON);

cJSON *service_queue_update_dto_convertToJSON(service_queue_update_dto_t *service_queue_update_dto);

#endif /* _service_queue_update_dto_H_ */

