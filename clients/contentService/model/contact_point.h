/*
 * contact_point.h
 *
 * 
 */

#ifndef _contact_point_H_
#define _contact_point_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct contact_point_t contact_point_t;




typedef struct contact_point_t {
    char *contact_point_type; // string
    char *telephone; // string
    char *contact_type; // string
    char *contact_option; // string
    list_t *area_served; //primitive container
    char *type; // string

} contact_point_t;

contact_point_t *contact_point_create(
    char *contact_point_type,
    char *telephone,
    char *contact_type,
    char *contact_option,
    list_t *area_served,
    char *type
);

void contact_point_free(contact_point_t *contact_point);

contact_point_t *contact_point_parseFromJSON(cJSON *contact_pointJSON);

cJSON *contact_point_convertToJSON(contact_point_t *contact_point);

#endif /* _contact_point_H_ */

