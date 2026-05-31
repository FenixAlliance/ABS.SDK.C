/*
 * website_theme_dto_list_envelope.h
 *
 * 
 */

#ifndef _website_theme_dto_list_envelope_H_
#define _website_theme_dto_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct website_theme_dto_list_envelope_t website_theme_dto_list_envelope_t;

#include "website_theme_dto.h"



typedef struct website_theme_dto_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    list_t *result; //nonprimitive container

} website_theme_dto_list_envelope_t;

website_theme_dto_list_envelope_t *website_theme_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
);

void website_theme_dto_list_envelope_free(website_theme_dto_list_envelope_t *website_theme_dto_list_envelope);

website_theme_dto_list_envelope_t *website_theme_dto_list_envelope_parseFromJSON(cJSON *website_theme_dto_list_envelopeJSON);

cJSON *website_theme_dto_list_envelope_convertToJSON(website_theme_dto_list_envelope_t *website_theme_dto_list_envelope);

#endif /* _website_theme_dto_list_envelope_H_ */

