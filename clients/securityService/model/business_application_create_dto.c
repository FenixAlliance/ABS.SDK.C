#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "business_application_create_dto.h"



business_application_create_dto_t *business_application_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *_namespace,
    char *display_name,
    char *avatar_url,
    char *website_url,
    int is_multi_tenant,
    int is_verified,
    int is_disabled,
    int is_single_page_application,
    int is_native_or_desktop_app,
    char *contact_email,
    char *privacy_policy_url,
    char *terms_and_conditions_url,
    char *business_id,
    char *business_profile_record_id,
    int require_https,
    int require_app_secret,
    int enable_client_oauth_login,
    int enable_web_o_auth_login,
    int enable_device_o_auth_login,
    int allow_access_to_suite_settings,
    int require_web_o_auth_reauthentication,
    int require_two_factor_reauthorization,
    int enable_embedded_browser_o_auth_login,
    int use_strict_mode_for_redirect_uris,
    int country_restricted,
    char *spa_ui_engine,
    char *spa_static_files_root_path,
    char *spa_relative_app_path,
    char *spa_npm_start_script,
    char *spa_npm_publish_script,
    char *spa_relative_source_path,
    char *spa_relative_output_path,
    int use_proxy_to_spa_development_server,
    char *spa_development_server_uri,
    int enable_git_repo_management,
    char *git_repo_url
    ) {
    business_application_create_dto_t *business_application_create_dto_local_var = malloc(sizeof(business_application_create_dto_t));
    if (!business_application_create_dto_local_var) {
        return NULL;
    }
    business_application_create_dto_local_var->id = id;
    business_application_create_dto_local_var->timestamp = timestamp;
    business_application_create_dto_local_var->name = name;
    business_application_create_dto_local_var->_namespace = _namespace;
    business_application_create_dto_local_var->display_name = display_name;
    business_application_create_dto_local_var->avatar_url = avatar_url;
    business_application_create_dto_local_var->website_url = website_url;
    business_application_create_dto_local_var->is_multi_tenant = is_multi_tenant;
    business_application_create_dto_local_var->is_verified = is_verified;
    business_application_create_dto_local_var->is_disabled = is_disabled;
    business_application_create_dto_local_var->is_single_page_application = is_single_page_application;
    business_application_create_dto_local_var->is_native_or_desktop_app = is_native_or_desktop_app;
    business_application_create_dto_local_var->contact_email = contact_email;
    business_application_create_dto_local_var->privacy_policy_url = privacy_policy_url;
    business_application_create_dto_local_var->terms_and_conditions_url = terms_and_conditions_url;
    business_application_create_dto_local_var->business_id = business_id;
    business_application_create_dto_local_var->business_profile_record_id = business_profile_record_id;
    business_application_create_dto_local_var->require_https = require_https;
    business_application_create_dto_local_var->require_app_secret = require_app_secret;
    business_application_create_dto_local_var->enable_client_oauth_login = enable_client_oauth_login;
    business_application_create_dto_local_var->enable_web_o_auth_login = enable_web_o_auth_login;
    business_application_create_dto_local_var->enable_device_o_auth_login = enable_device_o_auth_login;
    business_application_create_dto_local_var->allow_access_to_suite_settings = allow_access_to_suite_settings;
    business_application_create_dto_local_var->require_web_o_auth_reauthentication = require_web_o_auth_reauthentication;
    business_application_create_dto_local_var->require_two_factor_reauthorization = require_two_factor_reauthorization;
    business_application_create_dto_local_var->enable_embedded_browser_o_auth_login = enable_embedded_browser_o_auth_login;
    business_application_create_dto_local_var->use_strict_mode_for_redirect_uris = use_strict_mode_for_redirect_uris;
    business_application_create_dto_local_var->country_restricted = country_restricted;
    business_application_create_dto_local_var->spa_ui_engine = spa_ui_engine;
    business_application_create_dto_local_var->spa_static_files_root_path = spa_static_files_root_path;
    business_application_create_dto_local_var->spa_relative_app_path = spa_relative_app_path;
    business_application_create_dto_local_var->spa_npm_start_script = spa_npm_start_script;
    business_application_create_dto_local_var->spa_npm_publish_script = spa_npm_publish_script;
    business_application_create_dto_local_var->spa_relative_source_path = spa_relative_source_path;
    business_application_create_dto_local_var->spa_relative_output_path = spa_relative_output_path;
    business_application_create_dto_local_var->use_proxy_to_spa_development_server = use_proxy_to_spa_development_server;
    business_application_create_dto_local_var->spa_development_server_uri = spa_development_server_uri;
    business_application_create_dto_local_var->enable_git_repo_management = enable_git_repo_management;
    business_application_create_dto_local_var->git_repo_url = git_repo_url;

    return business_application_create_dto_local_var;
}


