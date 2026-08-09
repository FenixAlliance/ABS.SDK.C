#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "execution_provenance.h"


char* execution_provenance_initiation_ToString(identityservice_execution_provenance_INITIATION_e initiation) {
    char* initiationArray[] =  { "NULL", "Unknown", "Http", "Workflow", "ScheduledJob", "Event", "AiTool", "Mcp", "Integration", "System", "Manual" };
    return initiationArray[initiation];
}

identityservice_execution_provenance_INITIATION_e execution_provenance_initiation_FromString(char* initiation){
    int stringToReturn = 0;
    char *initiationArray[] =  { "NULL", "Unknown", "Http", "Workflow", "ScheduledJob", "Event", "AiTool", "Mcp", "Integration", "System", "Manual" };
    size_t sizeofArray = sizeof(initiationArray) / sizeof(initiationArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(initiation, initiationArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* execution_provenance_on_behalf_of_actor_kind_ToString(identityservice_execution_provenance_ONBEHALFOFACTORKIND_e on_behalf_of_actor_kind) {
    char* on_behalf_of_actor_kindArray[] =  { "NULL", "Human", "Agent", "Application", "Service", "System" };
    return on_behalf_of_actor_kindArray[on_behalf_of_actor_kind];
}

identityservice_execution_provenance_ONBEHALFOFACTORKIND_e execution_provenance_on_behalf_of_actor_kind_FromString(char* on_behalf_of_actor_kind){
    int stringToReturn = 0;
    char *on_behalf_of_actor_kindArray[] =  { "NULL", "Human", "Agent", "Application", "Service", "System" };
    size_t sizeofArray = sizeof(on_behalf_of_actor_kindArray) / sizeof(on_behalf_of_actor_kindArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(on_behalf_of_actor_kind, on_behalf_of_actor_kindArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

execution_provenance_t *execution_provenance_create(
    identityservice_execution_provenance_INITIATION_e initiation,
    object_t *on_behalf_of_actor_id,
    identityservice_execution_provenance_ONBEHALFOFACTORKIND_e on_behalf_of_actor_kind,
    char *causation_id,
    char *originating_workflow_instance_id,
    int event_depth
    ) {
    execution_provenance_t *execution_provenance_local_var = malloc(sizeof(execution_provenance_t));
    if (!execution_provenance_local_var) {
        return NULL;
    }
    execution_provenance_local_var->initiation = initiation;
    execution_provenance_local_var->on_behalf_of_actor_id = on_behalf_of_actor_id;
    execution_provenance_local_var->on_behalf_of_actor_kind = on_behalf_of_actor_kind;
    execution_provenance_local_var->causation_id = causation_id;
    execution_provenance_local_var->originating_workflow_instance_id = originating_workflow_instance_id;
    execution_provenance_local_var->event_depth = event_depth;

    return execution_provenance_local_var;
}


void execution_provenance_free(execution_provenance_t *execution_provenance) {
    if(NULL == execution_provenance){
        return ;
    }
    listEntry_t *listEntry;
    if (execution_provenance->on_behalf_of_actor_id) {
        object_free(execution_provenance->on_behalf_of_actor_id);
        execution_provenance->on_behalf_of_actor_id = NULL;
    }
    if (execution_provenance->causation_id) {
        free(execution_provenance->causation_id);
        execution_provenance->causation_id = NULL;
    }
    if (execution_provenance->originating_workflow_instance_id) {
        free(execution_provenance->originating_workflow_instance_id);
        execution_provenance->originating_workflow_instance_id = NULL;
    }
    free(execution_provenance);
}

cJSON *execution_provenance_convertToJSON(execution_provenance_t *execution_provenance) {
    cJSON *item = cJSON_CreateObject();

    // execution_provenance->initiation
    if(execution_provenance->initiation != identityservice_execution_provenance_INITIATION_NULL) {
    if(cJSON_AddStringToObject(item, "initiation", initiationexecution_provenance_ToString(execution_provenance->initiation)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // execution_provenance->on_behalf_of_actor_id
    if(execution_provenance->on_behalf_of_actor_id) {
    cJSON *on_behalf_of_actor_id_object = object_convertToJSON(execution_provenance->on_behalf_of_actor_id);
    if(on_behalf_of_actor_id_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "onBehalfOfActorId", on_behalf_of_actor_id_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // execution_provenance->on_behalf_of_actor_kind
    if(execution_provenance->on_behalf_of_actor_kind != identityservice_execution_provenance_ONBEHALFOFACTORKIND_NULL) {
    if(cJSON_AddStringToObject(item, "onBehalfOfActorKind", on_behalf_of_actor_kindexecution_provenance_ToString(execution_provenance->on_behalf_of_actor_kind)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // execution_provenance->causation_id
    if(execution_provenance->causation_id) {
    if(cJSON_AddStringToObject(item, "causationId", execution_provenance->causation_id) == NULL) {
    goto fail; //String
    }
    }


    // execution_provenance->originating_workflow_instance_id
    if(execution_provenance->originating_workflow_instance_id) {
    if(cJSON_AddStringToObject(item, "originatingWorkflowInstanceId", execution_provenance->originating_workflow_instance_id) == NULL) {
    goto fail; //String
    }
    }


    // execution_provenance->event_depth
    if(execution_provenance->event_depth) {
    if(cJSON_AddNumberToObject(item, "eventDepth", execution_provenance->event_depth) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

execution_provenance_t *execution_provenance_parseFromJSON(cJSON *execution_provenanceJSON){

    execution_provenance_t *execution_provenance_local_var = NULL;

    // execution_provenance->initiation
    cJSON *initiation = cJSON_GetObjectItemCaseSensitive(execution_provenanceJSON, "initiation");
    identityservice_execution_provenance_INITIATION_e initiationVariable;
    if (initiation) { 
    if(!cJSON_IsString(initiation))
    {
    goto end; //Enum
    }
    initiationVariable = execution_provenance_initiation_FromString(initiation->valuestring);
    }

    // execution_provenance->on_behalf_of_actor_id
    cJSON *on_behalf_of_actor_id = cJSON_GetObjectItemCaseSensitive(execution_provenanceJSON, "onBehalfOfActorId");
    object_t *on_behalf_of_actor_id_local_object = NULL;
    if (on_behalf_of_actor_id) { 
    on_behalf_of_actor_id_local_object = object_parseFromJSON(on_behalf_of_actor_id); //object
    }

    // execution_provenance->on_behalf_of_actor_kind
    cJSON *on_behalf_of_actor_kind = cJSON_GetObjectItemCaseSensitive(execution_provenanceJSON, "onBehalfOfActorKind");
    identityservice_execution_provenance_ONBEHALFOFACTORKIND_e on_behalf_of_actor_kindVariable;
    if (on_behalf_of_actor_kind) { 
    if(!cJSON_IsString(on_behalf_of_actor_kind))
    {
    goto end; //Enum
    }
    on_behalf_of_actor_kindVariable = execution_provenance_on_behalf_of_actor_kind_FromString(on_behalf_of_actor_kind->valuestring);
    }

    // execution_provenance->causation_id
    cJSON *causation_id = cJSON_GetObjectItemCaseSensitive(execution_provenanceJSON, "causationId");
    if (causation_id) { 
    if(!cJSON_IsString(causation_id) && !cJSON_IsNull(causation_id))
    {
    goto end; //String
    }
    }

    // execution_provenance->originating_workflow_instance_id
    cJSON *originating_workflow_instance_id = cJSON_GetObjectItemCaseSensitive(execution_provenanceJSON, "originatingWorkflowInstanceId");
    if (originating_workflow_instance_id) { 
    if(!cJSON_IsString(originating_workflow_instance_id) && !cJSON_IsNull(originating_workflow_instance_id))
    {
    goto end; //String
    }
    }

    // execution_provenance->event_depth
    cJSON *event_depth = cJSON_GetObjectItemCaseSensitive(execution_provenanceJSON, "eventDepth");
    if (event_depth) { 
    if(!cJSON_IsNumber(event_depth))
    {
    goto end; //Numeric
    }
    }


    execution_provenance_local_var = execution_provenance_create (
        initiation ? initiationVariable : identityservice_execution_provenance_INITIATION_NULL,
        on_behalf_of_actor_id ? on_behalf_of_actor_id_local_object : NULL,
        on_behalf_of_actor_kind ? on_behalf_of_actor_kindVariable : identityservice_execution_provenance_ONBEHALFOFACTORKIND_NULL,
        causation_id && !cJSON_IsNull(causation_id) ? strdup(causation_id->valuestring) : NULL,
        originating_workflow_instance_id && !cJSON_IsNull(originating_workflow_instance_id) ? strdup(originating_workflow_instance_id->valuestring) : NULL,
        event_depth ? event_depth->valuedouble : 0
        );

    return execution_provenance_local_var;
end:
    return NULL;

}
