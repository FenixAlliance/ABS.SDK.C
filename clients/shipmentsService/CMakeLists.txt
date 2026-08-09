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

set(pkgName "shipmentsservice")

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
    model/bill_of_lading_create_dto.c
    model/bill_of_lading_dto.c
    model/bill_of_lading_dto_collection_query_parameters.c
    model/bill_of_lading_dto_envelope.c
    model/bill_of_lading_dto_list_envelope.c
    model/bill_of_lading_line_create_dto.c
    model/bill_of_lading_line_dto.c
    model/bill_of_lading_line_dto_collection_query_parameters.c
    model/bill_of_lading_line_dto_envelope.c
    model/bill_of_lading_line_dto_list_envelope.c
    model/bill_of_lading_line_update_dto.c
    model/bill_of_lading_update_dto.c
    model/empty_envelope.c
    model/error_envelope.c
    model/forgot_password_request.c
    model/http_validation_problem_details.c
    model/info_request.c
    model/info_response.c
    model/int32_envelope.c
    model/item_shipping_policy_create_dto.c
    model/item_shipping_policy_dto.c
    model/item_shipping_policy_dto_collection_query_parameters.c
    model/item_shipping_policy_dto_envelope.c
    model/item_shipping_policy_dto_list_envelope.c
    model/item_shipping_policy_update_dto.c
    model/login_request.c
    model/patch_operation.c
    model/refresh_request.c
    model/register_request.c
    model/resend_confirmation_email_request.c
    model/reset_password_request.c
    model/shipment_create_dto.c
    model/shipment_dto.c
    model/shipment_dto_collection_query_parameters.c
    model/shipment_dto_envelope.c
    model/shipment_dto_list_envelope.c
    model/shipment_update_dto.c
    model/shipping_class_create_dto.c
    model/shipping_class_dto.c
    model/shipping_class_dto_collection_query_parameters.c
    model/shipping_class_dto_envelope.c
    model/shipping_class_dto_list_envelope.c
    model/shipping_class_update_dto.c
    model/shipping_courier_create_dto.c
    model/shipping_courier_dto.c
    model/shipping_courier_dto_collection_query_parameters.c
    model/shipping_courier_dto_envelope.c
    model/shipping_courier_dto_list_envelope.c
    model/shipping_courier_update_dto.c
    model/shipping_label_create_dto.c
    model/shipping_label_dto.c
    model/shipping_label_dto_collection_query_parameters.c
    model/shipping_label_dto_envelope.c
    model/shipping_label_dto_list_envelope.c
    model/shipping_label_update_dto.c
    model/shipping_method_create_dto.c
    model/shipping_method_dto.c
    model/shipping_method_dto_collection_query_parameters.c
    model/shipping_method_dto_envelope.c
    model/shipping_method_dto_list_envelope.c
    model/shipping_method_update_dto.c
    model/shipping_region_create_dto.c
    model/shipping_region_dto.c
    model/shipping_region_dto_collection_query_parameters.c
    model/shipping_region_dto_envelope.c
    model/shipping_region_dto_list_envelope.c
    model/shipping_region_update_dto.c
    model/shipping_zone_create_dto.c
    model/shipping_zone_dto.c
    model/shipping_zone_dto_collection_query_parameters.c
    model/shipping_zone_dto_envelope.c
    model/shipping_zone_dto_list_envelope.c
    model/shipping_zone_update_dto.c
    model/two_factor_request.c
    model/two_factor_response.c
    api/BillsOfLadingAPI.c
    api/FenixAllianceABSWebAPI.c
    api/ItemShippingPoliciesAPI.c
    api/ShipmentsAPI.c
    api/ShippingClassesAPI.c
    api/ShippingCouriersAPI.c
    api/ShippingLabelsAPI.c
    api/ShippingMethodsAPI.c
    api/ShippingRegionsAPI.c
    api/ShippingZonesAPI.c

)

