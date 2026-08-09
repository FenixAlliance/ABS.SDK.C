#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "social_post_reaction_dto.h"


char* social_post_reaction_dto_reaction_ToString(socialservice_social_post_reaction_dto_REACTION_e reaction) {
    char* reactionArray[] =  { "NULL", "Like", "Happy", "HaHa", "Love", "Sad", "Angry", "Wow", "Afraid" };
    return reactionArray[reaction];
}

socialservice_social_post_reaction_dto_REACTION_e social_post_reaction_dto_reaction_FromString(char* reaction){
    int stringToReturn = 0;
    char *reactionArray[] =  { "NULL", "Like", "Happy", "HaHa", "Love", "Sad", "Angry", "Wow", "Afraid" };
    size_t sizeofArray = sizeof(reactionArray) / sizeof(reactionArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(reaction, reactionArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* social_post_reaction_dto_social_profile_type_ToString(socialservice_social_post_reaction_dto_SOCIALPROFILETYPE_e social_profile_type) {
    char* social_profile_typeArray[] =  { "NULL", "User", "Tenant", "Contact" };
    return social_profile_typeArray[social_profile_type];
}

socialservice_social_post_reaction_dto_SOCIALPROFILETYPE_e social_post_reaction_dto_social_profile_type_FromString(char* social_profile_type){
    int stringToReturn = 0;
    char *social_profile_typeArray[] =  { "NULL", "User", "Tenant", "Contact" };
    size_t sizeofArray = sizeof(social_profile_typeArray) / sizeof(social_profile_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(social_profile_type, social_profile_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

social_post_reaction_dto_t *social_post_reaction_dto_create(
    char *id,
    char *timestamp,
    socialservice_social_post_reaction_dto_REACTION_e reaction,
    char *reaction_value,
    char *social_profile_id,
    char *social_profile_name,
    char *social_profile_avatar_url,
    socialservice_social_post_reaction_dto_SOCIALPROFILETYPE_e social_profile_type,
    char *social_post_id
    ) {
    social_post_reaction_dto_t *social_post_reaction_dto_local_var = malloc(sizeof(social_post_reaction_dto_t));
    if (!social_post_reaction_dto_local_var) {
        return NULL;
    }
    social_post_reaction_dto_local_var->id = id;
    social_post_reaction_dto_local_var->timestamp = timestamp;
    social_post_reaction_dto_local_var->reaction = reaction;
    social_post_reaction_dto_local_var->reaction_value = reaction_value;
    social_post_reaction_dto_local_var->social_profile_id = social_profile_id;
    social_post_reaction_dto_local_var->social_profile_name = social_profile_name;
    social_post_reaction_dto_local_var->social_profile_avatar_url = social_profile_avatar_url;
    social_post_reaction_dto_local_var->social_profile_type = social_profile_type;
    social_post_reaction_dto_local_var->social_post_id = social_post_id;

    return social_post_reaction_dto_local_var;
}


void social_post_reaction_dto_free(social_post_reaction_dto_t *social_post_reaction_dto) {
    if(NULL == social_post_reaction_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (social_post_reaction_dto->id) {
        free(social_post_reaction_dto->id);
        social_post_reaction_dto->id = NULL;
    }
    if (social_post_reaction_dto->timestamp) {
        free(social_post_reaction_dto->timestamp);
        social_post_reaction_dto->timestamp = NULL;
    }
    if (social_post_reaction_dto->reaction_value) {
        free(social_post_reaction_dto->reaction_value);
        social_post_reaction_dto->reaction_value = NULL;
    }
    if (social_post_reaction_dto->social_profile_id) {
        free(social_post_reaction_dto->social_profile_id);
        social_post_reaction_dto->social_profile_id = NULL;
    }
    if (social_post_reaction_dto->social_profile_name) {
        free(social_post_reaction_dto->social_profile_name);
        social_post_reaction_dto->social_profile_name = NULL;
    }
    if (social_post_reaction_dto->social_profile_avatar_url) {
        free(social_post_reaction_dto->social_profile_avatar_url);
        social_post_reaction_dto->social_profile_avatar_url = NULL;
    }
    if (social_post_reaction_dto->social_post_id) {
        free(social_post_reaction_dto->social_post_id);
        social_post_reaction_dto->social_post_id = NULL;
    }
    free(social_post_reaction_dto);
}

cJSON *social_post_reaction_dto_convertToJSON(social_post_reaction_dto_t *social_post_reaction_dto) {
    cJSON *item = cJSON_CreateObject();

    // social_post_reaction_dto->id
    if(social_post_reaction_dto->id) {
    if(cJSON_AddStringToObject(item, "id", social_post_reaction_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // social_post_reaction_dto->timestamp
    if(social_post_reaction_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", social_post_reaction_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // social_post_reaction_dto->reaction
    if(social_post_reaction_dto->reaction != socialservice_social_post_reaction_dto_REACTION_NULL) {
    if(cJSON_AddStringToObject(item, "reaction", reactionsocial_post_reaction_dto_ToString(social_post_reaction_dto->reaction)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // social_post_reaction_dto->reaction_value
    if(social_post_reaction_dto->reaction_value) {
    if(cJSON_AddStringToObject(item, "reactionValue", social_post_reaction_dto->reaction_value) == NULL) {
    goto fail; //String
    }
    }


    // social_post_reaction_dto->social_profile_id
    if(social_post_reaction_dto->social_profile_id) {
    if(cJSON_AddStringToObject(item, "socialProfileId", social_post_reaction_dto->social_profile_id) == NULL) {
    goto fail; //String
    }
    }


    // social_post_reaction_dto->social_profile_name
    if(social_post_reaction_dto->social_profile_name) {
    if(cJSON_AddStringToObject(item, "socialProfileName", social_post_reaction_dto->social_profile_name) == NULL) {
    goto fail; //String
    }
    }


    // social_post_reaction_dto->social_profile_avatar_url
    if(social_post_reaction_dto->social_profile_avatar_url) {
    if(cJSON_AddStringToObject(item, "socialProfileAvatarUrl", social_post_reaction_dto->social_profile_avatar_url) == NULL) {
    goto fail; //String
    }
    }


    // social_post_reaction_dto->social_profile_type
    if(social_post_reaction_dto->social_profile_type != socialservice_social_post_reaction_dto_SOCIALPROFILETYPE_NULL) {
    if(cJSON_AddStringToObject(item, "socialProfileType", social_profile_typesocial_post_reaction_dto_ToString(social_post_reaction_dto->social_profile_type)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // social_post_reaction_dto->social_post_id
    if(social_post_reaction_dto->social_post_id) {
    if(cJSON_AddStringToObject(item, "socialPostId", social_post_reaction_dto->social_post_id) == NULL) {
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

social_post_reaction_dto_t *social_post_reaction_dto_parseFromJSON(cJSON *social_post_reaction_dtoJSON){

    social_post_reaction_dto_t *social_post_reaction_dto_local_var = NULL;

    // social_post_reaction_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(social_post_reaction_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // social_post_reaction_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(social_post_reaction_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // social_post_reaction_dto->reaction
    cJSON *reaction = cJSON_GetObjectItemCaseSensitive(social_post_reaction_dtoJSON, "reaction");
    socialservice_social_post_reaction_dto_REACTION_e reactionVariable;
    if (reaction) { 
    if(!cJSON_IsString(reaction))
    {
    goto end; //Enum
    }
    reactionVariable = social_post_reaction_dto_reaction_FromString(reaction->valuestring);
    }

    // social_post_reaction_dto->reaction_value
    cJSON *reaction_value = cJSON_GetObjectItemCaseSensitive(social_post_reaction_dtoJSON, "reactionValue");
    if (reaction_value) { 
    if(!cJSON_IsString(reaction_value) && !cJSON_IsNull(reaction_value))
    {
    goto end; //String
    }
    }

    // social_post_reaction_dto->social_profile_id
    cJSON *social_profile_id = cJSON_GetObjectItemCaseSensitive(social_post_reaction_dtoJSON, "socialProfileId");
    if (social_profile_id) { 
    if(!cJSON_IsString(social_profile_id) && !cJSON_IsNull(social_profile_id))
    {
    goto end; //String
    }
    }

    // social_post_reaction_dto->social_profile_name
    cJSON *social_profile_name = cJSON_GetObjectItemCaseSensitive(social_post_reaction_dtoJSON, "socialProfileName");
    if (social_profile_name) { 
    if(!cJSON_IsString(social_profile_name) && !cJSON_IsNull(social_profile_name))
    {
    goto end; //String
    }
    }

    // social_post_reaction_dto->social_profile_avatar_url
    cJSON *social_profile_avatar_url = cJSON_GetObjectItemCaseSensitive(social_post_reaction_dtoJSON, "socialProfileAvatarUrl");
    if (social_profile_avatar_url) { 
    if(!cJSON_IsString(social_profile_avatar_url) && !cJSON_IsNull(social_profile_avatar_url))
    {
    goto end; //String
    }
    }

    // social_post_reaction_dto->social_profile_type
    cJSON *social_profile_type = cJSON_GetObjectItemCaseSensitive(social_post_reaction_dtoJSON, "socialProfileType");
    socialservice_social_post_reaction_dto_SOCIALPROFILETYPE_e social_profile_typeVariable;
    if (social_profile_type) { 
    if(!cJSON_IsString(social_profile_type))
    {
    goto end; //Enum
    }
    social_profile_typeVariable = social_post_reaction_dto_social_profile_type_FromString(social_profile_type->valuestring);
    }

    // social_post_reaction_dto->social_post_id
    cJSON *social_post_id = cJSON_GetObjectItemCaseSensitive(social_post_reaction_dtoJSON, "socialPostId");
    if (social_post_id) { 
    if(!cJSON_IsString(social_post_id) && !cJSON_IsNull(social_post_id))
    {
    goto end; //String
    }
    }


    social_post_reaction_dto_local_var = social_post_reaction_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        reaction ? reactionVariable : socialservice_social_post_reaction_dto_REACTION_NULL,
        reaction_value && !cJSON_IsNull(reaction_value) ? strdup(reaction_value->valuestring) : NULL,
        social_profile_id && !cJSON_IsNull(social_profile_id) ? strdup(social_profile_id->valuestring) : NULL,
        social_profile_name && !cJSON_IsNull(social_profile_name) ? strdup(social_profile_name->valuestring) : NULL,
        social_profile_avatar_url && !cJSON_IsNull(social_profile_avatar_url) ? strdup(social_profile_avatar_url->valuestring) : NULL,
        social_profile_type ? social_profile_typeVariable : socialservice_social_post_reaction_dto_SOCIALPROFILETYPE_NULL,
        social_post_id && !cJSON_IsNull(social_post_id) ? strdup(social_post_id->valuestring) : NULL
        );

    return social_post_reaction_dto_local_var;
end:
    return NULL;

}
