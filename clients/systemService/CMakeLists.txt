cmake_minimum_required (VERSION 2.6...3.10.2)
project (CGenerator)

cmake_policy(SET CMP0063 NEW)

set(CMAKE_C_VISIBILITY_PRESET default)
set(CMAKE_CXX_VISIBILITY_PRESET default)
set(CMAKE_VISIBILITY_INLINES_HIDDEN OFF)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

option(BUILD_SHARED_LIBS "Build using shared libraries" ON)

find_package(OpenSSL)

if (OPENSSL_FOUND)
    message (STATUS "OPENSSL found")

    set(CMAKE_C_FLAGS "-DOPENSSL")
    if(CMAKE_VERSION VERSION_LESS 3.4)
        include_directories(${OPENSSL_INCLUDE_DIR})
        include_directories(${OPENSSL_INCLUDE_DIRS})
        link_directories(${OPENSSL_LIBRARIES})
    endif()

    message(STATUS "Using OpenSSL ${OPENSSL_VERSION}")
else()
    message (STATUS "OpenSSL Not found.")
endif()

set(pkgName "systemservice")

# this default version can be overridden in PreTarget.cmake
set(PROJECT_VERSION_MAJOR 0)
set(PROJECT_VERSION_MINOR 0)
set(PROJECT_VERSION_PATCH 1)

if( (DEFINED CURL_INCLUDE_DIR) AND (DEFINED CURL_LIBRARIES))
    include_directories(${CURL_INCLUDE_DIR})
    set(PLATFORM_LIBRARIES ${PLATFORM_LIBRARIES} ${CURL_LIBRARIES} )
else()
    find_package(CURL 7.58.0 REQUIRED)
    if(CURL_FOUND)
        include_directories(${CURL_INCLUDE_DIR})
        set(PLATFORM_LIBRARIES ${PLATFORM_LIBRARIES} ${CURL_LIBRARIES} )
    else(CURL_FOUND)
        message(FATAL_ERROR "Could not find the CURL library and development files.")
    endif()
endif()

