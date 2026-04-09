/*
 * blog_options.h
 *
 * 
 */

#ifndef _blog_options_H_
#define _blog_options_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct blog_options_t blog_options_t;




typedef struct blog_options_t {
    int posts_per_page; //numeric
    int enable_blog_post_comments; //boolean

} blog_options_t;

blog_options_t *blog_options_create(
    int posts_per_page,
    int enable_blog_post_comments
);

void blog_options_free(blog_options_t *blog_options);

blog_options_t *blog_options_parseFromJSON(cJSON *blog_optionsJSON);

cJSON *blog_options_convertToJSON(blog_options_t *blog_options);

#endif /* _blog_options_H_ */

