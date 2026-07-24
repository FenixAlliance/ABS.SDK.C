#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "newsletter_subscription_update_dto.h"



newsletter_subscription_update_dto_t *newsletter_subscription_update_dto_create(
    char *email,
    int verified,
    char *newsletter_id,
    char *contact_id
    ) {
    newsletter_subscription_update_dto_t *newsletter_subscription_update_dto_local_var = malloc(sizeof(newsletter_subscription_update_dto_t));
    if (!newsletter_subscription_update_dto_local_var) {
        return NULL;
    }
    newsletter_subscription_update_dto_local_var->email = email;
    newsletter_subscription_update_dto_local_var->verified = verified;
    newsletter_subscription_update_dto_local_var->newsletter_id = newsletter_id;
    newsletter_subscription_update_dto_local_var->contact_id = contact_id;

    return newsletter_subscription_update_dto_local_var;
}


void newsletter_subscription_update_dto_free(newsletter_subscription_update_dto_t *newsletter_subscription_update_dto) {
    if(NULL == newsletter_subscription_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (newsletter_subscription_update_dto->email) {
        free(newsletter_subscription_update_dto->email);
        newsletter_subscription_update_dto->email = NULL;
    }
    if (newsletter_subscription_update_dto->newsletter_id) {
        free(newsletter_subscription_update_dto->newsletter_id);
        newsletter_subscription_update_dto->newsletter_id = NULL;
    }
    if (newsletter_subscription_update_dto->contact_id) {
        free(newsletter_subscription_update_dto->contact_id);
        newsletter_subscription_update_dto->contact_id = NULL;
    }
    free(newsletter_subscription_update_dto);
}

cJSON *newsletter_subscription_update_dto_convertToJSON(newsletter_subscription_update_dto_t *newsletter_subscription_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // newsletter_subscription_update_dto->email
    if(newsletter_subscription_update_dto->email) {
    if(cJSON_AddStringToObject(item, "email", newsletter_subscription_update_dto->email) == NULL) {
    goto fail; //String
    }
    }


    // newsletter_subscription_update_dto->verified
    if(newsletter_subscription_update_dto->verified) {
    if(cJSON_AddBoolToObject(item, "verified", newsletter_subscription_update_dto->verified) == NULL) {
    goto fail; //Bool
    }
    }


    // newsletter_subscription_update_dto->newsletter_id
    if(newsletter_subscription_update_dto->newsletter_id) {
    if(cJSON_AddStringToObject(item, "newsletterId", newsletter_subscription_update_dto->newsletter_id) == NULL) {
    goto fail; //String
    }
    }


    // newsletter_subscription_update_dto->contact_id
    if(newsletter_subscription_update_dto->contact_id) {
    if(cJSON_AddStringToObject(item, "contactId", newsletter_subscription_update_dto->contact_id) == NULL) {
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

newsletter_subscription_update_dto_t *newsletter_subscription_update_dto_parseFromJSON(cJSON *newsletter_subscription_update_dtoJSON){

    newsletter_subscription_update_dto_t *newsletter_subscription_update_dto_local_var = NULL;

    // newsletter_subscription_update_dto->email
    cJSON *email = cJSON_GetObjectItemCaseSensitive(newsletter_subscription_update_dtoJSON, "email");
    if (email) { 
    if(!cJSON_IsString(email) && !cJSON_IsNull(email))
    {
    goto end; //String
    }
    }

    // newsletter_subscription_update_dto->verified
    cJSON *verified = cJSON_GetObjectItemCaseSensitive(newsletter_subscription_update_dtoJSON, "verified");
    if (verified) { 
    if(!cJSON_IsBool(verified))
    {
    goto end; //Bool
    }
    }

    // newsletter_subscription_update_dto->newsletter_id
    cJSON *newsletter_id = cJSON_GetObjectItemCaseSensitive(newsletter_subscription_update_dtoJSON, "newsletterId");
    if (newsletter_id) { 
    if(!cJSON_IsString(newsletter_id) && !cJSON_IsNull(newsletter_id))
    {
    goto end; //String
    }
    }

    // newsletter_subscription_update_dto->contact_id
    cJSON *contact_id = cJSON_GetObjectItemCaseSensitive(newsletter_subscription_update_dtoJSON, "contactId");
    if (contact_id) { 
    if(!cJSON_IsString(contact_id) && !cJSON_IsNull(contact_id))
    {
    goto end; //String
    }
    }


    newsletter_subscription_update_dto_local_var = newsletter_subscription_update_dto_create (
        email && !cJSON_IsNull(email) ? strdup(email->valuestring) : NULL,
        verified ? verified->valueint : 0,
        newsletter_id && !cJSON_IsNull(newsletter_id) ? strdup(newsletter_id->valuestring) : NULL,
        contact_id && !cJSON_IsNull(contact_id) ? strdup(contact_id->valuestring) : NULL
        );

    return newsletter_subscription_update_dto_local_var;
end:
    return NULL;

}
