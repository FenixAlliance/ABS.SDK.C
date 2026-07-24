#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "create_signing_participant_dto.h"


char* create_signing_participant_dto_role_ToString(trustservice_create_signing_participant_dto_ROLE_e role) {
    char* roleArray[] =  { "NULL", "Signer", "Approver", "Viewer", "Witness", "CarbonCopy", "System" };
    return roleArray[role];
}

trustservice_create_signing_participant_dto_ROLE_e create_signing_participant_dto_role_FromString(char* role){
    int stringToReturn = 0;
    char *roleArray[] =  { "NULL", "Signer", "Approver", "Viewer", "Witness", "CarbonCopy", "System" };
    size_t sizeofArray = sizeof(roleArray) / sizeof(roleArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(role, roleArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

create_signing_participant_dto_t *create_signing_participant_dto_create(
    char *contact_id,
    trustservice_create_signing_participant_dto_ROLE_e role,
    int routing_order,
    char *external_reference
    ) {
    create_signing_participant_dto_t *create_signing_participant_dto_local_var = malloc(sizeof(create_signing_participant_dto_t));
    if (!create_signing_participant_dto_local_var) {
        return NULL;
    }
    create_signing_participant_dto_local_var->contact_id = contact_id;
    create_signing_participant_dto_local_var->role = role;
    create_signing_participant_dto_local_var->routing_order = routing_order;
    create_signing_participant_dto_local_var->external_reference = external_reference;

    return create_signing_participant_dto_local_var;
}


void create_signing_participant_dto_free(create_signing_participant_dto_t *create_signing_participant_dto) {
    if(NULL == create_signing_participant_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (create_signing_participant_dto->contact_id) {
        free(create_signing_participant_dto->contact_id);
        create_signing_participant_dto->contact_id = NULL;
    }
    if (create_signing_participant_dto->external_reference) {
        free(create_signing_participant_dto->external_reference);
        create_signing_participant_dto->external_reference = NULL;
    }
    free(create_signing_participant_dto);
}

cJSON *create_signing_participant_dto_convertToJSON(create_signing_participant_dto_t *create_signing_participant_dto) {
    cJSON *item = cJSON_CreateObject();

    // create_signing_participant_dto->contact_id
    if (!create_signing_participant_dto->contact_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "contactId", create_signing_participant_dto->contact_id) == NULL) {
    goto fail; //String
    }


    // create_signing_participant_dto->role
    if(create_signing_participant_dto->role != trustservice_create_signing_participant_dto_ROLE_NULL) {
    if(cJSON_AddStringToObject(item, "role", rolecreate_signing_participant_dto_ToString(create_signing_participant_dto->role)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // create_signing_participant_dto->routing_order
    if(create_signing_participant_dto->routing_order) {
    if(cJSON_AddNumberToObject(item, "routingOrder", create_signing_participant_dto->routing_order) == NULL) {
    goto fail; //Numeric
    }
    }


    // create_signing_participant_dto->external_reference
    if(create_signing_participant_dto->external_reference) {
    if(cJSON_AddStringToObject(item, "externalReference", create_signing_participant_dto->external_reference) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

create_signing_participant_dto_t *create_signing_participant_dto_parseFromJSON(cJSON *create_signing_participant_dtoJSON){

    create_signing_participant_dto_t *create_signing_participant_dto_local_var = NULL;

    // create_signing_participant_dto->contact_id
    cJSON *contact_id = cJSON_GetObjectItemCaseSensitive(create_signing_participant_dtoJSON, "contactId");
    if (!contact_id) {
        goto end;
    }

    
    if(!cJSON_IsString(contact_id))
    {
    goto end; //String
    }

    // create_signing_participant_dto->role
    cJSON *role = cJSON_GetObjectItemCaseSensitive(create_signing_participant_dtoJSON, "role");
    trustservice_create_signing_participant_dto_ROLE_e roleVariable;
    if (role) { 
    if(!cJSON_IsString(role))
    {
    goto end; //Enum
    }
    roleVariable = create_signing_participant_dto_role_FromString(role->valuestring);
    }

    // create_signing_participant_dto->routing_order
    cJSON *routing_order = cJSON_GetObjectItemCaseSensitive(create_signing_participant_dtoJSON, "routingOrder");
    if (routing_order) { 
    if(!cJSON_IsNumber(routing_order))
    {
    goto end; //Numeric
    }
    }

    // create_signing_participant_dto->external_reference
    cJSON *external_reference = cJSON_GetObjectItemCaseSensitive(create_signing_participant_dtoJSON, "externalReference");
    if (external_reference) { 
    if(!cJSON_IsString(external_reference) && !cJSON_IsNull(external_reference))
    {
    goto end; //String
    }
    }


    create_signing_participant_dto_local_var = create_signing_participant_dto_create (
        strdup(contact_id->valuestring),
        role ? roleVariable : trustservice_create_signing_participant_dto_ROLE_NULL,
        routing_order ? routing_order->valuedouble : 0,
        external_reference && !cJSON_IsNull(external_reference) ? strdup(external_reference->valuestring) : NULL
        );

    return create_signing_participant_dto_local_var;
end:
    return NULL;

}
