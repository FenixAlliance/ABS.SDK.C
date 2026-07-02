#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "skill_create_dto.h"


char* skill_create_dto_skill_type_ToString(socialservice_skill_create_dto_SKILLTYPE_e skill_type) {
    char* skill_typeArray[] =  { "NULL", "Skill", "Certification" };
    return skill_typeArray[skill_type];
}

socialservice_skill_create_dto_SKILLTYPE_e skill_create_dto_skill_type_FromString(char* skill_type){
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

skill_create_dto_t *skill_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *url,
    char *type,
    char *icon_url,
    char *description,
    socialservice_skill_create_dto_SKILLTYPE_e skill_type
    ) {
    skill_create_dto_t *skill_create_dto_local_var = malloc(sizeof(skill_create_dto_t));
    if (!skill_create_dto_local_var) {
        return NULL;
    }
    skill_create_dto_local_var->id = id;
    skill_create_dto_local_var->timestamp = timestamp;
    skill_create_dto_local_var->name = name;
    skill_create_dto_local_var->url = url;
    skill_create_dto_local_var->type = type;
    skill_create_dto_local_var->icon_url = icon_url;
    skill_create_dto_local_var->description = description;
    skill_create_dto_local_var->skill_type = skill_type;

    return skill_create_dto_local_var;
}


void skill_create_dto_free(skill_create_dto_t *skill_create_dto) {
    if(NULL == skill_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (skill_create_dto->id) {
        free(skill_create_dto->id);
        skill_create_dto->id = NULL;
    }
    if (skill_create_dto->timestamp) {
        free(skill_create_dto->timestamp);
        skill_create_dto->timestamp = NULL;
    }
    if (skill_create_dto->name) {
        free(skill_create_dto->name);
        skill_create_dto->name = NULL;
    }
    if (skill_create_dto->url) {
        free(skill_create_dto->url);
        skill_create_dto->url = NULL;
    }
    if (skill_create_dto->type) {
        free(skill_create_dto->type);
        skill_create_dto->type = NULL;
    }
    if (skill_create_dto->icon_url) {
        free(skill_create_dto->icon_url);
        skill_create_dto->icon_url = NULL;
    }
    if (skill_create_dto->description) {
        free(skill_create_dto->description);
        skill_create_dto->description = NULL;
    }
    free(skill_create_dto);
}

cJSON *skill_create_dto_convertToJSON(skill_create_dto_t *skill_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // skill_create_dto->id
    if(skill_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", skill_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // skill_create_dto->timestamp
    if(skill_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", skill_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // skill_create_dto->name
    if (!skill_create_dto->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", skill_create_dto->name) == NULL) {
    goto fail; //String
    }


    // skill_create_dto->url
    if(skill_create_dto->url) {
    if(cJSON_AddStringToObject(item, "url", skill_create_dto->url) == NULL) {
    goto fail; //String
    }
    }


    // skill_create_dto->type
    if(skill_create_dto->type) {
    if(cJSON_AddStringToObject(item, "type", skill_create_dto->type) == NULL) {
    goto fail; //String
    }
    }


    // skill_create_dto->icon_url
    if(skill_create_dto->icon_url) {
    if(cJSON_AddStringToObject(item, "iconUrl", skill_create_dto->icon_url) == NULL) {
    goto fail; //String
    }
    }


    // skill_create_dto->description
    if(skill_create_dto->description) {
    if(cJSON_AddStringToObject(item, "description", skill_create_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // skill_create_dto->skill_type
    if(skill_create_dto->skill_type != socialservice_skill_create_dto_SKILLTYPE_NULL) {
    if(cJSON_AddStringToObject(item, "skillType", skill_typeskill_create_dto_ToString(skill_create_dto->skill_type)) == NULL)
    {
    goto fail; //Enum
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

skill_create_dto_t *skill_create_dto_parseFromJSON(cJSON *skill_create_dtoJSON){

    skill_create_dto_t *skill_create_dto_local_var = NULL;

    // skill_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(skill_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // skill_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(skill_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // skill_create_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(skill_create_dtoJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // skill_create_dto->url
    cJSON *url = cJSON_GetObjectItemCaseSensitive(skill_create_dtoJSON, "url");
    if (url) { 
    if(!cJSON_IsString(url) && !cJSON_IsNull(url))
    {
    goto end; //String
    }
    }

    // skill_create_dto->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(skill_create_dtoJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // skill_create_dto->icon_url
    cJSON *icon_url = cJSON_GetObjectItemCaseSensitive(skill_create_dtoJSON, "iconUrl");
    if (icon_url) { 
    if(!cJSON_IsString(icon_url) && !cJSON_IsNull(icon_url))
    {
    goto end; //String
    }
    }

    // skill_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(skill_create_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // skill_create_dto->skill_type
    cJSON *skill_type = cJSON_GetObjectItemCaseSensitive(skill_create_dtoJSON, "skillType");
    socialservice_skill_create_dto_SKILLTYPE_e skill_typeVariable;
    if (skill_type) { 
    if(!cJSON_IsString(skill_type))
    {
    goto end; //Enum
    }
    skill_typeVariable = skill_create_dto_skill_type_FromString(skill_type->valuestring);
    }


    skill_create_dto_local_var = skill_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(name->valuestring),
        url && !cJSON_IsNull(url) ? strdup(url->valuestring) : NULL,
        type && !cJSON_IsNull(type) ? strdup(type->valuestring) : NULL,
        icon_url && !cJSON_IsNull(icon_url) ? strdup(icon_url->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        skill_type ? skill_typeVariable : socialservice_skill_create_dto_SKILLTYPE_NULL
        );

    return skill_create_dto_local_var;
end:
    return NULL;

}
