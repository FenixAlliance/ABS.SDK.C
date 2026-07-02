#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "curriculum_experience_create_dto.h"



curriculum_experience_create_dto_t *curriculum_experience_create_dto_create(
    char *id,
    char *timestamp,
    char *curriculum_id,
    char *title,
    char *description,
    double priority,
    char *organization,
    int featured,
    int current,
    int validated,
    char *image_url,
    char *date_from,
    char *date_to,
    char *date,
    char *country_language_id,
    char *proficiency_rating_value_id,
    char *proficiency_rating_model_id,
    char *achievements,
    char *responsibilities,
    char *employer_profile_id
    ) {
    curriculum_experience_create_dto_t *curriculum_experience_create_dto_local_var = malloc(sizeof(curriculum_experience_create_dto_t));
    if (!curriculum_experience_create_dto_local_var) {
        return NULL;
    }
    curriculum_experience_create_dto_local_var->id = id;
    curriculum_experience_create_dto_local_var->timestamp = timestamp;
    curriculum_experience_create_dto_local_var->curriculum_id = curriculum_id;
    curriculum_experience_create_dto_local_var->title = title;
    curriculum_experience_create_dto_local_var->description = description;
    curriculum_experience_create_dto_local_var->priority = priority;
    curriculum_experience_create_dto_local_var->organization = organization;
    curriculum_experience_create_dto_local_var->featured = featured;
    curriculum_experience_create_dto_local_var->current = current;
    curriculum_experience_create_dto_local_var->validated = validated;
    curriculum_experience_create_dto_local_var->image_url = image_url;
    curriculum_experience_create_dto_local_var->date_from = date_from;
    curriculum_experience_create_dto_local_var->date_to = date_to;
    curriculum_experience_create_dto_local_var->date = date;
    curriculum_experience_create_dto_local_var->country_language_id = country_language_id;
    curriculum_experience_create_dto_local_var->proficiency_rating_value_id = proficiency_rating_value_id;
    curriculum_experience_create_dto_local_var->proficiency_rating_model_id = proficiency_rating_model_id;
    curriculum_experience_create_dto_local_var->achievements = achievements;
    curriculum_experience_create_dto_local_var->responsibilities = responsibilities;
    curriculum_experience_create_dto_local_var->employer_profile_id = employer_profile_id;

    return curriculum_experience_create_dto_local_var;
}


