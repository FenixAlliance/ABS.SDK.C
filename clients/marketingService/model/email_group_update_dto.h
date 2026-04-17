/*
 * email_group_update_dto.h
 *
 * 
 */

#ifndef _email_group_update_dto_H_
#define _email_group_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct email_group_update_dto_t email_group_update_dto_t;




typedef struct email_group_update_dto_t {
    char *name; // string
    char *description; // string
    int enabled; //boolean

} email_group_update_dto_t;

email_group_update_dto_t *email_group_update_dto_create(
    char *name,
    char *description,
    int enabled
);

void email_group_update_dto_free(email_group_update_dto_t *email_group_update_dto);

email_group_update_dto_t *email_group_update_dto_parseFromJSON(cJSON *email_group_update_dtoJSON);

cJSON *email_group_update_dto_convertToJSON(email_group_update_dto_t *email_group_update_dto);

#endif /* _email_group_update_dto_H_ */

