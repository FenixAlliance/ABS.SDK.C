/*
 * leave_application_update_dto.h
 *
 * 
 */

#ifndef _leave_application_update_dto_H_
#define _leave_application_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct leave_application_update_dto_t leave_application_update_dto_t;




typedef struct leave_application_update_dto_t {
    char *justification; // string
    int approved; //boolean
    int on_review; //boolean
    char *leave_type_id; // string
    char *employee_profile_id; // string

} leave_application_update_dto_t;

leave_application_update_dto_t *leave_application_update_dto_create(
    char *justification,
    int approved,
    int on_review,
    char *leave_type_id,
    char *employee_profile_id
);

void leave_application_update_dto_free(leave_application_update_dto_t *leave_application_update_dto);

leave_application_update_dto_t *leave_application_update_dto_parseFromJSON(cJSON *leave_application_update_dtoJSON);

cJSON *leave_application_update_dto_convertToJSON(leave_application_update_dto_t *leave_application_update_dto);

#endif /* _leave_application_update_dto_H_ */