set(SRCS
    src/list.c
    src/apiKey.c
    src/apiClient.c
    src/binary.c
    external/cJSON.c
    model/object.c
    model/access_token_response.c
    model/application_principal_detail_dto.c
    model/application_principal_detail_dto_envelope.c
    model/application_principal_dto.c
    model/application_principal_dto_collection_query_parameters.c
    model/application_principal_dto_i_read_only_list_envelope.c
    model/application_principal_permission_request_dto.c
    model/application_principal_provision_request_dto.c
    model/application_principal_provisioning_result_dto.c
    model/application_principal_provisioning_result_dto_envelope.c
    model/boolean_envelope.c
    model/business_domain_dto.c
    model/business_domain_dto_collection_query_parameters.c
    model/business_domain_dto_envelope.c
    model/business_domain_dto_list_envelope.c
    model/cart_dto.c
    model/cart_dto_collection_query_parameters.c
    model/cart_dto_envelope.c
    model/cart_dto_list_envelope.c
    model/email_dispatch_request.c
    model/empty_envelope.c
    model/envelope.c
    model/error_envelope.c
    model/extended_tenant_dto.c
    model/extended_tenant_dto_collection_query_parameters.c
    model/extended_tenant_dto_list_envelope.c
    model/extended_user_dto.c
    model/extended_user_dto_collection_query_parameters.c
    model/extended_user_dto_envelope.c
    model/extended_user_dto_list_envelope.c
    model/forgot_password_request.c
    model/guest_cart_purge_result_dto.c
    model/guest_cart_purge_result_dto_envelope.c
    model/http_validation_problem_details.c
    model/i_open_api_contact.c
    model/i_open_api_definition_spec.c
    model/i_open_api_endpoint.c
    model/i_open_api_license.c
    model/i_validation_failure.c
    model/i_validation_failure_list_envelope.c
    model/inbox_admin_reason_dto.c
    model/inbox_health_dto.c
    model/inbox_health_dto_envelope.c
    model/inbox_message_dto.c
    model/inbox_message_dto_collection_query_parameters.c
    model/inbox_message_dto_envelope.c
    model/inbox_message_dto_i_read_only_list_envelope.c
    model/inbox_replay_result_dto.c
    model/inbox_replay_result_dto_envelope.c
    model/info_request.c
    model/info_response.c
    model/int32_envelope.c
    model/ip_lookup_dto.c
    model/ip_lookup_dto_collection_query_parameters.c
    model/ip_lookup_dto_envelope.c
    model/ip_lookup_dto_list_envelope.c
    model/license_validation_request.c
    model/login_request.c
    model/module_grant_dto.c
    model/module_grant_dto_list_envelope.c
    model/object_email_dispatch_request.c
    model/option_create_dto.c
    model/option_dto.c
    model/option_dto_collection_query_parameters.c
    model/option_dto_envelope.c
    model/option_dto_list_envelope.c
    model/option_update_dto.c
    model/outbox_admin_reason_dto.c
    model/outbox_health_dto.c
    model/outbox_health_dto_envelope.c
    model/outbox_message_dto.c
    model/outbox_message_dto_collection_query_parameters.c
    model/outbox_message_dto_envelope.c
    model/outbox_message_dto_i_read_only_list_envelope.c
    model/patch_operation.c
    model/refresh_request.c
    model/register_request.c
    model/resend_confirmation_email_request.c
    model/reset_password_request.c
    model/security_permission_dto.c
    model/security_role_dto.c
    model/set_user_password_dto.c
    model/social_profile_dto.c
    model/string_list_envelope.c
    model/studio_module.c
    model/studio_module_list_envelope.c
    model/suite_license_assignment_dto.c
    model/suite_license_assignment_dto_list_envelope.c
    model/suite_license_dto.c
    model/suite_license_dto_envelope.c
    model/suite_license_dto_list_envelope.c
    model/suite_module.c
    model/suite_module_list_envelope.c
    model/system_overview_dto.c
    model/system_overview_dto_envelope.c
    model/tenant_create_dto.c
    model/tenant_dto.c
    model/tenant_dto_collection_query_parameters.c
    model/tenant_dto_envelope.c
    model/tenant_dto_list_envelope.c
    model/tenant_enrollment_dto.c
    model/tenant_update_dto.c
    model/two_factor_request.c
    model/two_factor_response.c
    model/user_admin_detail_dto.c
    model/user_admin_detail_dto_envelope.c
    model/user_admin_update_dto.c
    model/user_create_dto.c
    model/user_dto.c
    model/user_dto_collection_query_parameters.c
    model/user_dto_envelope.c
    model/user_dto_list_envelope.c
    model/user_external_login_dto.c
    model/user_order_summary_dto.c
    model/user_settings_dto.c
    model/user_update_dto.c
    model/wallet_dto.c
    model/web_portal_create_dto.c
    model/web_portal_dto.c
    model/web_portal_dto_collection_query_parameters.c
    model/web_portal_dto_envelope.c
    model/web_portal_dto_list_envelope.c
    model/web_portal_update_dto.c
    api/AntiforgeryAPI.c
    api/ApplicationPrincipalsAPI.c
    api/BusinessDomainsAPI.c
    api/CartsAPI.c
    api/ContactOptionsAPI.c
    api/EmailsAPI.c
    api/FenixAllianceABSWebAPI.c
    api/IPLookupsAPI.c
    api/InboxAPI.c
    api/LicensingAPI.c
    api/MigrationsAPI.c
    api/ModulesAPI.c
    api/OptionsAPI.c
    api/OutboxAPI.c
    api/OverviewAPI.c
    api/PortalsAPI.c
    api/TenantOptionsAPI.c
    api/TenantsAPI.c
    api/UserOptionsAPI.c
    api/UsersAPI.c

)

