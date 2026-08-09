/*
 * capability_dto.h
 *
 * 
 */

#ifndef _capability_dto_H_
#define _capability_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct capability_dto_t capability_dto_t;




typedef struct capability_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *key; // string
    char *name; // string
    char *description; // string
    char *category; // string
    char *effect; // string
    list_t *risks; //primitive container
    list_t *surfaces; //primitive container
    char *required_permission; // string
    int available; //boolean
    char *denied_reason; // string
    char *version; // string
    list_t* input_schema; //map
    list_t* output_schema; //map
    int is_output_collection; //boolean
    list_t *required_inputs; //primitive container

} capability_dto_t;

capability_dto_t *capability_dto_create(
    char *id,
    char *timestamp,
    char *key,
    char *name,
    char *description,
    char *category,
    char *effect,
    list_t *risks,
    list_t *surfaces,
    char *required_permission,
    int available,
    char *denied_reason,
    char *version,
    list_t* input_schema,
    list_t* output_schema,
    int is_output_collection,
    list_t *required_inputs
);

void capability_dto_free(capability_dto_t *capability_dto);

capability_dto_t *capability_dto_parseFromJSON(cJSON *capability_dtoJSON);

cJSON *capability_dto_convertToJSON(capability_dto_t *capability_dto);

#endif /* _capability_dto_H_ */

