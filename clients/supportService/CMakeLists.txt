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

set(pkgName "supportservice")

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
    model/empty_envelope.c
    model/error_envelope.c
    model/forgot_password_request.c
    model/http_validation_problem_details.c
    model/info_request.c
    model/info_response.c
    model/inquiry_request_create_dto.c
    model/inquiry_request_dto.c
    model/inquiry_request_dto_collection_query_parameters.c
    model/inquiry_request_dto_envelope.c
    model/inquiry_request_dto_list_envelope.c
    model/inquiry_request_update_dto.c
    model/int32_envelope.c
    model/item_refund_policy_create_dto.c
    model/item_refund_policy_dto.c
    model/item_refund_policy_dto_collection_query_parameters.c
    model/item_refund_policy_dto_envelope.c
    model/item_refund_policy_dto_list_envelope.c
    model/item_refund_policy_update_dto.c
    model/item_return_policy_create_dto.c
    model/item_return_policy_dto.c
    model/item_return_policy_dto_collection_query_parameters.c
    model/item_return_policy_dto_envelope.c
    model/item_return_policy_dto_list_envelope.c
    model/item_return_policy_update_dto.c
    model/item_warranty_policy_create_dto.c
    model/item_warranty_policy_dto.c
    model/item_warranty_policy_dto_collection_query_parameters.c
    model/item_warranty_policy_dto_envelope.c
    model/item_warranty_policy_dto_list_envelope.c
    model/item_warranty_policy_update_dto.c
    model/knowledge_article_create_dto.c
    model/knowledge_article_dto.c
    model/knowledge_article_dto_collection_query_parameters.c
    model/knowledge_article_dto_envelope.c
    model/knowledge_article_dto_list_envelope.c
    model/knowledge_article_update_dto.c
    model/login_request.c
    model/maintenance_visit_create_dto.c
    model/maintenance_visit_dto.c
    model/maintenance_visit_dto_collection_query_parameters.c
    model/maintenance_visit_dto_envelope.c
    model/maintenance_visit_dto_list_envelope.c
    model/patch_operation.c
    model/private_message_dto.c
    model/private_message_dto_list_envelope.c
    model/refresh_request.c
    model/refund_request_create_dto.c
    model/refund_request_dto.c
    model/refund_request_dto_collection_query_parameters.c
    model/refund_request_dto_envelope.c
    model/refund_request_dto_list_envelope.c
    model/refund_request_update_dto.c
    model/register_request.c
    model/resend_confirmation_email_request.c
    model/reset_password_request.c
    model/return_request_create_dto.c
    model/return_request_dto.c
    model/return_request_dto_collection_query_parameters.c
    model/return_request_dto_envelope.c
    model/return_request_dto_list_envelope.c
    model/return_request_update_dto.c
    model/support_entitlement_create_dto.c
    model/support_entitlement_dto.c
    model/support_entitlement_dto_collection_query_parameters.c
    model/support_entitlement_dto_envelope.c
    model/support_entitlement_dto_list_envelope.c
    model/support_entitlement_update_dto.c
    model/support_request_attachment_create_dto.c
    model/support_request_attachment_dto.c
    model/support_request_attachment_dto_collection_query_parameters.c
    model/support_request_attachment_dto_envelope.c
    model/support_request_attachment_dto_list_envelope.c
    model/support_request_attachment_update_dto.c
    model/support_request_create_dto.c
    model/support_request_dto.c
    model/support_request_dto_collection_query_parameters.c
    model/support_request_dto_envelope.c
    model/support_request_dto_list_envelope.c
    model/support_request_update_dto.c
    model/support_ticket_conversation_create_dto.c
    model/support_ticket_conversation_dto.c
    model/support_ticket_conversation_dto_collection_query_parameters.c
    model/support_ticket_conversation_dto_envelope.c
    model/support_ticket_conversation_dto_list_envelope.c
    model/support_ticket_create_dto.c
    model/support_ticket_dto.c
    model/support_ticket_dto_collection_query_parameters.c
    model/support_ticket_dto_envelope.c
    model/support_ticket_dto_list_envelope.c
    model/support_ticket_priority_create_dto.c
    model/support_ticket_priority_dto.c
    model/support_ticket_priority_dto_collection_query_parameters.c
    model/support_ticket_priority_dto_envelope.c
    model/support_ticket_priority_dto_list_envelope.c
    model/support_ticket_priority_update_dto.c
    model/support_ticket_type_create_dto.c
    model/support_ticket_type_dto.c
    model/support_ticket_type_dto_collection_query_parameters.c
    model/support_ticket_type_dto_envelope.c
    model/support_ticket_type_dto_list_envelope.c
    model/support_ticket_type_update_dto.c
    model/support_ticket_update_dto.c
    model/two_factor_request.c
    model/two_factor_response.c
    model/warranty_request_create_dto.c
    model/warranty_request_dto.c
    model/warranty_request_dto_collection_query_parameters.c
    model/warranty_request_dto_envelope.c
    model/warranty_request_dto_list_envelope.c
    model/warranty_request_update_dto.c
    api/FenixAllianceABSWebAPI.c
    api/InquiryRequestsAPI.c
    api/KnowledgeArticlesAPI.c
    api/MaintenanceVisitsAPI.c
    api/RefundPoliciesAPI.c
    api/RefundRequestsAPI.c
    api/ReturnPoliciesAPI.c
    api/ReturnRequestsAPI.c
    api/SupportEntitlementsAPI.c
    api/SupportRequestAttachmentsAPI.c
    api/SupportRequestsAPI.c
    api/SupportTicketPrioritiesAPI.c
    api/SupportTicketTypesAPI.c
    api/SupportTicketsAPI.c
    api/WarrantyPoliciesAPI.c
    api/WarrantyRequestsAPI.c

)