set(HDRS
    include/apiClient.h
    include/list.h
    include/binary.h
    include/keyValuePair.h
    external/cJSON.h
    model/object.h
    model/access_token_response.h
    model/application_principal_detail_dto.h
    model/application_principal_detail_dto_envelope.h
    model/application_principal_dto.h
    model/application_principal_dto_collection_query_parameters.h
    model/application_principal_dto_i_read_only_list_envelope.h
    model/application_principal_permission_request_dto.h
    model/application_principal_provision_request_dto.h
    model/application_principal_provisioning_result_dto.h
    model/application_principal_provisioning_result_dto_envelope.h
    model/boolean_envelope.h
    model/business_domain_dto.h
    model/business_domain_dto_collection_query_parameters.h
    model/business_domain_dto_envelope.h
    model/business_domain_dto_list_envelope.h
    model/cart_dto.h
    model/cart_dto_collection_query_parameters.h
    model/cart_dto_envelope.h
    model/cart_dto_list_envelope.h
    model/email_dispatch_request.h
    model/empty_envelope.h
    model/envelope.h
    model/error_envelope.h
    model/extended_tenant_dto.h
    model/extended_tenant_dto_collection_query_parameters.h
    model/extended_tenant_dto_list_envelope.h
    model/extended_user_dto.h
    model/extended_user_dto_collection_query_parameters.h
    model/extended_user_dto_envelope.h
    model/extended_user_dto_list_envelope.h
    model/forgot_password_request.h
    model/guest_cart_purge_result_dto.h
    model/guest_cart_purge_result_dto_envelope.h
    model/http_validation_problem_details.h
    model/i_open_api_contact.h
    model/i_open_api_definition_spec.h
    model/i_open_api_endpoint.h
    model/i_open_api_license.h
    model/i_validation_failure.h
    model/i_validation_failure_list_envelope.h
    model/inbox_admin_reason_dto.h
    model/inbox_health_dto.h
    model/inbox_health_dto_envelope.h
    model/inbox_message_dto.h
    model/inbox_message_dto_collection_query_parameters.h
    model/inbox_message_dto_envelope.h
    model/inbox_message_dto_i_read_only_list_envelope.h
    model/inbox_replay_result_dto.h
    model/inbox_replay_result_dto_envelope.h
    model/info_request.h
    model/info_response.h
    model/int32_envelope.h
    model/ip_lookup_dto.h
    model/ip_lookup_dto_collection_query_parameters.h
    model/ip_lookup_dto_envelope.h
    model/ip_lookup_dto_list_envelope.h
    model/license_validation_request.h
    model/login_request.h
    model/module_grant_dto.h
    model/module_grant_dto_list_envelope.h
    model/object_email_dispatch_request.h
    model/option_create_dto.h
    model/option_dto.h
    model/option_dto_collection_query_parameters.h
    model/option_dto_envelope.h
    model/option_dto_list_envelope.h
    model/option_update_dto.h
    model/outbox_admin_reason_dto.h
    model/outbox_health_dto.h
    model/outbox_health_dto_envelope.h
    model/outbox_message_dto.h
    model/outbox_message_dto_collection_query_parameters.h
    model/outbox_message_dto_envelope.h
    model/outbox_message_dto_i_read_only_list_envelope.h
    model/patch_operation.h
    model/refresh_request.h
    model/register_request.h
    model/resend_confirmation_email_request.h
    model/reset_password_request.h
    model/security_permission_dto.h
    model/security_role_dto.h
    model/set_user_password_dto.h
    model/social_profile_dto.h
    model/string_list_envelope.h
    model/studio_module.h
    model/studio_module_list_envelope.h
    model/suite_license_assignment_dto.h
    model/suite_license_assignment_dto_list_envelope.h
    model/suite_license_dto.h
    model/suite_license_dto_envelope.h
    model/suite_license_dto_list_envelope.h
    model/suite_module.h
    model/suite_module_list_envelope.h
    model/system_overview_dto.h
    model/system_overview_dto_envelope.h
    model/tenant_create_dto.h
    model/tenant_dto.h
    model/tenant_dto_collection_query_parameters.h
    model/tenant_dto_envelope.h
    model/tenant_dto_list_envelope.h
    model/tenant_enrollment_dto.h
    model/tenant_update_dto.h
    model/two_factor_request.h
    model/two_factor_response.h
    model/user_admin_detail_dto.h
    model/user_admin_detail_dto_envelope.h
    model/user_admin_update_dto.h
    model/user_create_dto.h
    model/user_dto.h
    model/user_dto_collection_query_parameters.h
    model/user_dto_envelope.h
    model/user_dto_list_envelope.h
    model/user_external_login_dto.h
    model/user_order_summary_dto.h
    model/user_settings_dto.h
    model/user_update_dto.h
    model/wallet_dto.h
    model/web_portal_create_dto.h
    model/web_portal_dto.h
    model/web_portal_dto_collection_query_parameters.h
    model/web_portal_dto_envelope.h
    model/web_portal_dto_list_envelope.h
    model/web_portal_update_dto.h
    api/AntiforgeryAPI.h
    api/ApplicationPrincipalsAPI.h
    api/BusinessDomainsAPI.h
    api/CartsAPI.h
    api/ContactOptionsAPI.h
    api/EmailsAPI.h
    api/FenixAllianceABSWebAPI.h
    api/IPLookupsAPI.h
    api/InboxAPI.h
    api/LicensingAPI.h
    api/MigrationsAPI.h
    api/ModulesAPI.h
    api/OptionsAPI.h
    api/OutboxAPI.h
    api/OverviewAPI.h
    api/PortalsAPI.h
    api/TenantOptionsAPI.h
    api/TenantsAPI.h
    api/UserOptionsAPI.h
    api/UsersAPI.h

)

include(PreTarget.cmake OPTIONAL)

set(PROJECT_VERSION_STRING "${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}.${PROJECT_VERSION_PATCH}")

# Add library with project file with project name as library name
add_library(${pkgName} ${SRCS} ${HDRS})
# Link dependent libraries
if(NOT CMAKE_VERSION VERSION_LESS 3.4)
    target_link_libraries(${pkgName} PRIVATE OpenSSL::SSL OpenSSL::Crypto)
