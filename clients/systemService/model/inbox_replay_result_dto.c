#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inbox_replay_result_dto.h"



inbox_replay_result_dto_t *inbox_replay_result_dto_create(
    char *new_inbox_message_id,
    char *root_inbox_message_id,
    int generation
    ) {
    inbox_replay_result_dto_t *inbox_replay_result_dto_local_var = malloc(sizeof(inbox_replay_result_dto_t));
    if (!inbox_replay_result_dto_local_var) {
        return NULL;
    }
    inbox_replay_result_dto_local_var->new_inbox_message_id = new_inbox_message_id;
    inbox_replay_result_dto_local_var->root_inbox_message_id = root_inbox_message_id;
    inbox_replay_result_dto_local_var->generation = generation;

    return inbox_replay_result_dto_local_var;
}


void inbox_replay_result_dto_free(inbox_replay_result_dto_t *inbox_replay_result_dto) {
    if(NULL == inbox_replay_result_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (inbox_replay_result_dto->new_inbox_message_id) {
        free(inbox_replay_result_dto->new_inbox_message_id);
        inbox_replay_result_dto->new_inbox_message_id = NULL;
    }
    if (inbox_replay_result_dto->root_inbox_message_id) {
        free(inbox_replay_result_dto->root_inbox_message_id);
        inbox_replay_result_dto->root_inbox_message_id = NULL;
    }
    free(inbox_replay_result_dto);
}

cJSON *inbox_replay_result_dto_convertToJSON(inbox_replay_result_dto_t *inbox_replay_result_dto) {
    cJSON *item = cJSON_CreateObject();

    // inbox_replay_result_dto->new_inbox_message_id
    if(inbox_replay_result_dto->new_inbox_message_id) {
    if(cJSON_AddStringToObject(item, "newInboxMessageId", inbox_replay_result_dto->new_inbox_message_id) == NULL) {
    goto fail; //String
    }
    }


    // inbox_replay_result_dto->root_inbox_message_id
    if(inbox_replay_result_dto->root_inbox_message_id) {
    if(cJSON_AddStringToObject(item, "rootInboxMessageId", inbox_replay_result_dto->root_inbox_message_id) == NULL) {
    goto fail; //String
    }
    }


    // inbox_replay_result_dto->generation
    if(inbox_replay_result_dto->generation) {
    if(cJSON_AddNumberToObject(item, "generation", inbox_replay_result_dto->generation) == NULL) {
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

inbox_replay_result_dto_t *inbox_replay_result_dto_parseFromJSON(cJSON *inbox_replay_result_dtoJSON){

    inbox_replay_result_dto_t *inbox_replay_result_dto_local_var = NULL;

    // inbox_replay_result_dto->new_inbox_message_id
    cJSON *new_inbox_message_id = cJSON_GetObjectItemCaseSensitive(inbox_replay_result_dtoJSON, "newInboxMessageId");
    if (new_inbox_message_id) { 
    if(!cJSON_IsString(new_inbox_message_id) && !cJSON_IsNull(new_inbox_message_id))
    {
    goto end; //String
    }
    }

    // inbox_replay_result_dto->root_inbox_message_id
    cJSON *root_inbox_message_id = cJSON_GetObjectItemCaseSensitive(inbox_replay_result_dtoJSON, "rootInboxMessageId");
    if (root_inbox_message_id) { 
    if(!cJSON_IsString(root_inbox_message_id) && !cJSON_IsNull(root_inbox_message_id))
    {
    goto end; //String
    }
    }

    // inbox_replay_result_dto->generation
    cJSON *generation = cJSON_GetObjectItemCaseSensitive(inbox_replay_result_dtoJSON, "generation");
    if (generation) { 
    if(!cJSON_IsNumber(generation))
    {
    goto end; //Numeric
    }
    }


    inbox_replay_result_dto_local_var = inbox_replay_result_dto_create (
        new_inbox_message_id && !cJSON_IsNull(new_inbox_message_id) ? strdup(new_inbox_message_id->valuestring) : NULL,
        root_inbox_message_id && !cJSON_IsNull(root_inbox_message_id) ? strdup(root_inbox_message_id->valuestring) : NULL,
        generation ? generation->valuedouble : 0
        );

    return inbox_replay_result_dto_local_var;
end:
    return NULL;

}
