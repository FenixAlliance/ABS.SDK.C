#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inquiry_request_dto.h"



inquiry_request_dto_t *inquiry_request_dto_create(
    char *id,
    char *timestamp,
    char *type,
    char *name,
    char *last_name,
    char *email,
    char *organization_name,
    char *job_role,
    char *organization_domain,
    char *country_id,
    char *phone,
    char *message,
    char *tenant_id,
    char *business_profile_record_id,
    char *account_holder_id,
    char *social_profile_id
    ) {
    inquiry_request_dto_t *inquiry_request_dto_local_var = malloc(sizeof(inquiry_request_dto_t));
    if (!inquiry_request_dto_local_var) {
        return NULL;
    }
    inquiry_request_dto_local_var->id = id;
    inquiry_request_dto_local_var->timestamp = timestamp;
    inquiry_request_dto_local_var->type = type;
    inquiry_request_dto_local_var->name = name;
    inquiry_request_dto_local_var->last_name = last_name;
    inquiry_request_dto_local_var->email = email;
    inquiry_request_dto_local_var->organization_name = organization_name;
    inquiry_request_dto_local_var->job_role = job_role;
    inquiry_request_dto_local_var->organization_domain = organization_domain;
    inquiry_request_dto_local_var->country_id = country_id;
    inquiry_request_dto_local_var->phone = phone;
    inquiry_request_dto_local_var->message = message;
    inquiry_request_dto_local_var->tenant_id = tenant_id;
    inquiry_request_dto_local_var->business_profile_record_id = business_profile_record_id;
    inquiry_request_dto_local_var->account_holder_id = account_holder_id;
    inquiry_request_dto_local_var->social_profile_id = social_profile_id;

    return inquiry_request_dto_local_var;
}


