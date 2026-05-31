#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "marketing_lead_update_dto.h"



marketing_lead_update_dto_t *marketing_lead_update_dto_create(
    char *first_name,
    char *last_name,
    char *email,
    char *phone,
    char *company,
    char *job_title,
    char *source,
    char *status,
    char *notes,
    int score
    ) {
    marketing_lead_update_dto_t *marketing_lead_update_dto_local_var = malloc(sizeof(marketing_lead_update_dto_t));
    if (!marketing_lead_update_dto_local_var) {
        return NULL;
    }
    marketing_lead_update_dto_local_var->first_name = first_name;
    marketing_lead_update_dto_local_var->last_name = last_name;
    marketing_lead_update_dto_local_var->email = email;
    marketing_lead_update_dto_local_var->phone = phone;
    marketing_lead_update_dto_local_var->company = company;
    marketing_lead_update_dto_local_var->job_title = job_title;
    marketing_lead_update_dto_local_var->source = source;
    marketing_lead_update_dto_local_var->status = status;
    marketing_lead_update_dto_local_var->notes = notes;
    marketing_lead_update_dto_local_var->score = score;

    return marketing_lead_update_dto_local_var;
}


void marketing_lead_update_dto_free(marketing_lead_update_dto_t *marketing_lead_update_dto) {
    if(NULL == marketing_lead_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (marketing_lead_update_dto->first_name) {
        free(marketing_lead_update_dto->first_name);
        marketing_lead_update_dto->first_name = NULL;
    }
    if (marketing_lead_update_dto->last_name) {
        free(marketing_lead_update_dto->last_name);
        marketing_lead_update_dto->last_name = NULL;
    }
    if (marketing_lead_update_dto->email) {
        free(marketing_lead_update_dto->email);
        marketing_lead_update_dto->email = NULL;
    }
    if (marketing_lead_update_dto->phone) {
        free(marketing_lead_update_dto->phone);
        marketing_lead_update_dto->phone = NULL;
    }
    if (marketing_lead_update_dto->company) {
        free(marketing_lead_update_dto->company);
        marketing_lead_update_dto->company = NULL;
    }
    if (marketing_lead_update_dto->job_title) {
        free(marketing_lead_update_dto->job_title);
        marketing_lead_update_dto->job_title = NULL;
    }
    if (marketing_lead_update_dto->source) {
        free(marketing_lead_update_dto->source);
        marketing_lead_update_dto->source = NULL;
    }
    if (marketing_lead_update_dto->status) {
        free(marketing_lead_update_dto->status);
        marketing_lead_update_dto->status = NULL;
    }
    if (marketing_lead_update_dto->notes) {
        free(marketing_lead_update_dto->notes);
        marketing_lead_update_dto->notes = NULL;
    }
    free(marketing_lead_update_dto);
}

cJSON *marketing_lead_update_dto_convertToJSON(marketing_lead_update_dto_t *marketing_lead_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // marketing_lead_update_dto->first_name
    if(marketing_lead_update_dto->first_name) {
    if(cJSON_AddStringToObject(item, "firstName", marketing_lead_update_dto->first_name) == NULL) {
    goto fail; //String
    }
    }


    // marketing_lead_update_dto->last_name
    if(marketing_lead_update_dto->last_name) {
    if(cJSON_AddStringToObject(item, "lastName", marketing_lead_update_dto->last_name) == NULL) {
    goto fail; //String
    }
    }


    // marketing_lead_update_dto->email
    if(marketing_lead_update_dto->email) {
    if(cJSON_AddStringToObject(item, "email", marketing_lead_update_dto->email) == NULL) {
    goto fail; //String
    }
    }


    // marketing_lead_update_dto->phone
    if(marketing_lead_update_dto->phone) {
    if(cJSON_AddStringToObject(item, "phone", marketing_lead_update_dto->phone) == NULL) {
    goto fail; //String
    }
    }


    // marketing_lead_update_dto->company
    if(marketing_lead_update_dto->company) {
    if(cJSON_AddStringToObject(item, "company", marketing_lead_update_dto->company) == NULL) {
    goto fail; //String
    }
    }


    // marketing_lead_update_dto->job_title
    if(marketing_lead_update_dto->job_title) {
    if(cJSON_AddStringToObject(item, "jobTitle", marketing_lead_update_dto->job_title) == NULL) {
    goto fail; //String
    }
    }


    // marketing_lead_update_dto->source
    if(marketing_lead_update_dto->source) {
    if(cJSON_AddStringToObject(item, "source", marketing_lead_update_dto->source) == NULL) {
    goto fail; //String
    }
    }


    // marketing_lead_update_dto->status
    if(marketing_lead_update_dto->status) {
    if(cJSON_AddStringToObject(item, "status", marketing_lead_update_dto->status) == NULL) {
    goto fail; //String
    }
    }


    // marketing_lead_update_dto->notes
    if(marketing_lead_update_dto->notes) {
    if(cJSON_AddStringToObject(item, "notes", marketing_lead_update_dto->notes) == NULL) {
    goto fail; //String
    }
    }


    // marketing_lead_update_dto->score
    if(marketing_lead_update_dto->score) {
    if(cJSON_AddNumberToObject(item, "score", marketing_lead_update_dto->score) == NULL) {
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

marketing_lead_update_dto_t *marketing_lead_update_dto_parseFromJSON(cJSON *marketing_lead_update_dtoJSON){

    marketing_lead_update_dto_t *marketing_lead_update_dto_local_var = NULL;

    // marketing_lead_update_dto->first_name
    cJSON *first_name = cJSON_GetObjectItemCaseSensitive(marketing_lead_update_dtoJSON, "firstName");
    if (first_name) { 
    if(!cJSON_IsString(first_name) && !cJSON_IsNull(first_name))
    {
    goto end; //String
    }
    }

    // marketing_lead_update_dto->last_name
    cJSON *last_name = cJSON_GetObjectItemCaseSensitive(marketing_lead_update_dtoJSON, "lastName");
    if (last_name) { 
    if(!cJSON_IsString(last_name) && !cJSON_IsNull(last_name))
    {
    goto end; //String
    }
    }

    // marketing_lead_update_dto->email
    cJSON *email = cJSON_GetObjectItemCaseSensitive(marketing_lead_update_dtoJSON, "email");
    if (email) { 
    if(!cJSON_IsString(email) && !cJSON_IsNull(email))
    {
    goto end; //String
    }
    }

    // marketing_lead_update_dto->phone
    cJSON *phone = cJSON_GetObjectItemCaseSensitive(marketing_lead_update_dtoJSON, "phone");
    if (phone) { 
    if(!cJSON_IsString(phone) && !cJSON_IsNull(phone))
    {
    goto end; //String
    }
    }

    // marketing_lead_update_dto->company
    cJSON *company = cJSON_GetObjectItemCaseSensitive(marketing_lead_update_dtoJSON, "company");
    if (company) { 
    if(!cJSON_IsString(company) && !cJSON_IsNull(company))
    {
    goto end; //String
    }
    }

    // marketing_lead_update_dto->job_title
    cJSON *job_title = cJSON_GetObjectItemCaseSensitive(marketing_lead_update_dtoJSON, "jobTitle");
    if (job_title) { 
    if(!cJSON_IsString(job_title) && !cJSON_IsNull(job_title))
    {
    goto end; //String
    }
    }

    // marketing_lead_update_dto->source
    cJSON *source = cJSON_GetObjectItemCaseSensitive(marketing_lead_update_dtoJSON, "source");
    if (source) { 
    if(!cJSON_IsString(source) && !cJSON_IsNull(source))
    {
    goto end; //String
    }
    }

    // marketing_lead_update_dto->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(marketing_lead_update_dtoJSON, "status");
    if (status) { 
    if(!cJSON_IsString(status) && !cJSON_IsNull(status))
    {
    goto end; //String
    }
    }

    // marketing_lead_update_dto->notes
    cJSON *notes = cJSON_GetObjectItemCaseSensitive(marketing_lead_update_dtoJSON, "notes");
    if (notes) { 
    if(!cJSON_IsString(notes) && !cJSON_IsNull(notes))
    {
    goto end; //String
    }
    }

    // marketing_lead_update_dto->score
    cJSON *score = cJSON_GetObjectItemCaseSensitive(marketing_lead_update_dtoJSON, "score");
    if (score) { 
    if(!cJSON_IsNumber(score))
    {
    goto end; //Numeric
    }
    }


    marketing_lead_update_dto_local_var = marketing_lead_update_dto_create (
        first_name && !cJSON_IsNull(first_name) ? strdup(first_name->valuestring) : NULL,
        last_name && !cJSON_IsNull(last_name) ? strdup(last_name->valuestring) : NULL,
        email && !cJSON_IsNull(email) ? strdup(email->valuestring) : NULL,
        phone && !cJSON_IsNull(phone) ? strdup(phone->valuestring) : NULL,
        company && !cJSON_IsNull(company) ? strdup(company->valuestring) : NULL,
        job_title && !cJSON_IsNull(job_title) ? strdup(job_title->valuestring) : NULL,
        source && !cJSON_IsNull(source) ? strdup(source->valuestring) : NULL,
        status && !cJSON_IsNull(status) ? strdup(status->valuestring) : NULL,
        notes && !cJSON_IsNull(notes) ? strdup(notes->valuestring) : NULL,
        score ? score->valuedouble : 0
        );

    return marketing_lead_update_dto_local_var;
end:
    return NULL;

}
