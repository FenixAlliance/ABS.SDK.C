#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "social_post_comment_dto.h"


char* social_post_comment_dto_social_profile_type_ToString(socialservice_social_post_comment_dto_SOCIALPROFILETYPE_e social_profile_type) {
    char* social_profile_typeArray[] =  { "NULL", "User", "Tenant", "Contact" };
    return social_profile_typeArray[social_profile_type];
}

socialservice_social_post_comment_dto_SOCIALPROFILETYPE_e social_post_comment_dto_social_profile_type_FromString(char* social_profile_type){
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
char* social_post_comment_dto_body_format_ToString(socialservice_social_post_comment_dto_BODYFORMAT_e body_format) {
    char* body_formatArray[] =  { "NULL", "PlainText", "Html" };
    return body_formatArray[body_format];
}

socialservice_social_post_comment_dto_BODYFORMAT_e social_post_comment_dto_body_format_FromString(char* body_format){
    int stringToReturn = 0;
    char *body_formatArray[] =  { "NULL", "PlainText", "Html" };
    size_t sizeofArray = sizeof(body_formatArray) / sizeof(body_formatArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(body_format, body_formatArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* social_post_comment_dto_my_reaction_ToString(socialservice_social_post_comment_dto_MYREACTION_e my_reaction) {
    char* my_reactionArray[] =  { "NULL", "Like", "Happy", "HaHa", "Love", "Sad", "Angry", "Wow", "Afraid" };
    return my_reactionArray[my_reaction];
}

socialservice_social_post_comment_dto_MYREACTION_e social_post_comment_dto_my_reaction_FromString(char* my_reaction){
    int stringToReturn = 0;
    char *my_reactionArray[] =  { "NULL", "Like", "Happy", "HaHa", "Love", "Sad", "Angry", "Wow", "Afraid" };
    size_t sizeofArray = sizeof(my_reactionArray) / sizeof(my_reactionArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(my_reaction, my_reactionArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

social_post_comment_dto_t *social_post_comment_dto_create(
    char *id,
    char *timestamp,
    char *message,
    char *parent_comment_id,
    char *social_profile_id,
    char *social_feed_post_id,
    char *social_profile_name,
    char *social_profile_avatar_url,
    socialservice_social_post_comment_dto_SOCIALPROFILETYPE_e social_profile_type,
    char *body_html,
    socialservice_social_post_comment_dto_BODYFORMAT_e body_format,
    int reply_count,
    int reactions_count,
    char *social_post_id,
    list_t *facepile,
    socialservice_social_post_comment_dto_MYREACTION_e my_reaction,
    char *my_reaction_id
    ) {
    social_post_comment_dto_t *social_post_comment_dto_local_var = malloc(sizeof(social_post_comment_dto_t));
    if (!social_post_comment_dto_local_var) {
        return NULL;
    }
    social_post_comment_dto_local_var->id = id;
    social_post_comment_dto_local_var->timestamp = timestamp;
    social_post_comment_dto_local_var->message = message;
    social_post_comment_dto_local_var->parent_comment_id = parent_comment_id;
    social_post_comment_dto_local_var->social_profile_id = social_profile_id;
    social_post_comment_dto_local_var->social_feed_post_id = social_feed_post_id;
    social_post_comment_dto_local_var->social_profile_name = social_profile_name;
    social_post_comment_dto_local_var->social_profile_avatar_url = social_profile_avatar_url;
    social_post_comment_dto_local_var->social_profile_type = social_profile_type;
    social_post_comment_dto_local_var->body_html = body_html;
    social_post_comment_dto_local_var->body_format = body_format;
    social_post_comment_dto_local_var->reply_count = reply_count;
    social_post_comment_dto_local_var->reactions_count = reactions_count;
    social_post_comment_dto_local_var->social_post_id = social_post_id;
    social_post_comment_dto_local_var->facepile = facepile;
    social_post_comment_dto_local_var->my_reaction = my_reaction;
    social_post_comment_dto_local_var->my_reaction_id = my_reaction_id;

    return social_post_comment_dto_local_var;
}


void social_post_comment_dto_free(social_post_comment_dto_t *social_post_comment_dto) {
    if(NULL == social_post_comment_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (social_post_comment_dto->id) {
        free(social_post_comment_dto->id);
        social_post_comment_dto->id = NULL;
    }
    if (social_post_comment_dto->timestamp) {
        free(social_post_comment_dto->timestamp);
        social_post_comment_dto->timestamp = NULL;
    }
    if (social_post_comment_dto->message) {
        free(social_post_comment_dto->message);
        social_post_comment_dto->message = NULL;
    }
    if (social_post_comment_dto->parent_comment_id) {
        free(social_post_comment_dto->parent_comment_id);
        social_post_comment_dto->parent_comment_id = NULL;
    }
    if (social_post_comment_dto->social_profile_id) {
        free(social_post_comment_dto->social_profile_id);
        social_post_comment_dto->social_profile_id = NULL;
    }
    if (social_post_comment_dto->social_feed_post_id) {
        free(social_post_comment_dto->social_feed_post_id);
        social_post_comment_dto->social_feed_post_id = NULL;
    }
    if (social_post_comment_dto->social_profile_name) {
        free(social_post_comment_dto->social_profile_name);
        social_post_comment_dto->social_profile_name = NULL;
    }
    if (social_post_comment_dto->social_profile_avatar_url) {
        free(social_post_comment_dto->social_profile_avatar_url);
        social_post_comment_dto->social_profile_avatar_url = NULL;
    }
    if (social_post_comment_dto->body_html) {
        free(social_post_comment_dto->body_html);
        social_post_comment_dto->body_html = NULL;
    }
    if (social_post_comment_dto->social_post_id) {
        free(social_post_comment_dto->social_post_id);
        social_post_comment_dto->social_post_id = NULL;
    }
    if (social_post_comment_dto->facepile) {
        list_ForEach(listEntry, social_post_comment_dto->facepile) {
            social_post_reaction_facepile_dto_free(listEntry->data);
        }
        list_freeList(social_post_comment_dto->facepile);
        social_post_comment_dto->facepile = NULL;
    }
    if (social_post_comment_dto->my_reaction_id) {
        free(social_post_comment_dto->my_reaction_id);
        social_post_comment_dto->my_reaction_id = NULL;
    }
    free(social_post_comment_dto);
}

cJSON *social_post_comment_dto_convertToJSON(social_post_comment_dto_t *social_post_comment_dto) {
    cJSON *item = cJSON_CreateObject();

    // social_post_comment_dto->id
    if(social_post_comment_dto->id) {
    if(cJSON_AddStringToObject(item, "id", social_post_comment_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // social_post_comment_dto->timestamp
    if(social_post_comment_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", social_post_comment_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // social_post_comment_dto->message
    if(social_post_comment_dto->message) {
    if(cJSON_AddStringToObject(item, "message", social_post_comment_dto->message) == NULL) {
    goto fail; //String
    }
    }


    // social_post_comment_dto->parent_comment_id
    if(social_post_comment_dto->parent_comment_id) {
    if(cJSON_AddStringToObject(item, "parentCommentId", social_post_comment_dto->parent_comment_id) == NULL) {
    goto fail; //String
    }
    }


    // social_post_comment_dto->social_profile_id
    if(social_post_comment_dto->social_profile_id) {
    if(cJSON_AddStringToObject(item, "socialProfileId", social_post_comment_dto->social_profile_id) == NULL) {
    goto fail; //String
    }
    }


    // social_post_comment_dto->social_feed_post_id
    if(social_post_comment_dto->social_feed_post_id) {
    if(cJSON_AddStringToObject(item, "socialFeedPostId", social_post_comment_dto->social_feed_post_id) == NULL) {
    goto fail; //String
    }
    }


    // social_post_comment_dto->social_profile_name
    if(social_post_comment_dto->social_profile_name) {
    if(cJSON_AddStringToObject(item, "socialProfileName", social_post_comment_dto->social_profile_name) == NULL) {
    goto fail; //String
    }
    }


    // social_post_comment_dto->social_profile_avatar_url
    if(social_post_comment_dto->social_profile_avatar_url) {
    if(cJSON_AddStringToObject(item, "socialProfileAvatarUrl", social_post_comment_dto->social_profile_avatar_url) == NULL) {
    goto fail; //String
    }
    }


    // social_post_comment_dto->social_profile_type
    if(social_post_comment_dto->social_profile_type != socialservice_social_post_comment_dto_SOCIALPROFILETYPE_NULL) {
    if(cJSON_AddStringToObject(item, "socialProfileType", social_profile_typesocial_post_comment_dto_ToString(social_post_comment_dto->social_profile_type)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // social_post_comment_dto->body_html
    if(social_post_comment_dto->body_html) {
    if(cJSON_AddStringToObject(item, "bodyHtml", social_post_comment_dto->body_html) == NULL) {
    goto fail; //String
    }
    }


    // social_post_comment_dto->body_format
    if(social_post_comment_dto->body_format != socialservice_social_post_comment_dto_BODYFORMAT_NULL) {
    if(cJSON_AddStringToObject(item, "bodyFormat", body_formatsocial_post_comment_dto_ToString(social_post_comment_dto->body_format)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // social_post_comment_dto->reply_count
    if(social_post_comment_dto->reply_count) {
    if(cJSON_AddNumberToObject(item, "replyCount", social_post_comment_dto->reply_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // social_post_comment_dto->reactions_count
    if(social_post_comment_dto->reactions_count) {
    if(cJSON_AddNumberToObject(item, "reactionsCount", social_post_comment_dto->reactions_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // social_post_comment_dto->social_post_id
    if(social_post_comment_dto->social_post_id) {
    if(cJSON_AddStringToObject(item, "socialPostId", social_post_comment_dto->social_post_id) == NULL) {
    goto fail; //String
    }
    }


    // social_post_comment_dto->facepile
    if(social_post_comment_dto->facepile) {
    cJSON *facepile = cJSON_AddArrayToObject(item, "facepile");
    if(facepile == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *facepileListEntry;
    if (social_post_comment_dto->facepile) {
    list_ForEach(facepileListEntry, social_post_comment_dto->facepile) {
    cJSON *itemLocal = social_post_reaction_facepile_dto_convertToJSON(facepileListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(facepile, itemLocal);
    }
    }
    }


    // social_post_comment_dto->my_reaction
    if(social_post_comment_dto->my_reaction != socialservice_social_post_comment_dto_MYREACTION_NULL) {
    if(cJSON_AddStringToObject(item, "myReaction", my_reactionsocial_post_comment_dto_ToString(social_post_comment_dto->my_reaction)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // social_post_comment_dto->my_reaction_id
    if(social_post_comment_dto->my_reaction_id) {
    if(cJSON_AddStringToObject(item, "myReactionId", social_post_comment_dto->my_reaction_id) == NULL) {
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

social_post_comment_dto_t *social_post_comment_dto_parseFromJSON(cJSON *social_post_comment_dtoJSON){

    social_post_comment_dto_t *social_post_comment_dto_local_var = NULL;

    // define the local list for social_post_comment_dto->facepile
    list_t *facepileList = NULL;

    // social_post_comment_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(social_post_comment_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // social_post_comment_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(social_post_comment_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // social_post_comment_dto->message
    cJSON *message = cJSON_GetObjectItemCaseSensitive(social_post_comment_dtoJSON, "message");
    if (message) { 
    if(!cJSON_IsString(message) && !cJSON_IsNull(message))
    {
    goto end; //String
    }
    }

    // social_post_comment_dto->parent_comment_id
    cJSON *parent_comment_id = cJSON_GetObjectItemCaseSensitive(social_post_comment_dtoJSON, "parentCommentId");
    if (parent_comment_id) { 
    if(!cJSON_IsString(parent_comment_id) && !cJSON_IsNull(parent_comment_id))
    {
    goto end; //String
    }
    }

    // social_post_comment_dto->social_profile_id
    cJSON *social_profile_id = cJSON_GetObjectItemCaseSensitive(social_post_comment_dtoJSON, "socialProfileId");
    if (social_profile_id) { 
    if(!cJSON_IsString(social_profile_id) && !cJSON_IsNull(social_profile_id))
    {
    goto end; //String
    }
    }

    // social_post_comment_dto->social_feed_post_id
    cJSON *social_feed_post_id = cJSON_GetObjectItemCaseSensitive(social_post_comment_dtoJSON, "socialFeedPostId");
    if (social_feed_post_id) { 
    if(!cJSON_IsString(social_feed_post_id) && !cJSON_IsNull(social_feed_post_id))
    {
    goto end; //String
    }
    }

    // social_post_comment_dto->social_profile_name
    cJSON *social_profile_name = cJSON_GetObjectItemCaseSensitive(social_post_comment_dtoJSON, "socialProfileName");
    if (social_profile_name) { 
    if(!cJSON_IsString(social_profile_name) && !cJSON_IsNull(social_profile_name))
    {
    goto end; //String
    }
    }

    // social_post_comment_dto->social_profile_avatar_url
    cJSON *social_profile_avatar_url = cJSON_GetObjectItemCaseSensitive(social_post_comment_dtoJSON, "socialProfileAvatarUrl");
    if (social_profile_avatar_url) { 
    if(!cJSON_IsString(social_profile_avatar_url) && !cJSON_IsNull(social_profile_avatar_url))
    {
    goto end; //String
    }
    }

    // social_post_comment_dto->social_profile_type
    cJSON *social_profile_type = cJSON_GetObjectItemCaseSensitive(social_post_comment_dtoJSON, "socialProfileType");
    socialservice_social_post_comment_dto_SOCIALPROFILETYPE_e social_profile_typeVariable;
    if (social_profile_type) { 
    if(!cJSON_IsString(social_profile_type))
    {
    goto end; //Enum
    }
    social_profile_typeVariable = social_post_comment_dto_social_profile_type_FromString(social_profile_type->valuestring);
    }

    // social_post_comment_dto->body_html
    cJSON *body_html = cJSON_GetObjectItemCaseSensitive(social_post_comment_dtoJSON, "bodyHtml");
    if (body_html) { 
    if(!cJSON_IsString(body_html) && !cJSON_IsNull(body_html))
    {
    goto end; //String
    }
    }

    // social_post_comment_dto->body_format
    cJSON *body_format = cJSON_GetObjectItemCaseSensitive(social_post_comment_dtoJSON, "bodyFormat");
    socialservice_social_post_comment_dto_BODYFORMAT_e body_formatVariable;
    if (body_format) { 
    if(!cJSON_IsString(body_format))
    {
    goto end; //Enum
    }
    body_formatVariable = social_post_comment_dto_body_format_FromString(body_format->valuestring);
    }

    // social_post_comment_dto->reply_count
    cJSON *reply_count = cJSON_GetObjectItemCaseSensitive(social_post_comment_dtoJSON, "replyCount");
    if (reply_count) { 
    if(!cJSON_IsNumber(reply_count))
    {
    goto end; //Numeric
    }
    }

    // social_post_comment_dto->reactions_count
    cJSON *reactions_count = cJSON_GetObjectItemCaseSensitive(social_post_comment_dtoJSON, "reactionsCount");
    if (reactions_count) { 
    if(!cJSON_IsNumber(reactions_count))
    {
    goto end; //Numeric
    }
    }

    // social_post_comment_dto->social_post_id
    cJSON *social_post_id = cJSON_GetObjectItemCaseSensitive(social_post_comment_dtoJSON, "socialPostId");
    if (social_post_id) { 
    if(!cJSON_IsString(social_post_id) && !cJSON_IsNull(social_post_id))
    {
    goto end; //String
    }
    }

    // social_post_comment_dto->facepile
    cJSON *facepile = cJSON_GetObjectItemCaseSensitive(social_post_comment_dtoJSON, "facepile");
    if (facepile) { 
    cJSON *facepile_local_nonprimitive = NULL;
    if(!cJSON_IsArray(facepile)){
        goto end; //nonprimitive container
    }

    facepileList = list_createList();

    cJSON_ArrayForEach(facepile_local_nonprimitive,facepile )
    {
        if(!cJSON_IsObject(facepile_local_nonprimitive)){
            goto end;
        }
        social_post_reaction_facepile_dto_t *facepileItem = social_post_reaction_facepile_dto_parseFromJSON(facepile_local_nonprimitive);

        list_addElement(facepileList, facepileItem);
    }
    }

    // social_post_comment_dto->my_reaction
    cJSON *my_reaction = cJSON_GetObjectItemCaseSensitive(social_post_comment_dtoJSON, "myReaction");
    socialservice_social_post_comment_dto_MYREACTION_e my_reactionVariable;
    if (my_reaction) { 
    if(!cJSON_IsString(my_reaction))
    {
    goto end; //Enum
    }
    my_reactionVariable = social_post_comment_dto_my_reaction_FromString(my_reaction->valuestring);
    }

    // social_post_comment_dto->my_reaction_id
    cJSON *my_reaction_id = cJSON_GetObjectItemCaseSensitive(social_post_comment_dtoJSON, "myReactionId");
    if (my_reaction_id) { 
    if(!cJSON_IsString(my_reaction_id) && !cJSON_IsNull(my_reaction_id))
    {
    goto end; //String
    }
    }


    social_post_comment_dto_local_var = social_post_comment_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        message && !cJSON_IsNull(message) ? strdup(message->valuestring) : NULL,
        parent_comment_id && !cJSON_IsNull(parent_comment_id) ? strdup(parent_comment_id->valuestring) : NULL,
        social_profile_id && !cJSON_IsNull(social_profile_id) ? strdup(social_profile_id->valuestring) : NULL,
        social_feed_post_id && !cJSON_IsNull(social_feed_post_id) ? strdup(social_feed_post_id->valuestring) : NULL,
        social_profile_name && !cJSON_IsNull(social_profile_name) ? strdup(social_profile_name->valuestring) : NULL,
        social_profile_avatar_url && !cJSON_IsNull(social_profile_avatar_url) ? strdup(social_profile_avatar_url->valuestring) : NULL,
        social_profile_type ? social_profile_typeVariable : socialservice_social_post_comment_dto_SOCIALPROFILETYPE_NULL,
        body_html && !cJSON_IsNull(body_html) ? strdup(body_html->valuestring) : NULL,
        body_format ? body_formatVariable : socialservice_social_post_comment_dto_BODYFORMAT_NULL,
        reply_count ? reply_count->valuedouble : 0,
        reactions_count ? reactions_count->valuedouble : 0,
        social_post_id && !cJSON_IsNull(social_post_id) ? strdup(social_post_id->valuestring) : NULL,
        facepile ? facepileList : NULL,
        my_reaction ? my_reactionVariable : socialservice_social_post_comment_dto_MYREACTION_NULL,
        my_reaction_id && !cJSON_IsNull(my_reaction_id) ? strdup(my_reaction_id->valuestring) : NULL
        );

    return social_post_comment_dto_local_var;
end:
    if (facepileList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, facepileList) {
            social_post_reaction_facepile_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(facepileList);
        facepileList = NULL;
    }
    return NULL;

}
