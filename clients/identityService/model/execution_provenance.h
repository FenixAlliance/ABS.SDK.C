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

typedef enum  { identityservice_execution_provenance_INITIATION_NULL = 0, identityservice_execution_provenance_INITIATION_Unknown, identityservice_execution_provenance_INITIATION_Http, identityservice_execution_provenance_INITIATION_Workflow, identityservice_execution_provenance_INITIATION_ScheduledJob, identityservice_execution_provenance_INITIATION_Event, identityservice_execution_provenance_INITIATION_AiTool, identityservice_execution_provenance_INITIATION_Mcp, identityservice_execution_provenance_INITIATION_Integration, identityservice_execution_provenance_INITIATION_System, identityservice_execution_provenance_INITIATION_Manual } identityservice_execution_provenance_INITIATION_e;

char* execution_provenance_initiation_ToString(identityservice_execution_provenance_INITIATION_e initiation);

identityservice_execution_provenance_INITIATION_e execution_provenance_initiation_FromString(char* initiation);

// Enum ONBEHALFOFACTORKIND for execution_provenance

typedef enum  { identityservice_execution_provenance_ONBEHALFOFACTORKIND_NULL = 0, identityservice_execution_provenance_ONBEHALFOFACTORKIND_Human, identityservice_execution_provenance_ONBEHALFOFACTORKIND_Agent, identityservice_execution_provenance_ONBEHALFOFACTORKIND_Application, identityservice_execution_provenance_ONBEHALFOFACTORKIND_Service, identityservice_execution_provenance_ONBEHALFOFACTORKIND_System } identityservice_execution_provenance_ONBEHALFOFACTORKIND_e;

char* execution_provenance_on_behalf_of_actor_kind_ToString(identityservice_execution_provenance_ONBEHALFOFACTORKIND_e on_behalf_of_actor_kind);

identityservice_execution_provenance_ONBEHALFOFACTORKIND_e execution_provenance_on_behalf_of_actor_kind_FromString(char* on_behalf_of_actor_kind);



typedef struct execution_provenance_t {
    identityservice_execution_provenance_INITIATION_e initiation; //enum
    object_t *on_behalf_of_actor_id; //object
    identityservice_execution_provenance_ONBEHALFOFACTORKIND_e on_behalf_of_actor_kind; //enum
    char *causation_id; // string
    char *originating_workflow_instance_id; // string
    int event_depth; //numeric

} execution_provenance_t;

execution_provenance_t *execution_provenance_create(
    identityservice_execution_provenance_INITIATION_e initiation,
    object_t *on_behalf_of_actor_id,
    identityservice_execution_provenance_ONBEHALFOFACTORKIND_e on_behalf_of_actor_kind,
    char *causation_id,
    char *originating_workflow_instance_id,
    int event_depth
);

void execution_provenance_free(execution_provenance_t *execution_provenance);

execution_provenance_t *execution_provenance_parseFromJSON(cJSON *execution_provenanceJSON);

cJSON *execution_provenance_convertToJSON(execution_provenance_t *execution_provenance);

#endif /* _execution_provenance_H_ */

