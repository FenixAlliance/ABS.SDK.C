/*
 * curriculum_dto.h
 *
 * 
 */

#ifndef _curriculum_dto_H_
#define _curriculum_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct curriculum_dto_t curriculum_dto_t;




typedef struct curriculum_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *social_profile_id; // string
    char *job_applicant_profile_id; // string
    int undergraduate; //boolean
    int certified_professional; //boolean
    int sales; //boolean
    int others; //boolean
    int finance; //boolean
    int research; //boolean
    int advocate; //boolean
    int marketing; //boolean
    int education; //boolean
    int executive; //boolean
    int commercial; //boolean
    int graphic_design; //boolean
    int sustainability; //boolean
    int administrative; //boolean
    int human_resources; //boolean
    int sound_engineering; //boolean
    int cloud_engineering; //boolean
    int first_level_support; //boolean
    int second_level_support; //boolean
    int software_engineering; //boolean
    int partner_account_representative; //boolean
    int startup_success_representative; //boolean
    int customer_success_representative; //boolean

} curriculum_dto_t;

curriculum_dto_t *curriculum_dto_create(
    char *id,
    char *timestamp,
    char *social_profile_id,
    char *job_applicant_profile_id,
    int undergraduate,
    int certified_professional,
    int sales,
    int others,
    int finance,
    int research,
    int advocate,
    int marketing,
    int education,
    int executive,
    int commercial,
    int graphic_design,
    int sustainability,
    int administrative,
    int human_resources,
    int sound_engineering,
    int cloud_engineering,
    int first_level_support,
    int second_level_support,
    int software_engineering,
    int partner_account_representative,
    int startup_success_representative,
    int customer_success_representative
);

void curriculum_dto_free(curriculum_dto_t *curriculum_dto);

curriculum_dto_t *curriculum_dto_parseFromJSON(cJSON *curriculum_dtoJSON);

cJSON *curriculum_dto_convertToJSON(curriculum_dto_t *curriculum_dto);

#endif /* _curriculum_dto_H_ */

