/*
 * social_media_options.h
 *
 * 
 */

#ifndef _social_media_options_H_
#define _social_media_options_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct social_media_options_t social_media_options_t;




typedef struct social_media_options_t {
    char *facebook_page_url; // string
    char *twitter_username; // string
    char *instagram_url; // string
    char *linked_in_url; // string
    char *my_space_url; // string
    char *pinterest_url; // string
    char *you_tube_url; // string
    char *github_url; // string
    char *reddit_url; // string
    char *whats_app_number; // string
    char *wikipedia_url; // string

} social_media_options_t;

social_media_options_t *social_media_options_create(
    char *facebook_page_url,
    char *twitter_username,
    char *instagram_url,
    char *linked_in_url,
    char *my_space_url,
    char *pinterest_url,
    char *you_tube_url,
    char *github_url,
    char *reddit_url,
    char *whats_app_number,
    char *wikipedia_url
);

void social_media_options_free(social_media_options_t *social_media_options);

social_media_options_t *social_media_options_parseFromJSON(cJSON *social_media_optionsJSON);

cJSON *social_media_options_convertToJSON(social_media_options_t *social_media_options);

#endif /* _social_media_options_H_ */

