/*
 * knowledge_article_update_dto.h
 *
 * 
 */

#ifndef _knowledge_article_update_dto_H_
#define _knowledge_article_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct knowledge_article_update_dto_t knowledge_article_update_dto_t;




typedef struct knowledge_article_update_dto_t {
    char *title; // string
    char *slug; // string
    char *excerpt; // string
    char *description; // string
    char *content; // string
    char *highlight_image; // string
    char *seo_title; // string
    char *seo_key_words; // string
    char *meta_description; // string
    int published; //boolean
    int enable; //boolean

} knowledge_article_update_dto_t;

knowledge_article_update_dto_t *knowledge_article_update_dto_create(
    char *title,
    char *slug,
    char *excerpt,
    char *description,
    char *content,
    char *highlight_image,
    char *seo_title,
    char *seo_key_words,
    char *meta_description,
    int published,
    int enable
);

void knowledge_article_update_dto_free(knowledge_article_update_dto_t *knowledge_article_update_dto);

knowledge_article_update_dto_t *knowledge_article_update_dto_parseFromJSON(cJSON *knowledge_article_update_dtoJSON);

cJSON *knowledge_article_update_dto_convertToJSON(knowledge_article_update_dto_t *knowledge_article_update_dto);

#endif /* _knowledge_article_update_dto_H_ */

