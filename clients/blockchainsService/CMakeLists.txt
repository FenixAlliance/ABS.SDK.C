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

set(pkgName "blockchainsservice")

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
    model/apply_clause.c
    model/apply_query_option.c
    model/asn_encoded_data.c
    model/assembly.c
    model/asymmetric_algorithm.c
    model/blockchain_block_create_dto.c
    model/blockchain_block_dto.c
    model/blockchain_block_dto_e_tag.c
    model/blockchain_block_dto_list_envelope.c
    model/blockchain_block_dto_o_data_query_options.c
    model/blockchain_block_update_dto.c
    model/blockchain_create_dto.c
    model/blockchain_dto.c
    model/blockchain_dto_e_tag.c
    model/blockchain_dto_list_envelope.c
    model/blockchain_dto_o_data_query_options.c
    model/blockchain_update_dto.c
    model/byte_read_only_memory.c
    model/byte_read_only_span.c
    model/cancellation_token.c
    model/claim.c
    model/claims_identity.c
    model/claims_principal.c
    model/compute_clause.c
    model/compute_expression.c
    model/compute_query_option.c
    model/connection_info.c
    model/constructor_info.c
    model/count_query_option.c
    model/custom_attribute_data.c
    model/custom_attribute_named_argument.c
    model/custom_attribute_typed_argument.c
    model/default_query_configurations.c
    model/e_tag.c
    model/edm_referential_constraint_property_pair.c
    model/empty_envelope.c
    model/error_envelope.c
    model/event_info.c
    model/field_info.c
    model/filter_clause.c
    model/filter_query_option.c
    model/forgot_password_request.c
    model/host_string.c
    model/http_context.c
    model/http_request.c
    model/http_response.c
    model/http_validation_problem_details.c
    model/i_edm_entity_container.c
    model/i_edm_entity_container_element.c
    model/i_edm_entity_type.c
    model/i_edm_expression.c
    model/i_edm_model.c
    model/i_edm_navigation_property.c
    model/i_edm_navigation_property_binding.c
    model/i_edm_navigation_source.c
    model/i_edm_path_expression.c
    model/i_edm_property.c
    model/i_edm_referential_constraint.c
    model/i_edm_schema_element.c
    model/i_edm_structural_property.c
    model/i_edm_structured_type.c
    model/i_edm_term.c
    model/i_edm_type.c
    model/i_edm_type_reference.c
    model/i_edm_vocabulary_annotation.c
    model/i_identity.c
    model/i_session.c
    model/info_request.c
    model/info_response.c
    model/int32_envelope.c
    model/ip_address.c
    model/key_sizes.c
    model/login_request.c
    model/member_info.c
    model/method_base.c
    model/method_info.c
    model/module.c
    model/module_handle.c
    model/non_fungible_token_create_dto.c
    model/non_fungible_token_dto.c
    model/non_fungible_token_dto_e_tag.c
    model/non_fungible_token_dto_list_envelope.c
    model/non_fungible_token_dto_o_data_query_options.c
    model/non_fungible_token_update_dto.c
    model/o_data_path_segment.c
    model/o_data_query_context.c
    model/o_data_raw_query_options.c
    model/oid.c
    model/operation.c
    model/order_by_clause.c
    model/order_by_node.c
    model/order_by_query_option.c
    model/parameter_info.c
    model/path_string.c
    model/pipe_writer.c
    model/property_info.c
    model/public_key.c
    model/query_string.c
    model/range_variable.c
    model/refresh_request.c
    model/register_request.c
    model/resend_confirmation_email_request.c
    model/reset_password_request.c
    model/runtime_field_handle.c
    model/runtime_method_handle.c
    model/runtime_type_handle.c
    model/safe_wait_handle.c
    model/search_clause.c
    model/search_query_option.c
    model/select_expand_clause.c
    model/select_expand_query_option.c
    model/single_value_node.c
    model/skip_query_option.c
    model/skip_token_query_option.c
    model/string_string_key_value_pair.c
    model/string_string_values_key_value_pair.c
    model/struct_layout_attribute.c
    model/top_query_option.c
    model/transformation_node.c
    model/two_factor_request.c
    model/two_factor_response.c
    model/type.c
    model/type_info.c
    model/type_object_key_value_pair.c
    model/wait_handle.c
    model/web_socket_manager.c
    model/x500_distinguished_name.c
    model/x509_certificate2.c
    model/x509_extension.c
    api/BlockchainsAPI.c
    api/CompletionsAPI.c
    api/FenixAlliancePortalsWebsiteAPI.c
    api/NonFungibleTokensAPI.c

)

