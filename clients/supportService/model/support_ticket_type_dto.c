#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "support_ticket_type_dto.h"



support_ticket_type_dto_t *support_ticket_type_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    char *business_id
    ) {
    support_ticket_type_dto_t *support_ticket_type_dto_local_var = malloc(sizeof(support_ticket_type_dto_t));
    if (!support_ticket_type_dto_local_var) {
        return NULL;
    }
    support_ticket_type_dto_local_var->id = id;
    support_ticket_type_dto_local_var->timestamp = timestamp;
    support_ticket_type_dto_local_var->title = title;
    support_ticket_type_dto_local_var->description = description;
    support_ticket_type_dto_local_var->business_id = business_id;

    return support_ticket_type_dto_local_var;
}


void support_ticket_type_dto_free(support_ticket_type_dto_t *support_ticket_type_dto) {
    if(NULL == support_ticket_type_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (support_ticket_type_dto->id) {
        free(support_ticket_type_dto->id);
        support_ticket_type_dto->id = NULL;
    }
    if (support_ticket_type_dto->timestamp) {
        free(support_ticket_type_dto->timestamp);
        support_ticket_type_dto->timestamp = NULL;
    }
    if (support_ticket_type_dto->title) {
        free(support_ticket_type_dto->title);
        support_ticket_type_dto->title = NULL;
    }
    if (support_ticket_type_dto->description) {
        free(support_ticket_type_dto->description);
        support_ticket_type_dto->description = NULL;
    }
    if (support_ticket_type_dto->business_id) {
        free(support_ticket_type_dto->business_id);
        support_ticket_type_dto->business_id = NULL;
    }
    free(support_ticket_type_dto);
}

cJSON *support_ticket_type_dto_convertToJSON(support_ticket_type_dto_t *support_ticket_type_dto) {
    cJSON *item = cJSON_CreateObject();

    // support_ticket_type_dto->id
    if(support_ticket_type_dto->id) {
    if(cJSON_AddStringToObject(item, "id", support_ticket_type_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // support_ticket_type_dto->timestamp
    if(support_ticket_type_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", support_ticket_type_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // support_ticket_type_dto->title
    if(support_ticket_type_dto->title) {
    if(cJSON_AddStringToObject(item, "title", support_ticket_type_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // support_ticket_type_dto->description
    if(support_ticket_type_dto->description) {
    if(cJSON_AddStringToObject(item, "description", support_ticket_type_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // support_ticket_type_dto->business_id
    if(support_ticket_type_dto->business_id) {
    if(cJSON_AddStringToObject(item, "businessID", support_ticket_type_dto->business_id) == NULL) {
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

support_ticket_type_dto_t *support_ticket_type_dto_parseFromJSON(cJSON *support_ticket_type_dtoJSON){

    support_ticket_type_dto_t *support_ticket_type_dto_local_var = NULL;

    // support_ticket_type_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(support_ticket_type_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // support_ticket_type_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(support_ticket_type_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // support_ticket_type_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(support_ticket_type_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // support_ticket_type_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(support_ticket_type_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // support_ticket_type_dto->business_id
    cJSON *business_id = cJSON_GetObjectItemCaseSensitive(support_ticket_type_dtoJSON, "businessID");
    if (business_id) { 
    if(!cJSON_IsString(business_id) && !cJSON_IsNull(business_id))
    {
    goto end; //String
    }
    }


    support_ticket_type_dto_local_var = support_ticket_type_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        business_id && !cJSON_IsNull(business_id) ? strdup(business_id->valuestring) : NULL
        );

    return support_ticket_type_dto_local_var;
end:
    return NULL;

}
