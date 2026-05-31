/*
 * appraisal_workflow_update_dto.h
 *
 * 
 */

#ifndef _appraisal_workflow_update_dto_H_
#define _appraisal_workflow_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct appraisal_workflow_update_dto_t appraisal_workflow_update_dto_t;




typedef struct appraisal_workflow_update_dto_t {
    char *name; // string
    char *description; // string

} appraisal_workflow_update_dto_t;

appraisal_workflow_update_dto_t *appraisal_workflow_update_dto_create(
    char *name,
    char *description
);

void appraisal_workflow_update_dto_free(appraisal_workflow_update_dto_t *appraisal_workflow_update_dto);

appraisal_workflow_update_dto_t *appraisal_workflow_update_dto_parseFromJSON(cJSON *appraisal_workflow_update_dtoJSON);

cJSON *appraisal_workflow_update_dto_convertToJSON(appraisal_workflow_update_dto_t *appraisal_workflow_update_dto);

#endif /* _appraisal_workflow_update_dto_H_ */

