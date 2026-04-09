#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "support_ticket_priority_update_dto.h"



support_ticket_priority_update_dto_t *support_ticket_priority_update_dto_create(
    char *title,
    char *description
    ) {
    support_ticket_priority_update_dto_t *support_ticket_priority_update_dto_local_var = malloc(sizeof(support_ticket_priority_update_dto_t));
    if (!support_ticket_priority_update_dto_local_var) {
        return NULL;
    }
    support_ticket_priority_update_dto_local_var->title = title;
    support_ticket_priority_update_dto_local_var->description = description;

    return support_ticket_priority_update_dto_local_var;
}


void support_ticket_priority_update_dto_free(support_ticket_priority_update_dto_t *support_ticket_priority_update_dto) {
    if(NULL == support_ticket_priority_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (support_ticket_priority_update_dto->title) {
        free(support_ticket_priority_update_dto->title);
        support_ticket_priority_update_dto->title = NULL;
    }
    if (support_ticket_priority_update_dto->description) {
        free(support_ticket_priority_update_dto->description);
        support_ticket_priority_update_dto->description = NULL;
    }
    free(support_ticket_priority_update_dto);
}

cJSON *support_ticket_priority_update_dto_convertToJSON(support_ticket_priority_update_dto_t *support_ticket_priority_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // support_ticket_priority_update_dto->title
    if(support_ticket_priority_update_dto->title) {
    if(cJSON_AddStringToObject(item, "title", support_ticket_priority_update_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // support_ticket_priority_update_dto->description
    if(support_ticket_priority_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", support_ticket_priority_update_dto->description) == NULL) {
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

support_ticket_priority_update_dto_t *support_ticket_priority_update_dto_parseFromJSON(cJSON *support_ticket_priority_update_dtoJSON){

    support_ticket_priority_update_dto_t *support_ticket_priority_update_dto_local_var = NULL;

    // support_ticket_priority_update_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(support_ticket_priority_update_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // support_ticket_priority_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(support_ticket_priority_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }


    support_ticket_priority_update_dto_local_var = support_ticket_priority_update_dto_create (
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL
        );

    return support_ticket_priority_update_dto_local_var;
end:
    return NULL;

}
