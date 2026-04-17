#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "newsletter_create_dto.h"



newsletter_create_dto_t *newsletter_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *code,
    char *title
    ) {
    newsletter_create_dto_t *newsletter_create_dto_local_var = malloc(sizeof(newsletter_create_dto_t));
    if (!newsletter_create_dto_local_var) {
        return NULL;
    }
    newsletter_create_dto_local_var->id = id;
    newsletter_create_dto_local_var->timestamp = timestamp;
    newsletter_create_dto_local_var->name = name;
    newsletter_create_dto_local_var->code = code;
    newsletter_create_dto_local_var->title = title;

    return newsletter_create_dto_local_var;
}


void newsletter_create_dto_free(newsletter_create_dto_t *newsletter_create_dto) {
    if(NULL == newsletter_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (newsletter_create_dto->id) {
        free(newsletter_create_dto->id);
        newsletter_create_dto->id = NULL;
    }
    if (newsletter_create_dto->timestamp) {
        free(newsletter_create_dto->timestamp);
        newsletter_create_dto->timestamp = NULL;
    }
    if (newsletter_create_dto->name) {
        free(newsletter_create_dto->name);
        newsletter_create_dto->name = NULL;
    }
    if (newsletter_create_dto->code) {
        free(newsletter_create_dto->code);
        newsletter_create_dto->code = NULL;
    }
    if (newsletter_create_dto->title) {
        free(newsletter_create_dto->title);
        newsletter_create_dto->title = NULL;
    }
    free(newsletter_create_dto);
}

cJSON *newsletter_create_dto_convertToJSON(newsletter_create_dto_t *newsletter_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // newsletter_create_dto->id
    if(newsletter_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", newsletter_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // newsletter_create_dto->timestamp
    if(newsletter_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", newsletter_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // newsletter_create_dto->name
    if(newsletter_create_dto->name) {
    if(cJSON_AddStringToObject(item, "name", newsletter_create_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // newsletter_create_dto->code
    if(newsletter_create_dto->code) {
    if(cJSON_AddStringToObject(item, "code", newsletter_create_dto->code) == NULL) {
    goto fail; //String
    }
    }


    // newsletter_create_dto->title
    if(newsletter_create_dto->title) {
    if(cJSON_AddStringToObject(item, "title", newsletter_create_dto->title) == NULL) {
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

newsletter_create_dto_t *newsletter_create_dto_parseFromJSON(cJSON *newsletter_create_dtoJSON){

    newsletter_create_dto_t *newsletter_create_dto_local_var = NULL;

    // newsletter_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(newsletter_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // newsletter_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(newsletter_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // newsletter_create_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(newsletter_create_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // newsletter_create_dto->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(newsletter_create_dtoJSON, "code");
    if (code) { 
    if(!cJSON_IsString(code) && !cJSON_IsNull(code))
    {
    goto end; //String
    }
    }

    // newsletter_create_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(newsletter_create_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }


    newsletter_create_dto_local_var = newsletter_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        code && !cJSON_IsNull(code) ? strdup(code->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL
        );

    return newsletter_create_dto_local_var;
end:
    return NULL;

}
