#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "newsletter_dto.h"



newsletter_dto_t *newsletter_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *code,
    char *title,
    char *tenant_id,
    char *enrollment_id
    ) {
    newsletter_dto_t *newsletter_dto_local_var = malloc(sizeof(newsletter_dto_t));
    if (!newsletter_dto_local_var) {
        return NULL;
    }
    newsletter_dto_local_var->id = id;
    newsletter_dto_local_var->timestamp = timestamp;
    newsletter_dto_local_var->name = name;
    newsletter_dto_local_var->code = code;
    newsletter_dto_local_var->title = title;
    newsletter_dto_local_var->tenant_id = tenant_id;
    newsletter_dto_local_var->enrollment_id = enrollment_id;

    return newsletter_dto_local_var;
}


void newsletter_dto_free(newsletter_dto_t *newsletter_dto) {
    if(NULL == newsletter_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (newsletter_dto->id) {
        free(newsletter_dto->id);
        newsletter_dto->id = NULL;
    }
    if (newsletter_dto->timestamp) {
        free(newsletter_dto->timestamp);
        newsletter_dto->timestamp = NULL;
    }
    if (newsletter_dto->name) {
        free(newsletter_dto->name);
        newsletter_dto->name = NULL;
    }
    if (newsletter_dto->code) {
        free(newsletter_dto->code);
        newsletter_dto->code = NULL;
    }
    if (newsletter_dto->title) {
        free(newsletter_dto->title);
        newsletter_dto->title = NULL;
    }
    if (newsletter_dto->tenant_id) {
        free(newsletter_dto->tenant_id);
        newsletter_dto->tenant_id = NULL;
    }
    if (newsletter_dto->enrollment_id) {
        free(newsletter_dto->enrollment_id);
        newsletter_dto->enrollment_id = NULL;
    }
    free(newsletter_dto);
}

cJSON *newsletter_dto_convertToJSON(newsletter_dto_t *newsletter_dto) {
    cJSON *item = cJSON_CreateObject();

    // newsletter_dto->id
    if(newsletter_dto->id) {
    if(cJSON_AddStringToObject(item, "id", newsletter_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // newsletter_dto->timestamp
    if(newsletter_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", newsletter_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // newsletter_dto->name
    if(newsletter_dto->name) {
    if(cJSON_AddStringToObject(item, "name", newsletter_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // newsletter_dto->code
    if(newsletter_dto->code) {
    if(cJSON_AddStringToObject(item, "code", newsletter_dto->code) == NULL) {
    goto fail; //String
    }
    }


    // newsletter_dto->title
    if(newsletter_dto->title) {
    if(cJSON_AddStringToObject(item, "title", newsletter_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // newsletter_dto->tenant_id
    if(newsletter_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", newsletter_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // newsletter_dto->enrollment_id
    if(newsletter_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", newsletter_dto->enrollment_id) == NULL) {
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

newsletter_dto_t *newsletter_dto_parseFromJSON(cJSON *newsletter_dtoJSON){

    newsletter_dto_t *newsletter_dto_local_var = NULL;

    // newsletter_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(newsletter_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // newsletter_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(newsletter_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // newsletter_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(newsletter_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // newsletter_dto->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(newsletter_dtoJSON, "code");
    if (code) { 
    if(!cJSON_IsString(code) && !cJSON_IsNull(code))
    {
    goto end; //String
    }
    }

    // newsletter_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(newsletter_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // newsletter_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(newsletter_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // newsletter_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(newsletter_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }


    newsletter_dto_local_var = newsletter_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        code && !cJSON_IsNull(code) ? strdup(code->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL
        );

    return newsletter_dto_local_var;
end:
    return NULL;

}
