/*
 * organization.h
 *
 * 
 */

#ifndef _organization_H_
#define _organization_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct organization_t organization_t;

#include "contact_point.h"



typedef struct organization_t {
    char *legal_name; // string
    char *business_name; // string
    char *slogan; // string
    char *homepage; // string
    char *facebook_page_username; // string
    char *instagram_username; // string
    char *linked_in_username; // string
    char *twitter_handler; // string
    char *git_hub_username; // string
    list_t *contact_points; //nonprimitive container

} organization_t;

organization_t *organization_create(
    char *legal_name,
    char *business_name,
    char *slogan,
    char *homepage,
    char *facebook_page_username,
    char *instagram_username,
    char *linked_in_username,
    char *twitter_handler,
    char *git_hub_username,
    list_t *contact_points
);

void organization_free(organization_t *organization);

organization_t *organization_parseFromJSON(cJSON *organizationJSON);

cJSON *organization_convertToJSON(organization_t *organization);

#endif /* _organization_H_ */

