#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "o_auth_authorization_dto.h"



o_auth_authorization_dto_t *o_auth_authorization_dto_create(
    char *id,
    char *concurrency_token,
    char *creation_date,
    char *properties,
    char *scopes,
    char *status,
    char *subject,
    char *type,
    char *application_id,
    int tokens_count
    ) {
    o_auth_authorization_dto_t *o_auth_authorization_dto_local_var = malloc(sizeof(o_auth_authorization_dto_t));
    if (!o_auth_authorization_dto_local_var) {
        return NULL;
    }
    o_auth_authorization_dto_local_var->id = id;
    o_auth_authorization_dto_local_var->concurrency_token = concurrency_token;
    o_auth_authorization_dto_local_var->creation_date = creation_date;
    o_auth_authorization_dto_local_var->properties = properties;
    o_auth_authorization_dto_local_var->scopes = scopes;
    o_auth_authorization_dto_local_var->status = status;
    o_auth_authorization_dto_local_var->subject = subject;
    o_auth_authorization_dto_local_var->type = type;
    o_auth_authorization_dto_local_var->application_id = application_id;
    o_auth_authorization_dto_local_var->tokens_count = tokens_count;

    return o_auth_authorization_dto_local_var;
}


void o_auth_authorization_dto_free(o_auth_authorization_dto_t *o_auth_authorization_dto) {
    if(NULL == o_auth_authorization_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (o_auth_authorization_dto->id) {
        free(o_auth_authorization_dto->id);
        o_auth_authorization_dto->id = NULL;
    }
    if (o_auth_authorization_dto->concurrency_token) {
        free(o_auth_authorization_dto->concurrency_token);
        o_auth_authorization_dto->concurrency_token = NULL;
    }
    if (o_auth_authorization_dto->creation_date) {
        free(o_auth_authorization_dto->creation_date);
        o_auth_authorization_dto->creation_date = NULL;
    }
    if (o_auth_authorization_dto->properties) {
        free(o_auth_authorization_dto->properties);
        o_auth_authorization_dto->properties = NULL;
    }
    if (o_auth_authorization_dto->scopes) {
        free(o_auth_authorization_dto->scopes);
        o_auth_authorization_dto->scopes = NULL;
    }
    if (o_auth_authorization_dto->status) {
        free(o_auth_authorization_dto->status);
        o_auth_authorization_dto->status = NULL;
    }
    if (o_auth_authorization_dto->subject) {
        free(o_auth_authorization_dto->subject);
        o_auth_authorization_dto->subject = NULL;
    }
    if (o_auth_authorization_dto->type) {
        free(o_auth_authorization_dto->type);
        o_auth_authorization_dto->type = NULL;
    }
    if (o_auth_authorization_dto->application_id) {
        free(o_auth_authorization_dto->application_id);
        o_auth_authorization_dto->application_id = NULL;
    }
    free(o_auth_authorization_dto);
}

cJSON *o_auth_authorization_dto_convertToJSON(o_auth_authorization_dto_t *o_auth_authorization_dto) {
    cJSON *item = cJSON_CreateObject();

    // o_auth_authorization_dto->id
    if(o_auth_authorization_dto->id) {
    if(cJSON_AddStringToObject(item, "id", o_auth_authorization_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // o_auth_authorization_dto->concurrency_token
    if(o_auth_authorization_dto->concurrency_token) {
    if(cJSON_AddStringToObject(item, "concurrencyToken", o_auth_authorization_dto->concurrency_token) == NULL) {
    goto fail; //String
    }
    }


    // o_auth_authorization_dto->creation_date
    if(o_auth_authorization_dto->creation_date) {
    if(cJSON_AddStringToObject(item, "creationDate", o_auth_authorization_dto->creation_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // o_auth_authorization_dto->properties
    if(o_auth_authorization_dto->properties) {
    if(cJSON_AddStringToObject(item, "properties", o_auth_authorization_dto->properties) == NULL) {
    goto fail; //String
    }
    }


    // o_auth_authorization_dto->scopes
    if(o_auth_authorization_dto->scopes) {
    if(cJSON_AddStringToObject(item, "scopes", o_auth_authorization_dto->scopes) == NULL) {
    goto fail; //String
    }
    }


    // o_auth_authorization_dto->status
    if(o_auth_authorization_dto->status) {
    if(cJSON_AddStringToObject(item, "status", o_auth_authorization_dto->status) == NULL) {
    goto fail; //String
    }
    }


    // o_auth_authorization_dto->subject
    if(o_auth_authorization_dto->subject) {
    if(cJSON_AddStringToObject(item, "subject", o_auth_authorization_dto->subject) == NULL) {
    goto fail; //String
    }
    }


    // o_auth_authorization_dto->type
    if(o_auth_authorization_dto->type) {
    if(cJSON_AddStringToObject(item, "type", o_auth_authorization_dto->type) == NULL) {
    goto fail; //String
    }
    }


    // o_auth_authorization_dto->application_id
    if(o_auth_authorization_dto->application_id) {
    if(cJSON_AddStringToObject(item, "applicationId", o_auth_authorization_dto->application_id) == NULL) {
    goto fail; //String
    }
    }


    // o_auth_authorization_dto->tokens_count
    if(o_auth_authorization_dto->tokens_count) {
    if(cJSON_AddNumberToObject(item, "tokensCount", o_auth_authorization_dto->tokens_count) == NULL) {
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

o_auth_authorization_dto_t *o_auth_authorization_dto_parseFromJSON(cJSON *o_auth_authorization_dtoJSON){

    o_auth_authorization_dto_t *o_auth_authorization_dto_local_var = NULL;

    // o_auth_authorization_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(o_auth_authorization_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // o_auth_authorization_dto->concurrency_token
    cJSON *concurrency_token = cJSON_GetObjectItemCaseSensitive(o_auth_authorization_dtoJSON, "concurrencyToken");
    if (concurrency_token) { 
    if(!cJSON_IsString(concurrency_token) && !cJSON_IsNull(concurrency_token))
    {
    goto end; //String
    }
    }

    // o_auth_authorization_dto->creation_date
    cJSON *creation_date = cJSON_GetObjectItemCaseSensitive(o_auth_authorization_dtoJSON, "creationDate");
    if (creation_date) { 
    if(!cJSON_IsString(creation_date) && !cJSON_IsNull(creation_date))
    {
    goto end; //DateTime
    }
    }

    // o_auth_authorization_dto->properties
    cJSON *properties = cJSON_GetObjectItemCaseSensitive(o_auth_authorization_dtoJSON, "properties");
    if (properties) { 
    if(!cJSON_IsString(properties) && !cJSON_IsNull(properties))
    {
    goto end; //String
    }
    }

    // o_auth_authorization_dto->scopes
    cJSON *scopes = cJSON_GetObjectItemCaseSensitive(o_auth_authorization_dtoJSON, "scopes");
    if (scopes) { 
    if(!cJSON_IsString(scopes) && !cJSON_IsNull(scopes))
    {
    goto end; //String
    }
    }

    // o_auth_authorization_dto->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(o_auth_authorization_dtoJSON, "status");
    if (status) { 
    if(!cJSON_IsString(status) && !cJSON_IsNull(status))
    {
    goto end; //String
    }
    }

    // o_auth_authorization_dto->subject
    cJSON *subject = cJSON_GetObjectItemCaseSensitive(o_auth_authorization_dtoJSON, "subject");
    if (subject) { 
    if(!cJSON_IsString(subject) && !cJSON_IsNull(subject))
    {
    goto end; //String
    }
    }

    // o_auth_authorization_dto->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(o_auth_authorization_dtoJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // o_auth_authorization_dto->application_id
    cJSON *application_id = cJSON_GetObjectItemCaseSensitive(o_auth_authorization_dtoJSON, "applicationId");
    if (application_id) { 
    if(!cJSON_IsString(application_id) && !cJSON_IsNull(application_id))
    {
    goto end; //String
    }
    }

    // o_auth_authorization_dto->tokens_count
    cJSON *tokens_count = cJSON_GetObjectItemCaseSensitive(o_auth_authorization_dtoJSON, "tokensCount");
    if (tokens_count) { 
    if(!cJSON_IsNumber(tokens_count))
    {
    goto end; //Numeric
    }
    }


    o_auth_authorization_dto_local_var = o_auth_authorization_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        concurrency_token && !cJSON_IsNull(concurrency_token) ? strdup(concurrency_token->valuestring) : NULL,
        creation_date && !cJSON_IsNull(creation_date) ? strdup(creation_date->valuestring) : NULL,
        properties && !cJSON_IsNull(properties) ? strdup(properties->valuestring) : NULL,
        scopes && !cJSON_IsNull(scopes) ? strdup(scopes->valuestring) : NULL,
        status && !cJSON_IsNull(status) ? strdup(status->valuestring) : NULL,
        subject && !cJSON_IsNull(subject) ? strdup(subject->valuestring) : NULL,
        type && !cJSON_IsNull(type) ? strdup(type->valuestring) : NULL,
        application_id && !cJSON_IsNull(application_id) ? strdup(application_id->valuestring) : NULL,
        tokens_count ? tokens_count->valuedouble : 0
        );

    return o_auth_authorization_dto_local_var;
end:
    return NULL;

}
