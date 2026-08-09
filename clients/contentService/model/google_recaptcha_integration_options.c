#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "google_recaptcha_integration_options.h"



google_recaptcha_integration_options_t *google_recaptcha_integration_options_create(
    int enable,
    char *site,
    char *site_key,
    char *secret_key,
    char *version,
    char *project_id,
    char *api_key,
    double score_threshold
    ) {
    google_recaptcha_integration_options_t *google_recaptcha_integration_options_local_var = malloc(sizeof(google_recaptcha_integration_options_t));
    if (!google_recaptcha_integration_options_local_var) {
        return NULL;
    }
    google_recaptcha_integration_options_local_var->enable = enable;
    google_recaptcha_integration_options_local_var->site = site;
    google_recaptcha_integration_options_local_var->site_key = site_key;
    google_recaptcha_integration_options_local_var->secret_key = secret_key;
    google_recaptcha_integration_options_local_var->version = version;
    google_recaptcha_integration_options_local_var->project_id = project_id;
    google_recaptcha_integration_options_local_var->api_key = api_key;
    google_recaptcha_integration_options_local_var->score_threshold = score_threshold;

    return google_recaptcha_integration_options_local_var;
}


void google_recaptcha_integration_options_free(google_recaptcha_integration_options_t *google_recaptcha_integration_options) {
    if(NULL == google_recaptcha_integration_options){
        return ;
    }
    listEntry_t *listEntry;
    if (google_recaptcha_integration_options->site) {
        free(google_recaptcha_integration_options->site);
        google_recaptcha_integration_options->site = NULL;
    }
    if (google_recaptcha_integration_options->site_key) {
        free(google_recaptcha_integration_options->site_key);
        google_recaptcha_integration_options->site_key = NULL;
    }
    if (google_recaptcha_integration_options->secret_key) {
        free(google_recaptcha_integration_options->secret_key);
        google_recaptcha_integration_options->secret_key = NULL;
    }
    if (google_recaptcha_integration_options->version) {
        free(google_recaptcha_integration_options->version);
        google_recaptcha_integration_options->version = NULL;
    }
    if (google_recaptcha_integration_options->project_id) {
        free(google_recaptcha_integration_options->project_id);
        google_recaptcha_integration_options->project_id = NULL;
    }
    if (google_recaptcha_integration_options->api_key) {
        free(google_recaptcha_integration_options->api_key);
        google_recaptcha_integration_options->api_key = NULL;
    }
    free(google_recaptcha_integration_options);
}

