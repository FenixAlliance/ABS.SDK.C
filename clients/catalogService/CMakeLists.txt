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

set(pkgName "catalogservice")

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
    model/catalog_item_create_dto.c
    model/catalog_item_dto.c
    model/catalog_item_dto_envelope.c
    model/catalog_item_dto_list_envelope.c
    model/catalog_item_update_dto.c
    model/currency_id.c
    model/empty_envelope.c
    model/error_envelope.c
    model/forgot_password_request.c
    model/http_validation_problem_details.c
    model/info_request.c
    model/info_response.c
    model/int32_envelope.c
    model/item_attachment_create_dto.c
    model/item_attachment_dto.c
    model/item_attachment_dto_envelope.c
    model/item_attachment_dto_list_envelope.c
    model/item_attachment_update_dto.c
    model/item_attribute_create_dto.c
    model/item_attribute_dto.c
    model/item_attribute_dto_envelope.c
    model/item_attribute_dto_list_envelope.c
    model/item_attribute_option_dto.c
    model/item_attribute_option_dto_envelope.c
    model/item_attribute_option_dto_list_envelope.c
    model/item_attribute_update_dto.c
    model/item_brand_create_dto.c
    model/item_brand_dto.c
    model/item_brand_dto_envelope.c
    model/item_brand_dto_list_envelope.c
    model/item_brand_update_dto.c
    model/item_category_create_dto.c
    model/item_category_dto.c
    model/item_category_dto_envelope.c
    model/item_category_dto_list_envelope.c
    model/item_category_update_dto.c
    model/item_google_category_dto.c
    model/item_google_category_dto_envelope.c
    model/item_google_category_dto_list_envelope.c
    model/item_image_create_dto.c
    model/item_image_dto.c
    model/item_image_dto_envelope.c
    model/item_image_dto_list_envelope.c
    model/item_image_update_dto.c
    model/item_question_create_dto.c
    model/item_question_dto.c
    model/item_question_dto_envelope.c
    model/item_question_dto_list_envelope.c
    model/item_question_record_create_dto.c
    model/item_question_update_dto.c
    model/item_refund_policy_dto.c
    model/item_refund_policy_dto_envelope.c
    model/item_refund_policy_dto_list_envelope.c
    model/item_return_policy_dto.c
    model/item_return_policy_dto_envelope.c
    model/item_return_policy_dto_list_envelope.c
    model/item_review_create_dto.c
    model/item_review_dto.c
    model/item_review_dto_envelope.c
    model/item_review_dto_list_envelope.c
    model/item_review_record_create_dto.c
    model/item_review_update_dto.c
    model/item_shipping_policy_dto.c
    model/item_shipping_policy_dto_envelope.c
    model/item_shipping_policy_dto_list_envelope.c
    model/item_tag_create_dto.c
    model/item_tag_dto.c
    model/item_tag_dto_envelope.c
    model/item_tag_dto_list_envelope.c
    model/item_tag_update_dto.c
    model/item_tax_policy_dto.c
    model/item_tax_policy_dto_envelope.c
    model/item_tax_policy_dto_list_envelope.c
    model/item_type_create_dto.c
    model/item_type_dto.c
    model/item_type_dto_envelope.c
    model/item_type_dto_list_envelope.c
    model/item_type_update_dto.c
    model/item_warranty_policy_dto.c
    model/item_warranty_policy_dto_envelope.c
    model/item_warranty_policy_dto_list_envelope.c
    model/login_request.c
    model/merchant_dto.c
    model/merchant_dto_envelope.c
    model/merchant_dto_list_envelope.c
    model/money.c
    model/money_envelope.c
    model/pricing_rule_create_dto.c
    model/pricing_rule_dto.c
    model/pricing_rule_dto_envelope.c
    model/pricing_rule_dto_list_envelope.c
    model/pricing_rule_update_dto.c
    model/refresh_request.c
    model/register_request.c
    model/resend_confirmation_email_request.c
    model/reset_password_request.c
    model/two_factor_request.c
    model/two_factor_response.c
    model/update_product_primary_image_async_request.c
    api/FenixAllianceABPWebAPI.c
    api/ItemAttachmentsAPI.c
    api/ItemAttributesAPI.c
    api/ItemBrandsAPI.c
    api/ItemCategoriesAPI.c
    api/ItemGoogleCategoriesAPI.c
    api/ItemImagesAPI.c
    api/ItemQuestionsAPI.c
    api/ItemRefundPoliciesAPI.c
    api/ItemReturnPoliciesAPI.c
    api/ItemReviewsAPI.c
    api/ItemShippingPoliciesAPI.c
    api/ItemTagsAPI.c
    api/ItemTaxPoliciesAPI.c
    api/ItemTypesAPI.c
    api/ItemWarrantyPoliciesAPI.c
    api/ItemsAPI.c
    api/MerchantsAPI.c
    api/PricingRulesAPI.c

)

