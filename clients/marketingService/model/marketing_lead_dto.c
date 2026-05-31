#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "marketing_lead_dto.h"



marketing_lead_dto_t *marketing_lead_dto_create(
    char *id,
    char *timestamp,
    char *first_name,
    char *last_name,
    char *email,
    char *phone,
    char *company,
    char *job_title,
    char *source,
    char *status,
    char *notes,
    int score,
    char *tenant_id,
    char *enrollment_id
    ) {
    marketing_lead_dto_t *marketing_lead_dto_local_var = malloc(sizeof(marketing_lead_dto_t));
    if (!marketing_lead_dto_local_var) {
        return NULL;
    }
    marketing_lead_dto_local_var->id = id;
    marketing_lead_dto_local_var->timestamp = timestamp;
    marketing_lead_dto_local_var->first_name = first_name;
    marketing_lead_dto_local_var->last_name = last_name;
    marketing_lead_dto_local_var->email = email;
    marketing_lead_dto_local_var->phone = phone;
    marketing_lead_dto_local_var->company = company;
    marketing_lead_dto_local_var->job_title = job_title;
    marketing_lead_dto_local_var->source = source;
    marketing_lead_dto_local_var->status = status;
    marketing_lead_dto_local_var->notes = notes;
    marketing_lead_dto_local_var->score = score;
    marketing_lead_dto_local_var->tenant_id = tenant_id;
    marketing_lead_dto_local_var->enrollment_id = enrollment_id;

    return marketing_lead_dto_local_var;
}


