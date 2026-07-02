#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "skill_dto.h"


char* skill_dto_skill_type_ToString(socialservice_skill_dto_SKILLTYPE_e skill_type) {
    char* skill_typeArray[] =  { "NULL", "Skill", "Certification" };
    return skill_typeArray[skill_type];
}

socialservice_skill_dto_SKILLTYPE_e skill_dto_skill_type_FromString(char* skill_type){
    int stringToReturn = 0;
    char *skill_typeArray[] =  { "NULL", "Skill", "Certification" };
    size_t sizeofArray = sizeof(skill_typeArray) / sizeof(skill_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(skill_type, skill_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

skill_dto_t *skill_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *url,
    char *type,
    char *icon_url,
    char *description,
    socialservice_skill_dto_SKILLTYPE_e skill_type,
    char *tenant_id,
    char *enrollment_id
    ) {
    skill_dto_t *skill_dto_local_var = malloc(sizeof(skill_dto_t));
    if (!skill_dto_local_var) {
        return NULL;
    }
    skill_dto_local_var->id = id;
    skill_dto_local_var->timestamp = timestamp;
    skill_dto_local_var->name = name;
    skill_dto_local_var->url = url;
    skill_dto_local_var->type = type;
    skill_dto_local_var->icon_url = icon_url;
    skill_dto_local_var->description = description;
    skill_dto_local_var->skill_type = skill_type;
    skill_dto_local_var->tenant_id = tenant_id;
    skill_dto_local_var->enrollment_id = enrollment_id;

    return skill_dto_local_var;
}


void skill_dto_free(skill_dto_t *skill_dto) {
    if(NULL == skill_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (skill_dto->id) {
        free(skill_dto->id);
        skill_dto->id = NULL;
    }
    if (skill_dto->timestamp) {
        free(skill_dto->timestamp);
        skill_dto->timestamp = NULL;
    }
    if (skill_dto->name) {
        free(skill_dto->name);
        skill_dto->name = NULL;
    }
    if (skill_dto->url) {
        free(skill_dto->url);
        skill_dto->url = NULL;
    }
    if (skill_dto->type) {
        free(skill_dto->type);
        skill_dto->type = NULL;
    }
    if (skill_dto->icon_url) {
        free(skill_dto->icon_url);
        skill_dto->icon_url = NULL;
    }
    if (skill_dto->description) {
        free(skill_dto->description);
        skill_dto->description = NULL;
    }
    if (skill_dto->tenant_id) {
        free(skill_dto->tenant_id);
        skill_dto->tenant_id = NULL;
    }
    if (skill_dto->enrollment_id) {
        free(skill_dto->enrollment_id);
        skill_dto->enrollment_id = NULL;
    }
    free(skill_dto);
}

cJSON *skill_dto_convertToJSON(skill_dto_t *skill_dto) {
    cJSON *item = cJSON_CreateObject();

    // skill_dto->id
    if(skill_dto->id) {
    if(cJSON_AddStringToObject(item, "id", skill_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // skill_dto->timestamp
    if(skill_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", skill_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // skill_dto->name
    if(skill_dto->name) {
    if(cJSON_AddStringToObject(item, "name", skill_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // skill_dto->url
    if(skill_dto->url) {
    if(cJSON_AddStringToObject(item, "url", skill_dto->url) == NULL) {
    goto fail; //String
    }
    }


    // skill_dto->type
    if(skill_dto->type) {
    if(cJSON_AddStringToObject(item, "type", skill_dto->type) == NULL) {
    goto fail; //String
    }
    }


    // skill_dto->icon_url
    if(skill_dto->icon_url) {
    if(cJSON_AddStringToObject(item, "iconUrl", skill_dto->icon_url) == NULL) {
    goto fail; //String
    }
    }


    // skill_dto->description
    if(skill_dto->description) {
    if(cJSON_AddStringToObject(item, "description", skill_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // skill_dto->skill_type
    if(skill_dto->skill_type != socialservice_skill_dto_SKILLTYPE_NULL) {
    if(cJSON_AddStringToObject(item, "skillType", skill_typeskill_dto_ToString(skill_dto->skill_type)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // skill_dto->tenant_id
    if(skill_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", skill_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // skill_dto->enrollment_id
    if(skill_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", skill_dto->enrollment_id) == NULL) {
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

skill_dto_t *skill_dto_parseFromJSON(cJSON *skill_dtoJSON){

    skill_dto_t *skill_dto_local_var = NULL;

    // skill_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(skill_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // skill_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(skill_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // skill_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(skill_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // skill_dto->url
    cJSON *url = cJSON_GetObjectItemCaseSensitive(skill_dtoJSON, "url");
    if (url) { 
    if(!cJSON_IsString(url) && !cJSON_IsNull(url))
    {
    goto end; //String
    }
    }

    // skill_dto->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(skill_dtoJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // skill_dto->icon_url
    cJSON *icon_url = cJSON_GetObjectItemCaseSensitive(skill_dtoJSON, "iconUrl");
    if (icon_url) { 
    if(!cJSON_IsString(icon_url) && !cJSON_IsNull(icon_url))
    {
    goto end; //String
    }
    }

    // skill_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(skill_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // skill_dto->skill_type
    cJSON *skill_type = cJSON_GetObjectItemCaseSensitive(skill_dtoJSON, "skillType");
    socialservice_skill_dto_SKILLTYPE_e skill_typeVariable;
    if (skill_type) { 
    if(!cJSON_IsString(skill_type))
    {
    goto end; //Enum
    }
    skill_typeVariable = skill_dto_skill_type_FromString(skill_type->valuestring);
    }

    // skill_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(skill_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // skill_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(skill_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }


    skill_dto_local_var = skill_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        url && !cJSON_IsNull(url) ? strdup(url->valuestring) : NULL,
        type && !cJSON_IsNull(type) ? strdup(type->valuestring) : NULL,
        icon_url && !cJSON_IsNull(icon_url) ? strdup(icon_url->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        skill_type ? skill_typeVariable : socialservice_skill_dto_SKILLTYPE_NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL
        );

    return skill_dto_local_var;
end:
    return NULL;

}
