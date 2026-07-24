#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "license_type_create_dto.h"



license_type_create_dto_t *license_type_create_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    int allow_trials,
    int is_perpetual_license,
    int max_license_usages,
    int trial_license_relative_expiration_in_days,
    int standard_license_relative_expiration_in_days,
    char *licensing_certificate_id
    ) {
    license_type_create_dto_t *license_type_create_dto_local_var = malloc(sizeof(license_type_create_dto_t));
    if (!license_type_create_dto_local_var) {
        return NULL;
    }
    license_type_create_dto_local_var->id = id;
    license_type_create_dto_local_var->timestamp = timestamp;
    license_type_create_dto_local_var->title = title;
    license_type_create_dto_local_var->description = description;
    license_type_create_dto_local_var->allow_trials = allow_trials;
    license_type_create_dto_local_var->is_perpetual_license = is_perpetual_license;
    license_type_create_dto_local_var->max_license_usages = max_license_usages;
    license_type_create_dto_local_var->trial_license_relative_expiration_in_days = trial_license_relative_expiration_in_days;
    license_type_create_dto_local_var->standard_license_relative_expiration_in_days = standard_license_relative_expiration_in_days;
    license_type_create_dto_local_var->licensing_certificate_id = licensing_certificate_id;

    return license_type_create_dto_local_var;
}


