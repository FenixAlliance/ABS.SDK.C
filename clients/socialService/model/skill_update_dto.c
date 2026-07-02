#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "skill_update_dto.h"


char* skill_update_dto_skill_type_ToString(socialservice_skill_update_dto_SKILLTYPE_e skill_type) {
    char* skill_typeArray[] =  { "NULL", "Skill", "Certification" };
    return skill_typeArray[skill_type];
}

socialservice_skill_update_dto_SKILLTYPE_e skill_update_dto_skill_type_FromString(char* skill_type){
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

skill_update_dto_t *skill_update_dto_create(
    char *name,
    char *url,
    char *type,
    char *icon_url,
    char *description,
    socialservice_skill_update_dto_SKILLTYPE_e skill_type
    ) {
    skill_update_dto_t *skill_update_dto_local_var = malloc(sizeof(skill_update_dto_t));
    if (!skill_update_dto_local_var) {
        return NULL;
    }
    skill_update_dto_local_var->name = name;
    skill_update_dto_local_var->url = url;
    skill_update_dto_local_var->type = type;
    skill_update_dto_local_var->icon_url = icon_url;
    skill_update_dto_local_var->description = description;
    skill_update_dto_local_var->skill_type = skill_type;

    return skill_update_dto_local_var;
}


void skill_update_dto_free(skill_update_dto_t *skill_update_dto) {
    if(NULL == skill_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (skill_update_dto->name) {
        free(skill_update_dto->name);
        skill_update_dto->name = NULL;
    }
    if (skill_update_dto->url) {
        free(skill_update_dto->url);
        skill_update_dto->url = NULL;
    }
    if (skill_update_dto->type) {
        free(skill_update_dto->type);
        skill_update_dto->type = NULL;
    }
    if (skill_update_dto->icon_url) {
        free(skill_update_dto->icon_url);
        skill_update_dto->icon_url = NULL;
    }
    if (skill_update_dto->description) {
        free(skill_update_dto->description);
        skill_update_dto->description = NULL;
    }
    free(skill_update_dto);
}

cJSON *skill_update_dto_convertToJSON(skill_update_dto_t *skill_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // skill_update_dto->name
    if(skill_update_dto->name) {
    if(cJSON_AddStringToObject(item, "name", skill_update_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // skill_update_dto->url
    if(skill_update_dto->url) {
    if(cJSON_AddStringToObject(item, "url", skill_update_dto->url) == NULL) {
    goto fail; //String
    }
    }


    // skill_update_dto->type
    if(skill_update_dto->type) {
    if(cJSON_AddStringToObject(item, "type", skill_update_dto->type) == NULL) {
    goto fail; //String
    }
    }


    // skill_update_dto->icon_url
    if(skill_update_dto->icon_url) {
    if(cJSON_AddStringToObject(item, "iconUrl", skill_update_dto->icon_url) == NULL) {
    goto fail; //String
    }
    }


    // skill_update_dto->description
    if(skill_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", skill_update_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // skill_update_dto->skill_type
    if(skill_update_dto->skill_type != socialservice_skill_update_dto_SKILLTYPE_NULL) {
    if(cJSON_AddStringToObject(item, "skillType", skill_typeskill_update_dto_ToString(skill_update_dto->skill_type)) == NULL)
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

skill_update_dto_t *skill_update_dto_parseFromJSON(cJSON *skill_update_dtoJSON){

    skill_update_dto_t *skill_update_dto_local_var = NULL;

    // skill_update_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(skill_update_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // skill_update_dto->url
    cJSON *url = cJSON_GetObjectItemCaseSensitive(skill_update_dtoJSON, "url");
    if (url) { 
    if(!cJSON_IsString(url) && !cJSON_IsNull(url))
    {
    goto end; //String
    }
    }

    // skill_update_dto->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(skill_update_dtoJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // skill_update_dto->icon_url
    cJSON *icon_url = cJSON_GetObjectItemCaseSensitive(skill_update_dtoJSON, "iconUrl");
    if (icon_url) { 
    if(!cJSON_IsString(icon_url) && !cJSON_IsNull(icon_url))
    {
    goto end; //String
    }
    }

    // skill_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(skill_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // skill_update_dto->skill_type
    cJSON *skill_type = cJSON_GetObjectItemCaseSensitive(skill_update_dtoJSON, "skillType");
    socialservice_skill_update_dto_SKILLTYPE_e skill_typeVariable;
    if (skill_type) { 
    if(!cJSON_IsString(skill_type))
    {
    goto end; //Enum
    }
    skill_typeVariable = skill_update_dto_skill_type_FromString(skill_type->valuestring);
    }


    skill_update_dto_local_var = skill_update_dto_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        url && !cJSON_IsNull(url) ? strdup(url->valuestring) : NULL,
        type && !cJSON_IsNull(type) ? strdup(type->valuestring) : NULL,
        icon_url && !cJSON_IsNull(icon_url) ? strdup(icon_url->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        skill_type ? skill_typeVariable : socialservice_skill_update_dto_SKILLTYPE_NULL
        );

    return skill_update_dto_local_var;
end:
    return NULL;

}
