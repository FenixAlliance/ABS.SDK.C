/*
 * item_google_category_dto.h
 *
 * 
 */

#ifndef _item_google_category_dto_H_
#define _item_google_category_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct item_google_category_dto_t item_google_category_dto_t;




typedef struct item_google_category_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *path; // string
    char *icon; // string
    char *name; // string
    int disabled; //boolean
    int featured; //boolean
    int display_on_menu; //boolean
    int has_children; //boolean
    char *menu_image; // string
    char *banner_code; // string
    char *banner_image; // string
    char *primary_image; // string
    char *parent_category_id; // string
    double starting_at_amount_in_usd; //numeric

} item_google_category_dto_t;

item_google_category_dto_t *item_google_category_dto_create(
    char *id,
    char *timestamp,
    char *path,
    char *icon,
    char *name,
    int disabled,
    int featured,
    int display_on_menu,
    int has_children,
    char *menu_image,
    char *banner_code,
    char *banner_image,
    char *primary_image,
    char *parent_category_id,
    double starting_at_amount_in_usd
);

void item_google_category_dto_free(item_google_category_dto_t *item_google_category_dto);

item_google_category_dto_t *item_google_category_dto_parseFromJSON(cJSON *item_google_category_dtoJSON);

cJSON *item_google_category_dto_convertToJSON(item_google_category_dto_t *item_google_category_dto);

#endif /* _item_google_category_dto_H_ */

