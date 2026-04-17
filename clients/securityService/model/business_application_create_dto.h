/*
 * business_application_create_dto.h
 *
 * 
 */

#ifndef _business_application_create_dto_H_
#define _business_application_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct business_application_create_dto_t business_application_create_dto_t;




typedef struct business_application_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *_namespace; // string
    char *display_name; // string
    char *avatar_url; // string
    char *website_url; // string
    int is_multi_tenant; //boolean
    int is_verified; //boolean
    int is_disabled; //boolean
    int is_single_page_application; //boolean
    int is_native_or_desktop_app; //boolean
    char *contact_email; // string
    char *privacy_policy_url; // string
    char *terms_and_conditions_url; // string
    int require_https; //boolean
    int require_app_secret; //boolean
    int enable_client_oauth_login; //boolean
    int enable_web_o_auth_login; //boolean
    int enable_device_o_auth_login; //boolean
    int allow_access_to_suite_settings; //boolean
    int require_web_o_auth_reauthentication; //boolean
    int require_two_factor_reauthorization; //boolean
    int enable_embedded_browser_o_auth_login; //boolean
    int use_strict_mode_for_redirect_uris; //boolean
    int country_restricted; //boolean
    char *spa_ui_engine; // string
    char *spa_static_files_root_path; // string
    char *spa_relative_app_path; // string
    char *spa_npm_start_script; // string
    char *spa_npm_publish_script; // string
    char *spa_relative_source_path; // string
    char *spa_relative_output_path; // string
    int use_proxy_to_spa_development_server; //boolean
    char *spa_development_server_uri; // string
    int enable_git_repo_management; //boolean
    char *git_repo_url; // string

} business_application_create_dto_t;

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
);

void business_application_create_dto_free(business_application_create_dto_t *business_application_create_dto);

business_application_create_dto_t *business_application_create_dto_parseFromJSON(cJSON *business_application_create_dtoJSON);

cJSON *business_application_create_dto_convertToJSON(business_application_create_dto_t *business_application_create_dto);

#endif /* _business_application_create_dto_H_ */