cJSON *google_recaptcha_integration_options_convertToJSON(google_recaptcha_integration_options_t *google_recaptcha_integration_options) {
    cJSON *item = cJSON_CreateObject();

    // google_recaptcha_integration_options->enable
    if(google_recaptcha_integration_options->enable) {
    if(cJSON_AddBoolToObject(item, "enable", google_recaptcha_integration_options->enable) == NULL) {
    goto fail; //Bool
    }
    }


    // google_recaptcha_integration_options->site
    if(google_recaptcha_integration_options->site) {
    if(cJSON_AddStringToObject(item, "site", google_recaptcha_integration_options->site) == NULL) {
    goto fail; //String
    }
    }


    // google_recaptcha_integration_options->site_key
    if(google_recaptcha_integration_options->site_key) {
    if(cJSON_AddStringToObject(item, "siteKey", google_recaptcha_integration_options->site_key) == NULL) {
    goto fail; //String
    }
    }


    // google_recaptcha_integration_options->secret_key
    if(google_recaptcha_integration_options->secret_key) {
    if(cJSON_AddStringToObject(item, "secretKey", google_recaptcha_integration_options->secret_key) == NULL) {
    goto fail; //String
    }
    }


    // google_recaptcha_integration_options->version
    if(google_recaptcha_integration_options->version) {
    if(cJSON_AddStringToObject(item, "version", google_recaptcha_integration_options->version) == NULL) {
    goto fail; //String
    }
    }


    // google_recaptcha_integration_options->project_id
    if(google_recaptcha_integration_options->project_id) {
    if(cJSON_AddStringToObject(item, "projectId", google_recaptcha_integration_options->project_id) == NULL) {
    goto fail; //String
    }
    }


    // google_recaptcha_integration_options->api_key
    if(google_recaptcha_integration_options->api_key) {
    if(cJSON_AddStringToObject(item, "apiKey", google_recaptcha_integration_options->api_key) == NULL) {
    goto fail; //String
    }
    }


    // google_recaptcha_integration_options->score_threshold
    if(google_recaptcha_integration_options->score_threshold) {
    if(cJSON_AddNumberToObject(item, "scoreThreshold", google_recaptcha_integration_options->score_threshold) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

google_recaptcha_integration_options_t *google_recaptcha_integration_options_parseFromJSON(cJSON *google_recaptcha_integration_optionsJSON){

    google_recaptcha_integration_options_t *google_recaptcha_integration_options_local_var = NULL;

    // google_recaptcha_integration_options->enable
    cJSON *enable = cJSON_GetObjectItemCaseSensitive(google_recaptcha_integration_optionsJSON, "enable");
    if (enable) { 
    if(!cJSON_IsBool(enable))
    {
    goto end; //Bool
    }
    }

    // google_recaptcha_integration_options->site
    cJSON *site = cJSON_GetObjectItemCaseSensitive(google_recaptcha_integration_optionsJSON, "site");
    if (site) { 
    if(!cJSON_IsString(site) && !cJSON_IsNull(site))
    {
    goto end; //String
    }
    }

    // google_recaptcha_integration_options->site_key
    cJSON *site_key = cJSON_GetObjectItemCaseSensitive(google_recaptcha_integration_optionsJSON, "siteKey");
    if (site_key) { 
    if(!cJSON_IsString(site_key) && !cJSON_IsNull(site_key))
    {
    goto end; //String
    }
    }

    // google_recaptcha_integration_options->secret_key
    cJSON *secret_key = cJSON_GetObjectItemCaseSensitive(google_recaptcha_integration_optionsJSON, "secretKey");
    if (secret_key) { 
    if(!cJSON_IsString(secret_key) && !cJSON_IsNull(secret_key))
    {
    goto end; //String
    }
    }

    // google_recaptcha_integration_options->version
    cJSON *version = cJSON_GetObjectItemCaseSensitive(google_recaptcha_integration_optionsJSON, "version");
    if (version) { 
    if(!cJSON_IsString(version) && !cJSON_IsNull(version))
    {
    goto end; //String
    }
    }

    // google_recaptcha_integration_options->project_id
    cJSON *project_id = cJSON_GetObjectItemCaseSensitive(google_recaptcha_integration_optionsJSON, "projectId");
    if (project_id) { 
    if(!cJSON_IsString(project_id) && !cJSON_IsNull(project_id))
    {
    goto end; //String
    }
    }

    // google_recaptcha_integration_options->api_key
    cJSON *api_key = cJSON_GetObjectItemCaseSensitive(google_recaptcha_integration_optionsJSON, "apiKey");
    if (api_key) { 
    if(!cJSON_IsString(api_key) && !cJSON_IsNull(api_key))
    {
    goto end; //String
    }
    }

    // google_recaptcha_integration_options->score_threshold
    cJSON *score_threshold = cJSON_GetObjectItemCaseSensitive(google_recaptcha_integration_optionsJSON, "scoreThreshold");
    if (score_threshold) { 
    if(!cJSON_IsNumber(score_threshold))
    {
    goto end; //Numeric
    }
    }


    google_recaptcha_integration_options_local_var = google_recaptcha_integration_options_create (
        enable ? enable->valueint : 0,
        site && !cJSON_IsNull(site) ? strdup(site->valuestring) : NULL,
        site_key && !cJSON_IsNull(site_key) ? strdup(site_key->valuestring) : NULL,
        secret_key && !cJSON_IsNull(secret_key) ? strdup(secret_key->valuestring) : NULL,
        version && !cJSON_IsNull(version) ? strdup(version->valuestring) : NULL,
        project_id && !cJSON_IsNull(project_id) ? strdup(project_id->valuestring) : NULL,
        api_key && !cJSON_IsNull(api_key) ? strdup(api_key->valuestring) : NULL,
        score_threshold ? score_threshold->valuedouble : 0
        );

    return google_recaptcha_integration_options_local_var;
end:
    return NULL;

}
