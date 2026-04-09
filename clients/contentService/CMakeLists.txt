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

set(pkgName "contentservice")

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
    model/advanced_options.c
    model/alliance_business_suite_integration_options.c
    model/apple_icons.c
    model/azure_app_insight_integration_options.c
    model/azure_storage_integration_options.c
    model/background.c
    model/background_options.c
    model/blog_author_dto.c
    model/blog_author_dto_envelope.c
    model/blog_author_dto_list_envelope.c
    model/blog_options.c
    model/blog_post_category_create_dto.c
    model/blog_post_category_dto.c
    model/blog_post_category_dto_envelope.c
    model/blog_post_category_dto_list_envelope.c
    model/blog_post_category_update_dto.c
    model/blog_post_comment_create_dto.c
    model/blog_post_comment_dto.c
    model/blog_post_comment_dto_list_envelope.c
    model/blog_post_create_dto.c
    model/blog_post_dto.c
    model/blog_post_dto_envelope.c
    model/blog_post_dto_list_envelope.c
    model/blog_post_tag_create_dto.c
    model/blog_post_tag_dto.c
    model/blog_post_tag_dto_envelope.c
    model/blog_post_tag_dto_list_envelope.c
    model/blog_post_tag_update_dto.c
    model/blog_post_update_dto.c
    model/branding_options.c
    model/breadcrumbs_options.c
    model/business_domain_dto.c
    model/business_domain_dto_envelope.c
    model/business_domain_dto_list_envelope.c
    model/cart_options.c
    model/color_options.c
    model/color_scheme.c
    model/contact_options.c
    model/contact_point.c
    model/coupons_options.c
    model/creator.c
    model/custom_font.c
    model/dashboard_options.c
    model/downloadables_options.c
    model/e_payco_integration_options.c
    model/email_options.c
    model/emails_options.c
    model/empty_envelope.c
    model/error_envelope.c
    model/facebook_integration_options.c
    model/favicons.c
    model/fenix_alliance_integrations_options.c
    model/footer_options.c
    model/forgot_password_request.c
    model/forum_options.c
    model/free_geo_ip_integration_options.c
    model/google_analytics.c
    model/google_integration_options.c
    model/google_maps_integration_options.c
    model/google_merchant_center_integration_options.c
    model/google_my_business_integration_options.c
    model/google_recaptcha_integration_options.c
    model/google_tag_manager_integration_options.c
    model/header_options.c
    model/http_validation_problem_details.c
    model/identity_and_privacy_options.c
    model/infinity_comex_integration_options.c
    model/info_request.c
    model/info_response.c
    model/int32_envelope.c
    model/integration_options.c
    model/integrations_options.c
    model/inventory_options.c
    model/layout_options.c
    model/login_request.c
    model/logo.c
    model/margin.c
    model/measurement_options.c
    model/menu_options.c
    model/microsoft_azure_integration_options.c
    model/microsoft_integrations_options.c
    model/ms_app_tile.c
    model/open_exchange_rates_integrations_options.c
    model/operation.c
    model/organization.c
    model/padding.c
    model/payment_method.c
    model/payment_options.c
    model/portal_options.c
    model/portal_options_envelope.c
    model/portal_settings.c
    model/portal_settings_envelope.c
    model/price_calculation_options.c
    model/privacy_options.c
    model/recommendation_options.c
    model/refresh_request.c
    model/register_request.c
    model/resend_confirmation_email_request.c
    model/reset_password_request.c
    model/responsive_options.c
    model/reviews_options.c
    model/sendgrid_integrations_options.c
    model/seo_options.c
    model/services_options.c
    model/sliding_bar_options.c
    model/social_media_options.c
    model/store_data_retention_policy.c
    model/store_options.c
    model/studio_options.c
    model/subscriptions_options.c
    model/tax_calculation_options.c
    model/theming_options.c
    model/title_bar_options.c
    model/two_factor_request.c
    model/two_factor_response.c
    model/typography.c
    model/typography_options.c
    model/web_content_create_dto.c
    model/web_content_dto.c
    model/web_content_dto_envelope.c
    model/web_content_dto_list_envelope.c
    model/web_content_update_dto.c
    model/web_page_category_create_dto.c
    model/web_page_category_dto.c
    model/web_page_category_dto_envelope.c
    model/web_page_category_dto_list_envelope.c
    model/web_page_category_update_dto.c
    model/web_page_create_dto.c
    model/web_page_dto.c
    model/web_page_dto_envelope.c
    model/web_page_dto_list_envelope.c
    model/web_page_tag_create_dto.c
    model/web_page_tag_dto.c
    model/web_page_tag_dto_envelope.c
    model/web_page_tag_dto_list_envelope.c
    model/web_page_tag_update_dto.c
    model/web_page_update_dto.c
    model/web_portal_create_dto.c
    model/web_portal_dto.c
    model/web_portal_dto_envelope.c
    model/web_portal_update_dto.c
    model/web_template_create_dto.c
    model/web_template_dto.c
    model/web_template_dto_envelope.c
    model/web_template_dto_list_envelope.c
    model/web_template_update_dto.c
    api/BlogPostAuthorsAPI.c
    api/BlogPostCategoriesAPI.c
    api/BlogPostTagsAPI.c
    api/BlogPostsAPI.c
    api/BusinessDomainsAPI.c
    api/FenixAllianceABPWebAPI.c
    api/PortalsAPI.c
    api/ThemesAPI.c
    api/WebContentsAPI.c
    api/WebPageCategoriesAPI.c
    api/WebPageTagsAPI.c
    api/WebPagesAPI.c
    api/WebTemplatesAPI.c

)

