/*
 * website_theme_update_dto.h
 *
 * 
 */

#ifndef _website_theme_update_dto_H_
#define _website_theme_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct website_theme_update_dto_t website_theme_update_dto_t;




typedef struct website_theme_update_dto_t {
    char *name; // string
    char *description; // string
    char *author_name; // string
    char *author_url; // string
    char *version; // string
    char *tags; // string
    int enable; //boolean

} website_theme_update_dto_t;

website_theme_update_dto_t *website_theme_update_dto_create(
    char *name,
    char *description,
    char *author_name,
    char *author_url,
    char *version,
    char *tags,
    int enable
);

void website_theme_update_dto_free(website_theme_update_dto_t *website_theme_update_dto);

website_theme_update_dto_t *website_theme_update_dto_parseFromJSON(cJSON *website_theme_update_dtoJSON);

cJSON *website_theme_update_dto_convertToJSON(website_theme_update_dto_t *website_theme_update_dto);

#endif /* _website_theme_update_dto_H_ */

