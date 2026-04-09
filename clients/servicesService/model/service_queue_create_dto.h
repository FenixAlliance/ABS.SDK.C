/*
 * service_queue_create_dto.h
 *
 * 
 */

#ifndef _service_queue_create_dto_H_
#define _service_queue_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct service_queue_create_dto_t service_queue_create_dto_t;




typedef struct service_queue_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *service_id; // string

} service_queue_create_dto_t;

service_queue_create_dto_t *service_queue_create_dto_create(
    char *id,
    char *timestamp,
    char *service_id
);

void service_queue_create_dto_free(service_queue_create_dto_t *service_queue_create_dto);

service_queue_create_dto_t *service_queue_create_dto_parseFromJSON(cJSON *service_queue_create_dtoJSON);

cJSON *service_queue_create_dto_convertToJSON(service_queue_create_dto_t *service_queue_create_dto);

#endif /* _service_queue_create_dto_H_ */

