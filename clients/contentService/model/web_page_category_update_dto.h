/*
 * web_page_category_update_dto.h
 *
 * 
 */

#ifndef _web_page_category_update_dto_H_
#define _web_page_category_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct web_page_category_update_dto_t web_page_category_update_dto_t;




typedef struct web_page_category_update_dto_t {
    char *slug; // string
    char *title; // string
    char *description; // string
    char *seo_title; // string
    char *meta_description; // string
    int cornerstone_content; //boolean
    int allow_serach_engines; //boolean
    char *seo_key_phrases; // string
    char *canonical_url; // string
    char *image_url; // string
    char *image; // string

} web_page_category_update_dto_t;

web_page_category_update_dto_t *web_page_category_update_dto_create(
    char *slug,
    char *title,
    char *description,
    char *seo_title,
    char *meta_description,
    int cornerstone_content,
    int allow_serach_engines,
    char *seo_key_phrases,
    char *canonical_url,
    char *image_url,
    char *image
);

void web_page_category_update_dto_free(web_page_category_update_dto_t *web_page_category_update_dto);

web_page_category_update_dto_t *web_page_category_update_dto_parseFromJSON(cJSON *web_page_category_update_dtoJSON);

cJSON *web_page_category_update_dto_convertToJSON(web_page_category_update_dto_t *web_page_category_update_dto);

#endif /* _web_page_category_update_dto_H_ */

