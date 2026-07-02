/*
 * required_skill_record_dto.h
 *
 * 
 */

#ifndef _required_skill_record_dto_H_
#define _required_skill_record_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct required_skill_record_dto_t required_skill_record_dto_t;


// Enum REQUIREDSKILLRECORDTYPE for required_skill_record_dto

typedef enum  { hrmsservice_required_skill_record_dto_REQUIREDSKILLRECORDTYPE_NULL = 0, hrmsservice_required_skill_record_dto_REQUIREDSKILLRECORDTYPE_MustHave, hrmsservice_required_skill_record_dto_REQUIREDSKILLRECORDTYPE_Optional } hrmsservice_required_skill_record_dto_REQUIREDSKILLRECORDTYPE_e;

char* required_skill_record_dto_required_skill_record_type_ToString(hrmsservice_required_skill_record_dto_REQUIREDSKILLRECORDTYPE_e required_skill_record_type);

hrmsservice_required_skill_record_dto_REQUIREDSKILLRECORDTYPE_e required_skill_record_dto_required_skill_record_type_FromString(char* required_skill_record_type);



typedef struct required_skill_record_dto_t {
    char *id; // string
    char *timestamp; //date time
    int experience_in_years; //numeric
    double priority; //numeric
    hrmsservice_required_skill_record_dto_REQUIREDSKILLRECORDTYPE_e required_skill_record_type; //enum
    char *skill_id; // string
    char *job_offer_id; // string
    char *employer_profile_id; // string
    char *tenant_id; // string
    char *enrollment_id; // string

} required_skill_record_dto_t;

required_skill_record_dto_t *required_skill_record_dto_create(
    char *id,
    char *timestamp,
    int experience_in_years,
    double priority,
    hrmsservice_required_skill_record_dto_REQUIREDSKILLRECORDTYPE_e required_skill_record_type,
    char *skill_id,
    char *job_offer_id,
    char *employer_profile_id,
    char *tenant_id,
    char *enrollment_id
);

void required_skill_record_dto_free(required_skill_record_dto_t *required_skill_record_dto);

required_skill_record_dto_t *required_skill_record_dto_parseFromJSON(cJSON *required_skill_record_dtoJSON);

cJSON *required_skill_record_dto_convertToJSON(required_skill_record_dto_t *required_skill_record_dto);

#endif /* _required_skill_record_dto_H_ */