void curriculum_experience_create_dto_free(curriculum_experience_create_dto_t *curriculum_experience_create_dto) {
    if(NULL == curriculum_experience_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (curriculum_experience_create_dto->id) {
        free(curriculum_experience_create_dto->id);
        curriculum_experience_create_dto->id = NULL;
    }
    if (curriculum_experience_create_dto->timestamp) {
        free(curriculum_experience_create_dto->timestamp);
        curriculum_experience_create_dto->timestamp = NULL;
    }
    if (curriculum_experience_create_dto->curriculum_id) {
        free(curriculum_experience_create_dto->curriculum_id);
        curriculum_experience_create_dto->curriculum_id = NULL;
    }
    if (curriculum_experience_create_dto->title) {
        free(curriculum_experience_create_dto->title);
        curriculum_experience_create_dto->title = NULL;
    }
    if (curriculum_experience_create_dto->description) {
        free(curriculum_experience_create_dto->description);
        curriculum_experience_create_dto->description = NULL;
    }
    if (curriculum_experience_create_dto->organization) {
        free(curriculum_experience_create_dto->organization);
        curriculum_experience_create_dto->organization = NULL;
    }
    if (curriculum_experience_create_dto->image_url) {
        free(curriculum_experience_create_dto->image_url);
        curriculum_experience_create_dto->image_url = NULL;
    }
    if (curriculum_experience_create_dto->date_from) {
        free(curriculum_experience_create_dto->date_from);
        curriculum_experience_create_dto->date_from = NULL;
    }
    if (curriculum_experience_create_dto->date_to) {
        free(curriculum_experience_create_dto->date_to);
        curriculum_experience_create_dto->date_to = NULL;
    }
    if (curriculum_experience_create_dto->date) {
        free(curriculum_experience_create_dto->date);
        curriculum_experience_create_dto->date = NULL;
    }
    if (curriculum_experience_create_dto->country_language_id) {
        free(curriculum_experience_create_dto->country_language_id);
        curriculum_experience_create_dto->country_language_id = NULL;
    }
    if (curriculum_experience_create_dto->proficiency_rating_value_id) {
        free(curriculum_experience_create_dto->proficiency_rating_value_id);
        curriculum_experience_create_dto->proficiency_rating_value_id = NULL;
    }
    if (curriculum_experience_create_dto->proficiency_rating_model_id) {
        free(curriculum_experience_create_dto->proficiency_rating_model_id);
        curriculum_experience_create_dto->proficiency_rating_model_id = NULL;
    }
    if (curriculum_experience_create_dto->achievements) {
        free(curriculum_experience_create_dto->achievements);
        curriculum_experience_create_dto->achievements = NULL;
    }
    if (curriculum_experience_create_dto->responsibilities) {
        free(curriculum_experience_create_dto->responsibilities);
        curriculum_experience_create_dto->responsibilities = NULL;
    }
    if (curriculum_experience_create_dto->employer_profile_id) {
        free(curriculum_experience_create_dto->employer_profile_id);
        curriculum_experience_create_dto->employer_profile_id = NULL;
    }
    free(curriculum_experience_create_dto);
}

cJSON *curriculum_experience_create_dto_convertToJSON(curriculum_experience_create_dto_t *curriculum_experience_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // curriculum_experience_create_dto->id
    if(curriculum_experience_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", curriculum_experience_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // curriculum_experience_create_dto->timestamp
    if(curriculum_experience_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", curriculum_experience_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // curriculum_experience_create_dto->curriculum_id
    if(curriculum_experience_create_dto->curriculum_id) {
    if(cJSON_AddStringToObject(item, "curriculumId", curriculum_experience_create_dto->curriculum_id) == NULL) {
    goto fail; //String
    }
    }


    // curriculum_experience_create_dto->title
    if(curriculum_experience_create_dto->title) {
    if(cJSON_AddStringToObject(item, "title", curriculum_experience_create_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // curriculum_experience_create_dto->description
    if(curriculum_experience_create_dto->description) {
    if(cJSON_AddStringToObject(item, "description", curriculum_experience_create_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // curriculum_experience_create_dto->priority
    if(curriculum_experience_create_dto->priority) {
    if(cJSON_AddNumberToObject(item, "priority", curriculum_experience_create_dto->priority) == NULL) {
    goto fail; //Numeric
    }
    }


    // curriculum_experience_create_dto->organization
    if(curriculum_experience_create_dto->organization) {
    if(cJSON_AddStringToObject(item, "organization", curriculum_experience_create_dto->organization) == NULL) {
    goto fail; //String
    }
    }


    // curriculum_experience_create_dto->featured
    if(curriculum_experience_create_dto->featured) {
    if(cJSON_AddBoolToObject(item, "featured", curriculum_experience_create_dto->featured) == NULL) {
    goto fail; //Bool
    }
    }


    // curriculum_experience_create_dto->current
    if(curriculum_experience_create_dto->current) {
    if(cJSON_AddBoolToObject(item, "current", curriculum_experience_create_dto->current) == NULL) {
    goto fail; //Bool
    }
    }


    // curriculum_experience_create_dto->validated
    if(curriculum_experience_create_dto->validated) {
    if(cJSON_AddBoolToObject(item, "validated", curriculum_experience_create_dto->validated) == NULL) {
    goto fail; //Bool
    }
    }


    // curriculum_experience_create_dto->image_url
    if(curriculum_experience_create_dto->image_url) {
    if(cJSON_AddStringToObject(item, "imageUrl", curriculum_experience_create_dto->image_url) == NULL) {
    goto fail; //String
    }
    }


    // curriculum_experience_create_dto->date_from
    if(curriculum_experience_create_dto->date_from) {
    if(cJSON_AddStringToObject(item, "dateFrom", curriculum_experience_create_dto->date_from) == NULL) {
    goto fail; //Date-Time
    }
    }


    // curriculum_experience_create_dto->date_to
    if(curriculum_experience_create_dto->date_to) {
    if(cJSON_AddStringToObject(item, "dateTo", curriculum_experience_create_dto->date_to) == NULL) {
    goto fail; //Date-Time
    }
    }


    // curriculum_experience_create_dto->date
    if(curriculum_experience_create_dto->date) {
    if(cJSON_AddStringToObject(item, "date", curriculum_experience_create_dto->date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // curriculum_experience_create_dto->country_language_id
    if(curriculum_experience_create_dto->country_language_id) {
    if(cJSON_AddStringToObject(item, "countryLanguageId", curriculum_experience_create_dto->country_language_id) == NULL) {
    goto fail; //String
    }
    }


    // curriculum_experience_create_dto->proficiency_rating_value_id
    if(curriculum_experience_create_dto->proficiency_rating_value_id) {
    if(cJSON_AddStringToObject(item, "proficiencyRatingValueId", curriculum_experience_create_dto->proficiency_rating_value_id) == NULL) {
    goto fail; //String
    }
    }


    // curriculum_experience_create_dto->proficiency_rating_model_id
    if(curriculum_experience_create_dto->proficiency_rating_model_id) {
    if(cJSON_AddStringToObject(item, "proficiencyRatingModelId", curriculum_experience_create_dto->proficiency_rating_model_id) == NULL) {
    goto fail; //String
    }
    }


    // curriculum_experience_create_dto->achievements
    if(curriculum_experience_create_dto->achievements) {
    if(cJSON_AddStringToObject(item, "achievements", curriculum_experience_create_dto->achievements) == NULL) {
    goto fail; //String
    }
    }


    // curriculum_experience_create_dto->responsibilities
    if(curriculum_experience_create_dto->responsibilities) {
    if(cJSON_AddStringToObject(item, "responsibilities", curriculum_experience_create_dto->responsibilities) == NULL) {
    goto fail; //String
    }
    }


    // curriculum_experience_create_dto->employer_profile_id
    if(curriculum_experience_create_dto->employer_profile_id) {
    if(cJSON_AddStringToObject(item, "employerProfileId", curriculum_experience_create_dto->employer_profile_id) == NULL) {
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

curriculum_experience_create_dto_t *curriculum_experience_create_dto_parseFromJSON(cJSON *curriculum_experience_create_dtoJSON){

    curriculum_experience_create_dto_t *curriculum_experience_create_dto_local_var = NULL;

    // curriculum_experience_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(curriculum_experience_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // curriculum_experience_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(curriculum_experience_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // curriculum_experience_create_dto->curriculum_id
    cJSON *curriculum_id = cJSON_GetObjectItemCaseSensitive(curriculum_experience_create_dtoJSON, "curriculumId");
    if (curriculum_id) { 
    if(!cJSON_IsString(curriculum_id) && !cJSON_IsNull(curriculum_id))
    {
    goto end; //String
    }
    }

    // curriculum_experience_create_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(curriculum_experience_create_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // curriculum_experience_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(curriculum_experience_create_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // curriculum_experience_create_dto->priority
    cJSON *priority = cJSON_GetObjectItemCaseSensitive(curriculum_experience_create_dtoJSON, "priority");
    if (priority) { 
    if(!cJSON_IsNumber(priority))
    {
    goto end; //Numeric
    }
    }

    // curriculum_experience_create_dto->organization
    cJSON *organization = cJSON_GetObjectItemCaseSensitive(curriculum_experience_create_dtoJSON, "organization");
    if (organization) { 
    if(!cJSON_IsString(organization) && !cJSON_IsNull(organization))
    {
    goto end; //String
    }
    }

    // curriculum_experience_create_dto->featured
    cJSON *featured = cJSON_GetObjectItemCaseSensitive(curriculum_experience_create_dtoJSON, "featured");
    if (featured) { 
    if(!cJSON_IsBool(featured))
    {
    goto end; //Bool
    }
    }

    // curriculum_experience_create_dto->current
    cJSON *current = cJSON_GetObjectItemCaseSensitive(curriculum_experience_create_dtoJSON, "current");
    if (current) { 
    if(!cJSON_IsBool(current))
    {
    goto end; //Bool
    }
    }

    // curriculum_experience_create_dto->validated
    cJSON *validated = cJSON_GetObjectItemCaseSensitive(curriculum_experience_create_dtoJSON, "validated");
    if (validated) { 
    if(!cJSON_IsBool(validated))
    {
    goto end; //Bool
    }
    }

    // curriculum_experience_create_dto->image_url
    cJSON *image_url = cJSON_GetObjectItemCaseSensitive(curriculum_experience_create_dtoJSON, "imageUrl");
    if (image_url) { 
    if(!cJSON_IsString(image_url) && !cJSON_IsNull(image_url))
    {
    goto end; //String
    }
    }

    // curriculum_experience_create_dto->date_from
    cJSON *date_from = cJSON_GetObjectItemCaseSensitive(curriculum_experience_create_dtoJSON, "dateFrom");
    if (date_from) { 
    if(!cJSON_IsString(date_from) && !cJSON_IsNull(date_from))
    {
    goto end; //DateTime
    }
    }

    // curriculum_experience_create_dto->date_to
    cJSON *date_to = cJSON_GetObjectItemCaseSensitive(curriculum_experience_create_dtoJSON, "dateTo");
    if (date_to) { 
    if(!cJSON_IsString(date_to) && !cJSON_IsNull(date_to))
    {
    goto end; //DateTime
    }
    }

    // curriculum_experience_create_dto->date
    cJSON *date = cJSON_GetObjectItemCaseSensitive(curriculum_experience_create_dtoJSON, "date");
    if (date) { 
    if(!cJSON_IsString(date) && !cJSON_IsNull(date))
    {
    goto end; //DateTime
    }
    }

    // curriculum_experience_create_dto->country_language_id
    cJSON *country_language_id = cJSON_GetObjectItemCaseSensitive(curriculum_experience_create_dtoJSON, "countryLanguageId");
    if (country_language_id) { 
    if(!cJSON_IsString(country_language_id) && !cJSON_IsNull(country_language_id))
    {
    goto end; //String
    }
    }

    // curriculum_experience_create_dto->proficiency_rating_value_id
    cJSON *proficiency_rating_value_id = cJSON_GetObjectItemCaseSensitive(curriculum_experience_create_dtoJSON, "proficiencyRatingValueId");
    if (proficiency_rating_value_id) { 
    if(!cJSON_IsString(proficiency_rating_value_id) && !cJSON_IsNull(proficiency_rating_value_id))
    {
    goto end; //String
    }
    }

    // curriculum_experience_create_dto->proficiency_rating_model_id
    cJSON *proficiency_rating_model_id = cJSON_GetObjectItemCaseSensitive(curriculum_experience_create_dtoJSON, "proficiencyRatingModelId");
    if (proficiency_rating_model_id) { 
    if(!cJSON_IsString(proficiency_rating_model_id) && !cJSON_IsNull(proficiency_rating_model_id))
    {
    goto end; //String
    }
    }

    // curriculum_experience_create_dto->achievements
    cJSON *achievements = cJSON_GetObjectItemCaseSensitive(curriculum_experience_create_dtoJSON, "achievements");
    if (achievements) { 
    if(!cJSON_IsString(achievements) && !cJSON_IsNull(achievements))
    {
    goto end; //String
    }
    }

    // curriculum_experience_create_dto->responsibilities
    cJSON *responsibilities = cJSON_GetObjectItemCaseSensitive(curriculum_experience_create_dtoJSON, "responsibilities");
    if (responsibilities) { 
    if(!cJSON_IsString(responsibilities) && !cJSON_IsNull(responsibilities))
    {
    goto end; //String
    }
    }

    // curriculum_experience_create_dto->employer_profile_id
    cJSON *employer_profile_id = cJSON_GetObjectItemCaseSensitive(curriculum_experience_create_dtoJSON, "employerProfileId");
    if (employer_profile_id) { 
    if(!cJSON_IsString(employer_profile_id) && !cJSON_IsNull(employer_profile_id))
    {
    goto end; //String
    }
    }


    curriculum_experience_create_dto_local_var = curriculum_experience_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        curriculum_id && !cJSON_IsNull(curriculum_id) ? strdup(curriculum_id->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        priority ? priority->valuedouble : 0,
        organization && !cJSON_IsNull(organization) ? strdup(organization->valuestring) : NULL,
        featured ? featured->valueint : 0,
        current ? current->valueint : 0,
        validated ? validated->valueint : 0,
        image_url && !cJSON_IsNull(image_url) ? strdup(image_url->valuestring) : NULL,
        date_from && !cJSON_IsNull(date_from) ? strdup(date_from->valuestring) : NULL,
        date_to && !cJSON_IsNull(date_to) ? strdup(date_to->valuestring) : NULL,
        date && !cJSON_IsNull(date) ? strdup(date->valuestring) : NULL,
        country_language_id && !cJSON_IsNull(country_language_id) ? strdup(country_language_id->valuestring) : NULL,
        proficiency_rating_value_id && !cJSON_IsNull(proficiency_rating_value_id) ? strdup(proficiency_rating_value_id->valuestring) : NULL,
        proficiency_rating_model_id && !cJSON_IsNull(proficiency_rating_model_id) ? strdup(proficiency_rating_model_id->valuestring) : NULL,
        achievements && !cJSON_IsNull(achievements) ? strdup(achievements->valuestring) : NULL,
        responsibilities && !cJSON_IsNull(responsibilities) ? strdup(responsibilities->valuestring) : NULL,
        employer_profile_id && !cJSON_IsNull(employer_profile_id) ? strdup(employer_profile_id->valuestring) : NULL
        );

    return curriculum_experience_create_dto_local_var;
end:
    return NULL;

}
