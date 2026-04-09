#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "newsletter_update_dto.h"



newsletter_update_dto_t *newsletter_update_dto_create(
    char *code,
    char *title,
    char *tenant_id,
    char *enrollment_id,
    char *name
    ) {
    newsletter_update_dto_t *newsletter_update_dto_local_var = malloc(sizeof(newsletter_update_dto_t));
    if (!newsletter_update_dto_local_var) {
        return NULL;
    }
    newsletter_update_dto_local_var->code = code;
    newsletter_update_dto_local_var->title = title;
    newsletter_update_dto_local_var->tenant_id = tenant_id;
    newsletter_update_dto_local_var->enrollment_id = enrollment_id;
    newsletter_update_dto_local_var->name = name;

    return newsletter_update_dto_local_var;
}


void newsletter_update_dto_free(newsletter_update_dto_t *newsletter_update_dto) {
    if(NULL == newsletter_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (newsletter_update_dto->code) {
        free(newsletter_update_dto->code);
        newsletter_update_dto->code = NULL;
    }
    if (newsletter_update_dto->title) {
        free(newsletter_update_dto->title);
        newsletter_update_dto->title = NULL;
    }
    if (newsletter_update_dto->tenant_id) {
        free(newsletter_update_dto->tenant_id);
        newsletter_update_dto->tenant_id = NULL;
    }
    if (newsletter_update_dto->enrollment_id) {
        free(newsletter_update_dto->enrollment_id);
        newsletter_update_dto->enrollment_id = NULL;
    }
    if (newsletter_update_dto->name) {
        free(newsletter_update_dto->name);
        newsletter_update_dto->name = NULL;
    }
    free(newsletter_update_dto);
}

cJSON *newsletter_update_dto_convertToJSON(newsletter_update_dto_t *newsletter_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // newsletter_update_dto->code
    if(newsletter_update_dto->code) {
    if(cJSON_AddStringToObject(item, "code", newsletter_update_dto->code) == NULL) {
    goto fail; //String
    }
    }


    // newsletter_update_dto->title
    if(newsletter_update_dto->title) {
    if(cJSON_AddStringToObject(item, "title", newsletter_update_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // newsletter_update_dto->tenant_id
    if(newsletter_update_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", newsletter_update_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // newsletter_update_dto->enrollment_id
    if(newsletter_update_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", newsletter_update_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // newsletter_update_dto->name
    if(newsletter_update_dto->name) {
    if(cJSON_AddStringToObject(item, "name", newsletter_update_dto->name) == NULL) {
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

newsletter_update_dto_t *newsletter_update_dto_parseFromJSON(cJSON *newsletter_update_dtoJSON){

    newsletter_update_dto_t *newsletter_update_dto_local_var = NULL;

    // newsletter_update_dto->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(newsletter_update_dtoJSON, "code");
    if (code) { 
    if(!cJSON_IsString(code) && !cJSON_IsNull(code))
    {
    goto end; //String
    }
    }

    // newsletter_update_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(newsletter_update_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // newsletter_update_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(newsletter_update_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // newsletter_update_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(newsletter_update_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // newsletter_update_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(newsletter_update_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }


    newsletter_update_dto_local_var = newsletter_update_dto_create (
        code && !cJSON_IsNull(code) ? strdup(code->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL
        );

    return newsletter_update_dto_local_var;
end:
    return NULL;

}
