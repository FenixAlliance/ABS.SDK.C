#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "gig_create_dto.h"



gig_create_dto_t *gig_create_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    char *start_date,
    char *end_date,
    double budget,
    char *location,
    char *skills_required
    ) {
    gig_create_dto_t *gig_create_dto_local_var = malloc(sizeof(gig_create_dto_t));
    if (!gig_create_dto_local_var) {
        return NULL;
    }
    gig_create_dto_local_var->id = id;
    gig_create_dto_local_var->timestamp = timestamp;
    gig_create_dto_local_var->title = title;
    gig_create_dto_local_var->description = description;
    gig_create_dto_local_var->start_date = start_date;
    gig_create_dto_local_var->end_date = end_date;
    gig_create_dto_local_var->budget = budget;
    gig_create_dto_local_var->location = location;
    gig_create_dto_local_var->skills_required = skills_required;

    return gig_create_dto_local_var;
}


void gig_create_dto_free(gig_create_dto_t *gig_create_dto) {
    if(NULL == gig_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (gig_create_dto->id) {
        free(gig_create_dto->id);
        gig_create_dto->id = NULL;
    }
    if (gig_create_dto->timestamp) {
        free(gig_create_dto->timestamp);
        gig_create_dto->timestamp = NULL;
    }
    if (gig_create_dto->title) {
        free(gig_create_dto->title);
        gig_create_dto->title = NULL;
    }
    if (gig_create_dto->description) {
        free(gig_create_dto->description);
        gig_create_dto->description = NULL;
    }
    if (gig_create_dto->start_date) {
        free(gig_create_dto->start_date);
        gig_create_dto->start_date = NULL;
    }
    if (gig_create_dto->end_date) {
        free(gig_create_dto->end_date);
        gig_create_dto->end_date = NULL;
    }
    if (gig_create_dto->location) {
        free(gig_create_dto->location);
        gig_create_dto->location = NULL;
    }
    if (gig_create_dto->skills_required) {
        free(gig_create_dto->skills_required);
        gig_create_dto->skills_required = NULL;
    }
    free(gig_create_dto);
}

cJSON *gig_create_dto_convertToJSON(gig_create_dto_t *gig_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // gig_create_dto->id
    if(gig_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", gig_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // gig_create_dto->timestamp
    if(gig_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", gig_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // gig_create_dto->title
    if(gig_create_dto->title) {
    if(cJSON_AddStringToObject(item, "title", gig_create_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // gig_create_dto->description
    if(gig_create_dto->description) {
    if(cJSON_AddStringToObject(item, "description", gig_create_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // gig_create_dto->start_date
    if(gig_create_dto->start_date) {
    if(cJSON_AddStringToObject(item, "startDate", gig_create_dto->start_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // gig_create_dto->end_date
    if(gig_create_dto->end_date) {
    if(cJSON_AddStringToObject(item, "endDate", gig_create_dto->end_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // gig_create_dto->budget
    if(gig_create_dto->budget) {
    if(cJSON_AddNumberToObject(item, "budget", gig_create_dto->budget) == NULL) {
    goto fail; //Numeric
    }
    }


    // gig_create_dto->location
    if(gig_create_dto->location) {
    if(cJSON_AddStringToObject(item, "location", gig_create_dto->location) == NULL) {
    goto fail; //String
    }
    }


    // gig_create_dto->skills_required
    if(gig_create_dto->skills_required) {
    if(cJSON_AddStringToObject(item, "skillsRequired", gig_create_dto->skills_required) == NULL) {
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

gig_create_dto_t *gig_create_dto_parseFromJSON(cJSON *gig_create_dtoJSON){

    gig_create_dto_t *gig_create_dto_local_var = NULL;

    // gig_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(gig_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // gig_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(gig_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // gig_create_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(gig_create_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // gig_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(gig_create_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // gig_create_dto->start_date
    cJSON *start_date = cJSON_GetObjectItemCaseSensitive(gig_create_dtoJSON, "startDate");
    if (start_date) { 
    if(!cJSON_IsString(start_date) && !cJSON_IsNull(start_date))
    {
    goto end; //DateTime
    }
    }

    // gig_create_dto->end_date
    cJSON *end_date = cJSON_GetObjectItemCaseSensitive(gig_create_dtoJSON, "endDate");
    if (end_date) { 
    if(!cJSON_IsString(end_date) && !cJSON_IsNull(end_date))
    {
    goto end; //DateTime
    }
    }

    // gig_create_dto->budget
    cJSON *budget = cJSON_GetObjectItemCaseSensitive(gig_create_dtoJSON, "budget");
    if (budget) { 
    if(!cJSON_IsNumber(budget))
    {
    goto end; //Numeric
    }
    }

    // gig_create_dto->location
    cJSON *location = cJSON_GetObjectItemCaseSensitive(gig_create_dtoJSON, "location");
    if (location) { 
    if(!cJSON_IsString(location) && !cJSON_IsNull(location))
    {
    goto end; //String
    }
    }

    // gig_create_dto->skills_required
    cJSON *skills_required = cJSON_GetObjectItemCaseSensitive(gig_create_dtoJSON, "skillsRequired");
    if (skills_required) { 
    if(!cJSON_IsString(skills_required) && !cJSON_IsNull(skills_required))
    {
    goto end; //String
    }
    }


    gig_create_dto_local_var = gig_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        start_date && !cJSON_IsNull(start_date) ? strdup(start_date->valuestring) : NULL,
        end_date && !cJSON_IsNull(end_date) ? strdup(end_date->valuestring) : NULL,
        budget ? budget->valuedouble : 0,
        location && !cJSON_IsNull(location) ? strdup(location->valuestring) : NULL,
        skills_required && !cJSON_IsNull(skills_required) ? strdup(skills_required->valuestring) : NULL
        );

    return gig_create_dto_local_var;
end:
    return NULL;

}
