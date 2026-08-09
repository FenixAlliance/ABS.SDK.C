/*
 * user_admin_detail_dto_envelope.h
 *
 * 
 */

#ifndef _user_admin_detail_dto_envelope_H_
#define _user_admin_detail_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct user_admin_detail_dto_envelope_t user_admin_detail_dto_envelope_t;

#include "user_admin_detail_dto.h"



typedef struct user_admin_detail_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    int http_status; //numeric
    char *error_code; // string
    list_t* validation_details; //map
    char *activity_id; // string
    struct user_admin_detail_dto_t *result; //model

} user_admin_detail_dto_envelope_t;

user_admin_detail_dto_envelope_t *user_admin_detail_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    int http_status,
    char *error_code,
    list_t* validation_details,
    char *activity_id,
    user_admin_detail_dto_t *result
);

void user_admin_detail_dto_envelope_free(user_admin_detail_dto_envelope_t *user_admin_detail_dto_envelope);

user_admin_detail_dto_envelope_t *user_admin_detail_dto_envelope_parseFromJSON(cJSON *user_admin_detail_dto_envelopeJSON);

cJSON *user_admin_detail_dto_envelope_convertToJSON(user_admin_detail_dto_envelope_t *user_admin_detail_dto_envelope);

#endif /* _user_admin_detail_dto_envelope_H_ */

