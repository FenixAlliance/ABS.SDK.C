#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "newsletter_subscription_create_dto.h"



newsletter_subscription_create_dto_t *newsletter_subscription_create_dto_create(
    char *id,
    char *timestamp,
    char *email,
    int verified,
    char *newsletter_id,
    char *contact_id
    ) {
    newsletter_subscription_create_dto_t *newsletter_subscription_create_dto_local_var = malloc(sizeof(newsletter_subscription_create_dto_t));
    if (!newsletter_subscription_create_dto_local_var) {
        return NULL;
    }
    newsletter_subscription_create_dto_local_var->id = id;
    newsletter_subscription_create_dto_local_var->timestamp = timestamp;
    newsletter_subscription_create_dto_local_var->email = email;
    newsletter_subscription_create_dto_local_var->verified = verified;
    newsletter_subscription_create_dto_local_var->newsletter_id = newsletter_id;
    newsletter_subscription_create_dto_local_var->contact_id = contact_id;

    return newsletter_subscription_create_dto_local_var;
}


void newsletter_subscription_create_dto_free(newsletter_subscription_create_dto_t *newsletter_subscription_create_dto) {
    if(NULL == newsletter_subscription_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (newsletter_subscription_create_dto->id) {
        free(newsletter_subscription_create_dto->id);
        newsletter_subscription_create_dto->id = NULL;
    }
    if (newsletter_subscription_create_dto->timestamp) {
        free(newsletter_subscription_create_dto->timestamp);
        newsletter_subscription_create_dto->timestamp = NULL;
    }
    if (newsletter_subscription_create_dto->email) {
        free(newsletter_subscription_create_dto->email);
        newsletter_subscription_create_dto->email = NULL;
    }
    if (newsletter_subscription_create_dto->newsletter_id) {
        free(newsletter_subscription_create_dto->newsletter_id);
        newsletter_subscription_create_dto->newsletter_id = NULL;
    }
    if (newsletter_subscription_create_dto->contact_id) {
        free(newsletter_subscription_create_dto->contact_id);
        newsletter_subscription_create_dto->contact_id = NULL;
    }
    free(newsletter_subscription_create_dto);
}

cJSON *newsletter_subscription_create_dto_convertToJSON(newsletter_subscription_create_dto_t *newsletter_subscription_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // newsletter_subscription_create_dto->id
    if(newsletter_subscription_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", newsletter_subscription_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // newsletter_subscription_create_dto->timestamp
    if(newsletter_subscription_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", newsletter_subscription_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // newsletter_subscription_create_dto->email
    if(newsletter_subscription_create_dto->email) {
    if(cJSON_AddStringToObject(item, "email", newsletter_subscription_create_dto->email) == NULL) {
    goto fail; //String
    }
    }


    // newsletter_subscription_create_dto->verified
    if(newsletter_subscription_create_dto->verified) {
    if(cJSON_AddBoolToObject(item, "verified", newsletter_subscription_create_dto->verified) == NULL) {
    goto fail; //Bool
    }
    }


    // newsletter_subscription_create_dto->newsletter_id
    if(newsletter_subscription_create_dto->newsletter_id) {
    if(cJSON_AddStringToObject(item, "newsletterId", newsletter_subscription_create_dto->newsletter_id) == NULL) {
    goto fail; //String
    }
    }


    // newsletter_subscription_create_dto->contact_id
    if(newsletter_subscription_create_dto->contact_id) {
    if(cJSON_AddStringToObject(item, "contactId", newsletter_subscription_create_dto->contact_id) == NULL) {
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

newsletter_subscription_create_dto_t *newsletter_subscription_create_dto_parseFromJSON(cJSON *newsletter_subscription_create_dtoJSON){

    newsletter_subscription_create_dto_t *newsletter_subscription_create_dto_local_var = NULL;

    // newsletter_subscription_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(newsletter_subscription_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // newsletter_subscription_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(newsletter_subscription_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // newsletter_subscription_create_dto->email
    cJSON *email = cJSON_GetObjectItemCaseSensitive(newsletter_subscription_create_dtoJSON, "email");
    if (email) { 
    if(!cJSON_IsString(email) && !cJSON_IsNull(email))
    {
    goto end; //String
    }
    }

    // newsletter_subscription_create_dto->verified
    cJSON *verified = cJSON_GetObjectItemCaseSensitive(newsletter_subscription_create_dtoJSON, "verified");
    if (verified) { 
    if(!cJSON_IsBool(verified))
    {
    goto end; //Bool
    }
    }

    // newsletter_subscription_create_dto->newsletter_id
    cJSON *newsletter_id = cJSON_GetObjectItemCaseSensitive(newsletter_subscription_create_dtoJSON, "newsletterId");
    if (newsletter_id) { 
    if(!cJSON_IsString(newsletter_id) && !cJSON_IsNull(newsletter_id))
    {
    goto end; //String
    }
    }

    // newsletter_subscription_create_dto->contact_id
    cJSON *contact_id = cJSON_GetObjectItemCaseSensitive(newsletter_subscription_create_dtoJSON, "contactId");
    if (contact_id) { 
    if(!cJSON_IsString(contact_id) && !cJSON_IsNull(contact_id))
    {
    goto end; //String
    }
    }


    newsletter_subscription_create_dto_local_var = newsletter_subscription_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        email && !cJSON_IsNull(email) ? strdup(email->valuestring) : NULL,
        verified ? verified->valueint : 0,
        newsletter_id && !cJSON_IsNull(newsletter_id) ? strdup(newsletter_id->valuestring) : NULL,
        contact_id && !cJSON_IsNull(contact_id) ? strdup(contact_id->valuestring) : NULL
        );

    return newsletter_subscription_create_dto_local_var;
end:
    return NULL;

}