set(HDRS
    include/apiClient.h
    include/list.h
    include/binary.h
    include/keyValuePair.h
    external/cJSON.h
    model/object.h
    model/access_token_response.h
    model/bill_of_lading_create_dto.h
    model/bill_of_lading_dto.h
    model/bill_of_lading_dto_collection_query_parameters.h
    model/bill_of_lading_dto_envelope.h
    model/bill_of_lading_dto_list_envelope.h
    model/bill_of_lading_line_create_dto.h
    model/bill_of_lading_line_dto.h
    model/bill_of_lading_line_dto_collection_query_parameters.h
    model/bill_of_lading_line_dto_envelope.h
    model/bill_of_lading_line_dto_list_envelope.h
    model/bill_of_lading_line_update_dto.h
    model/bill_of_lading_update_dto.h
    model/empty_envelope.h
    model/error_envelope.h
    model/forgot_password_request.h
    model/http_validation_problem_details.h
    model/info_request.h
    model/info_response.h
    model/int32_envelope.h
    model/item_shipping_policy_create_dto.h
    model/item_shipping_policy_dto.h
    model/item_shipping_policy_dto_collection_query_parameters.h
    model/item_shipping_policy_dto_envelope.h
    model/item_shipping_policy_dto_list_envelope.h
    model/item_shipping_policy_update_dto.h
    model/login_request.h
    model/patch_operation.h
    model/refresh_request.h
    model/register_request.h
    model/resend_confirmation_email_request.h
    model/reset_password_request.h
    model/shipment_create_dto.h
    model/shipment_dto.h
    model/shipment_dto_collection_query_parameters.h
    model/shipment_dto_envelope.h
    model/shipment_dto_list_envelope.h
    model/shipment_update_dto.h
    model/shipping_class_create_dto.h
    model/shipping_class_dto.h
    model/shipping_class_dto_collection_query_parameters.h
    model/shipping_class_dto_envelope.h
    model/shipping_class_dto_list_envelope.h
    model/shipping_class_update_dto.h
    model/shipping_courier_create_dto.h
    model/shipping_courier_dto.h
    model/shipping_courier_dto_collection_query_parameters.h
    model/shipping_courier_dto_envelope.h
    model/shipping_courier_dto_list_envelope.h
    model/shipping_courier_update_dto.h
    model/shipping_label_create_dto.h
    model/shipping_label_dto.h
    model/shipping_label_dto_collection_query_parameters.h
    model/shipping_label_dto_envelope.h
    model/shipping_label_dto_list_envelope.h
    model/shipping_label_update_dto.h
    model/shipping_method_create_dto.h
    model/shipping_method_dto.h
    model/shipping_method_dto_collection_query_parameters.h
    model/shipping_method_dto_envelope.h
    model/shipping_method_dto_list_envelope.h
    model/shipping_method_update_dto.h
    model/shipping_region_create_dto.h
    model/shipping_region_dto.h
    model/shipping_region_dto_collection_query_parameters.h
    model/shipping_region_dto_envelope.h
    model/shipping_region_dto_list_envelope.h
    model/shipping_region_update_dto.h
    model/shipping_zone_create_dto.h
    model/shipping_zone_dto.h
    model/shipping_zone_dto_collection_query_parameters.h
    model/shipping_zone_dto_envelope.h
    model/shipping_zone_dto_list_envelope.h
    model/shipping_zone_update_dto.h
    model/two_factor_request.h
    model/two_factor_response.h
    api/BillsOfLadingAPI.h
    api/FenixAllianceABSWebAPI.h
    api/ItemShippingPoliciesAPI.h
    api/ShipmentsAPI.h
    api/ShippingClassesAPI.h
    api/ShippingCouriersAPI.h
    api/ShippingLabelsAPI.h
    api/ShippingMethodsAPI.h
    api/ShippingRegionsAPI.h
    api/ShippingZonesAPI.h

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
#    unit-tests/manual-BillsOfLadingAPI.c
#    unit-tests/manual-FenixAllianceABSWebAPI.c
#    unit-tests/manual-ItemShippingPoliciesAPI.c
#    unit-tests/manual-ShipmentsAPI.c
#    unit-tests/manual-ShippingClassesAPI.c
#    unit-tests/manual-ShippingCouriersAPI.c
#    unit-tests/manual-ShippingLabelsAPI.c
#    unit-tests/manual-ShippingMethodsAPI.c
#    unit-tests/manual-ShippingRegionsAPI.c
#    unit-tests/manual-ShippingZonesAPI.c
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