set(HDRS
    include/apiClient.h
    include/list.h
    include/binary.h
    include/keyValuePair.h
    external/cJSON.h
    model/object.h
    model/access_token_response.h
    model/advanced_options.h
    model/alliance_business_suite_integration_options.h
    model/apple_icons.h
    model/azure_app_insight_integration_options.h
    model/azure_storage_integration_options.h
    model/background.h
    model/background_options.h
    model/blog_author_dto.h
    model/blog_author_dto_envelope.h
    model/blog_author_dto_list_envelope.h
    model/blog_options.h
    model/blog_post_category_create_dto.h
    model/blog_post_category_dto.h
    model/blog_post_category_dto_envelope.h
    model/blog_post_category_dto_list_envelope.h
    model/blog_post_category_update_dto.h
    model/blog_post_comment_create_dto.h
    model/blog_post_comment_dto.h
    model/blog_post_comment_dto_list_envelope.h
    model/blog_post_create_dto.h
    model/blog_post_dto.h
    model/blog_post_dto_envelope.h
    model/blog_post_dto_list_envelope.h
    model/blog_post_tag_create_dto.h
    model/blog_post_tag_dto.h
    model/blog_post_tag_dto_envelope.h
    model/blog_post_tag_dto_list_envelope.h
    model/blog_post_tag_update_dto.h
    model/blog_post_update_dto.h
    model/branding_options.h
    model/breadcrumbs_options.h
    model/business_domain_dto.h
    model/business_domain_dto_envelope.h
    model/business_domain_dto_list_envelope.h
    model/cart_options.h
    model/color_options.h
    model/color_scheme.h
    model/contact_options.h
    model/contact_point.h
    model/coupons_options.h
    model/creator.h
    model/custom_font.h
    model/dashboard_options.h
    model/downloadables_options.h
    model/e_payco_integration_options.h
    model/email_options.h
    model/emails_options.h
    model/empty_envelope.h
    model/error_envelope.h
    model/facebook_integration_options.h
    model/favicons.h
    model/fenix_alliance_integrations_options.h
    model/footer_options.h
    model/forgot_password_request.h
    model/forum_options.h
    model/free_geo_ip_integration_options.h
    model/google_analytics.h
    model/google_integration_options.h
    model/google_maps_integration_options.h
    model/google_merchant_center_integration_options.h
    model/google_my_business_integration_options.h
    model/google_recaptcha_integration_options.h
    model/google_tag_manager_integration_options.h
    model/header_options.h
    model/http_validation_problem_details.h
    model/identity_and_privacy_options.h
    model/infinity_comex_integration_options.h
    model/info_request.h
    model/info_response.h
    model/int32_envelope.h
    model/integration_options.h
    model/integrations_options.h
    model/inventory_options.h
    model/layout_options.h
    model/login_request.h
    model/logo.h
    model/margin.h
    model/measurement_options.h
    model/menu_options.h
    model/microsoft_azure_integration_options.h
    model/microsoft_integrations_options.h
    model/ms_app_tile.h
    model/open_exchange_rates_integrations_options.h
    model/operation.h
    model/organization.h
    model/padding.h
    model/payment_method.h
    model/payment_options.h
    model/portal_options.h
    model/portal_options_envelope.h
    model/portal_settings.h
    model/portal_settings_envelope.h
    model/price_calculation_options.h
    model/privacy_options.h
    model/recommendation_options.h
    model/refresh_request.h
    model/register_request.h
    model/resend_confirmation_email_request.h
    model/reset_password_request.h
    model/responsive_options.h
    model/reviews_options.h
    model/sendgrid_integrations_options.h
    model/seo_options.h
    model/services_options.h
    model/sliding_bar_options.h
    model/social_media_options.h
    model/store_data_retention_policy.h
    model/store_options.h
    model/studio_options.h
    model/subscriptions_options.h
    model/tax_calculation_options.h
    model/theming_options.h
    model/title_bar_options.h
    model/two_factor_request.h
    model/two_factor_response.h
    model/typography.h
    model/typography_options.h
    model/web_content_create_dto.h
    model/web_content_dto.h
    model/web_content_dto_envelope.h
    model/web_content_dto_list_envelope.h
    model/web_content_update_dto.h
    model/web_page_category_create_dto.h
    model/web_page_category_dto.h
    model/web_page_category_dto_envelope.h
    model/web_page_category_dto_list_envelope.h
    model/web_page_category_update_dto.h
    model/web_page_create_dto.h
    model/web_page_dto.h
    model/web_page_dto_envelope.h
    model/web_page_dto_list_envelope.h
    model/web_page_tag_create_dto.h
    model/web_page_tag_dto.h
    model/web_page_tag_dto_envelope.h
    model/web_page_tag_dto_list_envelope.h
    model/web_page_tag_update_dto.h
    model/web_page_update_dto.h
    model/web_portal_create_dto.h
    model/web_portal_dto.h
    model/web_portal_dto_envelope.h
    model/web_portal_update_dto.h
    model/web_template_create_dto.h
    model/web_template_dto.h
    model/web_template_dto_envelope.h
    model/web_template_dto_list_envelope.h
    model/web_template_update_dto.h
    api/BlogPostAuthorsAPI.h
    api/BlogPostCategoriesAPI.h
    api/BlogPostTagsAPI.h
    api/BlogPostsAPI.h
    api/BusinessDomainsAPI.h
    api/FenixAllianceABPWebAPI.h
    api/PortalsAPI.h
    api/ThemesAPI.h
    api/WebContentsAPI.h
    api/WebPageCategoriesAPI.h
    api/WebPageTagsAPI.h
    api/WebPagesAPI.h
    api/WebTemplatesAPI.h

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
#    unit-tests/manual-BlogPostAuthorsAPI.c
#    unit-tests/manual-BlogPostCategoriesAPI.c
#    unit-tests/manual-BlogPostTagsAPI.c
#    unit-tests/manual-BlogPostsAPI.c
#    unit-tests/manual-BusinessDomainsAPI.c
#    unit-tests/manual-FenixAllianceABPWebAPI.c
#    unit-tests/manual-PortalsAPI.c
#    unit-tests/manual-ThemesAPI.c
#    unit-tests/manual-WebContentsAPI.c
#    unit-tests/manual-WebPageCategoriesAPI.c
#    unit-tests/manual-WebPageTagsAPI.c
#    unit-tests/manual-WebPagesAPI.c
#    unit-tests/manual-WebTemplatesAPI.c
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
