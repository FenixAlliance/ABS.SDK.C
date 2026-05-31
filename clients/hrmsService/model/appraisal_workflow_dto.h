/*
 * appraisal_workflow_dto.h
 *
 * 
 */

#ifndef _appraisal_workflow_dto_H_
#define _appraisal_workflow_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct appraisal_workflow_dto_t appraisal_workflow_dto_t;




typedef struct appraisal_workflow_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *description; // string
    char *tenant_id; // string

} appraisal_workflow_dto_t;

appraisal_workflow_dto_t *appraisal_workflow_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description,
    char *tenant_id
);

void appraisal_workflow_dto_free(appraisal_workflow_dto_t *appraisal_workflow_dto);

appraisal_workflow_dto_t *appraisal_workflow_dto_parseFromJSON(cJSON *appraisal_workflow_dtoJSON);

cJSON *appraisal_workflow_dto_convertToJSON(appraisal_workflow_dto_t *appraisal_workflow_dto);

#endif /* _appraisal_workflow_dto_H_ */