set(HDRS
    include/apiClient.h
    include/list.h
    include/binary.h
    include/keyValuePair.h
    external/cJSON.h
    model/object.h
    model/access_token_response.h
    model/catalog_item_create_dto.h
    model/catalog_item_dto.h
    model/catalog_item_dto_envelope.h
    model/catalog_item_dto_list_envelope.h
    model/catalog_item_update_dto.h
    model/currency_id.h
    model/empty_envelope.h
    model/error_envelope.h
    model/forgot_password_request.h
    model/http_validation_problem_details.h
    model/info_request.h
    model/info_response.h
    model/int32_envelope.h
    model/item_attachment_create_dto.h
    model/item_attachment_dto.h
    model/item_attachment_dto_envelope.h
    model/item_attachment_dto_list_envelope.h
    model/item_attachment_update_dto.h
    model/item_attribute_create_dto.h
    model/item_attribute_dto.h
    model/item_attribute_dto_envelope.h
    model/item_attribute_dto_list_envelope.h
    model/item_attribute_option_dto.h
    model/item_attribute_option_dto_envelope.h
    model/item_attribute_option_dto_list_envelope.h
    model/item_attribute_update_dto.h
    model/item_brand_create_dto.h
    model/item_brand_dto.h
    model/item_brand_dto_envelope.h
    model/item_brand_dto_list_envelope.h
    model/item_brand_update_dto.h
    model/item_category_create_dto.h
    model/item_category_dto.h
    model/item_category_dto_envelope.h
    model/item_category_dto_list_envelope.h
    model/item_category_update_dto.h
    model/item_google_category_dto.h
    model/item_google_category_dto_envelope.h
    model/item_google_category_dto_list_envelope.h
    model/item_image_create_dto.h
    model/item_image_dto.h
    model/item_image_dto_envelope.h
    model/item_image_dto_list_envelope.h
    model/item_image_update_dto.h
    model/item_question_create_dto.h
    model/item_question_dto.h
    model/item_question_dto_envelope.h
    model/item_question_dto_list_envelope.h
    model/item_question_record_create_dto.h
    model/item_question_update_dto.h
    model/item_refund_policy_dto.h
    model/item_refund_policy_dto_envelope.h
    model/item_refund_policy_dto_list_envelope.h
    model/item_return_policy_dto.h
    model/item_return_policy_dto_envelope.h
    model/item_return_policy_dto_list_envelope.h
    model/item_review_create_dto.h
    model/item_review_dto.h
    model/item_review_dto_envelope.h
    model/item_review_dto_list_envelope.h
    model/item_review_record_create_dto.h
    model/item_review_update_dto.h
    model/item_shipping_policy_dto.h
    model/item_shipping_policy_dto_envelope.h
    model/item_shipping_policy_dto_list_envelope.h
    model/item_tag_create_dto.h
    model/item_tag_dto.h
    model/item_tag_dto_envelope.h
    model/item_tag_dto_list_envelope.h
    model/item_tag_update_dto.h
    model/item_tax_policy_dto.h
    model/item_tax_policy_dto_envelope.h
    model/item_tax_policy_dto_list_envelope.h
    model/item_type_create_dto.h
    model/item_type_dto.h
    model/item_type_dto_envelope.h
    model/item_type_dto_list_envelope.h
    model/item_type_update_dto.h
    model/item_warranty_policy_dto.h
    model/item_warranty_policy_dto_envelope.h
    model/item_warranty_policy_dto_list_envelope.h
    model/login_request.h
    model/merchant_dto.h
    model/merchant_dto_envelope.h
    model/merchant_dto_list_envelope.h
    model/money.h
    model/money_envelope.h
    model/pricing_rule_create_dto.h
    model/pricing_rule_dto.h
    model/pricing_rule_dto_envelope.h
    model/pricing_rule_dto_list_envelope.h
    model/pricing_rule_update_dto.h
    model/refresh_request.h
    model/register_request.h
    model/resend_confirmation_email_request.h
    model/reset_password_request.h
    model/two_factor_request.h
    model/two_factor_response.h
    model/update_product_primary_image_async_request.h
    api/FenixAllianceABPWebAPI.h
    api/ItemAttachmentsAPI.h
    api/ItemAttributesAPI.h
    api/ItemBrandsAPI.h
    api/ItemCategoriesAPI.h
    api/ItemGoogleCategoriesAPI.h
    api/ItemImagesAPI.h
    api/ItemQuestionsAPI.h
    api/ItemRefundPoliciesAPI.h
    api/ItemReturnPoliciesAPI.h
    api/ItemReviewsAPI.h
    api/ItemShippingPoliciesAPI.h
    api/ItemTagsAPI.h
    api/ItemTaxPoliciesAPI.h
    api/ItemTypesAPI.h
    api/ItemWarrantyPoliciesAPI.h
    api/ItemsAPI.h
    api/MerchantsAPI.h
    api/PricingRulesAPI.h

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
#    unit-tests/manual-FenixAllianceABPWebAPI.c
#    unit-tests/manual-ItemAttachmentsAPI.c
#    unit-tests/manual-ItemAttributesAPI.c
#    unit-tests/manual-ItemBrandsAPI.c
#    unit-tests/manual-ItemCategoriesAPI.c
#    unit-tests/manual-ItemGoogleCategoriesAPI.c
#    unit-tests/manual-ItemImagesAPI.c
#    unit-tests/manual-ItemQuestionsAPI.c
#    unit-tests/manual-ItemRefundPoliciesAPI.c
#    unit-tests/manual-ItemReturnPoliciesAPI.c
#    unit-tests/manual-ItemReviewsAPI.c
#    unit-tests/manual-ItemShippingPoliciesAPI.c
#    unit-tests/manual-ItemTagsAPI.c
#    unit-tests/manual-ItemTaxPoliciesAPI.c
#    unit-tests/manual-ItemTypesAPI.c
#    unit-tests/manual-ItemWarrantyPoliciesAPI.c
#    unit-tests/manual-ItemsAPI.c
#    unit-tests/manual-MerchantsAPI.c
#    unit-tests/manual-PricingRulesAPI.c
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