void marketing_lead_dto_free(marketing_lead_dto_t *marketing_lead_dto) {
    if(NULL == marketing_lead_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (marketing_lead_dto->id) {
        free(marketing_lead_dto->id);
        marketing_lead_dto->id = NULL;
    }
    if (marketing_lead_dto->timestamp) {
        free(marketing_lead_dto->timestamp);
        marketing_lead_dto->timestamp = NULL;
    }
    if (marketing_lead_dto->first_name) {
        free(marketing_lead_dto->first_name);
        marketing_lead_dto->first_name = NULL;
    }
    if (marketing_lead_dto->last_name) {
        free(marketing_lead_dto->last_name);
        marketing_lead_dto->last_name = NULL;
    }
    if (marketing_lead_dto->email) {
        free(marketing_lead_dto->email);
        marketing_lead_dto->email = NULL;
    }
    if (marketing_lead_dto->phone) {
        free(marketing_lead_dto->phone);
        marketing_lead_dto->phone = NULL;
    }
    if (marketing_lead_dto->company) {
        free(marketing_lead_dto->company);
        marketing_lead_dto->company = NULL;
    }
    if (marketing_lead_dto->job_title) {
        free(marketing_lead_dto->job_title);
        marketing_lead_dto->job_title = NULL;
    }
    if (marketing_lead_dto->source) {
        free(marketing_lead_dto->source);
        marketing_lead_dto->source = NULL;
    }
    if (marketing_lead_dto->status) {
        free(marketing_lead_dto->status);
        marketing_lead_dto->status = NULL;
    }
    if (marketing_lead_dto->notes) {
        free(marketing_lead_dto->notes);
        marketing_lead_dto->notes = NULL;
    }
    if (marketing_lead_dto->tenant_id) {
        free(marketing_lead_dto->tenant_id);
        marketing_lead_dto->tenant_id = NULL;
    }
    if (marketing_lead_dto->enrollment_id) {
        free(marketing_lead_dto->enrollment_id);
        marketing_lead_dto->enrollment_id = NULL;
    }
    free(marketing_lead_dto);
}

cJSON *marketing_lead_dto_convertToJSON(marketing_lead_dto_t *marketing_lead_dto) {
    cJSON *item = cJSON_CreateObject();

    // marketing_lead_dto->id
    if(marketing_lead_dto->id) {
    if(cJSON_AddStringToObject(item, "id", marketing_lead_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // marketing_lead_dto->timestamp
    if(marketing_lead_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", marketing_lead_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // marketing_lead_dto->first_name
    if(marketing_lead_dto->first_name) {
    if(cJSON_AddStringToObject(item, "firstName", marketing_lead_dto->first_name) == NULL) {
    goto fail; //String
    }
    }


    // marketing_lead_dto->last_name
    if(marketing_lead_dto->last_name) {
    if(cJSON_AddStringToObject(item, "lastName", marketing_lead_dto->last_name) == NULL) {
    goto fail; //String
    }
    }


    // marketing_lead_dto->email
    if(marketing_lead_dto->email) {
    if(cJSON_AddStringToObject(item, "email", marketing_lead_dto->email) == NULL) {
    goto fail; //String
    }
    }


    // marketing_lead_dto->phone
    if(marketing_lead_dto->phone) {
    if(cJSON_AddStringToObject(item, "phone", marketing_lead_dto->phone) == NULL) {
    goto fail; //String
    }
    }


    // marketing_lead_dto->company
    if(marketing_lead_dto->company) {
    if(cJSON_AddStringToObject(item, "company", marketing_lead_dto->company) == NULL) {
    goto fail; //String
    }
    }


    // marketing_lead_dto->job_title
    if(marketing_lead_dto->job_title) {
    if(cJSON_AddStringToObject(item, "jobTitle", marketing_lead_dto->job_title) == NULL) {
    goto fail; //String
    }
    }


    // marketing_lead_dto->source
    if(marketing_lead_dto->source) {
    if(cJSON_AddStringToObject(item, "source", marketing_lead_dto->source) == NULL) {
    goto fail; //String
    }
    }


    // marketing_lead_dto->status
    if(marketing_lead_dto->status) {
    if(cJSON_AddStringToObject(item, "status", marketing_lead_dto->status) == NULL) {
    goto fail; //String
    }
    }


    // marketing_lead_dto->notes
    if(marketing_lead_dto->notes) {
    if(cJSON_AddStringToObject(item, "notes", marketing_lead_dto->notes) == NULL) {
    goto fail; //String
    }
    }


    // marketing_lead_dto->score
    if(marketing_lead_dto->score) {
    if(cJSON_AddNumberToObject(item, "score", marketing_lead_dto->score) == NULL) {
    goto fail; //Numeric
    }
    }


    // marketing_lead_dto->tenant_id
    if(marketing_lead_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", marketing_lead_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // marketing_lead_dto->enrollment_id
    if(marketing_lead_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", marketing_lead_dto->enrollment_id) == NULL) {
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

marketing_lead_dto_t *marketing_lead_dto_parseFromJSON(cJSON *marketing_lead_dtoJSON){

    marketing_lead_dto_t *marketing_lead_dto_local_var = NULL;

    // marketing_lead_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(marketing_lead_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // marketing_lead_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(marketing_lead_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // marketing_lead_dto->first_name
    cJSON *first_name = cJSON_GetObjectItemCaseSensitive(marketing_lead_dtoJSON, "firstName");
    if (first_name) { 
    if(!cJSON_IsString(first_name) && !cJSON_IsNull(first_name))
    {
    goto end; //String
    }
    }

    // marketing_lead_dto->last_name
    cJSON *last_name = cJSON_GetObjectItemCaseSensitive(marketing_lead_dtoJSON, "lastName");
    if (last_name) { 
    if(!cJSON_IsString(last_name) && !cJSON_IsNull(last_name))
    {
    goto end; //String
    }
    }

    // marketing_lead_dto->email
    cJSON *email = cJSON_GetObjectItemCaseSensitive(marketing_lead_dtoJSON, "email");
    if (email) { 
    if(!cJSON_IsString(email) && !cJSON_IsNull(email))
    {
    goto end; //String
    }
    }

    // marketing_lead_dto->phone
    cJSON *phone = cJSON_GetObjectItemCaseSensitive(marketing_lead_dtoJSON, "phone");
    if (phone) { 
    if(!cJSON_IsString(phone) && !cJSON_IsNull(phone))
    {
    goto end; //String
    }
    }

    // marketing_lead_dto->company
    cJSON *company = cJSON_GetObjectItemCaseSensitive(marketing_lead_dtoJSON, "company");
    if (company) { 
    if(!cJSON_IsString(company) && !cJSON_IsNull(company))
    {
    goto end; //String
    }
    }

    // marketing_lead_dto->job_title
    cJSON *job_title = cJSON_GetObjectItemCaseSensitive(marketing_lead_dtoJSON, "jobTitle");
    if (job_title) { 
    if(!cJSON_IsString(job_title) && !cJSON_IsNull(job_title))
    {
    goto end; //String
    }
    }

    // marketing_lead_dto->source
    cJSON *source = cJSON_GetObjectItemCaseSensitive(marketing_lead_dtoJSON, "source");
    if (source) { 
    if(!cJSON_IsString(source) && !cJSON_IsNull(source))
    {
    goto end; //String
    }
    }

    // marketing_lead_dto->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(marketing_lead_dtoJSON, "status");
    if (status) { 
    if(!cJSON_IsString(status) && !cJSON_IsNull(status))
    {
    goto end; //String
    }
    }

    // marketing_lead_dto->notes
    cJSON *notes = cJSON_GetObjectItemCaseSensitive(marketing_lead_dtoJSON, "notes");
    if (notes) { 
    if(!cJSON_IsString(notes) && !cJSON_IsNull(notes))
    {
    goto end; //String
    }
    }

    // marketing_lead_dto->score
    cJSON *score = cJSON_GetObjectItemCaseSensitive(marketing_lead_dtoJSON, "score");
    if (score) { 
    if(!cJSON_IsNumber(score))
    {
    goto end; //Numeric
    }
    }

    // marketing_lead_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(marketing_lead_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // marketing_lead_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(marketing_lead_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }


    marketing_lead_dto_local_var = marketing_lead_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        first_name && !cJSON_IsNull(first_name) ? strdup(first_name->valuestring) : NULL,
        last_name && !cJSON_IsNull(last_name) ? strdup(last_name->valuestring) : NULL,
        email && !cJSON_IsNull(email) ? strdup(email->valuestring) : NULL,
        phone && !cJSON_IsNull(phone) ? strdup(phone->valuestring) : NULL,
        company && !cJSON_IsNull(company) ? strdup(company->valuestring) : NULL,
        job_title && !cJSON_IsNull(job_title) ? strdup(job_title->valuestring) : NULL,
        source && !cJSON_IsNull(source) ? strdup(source->valuestring) : NULL,
        status && !cJSON_IsNull(status) ? strdup(status->valuestring) : NULL,
        notes && !cJSON_IsNull(notes) ? strdup(notes->valuestring) : NULL,
        score ? score->valuedouble : 0,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL
        );

    return marketing_lead_dto_local_var;
end:
    return NULL;

}