set(HDRS
    include/apiClient.h
    include/list.h
    include/binary.h
    include/keyValuePair.h
    external/cJSON.h
    model/object.h
    model/access_token_response.h
    model/apply_clause.h
    model/apply_query_option.h
    model/asn_encoded_data.h
    model/assembly.h
    model/asymmetric_algorithm.h
    model/blockchain_block_create_dto.h
    model/blockchain_block_dto.h
    model/blockchain_block_dto_e_tag.h
    model/blockchain_block_dto_list_envelope.h
    model/blockchain_block_dto_o_data_query_options.h
    model/blockchain_block_update_dto.h
    model/blockchain_create_dto.h
    model/blockchain_dto.h
    model/blockchain_dto_e_tag.h
    model/blockchain_dto_list_envelope.h
    model/blockchain_dto_o_data_query_options.h
    model/blockchain_update_dto.h
    model/byte_read_only_memory.h
    model/byte_read_only_span.h
    model/cancellation_token.h
    model/claim.h
    model/claims_identity.h
    model/claims_principal.h
    model/compute_clause.h
    model/compute_expression.h
    model/compute_query_option.h
    model/connection_info.h
    model/constructor_info.h
    model/count_query_option.h
    model/custom_attribute_data.h
    model/custom_attribute_named_argument.h
    model/custom_attribute_typed_argument.h
    model/default_query_configurations.h
    model/e_tag.h
    model/edm_referential_constraint_property_pair.h
    model/empty_envelope.h
    model/error_envelope.h
    model/event_info.h
    model/field_info.h
    model/filter_clause.h
    model/filter_query_option.h
    model/forgot_password_request.h
    model/host_string.h
    model/http_context.h
    model/http_request.h
    model/http_response.h
    model/http_validation_problem_details.h
    model/i_edm_entity_container.h
    model/i_edm_entity_container_element.h
    model/i_edm_entity_type.h
    model/i_edm_expression.h
    model/i_edm_model.h
    model/i_edm_navigation_property.h
    model/i_edm_navigation_property_binding.h
    model/i_edm_navigation_source.h
    model/i_edm_path_expression.h
    model/i_edm_property.h
    model/i_edm_referential_constraint.h
    model/i_edm_schema_element.h
    model/i_edm_structural_property.h
    model/i_edm_structured_type.h
    model/i_edm_term.h
    model/i_edm_type.h
    model/i_edm_type_reference.h
    model/i_edm_vocabulary_annotation.h
    model/i_identity.h
    model/i_session.h
    model/info_request.h
    model/info_response.h
    model/int32_envelope.h
    model/ip_address.h
    model/key_sizes.h
    model/login_request.h
    model/member_info.h
    model/method_base.h
    model/method_info.h
    model/module.h
    model/module_handle.h
    model/non_fungible_token_create_dto.h
    model/non_fungible_token_dto.h
    model/non_fungible_token_dto_e_tag.h
    model/non_fungible_token_dto_list_envelope.h
    model/non_fungible_token_dto_o_data_query_options.h
    model/non_fungible_token_update_dto.h
    model/o_data_path_segment.h
    model/o_data_query_context.h
    model/o_data_raw_query_options.h
    model/oid.h
    model/operation.h
    model/order_by_clause.h
    model/order_by_node.h
    model/order_by_query_option.h
    model/parameter_info.h
    model/path_string.h
    model/pipe_writer.h
    model/property_info.h
    model/public_key.h
    model/query_string.h
    model/range_variable.h
    model/refresh_request.h
    model/register_request.h
    model/resend_confirmation_email_request.h
    model/reset_password_request.h
    model/runtime_field_handle.h
    model/runtime_method_handle.h
    model/runtime_type_handle.h
    model/safe_wait_handle.h
    model/search_clause.h
    model/search_query_option.h
    model/select_expand_clause.h
    model/select_expand_query_option.h
    model/single_value_node.h
    model/skip_query_option.h
    model/skip_token_query_option.h
    model/string_string_key_value_pair.h
    model/string_string_values_key_value_pair.h
    model/struct_layout_attribute.h
    model/top_query_option.h
    model/transformation_node.h
    model/two_factor_request.h
    model/two_factor_response.h
    model/type.h
    model/type_info.h
    model/type_object_key_value_pair.h
    model/wait_handle.h
    model/web_socket_manager.h
    model/x500_distinguished_name.h
    model/x509_certificate2.h
    model/x509_extension.h
    api/BlockchainsAPI.h
    api/CompletionsAPI.h
    api/FenixAlliancePortalsWebsiteAPI.h
    api/NonFungibleTokensAPI.h

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
#    unit-tests/manual-BlockchainsAPI.c
#    unit-tests/manual-CompletionsAPI.c
#    unit-tests/manual-FenixAlliancePortalsWebsiteAPI.c
#    unit-tests/manual-NonFungibleTokensAPI.c
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