void license_type_create_dto_free(license_type_create_dto_t *license_type_create_dto) {
    if(NULL == license_type_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (license_type_create_dto->id) {
        free(license_type_create_dto->id);
        license_type_create_dto->id = NULL;
    }
    if (license_type_create_dto->timestamp) {
        free(license_type_create_dto->timestamp);
        license_type_create_dto->timestamp = NULL;
    }
    if (license_type_create_dto->title) {
        free(license_type_create_dto->title);
        license_type_create_dto->title = NULL;
    }
    if (license_type_create_dto->description) {
        free(license_type_create_dto->description);
        license_type_create_dto->description = NULL;
    }
    if (license_type_create_dto->licensing_certificate_id) {
        free(license_type_create_dto->licensing_certificate_id);
        license_type_create_dto->licensing_certificate_id = NULL;
    }
    free(license_type_create_dto);
}

cJSON *license_type_create_dto_convertToJSON(license_type_create_dto_t *license_type_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // license_type_create_dto->id
    if(license_type_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", license_type_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // license_type_create_dto->timestamp
    if(license_type_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", license_type_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // license_type_create_dto->title
    if (!license_type_create_dto->title) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "title", license_type_create_dto->title) == NULL) {
    goto fail; //String
    }


    // license_type_create_dto->description
    if(license_type_create_dto->description) {
    if(cJSON_AddStringToObject(item, "description", license_type_create_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // license_type_create_dto->allow_trials
    if(license_type_create_dto->allow_trials) {
    if(cJSON_AddBoolToObject(item, "allowTrials", license_type_create_dto->allow_trials) == NULL) {
    goto fail; //Bool
    }
    }


    // license_type_create_dto->is_perpetual_license
    if(license_type_create_dto->is_perpetual_license) {
    if(cJSON_AddBoolToObject(item, "isPerpetualLicense", license_type_create_dto->is_perpetual_license) == NULL) {
    goto fail; //Bool
    }
    }


    // license_type_create_dto->max_license_usages
    if(license_type_create_dto->max_license_usages) {
    if(cJSON_AddNumberToObject(item, "maxLicenseUsages", license_type_create_dto->max_license_usages) == NULL) {
    goto fail; //Numeric
    }
    }


    // license_type_create_dto->trial_license_relative_expiration_in_days
    if(license_type_create_dto->trial_license_relative_expiration_in_days) {
    if(cJSON_AddNumberToObject(item, "trialLicenseRelativeExpirationInDays", license_type_create_dto->trial_license_relative_expiration_in_days) == NULL) {
    goto fail; //Numeric
    }
    }


    // license_type_create_dto->standard_license_relative_expiration_in_days
    if(license_type_create_dto->standard_license_relative_expiration_in_days) {
    if(cJSON_AddNumberToObject(item, "standardLicenseRelativeExpirationInDays", license_type_create_dto->standard_license_relative_expiration_in_days) == NULL) {
    goto fail; //Numeric
    }
    }


    // license_type_create_dto->licensing_certificate_id
    if(license_type_create_dto->licensing_certificate_id) {
    if(cJSON_AddStringToObject(item, "licensingCertificateId", license_type_create_dto->licensing_certificate_id) == NULL) {
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

license_type_create_dto_t *license_type_create_dto_parseFromJSON(cJSON *license_type_create_dtoJSON){

    license_type_create_dto_t *license_type_create_dto_local_var = NULL;

    // license_type_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(license_type_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // license_type_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(license_type_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // license_type_create_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(license_type_create_dtoJSON, "title");
    if (!title) {
        goto end;
    }

    
    if(!cJSON_IsString(title))
    {
    goto end; //String
    }

    // license_type_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(license_type_create_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // license_type_create_dto->allow_trials
    cJSON *allow_trials = cJSON_GetObjectItemCaseSensitive(license_type_create_dtoJSON, "allowTrials");
    if (allow_trials) { 
    if(!cJSON_IsBool(allow_trials))
    {
    goto end; //Bool
    }
    }

    // license_type_create_dto->is_perpetual_license
    cJSON *is_perpetual_license = cJSON_GetObjectItemCaseSensitive(license_type_create_dtoJSON, "isPerpetualLicense");
    if (is_perpetual_license) { 
    if(!cJSON_IsBool(is_perpetual_license))
    {
    goto end; //Bool
    }
    }

    // license_type_create_dto->max_license_usages
    cJSON *max_license_usages = cJSON_GetObjectItemCaseSensitive(license_type_create_dtoJSON, "maxLicenseUsages");
    if (max_license_usages) { 
    if(!cJSON_IsNumber(max_license_usages))
    {
    goto end; //Numeric
    }
    }

    // license_type_create_dto->trial_license_relative_expiration_in_days
    cJSON *trial_license_relative_expiration_in_days = cJSON_GetObjectItemCaseSensitive(license_type_create_dtoJSON, "trialLicenseRelativeExpirationInDays");
    if (trial_license_relative_expiration_in_days) { 
    if(!cJSON_IsNumber(trial_license_relative_expiration_in_days))
    {
    goto end; //Numeric
    }
    }

    // license_type_create_dto->standard_license_relative_expiration_in_days
    cJSON *standard_license_relative_expiration_in_days = cJSON_GetObjectItemCaseSensitive(license_type_create_dtoJSON, "standardLicenseRelativeExpirationInDays");
    if (standard_license_relative_expiration_in_days) { 
    if(!cJSON_IsNumber(standard_license_relative_expiration_in_days))
    {
    goto end; //Numeric
    }
    }

    // license_type_create_dto->licensing_certificate_id
    cJSON *licensing_certificate_id = cJSON_GetObjectItemCaseSensitive(license_type_create_dtoJSON, "licensingCertificateId");
    if (licensing_certificate_id) { 
    if(!cJSON_IsString(licensing_certificate_id) && !cJSON_IsNull(licensing_certificate_id))
    {
    goto end; //String
    }
    }


    license_type_create_dto_local_var = license_type_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(title->valuestring),
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        allow_trials ? allow_trials->valueint : 0,
        is_perpetual_license ? is_perpetual_license->valueint : 0,
        max_license_usages ? max_license_usages->valuedouble : 0,
        trial_license_relative_expiration_in_days ? trial_license_relative_expiration_in_days->valuedouble : 0,
        standard_license_relative_expiration_in_days ? standard_license_relative_expiration_in_days->valuedouble : 0,
        licensing_certificate_id && !cJSON_IsNull(licensing_certificate_id) ? strdup(licensing_certificate_id->valuestring) : NULL
        );

    return license_type_create_dto_local_var;
end:
    return NULL;

}