void business_application_create_dto_free(business_application_create_dto_t *business_application_create_dto) {
    if(NULL == business_application_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (business_application_create_dto->id) {
        free(business_application_create_dto->id);
        business_application_create_dto->id = NULL;
    }
    if (business_application_create_dto->timestamp) {
        free(business_application_create_dto->timestamp);
        business_application_create_dto->timestamp = NULL;
    }
    if (business_application_create_dto->name) {
        free(business_application_create_dto->name);
        business_application_create_dto->name = NULL;
    }
    if (business_application_create_dto->_namespace) {
        free(business_application_create_dto->_namespace);
        business_application_create_dto->_namespace = NULL;
    }
    if (business_application_create_dto->display_name) {
        free(business_application_create_dto->display_name);
        business_application_create_dto->display_name = NULL;
    }
    if (business_application_create_dto->avatar_url) {
        free(business_application_create_dto->avatar_url);
        business_application_create_dto->avatar_url = NULL;
    }
    if (business_application_create_dto->website_url) {
        free(business_application_create_dto->website_url);
        business_application_create_dto->website_url = NULL;
    }
    if (business_application_create_dto->contact_email) {
        free(business_application_create_dto->contact_email);
        business_application_create_dto->contact_email = NULL;
    }
    if (business_application_create_dto->privacy_policy_url) {
        free(business_application_create_dto->privacy_policy_url);
        business_application_create_dto->privacy_policy_url = NULL;
    }
    if (business_application_create_dto->terms_and_conditions_url) {
        free(business_application_create_dto->terms_and_conditions_url);
        business_application_create_dto->terms_and_conditions_url = NULL;
    }
    if (business_application_create_dto->business_id) {
        free(business_application_create_dto->business_id);
        business_application_create_dto->business_id = NULL;
    }
    if (business_application_create_dto->business_profile_record_id) {
        free(business_application_create_dto->business_profile_record_id);
        business_application_create_dto->business_profile_record_id = NULL;
    }
    if (business_application_create_dto->spa_ui_engine) {
        free(business_application_create_dto->spa_ui_engine);
        business_application_create_dto->spa_ui_engine = NULL;
    }
    if (business_application_create_dto->spa_static_files_root_path) {
        free(business_application_create_dto->spa_static_files_root_path);
        business_application_create_dto->spa_static_files_root_path = NULL;
    }
    if (business_application_create_dto->spa_relative_app_path) {
        free(business_application_create_dto->spa_relative_app_path);
        business_application_create_dto->spa_relative_app_path = NULL;
    }
    if (business_application_create_dto->spa_npm_start_script) {
        free(business_application_create_dto->spa_npm_start_script);
        business_application_create_dto->spa_npm_start_script = NULL;
    }
    if (business_application_create_dto->spa_npm_publish_script) {
        free(business_application_create_dto->spa_npm_publish_script);
        business_application_create_dto->spa_npm_publish_script = NULL;
    }
    if (business_application_create_dto->spa_relative_source_path) {
        free(business_application_create_dto->spa_relative_source_path);
        business_application_create_dto->spa_relative_source_path = NULL;
    }
    if (business_application_create_dto->spa_relative_output_path) {
        free(business_application_create_dto->spa_relative_output_path);
        business_application_create_dto->spa_relative_output_path = NULL;
    }
    if (business_application_create_dto->spa_development_server_uri) {
        free(business_application_create_dto->spa_development_server_uri);
        business_application_create_dto->spa_development_server_uri = NULL;
    }
    if (business_application_create_dto->git_repo_url) {
        free(business_application_create_dto->git_repo_url);
        business_application_create_dto->git_repo_url = NULL;
    }
    free(business_application_create_dto);
}

cJSON *business_application_create_dto_convertToJSON(business_application_create_dto_t *business_application_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // business_application_create_dto->id
    if(business_application_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", business_application_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // business_application_create_dto->timestamp
    if(business_application_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", business_application_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // business_application_create_dto->name
    if (!business_application_create_dto->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", business_application_create_dto->name) == NULL) {
    goto fail; //String
    }


    // business_application_create_dto->_namespace
    if(business_application_create_dto->_namespace) {
    if(cJSON_AddStringToObject(item, "namespace", business_application_create_dto->_namespace) == NULL) {
    goto fail; //String
    }
    }


    // business_application_create_dto->display_name
    if(business_application_create_dto->display_name) {
    if(cJSON_AddStringToObject(item, "displayName", business_application_create_dto->display_name) == NULL) {
    goto fail; //String
    }
    }


    // business_application_create_dto->avatar_url
    if(business_application_create_dto->avatar_url) {
    if(cJSON_AddStringToObject(item, "avatarURL", business_application_create_dto->avatar_url) == NULL) {
    goto fail; //String
    }
    }


    // business_application_create_dto->website_url
    if(business_application_create_dto->website_url) {
    if(cJSON_AddStringToObject(item, "websiteUrl", business_application_create_dto->website_url) == NULL) {
    goto fail; //String
    }
    }


    // business_application_create_dto->is_multi_tenant
    if(business_application_create_dto->is_multi_tenant) {
    if(cJSON_AddBoolToObject(item, "isMultiTenant", business_application_create_dto->is_multi_tenant) == NULL) {
    goto fail; //Bool
    }
    }


    // business_application_create_dto->is_verified
    if(business_application_create_dto->is_verified) {
    if(cJSON_AddBoolToObject(item, "isVerified", business_application_create_dto->is_verified) == NULL) {
    goto fail; //Bool
    }
    }


    // business_application_create_dto->is_disabled
    if(business_application_create_dto->is_disabled) {
    if(cJSON_AddBoolToObject(item, "isDisabled", business_application_create_dto->is_disabled) == NULL) {
    goto fail; //Bool
    }
    }


    // business_application_create_dto->is_single_page_application
    if(business_application_create_dto->is_single_page_application) {
    if(cJSON_AddBoolToObject(item, "isSinglePageApplication", business_application_create_dto->is_single_page_application) == NULL) {
    goto fail; //Bool
    }
    }


    // business_application_create_dto->is_native_or_desktop_app
    if(business_application_create_dto->is_native_or_desktop_app) {
    if(cJSON_AddBoolToObject(item, "isNativeOrDesktopApp", business_application_create_dto->is_native_or_desktop_app) == NULL) {
    goto fail; //Bool
    }
    }


    // business_application_create_dto->contact_email
    if(business_application_create_dto->contact_email) {
    if(cJSON_AddStringToObject(item, "contactEmail", business_application_create_dto->contact_email) == NULL) {
    goto fail; //String
    }
    }


    // business_application_create_dto->privacy_policy_url
    if(business_application_create_dto->privacy_policy_url) {
    if(cJSON_AddStringToObject(item, "privacyPolicyURL", business_application_create_dto->privacy_policy_url) == NULL) {
    goto fail; //String
    }
    }


    // business_application_create_dto->terms_and_conditions_url
    if(business_application_create_dto->terms_and_conditions_url) {
    if(cJSON_AddStringToObject(item, "termsAndConditionsURL", business_application_create_dto->terms_and_conditions_url) == NULL) {
    goto fail; //String
    }
    }


    // business_application_create_dto->business_id
    if(business_application_create_dto->business_id) {
    if(cJSON_AddStringToObject(item, "businessID", business_application_create_dto->business_id) == NULL) {
    goto fail; //String
    }
    }


    // business_application_create_dto->business_profile_record_id
    if(business_application_create_dto->business_profile_record_id) {
    if(cJSON_AddStringToObject(item, "businessProfileRecordID", business_application_create_dto->business_profile_record_id) == NULL) {
    goto fail; //String
    }
    }


    // business_application_create_dto->require_https
    if(business_application_create_dto->require_https) {
    if(cJSON_AddBoolToObject(item, "requireHttps", business_application_create_dto->require_https) == NULL) {
    goto fail; //Bool
    }
    }


    // business_application_create_dto->require_app_secret
    if(business_application_create_dto->require_app_secret) {
    if(cJSON_AddBoolToObject(item, "requireAppSecret", business_application_create_dto->require_app_secret) == NULL) {
    goto fail; //Bool
    }
    }


    // business_application_create_dto->enable_client_oauth_login
    if(business_application_create_dto->enable_client_oauth_login) {
    if(cJSON_AddBoolToObject(item, "enableClientOauthLogin", business_application_create_dto->enable_client_oauth_login) == NULL) {
    goto fail; //Bool
    }
    }


    // business_application_create_dto->enable_web_o_auth_login
    if(business_application_create_dto->enable_web_o_auth_login) {
    if(cJSON_AddBoolToObject(item, "enableWebOAuthLogin", business_application_create_dto->enable_web_o_auth_login) == NULL) {
    goto fail; //Bool
    }
    }


    // business_application_create_dto->enable_device_o_auth_login
    if(business_application_create_dto->enable_device_o_auth_login) {
    if(cJSON_AddBoolToObject(item, "enableDeviceOAuthLogin", business_application_create_dto->enable_device_o_auth_login) == NULL) {
    goto fail; //Bool
    }
    }


    // business_application_create_dto->allow_access_to_suite_settings
    if(business_application_create_dto->allow_access_to_suite_settings) {
    if(cJSON_AddBoolToObject(item, "allowAccessToSuiteSettings", business_application_create_dto->allow_access_to_suite_settings) == NULL) {
    goto fail; //Bool
    }
    }


    // business_application_create_dto->require_web_o_auth_reauthentication
    if(business_application_create_dto->require_web_o_auth_reauthentication) {
    if(cJSON_AddBoolToObject(item, "requireWebOAuthReauthentication", business_application_create_dto->require_web_o_auth_reauthentication) == NULL) {
    goto fail; //Bool
    }
    }


    // business_application_create_dto->require_two_factor_reauthorization
    if(business_application_create_dto->require_two_factor_reauthorization) {
    if(cJSON_AddBoolToObject(item, "requireTwoFactorReauthorization", business_application_create_dto->require_two_factor_reauthorization) == NULL) {
    goto fail; //Bool
    }
    }


    // business_application_create_dto->enable_embedded_browser_o_auth_login
    if(business_application_create_dto->enable_embedded_browser_o_auth_login) {
    if(cJSON_AddBoolToObject(item, "enableEmbeddedBrowserOAuthLogin", business_application_create_dto->enable_embedded_browser_o_auth_login) == NULL) {
    goto fail; //Bool
    }
    }


    // business_application_create_dto->use_strict_mode_for_redirect_uris
    if(business_application_create_dto->use_strict_mode_for_redirect_uris) {
    if(cJSON_AddBoolToObject(item, "useStrictModeForRedirectURIs", business_application_create_dto->use_strict_mode_for_redirect_uris) == NULL) {
    goto fail; //Bool
    }
    }


    // business_application_create_dto->country_restricted
    if(business_application_create_dto->country_restricted) {
    if(cJSON_AddBoolToObject(item, "countryRestricted", business_application_create_dto->country_restricted) == NULL) {
    goto fail; //Bool
    }
    }


    // business_application_create_dto->spa_ui_engine
    if(business_application_create_dto->spa_ui_engine) {
    if(cJSON_AddStringToObject(item, "spaUIEngine", business_application_create_dto->spa_ui_engine) == NULL) {
    goto fail; //String
    }
    }


    // business_application_create_dto->spa_static_files_root_path
    if(business_application_create_dto->spa_static_files_root_path) {
    if(cJSON_AddStringToObject(item, "spaStaticFilesRootPath", business_application_create_dto->spa_static_files_root_path) == NULL) {
    goto fail; //String
    }
    }


    // business_application_create_dto->spa_relative_app_path
    if(business_application_create_dto->spa_relative_app_path) {
    if(cJSON_AddStringToObject(item, "spaRelativeAppPath", business_application_create_dto->spa_relative_app_path) == NULL) {
    goto fail; //String
    }
    }


    // business_application_create_dto->spa_npm_start_script
    if(business_application_create_dto->spa_npm_start_script) {
    if(cJSON_AddStringToObject(item, "spaNpmStartScript", business_application_create_dto->spa_npm_start_script) == NULL) {
    goto fail; //String
    }
    }


    // business_application_create_dto->spa_npm_publish_script
    if(business_application_create_dto->spa_npm_publish_script) {
    if(cJSON_AddStringToObject(item, "spaNpmPublishScript", business_application_create_dto->spa_npm_publish_script) == NULL) {
    goto fail; //String
    }
    }


    // business_application_create_dto->spa_relative_source_path
    if(business_application_create_dto->spa_relative_source_path) {
    if(cJSON_AddStringToObject(item, "spaRelativeSourcePath", business_application_create_dto->spa_relative_source_path) == NULL) {
    goto fail; //String
    }
    }


    // business_application_create_dto->spa_relative_output_path
    if(business_application_create_dto->spa_relative_output_path) {
    if(cJSON_AddStringToObject(item, "spaRelativeOutputPath", business_application_create_dto->spa_relative_output_path) == NULL) {
    goto fail; //String
    }
    }


    // business_application_create_dto->use_proxy_to_spa_development_server
    if(business_application_create_dto->use_proxy_to_spa_development_server) {
    if(cJSON_AddBoolToObject(item, "useProxyToSpaDevelopmentServer", business_application_create_dto->use_proxy_to_spa_development_server) == NULL) {
    goto fail; //Bool
    }
    }


    // business_application_create_dto->spa_development_server_uri
    if(business_application_create_dto->spa_development_server_uri) {
    if(cJSON_AddStringToObject(item, "spaDevelopmentServerUri", business_application_create_dto->spa_development_server_uri) == NULL) {
    goto fail; //String
    }
    }


    // business_application_create_dto->enable_git_repo_management
    if(business_application_create_dto->enable_git_repo_management) {
    if(cJSON_AddBoolToObject(item, "enableGitRepoManagement", business_application_create_dto->enable_git_repo_management) == NULL) {
    goto fail; //Bool
    }
    }


    // business_application_create_dto->git_repo_url
    if(business_application_create_dto->git_repo_url) {
    if(cJSON_AddStringToObject(item, "gitRepoUrl", business_application_create_dto->git_repo_url) == NULL) {
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

business_application_create_dto_t *business_application_create_dto_parseFromJSON(cJSON *business_application_create_dtoJSON){

    business_application_create_dto_t *business_application_create_dto_local_var = NULL;

    // business_application_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(business_application_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // business_application_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(business_application_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // business_application_create_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(business_application_create_dtoJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // business_application_create_dto->_namespace
    cJSON *_namespace = cJSON_GetObjectItemCaseSensitive(business_application_create_dtoJSON, "namespace");
    if (_namespace) { 
    if(!cJSON_IsString(_namespace) && !cJSON_IsNull(_namespace))
    {
    goto end; //String
    }
    }

    // business_application_create_dto->display_name
    cJSON *display_name = cJSON_GetObjectItemCaseSensitive(business_application_create_dtoJSON, "displayName");
    if (display_name) { 
    if(!cJSON_IsString(display_name) && !cJSON_IsNull(display_name))
    {
    goto end; //String
    }
    }

    // business_application_create_dto->avatar_url
    cJSON *avatar_url = cJSON_GetObjectItemCaseSensitive(business_application_create_dtoJSON, "avatarURL");
    if (avatar_url) { 
    if(!cJSON_IsString(avatar_url) && !cJSON_IsNull(avatar_url))
    {
    goto end; //String
    }
    }

    // business_application_create_dto->website_url
    cJSON *website_url = cJSON_GetObjectItemCaseSensitive(business_application_create_dtoJSON, "websiteUrl");
    if (website_url) { 
    if(!cJSON_IsString(website_url) && !cJSON_IsNull(website_url))
    {
    goto end; //String
    }
    }

    // business_application_create_dto->is_multi_tenant
    cJSON *is_multi_tenant = cJSON_GetObjectItemCaseSensitive(business_application_create_dtoJSON, "isMultiTenant");
    if (is_multi_tenant) { 
    if(!cJSON_IsBool(is_multi_tenant))
    {
    goto end; //Bool
    }
    }

    // business_application_create_dto->is_verified
    cJSON *is_verified = cJSON_GetObjectItemCaseSensitive(business_application_create_dtoJSON, "isVerified");
    if (is_verified) { 
    if(!cJSON_IsBool(is_verified))
    {
    goto end; //Bool
    }
    }

    // business_application_create_dto->is_disabled
    cJSON *is_disabled = cJSON_GetObjectItemCaseSensitive(business_application_create_dtoJSON, "isDisabled");
    if (is_disabled) { 
    if(!cJSON_IsBool(is_disabled))
    {
    goto end; //Bool
    }
    }

    // business_application_create_dto->is_single_page_application
    cJSON *is_single_page_application = cJSON_GetObjectItemCaseSensitive(business_application_create_dtoJSON, "isSinglePageApplication");
    if (is_single_page_application) { 
    if(!cJSON_IsBool(is_single_page_application))
    {
    goto end; //Bool
    }
    }

    // business_application_create_dto->is_native_or_desktop_app
    cJSON *is_native_or_desktop_app = cJSON_GetObjectItemCaseSensitive(business_application_create_dtoJSON, "isNativeOrDesktopApp");
    if (is_native_or_desktop_app) { 
    if(!cJSON_IsBool(is_native_or_desktop_app))
    {
    goto end; //Bool
    }
    }

    // business_application_create_dto->contact_email
    cJSON *contact_email = cJSON_GetObjectItemCaseSensitive(business_application_create_dtoJSON, "contactEmail");
    if (contact_email) { 
    if(!cJSON_IsString(contact_email) && !cJSON_IsNull(contact_email))
    {
    goto end; //String
    }
    }

    // business_application_create_dto->privacy_policy_url
    cJSON *privacy_policy_url = cJSON_GetObjectItemCaseSensitive(business_application_create_dtoJSON, "privacyPolicyURL");
    if (privacy_policy_url) { 
    if(!cJSON_IsString(privacy_policy_url) && !cJSON_IsNull(privacy_policy_url))
    {
    goto end; //String
    }
    }

    // business_application_create_dto->terms_and_conditions_url
    cJSON *terms_and_conditions_url = cJSON_GetObjectItemCaseSensitive(business_application_create_dtoJSON, "termsAndConditionsURL");
    if (terms_and_conditions_url) { 
    if(!cJSON_IsString(terms_and_conditions_url) && !cJSON_IsNull(terms_and_conditions_url))
    {
    goto end; //String
    }
    }

    // business_application_create_dto->business_id
    cJSON *business_id = cJSON_GetObjectItemCaseSensitive(business_application_create_dtoJSON, "businessID");
    if (business_id) { 
    if(!cJSON_IsString(business_id) && !cJSON_IsNull(business_id))
    {
    goto end; //String
    }
    }

    // business_application_create_dto->business_profile_record_id
    cJSON *business_profile_record_id = cJSON_GetObjectItemCaseSensitive(business_application_create_dtoJSON, "businessProfileRecordID");
    if (business_profile_record_id) { 
    if(!cJSON_IsString(business_profile_record_id) && !cJSON_IsNull(business_profile_record_id))
    {
    goto end; //String
    }
    }

    // business_application_create_dto->require_https
    cJSON *require_https = cJSON_GetObjectItemCaseSensitive(business_application_create_dtoJSON, "requireHttps");
    if (require_https) { 
    if(!cJSON_IsBool(require_https))
    {
    goto end; //Bool
    }
    }

    // business_application_create_dto->require_app_secret
    cJSON *require_app_secret = cJSON_GetObjectItemCaseSensitive(business_application_create_dtoJSON, "requireAppSecret");
    if (require_app_secret) { 
    if(!cJSON_IsBool(require_app_secret))
    {
    goto end; //Bool
    }
    }

    // business_application_create_dto->enable_client_oauth_login
    cJSON *enable_client_oauth_login = cJSON_GetObjectItemCaseSensitive(business_application_create_dtoJSON, "enableClientOauthLogin");
    if (enable_client_oauth_login) { 
    if(!cJSON_IsBool(enable_client_oauth_login))
    {
    goto end; //Bool
    }
    }

    // business_application_create_dto->enable_web_o_auth_login
    cJSON *enable_web_o_auth_login = cJSON_GetObjectItemCaseSensitive(business_application_create_dtoJSON, "enableWebOAuthLogin");
    if (enable_web_o_auth_login) { 
    if(!cJSON_IsBool(enable_web_o_auth_login))
    {
    goto end; //Bool
    }
    }

    // business_application_create_dto->enable_device_o_auth_login
    cJSON *enable_device_o_auth_login = cJSON_GetObjectItemCaseSensitive(business_application_create_dtoJSON, "enableDeviceOAuthLogin");
    if (enable_device_o_auth_login) { 
    if(!cJSON_IsBool(enable_device_o_auth_login))
    {
    goto end; //Bool
    }
    }

    // business_application_create_dto->allow_access_to_suite_settings
    cJSON *allow_access_to_suite_settings = cJSON_GetObjectItemCaseSensitive(business_application_create_dtoJSON, "allowAccessToSuiteSettings");
    if (allow_access_to_suite_settings) { 
    if(!cJSON_IsBool(allow_access_to_suite_settings))
    {
    goto end; //Bool
    }
    }

    // business_application_create_dto->require_web_o_auth_reauthentication
    cJSON *require_web_o_auth_reauthentication = cJSON_GetObjectItemCaseSensitive(business_application_create_dtoJSON, "requireWebOAuthReauthentication");
    if (require_web_o_auth_reauthentication) { 
    if(!cJSON_IsBool(require_web_o_auth_reauthentication))
    {
    goto end; //Bool
    }
    }

    // business_application_create_dto->require_two_factor_reauthorization
    cJSON *require_two_factor_reauthorization = cJSON_GetObjectItemCaseSensitive(business_application_create_dtoJSON, "requireTwoFactorReauthorization");
    if (require_two_factor_reauthorization) { 
    if(!cJSON_IsBool(require_two_factor_reauthorization))
    {
    goto end; //Bool
    }
    }

    // business_application_create_dto->enable_embedded_browser_o_auth_login
    cJSON *enable_embedded_browser_o_auth_login = cJSON_GetObjectItemCaseSensitive(business_application_create_dtoJSON, "enableEmbeddedBrowserOAuthLogin");
    if (enable_embedded_browser_o_auth_login) { 
    if(!cJSON_IsBool(enable_embedded_browser_o_auth_login))
    {
    goto end; //Bool
    }
    }

    // business_application_create_dto->use_strict_mode_for_redirect_uris
    cJSON *use_strict_mode_for_redirect_uris = cJSON_GetObjectItemCaseSensitive(business_application_create_dtoJSON, "useStrictModeForRedirectURIs");
    if (use_strict_mode_for_redirect_uris) { 
    if(!cJSON_IsBool(use_strict_mode_for_redirect_uris))
    {
    goto end; //Bool
    }
    }

    // business_application_create_dto->country_restricted
    cJSON *country_restricted = cJSON_GetObjectItemCaseSensitive(business_application_create_dtoJSON, "countryRestricted");
    if (country_restricted) { 
    if(!cJSON_IsBool(country_restricted))
    {
    goto end; //Bool
    }
    }

    // business_application_create_dto->spa_ui_engine
    cJSON *spa_ui_engine = cJSON_GetObjectItemCaseSensitive(business_application_create_dtoJSON, "spaUIEngine");
    if (spa_ui_engine) { 
    if(!cJSON_IsString(spa_ui_engine) && !cJSON_IsNull(spa_ui_engine))
    {
    goto end; //String
    }
    }

    // business_application_create_dto->spa_static_files_root_path
    cJSON *spa_static_files_root_path = cJSON_GetObjectItemCaseSensitive(business_application_create_dtoJSON, "spaStaticFilesRootPath");
    if (spa_static_files_root_path) { 
    if(!cJSON_IsString(spa_static_files_root_path) && !cJSON_IsNull(spa_static_files_root_path))
    {
    goto end; //String
    }
    }

    // business_application_create_dto->spa_relative_app_path
    cJSON *spa_relative_app_path = cJSON_GetObjectItemCaseSensitive(business_application_create_dtoJSON, "spaRelativeAppPath");
    if (spa_relative_app_path) { 
    if(!cJSON_IsString(spa_relative_app_path) && !cJSON_IsNull(spa_relative_app_path))
    {
    goto end; //String
    }
    }

    // business_application_create_dto->spa_npm_start_script
    cJSON *spa_npm_start_script = cJSON_GetObjectItemCaseSensitive(business_application_create_dtoJSON, "spaNpmStartScript");
    if (spa_npm_start_script) { 
    if(!cJSON_IsString(spa_npm_start_script) && !cJSON_IsNull(spa_npm_start_script))
    {
    goto end; //String
    }
    }

    // business_application_create_dto->spa_npm_publish_script
    cJSON *spa_npm_publish_script = cJSON_GetObjectItemCaseSensitive(business_application_create_dtoJSON, "spaNpmPublishScript");
    if (spa_npm_publish_script) { 
    if(!cJSON_IsString(spa_npm_publish_script) && !cJSON_IsNull(spa_npm_publish_script))
    {
    goto end; //String
    }
    }

    // business_application_create_dto->spa_relative_source_path
    cJSON *spa_relative_source_path = cJSON_GetObjectItemCaseSensitive(business_application_create_dtoJSON, "spaRelativeSourcePath");
    if (spa_relative_source_path) { 
    if(!cJSON_IsString(spa_relative_source_path) && !cJSON_IsNull(spa_relative_source_path))
    {
    goto end; //String
    }
    }

    // business_application_create_dto->spa_relative_output_path
    cJSON *spa_relative_output_path = cJSON_GetObjectItemCaseSensitive(business_application_create_dtoJSON, "spaRelativeOutputPath");
    if (spa_relative_output_path) { 
    if(!cJSON_IsString(spa_relative_output_path) && !cJSON_IsNull(spa_relative_output_path))
    {
    goto end; //String
    }
    }

    // business_application_create_dto->use_proxy_to_spa_development_server
    cJSON *use_proxy_to_spa_development_server = cJSON_GetObjectItemCaseSensitive(business_application_create_dtoJSON, "useProxyToSpaDevelopmentServer");
    if (use_proxy_to_spa_development_server) { 
    if(!cJSON_IsBool(use_proxy_to_spa_development_server))
    {
    goto end; //Bool
    }
    }

    // business_application_create_dto->spa_development_server_uri
    cJSON *spa_development_server_uri = cJSON_GetObjectItemCaseSensitive(business_application_create_dtoJSON, "spaDevelopmentServerUri");
    if (spa_development_server_uri) { 
    if(!cJSON_IsString(spa_development_server_uri) && !cJSON_IsNull(spa_development_server_uri))
    {
    goto end; //String
    }
    }

    // business_application_create_dto->enable_git_repo_management
    cJSON *enable_git_repo_management = cJSON_GetObjectItemCaseSensitive(business_application_create_dtoJSON, "enableGitRepoManagement");
    if (enable_git_repo_management) { 
    if(!cJSON_IsBool(enable_git_repo_management))
    {
    goto end; //Bool
    }
    }

    // business_application_create_dto->git_repo_url
    cJSON *git_repo_url = cJSON_GetObjectItemCaseSensitive(business_application_create_dtoJSON, "gitRepoUrl");
    if (git_repo_url) { 
    if(!cJSON_IsString(git_repo_url) && !cJSON_IsNull(git_repo_url))
    {
    goto end; //String
    }
    }


    business_application_create_dto_local_var = business_application_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(name->valuestring),
        _namespace && !cJSON_IsNull(_namespace) ? strdup(_namespace->valuestring) : NULL,
        display_name && !cJSON_IsNull(display_name) ? strdup(display_name->valuestring) : NULL,
        avatar_url && !cJSON_IsNull(avatar_url) ? strdup(avatar_url->valuestring) : NULL,
        website_url && !cJSON_IsNull(website_url) ? strdup(website_url->valuestring) : NULL,
        is_multi_tenant ? is_multi_tenant->valueint : 0,
        is_verified ? is_verified->valueint : 0,
        is_disabled ? is_disabled->valueint : 0,
        is_single_page_application ? is_single_page_application->valueint : 0,
        is_native_or_desktop_app ? is_native_or_desktop_app->valueint : 0,
        contact_email && !cJSON_IsNull(contact_email) ? strdup(contact_email->valuestring) : NULL,
        privacy_policy_url && !cJSON_IsNull(privacy_policy_url) ? strdup(privacy_policy_url->valuestring) : NULL,
        terms_and_conditions_url && !cJSON_IsNull(terms_and_conditions_url) ? strdup(terms_and_conditions_url->valuestring) : NULL,
        business_id && !cJSON_IsNull(business_id) ? strdup(business_id->valuestring) : NULL,
        business_profile_record_id && !cJSON_IsNull(business_profile_record_id) ? strdup(business_profile_record_id->valuestring) : NULL,
        require_https ? require_https->valueint : 0,
        require_app_secret ? require_app_secret->valueint : 0,
        enable_client_oauth_login ? enable_client_oauth_login->valueint : 0,
        enable_web_o_auth_login ? enable_web_o_auth_login->valueint : 0,
        enable_device_o_auth_login ? enable_device_o_auth_login->valueint : 0,
        allow_access_to_suite_settings ? allow_access_to_suite_settings->valueint : 0,
        require_web_o_auth_reauthentication ? require_web_o_auth_reauthentication->valueint : 0,
        require_two_factor_reauthorization ? require_two_factor_reauthorization->valueint : 0,
        enable_embedded_browser_o_auth_login ? enable_embedded_browser_o_auth_login->valueint : 0,
        use_strict_mode_for_redirect_uris ? use_strict_mode_for_redirect_uris->valueint : 0,
        country_restricted ? country_restricted->valueint : 0,
        spa_ui_engine && !cJSON_IsNull(spa_ui_engine) ? strdup(spa_ui_engine->valuestring) : NULL,
        spa_static_files_root_path && !cJSON_IsNull(spa_static_files_root_path) ? strdup(spa_static_files_root_path->valuestring) : NULL,
        spa_relative_app_path && !cJSON_IsNull(spa_relative_app_path) ? strdup(spa_relative_app_path->valuestring) : NULL,
        spa_npm_start_script && !cJSON_IsNull(spa_npm_start_script) ? strdup(spa_npm_start_script->valuestring) : NULL,
        spa_npm_publish_script && !cJSON_IsNull(spa_npm_publish_script) ? strdup(spa_npm_publish_script->valuestring) : NULL,
        spa_relative_source_path && !cJSON_IsNull(spa_relative_source_path) ? strdup(spa_relative_source_path->valuestring) : NULL,
        spa_relative_output_path && !cJSON_IsNull(spa_relative_output_path) ? strdup(spa_relative_output_path->valuestring) : NULL,
        use_proxy_to_spa_development_server ? use_proxy_to_spa_development_server->valueint : 0,
        spa_development_server_uri && !cJSON_IsNull(spa_development_server_uri) ? strdup(spa_development_server_uri->valuestring) : NULL,
        enable_git_repo_management ? enable_git_repo_management->valueint : 0,
        git_repo_url && !cJSON_IsNull(git_repo_url) ? strdup(git_repo_url->valuestring) : NULL
        );

    return business_application_create_dto_local_var;
end:
    return NULL;

}
