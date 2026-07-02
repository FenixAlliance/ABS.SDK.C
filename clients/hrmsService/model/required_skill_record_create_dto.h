/*
 * required_skill_record_create_dto.h
 *
 * 
 */

#ifndef _required_skill_record_create_dto_H_
#define _required_skill_record_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct required_skill_record_create_dto_t required_skill_record_create_dto_t;


// Enum REQUIREDSKILLRECORDTYPE for required_skill_record_create_dto

typedef enum  { hrmsservice_required_skill_record_create_dto_REQUIREDSKILLRECORDTYPE_NULL = 0, hrmsservice_required_skill_record_create_dto_REQUIREDSKILLRECORDTYPE_MustHave, hrmsservice_required_skill_record_create_dto_REQUIREDSKILLRECORDTYPE_Optional } hrmsservice_required_skill_record_create_dto_REQUIREDSKILLRECORDTYPE_e;

char* required_skill_record_create_dto_required_skill_record_type_ToString(hrmsservice_required_skill_record_create_dto_REQUIREDSKILLRECORDTYPE_e required_skill_record_type);

hrmsservice_required_skill_record_create_dto_REQUIREDSKILLRECORDTYPE_e required_skill_record_create_dto_required_skill_record_type_FromString(char* required_skill_record_type);



typedef struct required_skill_record_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *skill_id; // string
    char *job_offer_id; // string
    char *employer_profile_id; // string
    int experience_in_years; //numeric
    double priority; //numeric
    hrmsservice_required_skill_record_create_dto_REQUIREDSKILLRECORDTYPE_e required_skill_record_type; //enum

} required_skill_record_create_dto_t;

required_skill_record_create_dto_t *required_skill_record_create_dto_create(
    char *id,
    char *timestamp,
    char *skill_id,
    char *job_offer_id,
    char *employer_profile_id,
    int experience_in_years,
    double priority,
    hrmsservice_required_skill_record_create_dto_REQUIREDSKILLRECORDTYPE_e required_skill_record_type
);

void required_skill_record_create_dto_free(required_skill_record_create_dto_t *required_skill_record_create_dto);

required_skill_record_create_dto_t *required_skill_record_create_dto_parseFromJSON(cJSON *required_skill_record_create_dtoJSON);

cJSON *required_skill_record_create_dto_convertToJSON(required_skill_record_create_dto_t *required_skill_record_create_dto);

#endif /* _required_skill_record_create_dto_H_ */

