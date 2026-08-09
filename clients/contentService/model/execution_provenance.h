/*
 * execution_provenance.h
 *
 * 
 */

#ifndef _execution_provenance_H_
#define _execution_provenance_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct execution_provenance_t execution_provenance_t;

#include "object.h"

// Enum INITIATION for execution_provenance

typedef enum  { contentservice_execution_provenance_INITIATION_NULL = 0, contentservice_execution_provenance_INITIATION_Unknown, contentservice_execution_provenance_INITIATION_Http, contentservice_execution_provenance_INITIATION_Workflow, contentservice_execution_provenance_INITIATION_ScheduledJob, contentservice_execution_provenance_INITIATION_Event, contentservice_execution_provenance_INITIATION_AiTool, contentservice_execution_provenance_INITIATION_Mcp, contentservice_execution_provenance_INITIATION_Integration, contentservice_execution_provenance_INITIATION_System, contentservice_execution_provenance_INITIATION_Manual } contentservice_execution_provenance_INITIATION_e;

char* execution_provenance_initiation_ToString(contentservice_execution_provenance_INITIATION_e initiation);

contentservice_execution_provenance_INITIATION_e execution_provenance_initiation_FromString(char* initiation);

// Enum ONBEHALFOFACTORKIND for execution_provenance

typedef enum  { contentservice_execution_provenance_ONBEHALFOFACTORKIND_NULL = 0, contentservice_execution_provenance_ONBEHALFOFACTORKIND_Human, contentservice_execution_provenance_ONBEHALFOFACTORKIND_Agent, contentservice_execution_provenance_ONBEHALFOFACTORKIND_Application, contentservice_execution_provenance_ONBEHALFOFACTORKIND_Service, contentservice_execution_provenance_ONBEHALFOFACTORKIND_System } contentservice_execution_provenance_ONBEHALFOFACTORKIND_e;

char* execution_provenance_on_behalf_of_actor_kind_ToString(contentservice_execution_provenance_ONBEHALFOFACTORKIND_e on_behalf_of_actor_kind);

contentservice_execution_provenance_ONBEHALFOFACTORKIND_e execution_provenance_on_behalf_of_actor_kind_FromString(char* on_behalf_of_actor_kind);



typedef struct execution_provenance_t {
    contentservice_execution_provenance_INITIATION_e initiation; //enum
    object_t *on_behalf_of_actor_id; //object
    contentservice_execution_provenance_ONBEHALFOFACTORKIND_e on_behalf_of_actor_kind; //enum
    char *causation_id; // string
    char *originating_workflow_instance_id; // string
    int event_depth; //numeric

} execution_provenance_t;

execution_provenance_t *execution_provenance_create(
    contentservice_execution_provenance_INITIATION_e initiation,
    object_t *on_behalf_of_actor_id,
    contentservice_execution_provenance_ONBEHALFOFACTORKIND_e on_behalf_of_actor_kind,
    char *causation_id,
    char *originating_workflow_instance_id,
    int event_depth
);

void execution_provenance_free(execution_provenance_t *execution_provenance);

execution_provenance_t *execution_provenance_parseFromJSON(cJSON *execution_provenanceJSON);

cJSON *execution_provenance_convertToJSON(execution_provenance_t *execution_provenance);

#endif /* _execution_provenance_H_ */