endif()
target_link_libraries(${pkgName} PUBLIC ${CURL_LIBRARIES} )
target_include_directories(
    ${pkgName} PUBLIC $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}>
    $<INSTALL_INTERFACE:include>
)

include(PostTarget.cmake OPTIONAL)

# installation of libraries, headers, and config files
if (NOT EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/Config.cmake.in)
    install(TARGETS ${pkgName} DESTINATION lib)
else()
    include(GNUInstallDirs)
    install(TARGETS ${pkgName} DESTINATION lib EXPORT ${pkgName}Targets)

    foreach(HDR_FILE ${HDRS})
        get_filename_component(HDR_DIRECTORY ${HDR_FILE} DIRECTORY)
        get_filename_component(ABSOLUTE_HDR_DIRECTORY ${HDR_DIRECTORY} ABSOLUTE)
        file(RELATIVE_PATH RELATIVE_HDR_PATH ${CMAKE_CURRENT_SOURCE_DIR} ${ABSOLUTE_HDR_DIRECTORY})
        install(FILES ${HDR_FILE} DESTINATION include/${pkgName}/${RELATIVE_HDR_PATH})
    endforeach()

    include(CMakePackageConfigHelpers)
    write_basic_package_version_file(
            "${CMAKE_CURRENT_BINARY_DIR}/${pkgName}/${pkgName}ConfigVersion.cmake"
            VERSION "${PROJECT_VERSION_STRING}"
            COMPATIBILITY AnyNewerVersion
    )

    export(EXPORT ${pkgName}Targets
            FILE "${CMAKE_CURRENT_BINARY_DIR}/${pkgName}/${pkgName}Targets.cmake"
            NAMESPACE ${pkgName}::
            )

    configure_file(${CMAKE_CURRENT_SOURCE_DIR}/Config.cmake.in
            "${CMAKE_CURRENT_BINARY_DIR}/${pkgName}/${pkgName}Config.cmake"
            @ONLY
            )

    set(ConfigPackageLocation lib/cmake/${pkgName})
    install(EXPORT ${pkgName}Targets
            FILE
            ${pkgName}Targets.cmake
            NAMESPACE
            ${pkgName}::
            DESTINATION
            ${ConfigPackageLocation}
            )
    install(
            FILES
            "${CMAKE_CURRENT_BINARY_DIR}/${pkgName}/${pkgName}Config.cmake"
            "${CMAKE_CURRENT_BINARY_DIR}/${pkgName}/${pkgName}ConfigVersion.cmake"
            DESTINATION
            ${ConfigPackageLocation}
    )
endif()

# make installation packages
include(Packing.cmake OPTIONAL)

# Setting file variables to null
set(SRCS "")
set(HDRS "")


## This section shows how to use the above compiled library to compile the source files
## set source files
#set(SRCS
#    unit-tests/manual-AntiforgeryAPI.c
#    unit-tests/manual-ApplicationPrincipalsAPI.c
#    unit-tests/manual-BusinessDomainsAPI.c
#    unit-tests/manual-CartsAPI.c
#    unit-tests/manual-ContactOptionsAPI.c
#    unit-tests/manual-EmailsAPI.c
#    unit-tests/manual-FenixAllianceABSWebAPI.c
#    unit-tests/manual-IPLookupsAPI.c
#    unit-tests/manual-InboxAPI.c
#    unit-tests/manual-LicensingAPI.c
#    unit-tests/manual-MigrationsAPI.c
#    unit-tests/manual-ModulesAPI.c
#    unit-tests/manual-OptionsAPI.c
#    unit-tests/manual-OutboxAPI.c
#    unit-tests/manual-OverviewAPI.c
#    unit-tests/manual-PortalsAPI.c
#    unit-tests/manual-TenantOptionsAPI.c
#    unit-tests/manual-TenantsAPI.c
#    unit-tests/manual-UserOptionsAPI.c
#    unit-tests/manual-UsersAPI.c
#)

##set header files
#set(HDRS
#)

## loop over all files in SRCS variable
#foreach(SOURCE_FILE ${SRCS})
#    # Get only the file name from the file as add_executable does not support executable with slash("/")
#    get_filename_component(FILE_NAME_ONLY ${SOURCE_FILE} NAME_WE)
#    # Remove .c from the file name and set it as executable name
#    string( REPLACE ".c" "" EXECUTABLE_FILE ${FILE_NAME_ONLY})
#    # Add executable for every source file in  SRCS
#    add_executable(unit-${EXECUTABLE_FILE} ${SOURCE_FILE})
#    # Link above created library to executable and dependent library curl
#    target_link_libraries(unit-${EXECUTABLE_FILE} ${CURL_LIBRARIES} ${pkgName} )
#endforeach(SOURCE_FILE ${SRCS})
