/*
 * curriculum_experience_update_dto.h
 *
 * 
 */

#ifndef _curriculum_experience_update_dto_H_
#define _curriculum_experience_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct curriculum_experience_update_dto_t curriculum_experience_update_dto_t;




typedef struct curriculum_experience_update_dto_t {
    char *title; // string
    char *description; // string
    double priority; //numeric
    char *organization; // string
    int featured; //boolean
    int current; //boolean
    int validated; //boolean
    char *image_url; // string
    char *date_from; //date time
    char *date_to; //date time
    char *date; //date time
    char *country_language_id; // string
    char *proficiency_rating_value_id; // string
    char *proficiency_rating_model_id; // string
    char *achievements; // string
    char *responsibilities; // string
    char *employer_profile_id; // string

} curriculum_experience_update_dto_t;

curriculum_experience_update_dto_t *curriculum_experience_update_dto_create(
    char *title,
    char *description,
    double priority,
    char *organization,
    int featured,
    int current,
    int validated,
    char *image_url,
    char *date_from,
    char *date_to,
    char *date,
    char *country_language_id,
    char *proficiency_rating_value_id,
    char *proficiency_rating_model_id,
    char *achievements,
    char *responsibilities,
    char *employer_profile_id
);

void curriculum_experience_update_dto_free(curriculum_experience_update_dto_t *curriculum_experience_update_dto);

curriculum_experience_update_dto_t *curriculum_experience_update_dto_parseFromJSON(cJSON *curriculum_experience_update_dtoJSON);

cJSON *curriculum_experience_update_dto_convertToJSON(curriculum_experience_update_dto_t *curriculum_experience_update_dto);

#endif /* _curriculum_experience_update_dto_H_ */

