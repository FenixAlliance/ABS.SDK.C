#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "social_feed_post_dto.h"


char* social_feed_post_dto_social_profile_type_ToString(socialservice_social_feed_post_dto_SOCIALPROFILETYPE_e social_profile_type) {
    char* social_profile_typeArray[] =  { "NULL", "User", "Tenant", "Contact" };
    return social_profile_typeArray[social_profile_type];
}

socialservice_social_feed_post_dto_SOCIALPROFILETYPE_e social_feed_post_dto_social_profile_type_FromString(char* social_profile_type){
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
char* social_feed_post_dto_body_format_ToString(socialservice_social_feed_post_dto_BODYFORMAT_e body_format) {
    char* body_formatArray[] =  { "NULL", "PlainText", "Html" };
    return body_formatArray[body_format];
}

socialservice_social_feed_post_dto_BODYFORMAT_e social_feed_post_dto_body_format_FromString(char* body_format){
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
char* social_feed_post_dto_my_reaction_ToString(socialservice_social_feed_post_dto_MYREACTION_e my_reaction) {
    char* my_reactionArray[] =  { "NULL", "Like", "Happy", "HaHa", "Love", "Sad", "Angry", "Wow", "Afraid" };
    return my_reactionArray[my_reaction];
}

socialservice_social_feed_post_dto_MYREACTION_e social_feed_post_dto_my_reaction_FromString(char* my_reaction){
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

social_feed_post_dto_t *social_feed_post_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *message,
    char *social_profile_id,
    char *social_profile_name,
    char *social_profile_avatar_url,
    int comments_count,
    int reactions_count,
    socialservice_social_feed_post_dto_SOCIALPROFILETYPE_e social_profile_type,
    char *body_html,
    socialservice_social_feed_post_dto_BODYFORMAT_e body_format,
    char *background_style,
    char *social_feed_id,
    list_t *facepile,
    list_t *attachments,
    socialservice_social_feed_post_dto_MYREACTION_e my_reaction,
    char *my_reaction_id
    ) {
    social_feed_post_dto_t *social_feed_post_dto_local_var = malloc(sizeof(social_feed_post_dto_t));
    if (!social_feed_post_dto_local_var) {
        return NULL;
    }
    social_feed_post_dto_local_var->id = id;
    social_feed_post_dto_local_var->timestamp = timestamp;
    social_feed_post_dto_local_var->title = title;
    social_feed_post_dto_local_var->message = message;
    social_feed_post_dto_local_var->social_profile_id = social_profile_id;
    social_feed_post_dto_local_var->social_profile_name = social_profile_name;
    social_feed_post_dto_local_var->social_profile_avatar_url = social_profile_avatar_url;
    social_feed_post_dto_local_var->comments_count = comments_count;
    social_feed_post_dto_local_var->reactions_count = reactions_count;
    social_feed_post_dto_local_var->social_profile_type = social_profile_type;
    social_feed_post_dto_local_var->body_html = body_html;
    social_feed_post_dto_local_var->body_format = body_format;
    social_feed_post_dto_local_var->background_style = background_style;
    social_feed_post_dto_local_var->social_feed_id = social_feed_id;
    social_feed_post_dto_local_var->facepile = facepile;
    social_feed_post_dto_local_var->attachments = attachments;
    social_feed_post_dto_local_var->my_reaction = my_reaction;
    social_feed_post_dto_local_var->my_reaction_id = my_reaction_id;

    return social_feed_post_dto_local_var;
}


void social_feed_post_dto_free(social_feed_post_dto_t *social_feed_post_dto) {
    if(NULL == social_feed_post_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (social_feed_post_dto->id) {
        free(social_feed_post_dto->id);
        social_feed_post_dto->id = NULL;
    }
    if (social_feed_post_dto->timestamp) {
        free(social_feed_post_dto->timestamp);
        social_feed_post_dto->timestamp = NULL;
    }
    if (social_feed_post_dto->title) {
        free(social_feed_post_dto->title);
        social_feed_post_dto->title = NULL;
    }
    if (social_feed_post_dto->message) {
        free(social_feed_post_dto->message);
        social_feed_post_dto->message = NULL;
    }
    if (social_feed_post_dto->social_profile_id) {
        free(social_feed_post_dto->social_profile_id);
        social_feed_post_dto->social_profile_id = NULL;
    }
    if (social_feed_post_dto->social_profile_name) {
        free(social_feed_post_dto->social_profile_name);
        social_feed_post_dto->social_profile_name = NULL;
    }
    if (social_feed_post_dto->social_profile_avatar_url) {
        free(social_feed_post_dto->social_profile_avatar_url);
        social_feed_post_dto->social_profile_avatar_url = NULL;
    }
    if (social_feed_post_dto->body_html) {
        free(social_feed_post_dto->body_html);
        social_feed_post_dto->body_html = NULL;
    }
    if (social_feed_post_dto->background_style) {
        free(social_feed_post_dto->background_style);
        social_feed_post_dto->background_style = NULL;
    }
    if (social_feed_post_dto->social_feed_id) {
        free(social_feed_post_dto->social_feed_id);
        social_feed_post_dto->social_feed_id = NULL;
    }
    if (social_feed_post_dto->facepile) {
        list_ForEach(listEntry, social_feed_post_dto->facepile) {
            social_post_reaction_facepile_dto_free(listEntry->data);
        }
        list_freeList(social_feed_post_dto->facepile);
        social_feed_post_dto->facepile = NULL;
    }
    if (social_feed_post_dto->attachments) {
        list_ForEach(listEntry, social_feed_post_dto->attachments) {
            social_post_attachment_ref_dto_free(listEntry->data);
        }
        list_freeList(social_feed_post_dto->attachments);
        social_feed_post_dto->attachments = NULL;
    }
    if (social_feed_post_dto->my_reaction_id) {
        free(social_feed_post_dto->my_reaction_id);
        social_feed_post_dto->my_reaction_id = NULL;
    }
    free(social_feed_post_dto);
}

cJSON *social_feed_post_dto_convertToJSON(social_feed_post_dto_t *social_feed_post_dto) {
    cJSON *item = cJSON_CreateObject();

    // social_feed_post_dto->id
    if(social_feed_post_dto->id) {
    if(cJSON_AddStringToObject(item, "id", social_feed_post_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // social_feed_post_dto->timestamp
    if(social_feed_post_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", social_feed_post_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // social_feed_post_dto->title
    if(social_feed_post_dto->title) {
    if(cJSON_AddStringToObject(item, "title", social_feed_post_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // social_feed_post_dto->message
    if(social_feed_post_dto->message) {
    if(cJSON_AddStringToObject(item, "message", social_feed_post_dto->message) == NULL) {
    goto fail; //String
    }
    }


    // social_feed_post_dto->social_profile_id
    if(social_feed_post_dto->social_profile_id) {
    if(cJSON_AddStringToObject(item, "socialProfileId", social_feed_post_dto->social_profile_id) == NULL) {
    goto fail; //String
    }
    }


    // social_feed_post_dto->social_profile_name
    if(social_feed_post_dto->social_profile_name) {
    if(cJSON_AddStringToObject(item, "socialProfileName", social_feed_post_dto->social_profile_name) == NULL) {
    goto fail; //String
    }
    }


    // social_feed_post_dto->social_profile_avatar_url
    if(social_feed_post_dto->social_profile_avatar_url) {
    if(cJSON_AddStringToObject(item, "socialProfileAvatarUrl", social_feed_post_dto->social_profile_avatar_url) == NULL) {
    goto fail; //String
    }
    }


    // social_feed_post_dto->comments_count
    if(social_feed_post_dto->comments_count) {
    if(cJSON_AddNumberToObject(item, "commentsCount", social_feed_post_dto->comments_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // social_feed_post_dto->reactions_count
    if(social_feed_post_dto->reactions_count) {
    if(cJSON_AddNumberToObject(item, "reactionsCount", social_feed_post_dto->reactions_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // social_feed_post_dto->social_profile_type
    if(social_feed_post_dto->social_profile_type != socialservice_social_feed_post_dto_SOCIALPROFILETYPE_NULL) {
    if(cJSON_AddStringToObject(item, "socialProfileType", social_profile_typesocial_feed_post_dto_ToString(social_feed_post_dto->social_profile_type)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // social_feed_post_dto->body_html
    if(social_feed_post_dto->body_html) {
    if(cJSON_AddStringToObject(item, "bodyHtml", social_feed_post_dto->body_html) == NULL) {
    goto fail; //String
    }
    }


    // social_feed_post_dto->body_format
    if(social_feed_post_dto->body_format != socialservice_social_feed_post_dto_BODYFORMAT_NULL) {
    if(cJSON_AddStringToObject(item, "bodyFormat", body_formatsocial_feed_post_dto_ToString(social_feed_post_dto->body_format)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // social_feed_post_dto->background_style
    if(social_feed_post_dto->background_style) {
    if(cJSON_AddStringToObject(item, "backgroundStyle", social_feed_post_dto->background_style) == NULL) {
    goto fail; //String
    }
    }


    // social_feed_post_dto->social_feed_id
    if(social_feed_post_dto->social_feed_id) {
    if(cJSON_AddStringToObject(item, "socialFeedId", social_feed_post_dto->social_feed_id) == NULL) {
    goto fail; //String
    }
    }


    // social_feed_post_dto->facepile
    if(social_feed_post_dto->facepile) {
    cJSON *facepile = cJSON_AddArrayToObject(item, "facepile");
    if(facepile == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *facepileListEntry;
    if (social_feed_post_dto->facepile) {
    list_ForEach(facepileListEntry, social_feed_post_dto->facepile) {
    cJSON *itemLocal = social_post_reaction_facepile_dto_convertToJSON(facepileListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(facepile, itemLocal);
    }
    }
    }


    // social_feed_post_dto->attachments
    if(social_feed_post_dto->attachments) {
    cJSON *attachments = cJSON_AddArrayToObject(item, "attachments");
    if(attachments == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *attachmentsListEntry;
    if (social_feed_post_dto->attachments) {
    list_ForEach(attachmentsListEntry, social_feed_post_dto->attachments) {
    cJSON *itemLocal = social_post_attachment_ref_dto_convertToJSON(attachmentsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(attachments, itemLocal);
    }
    }
    }


    // social_feed_post_dto->my_reaction
    if(social_feed_post_dto->my_reaction != socialservice_social_feed_post_dto_MYREACTION_NULL) {
    if(cJSON_AddStringToObject(item, "myReaction", my_reactionsocial_feed_post_dto_ToString(social_feed_post_dto->my_reaction)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // social_feed_post_dto->my_reaction_id
    if(social_feed_post_dto->my_reaction_id) {
    if(cJSON_AddStringToObject(item, "myReactionId", social_feed_post_dto->my_reaction_id) == NULL) {
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

social_feed_post_dto_t *social_feed_post_dto_parseFromJSON(cJSON *social_feed_post_dtoJSON){

    social_feed_post_dto_t *social_feed_post_dto_local_var = NULL;

    // define the local list for social_feed_post_dto->facepile
    list_t *facepileList = NULL;

    // define the local list for social_feed_post_dto->attachments
    list_t *attachmentsList = NULL;

    // social_feed_post_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(social_feed_post_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // social_feed_post_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(social_feed_post_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // social_feed_post_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(social_feed_post_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // social_feed_post_dto->message
    cJSON *message = cJSON_GetObjectItemCaseSensitive(social_feed_post_dtoJSON, "message");
    if (message) { 
    if(!cJSON_IsString(message) && !cJSON_IsNull(message))
    {
    goto end; //String
    }
    }

    // social_feed_post_dto->social_profile_id
    cJSON *social_profile_id = cJSON_GetObjectItemCaseSensitive(social_feed_post_dtoJSON, "socialProfileId");
    if (social_profile_id) { 
    if(!cJSON_IsString(social_profile_id) && !cJSON_IsNull(social_profile_id))
    {
    goto end; //String
    }
    }

    // social_feed_post_dto->social_profile_name
    cJSON *social_profile_name = cJSON_GetObjectItemCaseSensitive(social_feed_post_dtoJSON, "socialProfileName");
    if (social_profile_name) { 
    if(!cJSON_IsString(social_profile_name) && !cJSON_IsNull(social_profile_name))
    {
    goto end; //String
    }
    }

    // social_feed_post_dto->social_profile_avatar_url
    cJSON *social_profile_avatar_url = cJSON_GetObjectItemCaseSensitive(social_feed_post_dtoJSON, "socialProfileAvatarUrl");
    if (social_profile_avatar_url) { 
    if(!cJSON_IsString(social_profile_avatar_url) && !cJSON_IsNull(social_profile_avatar_url))
    {
    goto end; //String
    }
    }

    // social_feed_post_dto->comments_count
    cJSON *comments_count = cJSON_GetObjectItemCaseSensitive(social_feed_post_dtoJSON, "commentsCount");
    if (comments_count) { 
    if(!cJSON_IsNumber(comments_count))
    {
    goto end; //Numeric
    }
    }

    // social_feed_post_dto->reactions_count
    cJSON *reactions_count = cJSON_GetObjectItemCaseSensitive(social_feed_post_dtoJSON, "reactionsCount");
    if (reactions_count) { 
    if(!cJSON_IsNumber(reactions_count))
    {
    goto end; //Numeric
    }
    }

    // social_feed_post_dto->social_profile_type
    cJSON *social_profile_type = cJSON_GetObjectItemCaseSensitive(social_feed_post_dtoJSON, "socialProfileType");
    socialservice_social_feed_post_dto_SOCIALPROFILETYPE_e social_profile_typeVariable;
    if (social_profile_type) { 
    if(!cJSON_IsString(social_profile_type))
    {
    goto end; //Enum
    }
    social_profile_typeVariable = social_feed_post_dto_social_profile_type_FromString(social_profile_type->valuestring);
    }

    // social_feed_post_dto->body_html
    cJSON *body_html = cJSON_GetObjectItemCaseSensitive(social_feed_post_dtoJSON, "bodyHtml");
    if (body_html) { 
    if(!cJSON_IsString(body_html) && !cJSON_IsNull(body_html))
    {
    goto end; //String
    }
    }

    // social_feed_post_dto->body_format
    cJSON *body_format = cJSON_GetObjectItemCaseSensitive(social_feed_post_dtoJSON, "bodyFormat");
    socialservice_social_feed_post_dto_BODYFORMAT_e body_formatVariable;
    if (body_format) { 
    if(!cJSON_IsString(body_format))
    {
    goto end; //Enum
    }
    body_formatVariable = social_feed_post_dto_body_format_FromString(body_format->valuestring);
    }

    // social_feed_post_dto->background_style
    cJSON *background_style = cJSON_GetObjectItemCaseSensitive(social_feed_post_dtoJSON, "backgroundStyle");
    if (background_style) { 
    if(!cJSON_IsString(background_style) && !cJSON_IsNull(background_style))
    {
    goto end; //String
    }
    }

    // social_feed_post_dto->social_feed_id
    cJSON *social_feed_id = cJSON_GetObjectItemCaseSensitive(social_feed_post_dtoJSON, "socialFeedId");
    if (social_feed_id) { 
    if(!cJSON_IsString(social_feed_id) && !cJSON_IsNull(social_feed_id))
    {
    goto end; //String
    }
    }

    // social_feed_post_dto->facepile
    cJSON *facepile = cJSON_GetObjectItemCaseSensitive(social_feed_post_dtoJSON, "facepile");
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

    // social_feed_post_dto->attachments
    cJSON *attachments = cJSON_GetObjectItemCaseSensitive(social_feed_post_dtoJSON, "attachments");
    if (attachments) { 
    cJSON *attachments_local_nonprimitive = NULL;
    if(!cJSON_IsArray(attachments)){
        goto end; //nonprimitive container
    }

    attachmentsList = list_createList();

    cJSON_ArrayForEach(attachments_local_nonprimitive,attachments )
    {
        if(!cJSON_IsObject(attachments_local_nonprimitive)){
            goto end;
        }
        social_post_attachment_ref_dto_t *attachmentsItem = social_post_attachment_ref_dto_parseFromJSON(attachments_local_nonprimitive);

        list_addElement(attachmentsList, attachmentsItem);
    }
    }

    // social_feed_post_dto->my_reaction
    cJSON *my_reaction = cJSON_GetObjectItemCaseSensitive(social_feed_post_dtoJSON, "myReaction");
    socialservice_social_feed_post_dto_MYREACTION_e my_reactionVariable;
    if (my_reaction) { 
    if(!cJSON_IsString(my_reaction))
    {
    goto end; //Enum
    }
    my_reactionVariable = social_feed_post_dto_my_reaction_FromString(my_reaction->valuestring);
    }

    // social_feed_post_dto->my_reaction_id
    cJSON *my_reaction_id = cJSON_GetObjectItemCaseSensitive(social_feed_post_dtoJSON, "myReactionId");
    if (my_reaction_id) { 
    if(!cJSON_IsString(my_reaction_id) && !cJSON_IsNull(my_reaction_id))
    {
    goto end; //String
    }
    }


    social_feed_post_dto_local_var = social_feed_post_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        message && !cJSON_IsNull(message) ? strdup(message->valuestring) : NULL,
        social_profile_id && !cJSON_IsNull(social_profile_id) ? strdup(social_profile_id->valuestring) : NULL,
        social_profile_name && !cJSON_IsNull(social_profile_name) ? strdup(social_profile_name->valuestring) : NULL,
        social_profile_avatar_url && !cJSON_IsNull(social_profile_avatar_url) ? strdup(social_profile_avatar_url->valuestring) : NULL,
        comments_count ? comments_count->valuedouble : 0,
        reactions_count ? reactions_count->valuedouble : 0,
        social_profile_type ? social_profile_typeVariable : socialservice_social_feed_post_dto_SOCIALPROFILETYPE_NULL,
        body_html && !cJSON_IsNull(body_html) ? strdup(body_html->valuestring) : NULL,
        body_format ? body_formatVariable : socialservice_social_feed_post_dto_BODYFORMAT_NULL,
        background_style && !cJSON_IsNull(background_style) ? strdup(background_style->valuestring) : NULL,
        social_feed_id && !cJSON_IsNull(social_feed_id) ? strdup(social_feed_id->valuestring) : NULL,
        facepile ? facepileList : NULL,
        attachments ? attachmentsList : NULL,
        my_reaction ? my_reactionVariable : socialservice_social_feed_post_dto_MYREACTION_NULL,
        my_reaction_id && !cJSON_IsNull(my_reaction_id) ? strdup(my_reaction_id->valuestring) : NULL
        );

    return social_feed_post_dto_local_var;
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
    if (attachmentsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, attachmentsList) {
            social_post_attachment_ref_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(attachmentsList);
        attachmentsList = NULL;
    }
    return NULL;

}