set(HDRS
    include/apiClient.h
    include/list.h
    include/binary.h
    include/keyValuePair.h
    external/cJSON.h
    model/object.h
    model/access_token_response.h
    model/empty_envelope.h
    model/error_envelope.h
    model/forgot_password_request.h
    model/http_validation_problem_details.h
    model/info_request.h
    model/info_response.h
    model/inquiry_request_create_dto.h
    model/inquiry_request_dto.h
    model/inquiry_request_dto_collection_query_parameters.h
    model/inquiry_request_dto_envelope.h
    model/inquiry_request_dto_list_envelope.h
    model/inquiry_request_update_dto.h
    model/int32_envelope.h
    model/item_refund_policy_create_dto.h
    model/item_refund_policy_dto.h
    model/item_refund_policy_dto_collection_query_parameters.h
    model/item_refund_policy_dto_envelope.h
    model/item_refund_policy_dto_list_envelope.h
    model/item_refund_policy_update_dto.h
    model/item_return_policy_create_dto.h
    model/item_return_policy_dto.h
    model/item_return_policy_dto_collection_query_parameters.h
    model/item_return_policy_dto_envelope.h
    model/item_return_policy_dto_list_envelope.h
    model/item_return_policy_update_dto.h
    model/item_warranty_policy_create_dto.h
    model/item_warranty_policy_dto.h
    model/item_warranty_policy_dto_collection_query_parameters.h
    model/item_warranty_policy_dto_envelope.h
    model/item_warranty_policy_dto_list_envelope.h
    model/item_warranty_policy_update_dto.h
    model/knowledge_article_create_dto.h
    model/knowledge_article_dto.h
    model/knowledge_article_dto_collection_query_parameters.h
    model/knowledge_article_dto_envelope.h
    model/knowledge_article_dto_list_envelope.h
    model/knowledge_article_update_dto.h
    model/login_request.h
    model/maintenance_visit_create_dto.h
    model/maintenance_visit_dto.h
    model/maintenance_visit_dto_collection_query_parameters.h
    model/maintenance_visit_dto_envelope.h
    model/maintenance_visit_dto_list_envelope.h
    model/patch_operation.h
    model/private_message_dto.h
    model/private_message_dto_list_envelope.h
    model/refresh_request.h
    model/refund_request_create_dto.h
    model/refund_request_dto.h
    model/refund_request_dto_collection_query_parameters.h
    model/refund_request_dto_envelope.h
    model/refund_request_dto_list_envelope.h
    model/refund_request_update_dto.h
    model/register_request.h
    model/resend_confirmation_email_request.h
    model/reset_password_request.h
    model/return_request_create_dto.h
    model/return_request_dto.h
    model/return_request_dto_collection_query_parameters.h
    model/return_request_dto_envelope.h
    model/return_request_dto_list_envelope.h
    model/return_request_update_dto.h
    model/support_entitlement_create_dto.h
    model/support_entitlement_dto.h
    model/support_entitlement_dto_collection_query_parameters.h
    model/support_entitlement_dto_envelope.h
    model/support_entitlement_dto_list_envelope.h
    model/support_entitlement_update_dto.h
    model/support_request_attachment_create_dto.h
    model/support_request_attachment_dto.h
    model/support_request_attachment_dto_collection_query_parameters.h
    model/support_request_attachment_dto_envelope.h
    model/support_request_attachment_dto_list_envelope.h
    model/support_request_attachment_update_dto.h
    model/support_request_create_dto.h
    model/support_request_dto.h
    model/support_request_dto_collection_query_parameters.h
    model/support_request_dto_envelope.h
    model/support_request_dto_list_envelope.h
    model/support_request_update_dto.h
    model/support_ticket_conversation_create_dto.h
    model/support_ticket_conversation_dto.h
    model/support_ticket_conversation_dto_collection_query_parameters.h
    model/support_ticket_conversation_dto_envelope.h
    model/support_ticket_conversation_dto_list_envelope.h
    model/support_ticket_create_dto.h
    model/support_ticket_dto.h
    model/support_ticket_dto_collection_query_parameters.h
    model/support_ticket_dto_envelope.h
    model/support_ticket_dto_list_envelope.h
    model/support_ticket_priority_create_dto.h
    model/support_ticket_priority_dto.h
    model/support_ticket_priority_dto_collection_query_parameters.h
    model/support_ticket_priority_dto_envelope.h
    model/support_ticket_priority_dto_list_envelope.h
    model/support_ticket_priority_update_dto.h
    model/support_ticket_type_create_dto.h
    model/support_ticket_type_dto.h
    model/support_ticket_type_dto_collection_query_parameters.h
    model/support_ticket_type_dto_envelope.h
    model/support_ticket_type_dto_list_envelope.h
    model/support_ticket_type_update_dto.h
    model/support_ticket_update_dto.h
    model/two_factor_request.h
    model/two_factor_response.h
    model/warranty_request_create_dto.h
    model/warranty_request_dto.h
    model/warranty_request_dto_collection_query_parameters.h
    model/warranty_request_dto_envelope.h
    model/warranty_request_dto_list_envelope.h
    model/warranty_request_update_dto.h
    api/FenixAllianceABSWebAPI.h
    api/InquiryRequestsAPI.h
    api/KnowledgeArticlesAPI.h
    api/MaintenanceVisitsAPI.h
    api/RefundPoliciesAPI.h
    api/RefundRequestsAPI.h
    api/ReturnPoliciesAPI.h
    api/ReturnRequestsAPI.h
    api/SupportEntitlementsAPI.h
    api/SupportRequestAttachmentsAPI.h
    api/SupportRequestsAPI.h
    api/SupportTicketPrioritiesAPI.h
    api/SupportTicketTypesAPI.h
    api/SupportTicketsAPI.h
    api/WarrantyPoliciesAPI.h
    api/WarrantyRequestsAPI.h

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
#    unit-tests/manual-FenixAllianceABSWebAPI.c
#    unit-tests/manual-InquiryRequestsAPI.c
#    unit-tests/manual-KnowledgeArticlesAPI.c
#    unit-tests/manual-MaintenanceVisitsAPI.c
#    unit-tests/manual-RefundPoliciesAPI.c
#    unit-tests/manual-RefundRequestsAPI.c
#    unit-tests/manual-ReturnPoliciesAPI.c
#    unit-tests/manual-ReturnRequestsAPI.c
#    unit-tests/manual-SupportEntitlementsAPI.c
#    unit-tests/manual-SupportRequestAttachmentsAPI.c
#    unit-tests/manual-SupportRequestsAPI.c
#    unit-tests/manual-SupportTicketPrioritiesAPI.c
#    unit-tests/manual-SupportTicketTypesAPI.c
#    unit-tests/manual-SupportTicketsAPI.c
#    unit-tests/manual-WarrantyPoliciesAPI.c
#    unit-tests/manual-WarrantyRequestsAPI.c
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