void inquiry_request_dto_free(inquiry_request_dto_t *inquiry_request_dto) {
    if(NULL == inquiry_request_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (inquiry_request_dto->id) {
        free(inquiry_request_dto->id);
        inquiry_request_dto->id = NULL;
    }
    if (inquiry_request_dto->timestamp) {
        free(inquiry_request_dto->timestamp);
        inquiry_request_dto->timestamp = NULL;
    }
    if (inquiry_request_dto->type) {
        free(inquiry_request_dto->type);
        inquiry_request_dto->type = NULL;
    }
    if (inquiry_request_dto->name) {
        free(inquiry_request_dto->name);
        inquiry_request_dto->name = NULL;
    }
    if (inquiry_request_dto->last_name) {
        free(inquiry_request_dto->last_name);
        inquiry_request_dto->last_name = NULL;
    }
    if (inquiry_request_dto->email) {
        free(inquiry_request_dto->email);
        inquiry_request_dto->email = NULL;
    }
    if (inquiry_request_dto->organization_name) {
        free(inquiry_request_dto->organization_name);
        inquiry_request_dto->organization_name = NULL;
    }
    if (inquiry_request_dto->job_role) {
        free(inquiry_request_dto->job_role);
        inquiry_request_dto->job_role = NULL;
    }
    if (inquiry_request_dto->organization_domain) {
        free(inquiry_request_dto->organization_domain);
        inquiry_request_dto->organization_domain = NULL;
    }
    if (inquiry_request_dto->country_id) {
        free(inquiry_request_dto->country_id);
        inquiry_request_dto->country_id = NULL;
    }
    if (inquiry_request_dto->phone) {
        free(inquiry_request_dto->phone);
        inquiry_request_dto->phone = NULL;
    }
    if (inquiry_request_dto->message) {
        free(inquiry_request_dto->message);
        inquiry_request_dto->message = NULL;
    }
    if (inquiry_request_dto->tenant_id) {
        free(inquiry_request_dto->tenant_id);
        inquiry_request_dto->tenant_id = NULL;
    }
    if (inquiry_request_dto->business_profile_record_id) {
        free(inquiry_request_dto->business_profile_record_id);
        inquiry_request_dto->business_profile_record_id = NULL;
    }
    if (inquiry_request_dto->account_holder_id) {
        free(inquiry_request_dto->account_holder_id);
        inquiry_request_dto->account_holder_id = NULL;
    }
    if (inquiry_request_dto->social_profile_id) {
        free(inquiry_request_dto->social_profile_id);
        inquiry_request_dto->social_profile_id = NULL;
    }
    free(inquiry_request_dto);
}

cJSON *inquiry_request_dto_convertToJSON(inquiry_request_dto_t *inquiry_request_dto) {
    cJSON *item = cJSON_CreateObject();

    // inquiry_request_dto->id
    if(inquiry_request_dto->id) {
    if(cJSON_AddStringToObject(item, "id", inquiry_request_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // inquiry_request_dto->timestamp
    if(inquiry_request_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", inquiry_request_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // inquiry_request_dto->type
    if(inquiry_request_dto->type) {
    if(cJSON_AddStringToObject(item, "type", inquiry_request_dto->type) == NULL) {
    goto fail; //String
    }
    }


    // inquiry_request_dto->name
    if(inquiry_request_dto->name) {
    if(cJSON_AddStringToObject(item, "name", inquiry_request_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // inquiry_request_dto->last_name
    if(inquiry_request_dto->last_name) {
    if(cJSON_AddStringToObject(item, "lastName", inquiry_request_dto->last_name) == NULL) {
    goto fail; //String
    }
    }


    // inquiry_request_dto->email
    if(inquiry_request_dto->email) {
    if(cJSON_AddStringToObject(item, "email", inquiry_request_dto->email) == NULL) {
    goto fail; //String
    }
    }


    // inquiry_request_dto->organization_name
    if(inquiry_request_dto->organization_name) {
    if(cJSON_AddStringToObject(item, "organizationName", inquiry_request_dto->organization_name) == NULL) {
    goto fail; //String
    }
    }


    // inquiry_request_dto->job_role
    if(inquiry_request_dto->job_role) {
    if(cJSON_AddStringToObject(item, "jobRole", inquiry_request_dto->job_role) == NULL) {
    goto fail; //String
    }
    }


    // inquiry_request_dto->organization_domain
    if(inquiry_request_dto->organization_domain) {
    if(cJSON_AddStringToObject(item, "organizationDomain", inquiry_request_dto->organization_domain) == NULL) {
    goto fail; //String
    }
    }


    // inquiry_request_dto->country_id
    if(inquiry_request_dto->country_id) {
    if(cJSON_AddStringToObject(item, "countryId", inquiry_request_dto->country_id) == NULL) {
    goto fail; //String
    }
    }


    // inquiry_request_dto->phone
    if(inquiry_request_dto->phone) {
    if(cJSON_AddStringToObject(item, "phone", inquiry_request_dto->phone) == NULL) {
    goto fail; //String
    }
    }


    // inquiry_request_dto->message
    if(inquiry_request_dto->message) {
    if(cJSON_AddStringToObject(item, "message", inquiry_request_dto->message) == NULL) {
    goto fail; //String
    }
    }


    // inquiry_request_dto->tenant_id
    if(inquiry_request_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", inquiry_request_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // inquiry_request_dto->business_profile_record_id
    if(inquiry_request_dto->business_profile_record_id) {
    if(cJSON_AddStringToObject(item, "businessProfileRecordId", inquiry_request_dto->business_profile_record_id) == NULL) {
    goto fail; //String
    }
    }


    // inquiry_request_dto->account_holder_id
    if(inquiry_request_dto->account_holder_id) {
    if(cJSON_AddStringToObject(item, "accountHolderId", inquiry_request_dto->account_holder_id) == NULL) {
    goto fail; //String
    }
    }


    // inquiry_request_dto->social_profile_id
    if(inquiry_request_dto->social_profile_id) {
    if(cJSON_AddStringToObject(item, "socialProfileId", inquiry_request_dto->social_profile_id) == NULL) {
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

inquiry_request_dto_t *inquiry_request_dto_parseFromJSON(cJSON *inquiry_request_dtoJSON){

    inquiry_request_dto_t *inquiry_request_dto_local_var = NULL;

    // inquiry_request_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(inquiry_request_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // inquiry_request_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(inquiry_request_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // inquiry_request_dto->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(inquiry_request_dtoJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // inquiry_request_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(inquiry_request_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // inquiry_request_dto->last_name
    cJSON *last_name = cJSON_GetObjectItemCaseSensitive(inquiry_request_dtoJSON, "lastName");
    if (last_name) { 
    if(!cJSON_IsString(last_name) && !cJSON_IsNull(last_name))
    {
    goto end; //String
    }
    }

    // inquiry_request_dto->email
    cJSON *email = cJSON_GetObjectItemCaseSensitive(inquiry_request_dtoJSON, "email");
    if (email) { 
    if(!cJSON_IsString(email) && !cJSON_IsNull(email))
    {
    goto end; //String
    }
    }

    // inquiry_request_dto->organization_name
    cJSON *organization_name = cJSON_GetObjectItemCaseSensitive(inquiry_request_dtoJSON, "organizationName");
    if (organization_name) { 
    if(!cJSON_IsString(organization_name) && !cJSON_IsNull(organization_name))
    {
    goto end; //String
    }
    }

    // inquiry_request_dto->job_role
    cJSON *job_role = cJSON_GetObjectItemCaseSensitive(inquiry_request_dtoJSON, "jobRole");
    if (job_role) { 
    if(!cJSON_IsString(job_role) && !cJSON_IsNull(job_role))
    {
    goto end; //String
    }
    }

    // inquiry_request_dto->organization_domain
    cJSON *organization_domain = cJSON_GetObjectItemCaseSensitive(inquiry_request_dtoJSON, "organizationDomain");
    if (organization_domain) { 
    if(!cJSON_IsString(organization_domain) && !cJSON_IsNull(organization_domain))
    {
    goto end; //String
    }
    }

    // inquiry_request_dto->country_id
    cJSON *country_id = cJSON_GetObjectItemCaseSensitive(inquiry_request_dtoJSON, "countryId");
    if (country_id) { 
    if(!cJSON_IsString(country_id) && !cJSON_IsNull(country_id))
    {
    goto end; //String
    }
    }

    // inquiry_request_dto->phone
    cJSON *phone = cJSON_GetObjectItemCaseSensitive(inquiry_request_dtoJSON, "phone");
    if (phone) { 
    if(!cJSON_IsString(phone) && !cJSON_IsNull(phone))
    {
    goto end; //String
    }
    }

    // inquiry_request_dto->message
    cJSON *message = cJSON_GetObjectItemCaseSensitive(inquiry_request_dtoJSON, "message");
    if (message) { 
    if(!cJSON_IsString(message) && !cJSON_IsNull(message))
    {
    goto end; //String
    }
    }

    // inquiry_request_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(inquiry_request_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // inquiry_request_dto->business_profile_record_id
    cJSON *business_profile_record_id = cJSON_GetObjectItemCaseSensitive(inquiry_request_dtoJSON, "businessProfileRecordId");
    if (business_profile_record_id) { 
    if(!cJSON_IsString(business_profile_record_id) && !cJSON_IsNull(business_profile_record_id))
    {
    goto end; //String
    }
    }

    // inquiry_request_dto->account_holder_id
    cJSON *account_holder_id = cJSON_GetObjectItemCaseSensitive(inquiry_request_dtoJSON, "accountHolderId");
    if (account_holder_id) { 
    if(!cJSON_IsString(account_holder_id) && !cJSON_IsNull(account_holder_id))
    {
    goto end; //String
    }
    }

    // inquiry_request_dto->social_profile_id
    cJSON *social_profile_id = cJSON_GetObjectItemCaseSensitive(inquiry_request_dtoJSON, "socialProfileId");
    if (social_profile_id) { 
    if(!cJSON_IsString(social_profile_id) && !cJSON_IsNull(social_profile_id))
    {
    goto end; //String
    }
    }


    inquiry_request_dto_local_var = inquiry_request_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        type && !cJSON_IsNull(type) ? strdup(type->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        last_name && !cJSON_IsNull(last_name) ? strdup(last_name->valuestring) : NULL,
        email && !cJSON_IsNull(email) ? strdup(email->valuestring) : NULL,
        organization_name && !cJSON_IsNull(organization_name) ? strdup(organization_name->valuestring) : NULL,
        job_role && !cJSON_IsNull(job_role) ? strdup(job_role->valuestring) : NULL,
        organization_domain && !cJSON_IsNull(organization_domain) ? strdup(organization_domain->valuestring) : NULL,
        country_id && !cJSON_IsNull(country_id) ? strdup(country_id->valuestring) : NULL,
        phone && !cJSON_IsNull(phone) ? strdup(phone->valuestring) : NULL,
        message && !cJSON_IsNull(message) ? strdup(message->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        business_profile_record_id && !cJSON_IsNull(business_profile_record_id) ? strdup(business_profile_record_id->valuestring) : NULL,
        account_holder_id && !cJSON_IsNull(account_holder_id) ? strdup(account_holder_id->valuestring) : NULL,
        social_profile_id && !cJSON_IsNull(social_profile_id) ? strdup(social_profile_id->valuestring) : NULL
        );

    return inquiry_request_dto_local_var;
end:
    return NULL;

}
