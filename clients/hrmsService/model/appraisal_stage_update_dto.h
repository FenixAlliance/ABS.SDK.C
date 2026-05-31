/*
 * appraisal_stage_update_dto.h
 *
 * 
 */

#ifndef _appraisal_stage_update_dto_H_
#define _appraisal_stage_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct appraisal_stage_update_dto_t appraisal_stage_update_dto_t;




typedef struct appraisal_stage_update_dto_t {
    char *name; // string
    char *description; // string
    char *appraisal_workflow_id; // string
    int stage_order; //numeric

} appraisal_stage_update_dto_t;

appraisal_stage_update_dto_t *appraisal_stage_update_dto_create(
    char *name,
    char *description,
    char *appraisal_workflow_id,
    int stage_order
);

void appraisal_stage_update_dto_free(appraisal_stage_update_dto_t *appraisal_stage_update_dto);

appraisal_stage_update_dto_t *appraisal_stage_update_dto_parseFromJSON(cJSON *appraisal_stage_update_dtoJSON);

cJSON *appraisal_stage_update_dto_convertToJSON(appraisal_stage_update_dto_t *appraisal_stage_update_dto);

#endif /* _appraisal_stage_update_dto_H_ */

