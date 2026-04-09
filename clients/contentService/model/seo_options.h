/*
 * seo_options.h
 *
 * 
 */

#ifndef _seo_options_H_
#define _seo_options_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct seo_options_t seo_options_t;

#include "creator.h"
#include "organization.h"



typedef struct seo_options_t {
    char *keywords; // string
    char *description; // string
    char *logo; // string
    char *social_image; // string
    char *title_suffix; // string
    char *bing_verification_code; // string
    char *google_verification_code; // string
    char *pinterest_verification_code; // string
    struct creator_t *creator; //model
    struct organization_t *organization; //model
    list_t *same_as; //primitive container

} seo_options_t;

seo_options_t *seo_options_create(
    char *keywords,
    char *description,
    char *logo,
    char *social_image,
    char *title_suffix,
    char *bing_verification_code,
    char *google_verification_code,
    char *pinterest_verification_code,
    creator_t *creator,
    organization_t *organization,
    list_t *same_as
);

void seo_options_free(seo_options_t *seo_options);

seo_options_t *seo_options_parseFromJSON(cJSON *seo_optionsJSON);

cJSON *seo_options_convertToJSON(seo_options_t *seo_options);

#endif /* _seo_options_H_ */

