#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "newsletter_subscription_dto.h"



newsletter_subscription_dto_t *newsletter_subscription_dto_create(
    char *id,
    char *timestamp,
    char *email,
    int verified,
    char *contact_id,
    char *user_id,
    char *newsletter_id,
    char *tenant_id,
    char *enrollment_id
    ) {
    newsletter_subscription_dto_t *newsletter_subscription_dto_local_var = malloc(sizeof(newsletter_subscription_dto_t));
    if (!newsletter_subscription_dto_local_var) {
        return NULL;
    }
    newsletter_subscription_dto_local_var->id = id;
    newsletter_subscription_dto_local_var->timestamp = timestamp;
    newsletter_subscription_dto_local_var->email = email;
    newsletter_subscription_dto_local_var->verified = verified;
    newsletter_subscription_dto_local_var->contact_id = contact_id;
    newsletter_subscription_dto_local_var->user_id = user_id;
    newsletter_subscription_dto_local_var->newsletter_id = newsletter_id;
    newsletter_subscription_dto_local_var->tenant_id = tenant_id;
    newsletter_subscription_dto_local_var->enrollment_id = enrollment_id;

    return newsletter_subscription_dto_local_var;
}


void newsletter_subscription_dto_free(newsletter_subscription_dto_t *newsletter_subscription_dto) {
    if(NULL == newsletter_subscription_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (newsletter_subscription_dto->id) {
        free(newsletter_subscription_dto->id);
        newsletter_subscription_dto->id = NULL;
    }
    if (newsletter_subscription_dto->timestamp) {
        free(newsletter_subscription_dto->timestamp);
        newsletter_subscription_dto->timestamp = NULL;
    }
    if (newsletter_subscription_dto->email) {
        free(newsletter_subscription_dto->email);
        newsletter_subscription_dto->email = NULL;
    }
    if (newsletter_subscription_dto->contact_id) {
        free(newsletter_subscription_dto->contact_id);
        newsletter_subscription_dto->contact_id = NULL;
    }
    if (newsletter_subscription_dto->user_id) {
        free(newsletter_subscription_dto->user_id);
        newsletter_subscription_dto->user_id = NULL;
    }
    if (newsletter_subscription_dto->newsletter_id) {
        free(newsletter_subscription_dto->newsletter_id);
        newsletter_subscription_dto->newsletter_id = NULL;
    }
    if (newsletter_subscription_dto->tenant_id) {
        free(newsletter_subscription_dto->tenant_id);
        newsletter_subscription_dto->tenant_id = NULL;
    }
    if (newsletter_subscription_dto->enrollment_id) {
        free(newsletter_subscription_dto->enrollment_id);
        newsletter_subscription_dto->enrollment_id = NULL;
    }
    free(newsletter_subscription_dto);
}

cJSON *newsletter_subscription_dto_convertToJSON(newsletter_subscription_dto_t *newsletter_subscription_dto) {
    cJSON *item = cJSON_CreateObject();

    // newsletter_subscription_dto->id
    if(newsletter_subscription_dto->id) {
    if(cJSON_AddStringToObject(item, "id", newsletter_subscription_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // newsletter_subscription_dto->timestamp
    if(newsletter_subscription_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", newsletter_subscription_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // newsletter_subscription_dto->email
    if(newsletter_subscription_dto->email) {
    if(cJSON_AddStringToObject(item, "email", newsletter_subscription_dto->email) == NULL) {
    goto fail; //String
    }
    }


    // newsletter_subscription_dto->verified
    if(newsletter_subscription_dto->verified) {
    if(cJSON_AddBoolToObject(item, "verified", newsletter_subscription_dto->verified) == NULL) {
    goto fail; //Bool
    }
    }


    // newsletter_subscription_dto->contact_id
    if(newsletter_subscription_dto->contact_id) {
    if(cJSON_AddStringToObject(item, "contactId", newsletter_subscription_dto->contact_id) == NULL) {
    goto fail; //String
    }
    }


    // newsletter_subscription_dto->user_id
    if(newsletter_subscription_dto->user_id) {
    if(cJSON_AddStringToObject(item, "userId", newsletter_subscription_dto->user_id) == NULL) {
    goto fail; //String
    }
    }


    // newsletter_subscription_dto->newsletter_id
    if(newsletter_subscription_dto->newsletter_id) {
    if(cJSON_AddStringToObject(item, "newsletterId", newsletter_subscription_dto->newsletter_id) == NULL) {
    goto fail; //String
    }
    }


    // newsletter_subscription_dto->tenant_id
    if(newsletter_subscription_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", newsletter_subscription_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // newsletter_subscription_dto->enrollment_id
    if(newsletter_subscription_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", newsletter_subscription_dto->enrollment_id) == NULL) {
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

newsletter_subscription_dto_t *newsletter_subscription_dto_parseFromJSON(cJSON *newsletter_subscription_dtoJSON){

    newsletter_subscription_dto_t *newsletter_subscription_dto_local_var = NULL;

    // newsletter_subscription_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(newsletter_subscription_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // newsletter_subscription_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(newsletter_subscription_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // newsletter_subscription_dto->email
    cJSON *email = cJSON_GetObjectItemCaseSensitive(newsletter_subscription_dtoJSON, "email");
    if (email) { 
    if(!cJSON_IsString(email) && !cJSON_IsNull(email))
    {
    goto end; //String
    }
    }

    // newsletter_subscription_dto->verified
    cJSON *verified = cJSON_GetObjectItemCaseSensitive(newsletter_subscription_dtoJSON, "verified");
    if (verified) { 
    if(!cJSON_IsBool(verified))
    {
    goto end; //Bool
    }
    }

    // newsletter_subscription_dto->contact_id
    cJSON *contact_id = cJSON_GetObjectItemCaseSensitive(newsletter_subscription_dtoJSON, "contactId");
    if (contact_id) { 
    if(!cJSON_IsString(contact_id) && !cJSON_IsNull(contact_id))
    {
    goto end; //String
    }
    }

    // newsletter_subscription_dto->user_id
    cJSON *user_id = cJSON_GetObjectItemCaseSensitive(newsletter_subscription_dtoJSON, "userId");
    if (user_id) { 
    if(!cJSON_IsString(user_id) && !cJSON_IsNull(user_id))
    {
    goto end; //String
    }
    }

    // newsletter_subscription_dto->newsletter_id
    cJSON *newsletter_id = cJSON_GetObjectItemCaseSensitive(newsletter_subscription_dtoJSON, "newsletterId");
    if (newsletter_id) { 
    if(!cJSON_IsString(newsletter_id) && !cJSON_IsNull(newsletter_id))
    {
    goto end; //String
    }
    }

    // newsletter_subscription_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(newsletter_subscription_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // newsletter_subscription_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(newsletter_subscription_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }


    newsletter_subscription_dto_local_var = newsletter_subscription_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        email && !cJSON_IsNull(email) ? strdup(email->valuestring) : NULL,
        verified ? verified->valueint : 0,
        contact_id && !cJSON_IsNull(contact_id) ? strdup(contact_id->valuestring) : NULL,
        user_id && !cJSON_IsNull(user_id) ? strdup(user_id->valuestring) : NULL,
        newsletter_id && !cJSON_IsNull(newsletter_id) ? strdup(newsletter_id->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL
        );

    return newsletter_subscription_dto_local_var;
end:
    return NULL;

}
