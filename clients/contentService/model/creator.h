/*
 * creator.h
 *
 * 
 */

#ifndef _creator_H_
#define _creator_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct creator_t creator_t;




typedef struct creator_t {
    char *name; // string
    char *organization; // string
    char *twitter_handler; // string
    char *git_hub_username; // string
    char *facebook_username; // string

} creator_t;

creator_t *creator_create(
    char *name,
    char *organization,
    char *twitter_handler,
    char *git_hub_username,
    char *facebook_username
);

void creator_free(creator_t *creator);

creator_t *creator_parseFromJSON(cJSON *creatorJSON);

cJSON *creator_convertToJSON(creator_t *creator);

#endif /* _creator_H_ */

