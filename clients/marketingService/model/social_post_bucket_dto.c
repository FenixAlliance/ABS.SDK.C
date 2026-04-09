#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "social_post_bucket_dto.h"



social_post_bucket_dto_t *social_post_bucket_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *tenant_id,
    char *enrollment_id
    ) {
    social_post_bucket_dto_t *social_post_bucket_dto_local_var = malloc(sizeof(social_post_bucket_dto_t));
    if (!social_post_bucket_dto_local_var) {
        return NULL;
    }
    social_post_bucket_dto_local_var->id = id;
    social_post_bucket_dto_local_var->timestamp = timestamp;
    social_post_bucket_dto_local_var->name = name;
    social_post_bucket_dto_local_var->tenant_id = tenant_id;
    social_post_bucket_dto_local_var->enrollment_id = enrollment_id;

    return social_post_bucket_dto_local_var;
}


void social_post_bucket_dto_free(social_post_bucket_dto_t *social_post_bucket_dto) {
    if(NULL == social_post_bucket_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (social_post_bucket_dto->id) {
        free(social_post_bucket_dto->id);
        social_post_bucket_dto->id = NULL;
    }
    if (social_post_bucket_dto->timestamp) {
        free(social_post_bucket_dto->timestamp);
        social_post_bucket_dto->timestamp = NULL;
    }
    if (social_post_bucket_dto->name) {
        free(social_post_bucket_dto->name);
        social_post_bucket_dto->name = NULL;
    }
    if (social_post_bucket_dto->tenant_id) {
        free(social_post_bucket_dto->tenant_id);
        social_post_bucket_dto->tenant_id = NULL;
    }
    if (social_post_bucket_dto->enrollment_id) {
        free(social_post_bucket_dto->enrollment_id);
        social_post_bucket_dto->enrollment_id = NULL;
    }
    free(social_post_bucket_dto);
}

cJSON *social_post_bucket_dto_convertToJSON(social_post_bucket_dto_t *social_post_bucket_dto) {
    cJSON *item = cJSON_CreateObject();

    // social_post_bucket_dto->id
    if(social_post_bucket_dto->id) {
    if(cJSON_AddStringToObject(item, "id", social_post_bucket_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // social_post_bucket_dto->timestamp
    if(social_post_bucket_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", social_post_bucket_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // social_post_bucket_dto->name
    if(social_post_bucket_dto->name) {
    if(cJSON_AddStringToObject(item, "name", social_post_bucket_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // social_post_bucket_dto->tenant_id
    if(social_post_bucket_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", social_post_bucket_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // social_post_bucket_dto->enrollment_id
    if(social_post_bucket_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", social_post_bucket_dto->enrollment_id) == NULL) {
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

social_post_bucket_dto_t *social_post_bucket_dto_parseFromJSON(cJSON *social_post_bucket_dtoJSON){

    social_post_bucket_dto_t *social_post_bucket_dto_local_var = NULL;

    // social_post_bucket_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(social_post_bucket_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // social_post_bucket_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(social_post_bucket_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // social_post_bucket_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(social_post_bucket_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // social_post_bucket_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(social_post_bucket_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // social_post_bucket_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(social_post_bucket_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }


    social_post_bucket_dto_local_var = social_post_bucket_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL
        );

    return social_post_bucket_dto_local_var;
end:
    return NULL;

}
