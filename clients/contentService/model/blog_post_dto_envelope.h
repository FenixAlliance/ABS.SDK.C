/*
 * blog_post_dto_envelope.h
 *
 * 
 */

#ifndef _blog_post_dto_envelope_H_
#define _blog_post_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct blog_post_dto_envelope_t blog_post_dto_envelope_t;

#include "blog_post_dto.h"



typedef struct blog_post_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct blog_post_dto_t *result; //model

} blog_post_dto_envelope_t;

blog_post_dto_envelope_t *blog_post_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    blog_post_dto_t *result
);

void blog_post_dto_envelope_free(blog_post_dto_envelope_t *blog_post_dto_envelope);

blog_post_dto_envelope_t *blog_post_dto_envelope_parseFromJSON(cJSON *blog_post_dto_envelopeJSON);

cJSON *blog_post_dto_envelope_convertToJSON(blog_post_dto_envelope_t *blog_post_dto_envelope);

#endif /* _blog_post_dto_envelope_H_ */

