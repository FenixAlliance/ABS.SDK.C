#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "user_settings_dto.h"


char* user_settings_dto_site_theme_ToString(systemservice_user_settings_dto_SITETHEME_e site_theme) {
    char* site_themeArray[] =  { "NULL", "System", "Light", "Dark" };
    return site_themeArray[site_theme];
}

systemservice_user_settings_dto_SITETHEME_e user_settings_dto_site_theme_FromString(char* site_theme){
    int stringToReturn = 0;
    char *site_themeArray[] =  { "NULL", "System", "Light", "Dark" };
    size_t sizeofArray = sizeof(site_themeArray) / sizeof(site_themeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(site_theme, site_themeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

user_settings_dto_t *user_settings_dto_create(
    char *id,
    char *timestamp,
    int page_size,
    char *date_format,
    char *currency_format,
    char *date_time_format,
    systemservice_user_settings_dto_SITETHEME_e site_theme
    ) {
    user_settings_dto_t *user_settings_dto_local_var = malloc(sizeof(user_settings_dto_t));
    if (!user_settings_dto_local_var) {
        return NULL;
    }
    user_settings_dto_local_var->id = id;
    user_settings_dto_local_var->timestamp = timestamp;
    user_settings_dto_local_var->page_size = page_size;
    user_settings_dto_local_var->date_format = date_format;
    user_settings_dto_local_var->currency_format = currency_format;
    user_settings_dto_local_var->date_time_format = date_time_format;
    user_settings_dto_local_var->site_theme = site_theme;

    return user_settings_dto_local_var;
}


void user_settings_dto_free(user_settings_dto_t *user_settings_dto) {
    if(NULL == user_settings_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (user_settings_dto->id) {
        free(user_settings_dto->id);
        user_settings_dto->id = NULL;
    }
    if (user_settings_dto->timestamp) {
        free(user_settings_dto->timestamp);
        user_settings_dto->timestamp = NULL;
    }
    if (user_settings_dto->date_format) {
        free(user_settings_dto->date_format);
        user_settings_dto->date_format = NULL;
    }
    if (user_settings_dto->currency_format) {
        free(user_settings_dto->currency_format);
        user_settings_dto->currency_format = NULL;
    }
    if (user_settings_dto->date_time_format) {
        free(user_settings_dto->date_time_format);
        user_settings_dto->date_time_format = NULL;
    }
    free(user_settings_dto);
}

cJSON *user_settings_dto_convertToJSON(user_settings_dto_t *user_settings_dto) {
    cJSON *item = cJSON_CreateObject();

    // user_settings_dto->id
    if(user_settings_dto->id) {
    if(cJSON_AddStringToObject(item, "id", user_settings_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // user_settings_dto->timestamp
    if(user_settings_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", user_settings_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // user_settings_dto->page_size
    if(user_settings_dto->page_size) {
    if(cJSON_AddNumberToObject(item, "pageSize", user_settings_dto->page_size) == NULL) {
    goto fail; //Numeric
    }
    }


    // user_settings_dto->date_format
    if(user_settings_dto->date_format) {
    if(cJSON_AddStringToObject(item, "dateFormat", user_settings_dto->date_format) == NULL) {
    goto fail; //String
    }
    }


    // user_settings_dto->currency_format
    if(user_settings_dto->currency_format) {
    if(cJSON_AddStringToObject(item, "currencyFormat", user_settings_dto->currency_format) == NULL) {
    goto fail; //String
    }
    }


    // user_settings_dto->date_time_format
    if(user_settings_dto->date_time_format) {
    if(cJSON_AddStringToObject(item, "dateTimeFormat", user_settings_dto->date_time_format) == NULL) {
    goto fail; //String
    }
    }


    // user_settings_dto->site_theme
    if(user_settings_dto->site_theme != systemservice_user_settings_dto_SITETHEME_NULL) {
    if(cJSON_AddStringToObject(item, "siteTheme", site_themeuser_settings_dto_ToString(user_settings_dto->site_theme)) == NULL)
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

user_settings_dto_t *user_settings_dto_parseFromJSON(cJSON *user_settings_dtoJSON){

    user_settings_dto_t *user_settings_dto_local_var = NULL;

    // user_settings_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(user_settings_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // user_settings_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(user_settings_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // user_settings_dto->page_size
    cJSON *page_size = cJSON_GetObjectItemCaseSensitive(user_settings_dtoJSON, "pageSize");
    if (page_size) { 
    if(!cJSON_IsNumber(page_size))
    {
    goto end; //Numeric
    }
    }

    // user_settings_dto->date_format
    cJSON *date_format = cJSON_GetObjectItemCaseSensitive(user_settings_dtoJSON, "dateFormat");
    if (date_format) { 
    if(!cJSON_IsString(date_format) && !cJSON_IsNull(date_format))
    {
    goto end; //String
    }
    }

    // user_settings_dto->currency_format
    cJSON *currency_format = cJSON_GetObjectItemCaseSensitive(user_settings_dtoJSON, "currencyFormat");
    if (currency_format) { 
    if(!cJSON_IsString(currency_format) && !cJSON_IsNull(currency_format))
    {
    goto end; //String
    }
    }

    // user_settings_dto->date_time_format
    cJSON *date_time_format = cJSON_GetObjectItemCaseSensitive(user_settings_dtoJSON, "dateTimeFormat");
    if (date_time_format) { 
    if(!cJSON_IsString(date_time_format) && !cJSON_IsNull(date_time_format))
    {
    goto end; //String
    }
    }

    // user_settings_dto->site_theme
    cJSON *site_theme = cJSON_GetObjectItemCaseSensitive(user_settings_dtoJSON, "siteTheme");
    systemservice_user_settings_dto_SITETHEME_e site_themeVariable;
    if (site_theme) { 
    if(!cJSON_IsString(site_theme))
    {
    goto end; //Enum
    }
    site_themeVariable = user_settings_dto_site_theme_FromString(site_theme->valuestring);
    }


    user_settings_dto_local_var = user_settings_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        page_size ? page_size->valuedouble : 0,
        date_format && !cJSON_IsNull(date_format) ? strdup(date_format->valuestring) : NULL,
        currency_format && !cJSON_IsNull(currency_format) ? strdup(currency_format->valuestring) : NULL,
        date_time_format && !cJSON_IsNull(date_time_format) ? strdup(date_time_format->valuestring) : NULL,
        site_theme ? site_themeVariable : systemservice_user_settings_dto_SITETHEME_NULL
        );

    return user_settings_dto_local_var;
end:
    return NULL;

}
