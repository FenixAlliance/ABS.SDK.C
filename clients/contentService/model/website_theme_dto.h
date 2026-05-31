/*
 * website_theme_dto.h
 *
 * 
 */

#ifndef _website_theme_dto_H_
#define _website_theme_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct website_theme_dto_t website_theme_dto_t;




typedef struct website_theme_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *description; // string
    char *author_name; // string
    char *author_url; // string
    char *version; // string
    char *tags; // string
    int enable; //boolean
    char *tenant_id; // string

} website_theme_dto_t;

website_theme_dto_t *website_theme_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description,
    char *author_name,
    char *author_url,
    char *version,
    char *tags,
    int enable,
    char *tenant_id
);

void website_theme_dto_free(website_theme_dto_t *website_theme_dto);

website_theme_dto_t *website_theme_dto_parseFromJSON(cJSON *website_theme_dtoJSON);

cJSON *website_theme_dto_convertToJSON(website_theme_dto_t *website_theme_dto);

#endif /* _website_theme_dto_H_ */

