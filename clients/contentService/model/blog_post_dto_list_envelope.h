/*
 * blog_post_dto_list_envelope.h
 *
 * 
 */

#ifndef _blog_post_dto_list_envelope_H_
#define _blog_post_dto_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct blog_post_dto_list_envelope_t blog_post_dto_list_envelope_t;

#include "blog_post_dto.h"



typedef struct blog_post_dto_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    list_t *result; //nonprimitive container

} blog_post_dto_list_envelope_t;

blog_post_dto_list_envelope_t *blog_post_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
);

void blog_post_dto_list_envelope_free(blog_post_dto_list_envelope_t *blog_post_dto_list_envelope);

blog_post_dto_list_envelope_t *blog_post_dto_list_envelope_parseFromJSON(cJSON *blog_post_dto_list_envelopeJSON);

cJSON *blog_post_dto_list_envelope_convertToJSON(blog_post_dto_list_envelope_t *blog_post_dto_list_envelope);

#endif /* _blog_post_dto_list_envelope_H_ */

