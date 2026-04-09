#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "social_reaction_create_dto.h"


char* social_reaction_create_dto_reaction_ToString(socialservice_social_reaction_create_dto_REACTION_e reaction) {
    char* reactionArray[] =  { "NULL", "Like", "Happy", "HaHa", "Love", "Sad", "Angry", "Wow", "Afraid" };
    return reactionArray[reaction];
}

socialservice_social_reaction_create_dto_REACTION_e social_reaction_create_dto_reaction_FromString(char* reaction){
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

social_reaction_create_dto_t *social_reaction_create_dto_create(
    char *id,
    char *timestamp,
    socialservice_social_reaction_create_dto_REACTION_e reaction,
    char *reaction_value,
    char *social_profile_id
    ) {
    social_reaction_create_dto_t *social_reaction_create_dto_local_var = malloc(sizeof(social_reaction_create_dto_t));
    if (!social_reaction_create_dto_local_var) {
        return NULL;
    }
    social_reaction_create_dto_local_var->id = id;
    social_reaction_create_dto_local_var->timestamp = timestamp;
    social_reaction_create_dto_local_var->reaction = reaction;
    social_reaction_create_dto_local_var->reaction_value = reaction_value;
    social_reaction_create_dto_local_var->social_profile_id = social_profile_id;

    return social_reaction_create_dto_local_var;
}


void social_reaction_create_dto_free(social_reaction_create_dto_t *social_reaction_create_dto) {
    if(NULL == social_reaction_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (social_reaction_create_dto->id) {
        free(social_reaction_create_dto->id);
        social_reaction_create_dto->id = NULL;
    }
    if (social_reaction_create_dto->timestamp) {
        free(social_reaction_create_dto->timestamp);
        social_reaction_create_dto->timestamp = NULL;
    }
    if (social_reaction_create_dto->reaction_value) {
        free(social_reaction_create_dto->reaction_value);
        social_reaction_create_dto->reaction_value = NULL;
    }
    if (social_reaction_create_dto->social_profile_id) {
        free(social_reaction_create_dto->social_profile_id);
        social_reaction_create_dto->social_profile_id = NULL;
    }
    free(social_reaction_create_dto);
}

cJSON *social_reaction_create_dto_convertToJSON(social_reaction_create_dto_t *social_reaction_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // social_reaction_create_dto->id
    if(social_reaction_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", social_reaction_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // social_reaction_create_dto->timestamp
    if(social_reaction_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", social_reaction_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // social_reaction_create_dto->reaction
    if(social_reaction_create_dto->reaction != socialservice_social_reaction_create_dto_REACTION_NULL) {
    if(cJSON_AddStringToObject(item, "reaction", reactionsocial_reaction_create_dto_ToString(social_reaction_create_dto->reaction)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // social_reaction_create_dto->reaction_value
    if(social_reaction_create_dto->reaction_value) {
    if(cJSON_AddStringToObject(item, "reactionValue", social_reaction_create_dto->reaction_value) == NULL) {
    goto fail; //String
    }
    }


    // social_reaction_create_dto->social_profile_id
    if(social_reaction_create_dto->social_profile_id) {
    if(cJSON_AddStringToObject(item, "socialProfileId", social_reaction_create_dto->social_profile_id) == NULL) {
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

social_reaction_create_dto_t *social_reaction_create_dto_parseFromJSON(cJSON *social_reaction_create_dtoJSON){

    social_reaction_create_dto_t *social_reaction_create_dto_local_var = NULL;

    // social_reaction_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(social_reaction_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // social_reaction_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(social_reaction_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // social_reaction_create_dto->reaction
    cJSON *reaction = cJSON_GetObjectItemCaseSensitive(social_reaction_create_dtoJSON, "reaction");
    socialservice_social_reaction_create_dto_REACTION_e reactionVariable;
    if (reaction) { 
    if(!cJSON_IsString(reaction))
    {
    goto end; //Enum
    }
    reactionVariable = social_reaction_create_dto_reaction_FromString(reaction->valuestring);
    }

    // social_reaction_create_dto->reaction_value
    cJSON *reaction_value = cJSON_GetObjectItemCaseSensitive(social_reaction_create_dtoJSON, "reactionValue");
    if (reaction_value) { 
    if(!cJSON_IsString(reaction_value) && !cJSON_IsNull(reaction_value))
    {
    goto end; //String
    }
    }

    // social_reaction_create_dto->social_profile_id
    cJSON *social_profile_id = cJSON_GetObjectItemCaseSensitive(social_reaction_create_dtoJSON, "socialProfileId");
    if (social_profile_id) { 
    if(!cJSON_IsString(social_profile_id) && !cJSON_IsNull(social_profile_id))
    {
    goto end; //String
    }
    }


    social_reaction_create_dto_local_var = social_reaction_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        reaction ? reactionVariable : socialservice_social_reaction_create_dto_REACTION_NULL,
        reaction_value && !cJSON_IsNull(reaction_value) ? strdup(reaction_value->valuestring) : NULL,
        social_profile_id && !cJSON_IsNull(social_profile_id) ? strdup(social_profile_id->valuestring) : NULL
        );

    return social_reaction_create_dto_local_var;
end:
    return NULL;

}
